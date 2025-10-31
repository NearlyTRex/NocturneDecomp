// Name: core_trigger.cpp_CTrigger_FUN_005e0980
// Address: 005e0980
// Address Range: [[005e0980, 005e0a19]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e0980(CTrigger * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0980(CTrigger *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  BADSPACEBASE *in_ESP;
  CBoundingBox3D CStack_2c;
  
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 3) {
    pCVar1 = core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
    pCVar2 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                       (&this_ptr->base_actor,&CStack_2c);
    if (((((pCVar2->min).x <= pCVar1->x) && ((pCVar2->min).y <= pCVar1->y)) &&
        ((pCVar2->min).z <= pCVar1->z)) &&
       (((pCVar1->x <= (pCVar2->max).x && (pCVar1->y <= (pCVar2->max).y)) &&
        (pCVar1->z <= (pCVar2->max).z)))) {
      return 0;
    }
  }
  return -0x40800000;
}


// Assembly code:
// 005e0980: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e0980
// 005e0981: PUSH ESI
// 005e0982: SUB ESP,0x28
// 005e0985: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 005e0989: CMP dword ptr [ESI + 0x174],0x3
// 005e0990: JZ 0x005e09a4
//   XREF to: 005e09a4 (CONDITIONAL_JUMP)
// 005e0992: MOV dword ptr [ESP + 0x24],0xbf800000
//   Label: LAB_005e0992
//   XREF to: Stack[-0xc] (WRITE)
// 005e099a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (READ)
// 005e099e: ADD ESP,0x28
// 005e09a1: POP ESI
// 005e09a2: POP EBX
// 005e09a3: RET
// 005e09a4: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_005e09a4
//   XREF to: Stack[0xc] (READ)
// 005e09a8: PUSH ECX
// 005e09a9: LEA EDX,[ESP + 0x1c]
//   XREF to: Stack[-0x18] (DATA)
// 005e09ad: PUSH EDX
// 005e09ae: PUSH ESI
// 005e09af: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e09b4: ADD ESP,0xc
// 005e09b7: MOV EDX,ESP
// 005e09b9: PUSH EDX
// 005e09ba: MOV EBX,EAX
// 005e09bc: MOV EAX,dword ptr [ESI + 0x154]
// 005e09c2: PUSH ESI
// 005e09c3: CALL dword ptr [EAX + 0x14]
// 005e09c6: MOV EDX,EAX
// 005e09c8: ADD ESP,0x8
// 005e09cb: FLD float ptr [EDX]
// 005e09cd: FCOMP float ptr [EBX]
// 005e09cf: FNSTSW AX
// 005e09d1: SAHF
// 005e09d2: JA 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e09d4: FLD float ptr [EDX + 0x4]
// 005e09d7: FCOMP float ptr [EBX + 0x4]
// 005e09da: FNSTSW AX
// 005e09dc: SAHF
// 005e09dd: JA 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e09df: FLD float ptr [EDX + 0x8]
// 005e09e2: FCOMP float ptr [EBX + 0x8]
// 005e09e5: FNSTSW AX
// 005e09e7: SAHF
// 005e09e8: JA 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e09ea: FLD float ptr [EDX + 0xc]
// 005e09ed: FCOMP float ptr [EBX]
// 005e09ef: FNSTSW AX
// 005e09f1: SAHF
// 005e09f2: JC 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e09f4: FLD float ptr [EDX + 0x10]
// 005e09f7: FCOMP float ptr [EBX + 0x4]
// 005e09fa: FNSTSW AX
// 005e09fc: SAHF
// 005e09fd: JC 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e09ff: FLD float ptr [EDX + 0x14]
// 005e0a02: FCOMP float ptr [EBX + 0x8]
// 005e0a05: FNSTSW AX
// 005e0a07: SAHF
// 005e0a08: JC 0x005e0992
//   XREF to: 005e0992 (CONDITIONAL_JUMP)
// 005e0a0a: XOR ESI,ESI
// 005e0a0c: MOV dword ptr [ESP + 0x24],ESI
// 005e0a10: MOV EAX,dword ptr [ESP + 0x24]
// 005e0a14: ADD ESP,0x28
// 005e0a17: POP ESI
// 005e0a18: POP EBX
// 005e0a19: RET
