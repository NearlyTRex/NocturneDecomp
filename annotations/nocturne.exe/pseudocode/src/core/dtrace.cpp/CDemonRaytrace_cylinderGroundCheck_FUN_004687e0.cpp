// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0
// Address: 004687e0
// Address Range: [[004687e0, 00468a11]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0(int param_1,float *param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  uint *unaff_EBX;
  float fVar3;
  float *unaff_ESI;
  int iVar4;
  uint unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  uint uVar13;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  uint local_54 [2];
  float local_4c;
  float local_48;
  float local_44;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_20;
  
  local_4c = *param_2;
  local_44 = param_2[2];
  local_64 = *param_2;
  local_48 = param_2[1] + _DAT_0057e1ea;
  local_5c = param_2[2];
  local_60 = param_2[1] + _DAT_0057e1ee;
  local_38 = local_4c - *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x28);
  fVar5 = (float10)local_44 - (float10)*(float *)(param_1 + 0x18);
  local_34 = (float)fVar5;
  local_2c = 1.0 / *(float *)(param_1 + 0x30);
  fVar11 = (float10)local_2c;
  fVar6 = (float10)local_38;
  fVar7 = (float10)local_34;
  fVar12 = (float10)local_2c;
  bVar1 = false;
  uStack_68 = 0x4688b5;
  fVar8 = (float10)round();
  uStack_6c = 0x4688bc;
  fVar9 = (float10)round();
  local_44 = -1e+30;
  uStack_70 = 0x4688db;
  local_2c = (float)(int)ROUND(fVar9);
  local_20 = (int)ROUND(fVar8);
  fVar10 = (float10)round();
  fVar11 = (float10)round((fVar5 - (float10)param_3) * fVar11);
  fVar5 = (float10)round
                             ((fVar6 + (float10)param_3) * ((float10)1 / (float10)fVar3));
  uVar13 = 0x4688f0;
  fVar12 = (float10)round((fVar7 + (float10)param_3) * fVar12);
  local_58 = (int)ROUND(fVar10);
  local_34 = (float)(int)ROUND(fVar11);
  local_38 = (float)(int)ROUND(fVar5);
  local_2c = (float)(int)ROUND(fVar12);
  if ((int)ROUND(fVar9) <= (int)ROUND(fVar8)) {
    do {
      iVar4 = local_58;
      if (local_58 <= (int)local_38) {
        do {
          fVar3 = local_34;
          if ((int)local_34 <= (int)local_2c) {
            do {
              iVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                                (param_1,iVar4,local_30,fVar3,uVar13);
              if (iVar2 != 0) {
                iVar2 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
                                  (iVar2,&local_64,unaff_EDI,local_54,&uStack_70,&local_48);
                if (iVar2 != 0) {
                  bVar1 = true;
                }
              }
              fVar3 = (float)((int)fVar3 + 1);
            } while ((int)fVar3 <= (int)local_2c);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)local_38);
      }
      if (bVar1) {
        if ((unaff_EBX != (uint *)0x0) && (&uStack_70 != unaff_EBX)) {
          *unaff_EBX = uStack_70;
          unaff_EBX[1] = uStack_6c;
          unaff_EBX[2] = uStack_68;
        }
        if (unaff_ESI != (float *)0x0) {
          *unaff_ESI = local_48;
        }
        return local_54[0];
      }
      local_30 = local_30 + -1;
    } while (local_3c <= local_30);
  }
  if (unaff_ESI != (float *)0x0) {
    *unaff_ESI = 1.4013e-45;
  }
  if (unaff_EBX != (uint *)0x0) {
    unaff_EBX[1] = 0x3f800000;
    unaff_EBX[2] = 0;
    *unaff_EBX = 0;
  }
  return 0x4688e9;
}
