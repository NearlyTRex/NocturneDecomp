// Name: sound_mp3.cpp_CFileBitStream_readBit_FUN_00525be0
// Address: 00525be0
// Address Range: [[00525be0, 00525ccb]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream *this_ptr)

#include "nocturne.h"

uint __cdecl sound_mp3_cpp_CFileBitStream_readBit_FUN_00525be0(CFileBitStream *this_ptr)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + 1;
  if (*(int *)(this_ptr + 0x14) == 0) {
    *(uint *)(this_ptr + 0x14) = 8;
    iVar4 = *(int *)(this_ptr + 0x10) + -1;
    *(int *)(this_ptr + 0x10) = iVar4;
    if ((iVar4 < 4) || (iVar4 < *(int *)(this_ptr + 0x18))) {
      if (*(int *)(this_ptr + 0x18) == 0) {
        for (iVar4 = *(int *)(this_ptr + 0x10); -1 < iVar4; iVar4 = iVar4 + -1) {
          *(byte *)
           (*(int *)(this_ptr + 4) +
           ((*(int *)(this_ptr + 8) + -1) - *(int *)(this_ptr + 0x10)) + iVar4) =
               *(byte *)(*(int *)(this_ptr + 4) + iVar4);
        }
        iVar4 = (*(int *)(this_ptr + 8) + -2) - *(int *)(this_ptr + 0x10);
        while ((-1 < iVar4 && (*(int *)(this_ptr + 0x18) == 0))) {
          iVar3 = 0;
          if (0 < *(int *)(this_ptr + 0x28)) {
            iVar3 = *(int *)(this_ptr + 4) + iVar4;
            iVar4 = iVar4 + -1;
            iVar3 = _fread(iVar3,1,1,*(uint *)this_ptr);
          }
          if (iVar3 == 1) {
            *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + -1;
          }
          else {
            *(int *)(this_ptr + 0x18) = iVar4 + 1;
          }
        }
        *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 8) + -1;
      }
      else {
        *(uint *)(this_ptr + 0x1c) = 1;
      }
    }
  }
  iVar4 = *(int *)(this_ptr + 0x14) + -1;
  bVar1 = *(byte *)(*(int *)(this_ptr + 4) + *(int *)(this_ptr + 0x10));
  uVar2 = *(uint *)(&DAT_00620690 + iVar4 * 4);
  *(int *)(this_ptr + 0x14) = iVar4;
  return (uVar2 & bVar1) >> ((byte)iVar4 & 0x1f);
}
