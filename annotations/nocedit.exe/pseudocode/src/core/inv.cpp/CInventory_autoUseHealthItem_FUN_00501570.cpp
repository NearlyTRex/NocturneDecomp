// Name: core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
// Address: 00501570
// Address Range: [[00501570, 0050161c]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4987 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Auto_use_selected_health_00630bd0
//   TerminatedCString s_Auto_use_health_00630bea
//   TerminatedCString s_no_more_auto_health_left_00630bfb
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   undefined4 DAT_02db8780.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_inv.cpp_CInventory_select_FUN_004ff800
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CInventory *pCVar3;
  
  if ((this_ptr->selected_item == (CDemonActor *)0x0) ||
     (pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash),
     pCVar1 == (CDemonActor *)0x0)) {
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar3->items[0],g_CHealthItemClassInfo.name_hash);
        if (pCVar1 != (CDemonActor *)0x0) {
          core_inv_cpp_CInventory_select_FUN_004ff800(this_ptr,pCVar1);
          engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Auto use health\n");
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CInventory *)&pCVar3->owner;
      } while (iVar2 < this_ptr->item_count);
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"no more auto health left\n");
  }
  else {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Auto use selected health\n");
    core_inv_cpp_CInventory_select_FUN_004ff800(this_ptr,pCVar1);
  }
  return;
}


// Assembly code:
// 00501570: PUSH EBX
//   Label: core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
// 00501571: PUSH ESI
// 00501572: PUSH EDI
// 00501573: PUSH EBP
// 00501574: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501578: MOV EDX,dword ptr [EDI + 0x334]
// 0050157e: TEST EDX,EDX
// 00501580: JNZ 0x005015c8
//   XREF to: 005015c8 (CONDITIONAL_JUMP)
// 00501582: MOV ESI,dword ptr [EDI + 0x8]
//   Label: LAB_00501582
// 00501585: XOR EBX,EBX
// 00501587: TEST ESI,ESI
// 00501589: JLE 0x005015af
//   XREF to: 005015af (CONDITIONAL_JUMP)
// 0050158b: MOV ESI,EDI
// 0050158d: MOV ECX,dword ptr [0x02db87b8]
//   Label: LAB_0050158d
//   XREF to: 02db87b8 (READ)
// 00501593: PUSH ECX
// 00501594: MOV EBP,dword ptr [ESI + 0xc]
// 00501597: PUSH EBP
// 00501598: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0050159d: ADD ESP,0x8
// 005015a0: TEST EAX,EAX
// 005015a2: JNZ 0x005015fb
//   XREF to: 005015fb (CONDITIONAL_JUMP)
// 005015a4: INC EBX
// 005015a5: MOV EAX,dword ptr [EDI + 0x8]
// 005015a8: ADD ESI,0x4
// 005015ab: CMP EBX,EAX
// 005015ad: JL 0x0050158d
//   XREF to: 0050158d (CONDITIONAL_JUMP)
// 005015af: PUSH 0x630bfb
//   Label: LAB_005015af
//   XREF to: 00630bfb (DATA)
// 005015b4: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005015ba: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005015bb: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005015c0: ADD ESP,0x8
//   Label: LAB_005015c0
// 005015c3: POP EBP
// 005015c4: POP EDI
// 005015c5: POP ESI
// 005015c6: POP EBX
// 005015c7: RET
// 005015c8: MOV ECX,dword ptr [0x02db87b8]
//   Label: LAB_005015c8
//   XREF to: 02db87b8 (READ)
// 005015ce: PUSH ECX
// 005015cf: PUSH EDX
// 005015d0: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005015d5: MOV EBX,EAX
// 005015d7: ADD ESP,0x8
// 005015da: TEST EAX,EAX
// 005015dc: JZ 0x00501582
//   XREF to: 00501582 (CONDITIONAL_JUMP)
// 005015de: PUSH 0x630bd0
//   XREF to: 00630bd0 (DATA)
// 005015e3: MOV EBP,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005015e9: PUSH EBP
//   XREF to: 0083b1a4 (DATA)
// 005015ea: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005015ef: ADD ESP,0x8
// 005015f2: PUSH EBX
// 005015f3: PUSH EDI
// 005015f4: CALL core_inv.cpp_CInventory_select_FUN_004ff800
//   XREF to: 004ff800 (UNCONDITIONAL_CALL)
// 005015f9: JMP 0x005015c0
//   XREF to: 005015c0 (UNCONDITIONAL_JUMP)
// 005015fb: PUSH EAX
//   Label: LAB_005015fb
// 005015fc: PUSH EDI
// 005015fd: CALL core_inv.cpp_CInventory_select_FUN_004ff800
//   XREF to: 004ff800 (UNCONDITIONAL_CALL)
// 00501602: ADD ESP,0x8
// 00501605: PUSH 0x630bea
//   XREF to: 00630bea (DATA)
// 0050160a: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 0050160f: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 00501610: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00501615: ADD ESP,0x8
// 00501618: POP EBP
// 00501619: POP EDI
// 0050161a: POP ESI
// 0050161b: POP EBX
// 0050161c: RET
