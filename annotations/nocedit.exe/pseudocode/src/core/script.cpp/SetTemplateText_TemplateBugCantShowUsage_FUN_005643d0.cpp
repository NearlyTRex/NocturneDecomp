// Name: core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
// Address: 005643d0
// Address Range: [[005643d0, 0056449a]]
// Convention: unknown
// Signature: undefined core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0()
// Cross-references:
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565efd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Template_bug_can_t_show__00643d50
//   undefined4 s_emplate_bug,_can't_show_usage_00643d51
//   undefined4 s_mplate_bug,_can't_show_usage_00643d52
//   undefined4 s_plate_bug,_can't_show_usage_00643d53
//   TerminatedCString s_s_00643d6f
// Function calls:
//   core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_SetTemplateText_TemplateBugCantShowUsage(undefined4
   param_1, undefined4 param_2) */

void core_script_cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *in_stack_00000004;
  int in_stack_00000008;
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  while( true ) {
    while( true ) {
      if (*(char *)(local_14 + in_stack_00000008) == '\0') {
        in_stack_00000004[iVar3] = '\0';
        return;
      }
      if (*(char *)(local_14 + in_stack_00000008) == '<') break;
      pcVar4 = in_stack_00000004 + iVar3;
      iVar3 = iVar3 + 1;
      *pcVar4 = *(char *)(in_stack_00000008 + local_14);
      local_14 = local_14 + 1;
    }
    iVar2 = core_script_cpp_SCmdParm_setTemplateText_FUN_00560de0();
    if (iVar2 == 0) break;
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_00000004 + iVar3,"<%s>");
    iVar3 = iVar3 + iVar2;
  }
  pcVar4 = "Template bug, can't show usage";
  do {
    cVar1 = *pcVar4;
    *in_stack_00000004 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_00000004[1] = cVar1;
    in_stack_00000004 = in_stack_00000004 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 005643d0: PUSH EBX
//   Label: core_script.cpp_SetTemplateText_TemplateBugCantShowUsage_FUN_005643d0
// 005643d1: PUSH ESI
// 005643d2: PUSH EDI
// 005643d3: PUSH EBP
// 005643d4: SUB ESP,0x32c
// 005643da: MOV EBP,dword ptr [ESP + 0x340]
// 005643e1: MOV EDI,dword ptr [ESP + 0x344]
// 005643e8: XOR EDX,EDX
// 005643ea: XOR ESI,ESI
// 005643ec: MOV dword ptr [ESP + 0x328],EDX
// 005643f3: MOV EAX,dword ptr [ESP + 0x328]
//   Label: LAB_005643f3
// 005643fa: ADD EAX,EDI
// 005643fc: MOV DL,byte ptr [EAX]
// 005643fe: LEA EBX,[ESI + EBP*0x1]
// 00564401: TEST DL,DL
// 00564403: JZ 0x0056448e
//   XREF to: 0056448e (CONDITIONAL_JUMP)
// 00564409: CMP DL,0x3c
// 0056440c: JZ 0x0056442e
//   XREF to: 0056442e (CONDITIONAL_JUMP)
// 0056440e: MOV EAX,dword ptr [ESP + 0x328]
// 00564415: LEA ECX,[EAX + 0x1]
// 00564418: LEA EBX,[EDI + EAX*0x1]
// 0056441b: MOV EAX,ESI
// 0056441d: MOV dword ptr [ESP + 0x328],ECX
// 00564424: LEA EDX,[EAX + EBP*0x1]
// 00564427: MOV AL,byte ptr [EBX]
// 00564429: INC ESI
// 0056442a: MOV byte ptr [EDX],AL
// 0056442c: JMP 0x005643f3
//   XREF to: 005643f3 (UNCONDITIONAL_JUMP)
// 0056442e: LEA EAX,[ESP + 0x328]
//   Label: LAB_0056442e
// 00564435: PUSH EAX
// 00564436: PUSH EDI
// 00564437: LEA EAX,[ESP + 0x8]
// 0056443b: PUSH EAX
// 0056443c: CALL core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0
//   XREF to: 00560de0 (UNCONDITIONAL_CALL)
// 00564441: ADD ESP,0xc
// 00564444: TEST EAX,EAX
// 00564446: JZ 0x00564462
//   XREF to: 00564462 (CONDITIONAL_JUMP)
// 00564448: LEA EAX,[ESP + 0x2c0]
// 0056444f: PUSH EAX
// 00564450: PUSH 0x643d6f
//   XREF to: 00643d6f (DATA)
// 00564455: PUSH EBX
// 00564456: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0056445b: ADD ESP,0xc
// 0056445e: ADD ESI,EAX
// 00564460: JMP 0x005643f3
//   XREF to: 005643f3 (UNCONDITIONAL_JUMP)
// 00564462: MOV ESI,0x643d50
//   Label: LAB_00564462
//   XREF to: 00643d50 (DATA)
// 00564467: MOV EDI,EBP
// 00564469: PUSH EDI
// 0056446a: MOV AL,byte ptr [ESI]
//   Label: LAB_0056446a
//   XREF to: 00643d50 (READ)
//   XREF to: 00643d52 (READ)
// 0056446c: MOV byte ptr [EDI],AL
// 0056446e: CMP AL,0x0
// 00564470: JZ 0x00564482
//   XREF to: 00564482 (CONDITIONAL_JUMP)
// 00564472: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00643d51 (READ)
//   XREF to: 00643d53 (READ)
// 00564475: ADD ESI,0x2
// 00564478: MOV byte ptr [EDI + 0x1],AL
// 0056447b: ADD EDI,0x2
// 0056447e: CMP AL,0x0
// 00564480: JNZ 0x0056446a
//   XREF to: 0056446a (CONDITIONAL_JUMP)
// 00564482: POP EDI
//   Label: LAB_00564482
// 00564483: ADD ESP,0x32c
// 00564489: POP EBP
// 0056448a: POP EDI
// 0056448b: POP ESI
// 0056448c: POP EBX
// 0056448d: RET
// 0056448e: MOV byte ptr [EBX],DL
//   Label: LAB_0056448e
// 00564490: ADD ESP,0x32c
// 00564496: POP EBP
// 00564497: POP EDI
// 00564498: POP ESI
// 00564499: POP EBX
// 0056449a: RET
