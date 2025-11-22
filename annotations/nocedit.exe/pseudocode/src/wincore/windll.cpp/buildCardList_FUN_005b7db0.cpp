// Name: wincore_windll.cpp_buildCardList_FUN_005b7db0
// Address: 005b7db0
// Address Range: [[005b7db0, 005b7de7]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_buildCardList_FUN_005b7db0(int * out_card_count, void * enum_data_buffer, char * * out_card_names, int * out_vendor_ids, int * out_device_ids)
// Cross-references:
//   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 (00510c80) at 00511769 [UNCONDITIONAL_CALL]
// Globals:
//   APIDLL_buildCardList* g_APIDLL_buildCardList
//   int g_ExternalRendererActive

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_buildCardList_FUN_005b7db0
          (int *out_card_count,void *enum_data_buffer,char **out_card_names,int *out_vendor_ids,
          int *out_device_ids)

{
  int iVar1;
  
  if (g_ExternalRendererActive == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_buildCardList)
                    (out_card_count,enum_data_buffer,out_card_names,out_vendor_ids,out_device_ids);
  return iVar1;
}


// Assembly code:
// 005b7db0: PUSH EBP
//   Label: wincore_windll.cpp_buildCardList_FUN_005b7db0
// 005b7db1: CMP dword ptr [0x03f6b978],0x0
//   XREF to: 03f6b978 (READ)
// 005b7db8: JNZ 0x005b7dbe
//   XREF to: 005b7dbe (CONDITIONAL_JUMP)
// 005b7dba: XOR EAX,EAX
// 005b7dbc: POP EBP
// 005b7dbd: RET
// 005b7dbe: PUSH EDI
//   Label: LAB_005b7dbe
// 005b7dbf: PUSH ESI
// 005b7dc0: PUSH EBX
// 005b7dc1: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005b7dc5: PUSH ECX
// 005b7dc6: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005b7dca: PUSH EBX
// 005b7dcb: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 005b7dcf: PUSH ESI
// 005b7dd0: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005b7dd4: PUSH EDI
// 005b7dd5: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b7dd9: PUSH EBP
// 005b7dda: CALL dword ptr [g_APIDLL_buildCardList]
//   XREF to: 03f6b91c (READ)
// 005b7de0: ADD ESP,0x14
// 005b7de3: POP EBX
// 005b7de4: POP ESI
// 005b7de5: POP EDI
// 005b7de6: POP EBP
// 005b7de7: RET
