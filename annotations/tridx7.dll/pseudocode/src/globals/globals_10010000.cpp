#include "nocturne.h"

// =============================================================================
// GLOBAL VARIABLE DEFINITIONS - Range 0x10010000
// =============================================================================

// IMAGE_DEBUG_DIRECTORY
IMAGE_DEBUG_DIRECTORY DAT_1001201C = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .Type = 0x00000003,
    .SizeOfData = 0x00001560,
    .AddressOfRawData = 0x00000000,
    .PointerToRawData = 0x0001A110
};
IMAGE_DEBUG_DIRECTORY DAT_10012038 = {
    .Characteristics = 0x00000000,
    .TimeDateStamp = 0x37FCF2FB,
    .MajorVersion = 0x0000,
    .MinorVersion = 0x0000,
    .Type = 0x00000002,
    .SizeOfData = 0x00000031,
    .AddressOfRawData = 0x00000000,
    .PointerToRawData = 0x0001B670
};

// string
string DAT_10012397 = "?GetCurrentThread";
string DAT_10012410 = "runtime error ";
string DAT_10012424 = "TLOSS error\r\n";
string DAT_10012434 = "SING error\r\n";
string DAT_10012444 = "DOMAIN error\r\n";
string DAT_10012454 = "R6027\r\n- not enough space for lowio initialization\r\n";
string DAT_1001248C = "R6026\r\n- not enough space for stdio initialization\r\n";
string DAT_100124C4 = "R6025\r\n- pure virtual function call\r\n";
string DAT_100124EC = "R6024\r\n- not enough space for _onexit/atexit table\r\n";
string DAT_10012524 = "R6019\r\n- unable to open console device\r\n";
string DAT_10012550 = "R6018\r\n- unexpected heap error\r\n";
string DAT_10012574 = "R6017\r\n- unexpected multithread lock error\r\n";
string DAT_100125A4 = "R6016\r\n- not enough space for thread data\r\n";
string DAT_100125D0 = "\r\nabnormal program termination\r\n";
string DAT_100127F8 = "sweden";
string DAT_1001296C = "canada";

// undefined1
undefined1 DAT_1001277a = 0x00;
undefined1 DAT_10012792 = 0x00;
undefined1 DAT_10016db4 = 0x00;
undefined1 DAT_10016ddc = 0x00;
undefined1 DAT_10017694 = 0x2E;
undefined1 DAT_10018533 = 0x00;
undefined1 DAT_1001856f = 0x00;
undefined1 DAT_10018570 = 0x50;
undefined1 DAT_10018573 = 0x00;
undefined1 DAT_100185af = 0x00;

// undefined2
undefined2 DAT_1001794c = 0x0000;
undefined2 DAT_10017954 = 0x0000;
undefined2 DAT_1001795a = 0x0000;
undefined2 DAT_1001795e = 0x0000;
undefined2 DAT_10017960 = 0x0000;

