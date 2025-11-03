// Name: core_actor.cpp_CActorPropertyList_FUN_0040e3e0
// Address: 0040e3e0
// Address Range: [[0040e3e0, 0040e458]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_FUN_0040e3e0(CActorPropertyList * this_ptr)
// Cross-references:
//   core_bat.cpp_CBat_FUN_00414dc0 (00414dc0) at 00414df0 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0

#include "nocturne.h"

int __cdecl core_actor_cpp_CActorPropertyList_FUN_0040e3e0(CActorPropertyList *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *in_stack_00000008;
  void *in_stack_0000000c;
  char *in_stack_00000014;
  char *in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                    (this_ptr,10,in_stack_00000008,in_stack_0000000c,(void *)0x0);
  pcVar3 = (char *)(iVar2 + 0x70);
  do {
    cVar1 = *in_stack_00000014;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000014[1];
    in_stack_00000014 = in_stack_00000014 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)(iVar2 + 0x84);
  do {
    cVar1 = *in_stack_00000018;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000018[1];
    in_stack_00000018 = in_stack_00000018 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined4 *)(iVar2 + 0x5c) = in_stack_0000001c;
  return iVar2;
}


// Assembly code:
// 0040e3e0: PUSH EBX
//   Label: core_actor.cpp_CActorPropertyList_FUN_0040e3e0
// 0040e3e1: PUSH ESI
// 0040e3e2: PUSH EDI
// 0040e3e3: PUSH 0x0
// 0040e3e5: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040e3e9: PUSH EDX
// 0040e3ea: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040e3ee: PUSH ECX
// 0040e3ef: PUSH 0xa
// 0040e3f1: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0040e3f5: PUSH EBX
// 0040e3f6: CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
//   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)
// 0040e3fb: ADD ESP,0x14
// 0040e3fe: MOV EDX,EAX
// 0040e400: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0040e404: LEA EDI,[EAX + 0x70]
// 0040e407: PUSH EDI
// 0040e408: MOV AL,byte ptr [ESI]
//   Label: LAB_0040e408
// 0040e40a: MOV byte ptr [EDI],AL
// 0040e40c: CMP AL,0x0
// 0040e40e: JZ 0x0040e420
//   XREF to: 0040e420 (CONDITIONAL_JUMP)
// 0040e410: MOV AL,byte ptr [ESI + 0x1]
// 0040e413: ADD ESI,0x2
// 0040e416: MOV byte ptr [EDI + 0x1],AL
// 0040e419: ADD EDI,0x2
// 0040e41c: CMP AL,0x0
// 0040e41e: JNZ 0x0040e408
//   XREF to: 0040e408 (CONDITIONAL_JUMP)
// 0040e420: POP EDI
//   Label: LAB_0040e420
// 0040e421: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0040e425: LEA EDI,[EDX + 0x84]
// 0040e42b: PUSH EDI
// 0040e42c: MOV AL,byte ptr [ESI]
//   Label: LAB_0040e42c
// 0040e42e: MOV byte ptr [EDI],AL
// 0040e430: CMP AL,0x0
// 0040e432: JZ 0x0040e444
//   XREF to: 0040e444 (CONDITIONAL_JUMP)
// 0040e434: MOV AL,byte ptr [ESI + 0x1]
// 0040e437: ADD ESI,0x2
// 0040e43a: MOV byte ptr [EDI + 0x1],AL
// 0040e43d: ADD EDI,0x2
// 0040e440: CMP AL,0x0
// 0040e442: JNZ 0x0040e42c
//   XREF to: 0040e42c (CONDITIONAL_JUMP)
// 0040e444: POP EDI
//   Label: LAB_0040e444
// 0040e445: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 0040e449: MOV dword ptr [EDX + 0x58],0x1
// 0040e450: MOV EAX,EDX
// 0040e452: MOV dword ptr [EDX + 0x5c],EDI
// 0040e455: POP EDI
// 0040e456: POP ESI
// 0040e457: POP EBX
// 0040e458: RET
