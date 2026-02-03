// Name: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// Address: 0041b280
// Address Range: [[0041b280, 0041b4de]]
// Convention: __cdecl
// Signature: int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  SPart *pSVar5;
  int iVar6;
  CDeformableModelInstance local_2840;
  CPickList local_58c;
  char local_1e4 [260];
  char local_e0 [200];
  int local_18;
  CDeformableModel *local_14;
  
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select model to dismember","models",
                     "*.dfm",(int)local_1e4);
  if (iVar2 == 0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(&local_2840);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840(&local_2840,local_1e4);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(&local_2840);
  local_14 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(&local_2840);
  iVar2 = local_14->num_parts;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 4;
      *(uint *)((int)local_2840.part_visibility_flags + iVar6) = 0;
      iVar6 = iVar3;
    } while (iVar3 < iVar2 * 4);
  }
  local_18 = 0;
  while( true ) {
    bVar1 = false;
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_58c);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        pcVar4 = "No";
        if (*(int *)((int)local_2840.part_visibility_flags + iVar3) != 0) {
          pcVar4 = "Yes";
          bVar1 = true;
        }
        pSVar5 = core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_14,iVar6);
        sprintf(local_e0,"%s\t%s",pSVar5,pcVar4);
        iVar3 = iVar3 + 4;
        iVar6 = iVar6 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_58c.base,local_e0);
      } while (iVar6 < iVar2);
    }
    if (bVar1) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_58c.base,"(Done)");
    }
    local_18 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_58c,"Select which part(s) to dismember",local_18,0);
    if (local_18 < 0) break;
    if ((bVar1) && (local_18 == local_58c.base.item_count + -1)) {
      iVar6 = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_58c,0);
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          if (*(int *)((int)local_2840.part_visibility_flags + iVar3) != 0) {
            core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
                      (&local_2840,this_ptr,iVar6);
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar6 < iVar2);
      }
      core_bodypart_cpp_CBodyPart_FUN_0041a050(this_ptr);
      core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&local_2840,0);
      return 1;
    }
    local_2840.part_visibility_flags[local_18] =
         (uint)(local_2840.part_visibility_flags[local_18] == 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_58c,0);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_58c,0);
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40(&local_2840,0);
  return 0;
}
