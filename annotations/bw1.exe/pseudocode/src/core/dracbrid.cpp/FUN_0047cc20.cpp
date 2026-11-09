// Name: core_dracbrid.cpp_FUN_0047cc20
// Address: 0047cc20
// Address Range: [[0047cc20, 0047cf19]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_FUN_0047cc20(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_FUN_0047cc20(CDraculaBride *this_ptr,CVector3f *direction,float spread_angle,int render_in_background)

{
  CDeformableModel *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1094 [990];
  CVector3f *initial_velocity;
  float fVar6;
  float fVar7;
  float local_108;
  CMatrix3x3f local_104 [40];
  float local_dc [6];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float local_94;
  float afStack_90 [2];
  CVector3f local_88;
  float fStack_7c;
  float afStack_78 [4];
  float fStack_68;
  float local_64 [3];
  float local_58;
  float local_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  local_108 = spread_angle;
  if (this_ptr->field_0x24a8 != '\0') {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                       ((CDeformableModelInstance *)&this_ptr->field_0x158);
    local_20 = *(int *)&pCVar1->field_0xc00;
    if (1 < local_20) {
      if (local_108 < 0.0) {
        local_108 = 20.0;
      }
      local_1c = 0;
      if (0 < local_20) {
        do {
          initial_velocity = direction;
          if ((direction != (CVector3f *)0x0) && (0.0 < local_108)) {
            core_vecdir_cpp_FUN_005a7520(direction);
            fVar6 = -local_108;
            local_24 = fVar6;
            local_58 = local_94;
            local_54[(uint)bVar5 * -2] = afStack_90[(uint)bVar5 * -2];
            fVar7 = local_108;
            local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            local_18 = (float)core_actor_cpp_FUN_0040cc00(fVar6,fVar7);
            local_54[0] = local_18 + local_54[0];
            local_18 = (float)core_actor_cpp_FUN_0040cc00(local_24,local_108);
            local_58 = local_18 + local_58;
            core_dirmat_cpp_FUN_0045f3e0(local_104,(CVector3f *)&local_58);
            local_64[2] = SQRT(*(float *)&direction->field_0x8 * *(float *)&direction->field_0x8 +
                               *(float *)direction * *(float *)direction +
                               *(float *)&direction->field_0x4 * *(float *)&direction->field_0x4);
            local_64[0] = 0.0;
            local_64[1] = 0.0;
            local_28 = local_64[2];
            core_dirmat_cpp_FUN_0045f690(local_104,afStack_78 + 5);
            local_88._0_4_ = local_34._0_4_;
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            initial_velocity = &local_88;
          }
          core_dracbrid_cpp_FUN_0047cf20(this_ptr,local_1c,initial_velocity,render_in_background);
          local_1c = local_1c + 1;
        } while (local_1c < local_20);
      }
    }
  }
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
  pfVar3 = local_dc;
  pfVar4 = &local_c4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_40 = local_c4 + fStack_b8;
  fStack_3c = fStack_c0 + fStack_b4;
  fStack_38 = fStack_bc + fStack_b0;
  afStack_78[2] = local_c4 + fStack_b8;
  afStack_78[(uint)bVar5 * -2 + 3] = local_54[(uint)bVar5 * -2 + 6];
  afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  pfVar3 = &fStack_7c;
  local_54[2] = afStack_78[2] * _DAT_005daeb5;
  local_54[3] = afStack_78[3] * _DAT_005daeb5;
  fStack_44 = fStack_68 * _DAT_005daeb5;
  fStack_7c = afStack_78[2] * _DAT_005daeb5;
  afStack_78[(uint)bVar5 * -2] = local_54[(uint)bVar5 * -2 + 3];
  afStack_78[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       local_54[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar3);
  CStack_a0._0_4_ = CStack_ac._0_4_;
  *(uint *)((int)&CStack_a0 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_ac + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       *(uint *)((int)&CStack_ac + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  if (*(int *)&this_ptr->field_0xb9e8 == 0) {
    core_gore_cpp_FUN_004e6060
              (g_CGorePtr,&CStack_a0,direction,100,*(EBloodType *)&this_ptr->field_0x27a0);
    return;
  }
  *(uint *)&this_ptr->field_0x3120 = 0;
  return;
}
