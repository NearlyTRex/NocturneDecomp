// Name: wincore_winrun.cpp_pollController_FUN_005902a0
// Address: 005902a0
// Address Range: [[005902a0, 00590631]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollController_FUN_005902a0(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_pollController_FUN_005902a0(int controller_index)

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
  uint *puVar9;
  uint *puVar10;
  float fStack0000000c;
  uint in_stack_00000018;
  int iVar11;
  int in_stack_ffffffbc;
  int iStack_30;
  joyinfo_tag jStack_24;
  
  iVar7 = controller_index * 0xac;
  piVar8 = (int *)(iVar7 + 0x26656c4);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2665720) = *(uint *)(iVar7 + 0x266571c);
  *(uint *)(iVar7 + 0x2665728) = *(uint *)(iVar7 + 0x2665724);
  puVar9 = (uint *)(iVar7 + 0x266572c);
  puVar10 = (uint *)(iVar7 + 0x266574c);
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
  if (_DAT_026656bc == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar5 = joyGetPos(*(UINT *)(controller_index * 4 + 0x2665974),&jStack_24);
    if (MVar5 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x26656c8) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                        (jStack_24.wXpos,(int *)(iVar6 + 0x2665984),-1.0,1.0);
      *(float *)(iVar7 + 0x26656e4) = fVar2;
      fStack0000000c =
           wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                     (unaff_EBP,(int *)(iVar6 + 0x2665990),-1.0,1.0);
      *(float *)(iVar7 + 0x26656e8) = fStack0000000c;
      if (*(int *)(iVar7 + 0x26656d8) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                          (controller_index,(int *)(iVar6 + 0x266599c),0.0,1.0);
        *(float *)(iVar7 + 0x26656ec) = fVar2;
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
      *(uint *)(iVar7 + 0x26656c8) = 0;
    }
  }
  else {
    memset(&stack0xffffffa8,0,0x34);
    iVar11 = 0x34;
    iVar6 = (*_DAT_026656bc)(*(uint *)(controller_index * 4 + 0x2665974),&stack0xffffffa8);
    if (iVar6 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x26656c8) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                        (iVar11,(int *)(iVar6 + 0x2665984),-1.0,1.0);
      *(float *)(iVar7 + 0x26656e4) = fVar2;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                        (in_stack_ffffffbc,(int *)(iVar6 + 0x2665990),-1.0,1.0);
      *(float *)(iVar7 + 0x26656e8) = fVar2;
      if (*(int *)(iVar7 + 0x26656d8) != 0) {
        fVar3 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                          (iStack_30,(int *)(iVar6 + 0x266599c),0.0,1.0);
        *(float *)(iVar7 + 0x26656ec) = fVar3;
      }
      if (*(int *)(iVar7 + 0x26656dc) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_005901c0
                          (jStack_24.wZpos,(int *)((int)fVar2 * 0x30 + 0x26659a8),-1.0,1.0);
        *(float *)(iVar7 + 0x26656f0) = fVar2;
      }
      iVar6 = 0;
      piVar4 = piVar8;
      do {
        bVar1 = (byte)iVar6;
        iVar6 = iVar6 + 1;
        piVar4[0x1a] = (uint)((1 << (bVar1 & 0x1f) & unaff_EBP) != 0);
        piVar4 = piVar4 + 1;
      } while (iVar6 < 8);
    }
    else {
      *(uint *)(iVar7 + 0x26656c8) = 0;
    }
  }
  if (*(int *)(iVar7 + 0x266571c) != *(int *)(iVar7 + 0x2665720)) {
    *(int *)(iVar7 + 0x26656f4) = *(int *)(iVar7 + 0x266571c);
  }
  if (*(int *)(iVar7 + 0x2665724) != *(int *)(iVar7 + 0x2665728)) {
    *(int *)(iVar7 + 0x26656f8) = *(int *)(iVar7 + 0x2665724);
  }
  piVar4 = piVar8;
  do {
    if (piVar4[0x1a] != piVar4[0x22]) {
      piVar4[0xe] = piVar4[0x1a];
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 != (int *)(iVar7 + 0x26656e4));
  if ((*(int *)(iVar7 + 0x266571c) == 0) && (*(int *)(iVar7 + 0x2665724) == 0)) {
    iVar11 = 0;
    iVar6 = *(int *)(iVar7 + 0x266572c);
    piVar4 = piVar8;
    while (iVar6 == 0) {
      iVar11 = iVar11 + 1;
      if (7 < iVar11) goto LAB_00590497;
      iVar6 = piVar4[0x1b];
      piVar4 = piVar4 + 1;
    }
    *(uint *)(iVar7 + 0x266576c) = 0;
LAB_00590497:
    iVar6 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005eeafd) {
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar6) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x266576c) = 0;
  return;
}
