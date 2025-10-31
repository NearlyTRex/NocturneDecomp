// Name: core_event.cpp_FUN_004aa530
// Address: 004aa530
// Address Range: [[004aa530, 004aa643]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa530()
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004af2a7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_n_006244f4
//   TerminatedCString s_n_00624506
//   TerminatedCString s_Error_parsing_vector_loc_00624514
//   undefined4 DAT_0065d95c
//   CDemonActorType g_CDemonActorClassInfo
//   undefined4 g_CDemonActorClassInfo.name_hash
//   undefined1 DAT_02d0a460
// Function calls:
//   core_event.cpp_FUN_004aa400
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004aa530(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_event_cpp_FUN_004aa530(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  crt_stdio_c_sscanf_FUN_0060013c
            ((char *)(in_stack_00000004 + *in_stack_00000008)," { %f, %f, %f }%n",in_stack_0000000c,
             in_stack_0000000c + 1,in_stack_0000000c + 2,&local_14);
  if (6 < unaff_EBP) {
    *in_stack_00000008 = *in_stack_00000008 + unaff_EBP;
    return 1;
  }
  crt_stdio_c_sscanf_FUN_0060013c
            ((char *)((int)in_stack_00000008 + *in_stack_00000008)," %[^ ,(){}]%n",&stack0xffffff8c,
             &stack0xfffffff0);
  if (unaff_EDI < 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02d0a460,"Error parsing vector location");
    return 0xffffffff;
  }
  iVar1 = core_event_cpp_FUN_004aa400();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  *in_stack_00000008 = *in_stack_00000008 + unaff_ESI;
  if (iVar1 != DAT_0065d95c) {
    if (in_stack_0000000c != (undefined4 *)(iVar1 + 0x20)) {
      *in_stack_0000000c = *(undefined4 *)(iVar1 + 0x20);
      in_stack_0000000c[1] = *(undefined4 *)(iVar1 + 0x24);
      in_stack_0000000c[2] = *(undefined4 *)(iVar1 + 0x28);
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 004aa530: PUSH EBX
//   Label: core_event.cpp_FUN_004aa530
// 004aa531: PUSH ESI
// 004aa532: PUSH EDI
// 004aa533: PUSH EBP
// 004aa534: SUB ESP,0x68
// 004aa537: MOV ESI,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 004aa53e: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0xc] (READ)
// 004aa545: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x14] (DATA)
// 004aa549: PUSH EAX
// 004aa54a: LEA EAX,[EBX + 0x8]
// 004aa54d: PUSH EAX
// 004aa54e: LEA EAX,[EBX + 0x4]
// 004aa551: MOV EDX,0xffffffff
// 004aa556: PUSH EAX
// 004aa557: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004aa55b: PUSH EBX
// 004aa55c: MOV ECX,dword ptr [ESI]
// 004aa55e: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[0x4] (READ)
// 004aa565: PUSH 0x6244f4
//   XREF to: 006244f4 (DATA)
// 004aa56a: ADD EAX,ECX
// 004aa56c: PUSH EAX
// 004aa56d: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004aa572: ADD ESP,0x18
// 004aa575: MOV EDI,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 004aa579: CMP EDI,0x7
// 004aa57c: JL 0x004aa593
//   XREF to: 004aa593 (CONDITIONAL_JUMP)
// 004aa57e: MOV EAX,EDI
// 004aa580: MOV EDI,dword ptr [ESI]
// 004aa582: ADD EDI,EAX
// 004aa584: MOV EAX,0x1
// 004aa589: MOV dword ptr [ESI],EDI
// 004aa58b: ADD ESP,0x68
// 004aa58e: POP EBP
// 004aa58f: POP EDI
// 004aa590: POP ESI
// 004aa591: POP EBX
// 004aa592: RET
// 004aa593: LEA EAX,[ESP + 0x64]
//   Label: LAB_004aa593
//   XREF to: Stack[-0x14] (DATA)
// 004aa597: PUSH EAX
// 004aa598: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x78] (DATA)
// 004aa59c: PUSH EAX
// 004aa59d: MOV EBP,dword ptr [ESI]
// 004aa59f: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x4] (READ)
// 004aa5a6: PUSH 0x624506
//   XREF to: 00624506 (DATA)
// 004aa5ab: ADD EAX,EBP
// 004aa5ad: PUSH EAX
// 004aa5ae: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004aa5b3: ADD ESP,0x10
// 004aa5b6: CMP dword ptr [ESP + 0x64],0x0
//   XREF to: Stack[-0x14] (READ)
// 004aa5bb: JL 0x004aa60e
//   XREF to: 004aa60e (CONDITIONAL_JUMP)
// 004aa5bd: PUSH 0x821ff8
//   XREF to: 00821ff8 (DATA)
// 004aa5c2: MOV EDX,dword ptr [0x00822030]
//   XREF to: 00822030 (READ)
// 004aa5c8: PUSH EDX
// 004aa5c9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 004aa5cd: PUSH EAX
// 004aa5ce: CALL core_event.cpp_FUN_004aa400
//   XREF to: 004aa400 (UNCONDITIONAL_CALL)
// 004aa5d3: MOV EDX,EAX
// 004aa5d5: ADD ESP,0xc
// 004aa5d8: TEST EAX,EAX
// 004aa5da: JZ 0x004aa62d
//   XREF to: 004aa62d (CONDITIONAL_JUMP)
// 004aa5dc: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x14] (READ)
// 004aa5e0: ADD dword ptr [ESI],EAX
// 004aa5e2: CMP EDX,dword ptr [0x0065d95c]
//   XREF to: 0065d95c (READ)
// 004aa5e8: JZ 0x004aa63a
//   XREF to: 004aa63a (CONDITIONAL_JUMP)
// 004aa5ea: ADD EDX,0x20
// 004aa5ed: CMP EBX,EDX
// 004aa5ef: JZ 0x004aa601
//   XREF to: 004aa601 (CONDITIONAL_JUMP)
// 004aa5f1: MOV EAX,dword ptr [EDX]
// 004aa5f3: MOV dword ptr [EBX],EAX
// 004aa5f5: MOV EAX,dword ptr [EDX + 0x4]
// 004aa5f8: MOV dword ptr [EBX + 0x4],EAX
// 004aa5fb: MOV EAX,dword ptr [EDX + 0x8]
// 004aa5fe: MOV dword ptr [EBX + 0x8],EAX
// 004aa601: MOV EAX,0x1
//   Label: LAB_004aa601
// 004aa606: ADD ESP,0x68
// 004aa609: POP EBP
// 004aa60a: POP EDI
// 004aa60b: POP ESI
// 004aa60c: POP EBX
// 004aa60d: RET
// 004aa60e: PUSH 0x624514
//   Label: LAB_004aa60e
//   XREF to: 00624514 (DATA)
// 004aa613: PUSH 0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004aa618: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004aa61d: MOV EAX,0xffffffff
// 004aa622: ADD ESP,0x8
// 004aa625: ADD ESP,0x68
// 004aa628: POP EBP
// 004aa629: POP EDI
// 004aa62a: POP ESI
// 004aa62b: POP EBX
// 004aa62c: RET
// 004aa62d: MOV EAX,0xffffffff
//   Label: LAB_004aa62d
// 004aa632: ADD ESP,0x68
// 004aa635: POP EBP
// 004aa636: POP EDI
// 004aa637: POP ESI
// 004aa638: POP EBX
// 004aa639: RET
// 004aa63a: XOR EAX,EAX
//   Label: LAB_004aa63a
// 004aa63c: ADD ESP,0x68
// 004aa63f: POP EBP
// 004aa640: POP EDI
// 004aa641: POP ESI
// 004aa642: POP EBX
// 004aa643: RET
