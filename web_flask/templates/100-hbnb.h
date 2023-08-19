<!DOCTYPE html>
<html lang="en">
    <head>
        <title>AirBnB Clone</title>
        <link rel="stylesheet" href="static/styles/4-common.css">
        <link rel="stylesheet" href="static/styles/3-footer.css">
        <link rel="stylesheet" href="static/styles/3-header.css">
        <link rel="stylesheet" href="static/styles/6-filters.css">
        <link rel="stylesheet" href="static/styles/8-places.css">
        <meta name="viewport" content="width=device-width,initial-scale=1">
        <link rel="shortcut icon" href="static/images/icon.png">

    </head>
    <body>
        <header>
            
        </header>
        <div class="container">
            <section class="filters">  
                    <div class="locations">
                        <div class="locationpres">
                            <h3>States</h3>
                            <h4>California, Arizona...</h4>
                        </div>
                        <ul class="popover">
                        {% for k, v_state in states.items()|sort %}
                            <li><h2>{{ v_state.name }}</h2>
                                <ul>
                                    {% for city in v_state.cities %}
                                        <li><h4>{{ city.name}}</h4></li>
                                    {% endfor %}
                                </ul></li>
                        {% endfor %}
                        </ul>
                    </div>
                    <div class="amenities">
                        <div class="amenitiespre">
                            <h3>Amenities</h3>
                            <h4>Internet, Kitchen...</h4>
                        </div>
                        <ul class="popover">
                            {% for k, v_amenities in amenities.items()|sort %}
                                <li><h4>{{ v_amenities.name }}</h4></li>
                            {% endfor %}
                        </ul>
                    </div>
                    <button>Search</button>
            </section>
            <section class="places">
                <h1>Places</h1>
                <div class="art_text">
                    {% for k, v_place in places.items()|sort(attribute='1.name') %}
                        <article>
                            <div class="price_and_name">
                                <h2>{{ v_place.name }}</h2>
                                <div class="price_by_night">
                                    <p>${{ v_place.price_by_night }}</p>
                                </div>
                            </div>
                            <div class="information">
                                <div class="max_guest">
                                    <p>{{ v_place.max_guest}} Guest</p>
                                </div>
                                <div class="number_rooms">
                                    <p>{{ v_place.number_rooms}} Room</p>
                                </div>
                                <div class="number_bathrooms">
                                    <p>{{ v_place.number_bathrooms}} Bathroom</p>
                                </div>
                            </div>
                            <div class="user">
                                <p class="owner_bold">Owner:</p>
                                <p class="owner_name">{{ v_place.user.first_name}} {{v_place.user.last_name}}</p>
                            </div>
                            <div class="description">
                               <b> {{ v_place.description|safe }} </b>
                            </div>
                        </article>
                    {% endfor %}
                </div>
            </section>
        </div>
        <footer>
            <p>Holberton School</p>
        </footer>
    </body>
</html>