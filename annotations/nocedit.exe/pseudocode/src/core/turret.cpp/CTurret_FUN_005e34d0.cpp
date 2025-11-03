// Name: core_turret.cpp_CTurret_FUN_005e34d0
// Address: 005e34d0
// Address Range: [[005e34d0, 005e3530]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e34d0(CTurret * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e34d0(CTurret *this_ptr)

{
  COrientation *pCVar1;
  float *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*(int *)(in_stack_0000000c + 0x10) == 0) {
    pCVar1 = &(this_ptr->base_weapon).base_actor.orient;
    if (pCVar1 != (COrientation *)in_stack_00000008) {
      pCVar1->pitch = *in_stack_00000008;
      (this_ptr->base_weapon).base_actor.orient.bank = in_stack_00000008[1];
      (this_ptr->base_weapon).base_actor.orient.heading = in_stack_00000008[2];
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
    if (*(int *)(in_stack_0000000c + 0xc) != 0) {
      (*(this_ptr->base_weapon).base_actor.vtable[1].renderTransparent)((CDemonActor *)this_ptr);
    }
    return 1;
  }
  *(undefined4 *)(in_stack_0000000c + 0x10) = 0;
  return 0;
}


// Assembly code:
// 005e34d0: PUSH EBX
//   Label: core_turret.cpp_CTurret_FUN_005e34d0
// 005e34d1: PUSH ESI
// 005e34d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e34d6: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e34da: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005e34de: CMP dword ptr [ESI + 0x10],0x0
// 005e34e2: JNZ 0x005e3525
//   XREF to: 005e3525 (CONDITIONAL_JUMP)
// 005e34e4: LEA EAX,[EBX + 0x30]
// 005e34e7: CMP EAX,EDX
// 005e34e9: JZ 0x005e34fb
//   XREF to: 005e34fb (CONDITIONAL_JUMP)
// 005e34eb: MOV ECX,dword ptr [EDX]
// 005e34ed: MOV dword ptr [EAX],ECX
// 005e34ef: MOV ECX,dword ptr [EDX + 0x4]
// 005e34f2: MOV dword ptr [EAX + 0x4],ECX
// 005e34f5: MOV ECX,dword ptr [EDX + 0x8]
// 005e34f8: MOV dword ptr [EAX + 0x8],ECX
// 005e34fb: PUSH EDI
//   Label: LAB_005e34fb
// 005e34fc: PUSH EBX
// 005e34fd: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005e3502: MOV EDI,dword ptr [ESI + 0xc]
// 005e3505: ADD ESP,0x4
// 005e3508: TEST EDI,EDI
// 005e350a: JZ 0x005e351c
//   XREF to: 005e351c (CONDITIONAL_JUMP)
// 005e350c: PUSH EBX
// 005e350d: MOV EAX,dword ptr [EBX + 0x154]
// 005e3513: CALL dword ptr [EAX + 0xf8]
// 005e3519: ADD ESP,0x4
// 005e351c: MOV EAX,0x1
//   Label: LAB_005e351c
// 005e3521: POP EDI
// 005e3522: POP ESI
// 005e3523: POP EBX
// 005e3524: RET
// 005e3525: MOV dword ptr [ESI + 0x10],0x0
//   Label: LAB_005e3525
// 005e352c: XOR EAX,EAX
// 005e352e: POP ESI
// 005e352f: POP EBX
// 005e3530: RET
