// Name: core_dpart.cpp_FUN_00479c70
// Address: 00479c70
// Address Range: [[00479c70, 00479ebf] [00479f2f, 00479f5a]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00479c70(CDemonPart *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00479c70(CDemonPart *param_1,uint param_2,uint param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonPart *pCVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  _fread(param_1,0x20,1,param_2);
  _fread(param_1 + 0x20,4,1,param_2);
  _fread(param_1 + 0x24,4,1,param_2);
  core_dpart_cpp_FUN_004799e0(param_1);
  _fread(param_1 + 0x33c,0xc,1,param_2);
  _fread(param_1 + 0x348,0xc,1,param_2);
  _fread(param_1 + 0x354,0xc,1,param_2);
  _fread(param_1 + 0x360,0xc,1,param_2);
  iVar5 = 0;
  _fread(param_1 + 0x38,4,1,param_2);
  if (0 < *(int *)(param_1 + 0x38)) {
    pCVar6 = param_1 + 0x44;
    do {
      iVar5 = iVar5 + 1;
      _fread(pCVar6,0x10,1,param_2);
      pCVar6 = pCVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x38));
  }
  _fread(param_1 + 0x28,4,1,param_2);
  _fread(*(uint *)(param_1 + 0x2c),0xc,*(uint *)(param_1 + 0x20),param_2);
  _fread(*(uint *)(param_1 + 0x30),0xc,*(uint *)(param_1 + 0x20),param_2);
  iVar5 = _strcmp((char *)param_1,"newformat");
  if (iVar5 == 0) {
    _fread(*(uint *)(param_1 + 0x34),0x20,*(uint *)(param_1 + 0x24),param_2);
  }
  else {
    iVar5 = 0;
    _fread(0x1b68944,0x48,*(uint *)(param_1 + 0x24),param_2);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        *(uint *)(*(int *)(param_1 + 0x34) + iVar3) = *(uint *)(iVar4 + 0x1b6894c);
        *(uint *)(*(int *)(param_1 + 0x34) + iVar3 + 4) = *(uint *)(iVar4 + 0x1b68950);
        *(uint *)(*(int *)(param_1 + 0x34) + 8 + iVar3) = *(uint *)(iVar4 + 0x1b68954);
        *(uint *)(*(int *)(param_1 + 0x34) + 0xc + iVar3) = *(uint *)(iVar4 + 0x1b68958)
        ;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10 + iVar3) =
             *(uint *)(iVar4 + 0x1b6895c);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x14 + iVar3) =
             *(uint *)(iVar4 + 0x1b68968);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x18 + iVar3) =
             *(uint *)(iVar4 + 0x1b68974);
        if (*(int *)(iVar4 + 0x1b68948) == 3) {
          *(uint *)(*(int *)(param_1 + 0x34) + 0x1c + iVar3) = 0xffffffff;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x34) + iVar3 + 0x1c) =
               *(uint *)(iVar4 + 0x1b68980);
        }
        iVar3 = iVar3 + 0x20;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0x24));
    }
  }
  if (param_4 != (float *)0x0) {
    fVar7 = (float10)_DAT_005dabfd;
    fVar8 = (float10)*param_4 * fVar7;
    fVar9 = (float10)param_4[1] * fVar7;
    fVar7 = (float10)param_4[2] * fVar7;
    iVar5 = *(int *)(param_1 + 0x20);
    iVar3 = 0;
    round();
    round();
    round();
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        *(int *)(iVar5 + *(int *)(param_1 + 0x2c)) =
             *(int *)(iVar5 + *(int *)(param_1 + 0x2c)) - (int)ROUND(fVar8);
        piVar1 = (int *)(iVar5 + 4 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        piVar1 = (int *)(iVar5 + 8 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar7);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 0x20));
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0(param_1);
  fVar2 = (float)_DAT_005dac05;
  *(float *)(param_1 + 0x36c) = (float)*(int *)(param_1 + 0x354) * fVar2;
  *(float *)(param_1 + 0x370) = (float)*(int *)(param_1 + 0x358) * fVar2;
  *(float *)(param_1 + 0x374) = (float)*(int *)(param_1 + 0x35c) * fVar2;
  *(float *)(param_1 + 0x378) = (float)*(int *)(param_1 + 0x360) * fVar2;
  *(float *)(param_1 + 0x37c) = (float)*(int *)(param_1 + 0x364) * fVar2;
  *(float *)(param_1 + 0x380) = (float)*(int *)(param_1 + 0x368) * fVar2;
  return;
}
