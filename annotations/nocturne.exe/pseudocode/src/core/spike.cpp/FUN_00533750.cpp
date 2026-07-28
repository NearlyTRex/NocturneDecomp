// Name: core_spike.cpp_FUN_00533750
// Address: 00533750
// Address Range: [[00533750, 00533c8b]]
// Convention: unknown
// Signature: void core_spike_cpp_FUN_00533750(CDemonActor *param_1)

#include "nocturne.h"

void core_spike_cpp_FUN_00533750(CDemonActor *param_1)

{
  CLocation *input_world_point;
  CCharacter *this_ptr;
  float fVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  CVector3f *point;
  uint corner_index;
  double dStack_1c8;
  CVector3f aCStack_1c4 [8];
  byte auStack_15c [52];
  SCollisionInfo SStack_128;
  byte auStack_f8 [12];
  byte local_ec [12];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  CBoundingBox3D CStack_cc;
  char acStack_b4 [8];
  float fStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float fStack_84;
  CPlatform *pCStack_80;
  float fStack_7c;
  byte auStack_70 [8];
  float fStack_68;
  CVector3f CStack_58;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_2c;
  UOrientationVector UStack_28;
  int iStack_1c;
  CDemonActor *pCStack_18;
  CDemonActor *pCStack_14;
  
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,(CBoundingBox3D *)local_ec);
  fStack_84 = 0.1;
  pCStack_80 = (CPlatform *)0x3dcccccd;
  fStack_7c = 0.0;
  local_ec._8_4_ = (float)local_ec._8_4_ + -0.1f;
  fStack_e0 = fStack_e0 + -0.1f;
  fStack_d8 = fStack_d8 + 0.1f;
  fStack_d4 = fStack_d4 + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041dbc0(&CStack_cc);
  corner_index = 0;
  point = (CVector3f *)((int)register0x00000010 + -0x1c4);
  __arrinit
            ((CVector3f *)((int)register0x00000010 + -0x1c4),8,&g_CVectorTypeInfo_005993b0);
  do {
    pCVar4 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70
                       ((CBoundingBox3D *)(local_ec + 8),&CStack_48,corner_index);
    pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (param_1,(CVector3f *)(auStack_70 + 4),pCVar4);
    if (point != pCVar4) {
      point->x = pCVar4->x;
      point->y = pCVar4->y;
      point->z = pCVar4->z;
    }
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(&CStack_cc,point);
    point = point + 1;
  } while ((int)corner_index < 8);
  fStack_3c = SQRT(fStack_dc * fStack_dc +
                   (float)local_ec._8_4_ * (float)local_ec._8_4_ + fStack_e0 * fStack_e0);
  fStack_2c = SQRT(fStack_d4 * fStack_d4 + fStack_d8 * fStack_d8 + fStack_d0 * fStack_d0);
  UStack_28.vec.x = fStack_3c;
  if (fStack_3c < fStack_2c) {
    UStack_28.vec.x = fStack_2c;
  }
  fStack_ac = fStack_d0 - fStack_dc;
  UStack_28.vec.x = UStack_28.vec.x * 2.0f + 10.0f;
  UStack_28.vec.y = UStack_28.vec.x * UStack_28.vec.x;
  acStack_b4[0] = '\0';
  acStack_b4[1] = '\0';
  acStack_b4[2] = '\0';
  acStack_b4[3] = '\0';
  acStack_b4[4] = '\0';
  acStack_b4[5] = '\0';
  acStack_b4[6] = '\0';
  acStack_b4[7] = '\0';
  core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&CStack_94.y,acStack_b4);
  pCStack_18 = (CDemonActor *)&param_1->location;
  pCStack_14 = (CDemonActor *)0x0;
  iStack_1c = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= (int)pCStack_14) break;
    this_ptr = *(CCharacter **)(0x01E57284 + iStack_1c + 0x14ecb4);
    input_world_point = &(this_ptr->base).location;
    fVar1 = ((CVector3f *)pCStack_18->actor_name)->x - (input_world_point->position).x;
    fVar3 = ((CVector3f *)pCStack_18->actor_name)->y - (this_ptr->base).location.position.y;
    fVar2 = ((CVector3f *)pCStack_18->actor_name)->z - (this_ptr->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= UStack_28.vec.y) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_128);
      SStack_128.ray_query.ray_type = 0;
      pCStack_18 = (CDemonActor *)
                   (*((this_ptr->base).vtable._ub)->getCollisionType)(&this_ptr->base,&SStack_128);
      if (pCStack_18 != (CDemonActor *)0x0) {
        SStack_128.cylinder_radius = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  (param_1,&CStack_58,&input_world_point->position);
        if (CStack_58.x < fStack_dc) {
          CStack_58.x = fStack_dc;
        }
        if (fStack_d0 < CStack_58.x) {
          CStack_58.x = fStack_d0;
        }
        if (CStack_58.y < fStack_d8) {
          CStack_58.y = fStack_d8;
        }
        if (CStack_cc.min.x < CStack_58.y) {
          CStack_58.y = CStack_cc.min.x;
        }
        CStack_58.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                  (param_1,(CVector3f *)auStack_70,&CStack_58);
        aCStack_1c4[0].y =
             (float)core_actor_cpp_CDemonActor_rayIntersect_FUN_0040a740
                              (this_ptr,auStack_70,&fStack_88,auStack_f8,
                               &SStack_128.ray_query.laser_color,pCStack_18,&CStack_cc.min.z);
        dStack_1c8 = (double)aCStack_1c4[0].y;
        if ((0.0 <= dStack_1c8) && (dStack_1c8 <= 1.0)) {
          fStack_4c = fStack_88 * aCStack_1c4[0].y;
          CStack_48.x = fStack_84 * aCStack_1c4[0].y;
          CStack_48.y = (float)pCStack_80 * aCStack_1c4[0].y;
          CStack_a0.x = (float)auStack_70._0_4_ + fStack_4c;
          CStack_a0.y = (float)auStack_70._4_4_ + CStack_48.x;
          CStack_a0.z = fStack_68 + CStack_48.y;
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                    (&this_ptr->base,&CStack_94,&CStack_a0);
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0((SDamageInfo *)auStack_15c);
          auStack_15c._4_4_ = *(uint *)(param_1[4].actor_name + 0x10);
          auStack_15c._48_4_ = 1.44334e-43;
          if ((CVector3f *)(auStack_15c + 0x1c) != &CStack_94) {
            auStack_15c._28_4_ = CStack_94.x;
            auStack_15c._32_4_ = CStack_94.y;
            auStack_15c._36_4_ = CStack_94.z;
          }
          SStack_128.ray_query.ray_type = (int)param_1;
          SStack_128.ray_query.laser_type = (int)param_1;
          (*(((this_ptr->base).vtable._uc)->_uc).getGrabbed)
                    (this_ptr,(CDemonActor *)auStack_15c,SUB84(dStack_1c8,0));
        }
      }
    }
    pCStack_14 = (CDemonActor *)(pCStack_14->actor_name + 1);
    iStack_1c = iStack_1c + 4;
  }
  return;
}
