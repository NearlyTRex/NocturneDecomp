// Name: core_inv.cpp_CInventory_clear_FUN_004fd0e0
// Address: 004fd0e0
// Address Range: [[004fd0e0, 004fd180]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_clear_FUN_004fd0e0(CInventory * this_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_dtor_FUN_004fd0c0 (004fd0c0) at 004fd0c6 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_initialize_FUN_004fd190 (004fd190) at 004fd19b [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff412 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_inv_cpp_006303b4
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_clear_FUN_004fd0e0(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  iVar1 = this_ptr->item_count;
  while (0 < iVar1) {
    core_inv_cpp_CInventory_removeItem_FUN_004fea70
              (this_ptr,this_ptr->items[0],(uint)(this_ptr->preserve_items == 0));
    iVar1 = this_ptr->item_count;
  }
  this_ptr->selected_item = (CDemonActor *)0x0;
  this_ptr->preserve_items = 0;
  this_ptr_00 = this_ptr->ammo_ptr;
  this_ptr->selected_weapon = (CWeapon *)0x0;
  if (this_ptr_00 != (CAmmo *)0x0) {
    g_CurrentDebugFilename = "..\\core\\inv.cpp";
    g_CurrentDebugLine = 0x102;
    if (this_ptr_00 != (CAmmo *)0x0) {
      (*((this_ptr_00->base_actor).vtable)->dtor)
                (&this_ptr_00->base_actor,2,unaff_EBX,unaff_retaddr,(uint)this_ptr,in_stack_00000008
                 ,in_stack_0000000c,in_stack_00000010,in_stack_00000014);
      this_ptr->ammo_ptr = (CAmmo *)0x0;
      return;
    }
    this_ptr->ammo_ptr = (CAmmo *)0x0;
  }
  return;
}


// Assembly code:
// 004fd0e0: PUSH EBX
//   Label: core_inv.cpp_CInventory_clear_FUN_004fd0e0
// 004fd0e1: PUSH EBP
// 004fd0e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fd0e6: CMP dword ptr [EBX + 0x8],0x0
// 004fd0ea: JLE 0x004fd114
//   XREF to: 004fd114 (CONDITIONAL_JUMP)
// 004fd0ec: PUSH EDI
// 004fd0ed: PUSH ESI
// 004fd0ee: CMP dword ptr [EBX + 0x450],0x0
//   Label: LAB_004fd0ee
// 004fd0f5: SETZ AL
// 004fd0f8: AND EAX,0xff
// 004fd0fd: PUSH EAX
// 004fd0fe: MOV ESI,dword ptr [EBX + 0xc]
// 004fd101: PUSH ESI
// 004fd102: PUSH EBX
// 004fd103: CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   XREF to: 004fea70 (UNCONDITIONAL_CALL)
// 004fd108: MOV EDI,dword ptr [EBX + 0x8]
// 004fd10b: ADD ESP,0xc
// 004fd10e: TEST EDI,EDI
// 004fd110: JG 0x004fd0ee
//   XREF to: 004fd0ee (CONDITIONAL_JUMP)
// 004fd112: POP ESI
// 004fd113: POP EDI
// 004fd114: MOV dword ptr [EBX + 0x334],0x0
//   Label: LAB_004fd114
// 004fd11e: MOV dword ptr [EBX + 0x450],0x0
// 004fd128: MOV EBP,dword ptr [EBX + 0x458]
// 004fd12e: MOV dword ptr [EBX + 0x330],0x0
// 004fd138: TEST EBP,EBP
// 004fd13a: JZ 0x004fd15f
//   XREF to: 004fd15f (CONDITIONAL_JUMP)
// 004fd13c: MOV EAX,0x6303b4
//   XREF to: 006303b4 (DATA)
// 004fd141: MOV EDX,0x102
// 004fd146: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 004fd14b: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 004fd151: MOV EAX,EBP
// 004fd153: JNZ 0x004fd162
//   XREF to: 004fd162 (CONDITIONAL_JUMP)
// 004fd155: MOV dword ptr [EBX + 0x458],0x0
// 004fd15f: POP EBP
//   Label: LAB_004fd15f
// 004fd160: POP EBX
// 004fd161: RET
// 004fd162: PUSH 0x2
//   Label: LAB_004fd162
// 004fd164: MOV EDX,dword ptr [EBP + 0x154]
// 004fd16a: PUSH EBP
// 004fd16b: CALL dword ptr [EDX + 0xe4]
// 004fd171: ADD ESP,0x8
// 004fd174: MOV dword ptr [EBX + 0x458],0x0
// 004fd17e: POP EBP
// 004fd17f: POP EBX
// 004fd180: RET
