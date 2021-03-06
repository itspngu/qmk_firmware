/*
Copyright 2021 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#undef PRODUCT_ID
#define PRODUCT_ID 0x0002
#undef PRODUCT
#define PRODUCT Ferris 0.2 - Bling



/* LED Drivers */
#define DRIVER_ADDR_1 0b1110100
#define DRIVER_ADDR_2 0b1110101
#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 7
#define DRIVER_2_LED_TOTAL 7
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

