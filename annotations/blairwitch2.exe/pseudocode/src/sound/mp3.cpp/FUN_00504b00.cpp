// Name: sound_mp3.cpp_FUN_00504b00
// Address: 00504b00
// Address Range: [[00504b00, 00504c72]]
// Convention: __cdecl
// Signature: uint __cdecl sound_mp3_cpp_FUN_00504b00(CFileBitStream *this_ptr,int num_bits)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_mp3_cpp_FUN_00504b00(CFileBitStream *this_ptr,int num_bits)

{
  int iVar1;
  int iVar2;
  uint local_14;
  
  local_14 = 0;
  if (0x20 < num_bits) {
    _DAT_01d046a0 = "..\\sound\\mp3.cpp";
    _DAT_01d046a4 = 0x2ab;
    core_main_c_FUN_004e4500("Cannot read or write more than %d bits at a time.  File: %s",0x20,&DAT_01d23558);
  }
  *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + num_bits;
  do {
    if (num_bits < 1) {
      return local_14;
    }
    if (*(int *)(this_ptr + 0x14) == 0) {
      *(uint *)(this_ptr + 0x14) = 8;
      iVar2 = *(int *)(this_ptr + 0x10) + -1;
      *(int *)(this_ptr + 0x10) = iVar2;
      if ((iVar2 < 4) || (iVar2 < *(int *)(this_ptr + 0x18))) {
        if (*(int *)(this_ptr + 0x18) == 0) {
          for (iVar2 = *(int *)(this_ptr + 0x10); -1 < iVar2; iVar2 = iVar2 + -1) {
            *(byte *)
             (*(int *)(this_ptr + 4) +
             ((*(int *)(this_ptr + 8) + -1) - *(int *)(this_ptr + 0x10)) + iVar2) =
                 *(byte *)(*(int *)(this_ptr + 4) + iVar2);
          }
          iVar2 = (*(int *)(this_ptr + 8) + -2) - *(int *)(this_ptr + 0x10);
          if (iVar2 < 0) {
LAB_00504c11:
            *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 8) + -1;
          }
          else {
            do {
              while( true ) {
                if (*(int *)(this_ptr + 0x18) != 0) goto LAB_00504c11;
                iVar1 = 0;
                if (0 < *(int *)(this_ptr + 0x28)) {
                  iVar1 = iVar2 + *(int *)(this_ptr + 4);
                  iVar2 = iVar2 + -1;
                  iVar1 = _fread(iVar1,1,1,*(uint *)this_ptr);
                }
                if (iVar1 != 1) break;
                *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + -1;
                if (iVar2 < 0) {
                  *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 8) + -1;
                  goto LAB_00504b2c;
                }
              }
              *(int *)(this_ptr + 0x18) = iVar2 + 1;
            } while (-1 < iVar2);
            *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 8) + -1;
          }
        }
        else {
          *(uint *)(this_ptr + 0x1c) = 1;
        }
      }
    }
LAB_00504b2c:
    iVar2 = *(int *)(this_ptr + 0x14);
    if (num_bits < iVar2) {
      iVar2 = num_bits;
    }
    num_bits = num_bits - iVar2;
    iVar2 = *(int *)(this_ptr + 0x14) - iVar2;
    local_14 = local_14 |
               ((int)((uint)*(byte *)(*(int *)(this_ptr + 4) + *(int *)(this_ptr + 0x10)) &
                     *(uint *)(&DAT_00619250 + *(int *)(this_ptr + 0x14) * 4)) >>
               ((byte)iVar2 & 0x1f)) << ((byte)num_bits & 0x1f);
    *(int *)(this_ptr + 0x14) = iVar2;
  } while( true );
}
