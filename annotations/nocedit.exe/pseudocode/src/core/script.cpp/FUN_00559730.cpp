// Name: core_script.cpp_FUN_00559730
// Address: 00559730
// Address Range: [[00559730, 005597eb]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559730()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c881 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563d8c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_n_00641698
//   TerminatedCString s_Character_s_model_s_does_006416a4
//   undefined1 DAT_0310eca0
// Function calls:
//   core_script.cpp_FUN_00567d30
//   core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00559730(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_script_cpp_FUN_00559730(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  
  puVar1 = in_stack_0000000c;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != in_stack_0000000c + 0x1e);
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  while( true ) {
    crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000008," %[^ \t),]%n",&uStack_70,&stack0xfffffff4);
    if (unaff_ESI < 1) {
      return 1;
    }
    uStack_70 = 0;
    in_stack_00000008 = in_stack_00000008 + unaff_ESI;
    iVar3 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
    puStack_6c = (undefined1 *)&uStack_70;
    if (iVar3 < 0) break;
    in_stack_0000000c[iVar3] = 1;
  }
  uStack_70 = uVar2;
  puStack_6c = (undefined1 *)core_script_cpp_FUN_00567d30();
  uStack_70 = in_stack_00000014;
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Character %s model %s does not have a part '%s'");
  return 0;
}


// Assembly code:
// 00559730: PUSH EBX
//   Label: core_script.cpp_FUN_00559730
// 00559731: PUSH ESI
// 00559732: PUSH EDI
// 00559733: SUB ESP,0x68
// 00559736: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x8] (READ)
// 0055973a: MOV EDI,dword ptr [ESP + 0x80]
//   XREF to: Stack[0xc] (READ)
// 00559741: MOV EAX,EDI
// 00559743: LEA ESI,[EDI + 0x78]
// 00559746: MOV dword ptr [EAX],0x0
//   Label: LAB_00559746
// 0055974c: ADD EAX,0x4
// 0055974f: CMP EAX,ESI
// 00559751: JNZ 0x00559746
//   XREF to: 00559746 (CONDITIONAL_JUMP)
// 00559753: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x4] (READ)
// 00559757: ADD EAX,0x158
// 0055975c: PUSH EAX
// 0055975d: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00559762: ADD ESP,0x4
// 00559765: MOV ESI,EAX
// 00559767: LEA EAX,[ESP + 0x64]
//   Label: LAB_00559767
//   XREF to: Stack[-0x10] (DATA)
// 0055976b: PUSH EAX
// 0055976c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 00559770: PUSH EAX
// 00559771: PUSH 0x641698
//   XREF to: 00641698 (DATA)
// 00559776: MOV EDX,0xffffffff
// 0055977b: PUSH EBX
// 0055977c: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 00559780: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00559785: ADD ESP,0x10
// 00559788: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x10] (READ)
// 0055978c: CMP ECX,0x1
// 0055978f: JGE 0x0055979d
//   XREF to: 0055979d (CONDITIONAL_JUMP)
// 00559791: MOV EAX,0x1
// 00559796: ADD ESP,0x68
// 00559799: POP EDI
// 0055979a: POP ESI
// 0055979b: POP EBX
// 0055979c: RET
// 0055979d: PUSH 0x0
//   Label: LAB_0055979d
// 0055979f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 005597a3: PUSH EAX
// 005597a4: PUSH ESI
// 005597a5: ADD EBX,ECX
// 005597a7: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005597ac: ADD ESP,0xc
// 005597af: TEST EAX,EAX
// 005597b1: JL 0x005597bc
//   XREF to: 005597bc (CONDITIONAL_JUMP)
// 005597b3: MOV dword ptr [EDI + EAX*0x4],0x1
// 005597ba: JMP 0x00559767
//   XREF to: 00559767 (UNCONDITIONAL_JUMP)
// 005597bc: MOV EAX,ESP
//   Label: LAB_005597bc
// 005597be: PUSH EAX
// 005597bf: PUSH ESI
// 005597c0: CALL core_script.cpp_FUN_00567d30
//   XREF to: 00567d30 (UNCONDITIONAL_CALL)
// 005597c5: ADD ESP,0x4
// 005597c8: PUSH EAX
// 005597c9: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x4] (READ)
// 005597d0: PUSH EAX
// 005597d1: PUSH 0x6416a4
//   XREF to: 006416a4 (DATA)
// 005597d6: PUSH 0x310eca0
//   XREF to: 0310eca0 (DATA)
// 005597db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005597e0: ADD ESP,0x14
// 005597e3: XOR EAX,EAX
// 005597e5: ADD ESP,0x68
// 005597e8: POP EDI
// 005597e9: POP ESI
// 005597ea: POP EBX
// 005597eb: RET
