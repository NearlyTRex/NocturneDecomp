// Name: core_vehicle.cpp_CVehicle_FUN_005e8ba0
// Address: 005e8ba0
// Address Range: [[005e8ba0, 005e8ce7]]
// Convention: __cdecl
// Signature: void core_vehicle.cpp_CVehicle_FUN_005e8ba0(CVehicle * this_ptr)
// Globals:
//   TerminatedCString s_Model_file_kfm_00656f69
//   TerminatedCString s_s_tire_00656f7b
//   TerminatedCString s_bpos_00656f83
//   TerminatedCString s_Current_time_00656f88
//   TerminatedCString s_Total_time_00656f95
//   TerminatedCString s_Course_name_00656fa0
//   TerminatedCString s_Left_front_00656fb5
//   TerminatedCString s_Right_front_00656fc0
//   void* PTR_s_Left_front_00684480 = 00656fb5
//   void* PTR_s_Right_front_00684484 = 00656fc0
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

void __cdecl core_vehicle_cpp_CVehicle_FUN_005e8ba0(CVehicle *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CActorPropertyList *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000018;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  iVar1 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0x938)) {
    iVar2 = 0;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffef8,"%s tire",
                 *(undefined4 *)((int)&PTR_s_Left_front_00684480 + iVar2));
      core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
      core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000018 + 0x938));
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}


// Assembly code:
// 005e8ba0: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_FUN_005e8ba0
// 005e8ba1: PUSH EBP
// 005e8ba2: SUB ESP,0x108
// 005e8ba8: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 005e8baf: PUSH EBP
// 005e8bb0: MOV EDX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005e8bb7: PUSH EDX
// 005e8bb8: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005e8bbd: ADD ESP,0x8
// 005e8bc0: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 005e8bc7: PUSH 0x0
// 005e8bc9: ADD EAX,0x158
// 005e8bce: PUSH EAX
// 005e8bcf: PUSH 0x656f69
//   XREF to: 00656f69 (DATA)
// 005e8bd4: PUSH EBP
// 005e8bd5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005e8bda: ADD ESP,0x10
// 005e8bdd: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 005e8be4: MOV ECX,dword ptr [EAX + 0x938]
// 005e8bea: XOR EBX,EBX
// 005e8bec: TEST ECX,ECX
// 005e8bee: JLE 0x005e8c86
//   XREF to: 005e8c86 (CONDITIONAL_JUMP)
// 005e8bf4: PUSH EDI
// 005e8bf5: PUSH ESI
// 005e8bf6: MOV ESI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 005e8bfd: ADD EAX,0x93c
// 005e8c02: XOR EDI,EDI
// 005e8c04: ADD ESI,0x950
// 005e8c0a: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005e8c11: MOV EAX,dword ptr [EDI + 0x684480]
//   Label: LAB_005e8c11
//   XREF to: 00684480 (READ)
//   XREF to: 00684484 (READ)
// 005e8c17: PUSH EAX
//   XREF to: 00656fb5 (DATA)
//   XREF to: 00656fc0 (DATA)
// 005e8c18: PUSH 0x656f7b
//   XREF to: 00656f7b (DATA)
// 005e8c1d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 005e8c21: PUSH EAX
// 005e8c22: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e8c27: IMUL EAX,EBX,0x1b4
// 005e8c2d: ADD ESP,0xc
// 005e8c30: PUSH 0x0
// 005e8c32: MOV EDX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0xc] (READ)
// 005e8c39: PUSH ESI
// 005e8c3a: ADD EDX,EAX
// 005e8c3c: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x110] (DATA)
// 005e8c40: PUSH EAX
// 005e8c41: PUSH EBP
// 005e8c42: MOV dword ptr [ESP + 0x118],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 005e8c49: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005e8c4e: ADD ESP,0x10
// 005e8c51: PUSH 0x0
// 005e8c53: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x10] (READ)
// 005e8c5a: PUSH EDX
// 005e8c5b: PUSH 0x656f83
//   XREF to: 00656f83 (DATA)
// 005e8c60: PUSH EBP
// 005e8c61: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 005e8c66: ADD ESP,0x10
// 005e8c69: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 005e8c70: ADD EDI,0x4
// 005e8c73: INC EBX
// 005e8c74: MOV ECX,dword ptr [EAX + 0x938]
// 005e8c7a: ADD ESI,0x1b4
// 005e8c80: CMP EBX,ECX
// 005e8c82: JL 0x005e8c11
//   XREF to: 005e8c11 (CONDITIONAL_JUMP)
// 005e8c84: POP ESI
// 005e8c85: POP EDI
// 005e8c86: MOV EAX,dword ptr [ESP + 0x114]
//   Label: LAB_005e8c86
//   XREF to: Stack[0x4] (READ)
// 005e8c8d: PUSH 0x0
// 005e8c8f: ADD EAX,0x102c
// 005e8c94: PUSH EAX
// 005e8c95: PUSH 0x656f88
//   XREF to: 00656f88 (DATA)
// 005e8c9a: PUSH EBP
// 005e8c9b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e8ca0: ADD ESP,0x10
// 005e8ca3: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 005e8caa: PUSH 0x0
// 005e8cac: ADD EAX,0x1030
// 005e8cb1: PUSH EAX
// 005e8cb2: PUSH 0x656f95
//   XREF to: 00656f95 (DATA)
// 005e8cb7: PUSH EBP
// 005e8cb8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e8cbd: ADD ESP,0x10
// 005e8cc0: PUSH 0x0
// 005e8cc2: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005e8cc9: PUSH 0x1f
// 005e8ccb: ADD EAX,0x1034
// 005e8cd0: PUSH EAX
// 005e8cd1: PUSH 0x656fa0
//   XREF to: 00656fa0 (DATA)
// 005e8cd6: PUSH EBP
// 005e8cd7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 005e8cdc: ADD ESP,0x14
// 005e8cdf: ADD ESP,0x108
// 005e8ce5: POP EBP
// 005e8ce6: POP EBX
// 005e8ce7: RET
