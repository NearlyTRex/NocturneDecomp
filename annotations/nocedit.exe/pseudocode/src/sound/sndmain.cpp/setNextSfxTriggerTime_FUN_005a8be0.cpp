// Name: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
// Address: 005a8be0
// Address Range: [[005a8be0, 005a8c0d]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
// Cross-references:
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c5b0 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048f2ad [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0f00 (004b0f00) at 004b0f46 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_process_FUN_005de360 (005de360) at 005de540 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SfxLastSlot
//   undefined4 g_SfxLastSlot.field_20[80]
//   undefined4 g_SfxLastSlot.field_20[84]
//   undefined4 g_SfxLastSlot.field_20[88]

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time,int trigger_id)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].trigger_time = trigger_time;
  g_SfxOptions[iVar1].trigger_id = trigger_id;
  return;
}


// Assembly code:
// 005a8be0: MOV EAX,[0x03f624a4]
//   Label: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0
//   XREF to: 03f624a4 (READ)
// 005a8be5: SHL EAX,0x4
// 005a8be8: MOV EDX,EAX
// 005a8bea: SHL EAX,0x3
// 005a8bed: SUB EAX,EDX
// 005a8bef: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005a8bf3: MOV dword ptr [EAX + 0x3f62508],EDX
//   XREF to: 03f62508 (DATA)
// 005a8bf9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005a8bfd: MOV dword ptr [EAX + 0x3f6250c],EDX
//   XREF to: 03f6250c (DATA)
// 005a8c03: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005a8c07: MOV dword ptr [EAX + 0x3f62510],EDX
//   XREF to: 03f62510 (DATA)
// 005a8c0d: RET
