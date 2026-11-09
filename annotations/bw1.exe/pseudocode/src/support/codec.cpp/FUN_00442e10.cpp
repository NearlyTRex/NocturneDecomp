// Name: support_codec.cpp_FUN_00442e10
// Address: 00442e10
// Address Range: [[00442e10, 00442ef2]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00442e10(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00442e10(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  CInStreamFile CStack_38;
  COutStreamFile CStack_c;
  
  unkaddr_0059f520_cpp_FUN_005a0930(&CStack_38,param_2,1);
  iVar1 = unkaddr_0059f520_cpp_FUN_005a0d70(&CStack_38);
  if (iVar1 == 0) {
    uVar2 = 0;
    goto LAB_00442eb5;
  }
  support_trstream_cpp_FUN_005a17f0(&CStack_c,param_3,&DAT_005d6a55);
  iVar1 = support_trstream_cpp_FUN_005a1990(&CStack_c);
  if (iVar1 == 0) {
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
    unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,&CStack_38,&CStack_c);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_c);
    uVar2 = 1;
    if (iVar1 != 1) goto LAB_00442e9b;
  }
  else {
LAB_00442e9b:
    uVar2 = 0;
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
LAB_00442eb5:
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
  return uVar2;
}
