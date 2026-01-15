// Name: core_boxactor.cpp_FUN_00422a50
// Address: 00422a50
// Address Range: [[00422a50, 00422afa] [00422b17, 00422c73]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00422a50()

#include "nocturne.h"

void core_boxactor_cpp_FUN_00422a50(void)

{
  CDemonSet *this_ptr;
  uint uVar1;
  int iVar2;
  CMatrix3x4f *unaff_ESI;
  float *pfVar3;
  CVector3f *pCVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  int filter_index;
  int filter_pos_x;
  int filter_pos_y;
  float local_e4 [12];
  CMatrix3x4f local_b4;
  CVector3f local_84 [4];
  CMatrix3x4f local_54;
  CVector3f local_24;
  CVector3f local_18;
  float local_c;
  
  bVar5 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_004219e0();
  if ((in_stack_00000004[4].scale.y == 2) &&
     (in_stack_00000008 = in_stack_00000004[0x28].create_prob - in_stack_00000008,
     in_stack_00000004[0x28].create_prob = in_stack_00000008, in_stack_00000008 <= 0.0)) {
    filter_pos_y = 0;
    filter_pos_x = 0;
    filter_index = 0;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,7);
    core_dlight_cpp_CDemonLight_applyFilter_FUN_00474770
              ((CDemonLight *)&in_stack_00000004[4].scale.z,CDemonFilter_ARRAY_008229ec + iVar2,
               filter_index,filter_pos_x,filter_pos_y);
    local_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,0.15);
    in_stack_00000004[0x28].create_prob = local_c;
  }
  if (in_stack_00000004[4].scale.y != 3) {
    if (in_stack_00000004[0x1a].orient.bank == 0.0) {
      return;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&local_18,
               (CVector3f *)&in_stack_00000004[0x28].orient_matrix.m[2].z);
    if ((CVector3f *)&in_stack_00000004[4].field19_0x114 != &local_18) {
      in_stack_00000004[4].field19_0x114 = (int)local_18.x;
      in_stack_00000004[4].field20_0x118 = (int)local_18.y;
      in_stack_00000004[4].field21_0x11c = (int)local_18.z;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_54,&g_ZeroVector,(CVector3f *)&in_stack_00000004[0x28].field6_0x68);
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_b4,&g_ZeroVector,(CVector3f *)&in_stack_00000004->orient);
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_54,&local_b4,unaff_ESI);
    pfVar3 = local_e4;
    pCVar4 = local_84;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar4->x = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_84,(CMatrix3x3f *)&local_24);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&in_stack_00000004[4].field22_0x120,&local_24);
    core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)in_stack_00000004[0x28].create_event,
             (CColor3f *)&in_stack_00000004->location);
  uVar1 = crt_stdlib_c_rand_FUN_005feb5c();
  *(uint *)(in_stack_00000004[0x28].create_event + 0x3c) = uVar1 & 0x7fff;
  in_stack_00000004[0x28].create_event[0x1c] = (char)((int)(uVar1 & 0x7fff) >> 10);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)in_stack_00000004[0x28].create_event,2.0);
  this_ptr = g_CDemonSetPtr;
  in_stack_00000004[0x28].create_event[0x20] = '\0';
  in_stack_00000004[0x28].create_event[0x21] = '\0';
  in_stack_00000004[0x28].create_event[0x22] = '\0';
  in_stack_00000004[0x28].create_event[0x23] = '\0';
  core_set_cpp_CDemonSet_FUN_0056d110(this_ptr);
  return;
}
