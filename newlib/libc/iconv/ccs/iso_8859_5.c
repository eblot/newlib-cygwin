#ifdef ENABLE_ICONV
#include "../lib/deps.h"

#ifdef ICONV_CONVERTER_ISO_8859_5
#include "../lib/endian.h"

_CONST unsigned char iconv_ccs_table_iso_8859_5[] = {
	3, 'C', 'S', 'C', 'T', ICONV_ORDER, 8, 1,
	_1l(0x00, 0x00, 0x00, 0x08), _1l(0x00, 0x00, 0x02, 0x08),
	_2s(0x00, 0x00, 0x00, 0x01), _2s(0x00, 0x02, 0x00, 0x03),
	_2s(0x00, 0x04, 0x00, 0x05), _2s(0x00, 0x06, 0x00, 0x07),
	_2s(0x00, 0x08, 0x00, 0x09), _2s(0x00, 0x0A, 0x00, 0x0B),
	_2s(0x00, 0x0C, 0x00, 0x0D), _2s(0x00, 0x0E, 0x00, 0x0F),
	_2s(0x00, 0x10, 0x00, 0x11), _2s(0x00, 0x12, 0x00, 0x13),
	_2s(0x00, 0x14, 0x00, 0x15), _2s(0x00, 0x16, 0x00, 0x17),
	_2s(0x00, 0x18, 0x00, 0x19), _2s(0x00, 0x1A, 0x00, 0x1B),
	_2s(0x00, 0x1C, 0x00, 0x1D), _2s(0x00, 0x1E, 0x00, 0x1F),
	_2s(0x00, 0x20, 0x00, 0x21), _2s(0x00, 0x22, 0x00, 0x23),
	_2s(0x00, 0x24, 0x00, 0x25), _2s(0x00, 0x26, 0x00, 0x27),
	_2s(0x00, 0x28, 0x00, 0x29), _2s(0x00, 0x2A, 0x00, 0x2B),
	_2s(0x00, 0x2C, 0x00, 0x2D), _2s(0x00, 0x2E, 0x00, 0x2F),
	_2s(0x00, 0x30, 0x00, 0x31), _2s(0x00, 0x32, 0x00, 0x33),
	_2s(0x00, 0x34, 0x00, 0x35), _2s(0x00, 0x36, 0x00, 0x37),
	_2s(0x00, 0x38, 0x00, 0x39), _2s(0x00, 0x3A, 0x00, 0x3B),
	_2s(0x00, 0x3C, 0x00, 0x3D), _2s(0x00, 0x3E, 0x00, 0x3F),
	_2s(0x00, 0x40, 0x00, 0x41), _2s(0x00, 0x42, 0x00, 0x43),
	_2s(0x00, 0x44, 0x00, 0x45), _2s(0x00, 0x46, 0x00, 0x47),
	_2s(0x00, 0x48, 0x00, 0x49), _2s(0x00, 0x4A, 0x00, 0x4B),
	_2s(0x00, 0x4C, 0x00, 0x4D), _2s(0x00, 0x4E, 0x00, 0x4F),
	_2s(0x00, 0x50, 0x00, 0x51), _2s(0x00, 0x52, 0x00, 0x53),
	_2s(0x00, 0x54, 0x00, 0x55), _2s(0x00, 0x56, 0x00, 0x57),
	_2s(0x00, 0x58, 0x00, 0x59), _2s(0x00, 0x5A, 0x00, 0x5B),
	_2s(0x00, 0x5C, 0x00, 0x5D), _2s(0x00, 0x5E, 0x00, 0x5F),
	_2s(0x00, 0x60, 0x00, 0x61), _2s(0x00, 0x62, 0x00, 0x63),
	_2s(0x00, 0x64, 0x00, 0x65), _2s(0x00, 0x66, 0x00, 0x67),
	_2s(0x00, 0x68, 0x00, 0x69), _2s(0x00, 0x6A, 0x00, 0x6B),
	_2s(0x00, 0x6C, 0x00, 0x6D), _2s(0x00, 0x6E, 0x00, 0x6F),
	_2s(0x00, 0x70, 0x00, 0x71), _2s(0x00, 0x72, 0x00, 0x73),
	_2s(0x00, 0x74, 0x00, 0x75), _2s(0x00, 0x76, 0x00, 0x77),
	_2s(0x00, 0x78, 0x00, 0x79), _2s(0x00, 0x7A, 0x00, 0x7B),
	_2s(0x00, 0x7C, 0x00, 0x7D), _2s(0x00, 0x7E, 0x00, 0x7F),
	_2s(0x00, 0x80, 0x00, 0x81), _2s(0x00, 0x82, 0x00, 0x83),
	_2s(0x00, 0x84, 0x00, 0x85), _2s(0x00, 0x86, 0x00, 0x87),
	_2s(0x00, 0x88, 0x00, 0x89), _2s(0x00, 0x8A, 0x00, 0x8B),
	_2s(0x00, 0x8C, 0x00, 0x8D), _2s(0x00, 0x8E, 0x00, 0x8F),
	_2s(0x00, 0x90, 0x00, 0x91), _2s(0x00, 0x92, 0x00, 0x93),
	_2s(0x00, 0x94, 0x00, 0x95), _2s(0x00, 0x96, 0x00, 0x97),
	_2s(0x00, 0x98, 0x00, 0x99), _2s(0x00, 0x9A, 0x00, 0x9B),
	_2s(0x00, 0x9C, 0x00, 0x9D), _2s(0x00, 0x9E, 0x00, 0x9F),
	_2s(0x00, 0xA0, 0x04, 0x01), _2s(0x04, 0x02, 0x04, 0x03),
	_2s(0x04, 0x04, 0x04, 0x05), _2s(0x04, 0x06, 0x04, 0x07),
	_2s(0x04, 0x08, 0x04, 0x09), _2s(0x04, 0x0A, 0x04, 0x0B),
	_2s(0x04, 0x0C, 0x00, 0xAD), _2s(0x04, 0x0E, 0x04, 0x0F),
	_2s(0x04, 0x10, 0x04, 0x11), _2s(0x04, 0x12, 0x04, 0x13),
	_2s(0x04, 0x14, 0x04, 0x15), _2s(0x04, 0x16, 0x04, 0x17),
	_2s(0x04, 0x18, 0x04, 0x19), _2s(0x04, 0x1A, 0x04, 0x1B),
	_2s(0x04, 0x1C, 0x04, 0x1D), _2s(0x04, 0x1E, 0x04, 0x1F),
	_2s(0x04, 0x20, 0x04, 0x21), _2s(0x04, 0x22, 0x04, 0x23),
	_2s(0x04, 0x24, 0x04, 0x25), _2s(0x04, 0x26, 0x04, 0x27),
	_2s(0x04, 0x28, 0x04, 0x29), _2s(0x04, 0x2A, 0x04, 0x2B),
	_2s(0x04, 0x2C, 0x04, 0x2D), _2s(0x04, 0x2E, 0x04, 0x2F),
	_2s(0x04, 0x30, 0x04, 0x31), _2s(0x04, 0x32, 0x04, 0x33),
	_2s(0x04, 0x34, 0x04, 0x35), _2s(0x04, 0x36, 0x04, 0x37),
	_2s(0x04, 0x38, 0x04, 0x39), _2s(0x04, 0x3A, 0x04, 0x3B),
	_2s(0x04, 0x3C, 0x04, 0x3D), _2s(0x04, 0x3E, 0x04, 0x3F),
	_2s(0x04, 0x40, 0x04, 0x41), _2s(0x04, 0x42, 0x04, 0x43),
	_2s(0x04, 0x44, 0x04, 0x45), _2s(0x04, 0x46, 0x04, 0x47),
	_2s(0x04, 0x48, 0x04, 0x49), _2s(0x04, 0x4A, 0x04, 0x4B),
	_2s(0x04, 0x4C, 0x04, 0x4D), _2s(0x04, 0x4E, 0x04, 0x4F),
	_2s(0x21, 0x16, 0x04, 0x51), _2s(0x04, 0x52, 0x04, 0x53),
	_2s(0x04, 0x54, 0x04, 0x55), _2s(0x04, 0x56, 0x04, 0x57),
	_2s(0x04, 0x58, 0x04, 0x59), _2s(0x04, 0x5A, 0x04, 0x5B),
	_2s(0x04, 0x5C, 0x00, 0xA7), _2s(0x04, 0x5E, 0x04, 0x5F),
	_1l(0x00, 0x00, 0x04, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x06, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x08, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_1l(0x00, 0x00, 0x00, 0x00), _1l(0x00, 0x00, 0x00, 0x00),
	_2s(0x00, 0x00, 0x00, 0x01), _2s(0x00, 0x02, 0x00, 0x03),
	_2s(0x00, 0x04, 0x00, 0x05), _2s(0x00, 0x06, 0x00, 0x07),
	_2s(0x00, 0x08, 0x00, 0x09), _2s(0x00, 0x0A, 0x00, 0x0B),
	_2s(0x00, 0x0C, 0x00, 0x0D), _2s(0x00, 0x0E, 0x00, 0x0F),
	_2s(0x00, 0x10, 0x00, 0x11), _2s(0x00, 0x12, 0x00, 0x13),
	_2s(0x00, 0x14, 0x00, 0x15), _2s(0x00, 0x16, 0x00, 0x17),
	_2s(0x00, 0x18, 0x00, 0x19), _2s(0x00, 0x1A, 0x00, 0x1B),
	_2s(0x00, 0x1C, 0x00, 0x1D), _2s(0x00, 0x1E, 0x00, 0x1F),
	_2s(0x00, 0x20, 0x00, 0x21), _2s(0x00, 0x22, 0x00, 0x23),
	_2s(0x00, 0x24, 0x00, 0x25), _2s(0x00, 0x26, 0x00, 0x27),
	_2s(0x00, 0x28, 0x00, 0x29), _2s(0x00, 0x2A, 0x00, 0x2B),
	_2s(0x00, 0x2C, 0x00, 0x2D), _2s(0x00, 0x2E, 0x00, 0x2F),
	_2s(0x00, 0x30, 0x00, 0x31), _2s(0x00, 0x32, 0x00, 0x33),
	_2s(0x00, 0x34, 0x00, 0x35), _2s(0x00, 0x36, 0x00, 0x37),
	_2s(0x00, 0x38, 0x00, 0x39), _2s(0x00, 0x3A, 0x00, 0x3B),
	_2s(0x00, 0x3C, 0x00, 0x3D), _2s(0x00, 0x3E, 0x00, 0x3F),
	_2s(0x00, 0x40, 0x00, 0x41), _2s(0x00, 0x42, 0x00, 0x43),
	_2s(0x00, 0x44, 0x00, 0x45), _2s(0x00, 0x46, 0x00, 0x47),
	_2s(0x00, 0x48, 0x00, 0x49), _2s(0x00, 0x4A, 0x00, 0x4B),
	_2s(0x00, 0x4C, 0x00, 0x4D), _2s(0x00, 0x4E, 0x00, 0x4F),
	_2s(0x00, 0x50, 0x00, 0x51), _2s(0x00, 0x52, 0x00, 0x53),
	_2s(0x00, 0x54, 0x00, 0x55), _2s(0x00, 0x56, 0x00, 0x57),
	_2s(0x00, 0x58, 0x00, 0x59), _2s(0x00, 0x5A, 0x00, 0x5B),
	_2s(0x00, 0x5C, 0x00, 0x5D), _2s(0x00, 0x5E, 0x00, 0x5F),
	_2s(0x00, 0x60, 0x00, 0x61), _2s(0x00, 0x62, 0x00, 0x63),
	_2s(0x00, 0x64, 0x00, 0x65), _2s(0x00, 0x66, 0x00, 0x67),
	_2s(0x00, 0x68, 0x00, 0x69), _2s(0x00, 0x6A, 0x00, 0x6B),
	_2s(0x00, 0x6C, 0x00, 0x6D), _2s(0x00, 0x6E, 0x00, 0x6F),
	_2s(0x00, 0x70, 0x00, 0x71), _2s(0x00, 0x72, 0x00, 0x73),
	_2s(0x00, 0x74, 0x00, 0x75), _2s(0x00, 0x76, 0x00, 0x77),
	_2s(0x00, 0x78, 0x00, 0x79), _2s(0x00, 0x7A, 0x00, 0x7B),
	_2s(0x00, 0x7C, 0x00, 0x7D), _2s(0x00, 0x7E, 0x00, 0x7F),
	_2s(0x00, 0x80, 0x00, 0x81), _2s(0x00, 0x82, 0x00, 0x83),
	_2s(0x00, 0x84, 0x00, 0x85), _2s(0x00, 0x86, 0x00, 0x87),
	_2s(0x00, 0x88, 0x00, 0x89), _2s(0x00, 0x8A, 0x00, 0x8B),
	_2s(0x00, 0x8C, 0x00, 0x8D), _2s(0x00, 0x8E, 0x00, 0x8F),
	_2s(0x00, 0x90, 0x00, 0x91), _2s(0x00, 0x92, 0x00, 0x93),
	_2s(0x00, 0x94, 0x00, 0x95), _2s(0x00, 0x96, 0x00, 0x97),
	_2s(0x00, 0x98, 0x00, 0x99), _2s(0x00, 0x9A, 0x00, 0x9B),
	_2s(0x00, 0x9C, 0x00, 0x9D), _2s(0x00, 0x9E, 0x00, 0x9F),
	_2s(0x00, 0xA0, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0x00, 0xFD),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0x00, 0xAD), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0x00, 0xA1), _2s(0x00, 0xA2, 0x00, 0xA3),
	_2s(0x00, 0xA4, 0x00, 0xA5), _2s(0x00, 0xA6, 0x00, 0xA7),
	_2s(0x00, 0xA8, 0x00, 0xA9), _2s(0x00, 0xAA, 0x00, 0xAB),
	_2s(0x00, 0xAC, 0xFF, 0xFE), _2s(0x00, 0xAE, 0x00, 0xAF),
	_2s(0x00, 0xB0, 0x00, 0xB1), _2s(0x00, 0xB2, 0x00, 0xB3),
	_2s(0x00, 0xB4, 0x00, 0xB5), _2s(0x00, 0xB6, 0x00, 0xB7),
	_2s(0x00, 0xB8, 0x00, 0xB9), _2s(0x00, 0xBA, 0x00, 0xBB),
	_2s(0x00, 0xBC, 0x00, 0xBD), _2s(0x00, 0xBE, 0x00, 0xBF),
	_2s(0x00, 0xC0, 0x00, 0xC1), _2s(0x00, 0xC2, 0x00, 0xC3),
	_2s(0x00, 0xC4, 0x00, 0xC5), _2s(0x00, 0xC6, 0x00, 0xC7),
	_2s(0x00, 0xC8, 0x00, 0xC9), _2s(0x00, 0xCA, 0x00, 0xCB),
	_2s(0x00, 0xCC, 0x00, 0xCD), _2s(0x00, 0xCE, 0x00, 0xCF),
	_2s(0x00, 0xD0, 0x00, 0xD1), _2s(0x00, 0xD2, 0x00, 0xD3),
	_2s(0x00, 0xD4, 0x00, 0xD5), _2s(0x00, 0xD6, 0x00, 0xD7),
	_2s(0x00, 0xD8, 0x00, 0xD9), _2s(0x00, 0xDA, 0x00, 0xDB),
	_2s(0x00, 0xDC, 0x00, 0xDD), _2s(0x00, 0xDE, 0x00, 0xDF),
	_2s(0x00, 0xE0, 0x00, 0xE1), _2s(0x00, 0xE2, 0x00, 0xE3),
	_2s(0x00, 0xE4, 0x00, 0xE5), _2s(0x00, 0xE6, 0x00, 0xE7),
	_2s(0x00, 0xE8, 0x00, 0xE9), _2s(0x00, 0xEA, 0x00, 0xEB),
	_2s(0x00, 0xEC, 0x00, 0xED), _2s(0x00, 0xEE, 0x00, 0xEF),
	_2s(0xFF, 0xFE, 0x00, 0xF1), _2s(0x00, 0xF2, 0x00, 0xF3),
	_2s(0x00, 0xF4, 0x00, 0xF5), _2s(0x00, 0xF6, 0x00, 0xF7),
	_2s(0x00, 0xF8, 0x00, 0xF9), _2s(0x00, 0xFA, 0x00, 0xFB),
	_2s(0x00, 0xFC, 0xFF, 0xFE), _2s(0x00, 0xFE, 0x00, 0xFF),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0x00, 0xF0, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
	_2s(0xFF, 0xFE, 0xFF, 0xFE), _2s(0xFF, 0xFE, 0xFF, 0xFE),
};

#endif /* #ifdef ICONV_CONVERTER_ISO_8859_5 */

#endif /* #ifdef ENABLE_ICONV */
