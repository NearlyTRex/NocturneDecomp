// Name: core_boxactor.cpp_CLightActor_process_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422c73] [03fc4849, 03fc48aa]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422a50(CLightActor *this_ptr,float delta_time)

{
  int iVar1;
  float fVar3;
  uint uVar3;
  int iVar4;
  CDemonGlobe *this_ptr_01;
  CMatrix3x4f *pCVar5;
  CMatrix3x3f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_e4;
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  CDemonSet *this_ptr_00;
  UVector3 *pUVar1;
  float fVar2;
  
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0(&this_ptr->base,delta_time);
  if ((this_ptr->light_actor_type == LIGHT_TYPE_LANTERN) &&
     (fVar2 = this_ptr->flicker_timer - delta_time, this_ptr->flicker_timer = fVar2, fVar2 <= 0.0))
  {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              (&this_ptr->light,CDemonFilter_ARRAY_008229ec + iVar1,filter_index,filter_pos_x,
               filter_pos_y);
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,0.15);
    this_ptr->flicker_timer = fVar3;
  }
  if (this_ptr->light_actor_type != LIGHT_TYPE_GLOBE) {
    if ((this_ptr->light).light_enabled_flag == 0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_18,&this_ptr->blight_pos);
    pUVar1 = &(this_ptr->light).base.base.position;
    if (pUVar1 != (UVector3 *)&local_18) {
      (pUVar1->f).x = local_18.x;
      (this_ptr->light).base.base.position.f.y = local_18.y;
      (this_ptr->light).base.base.position.f.z = local_18.z;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_54,&g_ZeroVector.f,&(this_ptr->light_orient).vec);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_b4,&g_ZeroVector.f,&(this_ptr->base).base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_54,&local_b4,&local_e4);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_84,&local_24);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&(this_ptr->light).base.base.rotation_matrix,&local_24);
    core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,&this_ptr->light);
    return;
  }
  this_ptr_01 = &this_ptr->globe;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310
            (this_ptr_01,&(this_ptr->base).base.location.position);
  uVar3 = rand();
  (this_ptr->globe).intensity_multiplier = uVar3 & 0x7fff;
  (this_ptr->globe).intensity.bytes[0] = (uchar)((int)(uVar3 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(this_ptr_01,2.0);
  this_ptr_00 = g_CDemonSetPtr;
  (this_ptr->globe).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(this_ptr_00,this_ptr_01);
  return;
}
