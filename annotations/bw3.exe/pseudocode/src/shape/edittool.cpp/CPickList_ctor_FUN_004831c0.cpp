// Name: shape_edittool.cpp_CPickList_ctor_FUN_004831c0
// Address: 004831c0
// Address Range: [[004831c0, 004832af]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004831c0(CPickList *this_ptr)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004831c0(CPickList *this_ptr)

{
  char cVar1;
  CStrList *pCVar2;
  CEdScrollBar *pCVar3;
  CEdButton *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = shape_edittool_cpp_CStrList_ctor_FUN_00481f20(&this_ptr->base);
  pCVar3 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_00485510((CEdScrollBar *)&pCVar2[0x1b].vtable);
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_00486020((CEdButton *)&pCVar3[1].item_count);
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_00486020(pCVar4 + 1);
  *(byte ***)(pCVar4[-4].button_text + 0xa8) = &g_CPickListVTable;
  pCVar4[-0xffffffff00000002].button_text[0xc4] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0xc5] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0xc6] = '\0';
  pCVar4[-0xffffffff00000002].button_text[199] = '\0';
  pCVar4[1].enabled = -1;
  pCVar4[-0xffffffff00000002].button_text[0x80] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x81] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x82] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x83] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x84] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x85] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x86] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x87] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x88] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x89] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8a] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8b] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8c] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8d] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8e] = '\0';
  pCVar4[-0xffffffff00000002].button_text[0x8f] = '\0';
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005bd6c2);
  pcVar6 = pCVar4[-3].button_text + 0x14;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Cancel");
  pcVar6 = pCVar4[-3].button_text + 0x78;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar4[-0xffffffff00000003].button_text[0xc] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xd] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xe] = -1;
  pCVar4[-0xffffffff00000003].button_text[0xf] = -1;
  pCVar4[-0xffffffff00000003].button_text[0x10] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x11] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x12] = '\0';
  pCVar4[-0xffffffff00000003].button_text[0x13] = '\0';
  return (CPickList *)(pCVar4[-4].button_text + 0x9c);
}
