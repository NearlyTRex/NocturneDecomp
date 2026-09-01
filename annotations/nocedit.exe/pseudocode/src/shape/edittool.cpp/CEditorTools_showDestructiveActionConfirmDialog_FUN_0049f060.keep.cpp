// Name: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
// Address: 0049f060
// MANUAL RECONSTRUCTION
// Address Range: [[0049f060, 0049f0ea]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools *this_ptr,char *format_string,...)

{
  int iVar1;
#if NOCTURNE_AUTHENTIC_EDITOR_BUTTON
  CStrList local_18;
#else
  CPickList local_18;
  char *pcVar2;
  int iVar3;
#endif
  va_list_t local_8;

  VA_START_T(local_8, format_string);
  _vsprintf(g_ConfirmationMessageBuffer + 0x400,format_string,local_8);
  VA_END_T(local_8);
#if NOCTURNE_AUTHENTIC_EDITOR_BUTTON
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_18);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^Yes, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18,"^No, please, I didn't mean to do it!");
  iVar1 = shape_edittool_cpp_showMultiChoiceDialog_FUN_0049e9d0
                    ((CStrList *)(g_ConfirmationMessageBuffer + 0x400),(char *)&local_18,1);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_18,0);
#else
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_18);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                     ("[Y]es, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                     ("[N]o, please, I didn't mean to do it!");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_18.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("yn");
  for (iVar3 = 0;
      (iVar3 < (local_18.base).item_count && (pcVar2[iVar3] != '\0')); iVar3 = iVar3 + 1) {
    shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_18,iVar3,(int)pcVar2[iVar3]);
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_18,g_ConfirmationMessageBuffer + 0x400,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_18,0);
#endif
  return (uint)(iVar1 == 0);
}
