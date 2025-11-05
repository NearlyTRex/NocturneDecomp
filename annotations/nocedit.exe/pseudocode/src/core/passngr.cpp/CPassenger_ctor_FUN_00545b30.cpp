// Name: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// Address: 00545b30
// Address Range: [[00545b30, 00545c01]]
// Convention: __cdecl
// Signature: CPassenger * core_passngr.cpp_CPassenger_ctor_FUN_00545b30(CPassenger * this_ptr)
// Cross-references:
//   core_passngr.cpp_FUN_00545af0 (00545af0) at 00545b0a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wolfbrn_dfm_0063e784
//   undefined4 s_olfbrn.dfm_0063e785
//   undefined4 s_lfbrn.dfm_0063e786
//   undefined4 s_fbrn.dfm_0063e787
//   TerminatedCString s_false_0063e790
//   undefined4 s_alse_0063e791
//   undefined4 s_lse_0063e792
//   undefined4 s_se_0063e793
//   TerminatedCString s_trainman_dfm_0063e796
//   TerminatedCString s_nameMePlease_0063e7a3
//   undefined4 s_ameMePlease_0063e7a4
//   undefined4 s_meMePlease_0063e7a5
//   undefined4 s_eMePlease_0063e7a6
//   CDemonActor_vtable PTR_core_passngr.cpp_FUN_00545d30_00661f64
// Function calls:
//   core_morph.cpp_FUN_0052b310
//   core_npc.cpp_FUN_005447e0
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00545b30(CPassenger *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  core_npc_cpp_FUN_005447e0(&this_ptr->base_npc);
  pcVar3 = "wolfbrn.dfm";
  iVar2 = core_morph_cpp_FUN_0052b310();
  pcVar4 = (char *)(iVar2 + -0xa8);
  *(CDemonActor_vtable **)(iVar2 + -0x1f6c0) = &PTR_core_passngr_cpp_FUN_00545d30_00661f64;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "false";
  pcVar4 = (char *)(iVar2 + -0x10c);
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "nameMePlease";
  *(undefined4 *)(iVar2 + -4) = 0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(iVar2 + -0x1f6bc),"trainman.dfm");
  pcVar4 = (char *)(iVar2 + -0x88);
  *(undefined4 *)(iVar2 + 0xc30) = 0x3f800000;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(undefined1 *)(iVar2 + -0x68) = 0;
  return (CPassenger *)(iVar2 + -0x1f814);
}


// Assembly code:
// 00545b30: PUSH EBX
//   Label: core_passngr.cpp_CPassenger_ctor_FUN_00545b30
// 00545b31: PUSH ESI
// 00545b32: PUSH EDI
// 00545b33: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00545b37: PUSH EBX
// 00545b38: CALL core_npc.cpp_FUN_005447e0
//   XREF to: 005447e0 (UNCONDITIONAL_CALL)
// 00545b3d: ADD ESP,0x4
// 00545b40: ADD EAX,0x1f814
// 00545b45: PUSH EAX
// 00545b46: MOV ESI,0x63e784
//   XREF to: 0063e784 (DATA)
// 00545b4b: CALL core_morph.cpp_FUN_0052b310
//   XREF to: 0052b310 (UNCONDITIONAL_CALL)
// 00545b50: LEA EBX,[EAX + 0xfffe07ec]
// 00545b56: ADD ESP,0x4
// 00545b59: LEA EDI,[EBX + 0x1f76c]
// 00545b5f: MOV dword ptr [EBX + 0x154],0x661f64
//   XREF to: 00661f64 (DATA)
// 00545b69: PUSH EDI
// 00545b6a: MOV AL,byte ptr [ESI]
//   Label: LAB_00545b6a
//   XREF to: 0063e784 (READ)
//   XREF to: 0063e786 (READ)
// 00545b6c: MOV byte ptr [EDI],AL
// 00545b6e: CMP AL,0x0
// 00545b70: JZ 0x00545b82
//   XREF to: 00545b82 (CONDITIONAL_JUMP)
// 00545b72: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063e785 (READ)
//   XREF to: 0063e787 (READ)
// 00545b75: ADD ESI,0x2
// 00545b78: MOV byte ptr [EDI + 0x1],AL
// 00545b7b: ADD EDI,0x2
// 00545b7e: CMP AL,0x0
// 00545b80: JNZ 0x00545b6a
//   XREF to: 00545b6a (CONDITIONAL_JUMP)
// 00545b82: POP EDI
//   Label: LAB_00545b82
// 00545b83: MOV ESI,0x63e790
//   XREF to: 0063e790 (DATA)
// 00545b88: LEA EDI,[EBX + 0x1f708]
// 00545b8e: PUSH EDI
// 00545b8f: MOV AL,byte ptr [ESI]
//   Label: LAB_00545b8f
//   XREF to: 0063e790 (READ)
//   XREF to: 0063e792 (READ)
// 00545b91: MOV byte ptr [EDI],AL
// 00545b93: CMP AL,0x0
// 00545b95: JZ 0x00545ba7
//   XREF to: 00545ba7 (CONDITIONAL_JUMP)
// 00545b97: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063e791 (READ)
//   XREF to: 0063e793 (READ)
// 00545b9a: ADD ESI,0x2
// 00545b9d: MOV byte ptr [EDI + 0x1],AL
// 00545ba0: ADD EDI,0x2
// 00545ba3: CMP AL,0x0
// 00545ba5: JNZ 0x00545b8f
//   XREF to: 00545b8f (CONDITIONAL_JUMP)
// 00545ba7: POP EDI
//   Label: LAB_00545ba7
// 00545ba8: PUSH 0x63e796
//   XREF to: 0063e796 (DATA)
// 00545bad: LEA EAX,[EBX + 0x158]
// 00545bb3: PUSH EAX
// 00545bb4: MOV ESI,0x63e7a3
//   XREF to: 0063e7a3 (DATA)
// 00545bb9: MOV dword ptr [EBX + 0x1f810],0x0
// 00545bc3: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00545bc8: ADD ESP,0x8
// 00545bcb: LEA EDI,[EBX + 0x1f78c]
// 00545bd1: MOV dword ptr [EBX + 0x20444],0x3f800000
// 00545bdb: PUSH EDI
// 00545bdc: MOV AL,byte ptr [ESI]
//   Label: LAB_00545bdc
//   XREF to: 0063e7a3 (READ)
//   XREF to: 0063e7a5 (READ)
// 00545bde: MOV byte ptr [EDI],AL
// 00545be0: CMP AL,0x0
// 00545be2: JZ 0x00545bf4
//   XREF to: 00545bf4 (CONDITIONAL_JUMP)
// 00545be4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063e7a4 (READ)
//   XREF to: 0063e7a6 (READ)
// 00545be7: ADD ESI,0x2
// 00545bea: MOV byte ptr [EDI + 0x1],AL
// 00545bed: ADD EDI,0x2
// 00545bf0: CMP AL,0x0
// 00545bf2: JNZ 0x00545bdc
//   XREF to: 00545bdc (CONDITIONAL_JUMP)
// 00545bf4: POP EDI
//   Label: LAB_00545bf4
// 00545bf5: MOV EAX,EBX
// 00545bf7: MOV byte ptr [EBX + 0x1f7ac],0x0
// 00545bfe: POP EDI
// 00545bff: POP ESI
// 00545c00: POP EBX
// 00545c01: RET
