// Name: core_boxactor.cpp_CLightActor_process_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422afa] [00422b17, 00422c73]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time)

{
  float fVar1;
  CDemonSet *this_ptr_00;
  uint uVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x3f *pCVar5;
  byte bVar6;
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x3f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0(&this_ptr->base,delta_time);
  if ((*(int *)this_ptr->unk == 2) &&
     (fVar1 = *(float *)(this_ptr->unk + 0x2fc8) - delta_time,
     *(float *)(this_ptr->unk + 0x2fc8) = fVar1, fVar1 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              ((CDemonLight *)(this_ptr->unk + 4),CDemonFilter_ARRAY_008229ec + iVar3,filter_index,
               filter_pos_x,filter_pos_y);
    local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.15);
    *(float *)(this_ptr->unk + 0x2fc8) = local_c;
  }
  if (*(int *)this_ptr->unk != 3) {
    if (*(int *)(this_ptr->unk + 0x1cb8) == 0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_18,(CVector3f *)(this_ptr->unk + 0x2fb0));
    if ((CVector3f *)(this_ptr->unk + 8) != &local_18) {
      ((CVector3f *)(this_ptr->unk + 8))->x = local_18.x;
      *(float *)(this_ptr->unk + 0xc) = local_18.y;
      *(float *)(this_ptr->unk + 0x10) = local_18.z;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_54,&g_ZeroVector,(CVector3f *)(this_ptr->unk + 0x2fbc));
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_b4,&g_ZeroVector,(CVector3f *)&(this_ptr->base).base.orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_54,&local_b4,&local_e4);
    pCVar4 = &local_e4;
    pCVar5 = &local_84;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].x = *(float *)pCVar4;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x3f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_24);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)(this_ptr->unk + 0x14),&local_24);
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(this_ptr->unk + 0x2fcc),(CColor3f *)&(this_ptr->base).base.location);
  uVar2 = rand();
  *(uint *)(this_ptr->unk + 0x3008) = uVar2 & 0x7fff;
  this_ptr->unk[0x2fe8] = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(this_ptr->unk + 0x2fcc),2.0);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr->unk[0x2fec] = '\0';
  this_ptr->unk[0x2fed] = '\0';
  this_ptr->unk[0x2fee] = '\0';
  this_ptr->unk[0x2fef] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_00);
  return;
}
