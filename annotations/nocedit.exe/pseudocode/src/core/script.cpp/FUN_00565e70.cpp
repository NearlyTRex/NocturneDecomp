// Name: core_script.cpp_FUN_00565e70
// Address: 00565e70
// Address Range: [[00565e70, 00565f60]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565e70()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005656af [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Not_enough_context_to_sh_00643ebb
//   undefined4 s_ot_enough_context_to_show_usage._00643ebc
//   undefined4 s_enough_context_to_show_usage._(T_00643ebe
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
//   undefined1 DAT_0310fdc0
//   undefined1 DAT_0310fdc1
//   undefined1 DAT_0310fdc2
//   undefined1 DAT_0310fdc3
// Function calls:
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_FUN_00561c70
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00565e70(undefined4 pScript, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00565e70(void)

{
  CBitFont *font_ptr;
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  if (-1 < in_stack_0000000c) {
    font_ptr = (CBitFont *)(in_stack_00000004 + 0x38);
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
    if (in_stack_0000000c < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,in_stack_0000000c);
      iVar2 = core_script_cpp_FUN_00561c70();
      if (iVar2 < 1) {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)font_ptr,in_stack_0000000c)
        ;
        iVar2 = core_script_cpp_SCmdParse_bestParse_FUN_00561db0();
        if (iVar2 < 1) {
          pcVar3 = "Not enough context to show usage.  (Try putting the cursor over the first parm...)";
          pcVar4 = &DAT_0310fdc0;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          return;
        }
      }
      core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0();
      return;
    }
  }
  return;
}


// Assembly code:
// 00565e70: PUSH EBX
//   Label: core_script.cpp_FUN_00565e70
// 00565e71: PUSH ESI
// 00565e72: PUSH EDI
// 00565e73: SUB ESP,0x2a2c
// 00565e79: MOV EBX,dword ptr [ESP + 0x2a3c]
//   XREF to: Stack[0x4] (READ)
// 00565e80: MOV EDI,dword ptr [ESP + 0x2a44]
//   XREF to: Stack[0xc] (READ)
// 00565e87: TEST EDI,EDI
// 00565e89: JGE 0x00565e95
//   XREF to: 00565e95 (CONDITIONAL_JUMP)
// 00565e8b: ADD ESP,0x2a2c
//   Label: LAB_00565e8b
// 00565e91: POP EDI
// 00565e92: POP ESI
// 00565e93: POP EBX
// 00565e94: RET
// 00565e95: LEA ESI,[EBX + 0x38]
//   Label: LAB_00565e95
// 00565e98: PUSH ESI
// 00565e99: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565e9e: ADD ESP,0x4
// 00565ea1: CMP EDI,EAX
// 00565ea3: JGE 0x00565e8b
//   XREF to: 00565e8b (CONDITIONAL_JUMP)
// 00565ea5: MOV EDX,dword ptr [ESP + 0x2a40]
//   XREF to: Stack[0x8] (READ)
// 00565eac: PUSH EDX
// 00565ead: PUSH EDI
// 00565eae: PUSH EBX
// 00565eaf: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00565eb4: ADD ESP,0xc
// 00565eb7: MOV EBX,EAX
// 00565eb9: MOV EAX,ESP
// 00565ebb: PUSH EAX
// 00565ebc: LEA EAX,[ESP + 0x212c]
//   XREF to: Stack[-0x910] (DATA)
// 00565ec3: PUSH EAX
// 00565ec4: PUSH EBX
// 00565ec5: LEA EAX,[ESP + 0x245c]
//   XREF to: Stack[-0x5e8] (DATA)
// 00565ecc: PUSH EAX
// 00565ecd: LEA EAX,[ESP + 0x2654]
//   XREF to: Stack[-0x3f4] (DATA)
// 00565ed4: PUSH EAX
// 00565ed5: LEA EAX,[ESP + 0x284c]
//   XREF to: Stack[-0x200] (DATA)
// 00565edc: PUSH EAX
// 00565edd: PUSH EDI
// 00565ede: PUSH ESI
// 00565edf: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00565ee4: ADD ESP,0x8
// 00565ee7: PUSH EAX
// 00565ee8: CALL core_script.cpp_FUN_00561c70
//   XREF to: 00561c70 (UNCONDITIONAL_CALL)
// 00565eed: ADD ESP,0x1c
// 00565ef0: TEST EAX,EAX
// 00565ef2: JLE 0x00565f0f
//   XREF to: 00565f0f (CONDITIONAL_JUMP)
// 00565ef4: MOV ECX,dword ptr [ESP]
//   Label: LAB_00565ef4
//   XREF to: Stack[-0x2a38] (DATA)
// 00565ef7: PUSH ECX
// 00565ef8: PUSH 0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 00565efd: CALL core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
//   XREF to: 005643d0 (UNCONDITIONAL_CALL)
// 00565f02: ADD ESP,0x8
// 00565f05: ADD ESP,0x2a2c
// 00565f0b: POP EDI
// 00565f0c: POP ESI
// 00565f0d: POP EBX
// 00565f0e: RET
// 00565f0f: PUSH 0x78
//   Label: LAB_00565f0f
// 00565f11: PUSH 0x680e28
//   XREF to: 00680e28 (DATA)
// 00565f16: PUSH EBX
// 00565f17: PUSH EDI
// 00565f18: PUSH ESI
// 00565f19: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00565f1e: ADD ESP,0x8
// 00565f21: PUSH EAX
// 00565f22: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2a38] (DATA)
// 00565f26: PUSH EAX
// 00565f27: CALL core_script.cpp_SCmdParse_bestParse_FUN_00561db0
//   XREF to: 00561db0 (UNCONDITIONAL_CALL)
// 00565f2c: ADD ESP,0x14
// 00565f2f: TEST EAX,EAX
// 00565f31: JG 0x00565ef4
//   XREF to: 00565ef4 (CONDITIONAL_JUMP)
// 00565f33: MOV ESI,0x643ebb
//   XREF to: 00643ebb (DATA)
// 00565f38: MOV EDI,0x310fdc0
//   XREF to: 0310fdc0 (DATA)
// 00565f3d: PUSH EDI
//   XREF to: 0310fdc0 (DATA)
// 00565f3e: MOV AL,byte ptr [ESI]
//   Label: LAB_00565f3e
//   XREF to: 00643ebb (READ)
//   XREF to: 00643ebd (READ)
// 00565f40: MOV byte ptr [EDI],AL
//   XREF to: 0310fdc0 (WRITE)
//   XREF to: 0310fdc2 (WRITE)
// 00565f42: CMP AL,0x0
// 00565f44: JZ 0x00565f56
//   XREF to: 00565f56 (CONDITIONAL_JUMP)
// 00565f46: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643ebc (READ)
//   XREF to: 00643ebe (READ)
// 00565f49: ADD ESI,0x2
// 00565f4c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0310fdc1 (WRITE)
//   XREF to: 0310fdc3 (WRITE)
// 00565f4f: ADD EDI,0x2
// 00565f52: CMP AL,0x0
// 00565f54: JNZ 0x00565f3e
//   XREF to: 00565f3e (CONDITIONAL_JUMP)
// 00565f56: POP EDI
//   Label: LAB_00565f56
// 00565f57: ADD ESP,0x2a2c
// 00565f5d: POP EDI
// 00565f5e: POP ESI
// 00565f5f: POP EBX
// 00565f60: RET
