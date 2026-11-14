// Name: support_codec.cpp_FUN_00442e10
// Address: 00442e10
// Address Range: [[00442e10, 00442ef2]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_00442e10(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_00442e10(int *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  uint uVar3;
  CInStreamFile CStack_38;
  COutStreamFile CStack_c;
  
  support_trstream_cpp_CInStreamFile_ctorOpen_FUN_005a0930(&CStack_38,param_2,1);
  bVar1 = support_trstream_cpp_CInStreamFile_isOpen_FUN_005a0d70(&CStack_38);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar3 = 0;
    goto LAB_00442eb5;
  }
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005a17f0(&CStack_c,param_3,&DAT_005d6a55);
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_005a1990(&CStack_c);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar2 = (**(code **)(*param_1 + 8))(param_1,&CStack_38,&CStack_c);
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_c);
    uVar3 = 1;
    if (iVar2 != 1) goto LAB_00442e9b;
  }
  else {
LAB_00442e9b:
    uVar3 = 0;
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&CStack_c,0);
LAB_00442eb5:
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_38,0);
  return uVar3;
}
