// Name: wincore_winrun.cpp_pollController_FUN_00581f50
// Address: 00581f50
// Address Range: [[00581f50, 0058235a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_winrun_cpp_pollController_FUN_00581f50(int controller_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_winrun_cpp_pollController_FUN_00581f50(int controller_index)

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
  piVar8 = (int *)(iVar7 + 0x2d22c24);
  if ((*piVar8 == 0) || (*piVar8 == 4)) {
    return;
  }
  *(uint *)(iVar7 + 0x2d22c80) = *(uint *)(iVar7 + 0x2d22c7c);
  *(uint *)(iVar7 + 0x2d22c88) = *(uint *)(iVar7 + 0x2d22c84);
  puVar9 = (uint *)(iVar7 + 0x2d22c8c);
  puVar10 = (uint *)(iVar7 + 0x2d22cac);
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
  if (_DAT_02d22c1c == (code *)0x0) {
    memset(&jStack_24,0,0x10);
    MVar5 = joyGetPos(*(UINT *)(controller_index * 4 + 0x2d22ed4),&jStack_24);
    if (MVar5 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x2d22c28) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                        (jStack_24.wXpos,(int *)(iVar6 + 0x2d22ee4),-1.0,1.0);
      *(float *)(iVar7 + 0x2d22c44) = fVar2;
      fStack0000000c =
           wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                     (unaff_EBP,(int *)(iVar6 + 0x2d22ef0),-1.0,1.0);
      *(float *)(iVar7 + 0x2d22c48) = fStack0000000c;
      if (*(int *)(iVar7 + 0x2d22c38) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                          (controller_index,(int *)(iVar6 + 0x2d22efc),0.0,1.0);
        *(float *)(iVar7 + 0x2d22c4c) = fVar2;
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
      *(uint *)(iVar7 + 0x2d22c28) = 0;
    }
  }
  else {
    memset(&stack0xffffffa8,0,0x34);
    iVar11 = 0x34;
    iVar6 = (*_DAT_02d22c1c)(*(uint *)(controller_index * 4 + 0x2d22ed4),&stack0xffffffa8);
    if (iVar6 == 0) {
      iVar6 = controller_index * 0x30;
      *(uint *)(iVar7 + 0x2d22c28) = 1;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                        (iVar11,(int *)(iVar6 + 0x2d22ee4),-1.0,1.0);
      *(float *)(iVar7 + 0x2d22c44) = fVar2;
      fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                        (in_stack_ffffffbc,(int *)(iVar6 + 0x2d22ef0),-1.0,1.0);
      *(float *)(iVar7 + 0x2d22c48) = fVar2;
      if (*(int *)(iVar7 + 0x2d22c38) != 0) {
        fVar3 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                          (iStack_30,(int *)(iVar6 + 0x2d22efc),0.0,1.0);
        *(float *)(iVar7 + 0x2d22c4c) = fVar3;
      }
      if (*(int *)(iVar7 + 0x2d22c3c) != 0) {
        fVar2 = wincore_winrun_cpp_normalizeControllerAxis_FUN_00581e70
                          (jStack_24.wZpos,(int *)((int)fVar2 * 0x30 + 0x2d22f08),-1.0,1.0);
        *(float *)(iVar7 + 0x2d22c50) = fVar2;
      }
      iVar6 = 0;
      piVar4 = piVar8;
      do {
        bVar1 = (byte)iVar6;
        iVar6 = iVar6 + 1;
        piVar4[0x1a] = (uint)((1 << (bVar1 & 0x1f) & unaff_EBP) != 0);
        piVar4 = piVar4 + 1;
      } while (iVar6 < 8);
      if (*(int *)(iVar7 + 0x2d22c40) != 0) {
        if (unaff_ESI < 18000) {
          if (unaff_ESI == 0) {
            *(uint *)(iVar7 + 0x2d22c58) = 0xffffffff;
            goto LAB_00582110;
          }
          if (unaff_ESI == 9000) {
            *(uint *)(iVar7 + 0x2d22c54) = 1;
            goto LAB_00582110;
          }
        }
        else {
          if (unaff_ESI < 0x4651) {
            *(uint *)(iVar7 + 0x2d22c58) = 1;
            goto LAB_00582110;
          }
          if ((26999 < unaff_ESI) && (unaff_ESI < 0x6979)) {
            *(uint *)(iVar7 + 0x2d22c54) = 0xffffffff;
            goto LAB_00582110;
          }
        }
        *(uint *)(iVar7 + 0x2d22c58) = 0;
        *(uint *)(iVar7 + 0x2d22c54) = 0;
      }
    }
    else {
      *(uint *)(iVar7 + 0x2d22c28) = 0;
    }
  }
LAB_00582110:
  if (*(int *)(iVar7 + 0x2d22c7c) != *(int *)(iVar7 + 0x2d22c80)) {
    *(int *)(iVar7 + 0x2d22c54) = *(int *)(iVar7 + 0x2d22c7c);
  }
  if (*(int *)(iVar7 + 0x2d22c84) != *(int *)(iVar7 + 0x2d22c88)) {
    *(int *)(iVar7 + 0x2d22c58) = *(int *)(iVar7 + 0x2d22c84);
  }
  piVar4 = piVar8;
  do {
    if (piVar4[0x1a] != piVar4[0x22]) {
      piVar4[0xe] = piVar4[0x1a];
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 != (int *)(iVar7 + 0x2d22c44));
  if ((*(int *)(iVar7 + 0x2d22c7c) == 0) && (*(int *)(iVar7 + 0x2d22c84) == 0)) {
    iVar11 = 0;
    iVar6 = *(int *)(iVar7 + 0x2d22c8c);
    piVar4 = piVar8;
    while (iVar6 == 0) {
      iVar11 = iVar11 + 1;
      if (7 < iVar11) goto LAB_00582177;
      iVar6 = piVar4[0x1b];
      piVar4 = piVar4 + 1;
    }
    *(uint *)(iVar7 + 0x2d22ccc) = 0;
LAB_00582177:
    iVar6 = 0;
    while (ABS((float)piVar8[8]) <= (float)_DAT_005d7efa) {
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
      if (3 < iVar6) {
        return;
      }
    }
  }
  *(uint *)(iVar7 + 0x2d22ccc) = 0;
  return;
}
