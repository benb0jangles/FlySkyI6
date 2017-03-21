#ifndef __FONT_METRIC15x26_H__
#define __FONT_METRIC15x26_H__

#include <stdint.h>

const uint8_t font_arial[] = {
		// @0 ' ' (2 pixels wide)
		//
		//
		//
		//
		//
		//
		//
		//
		//
		0x00, 0x00,
		0x00, 0x00,

		// @4 '!' (1 pixels wide)
		// #
		// #
		// #
		// #
		// #
		//
		// #
		//
		//
		0x5F,
		0x00,

		// @6 '"' (3 pixels wide)
		// # #
		// # #
		// # #
		//
		//
		//
		//
		//
		//
		0x07, 0x00, 0x07,
		0x00, 0x00, 0x00,

		// @12 '#' (5 pixels wide)
		//   # #
		//  # #
		// #####
		//  # #
		// #####
		//  # #
		// # #
		//
		//
		0x54, 0x3E, 0x55, 0x3E, 0x15,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @22 '$' (4 pixels wide)
		//  #
		// ###
		// ## #
		// ###
		//  # #
		// ## #
		// ####
		//  #
		//  #
		0x6E, 0xFF, 0x4A, 0x74,
		0x00, 0x01, 0x00, 0x00,

		// @30 '%' (8 pixels wide)
		// ###  #
		// # #  #
		// # # #
		//  #  # #
		//    # # #
		//   #  # #
		//  #   ###
		//
		//
		0x07, 0x49, 0x27, 0x10, 0x0C, 0x73, 0x48, 0x70,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @46 '&' (6 pixels wide)
		//  ###
		//  # #
		//  ###
		//  ## #
		// # ###
		// #  ##
		//  #####
		//
		//
		0x30, 0x4F, 0x5D, 0x77, 0x78, 0x40,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @58 ''' (1 pixels wide)
		// #
		// #
		// #
		//
		//
		//
		//
		//
		//
		0x07,
		0x00,

		// @60 '(' (2 pixels wide)
		//  #
		//  #
		// #
		// #
		// #
		// #
		// #
		//  #
		//  #
		0x7C, 0x83,
		0x00, 0x01,

		// @64 ')' (2 pixels wide)
		// #
		// #
		//  #
		//  #
		//  #
		//  #
		//  #
		// #
		// #
		0x83, 0x7C,
		0x01, 0x00,

		// @68 '*' (3 pixels wide)
		//  #
		// ###
		//  ##
		// # #
		//
		//
		//
		//
		//
		0x0A, 0x07, 0x0E,
		0x00, 0x00, 0x00,

		// @74 '+' (5 pixels wide)
		//
		//
		//   #
		// #####
		//   #
		//   #
		//
		//
		//
		0x08, 0x08, 0x3C, 0x08, 0x08,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @84 ',' (1 pixels wide)
		//
		//
		//
		//
		//
		//
		// #
		// #
		//
		0xC0,
		0x00,

		// @86 '-' (2 pixels wide)
		//
		//
		//
		//
		// ##
		//
		//
		//
		//
		0x10, 0x10,
		0x00, 0x00,

		// @90 '.' (1 pixels wide)
		//
		//
		//
		//
		//
		//
		// #
		//
		//
		0x40,
		0x00,

		// @92 '/' (2 pixels wide)
		//  #
		//  #
		//  #
		// #
		// #
		// #
		// #
		//
		//
		0x78, 0x07,
		0x00, 0x00,

		// @96 '0' (4 pixels wide)
		//  ##
		// #  #
		// #  #
		// #  #
		// #  #
		// #  #
		//  ##
		//
		//
		0x3E, 0x41, 0x41, 0x3E,
		0x00, 0x00, 0x00, 0x00,

		// @104 '1' (3 pixels wide)
		//   #
		//  ##
		// # #
		//   #
		//   #
		//   #
		//   #
		//
		//
		0x04, 0x02, 0x7F,
		0x00, 0x00, 0x00,

		// @110 '2' (4 pixels wide)
		//  ##
		// #  #
		// #  #
		//   ##
		//  ##
		// #
		// ####
		//
		//
		0x66, 0x51, 0x59, 0x4E,
		0x00, 0x00, 0x00, 0x00,

		// @118 '3' (4 pixels wide)
		//  ##
		// #  #
		//    #
		//  ##
		//    #
		// #  #
		// ###
		//
		//
		0x62, 0x49, 0x49, 0x36,
		0x00, 0x00, 0x00, 0x00,

		// @126 '4' (5 pixels wide)
		//    #
		//   ##
		//   ##
		//  # #
		// #  #
		// #####
		//    #
		//
		//
		0x30, 0x28, 0x26, 0x7F, 0x20,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @136 '5' (4 pixels wide)
		// ####
		// #
		// #
		// ###
		// #  #
		// #  #
		// ###
		//
		//
		0x7F, 0x49, 0x49, 0x31,
		0x00, 0x00, 0x00, 0x00,

		// @144 '6' (4 pixels wide)
		//  ##
		// #  #
		// #  #
		// ###
		// #  #
		// #  #
		//  ##
		//
		//
		0x3E, 0x49, 0x49, 0x36,
		0x00, 0x00, 0x00, 0x00,

		// @152 '7' (4 pixels wide)
		// ####
		//   ##
		//   #
		//   #
		//  #
		//  #
		//  #
		//
		//
		0x01, 0x71, 0x0F, 0x03,
		0x00, 0x00, 0x00, 0x00,

		// @160 '8' (5 pixels wide)
		//  ###
		// #   #
		// #   #
		//  ###
		// #   #
		// #   #
		//  ###
		//
		//
		0x36, 0x49, 0x49, 0x49, 0x36,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @170 '9' (5 pixels wide)
		//  ###
		// #   #
		// #   #
		// #   #
		//  ####
		// #   #
		//  ###
		//
		//
		0x2E, 0x51, 0x51, 0x51, 0x3E,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @180 ':' (1 pixels wide)
		//
		//
		// #
		//
		//
		//
		// #
		//
		//
		0x44,
		0x00,

		// @182 ';' (1 pixels wide)
		//
		//
		// #
		//
		//
		//
		// #
		// #
		//
		0xC4,
		0x00,

		// @184 '<' (4 pixels wide)
		//
		//    #
		//  ##
		// #
		//  ##
		//    #
		//
		//
		//
		0x08, 0x14, 0x14, 0x22,
		0x00, 0x00, 0x00, 0x00,

		// @192 '=' (4 pixels wide)
		//
		//
		// ####
		//
		// ####
		//
		//
		//
		//
		0x14, 0x14, 0x14, 0x14,
		0x00, 0x00, 0x00, 0x00,

		// @200 '>' (4 pixels wide)
		//
		// #
		//  ##
		//    #
		//  ##
		// #
		//
		//
		//
		0x22, 0x14, 0x14, 0x08,
		0x00, 0x00, 0x00, 0x00,

		// @208 '?' (4 pixels wide)
		//  ##
		// #  #
		// #  #
		//   #
		//  #
		//  #
		//  #
		//
		//
		0x06, 0x71, 0x09, 0x06,
		0x00, 0x00, 0x00, 0x00,

		// @216 '@' (9 pixels wide)
		//    ####
		//  ##    #
		//  # ## # #
		// # #  ## #
		// # #  #  #
		// # #  # #
		// #  ####
		//  ##    ##
		//   ######
		0x78, 0x86, 0xBA, 0x45, 0x45, 0x79, 0x4D, 0xA2, 0x9C,
		0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,

		// @234 'A' (6 pixels wide)
		//   ##
		//   ##
		//  ####
		//  #  #
		//  ####
		// ##  ##
		// #    #
		//
		//
		0x60, 0x3C, 0x17, 0x17, 0x3C, 0x60,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @246 'B' (5 pixels wide)
		// ####
		// #   #
		// #   #
		// ####
		// #   #
		// #   #
		// #####
		//
		//
		0x7F, 0x49, 0x49, 0x49, 0x76,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @256 'C' (5 pixels wide)
		//  ###
		// ##  #
		// #   #
		// #
		// #   #
		// ##  #
		//  ###
		//
		//
		0x3E, 0x63, 0x41, 0x41, 0x36,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @266 'D' (5 pixels wide)
		// ####
		// #  ##
		// #   #
		// #   #
		// #   #
		// #  ##
		// ####
		//
		//
		0x7F, 0x41, 0x41, 0x63, 0x3E,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @276 'E' (5 pixels wide)
		// #####
		// #
		// #
		// ####
		// #
		// #
		// #####
		//
		//
		0x7F, 0x49, 0x49, 0x49, 0x41,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @286 'F' (4 pixels wide)
		// ####
		// #
		// #
		// ####
		// #
		// #
		// #
		//
		//
		0x7F, 0x09, 0x09, 0x09,
		0x00, 0x00, 0x00, 0x00,

		// @294 'G' (5 pixels wide)
		//  ###
		// ##  #
		// #   #
		// #
		// #  ##
		// ##  #
		//  ###
		//
		//
		0x3E, 0x63, 0x41, 0x51, 0x36,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @304 'H' (5 pixels wide)
		// #   #
		// #   #
		// #   #
		// #####
		// #   #
		// #   #
		// #   #
		//
		//
		0x7F, 0x08, 0x08, 0x08, 0x7F,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @314 'I' (1 pixels wide)
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		//
		//
		0x7F,
		0x00,

		// @316 'J' (4 pixels wide)
		//    #
		//    #
		//    #
		//    #
		// #  #
		// #  #
		//  ##
		//
		//
		0x30, 0x40, 0x40, 0x3F,
		0x00, 0x00, 0x00, 0x00,

		// @324 'K' (5 pixels wide)
		// #  ##
		// # ##
		// ###
		// ###
		// ####
		// #  ##
		// #   #
		//
		//
		0x7F, 0x1C, 0x1E, 0x33, 0x61,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @334 'L' (4 pixels wide)
		// #
		// #
		// #
		// #
		// #
		// #
		// ####
		//
		//
		0x7F, 0x40, 0x40, 0x40,
		0x00, 0x00, 0x00, 0x00,

		// @342 'M' (6 pixels wide)
		// ##  ##
		// ##  ##
		// ##  ##
		// ######
		// # ## #
		// # ## #
		// # ## #
		//
		//
		0x7F, 0x0F, 0x78, 0x78, 0x0F, 0x7F,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @354 'N' (5 pixels wide)
		// #   #
		// ##  #
		// ##  #
		// ### #
		// # ###
		// #  ##
		// #   #
		//
		//
		0x7F, 0x0E, 0x18, 0x30, 0x7F,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @364 'O' (6 pixels wide)
		//  ####
		// ##  ##
		// #    #
		// #    #
		// #    #
		// ##  ##
		//  ####
		//
		//
		0x3E, 0x63, 0x41, 0x41, 0x63, 0x3E,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @376 'P' (4 pixels wide)
		// ####
		// #  #
		// #  #
		// ####
		// #
		// #
		// #
		//
		//
		0x7F, 0x09, 0x09, 0x0F,
		0x00, 0x00, 0x00, 0x00,

		// @384 'Q' (6 pixels wide)
		//  ####
		// ##  ##
		// #    #
		// #    #
		// #    #
		// ## ###
		//  #####
		//
		//
		0x3E, 0x63, 0x41, 0x61, 0x63, 0x7E,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @396 'R' (5 pixels wide)
		// #####
		// #   #
		// #   #
		// ####
		// #  #
		// #  ##
		// #   #
		//
		//
		0x7F, 0x09, 0x09, 0x39, 0x67,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @406 'S' (4 pixels wide)
		//  ##
		// #  #
		// #
		//  ###
		// #  #
		// #  #
		//  ##
		//
		//
		0x36, 0x49, 0x49, 0x3A,
		0x00, 0x00, 0x00, 0x00,

		// @414 'T' (5 pixels wide)
		// #####
		//   #
		//   #
		//   #
		//   #
		//   #
		//   #
		//
		//
		0x01, 0x01, 0x7F, 0x01, 0x01,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @424 'U' (5 pixels wide)
		// #   #
		// #   #
		// #   #
		// #   #
		// #   #
		// #   #
		//  ###
		//
		//
		0x3F, 0x40, 0x40, 0x40, 0x3F,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @434 'V' (5 pixels wide)
		// #   #
		// #   #
		//  # #
		//  # #
		//  # #
		//  # #
		//   #
		//
		//
		0x03, 0x3C, 0x40, 0x3C, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @444 'W' (8 pixels wide)
		// #  ##  #
		// #  ##  #
		// ## ## ##
		//  ######
		//  ##  ##
		//  ##  ##
		//  ##  ##
		//
		//
		0x07, 0x7C, 0x78, 0x0F, 0x0F, 0x78, 0x7C, 0x07,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @460 'X' (5 pixels wide)
		// #   #
		// ## ##
		//  # #
		//  ###
		//  ###
		//  # #
		// #   #
		//
		//
		0x43, 0x3E, 0x18, 0x3E, 0x43,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @470 'Y' (5 pixels wide)
		// #   #
		// ## ##
		//  # #
		//   #
		//   #
		//   #
		//   #
		//
		//
		0x03, 0x06, 0x78, 0x06, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @480 'Z' (5 pixels wide)
		// #####
		//    ##
		//   ##
		//   #
		//  #
		// ##
		// #####
		//
		//
		0x61, 0x71, 0x4D, 0x47, 0x43,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @490 '[' (2 pixels wide)
		// ##
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		// ##
		0xFF, 0x01,
		0x01, 0x01,

		// @494 '\' (2 pixels wide)
		// #
		// #
		//  #
		//  #
		//  #
		//  #
		//  #
		//
		//
		0x03, 0x7C,
		0x00, 0x00,

		// @498 ']' (2 pixels wide)
		// ##
		//  #
		//  #
		//  #
		//  #
		//  #
		//  #
		//  #
		// ##
		0x01, 0xFF,
		0x01, 0x01,

		// @502 '^' (5 pixels wide)
		//   #
		//  # #
		// ## ##
		//
		//
		//
		//
		//
		//
		0x04, 0x06, 0x01, 0x06, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @512 '_' (5 pixels wide)
		//
		//
		//
		//
		//
		//
		//
		// #####
		//
		0x80, 0x80, 0x80, 0x80, 0x80,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @522 '`' (2 pixels wide)
		// ##
		//
		//
		//
		//
		//
		//
		//
		//
		0x01, 0x01,
		0x00, 0x00,

		// @526 'a' (5 pixels wide)
		//
		//
		//  ####
		// ##  #
		//   ###
		// ##  #
		// #####
		//
		//
		0x68, 0x6C, 0x54, 0x54, 0x7C,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @536 'b' (4 pixels wide)
		// #
		// #
		// ###
		// #  #
		// #  #
		// #  #
		// ###
		//
		//
		0x7F, 0x44, 0x44, 0x38,
		0x00, 0x00, 0x00, 0x00,

		// @544 'c' (4 pixels wide)
		//
		//
		//  ###
		// #  #
		// #
		// #  #
		//  ###
		//
		//
		0x38, 0x44, 0x44, 0x6C,
		0x00, 0x00, 0x00, 0x00,

		// @552 'd' (5 pixels wide)
		//     #
		//     #
		//  ####
		// #   #
		// #   #
		// #   #
		//  ####
		//
		//
		0x38, 0x44, 0x44, 0x44, 0x7F,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @562 'e' (4 pixels wide)
		//
		//
		//  ###
		// #  #
		// ####
		// #  #
		//  ###
		//
		//
		0x38, 0x54, 0x54, 0x7C,
		0x00, 0x00, 0x00, 0x00,

		// @570 'f' (3 pixels wide)
		//  ##
		//  #
		// ###
		//  #
		//  #
		//  #
		//  #
		//
		//
		0x04, 0x7F, 0x05,
		0x00, 0x00, 0x00,

		// @576 'g' (5 pixels wide)
		//
		//
		//  ####
		// #   #
		// #   #
		// #   #
		//  ####
		// #   #
		//  ###
		0xB8, 0x44, 0x44, 0x44, 0xFC,
		0x00, 0x01, 0x01, 0x01, 0x00,

		// @586 'h' (4 pixels wide)
		// #
		// #
		// ####
		// #  #
		// #  #
		// #  #
		// #  #
		//
		//
		0x7F, 0x04, 0x04, 0x7C,
		0x00, 0x00, 0x00, 0x00,

		// @594 'i' (1 pixels wide)
		// #
		//
		// #
		// #
		// #
		// #
		// #
		//
		//
		0x7D,
		0x00,

		// @596 'j' (2 pixels wide)
		//  #
		//
		//  #
		//  #
		//  #
		//  #
		//  #
		//  #
		// ##
		0x00, 0xFD,
		0x01, 0x01,

		// @600 'k' (4 pixels wide)
		// #
		// #
		// # ##
		// ###
		// ###
		// # #
		// #  #
		//
		//
		0x7F, 0x18, 0x3C, 0x44,
		0x00, 0x00, 0x00, 0x00,

		// @608 'l' (1 pixels wide)
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		//
		//
		0x7F,
		0x00,

		// @610 'm' (6 pixels wide)
		//
		//
		// ######
		// # #  #
		// # #  #
		// # #  #
		// # #  #
		//
		//
		0x7C, 0x04, 0x7C, 0x04, 0x04, 0x7C,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @622 'n' (4 pixels wide)
		//
		//
		// ####
		// #  #
		// #  #
		// #  #
		// #  #
		//
		//
		0x7C, 0x04, 0x04, 0x7C,
		0x00, 0x00, 0x00, 0x00,

		// @630 'o' (5 pixels wide)
		//
		//
		//  ###
		// #   #
		// #   #
		// #   #
		//  ###
		//
		//
		0x38, 0x44, 0x44, 0x44, 0x38,
		0x00, 0x00, 0x00, 0x00, 0x00,

		// @640 'p' (4 pixels wide)
		//
		//
		// ###
		// #  #
		// #  #
		// #  #
		// ###
		// #
		// #
		0xFC, 0x44, 0x44, 0x38,
		0x01, 0x00, 0x00, 0x00,

		// @648 'q' (5 pixels wide)
		//
		//
		//  ####
		// #   #
		// #   #
		// #   #
		//  ####
		//     #
		//     #
		0x38, 0x44, 0x44, 0x44, 0xFC,
		0x00, 0x00, 0x00, 0x00, 0x01,

		// @658 'r' (3 pixels wide)
		//
		//
		// ###
		// #
		// #
		// #
		// #
		//
		//
		0x7C, 0x04, 0x04,
		0x00, 0x00, 0x00,

		// @664 's' (4 pixels wide)
		//
		//
		// ###
		// #  #
		//  ###
		// #  #
		// ####
		//
		//
		0x6C, 0x54, 0x54, 0x78,
		0x00, 0x00, 0x00, 0x00,

		// @672 't' (3 pixels wide)
		//  #
		//  #
		// ###
		//  #
		//  #
		//  #
		//  ##
		//
		//
		0x04, 0x7F, 0x44,
		0x00, 0x00, 0x00,

		// @678 'u' (4 pixels wide)
		//
		//
		// #  #
		// #  #
		// #  #
		// #  #
		// ####
		//
		//
		0x7C, 0x40, 0x40, 0x7C,
		0x00, 0x00, 0x00, 0x00,

		// @686 'v' (4 pixels wide)
		//
		//
		// #  #
		// #  #
		//  ##
		//  ##
		//  ##
		//
		//
		0x0C, 0x70, 0x70, 0x0C,
		0x00, 0x00, 0x00, 0x00,

		// @694 'w' (7 pixels wide)
		//
		//
		// #  #  #
		// #  #  #
		//  ## ##
		//  ## ##
		//  ## ##
		//
		//
		0x0C, 0x70, 0x70, 0x0C, 0x70, 0x70, 0x0C,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		// @708 'x' (4 pixels wide)
		//
		//
		// #  #
		//  ##
		//  ##
		//  ##
		// #  #
		//
		//
		0x44, 0x38, 0x38, 0x44,
		0x00, 0x00, 0x00, 0x00,

		// @716 'y' (4 pixels wide)
		//
		//
		// #  #
		// #  #
		//  ##
		//  ##
		//  ##
		//  #
		// ##
		0x0C, 0xF0, 0x70, 0x0C,
		0x01, 0x01, 0x00, 0x00,

		// @724 'z' (4 pixels wide)
		//
		//
		// ####
		//   #
		//  ##
		//  #
		// ####
		//
		//
		0x44, 0x74, 0x5C, 0x44,
		0x00, 0x00, 0x00, 0x00,

		// @732 '{' (3 pixels wide)
		//  ##
		//  #
		//  #
		//  #
		// #
		//  #
		//  #
		//  #
		//  ##
		0x10, 0xEF, 0x01,
		0x00, 0x01, 0x01,

		// @738 '|' (1 pixels wide)
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		// #
		0xFF,
		0x01,

		// @740 '}' (3 pixels wide)
		// ##
		//  #
		//  #
		//  #
		//   #
		//  #
		//  #
		//  #
		// ##
		0x01, 0xEF, 0x10,
		0x01, 0x01, 0x00,

		// @746 '~' (4 pixels wide)
		//
		//
		//
		// ## #
		// # ##
		//
		//
		//
		//
		0x18, 0x08, 0x10, 0x18,
		0x00, 0x00, 0x00, 0x00,
	};

struct FontInfo {
   uint8_t  width;
   uint8_t  offset;
};

// Character descriptors for Arial Rounded MT Bold 7pt
// { [Char width in bits], [Offset into arialRoundedMTBold_7ptCharBitmaps in bytes] }
const FontInfo arialRoundedMTBold_7ptDescriptors[] =
{
	{2, 0}, 		//
	{1, 4}, 		// !
	{3, 6}, 		// "
	{5, 12}, 		// #
	{4, 22}, 		// $
	{8, 30}, 		// %
	{6, 46}, 		// &
	{1, 58}, 		// '
	{2, 60}, 		// (
	{2, 64}, 		// )
	{3, 68}, 		// *
	{5, 74}, 		// +
	{1, 84}, 		// ,
	{2, 86}, 		// -
	{1, 90}, 		// .
	{2, 92}, 		// /
	{4, 96}, 		// 0
	{3, 104}, 		// 1
	{4, 110}, 		// 2
	{4, 118}, 		// 3
	{5, 126}, 		// 4
	{4, 136}, 		// 5
	{4, 144}, 		// 6
	{4, 152}, 		// 7
	{5, 160}, 		// 8
	{5, 170}, 		// 9
	{1, 180}, 		// :
	{1, 182}, 		// ;
	{4, 184}, 		// <
	{4, 192}, 		// =
	{4, 200}, 		// >
	{4, 208}, 		// ?
	{9, 216}, 		// @
	{6, 234}, 		// A
	{5, 246}, 		// B
	{5, 256}, 		// C
	{5, 266}, 		// D
	{5, 276}, 		// E
	{4, 286}, 		// F
	{5, 294}, 		// G
	{5, 304}, 		// H
	{1, 314}, 		// I
	{4, 316}, 		// J
	{5, 324}, 		// K
	{4, 334}, 		// L
	{6, 342}, 		// M
	{5, 354}, 		// N
	{6, 364}, 		// O
	{4, 376}, 		// P
	{6, 384}, 		// Q
	{5, 396}, 		// R
	{4, 406}, 		// S
	{5, 414}, 		// T
	{5, 424}, 		// U
	{5, 434}, 		// V
	{8, 444}, 		// W
	{5, 460}, 		// X
	{5, 470}, 		// Y
	{5, 480}, 		// Z
	{2, 490}, 		// [
	{2, 494}, 		// \
	{2, 498}, 		// ]
	{5, 502}, 		// ^
	{5, 512}, 		// _
	{2, 522}, 		// `
	{5, 526}, 		// a
	{4, 536}, 		// b
	{4, 544}, 		// c
	{5, 552}, 		// d
	{4, 562}, 		// e
	{3, 570}, 		// f
	{5, 576}, 		// g
	{4, 586}, 		// h
	{1, 594}, 		// i
	{2, 596}, 		// j
	{4, 600}, 		// k
	{1, 608}, 		// l
	{6, 610}, 		// m
	{4, 622}, 		// n
	{5, 630}, 		// o
	{4, 640}, 		// p
	{5, 648}, 		// q
	{3, 658}, 		// r
	{4, 664}, 		// s
	{3, 672}, 		// t
	{4, 678}, 		// u
	{4, 686}, 		// v
	{7, 694}, 		// w
	{4, 708}, 		// x
	{4, 716}, 		// y
	{4, 724}, 		// z
	{3, 732}, 		// {
	{1, 738}, 		// |
	{3, 740}, 		// }
	{4, 746}, 		// ~
};


#endif
