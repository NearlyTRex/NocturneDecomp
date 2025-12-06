// Name: core_dracbrid.cpp_FUN_004858f0
// Address: 004858f0
// Address Range: [[004858f0, 00485a41] [00485aed, 00485b11]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004858f0()

#include "nocturne.h"

/* Signature: byte actors_enemy_draculabride.cpp_FUN_004858f0(uint param_1, uint
   param_2, uint param_3, uint param_4) */

void core_dracbrid_cpp_FUN_004858f0(void)

{
  CDeformableModel *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  float fVar3;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CDemonActor *in_stack_ffffff40;
  float in_stack_ffffff44;
  float local_ac;
  byte auStack_80 [20];
  float local_6c;
  float local_68;
  byte auStack_4c [8];
  byte auStack_44 [12];
  CVector3f local_38;
  float fStack_2c;
  float local_24;
  float local_20;
  float local_18;
  float fStack_14;
  
  if (in_stack_00000004[0x1a].create_event[0x50] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1));
    local_20 = (float)pCVar1->num_parts;
    if (1 < (int)local_20) {
      if (local_ac < 0.0) {
        local_ac = 20.0;
      }
      fVar3 = 0.0;
      if (0 < (int)local_20) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < local_ac)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&local_38,in_stack_00000008);
            local_38.z = -(float)in_stack_ffffff40;
            local_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                                 (local_38.z,(float)in_stack_ffffff40);
            auStack_44._0_4_ = local_24 + (float)auStack_44._0_4_;
            local_20 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_2c,in_stack_ffffff44);
            auStack_44._0_4_ = local_20 + (float)auStack_44._0_4_;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                      ((CMatrix3x3f *)&stack0xffffff4c,(CVector3f *)auStack_44);
            local_68 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                            in_stack_00000008->x * in_stack_00000008->x +
                            in_stack_00000008->y * in_stack_00000008->y);
            auStack_80._16_4_ = 0.0;
            local_6c = 0.0;
            local_20 = local_68;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      ((CMatrix3x3f *)&stack0xffffff50,(CVector3f *)auStack_4c,
                       (CVector3f *)(auStack_80 + 0x10));
          }
          in_stack_ffffff40 = in_stack_00000004;
          in_stack_ffffff44 = fVar3;
          core_dracbrid_cpp_FUN_00485b20();
          fVar3 = (float)((int)fVar3 + 1);
        } while ((int)fVar3 < (int)local_20);
      }
    }
  }
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)
                     (in_stack_00000004,(CBoundingBox3D *)auStack_80);
  local_18 = (pCVar2->min).x + (pCVar2->max).x;
  fStack_14 = (pCVar2->min).y + (pCVar2->max).y;
  auStack_44._8_4_ = local_18 * 0.5f;
  local_38.x = fStack_14 * 0.5f;
  local_38.y = ((pCVar2->min).z + (pCVar2->max).z) * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_4c + 4),(CVector3f *)(auStack_44 + 8));
  if (in_stack_00000004[0x88].field20_0x118 == 0) {
    core_gore_cpp_FUN_004edbb0();
    return;
  }
  in_stack_00000004[0x23].actor_name[8] = '\0';
  in_stack_00000004[0x23].actor_name[9] = '\0';
  in_stack_00000004[0x23].actor_name[10] = '\0';
  in_stack_00000004[0x23].actor_name[0xb] = '\0';
  return;
}
