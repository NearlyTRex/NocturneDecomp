// Name: core_skeledit.cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure *this_ptr,char *model_name)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0(CBoneStructure *this_ptr,char *model_name)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  SBoneData *pSVar5;
  CBoneStructure *pCVar6;
  CPickList local_484;
  char local_dc [200];
  SBoneData *local_14;
  
  __STK();
  iVar3 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_484);
  if (0 < this_ptr->bone_count) {
    pSVar5 = this_ptr->bones;
    pCVar6 = this_ptr;
    local_14 = pSVar5;
    do {
      iVar4 = pCVar6->bones[0].parent_index;
      pcVar2 = "(no parent)";
      if (-1 < iVar4) {
        pcVar2 = local_14[iVar4].name;
      }
      _sprintf(local_dc,"%2d. %s\t%d. %s",iVar3,pSVar5,iVar4,pcVar2);
      pCVar6 = (CBoneStructure *)&pCVar6->bones[0].world_matrix.m[2].z;
      pSVar5 = pSVar5 + 1;
      iVar3 = iVar3 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,local_dc);
    } while (iVar3 < this_ptr->bone_count);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,"(Dump to the clipboard)");
  _sprintf(local_dc,"Viewing bone heirarchy for %s.",model_name);
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_484,local_dc,-1,0);
  if (iVar3 == local_484.base.item_count + -1) {
    iVar4 = 0;
    iVar3 = _sprintf
                      (g_SkeleditClipboardBuffer,"Heirarchy for %s\r\n\r\n",model_name);
    pcVar2 = g_SkeleditClipboardBuffer + iVar3;
    if (0 < this_ptr->bone_count) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_484.base,iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = _sprintf(pcVar2,"%s\r\n",pcVar1);
        pcVar2 = pcVar2 + iVar3;
      } while (iVar4 < this_ptr->bone_count);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
              (g_CEditorToolsPtr,g_SkeleditClipboardBuffer);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_484,0);
  return;
}
