// Name: core_fire.cpp_CFireEffect_FUN_004c8230
// Address: 004c8230
// Address Range: [[004c8230, 004c8c09]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8230(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8230(CFireEffect *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  CVector3f *pCVar2;
  CDemonActor *this_ptr_01;
  int iVar3;
  BADSPACEBASE *in_ESP;
  double dVar4;
  CVector3f *in_stack_00000008;
  float *in_stack_0000000c;
  SSurfaceInfo *in_stack_00000010;
  int in_stack_00000014;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  CVector3f local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  CVector3f local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  double local_98;
  double local_90;
  float *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  float *local_70;
  char *local_6c;
  char *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  int local_54;
  char *local_50;
  char *local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  char *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  char *local_14;
  
  if (in_stack_00000014 < 3) {
    local_20 = (CVector3f *)in_stack_00000010->field6_0x20;
    local_50 = in_stack_00000010->field6_0x20 + 4;
    local_4c = in_stack_00000010->field6_0x20 + 8;
    local_1c = &in_stack_00000010->hit_position;
    local_18 = (CVector3f *)in_stack_00000010->field8_0x38;
    local_54 = in_stack_00000014 + 1;
    local_60 = in_stack_0000000c + 1;
    local_5c = in_stack_0000000c + 2;
    local_80 = &in_stack_00000008->y;
    local_58 = &in_stack_00000008->z;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00574270
                (g_CDemonSetPtr,(float)in_stack_00000010->field2_0x8,
                 (float)(in_stack_00000010->color).r,(float)(in_stack_00000010->color).g,
                 (float)(in_stack_00000010->color).b);
      local_e0.x = in_stack_00000008->x;
      local_e0.y = *local_80;
      local_e0.z = *local_58;
      local_134.x = local_e0.x + *in_stack_0000000c;
      local_134.y = local_e0.y + in_stack_0000000c[1];
      local_134.z = local_e0.z + in_stack_0000000c[2];
      local_24 = (char *)core_setcolid_cpp_CDemonSet_raycast_FUN_00572530
                                   (g_CDemonSetPtr,&local_e0,&local_134);
      local_90 = (double)(float)local_24;
      if ((local_90 < 0.0) || (1.0 <= local_90)) {
        local_110 = -*in_stack_0000000c;
        local_10c = -in_stack_0000000c[1];
        local_108 = -in_stack_0000000c[2];
        if (&local_a4 != &local_110) {
          local_a4 = local_110;
          local_a0 = local_10c;
          local_9c = local_108;
        }
        local_40 = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
        if (local_40 <= 0.0) {
          local_9c = 0.0;
          local_a0 = 0.0;
          local_a4 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_40;
          local_a4 = local_a4 * fVar1;
          local_a0 = local_a0 * fVar1;
          local_9c = local_9c * fVar1;
        }
      }
      else {
        local_128 = *in_stack_0000000c * (float)local_24;
        local_124 = in_stack_0000000c[1] * (float)local_24;
        local_120 = (float)local_24 * in_stack_0000000c[2];
        local_140.x = in_stack_00000008->x + local_128;
        local_140.y = in_stack_00000008->y + local_124;
        local_140.z = in_stack_00000008->z + local_120;
        if (&local_134 != &local_140) {
          local_134.x = local_140.x;
          local_134.y = local_140.y;
          local_134.z = local_140.z;
        }
        if ((CVector3f *)&local_a4 != &g_CDemonSetPtr->collision_normal) {
          local_a4 = (g_CDemonSetPtr->collision_normal).x;
          local_a0 = (g_CDemonSetPtr->collision_normal).y;
          local_9c = (g_CDemonSetPtr->collision_normal).z;
        }
      }
      this_ptr_00 = g_CDemonSetPtr->collision_actor;
      in_stack_00000010->reflectivity = 0.0;
      in_stack_00000010->angle_copy = 0.0;
      in_stack_00000010->alpha_or_wetness = 0.0;
      local_14 = local_24;
      if (this_ptr_00 != (CDemonActor *)0x0) {
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (this_ptr_00,&local_c8,in_stack_00000008);
        if (pCVar2 != local_20) {
          local_20->x = pCVar2->x;
          local_20->y = pCVar2->y;
          local_20->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                           (this_ptr_00,&local_b0,&g_CDemonSetPtr->collision_impact_position);
        if (pCVar2 != local_1c) {
          local_1c->x = pCVar2->x;
          local_1c->y = pCVar2->y;
          local_1c->z = pCVar2->z;
        }
        pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                           (this_ptr_00,&local_11c,&g_CDemonSetPtr->collision_normal);
        if (pCVar2 != local_18) {
          local_18->x = pCVar2->x;
          local_18->y = pCVar2->y;
          local_18->z = pCVar2->z;
        }
        if ((((in_stack_00000014 == 0) && (in_stack_00000010->field4_0x18 != 0)) &&
            (this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                                     (this_ptr_00,g_CCharacterClassInfo.name_hash),
            this_ptr_01 != (CDemonActor *)0x0)) &&
           (iVar3 = (*this_ptr_01->vtable[1].renderOpaque)(this_ptr_01), iVar3 != 0)) {
          (in_stack_00000010->color).g = 0xff;
          (in_stack_00000010->color).b = 0;
          (in_stack_00000010->color).r = 0xff;
        }
        local_ec = *in_stack_0000000c;
        local_e8 = *local_60;
        local_e4 = *local_5c;
        local_48 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_48 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar1 = 1.0 / local_48;
          local_ec = local_ec * fVar1;
          local_e8 = local_e8 * fVar1;
          local_e4 = local_e4 * fVar1;
        }
        fVar1 = local_e4 * in_stack_0000000c[2] +
                local_ec * *in_stack_0000000c + local_e8 * in_stack_0000000c[1];
        local_98 = (double)fVar1;
        if ((float)-1 < fVar1) {
          if (local_98 < 1.0) {
            dVar4 = crt_math_c_acos_FUN_00600162(local_98);
            local_2c = (float)dVar4;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        in_stack_00000010->angle_or_rotation = local_2c;
        (*this_ptr_00->vtable->getSurfaceProperties)(this_ptr_00,in_stack_00000010);
      }
      local_28 = 0.0;
      if (in_stack_00000010->field5_0x1c != 0) {
        local_28 = in_stack_00000010->intensity;
      }
      if (0.0 < in_stack_00000010->alpha_or_wetness) {
        local_30 = (local_9c * in_stack_0000000c[2] +
                   local_a4 * *in_stack_0000000c + local_a0 * in_stack_0000000c[1]) * 2f
        ;
        local_d4 = local_a4 * local_30;
        local_d0 = local_a0 * local_30;
        local_cc = local_9c * local_30;
        local_bc = local_d4 - *in_stack_0000000c;
        local_b8 = local_d0 - in_stack_0000000c[1];
        local_f8 = -local_bc;
        local_b4 = local_cc - in_stack_0000000c[2];
        local_f4 = -local_b8;
        local_f0 = -local_b4;
        if (&local_bc != &local_f8) {
          local_bc = local_f8;
          local_b8 = local_f4;
          local_b4 = local_f0;
        }
        local_34 = &local_1c->y;
        local_3c = &local_1c->z;
        local_38 = &local_18->y;
        local_44 = &local_18->z;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
        core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
        core_fire_cpp_CFireEffect_FUN_004c8230(this_ptr);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
        local_28 = (1.0 - in_stack_00000010->alpha_or_wetness) * (float)0.25 * local_28;
      }
      if (in_stack_00000010->reflectivity <= 0.0) goto LAB_004c8ae9;
      if ((in_stack_00000010->reflectivity != 1.0) ||
         (in_stack_00000010->angle_copy != in_stack_00000010->angle_or_rotation)) break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    }
    local_104 = *in_stack_0000000c;
    local_100 = in_stack_0000000c[1];
    local_fc = in_stack_0000000c[2];
    local_7c = in_stack_00000010->field6_0x20;
    local_78 = in_stack_00000010->field6_0x20 + 4;
    local_74 = in_stack_00000010->field6_0x20 + 8;
    local_64 = &(in_stack_00000010->hit_position).y;
    local_70 = &(in_stack_00000010->hit_position).z;
    local_6c = in_stack_00000010->field8_0x38;
    local_68 = in_stack_00000010->field8_0x38 + 4;
    local_14 = in_stack_00000010->field8_0x38 + 8;
    core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr_00);
    core_fire_cpp_CFireEffect_FUN_004c8230(this_ptr);
    local_28 = (1.0 - in_stack_00000010->reflectivity) * (float)0.25 * local_28;
LAB_004c8ae9:
    core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
  }
  return;
}
