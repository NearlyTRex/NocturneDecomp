// Name: support_codec.cpp_decodeArmorChar_FUN_00443830
// Address: 00443830
// Address Range: [[00443830, 0044388c]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_decodeArmorChar_FUN_00443830(int ch)

#include "nocturne.h"

int __cdecl support_codec_cpp_decodeArmorChar_FUN_00443830(int ch)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  iVar2 = 0;
  do {
    iVar1 = iVar2 + iVar3 >> 1;
    if (ch == (uint)(byte)"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]) {
      return iVar1;
    }
    if (ch < (int)(uint)(byte)"!()*+0123456789ABCDEFGHJKLMNPQRSTUVWXYZabcdefghijkmnopqrstuvwxyz"[iVar1]) {
      iVar3 = iVar1 + -1;
    }
    else {
      iVar2 = iVar1 + 1;
    }
  } while (iVar2 <= iVar3);
  if (ch != 0x4f) {
    if ((ch != 0x49) && (ch != 0x6c)) {
      return -1;
    }
    iVar3 = support_codec_cpp_decodeArmorChar_FUN_00443830(0x31);
    return iVar3;
  }
  iVar3 = support_codec_cpp_decodeArmorChar_FUN_00443830(0x30);
  return iVar3;
}
