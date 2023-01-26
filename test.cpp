#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("Signs being checked", "[sign]" ) {
    REQUIRE( Sign(1) == 1 );
    REQUIRE( Sign(2) == 1 );
    REQUIRE( Sign(-3) == -1 );
    REQUIRE( Sign(-10) == -1 );
}

TEST_CASE("Sums in vector being computed", "[sum]") {
    std::vector test = {1,2};
    REQUIRE( Sum(test) == 3);
    test = {1};
    REQUIRE( Sum(test) == 1);
    test = {40,50,60};
    REQUIRE( Sum(test) == 150);
    test = {-9,10,39};
    REQUIRE( Sum(test) == 40);
}

TEST_CASE("Products in vector being computed", "[product]") {
    std::vector test = {1,2};
    REQUIRE( Product(test) == 2);
    test = {1};
    REQUIRE( Product(test) == 1);
    test = {40,50,60};
    REQUIRE( Product(test) == 120000);
    test = {-9,10,39};
    REQUIRE( Product(test) == -3510);
}