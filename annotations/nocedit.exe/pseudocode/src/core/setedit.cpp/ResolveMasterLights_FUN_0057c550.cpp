// Name: core_setedit.cpp_ResolveMasterLights_FUN_0057c550
// Address: 0057c550
// Address Range: [[0057c550, 0057c5cc]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_ResolveMasterLights_FUN_0057c550()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cc12 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00647b0d
//   TerminatedCString s_Can_t_resolve_master_lig_00647b21
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonLight*[96] g_MasterLightList
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_ResolveMasterLights(undefined4 param_1, undefined4
   param_2) */

int core_setedit_cpp_ResolveMasterLights_FUN_0057c550(void)

{
  int iVar1;
  int iVar2;
  char *str2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x19a2c)) {
    str2 = (char *)(in_stack_00000004 + 0x19a34);
    do {
      iVar1 = crt_string_c_strcmp_FUN_005fef20
                        ((g_MasterLightList[in_stack_00000008]->base).camera_name,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x1898;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x19a2c));
  }
  g_CurrentFilename = "..\\core\\setedit.cpp";
  g_CurrentLineNumber = 0xaa8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't resolve master light number");
  return -1;
}


// Assembly code:
// 0057c550: PUSH EBX
//   Label: core_setedit.cpp_ResolveMasterLights_FUN_0057c550
// 0057c551: PUSH ESI
// 0057c552: PUSH EDI
// 0057c553: PUSH EBP
// 0057c554: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057c558: MOV EDX,dword ptr [EDI + 0x19a2c]
// 0057c55e: XOR EBX,EBX
// 0057c560: TEST EDX,EDX
// 0057c562: JLE 0x0057c599
//   XREF to: 0057c599 (CONDITIONAL_JUMP)
// 0057c564: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057c568: LEA ESI,[EDI + 0x19a34]
// 0057c56e: SHL EBP,0x2
// 0057c571: MOV EAX,dword ptr [EBP + 0x3276db0]
//   Label: LAB_0057c571
//   XREF to: 03276db0 (DATA)
// 0057c577: PUSH ESI
// 0057c578: ADD EAX,0x40
// 0057c57b: PUSH EAX
// 0057c57c: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0057c581: ADD ESP,0x8
// 0057c584: TEST EAX,EAX
// 0057c586: JZ 0x0057c5c6
//   XREF to: 0057c5c6 (CONDITIONAL_JUMP)
// 0057c588: INC EBX
// 0057c589: MOV ECX,dword ptr [EDI + 0x19a2c]
// 0057c58f: ADD ESI,0x1898
// 0057c595: CMP EBX,ECX
// 0057c597: JL 0x0057c571
//   XREF to: 0057c571 (CONDITIONAL_JUMP)
// 0057c599: MOV EBX,0x647b0d
//   Label: LAB_0057c599
//   XREF to: 00647b0d (PARAM)
// 0057c59e: MOV ESI,0xaa8
// 0057c5a3: PUSH 0x647b21
//   XREF to: 00647b21 (DATA)
// 0057c5a8: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0057c5ae: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057c5b4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057c5b9: MOV EAX,0xffffffff
// 0057c5be: ADD ESP,0x4
// 0057c5c1: POP EBP
// 0057c5c2: POP EDI
// 0057c5c3: POP ESI
// 0057c5c4: POP EBX
// 0057c5c5: RET
// 0057c5c6: MOV EAX,EBX
//   Label: LAB_0057c5c6
// 0057c5c8: POP EBP
// 0057c5c9: POP EDI
// 0057c5ca: POP ESI
// 0057c5cb: POP EBX
// 0057c5cc: RET
