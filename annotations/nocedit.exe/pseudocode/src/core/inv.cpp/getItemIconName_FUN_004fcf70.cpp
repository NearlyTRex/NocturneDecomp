// Name: core_inv.cpp_getItemIconName_FUN_004fcf70
// Address: 004fcf70
// Address Range: [[004fcf70, 004fcfdb]]
// Convention: __cdecl
// Signature: char * core_inv.cpp_getItemIconName_FUN_004fcf70(CDemonActor * actor_ptr)
// Cross-references:
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fd6d6 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00501340 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Add_to_dict_s_00630389
//   char[256] g_ErrorMessageBuffer2
//   int g_ItemDefinitionCount
//   SInventoryItemInfo[100] g_ItemDefinitionArray
//   undefined4 DAT_02dbacc8
//   undefined4 DAT_02dbadc8
// Function calls:
//   core_inv.cpp_getItemModel_FUN_004fcda0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

char * __cdecl core_inv_cpp_getItemIconName_FUN_004fcf70(CDemonActor *actor_ptr)

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
        return str2->string3;
      }
      iVar3 = iVar3 + 1;
      str2 = str2 + 1;
    } while (iVar3 < g_ItemDefinitionCount);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (g_ErrorMessageBuffer2,"Add to dict: %s",pCVar1->model_name);
  return g_ErrorMessageBuffer2;
}


// Assembly code:
// 004fcf70: PUSH EBX
//   Label: core_inv.cpp_getItemIconName_FUN_004fcf70
// 004fcf71: PUSH ESI
// 004fcf72: PUSH EDI
// 004fcf73: PUSH EBP
// 004fcf74: MOV EBP,ESP
// 004fcf76: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fcf79: PUSH EDX
// 004fcf7a: MOV EBX,0x2dbaac8
//   XREF to: 02dbaac8 (PARAM)
// 004fcf7f: XOR ESI,ESI
// 004fcf81: CALL core_inv.cpp_getItemModel_FUN_004fcda0
//   XREF to: 004fcda0 (UNCONDITIONAL_CALL)
// 004fcf86: MOV ECX,dword ptr [0x02dbaac0]
//   XREF to: 02dbaac0 (READ)
// 004fcf8c: ADD ESP,0x4
// 004fcf8f: LEA EDI,[EAX + 0x78]
// 004fcf92: TEST ECX,ECX
// 004fcf94: JLE 0x004fcfb4
//   XREF to: 004fcfb4 (CONDITIONAL_JUMP)
// 004fcf96: PUSH EBX
//   Label: LAB_004fcf96
//   XREF to: 02dbaac8 (DATA)
//   XREF to: 02dbadc8 (DATA)
// 004fcf97: PUSH EDI
// 004fcf98: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004fcf9d: ADD ESP,0x8
// 004fcfa0: TEST EAX,EAX
// 004fcfa2: JZ 0x004fcfd1
//   XREF to: 004fcfd1 (CONDITIONAL_JUMP)
// 004fcfa4: MOV EAX,[0x02dbaac0]
//   XREF to: 02dbaac0 (READ)
// 004fcfa9: INC ESI
// 004fcfaa: ADD EBX,0x300
// 004fcfb0: CMP ESI,EAX
// 004fcfb2: JL 0x004fcf96
//   XREF to: 004fcf96 (CONDITIONAL_JUMP)
// 004fcfb4: PUSH EDI
//   Label: LAB_004fcfb4
// 004fcfb5: PUSH 0x630389
//   XREF to: 00630389 (DATA)
// 004fcfba: PUSH 0x2db8b70
//   XREF to: 02db8b70 (DATA)
// 004fcfbf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fcfc4: MOV EAX,0x2db8b70
//   XREF to: 02db8b70 (DATA)
// 004fcfc9: ADD ESP,0xc
// 004fcfcc: POP EBP
// 004fcfcd: POP EDI
// 004fcfce: POP ESI
// 004fcfcf: POP EBX
// 004fcfd0: RET
// 004fcfd1: LEA EAX,[EBX + 0x200]
//   Label: LAB_004fcfd1
//   XREF to: 02dbacc8 (DATA)
// 004fcfd7: POP EBP
// 004fcfd8: POP EDI
// 004fcfd9: POP ESI
// 004fcfda: POP EBX
// 004fcfdb: RET
