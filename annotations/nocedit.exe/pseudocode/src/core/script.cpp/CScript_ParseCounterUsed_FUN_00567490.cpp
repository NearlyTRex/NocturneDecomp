// Name: core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
// Address: 00567490
// Address Range: [[00567490, 00567503]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_ParseCounterUsed_FUN_00567490()
// Cross-references:
//   core_script.cpp_FUN_005671a0 (005671a0) at 00567259 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cmp_counterUsed_relOp_co_0064546c
//   TerminatedCString s_exists_actor_00645495
//   void* PTR_s_cmp_counterUsed_relOp_co_0064546c_00681008 = 0064546c
//   void* PTR_s_exists_actor_00645495_0068100c = 00645495
// Function calls:
//   core_script.cpp_FUN_00564090
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_ParseCounterUsed(CScript* param_1, undefined4
   param_2, undefined4 param_3) */

void core_script_cpp_CScript_ParseCounterUsed_FUN_00567490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
    if (iVar1 == 3) {
      if (0x77 < iVar3) {
        return;
      }
      goto LAB_005674e5;
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x54);
  if (0x77 < iVar3) {
    return;
  }
LAB_005674e5:
  core_script_cpp_FUN_00564090();
  return;
}


// Assembly code:
// 00567490: PUSH EBX
//   Label: core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
// 00567491: PUSH ESI
// 00567492: PUSH EDI
// 00567493: SUB ESP,0x2128
// 00567499: MOV EDI,dword ptr [ESP + 0x213c]
//   XREF to: Stack[0x8] (READ)
// 005674a0: XOR EBX,EBX
// 005674a2: XOR ESI,ESI
// 005674a4: MOV EDX,dword ptr [EBX + 0x681008]
//   Label: LAB_005674a4
//   XREF to: 0064546c (PARAM)
//   XREF to: 00645495 (PARAM)
//   XREF to: 00681008 (READ)
//   XREF to: 0068100c (READ)
// 005674aa: PUSH EDX
//   XREF to: 0064546c (DATA)
//   XREF to: 00645495 (DATA)
// 005674ab: PUSH EDI
// 005674ac: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2134] (DATA)
// 005674b0: PUSH EAX
// 005674b1: CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
// 005674b6: ADD ESP,0xc
// 005674b9: CMP EAX,0x3
// 005674bc: JNZ 0x005674cd
//   XREF to: 005674cd (CONDITIONAL_JUMP)
// 005674be: CMP ESI,0x78
// 005674c1: JL 0x005674e5
//   XREF to: 005674e5 (CONDITIONAL_JUMP)
// 005674c3: ADD ESP,0x2128
// 005674c9: POP EDI
// 005674ca: POP ESI
// 005674cb: POP EBX
// 005674cc: RET
// 005674cd: ADD EBX,0x4
//   Label: LAB_005674cd
// 005674d0: INC ESI
// 005674d1: CMP EBX,0x54
// 005674d4: JL 0x005674a4
//   XREF to: 005674a4 (CONDITIONAL_JUMP)
// 005674d6: CMP ESI,0x78
// 005674d9: JL 0x005674e5
//   XREF to: 005674e5 (CONDITIONAL_JUMP)
// 005674db: ADD ESP,0x2128
// 005674e1: POP EDI
// 005674e2: POP ESI
// 005674e3: POP EBX
// 005674e4: RET
// 005674e5: MOV ECX,dword ptr [ESP + 0x2140]
//   Label: LAB_005674e5
//   XREF to: Stack[0xc] (READ)
// 005674ec: PUSH ECX
// 005674ed: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2134] (DATA)
// 005674f1: PUSH EAX
// 005674f2: CALL core_script.cpp_FUN_00564090
//   XREF to: 00564090 (UNCONDITIONAL_CALL)
// 005674f7: ADD ESP,0x8
// 005674fa: ADD ESP,0x2128
// 00567500: POP EDI
// 00567501: POP ESI
// 00567502: POP EBX
// 00567503: RET
