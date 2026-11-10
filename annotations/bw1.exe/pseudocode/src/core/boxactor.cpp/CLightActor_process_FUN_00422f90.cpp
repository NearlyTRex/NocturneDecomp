// Name: core_boxactor.cpp_CLightActor_process_FUN_00422f90
// Address: 00422f90
// Address Range: [[00422f90, 004231d3]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422f90(CLightActor *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CLightActor_process_FUN_00422f90(CLightActor *this_ptr,float delta_time)

{
  UVector3 *pUVar1;
  CDemonSet *this_ptr_00;
  float fVar2;
  uint uVar3;
  int iVar4;
  CDemonGlobe *this_ptr_01;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float in_stack_00000010;
  float afStackY_101c [965];
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  CMatrix3x4f CStack_94;
  CMatrix3x4f CStack_64;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  float fStack_1c;
  float afStack_18 [4];
  
  bVar7 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_00422000(&this_ptr->base,delta_time);
  if ((this_ptr->light_actor_type == LIGHT_TYPE_LANTERN) &&
     (fVar2 = this_ptr->flicker_timer - in_stack_00000010, this_ptr->flicker_timer = fVar2,
     fVar2 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30
              (&this_ptr->light,CDemonFilter_ARRAY_007c5098 + iVar4,filter_index,filter_pos_x,
               filter_pos_y);
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,0.15);
    this_ptr->flicker_timer = fVar2;
  }
  if (this_ptr->light_actor_type != LIGHT_TYPE_GLOBE) {
    if ((this_ptr->light).light_enabled_flag == 0) {
      return;
    }
    core_actor_cpp_FUN_00408b40(this_ptr,&this_ptr->blight_pos);
    pUVar1 = &(this_ptr->light).base.base.position;
    fStack_1c = afStack_18[2];
    afStack_18[(uint)bVar7 * -2] = afStack_18[(uint)bVar7 * -2 + 3];
    afStack_18[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)(&stack0xfffffff8 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    if (pUVar1 != (UVector3 *)&fStack_1c) {
      (pUVar1->f).x = fStack_1c;
      (this_ptr->light).base.base.position.f.y = afStack_18[0];
      (this_ptr->light).base.base.position.f.z = afStack_18[1];
    }
    core_xform_cpp_FUN_005b5760(&CStack_94,(CVector3f *)&DAT_02c8af28,&(this_ptr->light_orient).vec)
    ;
    core_xform_cpp_FUN_005b5760
              (&CStack_64,(CVector3f *)&DAT_02c8af28,&(this_ptr->base).base.orient.vec);
    core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_94,&CStack_64);
    puVar5 = (uint *)&stack0xffffff0c;
    puVar6 = (uint *)&stack0xffffff3c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xffffff3c);
    CStack_28.x = fStack_34;
    *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + 4) = afStack_30[(uint)bVar7 * -2];
    *(float *)((int)&CStack_28 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
         afStack_30[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
              (&(this_ptr->light).base.base.rotation_matrix,&CStack_28);
    core_set_cpp_CDemonSet_addDynamicLight_FUN_005518e0(g_CDemonSetPtr,&this_ptr->light);
    return;
  }
  this_ptr_01 = &this_ptr->globe;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970
            (this_ptr_01,&(this_ptr->base).base.location.position);
  uVar3 = rand();
  (this_ptr->globe).intensity_multiplier = uVar3 & 0x7fff;
  (this_ptr->globe).intensity.bytes[0] = (uchar)((int)(uVar3 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(this_ptr_01,2.0);
  this_ptr_00 = g_CDemonSetPtr;
  (this_ptr->globe).corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(this_ptr_00,this_ptr_01);
  return;
}
