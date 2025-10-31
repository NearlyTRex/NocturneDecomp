// Name: core_setedit.cpp_FUN_0057b410
// Address: 0057b410
// Address Range: [[0057b410, 0057b4fd]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057b410()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c9da [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_lights_already_00647795
//   TerminatedCString s_Enter_new_spot_light_nam_006477ae
//   TerminatedCString s_Precompute_light_visibil_006477c8
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   crt_memory.c_memset_FUN_005fde40
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057b410(undefined4 param_1) */

void core_setedit_cpp_FUN_0057b410(void)

{
  int iVar1;
  C3DSLight *this_ptr;
  CDemonSet *in_stack_00000004;
  
  if (199 < in_stack_00000004->light_count) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
    return;
  }
  this_ptr = in_stack_00000004->lights + in_stack_00000004->light_count;
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x1898);
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr);
  this_ptr->light_type = 0;
  in_stack_00000004->light_count = in_stack_00000004->light_count + 1;
  iVar1 = core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50();
  if (iVar1 != 0) {
    if (this_ptr->name[0] == '\0') {
      do {
        iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new spot light name",this_ptr->name,
                           0x100,0);
        if (iVar1 == 0) goto LAB_0057b4f4;
      } while (this_ptr->name[0] == '\0');
    }
    core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Precompute light visibility?");
    if (iVar1 != 0) {
      core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
    }
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
    return;
  }
LAB_0057b4f4:
  in_stack_00000004->light_count = in_stack_00000004->light_count + -1;
  return;
}


// Assembly code:
// 0057b410: PUSH EBX
//   Label: core_setedit.cpp_FUN_0057b410
// 0057b411: PUSH ESI
// 0057b412: PUSH EDI
// 0057b413: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0057b417: MOV EDX,dword ptr [EDI + 0x19a2c]
// 0057b41d: CMP EDX,0xc8
// 0057b423: JGE 0x0057b4dd
//   XREF to: 0057b4dd (CONDITIONAL_JUMP)
// 0057b429: IMUL EBX,EDX,0x1898
// 0057b42f: PUSH 0x1898
// 0057b434: LEA EAX,[EDI + 0x19a30]
// 0057b43a: PUSH 0x0
// 0057b43c: ADD EBX,EAX
// 0057b43e: PUSH EBX
// 0057b43f: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0057b444: ADD ESP,0xc
// 0057b447: PUSH EBX
// 0057b448: CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   XREF to: 005879b0 (UNCONDITIONAL_CALL)
// 0057b44d: MOV dword ptr [EBX],0x0
// 0057b453: ADD ESP,0x4
// 0057b456: MOV ESI,dword ptr [EDI + 0x19a2c]
// 0057b45c: PUSH EBX
// 0057b45d: INC ESI
// 0057b45e: PUSH EDI
// 0057b45f: MOV dword ptr [EDI + 0x19a2c],ESI
// 0057b465: CALL core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   XREF to: 0057ae50 (UNCONDITIONAL_CALL)
// 0057b46a: ADD ESP,0x8
// 0057b46d: TEST EAX,EAX
// 0057b46f: JZ 0x0057b4f4
//   XREF to: 0057b4f4 (CONDITIONAL_JUMP)
// 0057b475: CMP byte ptr [EBX + 0x4],0x0
// 0057b479: JNZ 0x0057b4a4
//   XREF to: 0057b4a4 (CONDITIONAL_JUMP)
// 0057b47b: LEA ESI,[EBX + 0x4]
// 0057b47e: PUSH 0x0
//   Label: LAB_0057b47e
// 0057b480: PUSH 0x100
// 0057b485: PUSH ESI
// 0057b486: PUSH 0x6477ae
//   XREF to: 006477ae (DATA)
// 0057b48b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057b491: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057b492: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057b497: ADD ESP,0x14
// 0057b49a: TEST EAX,EAX
// 0057b49c: JZ 0x0057b4f4
//   XREF to: 0057b4f4 (CONDITIONAL_JUMP)
// 0057b49e: CMP byte ptr [EBX + 0x4],0x0
// 0057b4a2: JZ 0x0057b47e
//   XREF to: 0057b47e (CONDITIONAL_JUMP)
// 0057b4a4: PUSH EDI
//   Label: LAB_0057b4a4
// 0057b4a5: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057b4aa: ADD ESP,0x4
// 0057b4ad: PUSH 0x6477c8
//   XREF to: 006477c8 (DATA)
// 0057b4b2: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057b4b8: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057b4b9: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0057b4be: ADD ESP,0x8
// 0057b4c1: TEST EAX,EAX
// 0057b4c3: JZ 0x0057b4d0
//   XREF to: 0057b4d0 (CONDITIONAL_JUMP)
// 0057b4c5: PUSH -0x1
// 0057b4c7: PUSH EDI
// 0057b4c8: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 0057b4cd: ADD ESP,0x8
// 0057b4d0: PUSH EDI
//   Label: LAB_0057b4d0
// 0057b4d1: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057b4d6: ADD ESP,0x4
// 0057b4d9: POP EDI
// 0057b4da: POP ESI
// 0057b4db: POP EBX
// 0057b4dc: RET
// 0057b4dd: PUSH 0x647795
//   Label: LAB_0057b4dd
//   XREF to: 00647795 (DATA)
// 0057b4e2: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (DATA)
//   XREF to: 00678a60 (READ)
// 0057b4e7: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057b4e8: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057b4ed: ADD ESP,0x8
// 0057b4f0: POP EDI
// 0057b4f1: POP ESI
// 0057b4f2: POP EBX
// 0057b4f3: RET
// 0057b4f4: DEC dword ptr [EDI + 0x19a2c]
//   Label: LAB_0057b4f4
// 0057b4fa: POP EDI
// 0057b4fb: POP ESI
// 0057b4fc: POP EBX
// 0057b4fd: RET
