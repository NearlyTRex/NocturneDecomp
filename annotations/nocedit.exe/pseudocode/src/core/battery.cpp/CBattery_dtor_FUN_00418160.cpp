// Name: core_battery.cpp_CBattery_dtor_FUN_00418160
// Address: 00418160
// Address Range: [[00418160, 004181ad]]
// Convention: __cdecl
// Signature: CBattery * core_battery.cpp_CBattery_dtor_FUN_00418160(CBattery * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CBatteryTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBattery * __cdecl core_battery_cpp_CBattery_dtor_FUN_00418160(CBattery *this_ptr,uint d1,uint d2)

{
  CBattery *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBatteryTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CBattery *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00418160: PUSH EBX
//   Label: core_battery.cpp_CBattery_dtor_FUN_00418160
// 00418161: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418165: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041816a: JNZ 0x00418186
//   XREF to: 00418186 (CONDITIONAL_JUMP)
// 0041816c: PUSH 0x1
// 0041816e: PUSH EBX
// 0041816f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00418174: ADD ESP,0x8
// 00418177: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041817b: MOV EBX,EAX
// 0041817d: TEST DL,0x2
// 00418180: JNZ 0x004181a1
//   XREF to: 004181a1 (CONDITIONAL_JUMP)
// 00418182: MOV EAX,EBX
// 00418184: POP EBX
// 00418185: RET
// 00418186: PUSH 0x65aa20
//   Label: LAB_00418186
//   XREF to: 0065aa20 (DATA)
// 0041818b: PUSH EBX
// 0041818c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00418191: ADD ESP,0x8
// 00418194: PUSH EAX
// 00418195: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0041819a: ADD ESP,0x4
// 0041819d: MOV EAX,EBX
// 0041819f: POP EBX
// 004181a0: RET
// 004181a1: PUSH EAX
//   Label: LAB_004181a1
// 004181a2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004181a7: ADD ESP,0x4
// 004181aa: MOV EAX,EBX
// 004181ac: POP EBX
// 004181ad: RET
