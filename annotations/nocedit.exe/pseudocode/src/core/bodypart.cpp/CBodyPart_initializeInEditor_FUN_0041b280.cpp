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
  CMotionList *in_stack_ffffd7c0;
  uint in_stack_ffffd7c4;
  float in_stack_ffffd7c8;
  uint in_stack_ffffd7cc;
  float in_stack_ffffd7d0;
  uint auStack_700 [93];
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
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)&stack0xffffd7c0);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)&stack0xffffd7c0,local_1e4);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)&stack0xffffd7c0);
  local_14 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                       ((CDeformableModelInstance *)&stack0xffffd7c0);
  iVar2 = local_14->num_parts;
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 4;
      *(uint *)((int)auStack_700 + iVar6) = 0;
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
        if (*(int *)((int)auStack_700 + iVar3) != 0) {
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
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_58c,0,(uint)in_stack_ffffd7c0,in_stack_ffffd7c4,(uint)in_stack_ffffd7c8,
                 in_stack_ffffd7cc,(uint)in_stack_ffffd7d0);
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          if (*(int *)((int)auStack_700 + iVar3) != 0) {
            core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
                      ((CDeformableModelInstance *)&stack0xffffd7c0,this_ptr,iVar6);
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar6 < iVar2);
      }
      core_bodypart_cpp_FUN_0041a050();
      core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                ((CDeformableModelInstance *)&stack0xffffd7c0,0,(uint)in_stack_ffffd7c0,
                 in_stack_ffffd7c4,(uint)in_stack_ffffd7c8);
      return 1;
    }
    auStack_700[local_18] = (uint)(auStack_700[local_18] == 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&local_58c,0,(uint)in_stack_ffffd7c0,in_stack_ffffd7c4,(uint)in_stack_ffffd7c8,
               in_stack_ffffd7cc,(uint)in_stack_ffffd7d0);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_58c,0,(uint)in_stack_ffffd7c0,in_stack_ffffd7c4,(uint)in_stack_ffffd7c8,
             in_stack_ffffd7cc,(uint)in_stack_ffffd7d0);
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
            ((CDeformableModelInstance *)&stack0xffffd7c0,0,(uint)in_stack_ffffd7c0,
             in_stack_ffffd7c4,(uint)in_stack_ffffd7c8);
  return 0;
}
