// Name: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528bed]]
// Convention: __cdecl
// Signature: CMoloch * core_moloch.cpp_CMoloch_ctor_FUN_00528b30(CMoloch * this_ptr)
// Cross-references:
//   core_moloch.cpp_FUN_00528af0 (00528af0) at 00528b0a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_moloch_h_dfm_00639d48
//   TerminatedCString s_molochToDemon_00639d55
//   undefined4 s_olochToDemon_00639d56
//   undefined4 s_lochToDemon_00639d57
//   undefined4 s_ochToDemon_00639d58
//   TerminatedCString s_molochToHuman_00639d63
//   undefined4 s_olochToHuman_00639d64
//   undefined4 s_lochToHuman_00639d65
//   undefined4 s_ochToHuman_00639d66
//   CDemonActor_vtable PTR_core_moloch.cpp_FUN_00528c70_00661944
// Function calls:
//   core_hero.cpp_FUN_004f2340
//   core_morph.cpp_FUN_0052b310
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_ctor_FUN_00528b30(CMoloch *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = core_hero_cpp_FUN_004f2340();
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
            ((CDeformableModelInstance *)(iVar2 + 0x1fbd4));
  iVar2 = core_morph_cpp_FUN_0052b310();
  *(CDemonActor_vtable **)(iVar2 + -0x21e08) = &PTR_core_moloch_cpp_FUN_00528c70_00661944;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0x21e04),"moloch_h.dfm");
  pcVar3 = "molochToDemon";
  pcVar4 = (char *)(iVar2 + -200);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "molochToHuman";
  pcVar4 = (char *)(iVar2 + -100);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(iVar2 + -0xd4) = 1;
  *(undefined4 *)(iVar2 + -0xd0) = 0;
  *(undefined4 *)(iVar2 + -0xcc) = 0;
  return (CMoloch *)(iVar2 + -0x21f5c);
}


// Assembly code:
// 00528b30: PUSH EBX
//   Label: core_moloch.cpp_CMoloch_ctor_FUN_00528b30
// 00528b31: PUSH ESI
// 00528b32: PUSH EDI
// 00528b33: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00528b37: PUSH EBX
// 00528b38: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 00528b3d: ADD ESP,0x4
// 00528b40: ADD EAX,0x1fbd4
// 00528b45: PUSH EAX
// 00528b46: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 00528b4b: ADD ESP,0x4
// 00528b4e: ADD EAX,0x2388
// 00528b53: PUSH EAX
// 00528b54: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 00528b59: ADD ESP,0x4
// 00528b5c: LEA EBX,[EAX + 0xfffde0a4]
// 00528b62: PUSH 0x639d48
//   XREF to: 00639d48 (DATA)
// 00528b67: LEA EAX,[EBX + 0x158]
// 00528b6d: PUSH EAX
// 00528b6e: MOV dword ptr [EBX + 0x154],0x661944
//   XREF to: 00661944 (DATA)
// 00528b78: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00528b7d: ADD ESP,0x8
// 00528b80: MOV ESI,0x639d55
//   XREF to: 00639d55 (DATA)
// 00528b85: LEA EDI,[EBX + 0x21e94]
// 00528b8b: PUSH EDI
// 00528b8c: MOV AL,byte ptr [ESI]
//   Label: LAB_00528b8c
//   XREF to: 00639d55 (READ)
//   XREF to: 00639d57 (READ)
// 00528b8e: MOV byte ptr [EDI],AL
// 00528b90: CMP AL,0x0
// 00528b92: JZ 0x00528ba4
//   XREF to: 00528ba4 (CONDITIONAL_JUMP)
// 00528b94: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00639d56 (READ)
//   XREF to: 00639d58 (READ)
// 00528b97: ADD ESI,0x2
// 00528b9a: MOV byte ptr [EDI + 0x1],AL
// 00528b9d: ADD EDI,0x2
// 00528ba0: CMP AL,0x0
// 00528ba2: JNZ 0x00528b8c
//   XREF to: 00528b8c (CONDITIONAL_JUMP)
// 00528ba4: POP EDI
//   Label: LAB_00528ba4
// 00528ba5: MOV ESI,0x639d63
//   XREF to: 00639d63 (DATA)
// 00528baa: LEA EDI,[EBX + 0x21ef8]
// 00528bb0: PUSH EDI
// 00528bb1: MOV AL,byte ptr [ESI]
//   Label: LAB_00528bb1
//   XREF to: 00639d63 (READ)
//   XREF to: 00639d65 (READ)
// 00528bb3: MOV byte ptr [EDI],AL
// 00528bb5: CMP AL,0x0
// 00528bb7: JZ 0x00528bc9
//   XREF to: 00528bc9 (CONDITIONAL_JUMP)
// 00528bb9: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00639d64 (READ)
//   XREF to: 00639d66 (READ)
// 00528bbc: ADD ESI,0x2
// 00528bbf: MOV byte ptr [EDI + 0x1],AL
// 00528bc2: ADD EDI,0x2
// 00528bc5: CMP AL,0x0
// 00528bc7: JNZ 0x00528bb1
//   XREF to: 00528bb1 (CONDITIONAL_JUMP)
// 00528bc9: POP EDI
//   Label: LAB_00528bc9
// 00528bca: MOV dword ptr [EBX + 0x21e88],0x1
// 00528bd4: MOV dword ptr [EBX + 0x21e8c],0x0
// 00528bde: MOV EAX,EBX
// 00528be0: MOV dword ptr [EBX + 0x21e90],0x0
// 00528bea: POP EDI
// 00528beb: POP ESI
// 00528bec: POP EBX
// 00528bed: RET
