// Name: core_vehicle.cpp_CVehicle_renderOpaque_FUN_005a8670
// Address: 005a8670
// Address Range: [[005a8670, 005a899d]]
// Convention: __cdecl
// Signature: int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005a8670(CVehicle *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_vehicle_cpp_CVehicle_renderOpaque_FUN_005a8670(CVehicle *this_ptr)

{
  float fVar1;
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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  pfVar4 = &aCStack_98[0].max.y;
  pfVar6 = (float *)&stack0xffffff40;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  fVar1 = (float)core_box_cpp_FUN_004207b0();
  in_stack_0000000c[0xc].orient_matrix.m[1].y = fVar1;
  if (fVar1 != 0.0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if ((iVar2 == 0) || (g_CGamePtr->goggles_active != 0)) {
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                ((CKeyFramedModelInstance *)(in_stack_0000000c + 1),0.0,-1);
      iVar2 = 0;
      if (0 < in_stack_0000000c[6].dead2) {
        this_ptr_00 = (CKeyFramedModelInstance *)
                      ((int)&in_stack_0000000c[6].previous_transform_state.orientation + 8);
        pCVar3 = (CVector3f *)(in_stack_0000000c[8].actor_name + 0xc);
        pCVar9 = &in_stack_0000000c[8].location.position;
        translation = (CVector3f *)(in_stack_0000000c[8].actor_name + 0x18);
        do {
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,(CVector3f *)&pCVar9->y,translation);
          engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                    (DAT_00612560,pCVar3,(CVector3f *)0x0);
          core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                    (this_ptr_00,0.0,-1);
          engine_drender_cpp_pop_FUN_004839a0();
          iVar2 = iVar2 + 1;
          translation = (CVector3f *)&translation[0x24].y;
          engine_drender_cpp_pop_FUN_004839a0();
          pCVar3 = (CVector3f *)&pCVar3[0x24].y;
          this_ptr_00 = (CKeyFramedModelInstance *)(this_ptr_00[1].part_visibility_flags + 0xe);
          pCVar9 = (CVector3f *)(&pCVar9->y + 0x6c);
        } while (iVar2 < in_stack_0000000c[6].dead2);
      }
    }
    else {
      (*((in_stack_0000000c->vtable)._ub)->getBoundingBox)(in_stack_0000000c,in_stack_ffffff48);
      puVar5 = auStack_68;
      puVar7 = (uint *)&stack0xffffff60;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      core_box_cpp_CBoundingBox3D_render_FUN_00421670(aCStack_98);
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0(in_stack_0000000c);
  if ((in_stack_0000000c[0xc].orient_matrix.m[1].y != 0.0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar2 == 0)
     ) {
    afStack_48[4] = 6.0;
    uStack_20 = 0x40c00000;
    afStack_48[2] = 1.14;
    afStack_48[3] = -0.164;
    uStack_28 = 0xbf91eb85;
    uStack_24 = 0xbe27ef9e;
    core_actor_cpp_FUN_00408b40();
    falloff = 10.0;
    fov = 56.0;
    pCVar9 = (CVector3f *)&in_stack_0000000c->orient;
    pCVar3 = &CStack_34;
    CStack_34.x = fStack_1c;
    *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + 4) = auStack_18[(uint)bVar8 * -2];
    *(uint *)((int)&CStack_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         auStack_18[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_dlight_cpp_renderConeLightGeometry_FUN_00465890(pCVar3,pCVar9,fov,falloff);
    core_actor_cpp_FUN_00408b40();
    CStack_58.x = fStack_4c;
    *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + 4) = afStack_48[(uint)bVar8 * -2];
    *(float *)((int)&CStack_58 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_48[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&CStack_34 != &CStack_58) {
      CStack_34.x = CStack_58.x;
      CStack_34.y = CStack_58.y;
      CStack_34.z = CStack_58.z;
    }
    core_dlight_cpp_renderConeLightGeometry_FUN_00465890
              (&CStack_34,&(in_stack_0000000c->orient).vec,56.0,10.0);
    return (int)fVar1;
  }
  return (int)fVar1;
}
