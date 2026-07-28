// Name: core_platfrm.cpp_FUN_004f7360
// Address: 004f7360
// Address Range: [[004f7360, 004f7558]]
// Convention: unknown
// Signature: undefined4 core_platfrm_cpp_FUN_004f7360(CDemonActor *param_1,int param_2)

#include "nocturne.h"

uint core_platfrm_cpp_FUN_004f7360(CDemonActor *param_1,int param_2)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  byte *puVar7;
  SCollisionInfo local_88;
  CBoundingBox3D CStack_60;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  byte auStack_3c [12];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  CVector3f CStack_24;
  float fStack_18;
  
  if (param_2 != 0) {
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&local_88);
    local_88.ray_query.ray_type = 0;
    iVar1 = (**(code **)(*(int *)(param_2 + 0x14c) + 0x34))(param_2,&local_88);
    if (iVar1 == 2) {
      fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((param_1->orient).vec.x);
      (param_1->orient).vec.x = fStack_18;
      fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00((param_1->orient).vec.z);
      (param_1->orient).vec.z = fStack_18;
      if ((ABS((param_1->orient).vec.x) <= (float)0.01) &&
         (ABS((param_1->orient).vec.z) <= (float)0.01)) {
        (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_60);
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  (param_1,&CStack_24,(CVector3f *)(param_2 + 0x20));
        if (((CStack_60.min.x <= CStack_24.x + local_88.cylinder_radius) &&
            (((CStack_24.x - local_88.cylinder_radius <= CStack_60.max.x &&
              (CStack_60.min.z <= CStack_24.z + local_88.cylinder_radius)) &&
             (CStack_24.z - local_88.cylinder_radius <= CStack_60.max.z)))) &&
           ((CStack_60.min.y <= CStack_24.y + local_88.cylinder_top_y &&
            (CStack_24.y + local_88.cylinder_bottom_y <= CStack_60.max.y)))) {
          pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                             ((CKeyFramedModelInstance *)(param_1 + 1));
          if (*(int *)(pCVar2->texture_list[7].textures[2].texture_name + 4) != 0) {
            fStack_48 = CStack_24.x;
            fStack_40 = CStack_24.z;
            puVar7 = auStack_3c;
            uStack_30 = 0;
            puVar6 = &uStack_30;
            uStack_2c = 0x3f800000;
            pfVar5 = &fStack_48;
            uStack_28 = 0;
            uVar4 = 0;
            fStack_44 = local_88.cylinder_top_y + -1.0f + CStack_24.y;
            pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
                               ((CKeyFramedModelInstance *)(param_1 + 1));
            fVar3 = (float)core_dmodel_cpp_CKeyFramedModel_intersectRay_FUN_00453990
                                     (pCVar2,uVar4,pfVar5,puVar6,puVar7);
            if (fVar3 < 0.0) {
              return 0;
            }
            if (1.0 < fVar3) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
