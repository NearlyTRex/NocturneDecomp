// Name: core_setutil.cpp_generateSphereVertex_FUN_00515890
// Address: 00515890
// Address Range: [[00515890, 00515976]]
// Convention: unknown
// Signature: void core_setutil_cpp_generateSphereVertex_FUN_00515890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_setutil_cpp_generateSphereVertex_FUN_00515890(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  CVector3i local_38 [4];
  
  fVar3 = (float10)in_stack_00000004 * (float10)_DAT_00590fd5 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590fe1;
  fVar4 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  fVar5 = (float10)in_stack_00000010;
  fVar6 = (float10)in_stack_00000008 * (float10)_DAT_00590fe9 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590ff1;
  fVar7 = (float10)fcos(fVar6);
  fVar6 = (float10)fsin(fVar6);
  local_38[0].x = (int)ROUND((float)(fVar4 * fVar5 * fVar7) * _DAT_005a1ab0);
  local_38[0].y = (int)ROUND((float)(fVar6 * fVar5) * _DAT_005a1ab0);
  local_38[0].z = (int)ROUND((float)(fVar3 * fVar5 * fVar7) * _DAT_005a1ab0);
  iVar2 = in_stack_0000000c * 0x30;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*DAT_005ae704 + iVar2),local_38);
  piVar1 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x18 + iVar2) = 0x800000;
  *(uint *)(iVar2 + 0x1c + *piVar1) = 0x800000;
  return;
}
