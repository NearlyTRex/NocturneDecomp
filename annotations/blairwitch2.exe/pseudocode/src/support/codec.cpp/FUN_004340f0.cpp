// Name: support_codec.cpp_FUN_004340f0
// Address: 004340f0
// Address Range: [[004340f0, 004341d0]]
// Convention: unknown
// Signature: undefined4 support_codec_cpp_FUN_004340f0(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint support_codec_cpp_FUN_004340f0(int *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  uint uVar3;
  CInStreamFile CStack_34;
  COutStreamFile CStack_c;
  
  support_trstream_cpp_CInStreamFile_ctorOpen_FUN_0057cdb0(&CStack_34,param_2);
  bVar1 = support_trstream_cpp_CInStreamFile_isOpen_FUN_0057d130(&CStack_34);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar3 = 0;
    goto LAB_00434193;
  }
  support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(&CStack_c,param_3,&DAT_005cd993);
  bVar1 = support_trstream_cpp_COutStreamFile_isOpen_FUN_0057dd40(&CStack_c);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&CStack_c,0);
    support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_34,0);
    return 0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  iVar2 = (**(code **)(*param_1 + 8))(param_1,&CStack_34,&CStack_c);
  if (iVar2 == 1) {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&CStack_c);
    uVar3 = 1;
    if (iVar2 != 1) goto LAB_00434179;
  }
  else {
LAB_00434179:
    uVar3 = 0;
  }
  support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&CStack_c,0);
LAB_00434193:
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&CStack_34,0);
  return uVar3;
}
