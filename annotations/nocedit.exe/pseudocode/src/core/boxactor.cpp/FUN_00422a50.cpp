// Name: core_boxactor.cpp_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422afa] [00422b17, 00422c73]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a50()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a50
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,
               CDemonActor *param_5,uint param_6,float param_7)

{
  CDemonActor *this_ptr;
  CDemonSet *this_ptr_00;
  CDemonActor *pCVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float unaff_retaddr;
  int filter_index;
  int filter_pos_x;
  int in_stack_ffffff20;
  CMatrix3x4f *in_stack_ffffff30;
  uint auStack_c4 [10];
  byte auStack_9c [52];
  uint uStack_68;
  CVector3f aCStack_64 [3];
  byte auStack_40 [56];
  
  this_ptr = param_5;
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0();
  if ((param_5[4].scale.y == 2) &&
     (param_7 = param_5[0x28].create_prob - param_7, param_5[0x28].create_prob = param_7,
     param_7 <= 0.0)) {
    filter_pos_x = 0;
    filter_index = 0;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              ((CDemonLight *)&param_5[4].scale.z,CDemonFilter_ARRAY_008229ec + iVar3,filter_index,
               filter_pos_x,in_stack_ffffff20);
    pCVar1 = (CDemonActor *)core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.15);
    param_5[0x28].create_prob = (float)pCVar1;
    param_5 = pCVar1;
  }
  if (this_ptr[4].scale.y != 3) {
    if (this_ptr[0x1a].orient.bank == 0.0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (this_ptr,(CVector3f *)&stack0xfffffff8,
               (CVector3f *)&this_ptr[0x28].orient_matrix.m[2].z);
    if (&this_ptr[4].field19_0x114 != (int *)&stack0xfffffffc) {
      this_ptr[4].field19_0x114 = unaff_EBX;
      this_ptr[4].field20_0x118 = (int)unaff_retaddr;
      this_ptr[4].field21_0x11c = (int)param_5;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_40,&g_ZeroVector,(CVector3f *)&this_ptr[0x28].field6_0x68);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              ((CMatrix3x4f *)auStack_9c,&g_ZeroVector,(CVector3f *)&this_ptr->orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
              ((CMatrix3x4f *)(auStack_40 + 8),(CMatrix3x4f *)(auStack_9c + 4),in_stack_ffffff30);
    puVar4 = auStack_c4;
    puVar5 = &uStack_68;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_64,(CMatrix3x3f *)&stack0xfffffffc);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&this_ptr[4].field22_0x120,(CVector3f *)&stack0x00000000);
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)this_ptr[0x28].create_event,(CColor3f *)&this_ptr->location);
  uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  *(uint *)(this_ptr[0x28].create_event + 0x3c) = uVar2 & 0x7fff;
  this_ptr[0x28].create_event[0x1c] = (char)((int)(uVar2 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)this_ptr[0x28].create_event,2.0);
  this_ptr_00 = g_CDemonSetPtr;
  this_ptr[0x28].create_event[0x20] = '\0';
  this_ptr[0x28].create_event[0x21] = '\0';
  this_ptr[0x28].create_event[0x22] = '\0';
  this_ptr[0x28].create_event[0x23] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr_00);
  return;
}
