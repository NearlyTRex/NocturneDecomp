// Name: core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0
// Address: 004527a0
// Address Range: [[004527a0, 00452989]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_readBinaryModel_FUN_004527a0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  iVar1 = _fread(&local_2c,0x18,1,param_2);
  if (iVar1 != 1) goto LAB_00452819;
  do {
    if ((local_2c < 3) || (4 < local_2c)) {
      PTR_01cc4800 = "..\\core\\dmodel.cpp";
      INT_01cc4804 = 0xed;
      core_main_c_FUN_004c8440("KFM file is invalid version %d",local_2c);
    }
    local_14 = 0;
    if ((local_2c < 4) ||
       (iVar1 = _fread(&local_14,4,1,param_2), iVar1 == 1)) {
      core_dmodel_cpp_CKeyFramedModel_allocate_FUN_004533e0
                (param_1,local_28,local_24,local_20,local_1c,local_18);
      iVar1 = _fread(*(uint *)(param_1 + 0x10c),
                         *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x100) * 0xc,1,param_2);
      if ((iVar1 == 1) &&
         ((*(int *)(param_1 + 0x110) < 1 ||
          ((iVar1 = _fread(*(uint *)(param_1 + 0x114),*(int *)(param_1 + 0x110) * 0x48,1,
                               param_2), iVar1 == 1 &&
           (iVar1 = _fread(*(uint *)(param_1 + 0x118),*(int *)(param_1 + 0x110) << 2,1,
                               param_2), iVar1 == 1)))))) {
        if (0 < *(int *)(param_1 + 0x120)) {
          memset(param_1 + 0x124,0,0x120);
          for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x120); iVar1 = iVar1 + 1) {
            iVar2 = _fread(iVar1 * 0x48 + param_1 + 0x124,0x18,1,param_2);
            if (iVar2 != 1) goto LAB_00452819;
          }
        }
        iVar1 = _fread(param_1 + 0x248,*(int *)(param_1 + 0x244) << 3,1,param_2);
        if (iVar1 == 1) {
          if (local_14 != 0) {
            core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0(param_1);
            return;
          }
          return;
        }
      }
    }
LAB_00452819:
    PTR_01cc4800 = "..\\core\\dmodel.cpp";
    INT_01cc4804 = 0xe7;
    core_main_c_FUN_004c8440("Error reading keyframed model file");
  } while( true );
}
