// Name: shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
// Address: 004a3b90
// MANUAL RECONSTRUCTION
// Address Range: [[004a3b90, 004a3c7f]]
// Convention: __cdecl
// Signature: CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr)

#include "nocturne.h"

CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr)

{
  CPickList *pCVar2;
  CPickList_ptr_420 pCVar3;
  CPickList_ptr_476 pCVar4;
  CPickList_ptr_704 pCVar5;
#if NOCTURNE_AUTHENTIC_EDITOR_BUTTON
  char *pcVar2;
#endif

  pCVar2 = (CPickList *)shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&this_ptr->base);
  pCVar3 = shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&pCVar2->scrollbar);
  pCVar4 = shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&ADJ(pCVar3)->ok_button);
  pCVar5 = shape_edittool_cpp_CEdButton_ctor_FUN_004a64e0(&ADJ(pCVar4)->cancel_button);
  ADJ(pCVar5)->base.vtable._us = &g_CPickListVTable._us;
  ADJ(pCVar5)->dialog_result = 0;
  ADJ(pCVar5)->selection_state = -1;
  ADJ(pCVar5)->enabled_capacity = 0;
  ADJ(pCVar5)->enabled_array = (int *)0x0;
  ADJ(pCVar5)->hotkey_capacity = 0;
  ADJ(pCVar5)->hotkey_array = (int *)0x0;
#if NOCTURNE_AUTHENTIC_EDITOR_BUTTON
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("OK");
  strcpy(ADJ(pCVar5)->ok_button_text,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Cancel");
  strcpy(ADJ(pCVar5)->cancel_button_text,pcVar2);
#else
  ADJ(pCVar5)->ok_button_text[0] = '\0';
  ADJ(pCVar5)->cancel_button_text[0] = '\0';
#endif
  ADJ(pCVar5)->selected_index = -1;
  ADJ(pCVar5)->state_flag = 0;
  return ADJ(pCVar5);
}