// undefined4
undefined4 DAT_10014138 = 0x00000000;
undefined4 DAT_10014164 = 0x00000000;
undefined4 DAT_10014168 = 0x00000000;
undefined4 DAT_1001416c = 0x00000000;
undefined4 DAT_10014170 = 0x00000000;
undefined4 DAT_10014174 = 0x00000280;
undefined4 DAT_10014178 = 0x000001E0;
undefined4 DAT_1001417c = 0x00000010;
undefined4 DAT_10014180 = 0x00000000;
undefined4 DAT_10014184 = 0x00000000;
undefined4 DAT_10014188 = 0x00000000;
undefined4 DAT_1001418c = 0x00000000;
undefined4 DAT_10014190 = 0x00000000;
undefined4 DAT_10014198 = 0x00000000;
undefined4 DAT_1001419c = 0x00000000;
undefined4 DAT_100141b8 = 0x00000000;
undefined4 DAT_100141bc = 0x000000FF;
undefined4 DAT_100141c0 = 0x000000FF;
undefined4 DAT_100141d4 = 0x00000000;
undefined4 DAT_100141dc = 0x00000000;
undefined4 DAT_100141e0 = 0x00000000;
undefined4 DAT_100141e4 = 0x00000000;
undefined4 DAT_100141e8 = 0x00000000;
undefined4 DAT_100141f0 = 0x00000000;
undefined4 DAT_100141f4 = 0x00000000;
undefined4 DAT_100141f8 = 0x00000000;
undefined4 DAT_100141fc = 0x00000000;
undefined4 DAT_10014204 = 0x00000000;
undefined4 DAT_10014208 = 0x00000000;
undefined4 DAT_1001420c = 0x00000000;
undefined4 DAT_10014210 = 0x00000000;
undefined4 DAT_10014214 = 0x00000000;
undefined4 DAT_1001421c = 0x00000000;
undefined4 DAT_10014220 = 0x00000000;
undefined4 DAT_10014224 = 0x00000001;
undefined4 DAT_10014228 = 0x00000000;
undefined4 DAT_1001422c = 0x00000000;
undefined4 DAT_10014230 = 0x00000000;
undefined4 DAT_10014234 = 0x00000000;
undefined4 DAT_10016c60 = 0x00000000;
undefined4 DAT_10016c64 = 0x00000000;
undefined4 DAT_10016c70 = 0x00000000;
undefined4 DAT_10016c74 = 0x00000000;
undefined4 DAT_10016c78 = 0x00000000;
undefined4 DAT_10016d38 = 0x00000000;
undefined4 DAT_10016d60 = 0x00000000;
undefined4 DAT_10016d64 = 0x00000000;
undefined4 DAT_10016d80 = 0x00000000;
undefined4 DAT_10016d84 = 0x00000000;
undefined4 DAT_10016d88 = 0x00000000;
undefined4 DAT_10016d9c = 0x00000000;
undefined4 DAT_10016da0 = 0x00000000;
undefined4 DAT_10016da4 = 0xFFFFFFFF;
undefined4 DAT_10016dd8 = 0x00000000;
undefined4 DAT_10016edc = 0x00000000;
undefined4 DAT_10016ee0 = 0x00000000;
undefined4 DAT_10016ee8 = 0x00000000;
undefined4 DAT_10016eec = 0x00000000;
undefined4 DAT_10016ef0 = 0x00000000;
undefined4 DAT_10016ef4 = 0x00000000;
undefined4 DAT_10016ff4 = 0x00000000;
undefined4 DAT_10017080 = 0x00000000;
undefined4 DAT_1001768c = 0x00000000;
undefined4 DAT_10017690 = 0x00000001;
undefined4 DAT_10017760 = 0x00000000;
undefined4 DAT_10017764 = 0x00000000;
undefined4 DAT_10017768 = 0x00000000;
undefined4 DAT_1001776c = 0x00000000;
undefined4 DAT_10017770 = 0x00000000;
undefined4 DAT_10017774 = 0x00000000;
undefined4 DAT_10017778 = 0x00000000;
undefined4 DAT_1001777c = 0x00000000;
undefined4 DAT_10017780 = 0x00000000;
undefined4 DAT_100178f4 = 0x00000000;
undefined4 DAT_100178f8 = 0x00000000;
undefined4 DAT_100178fc = 0x00000000;
undefined4 DAT_10017900 = 0x00000000;
undefined4 DAT_10017904 = 0x00000000;
undefined4 DAT_1001790c = 0x00000000;
undefined4 DAT_10017910 = 0x00000000;
undefined4 DAT_10017918 = 0x00000000;
undefined4 DAT_1001791c = 0x00000000;
undefined4 DAT_10017920 = 0x00000000;
undefined4 DAT_10017924 = 0x00000000;
undefined4 DAT_10017928 = 0x00000000;
undefined4 DAT_1001792c = 0x00000000;
undefined4 DAT_10017930 = 0x00000000;
undefined4 DAT_10017934 = 0x00000000;
undefined4 DAT_10018210 = 0x00000000;
undefined4 DAT_10018214 = 0x00000000;
undefined4 DAT_10018254 = 0x00000000;
undefined4 DAT_10018258 = 0x00000000;
undefined4 DAT_10018520 = 0x00007080;
undefined4 DAT_100185b8 = 0x00000000;
undefined4 DAT_100185dc = 0x00000000;
undefined4 DAT_10018650 = 0x00000000;

// unicode
unicode u_null_1001230a = L"null)";

// word
word WORD_10013000 = 0;

