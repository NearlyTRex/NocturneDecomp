// Name: core_setdir.cpp_FUN_005763a0
// Address: 005763a0
// Address Range: [[005763a0, 0057670e]]
// Convention: unknown
// Signature: undefined core_setdir.cpp_FUN_005763a0()

#include "nocturne.h"

uint core_setdir_cpp_FUN_005763a0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  uint uVar3;
  float *pfVar4;
  float *in_stack_00000004;
  float *in_stack_00000008;
  CBoundingBox3D local_c8;
  CVector3f local_b0;
  CVector3f local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  CVector3f local_80;
  CBoundingBox3D local_74;
  CVector3f local_5c;
  CVector3f local_50;
  double local_44;
  double local_3c;
  double local_34;
  float local_2c;
  CMatrix3x3f *local_28;
  CMatrix3x3f *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_74.min.x = -in_stack_00000008[3];
  local_74.min.y = -in_stack_00000008[4];
  local_74.min.z = -in_stack_00000008[5];
  if (&local_c8 != &local_74) {
    local_c8.min.x = local_74.min.x;
    local_c8.min.y = local_74.min.y;
    local_c8.min.z = local_74.min.z;
  }
  if (&local_c8.max != (CVector3f *)(in_stack_00000008 + 3)) {
    local_c8.max.x = in_stack_00000008[3];
    local_c8.max.y = in_stack_00000008[4];
    local_c8.max.z = in_stack_00000008[5];
  }
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffed8,8,&g_CVectorTypeInfo);
  local_28 = (CMatrix3x3f *)(in_stack_00000008 + 6);
  uVar3 = 0;
  local_24 = (CMatrix3x3f *)(in_stack_00000004 + 6);
  do {
    local_20 = in_stack_00000004[3];
    pfVar4 = (float *)(&stack0xfffffed8 + uVar3 * 0xc);
    while( true ) {
      local_74.max.x = local_20;
      if ((uVar3 & 2) == 0) {
        local_1c = in_stack_00000004[4];
      }
      else {
        local_1c = -in_stack_00000004[4];
      }
      local_74.max.y = local_1c;
      if ((uVar3 & 4) == 0) {
        local_18 = in_stack_00000004[5];
      }
      else {
        local_18 = -in_stack_00000004[5];
      }
      local_74.max.z = local_18;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (local_24,&local_5c,&local_74.max);
      local_8c.x = pCVar1->x + *in_stack_00000004;
      local_8c.y = pCVar1->y + in_stack_00000004[1];
      local_8c.z = pCVar1->z + in_stack_00000004[2];
      if (&local_74.max != &local_8c) {
        local_74.max.x = local_8c.x;
        local_74.max.y = local_8c.y;
        local_74.max.z = local_8c.z;
      }
      local_80.x = local_74.max.x - *in_stack_00000008;
      local_80.y = local_74.max.y - in_stack_00000008[1];
      local_80.z = local_74.max.z - in_stack_00000008[2];
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_28,&local_98,&local_80);
      if (&local_74.max != pCVar1) {
        local_74.max.x = pCVar1->x;
        local_74.max.y = pCVar1->y;
        local_74.max.z = pCVar1->z;
      }
      if (((((local_c8.min.x <= local_74.max.x) && (local_c8.min.y <= local_74.max.y)) &&
           (local_c8.min.z <= local_74.max.z)) &&
          ((local_74.max.x <= local_c8.max.x && (local_74.max.y <= local_c8.max.y)))) &&
         (local_74.max.z <= local_c8.max.z)) {
        return 1;
      }
      if ((CVector3f *)pfVar4 != &local_74.max) {
        *pfVar4 = local_74.max.x;
        pfVar4[1] = local_74.max.y;
        pfVar4[2] = local_74.max.z;
      }
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 3;
      if (7 < (int)uVar3) {
        pCVar1 = (CVector3f *)&stack0xfffffed8;
        uVar3 = 0;
        while( true ) {
          iVar2 = (uVar3 ^ 1) * 0xc;
          local_50.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_50.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_50.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_50,(CVector3f *)0x0);
          local_2c = local_14;
          local_44 = (double)local_14;
          if ((0.0 <= local_44) && (local_44 <= 1.0)) {
            return 1;
          }
          iVar2 = (uVar3 ^ 2) * 0xc;
          local_a4.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_a4.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_a4.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_a4,(CVector3f *)0x0);
          local_3c = (double)local_14;
          if ((0.0 <= local_3c) && (local_3c <= 1.0)) break;
          iVar2 = (uVar3 ^ 4) * 0xc;
          local_b0.x = *(float *)(&stack0xfffffed8 + iVar2) - pCVar1->x;
          local_b0.y = *(float *)(&stack0xfffffedc + iVar2) - pCVar1->y;
          local_b0.z = *(float *)(&stack0xfffffee0 + iVar2) - pCVar1->z;
          local_14 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_c8,pCVar1,&local_b0,(CVector3f *)0x0);
          local_34 = (double)local_14;
          if ((0.0 <= local_34) && (local_34 <= 1.0)) {
            return 1;
          }
          uVar3 = uVar3 + 1;
          pCVar1 = pCVar1 + 1;
          if (7 < (int)uVar3) {
            return 0;
          }
        }
        return 1;
      }
      if ((uVar3 & 1) == 0) break;
      local_20 = -in_stack_00000004[3];
    }
  } while( true );
}
