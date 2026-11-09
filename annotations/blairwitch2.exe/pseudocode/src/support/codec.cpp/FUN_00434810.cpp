// Name: support_codec.cpp_FUN_00434810
// Address: 00434810
// Address Range: [[00434810, 00434908]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00434810(int param_1,int *param_2,undefined4 param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00434810(int param_1,int *param_2,uint param_3)

{
  CLZWDictionary *this_ptr;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  this_ptr = (CLZWDictionary *)(param_1 + 4);
  do {
    if (-1 < *(int *)(param_1 + 0x34)) {
      iVar3 = support_codec_cpp_FUN_00434570
                        (this_ptr,*(uint *)(param_1 + 0x30),param_1 + 0x18,param_3);
      if (iVar3 != 0) {
        if (iVar3 == -1) {
          return 2;
        }
        if (iVar3 != -2) {
          return 0;
        }
      }
      *(uint *)(param_1 + 0x34) = 0xffffffff;
      if ((*(int *)(param_1 + 0x38) < 0) ||
         (iVar4 = support_codec_cpp_CLZWDictionary_addNode_FUN_004343f0
                            (this_ptr,*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x38)), iVar4 == 0
         )) {
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x30);
      }
      else {
        *(uint *)(param_1 + 0x38) = 0xffffffff;
      }
      uVar1 = *(uint *)(param_1 + 0x3c);
      *(uint *)(param_1 + 0x3c) = 0xffffffff;
      *(uint *)(param_1 + 0x2c) = uVar1;
      *(uint *)(param_1 + 0x30) = uVar1;
      if (iVar3 != 0) {
        return 2;
      }
    }
    uVar2 = (**(code **)(*param_2 + 4))(param_2);
    if ((int)uVar2 < 0) {
      if (uVar2 != 0xffffffff) {
        return 0;
      }
      return 1;
    }
    uVar2 = *(uint *)(param_1 + 0x28) & uVar2;
    iVar3 = support_codec_cpp_CLZWDictionary_findCode_FUN_004343b0
                      (this_ptr,uVar2,*(int *)(param_1 + 0x30));
    if (iVar3 < 0) {
      *(uint *)(param_1 + 0x3c) = uVar2;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x30);
    }
    else {
      *(int *)(param_1 + 0x30) = iVar3;
    }
  } while( true );
}
