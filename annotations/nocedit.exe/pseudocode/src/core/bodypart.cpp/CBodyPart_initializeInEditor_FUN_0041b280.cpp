// Name: core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280
// Address: 0041b280
// Address Range: [[0041b280, 0041b4de]]
// Convention: __cdecl
// Signature: int core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart * this_ptr)

#include "nocturne.h"

int __cdecl core_bodypart_cpp_CBodyPart_initializeInEditor_FUN_0041b280(CBodyPart *this_ptr)

{
  bool bVar1;
  int iVar2;
  CDeformableModel *config_param1;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CBodyPart *in_stack_00000024;
  float in_stack_ffffd7dc;
  CMotionList *in_stack_ffffd7e0;
  CMotionList *in_stack_ffffd7e4;
  float in_stack_ffffd7e8;
  float in_stack_ffffd7ec;
  uint auStack_6ec [93];
  byte auStack_578 [8];
  CPickList CStack_570;
  char acStack_d0 [4];
  char acStack_cc [188];
  
  iVar2 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                    (g_CEditorToolsPtr,"Select model to dismember","models",
                     "*.dfm",(bool)((char)&CStack_570 + -0x74));
  if (iVar2 == 0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)&stack0xffffd7c4);
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)&stack0xffffd7c8,
             CStack_570.cancel_button.button_text + 0xb8);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450
            ((CDeformableModelInstance *)&stack0xffffd7cc);
  config_param1 =
       core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                 ((CDeformableModelInstance *)&stack0xffffd7d0);
  iVar2 = config_param1->num_parts;
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(uint *)((int)auStack_6ec + iVar4) = 0;
      iVar4 = iVar3;
    } while (iVar3 < iVar2 * 4);
  }
  while( true ) {
    bVar1 = false;
    iVar4 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_578);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        if (*(int *)((int)auStack_6ec + iVar3 + 4) != 0) {
          bVar1 = true;
        }
        core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
                  ((CDeformableModel *)this_ptr,iVar4);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_d0,"%s\t%s");
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_578,acStack_cc);
      } while (iVar4 < iVar2);
    }
    if (bVar1) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_578 + 4),"(Done)");
    }
    this_ptr = (CBodyPart *)
               shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)(auStack_578 + 4),"Select which part(s) to dismember",
                          (int)config_param1,0);
    if ((int)this_ptr < 0) break;
    if ((bVar1) &&
       (this_ptr ==
        (CBodyPart *)
        (((CDeformableModel *)(CStack_570.base_strlist.item_count + -0x9000))->model_filename + 0x4f
        ))) {
      iVar4 = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,
                 (uint)in_stack_ffffd7e4,(uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          if (*(int *)((int)auStack_6ec + iVar3 + 0xc) != 0) {
            core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
                      ((CDeformableModelInstance *)&stack0xffffd7e0,in_stack_00000024,iVar4);
          }
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar4 < iVar2);
      }
      core_bodypart_cpp_FUN_0041a050();
      core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                ((CDeformableModelInstance *)&stack0xffffd7e4,0,(uint)in_stack_ffffd7e4,
                 (uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
      return 1;
    }
    auStack_6ec[(int)((this_ptr->base_actor).actor_name + 2)] =
         (uint)(auStack_6ec[(int)((this_ptr->base_actor).actor_name + 2)] == 0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,(uint)in_stack_ffffd7e4
               ,(uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&CStack_570,0,(uint)in_stack_ffffd7dc,(uint)in_stack_ffffd7e0,(uint)in_stack_ffffd7e4,
             (uint)in_stack_ffffd7e8,(uint)in_stack_ffffd7ec);
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
            ((CDeformableModelInstance *)&stack0xffffd7e0,0,(uint)in_stack_ffffd7e0,
             (uint)in_stack_ffffd7e4,(uint)in_stack_ffffd7e8);
  return 0;
}
