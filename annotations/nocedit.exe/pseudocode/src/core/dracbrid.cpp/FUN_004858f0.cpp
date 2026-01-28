// Name: core_dracbrid.cpp_FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485a41] [00485aed, 00485b11]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_004858f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_004858f0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void core_dracbrid_cpp_FUN_004858f0(void)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  int iVar3;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
  CBoundingBox3D local_84;
  CVector3f local_6c;
  CVector3f CStack_58;
  byte auStack_4c [8];
  float fStack_44;
  CVector3f local_3c;
  float fStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if (in_stack_00000004[0x1a].create_event[0x50] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1));
    local_24 = (float)pCVar1->num_parts;
    if (1 < (int)local_24) {
      if (in_stack_0000000c < 0.0) {
        in_stack_0000000c = 20.0;
      }
      iVar3 = 0;
      if (0 < (int)local_24) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < in_stack_0000000c)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&local_3c,in_stack_00000008);
            local_20 = -in_stack_0000000c;
            local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_20,in_stack_0000000c);
            local_3c.y = local_18 + local_3c.y;
            local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_20,in_stack_0000000c);
            local_3c.x = local_18 + local_3c.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)&stack0xffffff54,&local_3c);
            local_6c.z = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                              in_stack_00000008->x * in_stack_00000008->x +
                              in_stack_00000008->y * in_stack_00000008->y);
            local_6c.x = 0.0;
            local_6c.y = 0.0;
            local_1c = local_6c.z;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)&stack0xffffff54,(CVector3f *)(auStack_4c + 4),&local_6c);
          }
          core_dracbrid_cpp_FUN_00485b20();
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_24);
      }
    }
  }
  pCVar2 = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)(in_stack_00000004,&local_84);
  fStack_28 = (pCVar2->min).x + (pCVar2->max).x;
  local_24 = (pCVar2->min).y + (pCVar2->max).y;
  auStack_4c._0_4_ = fStack_28 * 0.5f;
  auStack_4c._4_4_ = local_24 * 0.5f;
  local_20 = (pCVar2->min).z + (pCVar2->max).z;
  fStack_44 = local_20 * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_58,(CVector3f *)auStack_4c);
  if (in_stack_00000004[0x88].unk9 == 0) {
    core_gore_cpp_FUN_004edbb0();
    return;
  }
  in_stack_00000004[0x23].actor_name[8] = '\0';
  in_stack_00000004[0x23].actor_name[9] = '\0';
  in_stack_00000004[0x23].actor_name[10] = '\0';
  in_stack_00000004[0x23].actor_name[0xb] = '\0';
  return;
}
