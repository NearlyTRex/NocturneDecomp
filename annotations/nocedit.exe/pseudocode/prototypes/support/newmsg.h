#pragma once

// Function prototypes for support/newmsg.cpp
// Generated from Ghidra function signatures

// Original: support_newmsg.cpp_readMessageFile_FUN_00543e40
// Address: 00543e40
void __cdecl readMessageFile(char *message_file);

// Original: support_newmsg.cpp_findLocalizedString_FUN_00544170
// Address: 00544170
char * __cdecl findLocalizedString(char *key,int lower_bound,int upper_bound);

// Original: support_newmsg.cpp_getLocalizedString_FUN_005441f0
// Address: 005441f0
char * __cdecl getLocalizedString(char *key);

// Original: support_newmsg.cpp_decryptMessage_FUN_00544270
// Address: 00544270
char * __cdecl decryptMessage(char *encrypted_msg);
