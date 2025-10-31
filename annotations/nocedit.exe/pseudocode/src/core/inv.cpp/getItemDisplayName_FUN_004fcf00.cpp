// Name: core_inv.cpp_getItemDisplayName_FUN_004fcf00
// Address: 004fcf00
// Address Range: [[004fcf00, 004fcf6b]]
// Convention: __cdecl
// Signature: char * core_inv.cpp_getItemDisplayName_FUN_004fcf00(CDemonActor * actor_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fde42 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500ba7 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff95d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Add_to_dict_s_00630379
//   char[256] g_ErrorMessageBuffer
//   int g_ItemDefinitionCount
//   SInventoryItemInfo[100] g_ItemDefinitionArray
//   undefined4 DAT_02dbabc8
//   undefined4 DAT_02dbadc8
// Function calls:
//   core_inv.cpp_getItemModel_FUN_004fcda0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemDisplayName_FUN_004fcf00(CDemonActor *actor_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  SInventoryItemInfo *str2;
  int iVar3;
  
  str2 = g_ItemDefinitionArray;
  iVar3 = 0;
  pCVar1 = core_inv_cpp_getItemModel_FUN_004fcda0(actor_ptr);
  if (0 < g_ItemDefinitionCount) {
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pCVar1->model_name,str2->string1);
      if (iVar2 == 0) {
        return str2->string2;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(g_ErrorMessageBuffer,"Add to dict: %s",pCVar1->model_name)
  ;
  return g_ErrorMessageBuffer;
}


// Assembly code:
// 004fcf00: PUSH EBX
//   Label: core_inv.cpp_getItemDisplayName_FUN_004fcf00
// 004fcf01: PUSH ESI
// 004fcf02: PUSH EDI
// 004fcf03: PUSH EBP
// 004fcf04: MOV EBP,ESP
// 004fcf06: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fcf09: PUSH EDX
// 004fcf0a: MOV EBX,0x2dbaac8
//   XREF to: 02dbaac8 (PARAM)
// 004fcf0f: XOR ESI,ESI
// 004fcf11: CALL core_inv.cpp_getItemModel_FUN_004fcda0
//   XREF to: 004fcda0 (UNCONDITIONAL_CALL)
// 004fcf16: MOV ECX,dword ptr [0x02dbaac0]
//   XREF to: 02dbaac0 (READ)
// 004fcf1c: ADD ESP,0x4
// 004fcf1f: LEA EDI,[EAX + 0x78]
// 004fcf22: TEST ECX,ECX
// 004fcf24: JLE 0x004fcf44
//   XREF to: 004fcf44 (CONDITIONAL_JUMP)
// 004fcf26: PUSH EBX
//   Label: LAB_004fcf26
//   XREF to: 02dbaac8 (DATA)
//   XREF to: 02dbadc8 (DATA)
// 004fcf27: PUSH EDI
// 004fcf28: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004fcf2d: ADD ESP,0x8
// 004fcf30: TEST EAX,EAX
// 004fcf32: JZ 0x004fcf61
//   XREF to: 004fcf61 (CONDITIONAL_JUMP)
// 004fcf34: MOV EAX,[0x02dbaac0]
//   XREF to: 02dbaac0 (READ)
// 004fcf39: INC ESI
// 004fcf3a: ADD EBX,0x300
// 004fcf40: CMP ESI,EAX
// 004fcf42: JL 0x004fcf26
//   XREF to: 004fcf26 (CONDITIONAL_JUMP)
// 004fcf44: PUSH EDI
//   Label: LAB_004fcf44
// 004fcf45: PUSH 0x630379
//   XREF to: 00630379 (DATA)
// 004fcf4a: PUSH 0x2db8a70
//   XREF to: 02db8a70 (DATA)
// 004fcf4f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fcf54: MOV EAX,0x2db8a70
//   XREF to: 02db8a70 (DATA)
// 004fcf59: ADD ESP,0xc
// 004fcf5c: POP EBP
// 004fcf5d: POP EDI
// 004fcf5e: POP ESI
// 004fcf5f: POP EBX
// 004fcf60: RET
// 004fcf61: LEA EAX,[EBX + 0x100]
//   Label: LAB_004fcf61
//   XREF to: 02dbabc8 (DATA)
// 004fcf67: POP EBP
// 004fcf68: POP EDI
// 004fcf69: POP ESI
// 004fcf6a: POP EBX
// 004fcf6b: RET
