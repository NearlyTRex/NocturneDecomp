// Name: shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_00470310
// Address: 00470310
// Address Range: [[00470310, 004703ef]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_00470310(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_00470310(CEditorTools *this_ptr,char *format_string,...)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CPickList CStack_17c;
  byte *puStack_c;
  
  puStack_c = &stack0x0000000c;
  _vsprintf((char *)0x1bcb8d0,format_string,(va_list_t)&puStack_c);
  puStack_c = (byte *)0x0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&CStack_17c);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[Y]es");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_17c.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[N]o");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_17c.base,pcVar2);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("yn");
  pcVar2 = CStack_17c.hotkeys;
  do {
    cVar1 = *pcVar3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                    (&CStack_17c,(char *)0x1bcb8d0,-1);
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&CStack_17c,0);
  return (uint)(iVar4 == 0);
}
