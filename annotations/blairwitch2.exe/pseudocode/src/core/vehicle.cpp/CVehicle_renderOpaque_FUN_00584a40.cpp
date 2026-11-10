// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_00584a40
// Address: 00584a40
// Address Range: [[00584a40, 00584d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_00584a40(CVehicle *this_ptr)

#include "nocturne.h"

int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_00584a40(CVehicle *this_ptr)

{
  int iVar1;
  int iVar2;
  CKeyFramedModelInstance *this_ptr_00;
  CVector3f *pCVar3;
  float *pfVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  CVector3f *translation;
  byte bVar8;
  CDemonActor *in_stack_0000000c;
  float afStackY_1040 [990];
  CVector3f *pCVar9;
  float fov;
  float falloff;
  CBoundingBox3D *in_stack_ffffff48;
  CBoundingBox3D aCStack_98 [2];
  uint auStack_68 [4];
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [5];
  CVector3f CStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  float fStack_1c;
  uint auStack_18 [2];
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pfVar4 = &aCStack_98[0].max.y;
  pfVar6 = (float *)&stack0xffffff40;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840();
  *(int *)&in_stack_0000000c[6].field_0x190 = iVar2;
  if (iVar2 != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if ((iVar1 == 0) || (*(int *)&g_CGamePtr->field_0x25c != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)(in_stack_0000000c + 1),0.0,-1);
      iVar1 = 0;
      if (0 < *(int *)&in_stack_0000000c[3].field_0x278) {
        this_ptr_00 = (CKeyFramedModelInstance *)&in_stack_0000000c[3].field_0x290;
        pCVar3 = (CVector3f *)&in_stack_0000000c[4].field_0x158;
        pCVar9 = (CVector3f *)&in_stack_0000000c[4].field_0x170;
        translation = (CVector3f *)&in_stack_0000000c[4].field_0x164;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,pCVar9,translation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,pCVar3,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                    (this_ptr_00,0.0,-1);
          engine_matrix_c_pop_FUN_0046b4a0();
          iVar1 = iVar1 + 1;
          translation = (CVector3f *)&translation[0x24].y;
          engine_matrix_c_pop_FUN_0046b4a0();
          pCVar3 = (CVector3f *)&pCVar3[0x24].y;
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
          pCVar9 = (CVector3f *)&pCVar9[0x24].y;
        } while (iVar1 < *(int *)&in_stack_0000000c[3].field_0x278);
      }
    }
    else {
      (*((in_stack_0000000c->vtable)._ub)->getBoundingBox)(in_stack_0000000c,in_stack_ffffff48);
      puVar5 = auStack_68;
      puVar7 = (uint *)&stack0xffffff60;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      core_box_cpp_CBoundingBox3D_render_FUN_0041b700(aCStack_98);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(in_stack_0000000c);
  if ((*(int *)&in_stack_0000000c[6].field_0x190 != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar1 == 0)
     ) {
    afStack_48[4] = 6.0;
    uStack_20 = 0x40c00000;
    afStack_48[2] = 1.14;
    afStack_48[3] = -0.164;
    uStack_28 = 0xbf91eb85;
    uStack_24 = 0xbe27ef9e;
    core_actor_cpp_FUN_00408d70();
    falloff = 10.0;
    fov = 56.0;
    pCVar9 = (CVector3f *)&in_stack_0000000c->orient;
    pCVar3 = &CStack_34;
    CStack_34.x = fStack_1c;
    *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + 4) = auStack_18[(uint)bVar8 * -2];
    *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         auStack_18[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060(pCVar3,pCVar9,fov,falloff);
    core_actor_cpp_FUN_00408d70();
    CStack_58.x = fStack_4c;
    *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2];
    *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&CStack_34 != &CStack_58) {
      CStack_34.x = CStack_58.x;
      CStack_34.y = CStack_58.y;
      CStack_34.z = CStack_58.z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
              (&CStack_34,&(in_stack_0000000c->orient).vec,56.0,10.0);
    return iVar2;
  }
  return iVar2;
}
