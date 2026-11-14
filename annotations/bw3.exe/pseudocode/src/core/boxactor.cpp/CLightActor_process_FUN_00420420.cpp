// Name: core_boxactor.cpp_CLightActor_process_FUN_00420420
// Address: 00420420
// Address Range: [[00420420, 004207e8]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00420420(CLightActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00420420(CLightActor *this_ptr,float delta_time)

{
  UVector3 *pUVar1;
  CDemonSet *pCVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CDemonGlobe *pCVar7;
  CMatrix3x4f *pCVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float in_stack_00000010;
  float afStackY_1038 [965];
  int filter_pos_x;
  int filter_pos_y;
  CMatrix3x4f CStack_110;
  CMatrix3x4f CStack_e0;
  float afStack_b0 [12];
  CMatrix3x4f CStack_80;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [5];
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar10 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041f360(&this_ptr->base,delta_time);
  if ((this_ptr->light_actor_type == LIGHT_TYPE_LANTERN) &&
     (fVar4 = this_ptr->flicker_timer - in_stack_00000010, this_ptr->flicker_timer = fVar4,
     fVar4 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    iVar6 = 0;
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
              (&this_ptr->light,CDemonFilter_ARRAY_007e17b8 + iVar5,iVar6,filter_pos_x,filter_pos_y)
    ;
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,0.15);
    this_ptr->flicker_timer = fVar4;
  }
  if (this_ptr->light_actor_type == LIGHT_TYPE_GLOBE) {
    pCVar7 = &this_ptr->globe;
    core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0
              (pCVar7,&(this_ptr->base).base.location.position);
    uVar3 = rand();
    (this_ptr->globe).intensity_multiplier = uVar3 & 0x7fff;
    (this_ptr->globe).intensity.bytes[0] = (uchar)((int)(uVar3 & 0x7fff) >> 10);
    core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar7,2.0);
    pCVar2 = g_CDemonSetPtr;
    (this_ptr->globe).corona_mode = 0;
    core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(pCVar2,pCVar7);
    return;
  }
  if ((this_ptr->light).light_enabled_flag != 0) {
    core_actor_cpp_FUN_00408b80(this_ptr,&this_ptr->blight_pos);
    pUVar1 = &(this_ptr->light).base.base.position;
    CStack_50.x = fStack_38;
    *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + 4) = afStack_34[(uint)bVar10 * -2];
    *(float *)((int)&CStack_50 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    if ((CVector3f *)pUVar1 != &CStack_50) {
      (pUVar1->f).x = CStack_50.x;
      (this_ptr->light).base.base.position.f.y = CStack_50.y;
      (this_ptr->light).base.base.position.f.z = CStack_50.z;
    }
    core_xform_cpp_FUN_00583940(&CStack_110,&DAT_02cfd900,&this_ptr->light_orient);
    core_xform_cpp_FUN_00583940(&CStack_e0,&DAT_02cfd900,&(this_ptr->base).base.orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(&CStack_110,&CStack_e0,&CStack_80);
    pCVar8 = &CStack_80;
    pfVar9 = afStack_b0;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar9 = pCVar8->m[0].w;
      pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar10 * -2 + 1) * 4);
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_00583b10(afStack_b0);
    CStack_44.x = afStack_34[2];
    *(float *)((int)&CStack_44 + (uint)bVar10 * -8 + 4) = afStack_34[(uint)bVar10 * -2 + 3];
    *(float *)((int)&CStack_44 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_34[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
              (&(this_ptr->light).base.base.rotation_matrix,&CStack_44);
    if (this_ptr->light_actor_type == LIGHT_TYPE_LANTERN) {
      (this_ptr->light).base.max_distance = 0.0;
      core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0(&this_ptr->light,0.0);
      core_set_cpp_CDemonSet_addDynamicLight_FUN_00537270(g_CDemonSetPtr,&this_ptr->light);
      fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-0.25,0.25);
      pCVar7 = &this_ptr->globe;
      CStack_50.x = CStack_50.x + fVar4;
      fStack_14 = fStack_1c;
      CStack_50.y = CStack_50.y + fStack_1c;
      CStack_50.z = CStack_50.z + fStack_20;
      core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(pCVar7,&CStack_50);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(60000.0,65000.0);
      fVar11 = (float10)fVar4;
      round();
      iVar5 = (int)ROUND(fVar11);
      (this_ptr->globe).intensity_multiplier = iVar5;
      iVar5 = (iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0);
      iVar6 = iVar5 >> 0x1f;
      (this_ptr->globe).intensity.bytes[0] =
           (uchar)((int)(((iVar5 >> 8) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2);
      fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(14.75,15.25);
      core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(pCVar7,fVar4);
      pCVar2 = g_CDemonSetPtr;
      (this_ptr->globe).corona_mode = 1;
      core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(pCVar2,pCVar7);
      return;
    }
  }
  return;
}
