// Name: core_dracbrid.cpp_CDraculaBride_explode_FUN_0047cc20
// Address: 0047cc20
// Address Range: [[0047cc20, 0047cf19]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_0047cc20(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_explode_FUN_0047cc20(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

{
  CDeformableModel *pCVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_108c [989];
  CVector3f *initial_velocity;
  float min_value;
  CBoundingBox3D *max_value;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  CVector3f local_88;
  float fStack_74;
  float afStack_70 [6];
  CVector3f local_58;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if ((this_ptr->base).base.model.model_name[0] != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       (&(this_ptr->base).base.model);
    local_20 = pCVar1->num_parts;
    if (1 < local_20) {
      if (spread_angle < 0.0) {
        spread_angle = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = direction;
          if ((direction != (CVector3f *)0x0) && (0.0 < spread_angle)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(direction);
            min_value = -spread_angle;
            local_24 = min_value;
            local_58.x = CStack_98.y;
            *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + 8);
            max_value = (CBoundingBox3D *)spread_angle;
            *(float *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 (&fStack_8c)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(min_value,spread_angle);
            local_58.y = local_18 + local_58.y;
            local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00
                                 (local_24,(float)max_value);
            local_58.x = local_18 + local_58.x;
            core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                      ((CMatrix3x3f *)&stack0xfffffefc,&local_58);
            afStack_70[5] =
                 SQRT(direction->z * direction->z +
                      direction->x * direction->x + direction->y * direction->y);
            afStack_70[3] = 0.0;
            afStack_70[4] = 0.0;
            local_28 = afStack_70[5];
            core_dirmat_cpp_FUN_0045f690(&stack0xfffffefc,afStack_70 + 3);
            local_88.x = afStack_40[3];
            *(float *)((int)&local_88 + (uint)bVar5 * -8 + 4) = afStack_40[(uint)bVar5 * -2 + 4];
            *(float *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
            initial_velocity = &local_88;
            spread_angle = (float)max_value;
          }
          core_dracbrid_cpp_CDraculaBride_dismemberPart_FUN_0047cf20
                    (this_ptr,local_1c,initial_velocity,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
            ((CDemonActor *)this_ptr,(CBoundingBox3D *)spread_angle);
  puVar3 = (uint *)&stack0xffffff2c;
  puVar4 = (uint *)&stack0xffffff3c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  afStack_40[2] = fStack_bc + fStack_b0;
  afStack_40[3] = fStack_b8 + fStack_ac;
  fStack_30 = fStack_b4 + fStack_a8;
  afStack_70[2] = fStack_bc + fStack_b0;
  afStack_70[(uint)bVar5 * -2 + 3] = afStack_40[(uint)bVar5 * -2 + 3];
  afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  fStack_44 = afStack_70[2] * _DAT_005daeb5;
  afStack_40[0] = afStack_70[3] * _DAT_005daeb5;
  afStack_40[1] = afStack_70[4] * _DAT_005daeb5;
  fStack_74 = afStack_70[2] * _DAT_005daeb5;
  afStack_70[(uint)bVar5 * -2] = afStack_40[(uint)bVar5 * -2];
  afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_40[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b40(this_ptr);
  CStack_98.x = fStack_a4;
  *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + 4) =
       *(uint *)(&stack0xffffff60 + (uint)bVar5 * -8);
  *(uint *)((int)&CStack_98 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)(&stack0xffffff64 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if ((this_ptr->base).base.is_fully_burned == 0) {
    core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
              (g_CGorePtr,&CStack_98,direction,100,
               *(EBloodType *)&(this_ptr->base).base.field_0x27a0);
    return;
  }
  (this_ptr->base).base.fire_count = 0;
  return;
}
