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
  int iVar3;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
  float local_ac;
  CMatrix3x3f CStack_a8;
  CBoundingBox3D CStack_80;
  CVector3f local_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f local_38;
  float fStack_2c;
  float fStack_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  local_ac = in_stack_0000000c;
  if (in_stack_00000004[0x1a].create_event[0x50] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)(in_stack_00000004 + 1));
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if (in_stack_0000000c < 0.0) {
        local_ac = 20.0;
      }
      iVar3 = 0;
      if (0 < local_20) {
        do {
          if ((in_stack_00000008 != (CVector3f *)0x0) && (0.0 < local_ac)) {
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      (&local_38,in_stack_00000008);
            local_1c = -local_ac;
            fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_1c,local_ac);
            local_38.y = fStack_14 + local_38.y;
            fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_1c,local_ac);
            local_38.x = fStack_14 + local_38.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_a8,&local_38);
            local_68.z = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                              in_stack_00000008->x * in_stack_00000008->x +
                              in_stack_00000008->y * in_stack_00000008->y);
            local_68.x = 0.0;
            local_68.y = 0.0;
            local_18 = local_68.z;
            core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                      (&CStack_a8,&CStack_44,&local_68);
          }
          core_dracbrid_cpp_FUN_00485b20();
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_20);
      }
    }
  }
  pCVar2 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_80);
  fStack_2c = (pCVar2->min).x + (pCVar2->max).x;
  fStack_28 = (pCVar2->min).y + (pCVar2->max).y;
  CStack_50.x = fStack_2c * 0.5f;
  CStack_50.y = fStack_28 * 0.5f;
  local_24 = (pCVar2->min).z + (pCVar2->max).z;
  CStack_50.z = local_24 * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_5c,&CStack_50)
  ;
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
