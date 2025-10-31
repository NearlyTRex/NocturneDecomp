#pragma once

// Function prototypes for support/newmsg.cpp
// Generated from Ghidra function signatures

// Original: support_newmsg.cpp_readMessageFile_FUN_00543e40
// Address: 00543e40
void readMessageFile(char * message_file);

// Original: support_newmsg.cpp_findLocalizedString_FUN_00544170
// Address: 00544170
char * findLocalizedString(char * key, int lower_bound, int upper_bound);

// Original: support_newmsg.cpp_getLocalizedString_FUN_005441f0
// Address: 005441f0
char * getLocalizedString(char * key);

// Original: support_newmsg.cpp_decryptMessage_FUN_00544270
// Address: 00544270
char * decryptMessage(SEncryptedMessage * encrypted_msg);

// Original: support_newmsg.cpp_staticInit_FUN_00544360
// Address: 00544360
void staticInit(void);

// Original: support_newmsg.cpp_CMouse_ctor_FUN_00544380
// Address: 00544380
CMouse * CMouse::ctor(CMouse * ptr);

// Original: support_newmsg.cpp_CMouse_dtor_FUN_005443e0
// Address: 005443e0
CMouse * CMouse::dtor(CMouse * this_ptr);

// Original: support_newmsg.cpp_CMouse_load_FUN_00544420
// Address: 00544420
void CMouse::load(CMouse * this_ptr);

// Original: support_newmsg.cpp_doNothing_FUN_00544500
// Address: 00544500
void doNothing(void);

// Original: support_newmsg.cpp_FUN_00544510
// Address: 00544510
undefined FUN_00544510();

// Original: support_newmsg.cpp_FUN_00544540
// Address: 00544540
undefined FUN_00544540();

// Original: support_newmsg.cpp_FUN_005445a0
// Address: 005445a0
undefined FUN_005445a0();

// Original: support_newmsg.cpp_FUN_005445c0
// Address: 005445c0
undefined FUN_005445c0();

// Original: support_newmsg.cpp_freeBitmap_FUN_00544730
// Address: 00544730
void freeBitmap(CAlphaBitmap * * objs);

// Original: support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
// Address: 00544750
void freeSkullBitmaps(CAlphaBitmap * bitmap);
