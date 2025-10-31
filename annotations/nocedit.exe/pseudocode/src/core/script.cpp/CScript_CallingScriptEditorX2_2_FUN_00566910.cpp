// Name: core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
// Address: 00566910
// Address Range: [[00566910, 0056699e]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910()
// Cross-references:
//   core_script.cpp_CScript_Unk18_FUN_005669a0 (005669a0) at 005669a9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 00565166 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 005648c8 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565c51 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565d00 (00565d00) at 00565e11 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565f70 (00565f70) at 00566055 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566080 (00566080) at 00566144 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566880 (00566880) at 00566889 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005677a0 (005677a0) at 005679e5 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fcdc
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
// Function calls:
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_CallingScriptEditorX2_2(undefined4 param_1) */

void core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(in_stack_00000004 + 0x38))
  ;
  DAT_0310fcdc = iVar1 + 2;
  if (DAT_0310fcdc <= DAT_0310fd48) {
    DAT_0310fd48 = iVar1 + 1;
  }
  if (DAT_0310fd48 < 0) {
    DAT_0310fd48 = 0;
  }
  if (DAT_0310fd44 < 0) {
    DAT_0310fd44 = 0;
  }
  DAT_0310fd44 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
  DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
  return;
}


// Assembly code:
// 00566910: PUSH EBX
//   Label: core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
// 00566911: PUSH EBP
// 00566912: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00566916: LEA EAX,[EBX + 0x38]
// 00566919: PUSH EAX
// 0056691a: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0056691f: ADD EAX,0x2
// 00566922: MOV [0x0310fcdc],EAX
//   XREF to: 0310fcdc (WRITE)
// 00566927: MOV EAX,[0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 0056692c: MOV EDX,dword ptr [0x0310fcdc]
//   XREF to: 0310fcdc (READ)
// 00566932: ADD ESP,0x4
// 00566935: CMP EAX,EDX
// 00566937: JGE 0x0056697f
//   XREF to: 0056697f (CONDITIONAL_JUMP)
// 00566939: CMP dword ptr [0x0310fd48],0x0
//   Label: LAB_00566939
//   XREF to: 0310fd48 (READ)
// 00566940: JL 0x00566989
//   XREF to: 00566989 (CONDITIONAL_JUMP)
// 00566942: CMP dword ptr [0x0310fd44],0x0
//   Label: LAB_00566942
//   XREF to: 0310fd44 (READ)
// 00566949: JL 0x00566995
//   XREF to: 00566995 (CONDITIONAL_JUMP)
// 0056694b: MOV EAX,[0x0310fd44]
//   Label: LAB_0056694b
//   XREF to: 0310fd44 (READ)
// 00566950: PUSH EAX
// 00566951: MOV EDX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00566957: PUSH EDX
// 00566958: PUSH EBX
// 00566959: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 0056695e: ADD ESP,0xc
// 00566961: PUSH EAX
// 00566962: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00566968: PUSH ECX
// 00566969: PUSH EBX
// 0056696a: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 0056696f: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566974: ADD ESP,0xc
// 00566977: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 0056697c: POP EBP
// 0056697d: POP EBX
// 0056697e: RET
// 0056697f: LEA EAX,[EDX + -0x1]
//   Label: LAB_0056697f
// 00566982: MOV [0x0310fd48],EAX
//   XREF to: 0310fd48 (WRITE)
// 00566987: JMP 0x00566939
//   XREF to: 00566939 (UNCONDITIONAL_JUMP)
// 00566989: PUSH ESI
//   Label: LAB_00566989
// 0056698a: XOR ESI,ESI
// 0056698c: MOV dword ptr [0x0310fd48],ESI
//   XREF to: 0310fd48 (WRITE)
// 00566992: POP ESI
// 00566993: JMP 0x00566942
//   XREF to: 00566942 (UNCONDITIONAL_JUMP)
// 00566995: XOR EBP,EBP
//   Label: LAB_00566995
// 00566997: MOV dword ptr [0x0310fd44],EBP
//   XREF to: 0310fd44 (WRITE)
// 0056699d: JMP 0x0056694b
//   XREF to: 0056694b (UNCONDITIONAL_JUMP)
