// Name: wincore_winrun.cpp_pollController_FUN_005b3d70
// Address: 005b3d70
// Address Range: [[005b3d70, 005b417a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollController_FUN_005b3d70(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_pollController_FUN_005b3d70(int controller_index)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  MMRESULT MVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint unaff_EBP;
  uint unaff_ESI;
  uint *puVar9;
  uint *puVar10;
  float fStack0000000c;
  uint in_stack_00000018;
  int iVar11;
  int in_stack_ffffffbc;
  int iStack_30;
  joyinfo_tag jStack_24;
  
  iVar7 = controller_index * 0xac;
  piVar8 = (int *)(iVar7 + 0x2c9cf14);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2c9cf70) = *(uint *)(iVar7 + 0x2c9cf6c);
  *(uint *)(iVar7 + 0x2c9cf78) = *(uint *)(iVar7 + 0x2c9cf74);
  puVar9 = (uint *)(iVar7 + 0x2c9cf7c);
  puVar10 = (uint *)(iVar7 + 0x2c9cf9c);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(byte *)puVar10 = *(byte *)puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    puVar10 = (uint *)((int)puVar10 + 1);
  }
  if (_DAT_02c9cf0c == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar5 = joyGetPos(*(UINT *)(controller_index * 4 + 0x2c9d1c4),&jStack_24);
    if (MVar5 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x2c9cf18) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                        (jStack_24.wXpos,(int *)(iVar6 + 0x2c9d1d4),-1.0,1.0);
      *(float *)(iVar7 + 0x2c9cf34) = fVar2;
      fStack0000000c =
           wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                     (unaff_EBP,(int *)(iVar6 + 0x2c9d1e0),-1.0,1.0);
      *(float *)(iVar7 + 0x2c9cf38) = fStack0000000c;
      if (*(int *)(iVar7 + 0x2c9cf28) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                          (controller_index,(int *)(iVar6 + 0x2c9d1ec),0.0,1.0);
        *(float *)(iVar7 + 0x2c9cf3c) = fVar2;
      }
      iVar6 = 0;
      piVar4 = piVar8;
      do {
        bVar1 = (byte)iVar6;
        iVar6 = iVar6 + 1;
        piVar4[0x1a] = (uint)((in_stack_00000018 & 1 << (bVar1 & 0x1f)) != 0);
        piVar4 = piVar4 + 1;
      } while (iVar6 < 8);
    }
    else {
      *(uint *)(iVar7 + 0x2c9cf18) = 0;
    }
  }
  else {
    memset(&stack0xffffffa8,0,0x34);
    iVar11 = 0x34;
    iVar6 = (*_DAT_02c9cf0c)(*(uint *)(controller_index * 4 + 0x2c9d1c4),&stack0xffffffa8);
    if (iVar6 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x2c9cf18) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                        (iVar11,(int *)(iVar6 + 0x2c9d1d4),-1.0,1.0);
      *(float *)(iVar7 + 0x2c9cf34) = fVar2;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                        (in_stack_ffffffbc,(int *)(iVar6 + 0x2c9d1e0),-1.0,1.0);
      *(float *)(iVar7 + 0x2c9cf38) = fVar2;
      if (*(int *)(iVar7 + 0x2c9cf28) != 0) {
        fVar3 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                          (iStack_30,(int *)(iVar6 + 0x2c9d1ec),0.0,1.0);
        *(float *)(iVar7 + 0x2c9cf3c) = fVar3;
      }
      if (*(int *)(iVar7 + 0x2c9cf2c) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005b3c90
                          (jStack_24.wZpos,(int *)((int)fVar2 * 0x30 + 0x2c9d1f8),-1.0,1.0);
        *(float *)(iVar7 + 0x2c9cf40) = fVar2;
      }
      iVar6 = 0;
      piVar4 = piVar8;
      do {
        bVar1 = (byte)iVar6;
        iVar6 = iVar6 + 1;
        piVar4[0x1a] = (uint)((1 << (bVar1 & 0x1f) & unaff_EBP) != 0);
        piVar4 = piVar4 + 1;
      } while (iVar6 < 8);
      if (*(int *)(iVar7 + 0x2c9cf30) != 0) {
        if (unaff_ESI < 18000) {
          if (unaff_ESI == 0) {
            *(uint *)(iVar7 + 0x2c9cf48) = 0xffffffff;
            goto LAB_005b3f30;
          }
          if (unaff_ESI == 9000) {
            *(uint *)(iVar7 + 0x2c9cf44) = 1;
            goto LAB_005b3f30;
          }
        }
        else {
          if (unaff_ESI < 0x4651) {
            *(uint *)(iVar7 + 0x2c9cf48) = 1;
            goto LAB_005b3f30;
          }
          if ((26999 < unaff_ESI) && (unaff_ESI < 0x6979)) {
            *(uint *)(iVar7 + 0x2c9cf44) = 0xffffffff;
            goto LAB_005b3f30;
          }
        }
        *(uint *)(iVar7 + 0x2c9cf48) = 0;
        *(uint *)(iVar7 + 0x2c9cf44) = 0;
      }
    }
    else {
      *(uint *)(iVar7 + 0x2c9cf18) = 0;
    }
  }
LAB_005b3f30:
  if (*(int *)(iVar7 + 0x2c9cf6c) != *(int *)(iVar7 + 0x2c9cf70)) {
    *(int *)(iVar7 + 0x2c9cf44) = *(int *)(iVar7 + 0x2c9cf6c);
  }
  if (*(int *)(iVar7 + 0x2c9cf74) != *(int *)(iVar7 + 0x2c9cf78)) {
    *(int *)(iVar7 + 0x2c9cf48) = *(int *)(iVar7 + 0x2c9cf74);
  }
  piVar4 = piVar8;
  do {
    if (piVar4[0x1a] != piVar4[0x22]) {
      piVar4[0xe] = piVar4[0x1a];
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 != (int *)(iVar7 + 0x2c9cf34));
  if ((*(int *)(iVar7 + 0x2c9cf6c) == 0) && (*(int *)(iVar7 + 0x2c9cf74) == 0)) {
    iVar11 = 0;
    iVar6 = *(int *)(iVar7 + 0x2c9cf7c);
    piVar4 = piVar8;
    while (iVar6 == 0) {
      iVar11 = iVar11 + 1;
      if (7 < iVar11) goto LAB_005b3f97;
      iVar6 = piVar4[0x1b];
      piVar4 = piVar4 + 1;
    }
    *(uint *)(iVar7 + 0x2c9cfbc) = 0;
LAB_005b3f97:
    iVar6 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005f9ecf) {
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar6) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x2c9cfbc) = 0;
  return;
}
