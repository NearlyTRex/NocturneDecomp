// Name: FUN_004571f0
// Address: 004571f0
// Address Range: [[004571f0, 0045743f] [004574af, 004574da]]
// Convention: unknown
// Signature: void FUN_004571f0(int param_1,undefined4 param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004571f0(int param_1,uint param_2,float *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  _fread(param_1,0x20,1,param_2);
  _fread(param_1 + 0x20,4,1,param_2);
  _fread(param_1 + 0x24,4,1,param_2);
  FUN_00456f60(param_1);
  _fread(param_1 + 0x33c,0xc,1,param_2);
  _fread(param_1 + 0x348,0xc,1,param_2);
  _fread(param_1 + 0x354,0xc,1,param_2);
  _fread(param_1 + 0x360,0xc,1,param_2);
  iVar5 = 0;
  _fread(param_1 + 0x38,4,1,param_2);
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar6 = param_1 + 0x44;
    do {
      iVar5 = iVar5 + 1;
      _fread(iVar6,0x10,1,param_2);
      iVar6 = iVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x38));
  }
  _fread(param_1 + 0x28,4,1,param_2);
  _fread(*(uint *)(param_1 + 0x2c),0xc,*(uint *)(param_1 + 0x20),param_2);
  _fread(*(uint *)(param_1 + 0x30),0xc,*(uint *)(param_1 + 0x20),param_2);
  iVar5 = _strcmp(param_1,"newformat");
  if (iVar5 == 0) {
    _fread(*(uint *)(param_1 + 0x34),0x20,*(uint *)(param_1 + 0x24),param_2);
  }
  else {
    iVar5 = 0;
    _fread(0x1af4ef0,0x48,*(uint *)(param_1 + 0x24),param_2);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar4 = 0;
      iVar6 = 0;
      do {
        *(uint *)(*(int *)(param_1 + 0x34) + iVar6) = *(uint *)(iVar4 + 0x1af4ef8);
        *(uint *)(*(int *)(param_1 + 0x34) + iVar6 + 4) = *(uint *)(iVar4 + 0x1af4efc);
        *(uint *)(*(int *)(param_1 + 0x34) + 8 + iVar6) = *(uint *)(iVar4 + 0x1af4f00);
        *(uint *)(*(int *)(param_1 + 0x34) + 0xc + iVar6) = *(uint *)(iVar4 + 0x1af4f04)
        ;
        *(uint *)(*(int *)(param_1 + 0x34) + 0x10 + iVar6) =
             *(uint *)(iVar4 + 0x1af4f08);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x14 + iVar6) =
             *(uint *)(iVar4 + 0x1af4f14);
        *(uint *)(*(int *)(param_1 + 0x34) + 0x18 + iVar6) =
             *(uint *)(iVar4 + 0x1af4f20);
        if (*(int *)(iVar4 + 0x1af4ef4) == 3) {
          *(uint *)(*(int *)(param_1 + 0x34) + 0x1c + iVar6) = 0xffffffff;
        }
        else {
          *(uint *)(*(int *)(param_1 + 0x34) + iVar6 + 0x1c) =
               *(uint *)(iVar4 + 0x1af4f2c);
        }
        iVar6 = iVar6 + 0x20;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar5 < *(int *)(param_1 + 0x24));
    }
  }
  if (param_3 != (float *)0x0) {
    fVar7 = (float10)_DAT_0057d48e;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    iVar5 = *(int *)(param_1 + 0x20);
    iVar6 = 0;
    fVar8 = (float10)round((float10)*param_3 * fVar7);
    fVar9 = (float10)round((float10)fVar2 * fVar7);
    fVar7 = (float10)round((float10)fVar3 * fVar7);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        piVar1 = (int *)(iVar5 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar8);
        piVar1 = (int *)(iVar5 + 4 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        piVar1 = (int *)(iVar5 + 8 + *(int *)(param_1 + 0x2c));
        *piVar1 = *piVar1 - (int)ROUND(fVar7);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(param_1);
  fVar2 = (float)_DAT_0057d496;
  *(float *)(param_1 + 0x36c) = (float)*(int *)(param_1 + 0x354) * fVar2;
  *(float *)(param_1 + 0x370) = (float)*(int *)(param_1 + 0x358) * fVar2;
  *(float *)(param_1 + 0x374) = (float)*(int *)(param_1 + 0x35c) * fVar2;
  *(float *)(param_1 + 0x378) = (float)*(int *)(param_1 + 0x360) * fVar2;
  *(float *)(param_1 + 0x37c) = (float)*(int *)(param_1 + 0x364) * fVar2;
  *(float *)(param_1 + 0x380) = (float)*(int *)(param_1 + 0x368) * fVar2;
  return;
}
