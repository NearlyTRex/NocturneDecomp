// Name: core_fire.cpp_FUN_0048b6f0
// Address: 0048b6f0
// Address Range: [[0048b6f0, 0048c0c9]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0048b6f0(CFireEffect *param_1,CVector3f *param_2,float *param_3,SLaserInfo *param_4,int param_5)

#include "nocturne.h"

void core_fire_cpp_FUN_0048b6f0(CFireEffect *param_1,CVector3f *param_2,float *param_3,SLaserInfo *param_4,int param_5)

{
  CDemonActor *this_ptr;
  CVector3f *pCVar1;
  float *pfVar2;
  CDemonActor *this_ptr_00;
  int iVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_23c;
  float local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  CVector3f local_140;
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c [12];
  CVector3f local_110;
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
  CVector3f local_a4;
  double local_98;
  double local_90;
  float *local_80;
  CVector3f *local_7c;
  float *local_78;
  float *local_74;
  float *local_70;
  CVector3f *local_6c;
  float *local_68;
  float *local_64;
  float *local_60;
  float *local_5c;
  float *local_58;
  int local_54;
  float *local_50;
  float *local_4c;
  float local_48;
  float *local_44;
  float local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float *local_14;
  
  if (param_5 < 3) {
    local_20 = &param_4->local_origin;
    local_50 = &(param_4->local_origin).y;
    local_4c = &(param_4->local_origin).z;
    local_1c = &param_4->local_hit_position;
    local_18 = &param_4->local_normal;
    local_54 = param_5 + 1;
    local_60 = param_3 + 1;
    local_5c = param_3 + 2;
    local_80 = &param_2->y;
    local_58 = &param_2->z;
    while( true ) {
      core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840
                (0x01E57284,param_4->laser_type,(param_4->color).r,(param_4->color).g,
                 (param_4->color).b);
      local_e0.x = param_2->x;
      local_e0.y = *local_80;
      local_e0.z = *local_58;
      local_134.x = local_e0.x + *param_3;
      local_134.y = local_e0.y + param_3[1];
      local_134.z = local_e0.z + param_3[2];
      local_24 = (float *)core_setcolid_cpp_CDemonSet_raycast_FUN_0050fb00
                                    (0x01E57284,&local_e0,&local_134);
      local_90 = (double)(float)local_24;
      if ((local_90 < 0.0) || (1.0 <= local_90)) {
        local_110.x = -*param_3;
        local_110.y = -param_3[1];
        local_110.z = -param_3[2];
        if (&local_a4 != &local_110) {
          local_a4.x = local_110.x;
          local_a4.y = local_110.y;
          local_a4.z = local_110.z;
        }
        local_40 = SQRT(local_a4.z * local_a4.z + local_a4.x * local_a4.x + local_a4.y * local_a4.y)
        ;
        if (local_40 <= 0.0) {
          local_a4.z = 0.0;
          local_a4.y = 0.0;
          local_a4.x = 0.0;
        }
        else {
          fVar6 = 1.0 / local_40;
          local_a4.x = local_a4.x * fVar6;
          local_a4.y = local_a4.y * fVar6;
          local_a4.z = local_a4.z * fVar6;
        }
      }
      else {
        local_128 = *param_3 * (float)local_24;
        local_124 = param_3[1] * (float)local_24;
        local_120 = (float)local_24 * param_3[2];
        local_140.x = param_2->x + local_128;
        local_140.y = param_2->y + local_124;
        local_140.z = param_2->z + local_120;
        if (&local_134 != &local_140) {
          local_134.x = local_140.x;
          local_134.y = local_140.y;
          local_134.z = local_140.z;
        }
        pCVar1 = (CVector3f *)(0x01E57284->lights[199].filter_names[0x12] + 0x24);
        if (&local_a4 != pCVar1) {
          local_a4.x = pCVar1->x;
          local_a4.y = *(float *)0x01E57284->lights[199].filter_names[0x13];
          local_a4.z = *(float *)(0x01E57284->lights[199].filter_names[0x13] + 4);
        }
      }
      this_ptr = *(CDemonActor **)(0x01E57284->lights[199].filter_names[0x13] + 0x18);
      param_4->reflectivity = 0.0;
      param_4->stored_angle = 0.0;
      param_4->transparency = 0.0;
      local_14 = local_24;
      if (this_ptr != (CDemonActor *)0x0) {
        pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (this_ptr,&local_c8,param_2);
        if (pCVar1 != local_20) {
          local_20->x = pCVar1->x;
          local_20->y = pCVar1->y;
          local_20->z = pCVar1->z;
        }
        pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (this_ptr,&local_b0,
                            (CVector3f *)(0x01E57284->lights[199].filter_names[0x13] + 0xc));
        if (pCVar1 != local_1c) {
          local_1c->x = pCVar1->x;
          local_1c->y = pCVar1->y;
          local_1c->z = pCVar1->z;
        }
        pfVar2 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                    (this_ptr,local_11c,
                                     0x01E57284->lights[199].filter_names[0x12] + 0x24);
        if ((CVector3f *)pfVar2 != local_18) {
          local_18->x = *pfVar2;
          local_18->y = pfVar2[1];
          local_18->z = pfVar2[2];
        }
        if ((((param_5 == 0) && (param_4->is_hero_weapon != 0)) &&
            (this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040d890
                                     (this_ptr,g_CCharacterActorType_00765a60.name_hash),
            this_ptr_00 != (CDemonActor *)0x0)) &&
           (iVar3 = (*((this_ptr_00->vtable)._ub)->initializeInEditor)(this_ptr_00), iVar3 != 0)) {
          (param_4->color).g = 0xff;
          (param_4->color).b = 0;
          (param_4->color).r = 0xff;
        }
        local_ec = *param_3;
        local_e8 = *local_60;
        local_e4 = *local_5c;
        local_48 = SQRT(local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8);
        if (local_48 <= 0.0) {
          local_e8 = 0.0;
          local_ec = 0.0;
          local_e4 = 0.0;
        }
        else {
          fVar6 = 1.0 / local_48;
          local_ec = local_ec * fVar6;
          local_e8 = local_e8 * fVar6;
          local_e4 = local_e4 * fVar6;
        }
        fVar6 = local_e4 * param_3[2] + local_ec * *param_3 + local_e8 * param_3[1];
        local_98 = (double)fVar6;
        if ((float)-1 < fVar6) {
          if (local_98 < 1.0) {
            dVar4 = acos(local_98);
            local_2c = (float)dVar4;
          }
          else {
            local_2c = 0.0;
          }
        }
        else {
          local_2c = 3.1415927;
        }
        param_4->incidence_angle = local_2c;
        (*((this_ptr->vtable)._ub)->getSurfaceProperties)(this_ptr,param_4);
      }
      local_28 = 0.0;
      if (param_4->is_damaging != 0) {
        local_28 = param_4->intensity;
      }
      if (0.0 < param_4->transparency) {
        local_30 = (local_a4.z * param_3[2] + local_a4.x * *param_3 + local_a4.y * param_3[1]) *
                   5.3049894774131808e-315._0_4_;
        local_d4 = local_a4.x * local_30;
        local_d0 = local_a4.y * local_30;
        local_cc = local_a4.z * local_30;
        local_bc = local_d4 - *param_3;
        local_b8 = local_d0 - param_3[1];
        local_f8 = -local_bc;
        local_b4 = local_cc - param_3[2];
        local_f4 = -local_b8;
        local_f0 = -local_b4;
        if (&local_bc != &local_f8) {
          local_bc = local_f8;
          local_b8 = local_f4;
          local_b4 = local_f0;
        }
        fVar6 = param_4->beam_width;
        iVar3 = param_4->laser_type;
        iVar7 = (param_4->color).r;
        iVar8 = (param_4->color).g;
        iVar9 = (param_4->color).b;
        iVar10 = param_4->is_hero_weapon;
        iVar11 = param_4->is_damaging;
        fVar12 = local_20->x;
        fVar13 = *local_50;
        fVar14 = *local_4c;
        fVar15 = local_1c->x;
        local_34 = &local_1c->y;
        fVar16 = *local_34;
        local_3c = &local_1c->z;
        fVar17 = *local_3c;
        fVar18 = local_18->x;
        local_38 = &local_18->y;
        fVar19 = *local_38;
        local_44 = &local_18->z;
        fVar20 = *local_44;
        fVar21 = param_4->incidence_angle;
        fVar22 = param_4->reflectivity;
        fVar23 = param_4->stored_angle;
        fVar24 = param_4->transparency;
        fVar5 = param_4->intensity * param_4->transparency;
        core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(0x01E57284);
        core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
        local_23c = param_4->intensity;
        local_238 = param_4->beam_width;
        local_234 = param_4->laser_type;
        local_230 = (param_4->color).r;
        local_22c = (param_4->color).g;
        local_228 = (param_4->color).b;
        local_224 = param_4->is_hero_weapon;
        local_220 = param_4->is_damaging;
        local_21c = local_20->x;
        local_218 = *local_50;
        local_214 = *local_4c;
        local_210 = local_1c->x;
        local_20c = *local_34;
        local_208 = *local_3c;
        local_204 = local_18->x;
        local_200 = *local_38;
        local_1fc = *local_44;
        local_1f8 = param_4->incidence_angle;
        local_1f4 = param_4->reflectivity;
        local_1f0 = param_4->stored_angle;
        local_1ec = param_4->transparency;
        core_fire_cpp_FUN_0048b6f0
                  (param_1,&local_134,&local_bc,&local_23c,local_54,fVar5,fVar6,iVar3,iVar7,iVar8,
                   iVar9,iVar10,iVar11,fVar12,fVar13,fVar14,fVar15,fVar16,fVar17,fVar18,fVar19,
                   fVar20,fVar21,fVar22,fVar23,fVar24);
        core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(0x01E57284);
        local_28 = (1.0 - param_4->transparency) * (float)0.25 * local_28;
      }
      if (param_4->reflectivity <= 0.0) goto LAB_0048bfa9;
      if ((param_4->reflectivity != 1.0) || (param_4->stored_angle != param_4->incidence_angle))
      break;
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,this_ptr);
    }
    local_104 = *param_3;
    local_100 = param_3[1];
    local_fc = param_3[2];
    local_190 = param_4->beam_width;
    local_18c = param_4->laser_type;
    local_188 = (param_4->color).r;
    local_184 = (param_4->color).g;
    local_180 = (param_4->color).b;
    local_17c = param_4->is_hero_weapon;
    local_178 = param_4->is_damaging;
    local_7c = &param_4->local_origin;
    local_174 = local_7c->x;
    local_78 = &(param_4->local_origin).y;
    local_170 = *local_78;
    local_74 = &(param_4->local_origin).z;
    local_16c = *local_74;
    local_168 = (param_4->local_hit_position).x;
    local_64 = &(param_4->local_hit_position).y;
    local_164 = *local_64;
    local_70 = &(param_4->local_hit_position).z;
    local_160 = *local_70;
    local_6c = &param_4->local_normal;
    local_15c = local_6c->x;
    local_68 = &(param_4->local_normal).y;
    local_158 = *local_68;
    local_14 = &(param_4->local_normal).z;
    local_154 = *local_14;
    local_150 = param_4->incidence_angle;
    local_14c = param_4->reflectivity;
    local_148 = param_4->stored_angle;
    local_144 = param_4->transparency;
    local_194 = param_4->intensity * param_4->reflectivity;
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,this_ptr);
    local_1e8 = param_4->intensity;
    local_1e4 = param_4->beam_width;
    local_1e0 = param_4->laser_type;
    local_1dc = (param_4->color).r;
    local_1d8 = (param_4->color).g;
    local_1d4 = (param_4->color).b;
    local_1d0 = param_4->is_hero_weapon;
    local_1cc = param_4->is_damaging;
    local_1c8 = local_7c->x;
    local_1c4 = *local_78;
    local_1c0 = *local_74;
    local_1bc = (param_4->local_hit_position).x;
    local_1b8 = *local_64;
    local_1b4 = *local_70;
    local_1b0 = local_6c->x;
    local_1ac = *local_68;
    local_1a8 = *local_14;
    local_1a4 = param_4->incidence_angle;
    local_1a0 = param_4->reflectivity;
    local_19c = param_4->stored_angle;
    local_198 = param_4->transparency;
    core_fire_cpp_FUN_0048b6f0(param_1,&local_134,&local_104,&local_1e8,param_5 + 1);
    local_28 = (1.0 - param_4->reflectivity) * (float)0.25 * local_28;
LAB_0048bfa9:
    core_fire_cpp_CFireEffect_createLaserSegment_FUN_0048b370
              (param_1,&local_e0,&local_134,param_4->intensity,local_28,&local_a4,(param_4->color).r
               ,(param_4->color).g,(param_4->color).b,param_4->beam_width);
  }
  return;
}
