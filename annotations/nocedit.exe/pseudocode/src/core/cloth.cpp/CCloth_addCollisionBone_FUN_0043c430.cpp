// Name: core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430
// Address: 0043c430
// Address Range: [[0043c430, 0043c6a3]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_addCollisionBone_FUN_0043c430(CCloth *this_ptr)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_addCollisionBone_FUN_0043c430(CCloth *this_ptr)

{
  char cVar2;
  CSkeleton *pCVar2;
  CSkeleton *pCVar3;
  int iVar3;
  char *pcVar4;
  int iVar5;
  SBone *string_data;
  int iVar6;
  SClothBone *pSVar7;
  double dVar4;
  double dVar5;
  CPickList local_4cc;
  char local_124 [256];
  double local_24;
  float local_1c;
  float local_18;
  int local_14;
  char cVar1;
  
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  engine_special_cpp_clearScreen_FUN_005b3e70();
  iVar6 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_4cc);
  if (0 < pCVar2->bone_count) {
    string_data = pCVar2->bone_list;
    do {
      iVar5 = 0;
      pCVar3 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if (iVar6 == pCVar3->bone_list[0].parent_index) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_4cc.base,string_data->bone_name);
            break;
          }
          iVar5 = iVar5 + 1;
          pCVar3 = (CSkeleton *)((pCVar3->motion_list).state_names[1] + 2);
        } while (iVar5 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
      string_data = string_data + 1;
    } while (iVar6 < pCVar2->bone_count);
  }
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_4cc,"Select bone to add",-1,0);
  if (-1 < iVar3) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_4cc.base,iVar3);
    pSVar7 = this_ptr->collide_bones + this_ptr->collide_bone_count;
    do {
      cVar1 = *pcVar4;
      pSVar7->name[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pSVar7->name[1] = cVar2;
      pSVar7 = (SClothBone *)(pSVar7->name + 2);
    } while (cVar2 != '\0');
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_124,10,0,0,"Enter in X radius : ");
    dVar4 = _strtod(local_124);
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_124,10,0,0xb,"Enter in Y radius : ");
    dVar5 = _strtod(local_124);
    this_ptr->collide_bones[this_ptr->collide_bone_count].radius1 = (float)dVar4;
    this_ptr->collide_bones[this_ptr->collide_bone_count].radius2 = (float)dVar5;
    iVar3 = this_ptr->collide_bone_count;
    this_ptr->collide_bones[iVar3].euler1.z = 0.0;
    this_ptr->collide_bones[iVar3].euler1.y = this_ptr->collide_bones[iVar3].euler1.z;
    this_ptr->collide_bones[iVar3].euler1.x = this_ptr->collide_bones[iVar3].euler1.y;
    iVar3 = this_ptr->collide_bone_count;
    this_ptr->collide_bones[iVar3].euler2.z = 0.0;
    this_ptr->collide_bones[iVar3].euler2.y = this_ptr->collide_bones[iVar3].euler2.z;
    this_ptr->collide_bones[iVar3].euler2.x = this_ptr->collide_bones[iVar3].euler2.y;
    this_ptr->collide_bones[this_ptr->collide_bone_count].length = 0.0;
    this_ptr->collide_bone_count = this_ptr->collide_bone_count + 1;
  }
  core_cloth_cpp_CCloth_setup_FUN_00439710
            (this_ptr,&UNION_UVector3_00838e40.f,&UNION_UVector3_00838e4c.f,
             &g_CDeformableModelInstanceInstance);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_4cc,0);
  return;
}
