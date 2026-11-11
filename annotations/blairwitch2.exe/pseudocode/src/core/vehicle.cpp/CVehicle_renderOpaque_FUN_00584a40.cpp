// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_00584a40
// Address: 00584a40
// Address Range: [[00584a40, 00584d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_00584a40(CVehicle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_00584a40(CVehicle *this_ptr)

{
  void *pvVar1;
  int iVar2;
  CKeyFramedModelInstance *this_ptr_00;
  float *pfVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  CVector3f *translation;
  byte bVar7;
  CDemonActor *in_stack_0000000c;
  float afStackY_1040 [990];
  CVector3f *pCVar8;
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
  
  bVar7 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pfVar3 = &aCStack_98[0].max.y;
  pfVar5 = (float *)&stack0xffffff40;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  pvVar1 = (void *)core_box_cpp_FUN_0041a840();
  in_stack_0000000c[6].particle_systems[0].particles = pvVar1;
  if (pvVar1 != (void *)0x0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
    if ((iVar2 == 0) || (g_CGamePtr->goggles_active != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                ((CKeyFramedModelInstance *)(in_stack_0000000c + 1),0.0,-1);
      iVar2 = 0;
      if (0 < (int)in_stack_0000000c[3].particle_systems[4].owner) {
        this_ptr_00 = (CKeyFramedModelInstance *)
                      &in_stack_0000000c[3].particle_systems[4].fade_duration;
        pCVar8 = &in_stack_0000000c[4].particle_systems[0].position;
        pCVar9 = (CVector3f *)&in_stack_0000000c[4].particle_systems[0].next_particle;
        translation = (CVector3f *)&in_stack_0000000c[4].particle_systems[0].active;
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,pCVar9,translation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                    (DAT_0060b280,(CVector3f *)&pCVar8->y,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
                    (this_ptr_00,0.0,-1);
          engine_matrix_c_pop_FUN_0046b4a0();
          iVar2 = iVar2 + 1;
          translation = (CVector3f *)&translation[0x24].y;
          engine_matrix_c_pop_FUN_0046b4a0();
          pCVar8 = (CVector3f *)(&pCVar8->y + 0x6c);
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
          pCVar9 = (CVector3f *)&pCVar9[0x24].y;
        } while (iVar2 < (int)in_stack_0000000c[3].particle_systems[4].owner);
      }
    }
    else {
      (*((in_stack_0000000c->vtable)._ub)->getBoundingBox)(in_stack_0000000c,in_stack_ffffff48);
      puVar4 = auStack_68;
      puVar6 = (uint *)&stack0xffffff60;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      core_box_cpp_CBoundingBox3D_render_FUN_0041b700(aCStack_98);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(in_stack_0000000c);
  if ((in_stack_0000000c[6].particle_systems[0].particles != (void *)0x0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280), iVar2 == 0)
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
    pCVar8 = &CStack_34;
    CStack_34.x = fStack_1c;
    *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + 4) = auStack_18[(uint)bVar7 * -2];
    *(uint *)((int)&CStack_34 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         auStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060(pCVar8,pCVar9,fov,falloff);
    core_actor_cpp_FUN_00408d70();
    CStack_58.x = fStack_4c;
    *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + 4) = afStack_48[(uint)bVar7 * -2];
    *(float *)((int)&CStack_58 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_48[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    if (&CStack_34 != &CStack_58) {
      CStack_34.x = CStack_58.x;
      CStack_34.y = CStack_58.y;
      CStack_34.z = CStack_58.z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_0044d060
              (&CStack_34,&(in_stack_0000000c->orient).vec,56.0,10.0);
    return (int)pvVar1;
  }
  return (int)pvVar1;
}
