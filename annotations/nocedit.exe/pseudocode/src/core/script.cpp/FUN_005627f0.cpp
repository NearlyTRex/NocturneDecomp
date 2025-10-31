// Name: core_script.cpp_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005627f0()
// Cross-references:
//   core_script.cpp_FUN_00562860 (00562860) at 0056286a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563d6d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00643b8f
//   CDemonActorType g_CCharacterClassInfo
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_script.cpp_GetDemonActor_FUN_005594e0
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_005627f0(undefined4 param_1, undefined4 param_2) */

undefined4 core_script_cpp_FUN_005627f0(void)

{
  undefined4 uVar1;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  crt_stdio_c_sscanf_FUN_0060013c((char *)(in_stack_00000004 + 0x25c),"%d",&stack0xfffffffc)
  ;
  if ((-1 < unaff_retaddr) && (unaff_retaddr < *(int *)(in_stack_0000000c + 0xcc))) {
    uVar1 = core_script_cpp_GetDemonActor_FUN_005594e0();
    return uVar1;
  }
  return 0;
}


// Assembly code:
// 005627f0: SUB ESP,0x4
//   Label: core_script.cpp_FUN_005627f0
// 005627f3: MOV EAX,ESP
// 005627f5: PUSH EAX
// 005627f6: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005627fa: PUSH 0x643b8f
//   XREF to: 00643b8f (DATA)
// 005627ff: ADD EAX,0x25c
// 00562804: MOV EDX,0xffffffff
// 00562809: PUSH EAX
// 0056280a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 0056280e: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00562813: ADD ESP,0xc
// 00562816: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 00562819: TEST ECX,ECX
// 0056281b: JL 0x00562829
//   XREF to: 00562829 (CONDITIONAL_JUMP)
// 0056281d: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00562821: CMP ECX,dword ptr [EDX + 0xcc]
// 00562827: JL 0x0056282f
//   XREF to: 0056282f (CONDITIONAL_JUMP)
// 00562829: XOR EAX,EAX
//   Label: LAB_00562829
// 0056282b: ADD ESP,0x4
// 0056282e: RET
// 0056282f: PUSH ESI
//   Label: LAB_0056282f
// 00562830: IMUL EAX,ECX,0x328
// 00562836: PUSH 0x823c14
//   XREF to: 00823c14 (DATA)
// 0056283b: ADD EDX,0xd0
// 00562841: MOV ESI,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 00562847: ADD EAX,EDX
// 00562849: PUSH ESI
// 0056284a: ADD EAX,0x64
// 0056284d: PUSH EAX
// 0056284e: CALL core_script.cpp_GetDemonActor_FUN_005594e0
//   XREF to: 005594e0 (UNCONDITIONAL_CALL)
// 00562853: ADD ESP,0xc
// 00562856: POP ESI
// 00562857: ADD ESP,0x4
// 0056285a: RET
