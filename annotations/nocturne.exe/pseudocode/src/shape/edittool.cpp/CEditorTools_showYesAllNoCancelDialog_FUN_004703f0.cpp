// Name: shape_edittool.cpp_CEditorTools_showYesAllNoCancelDialog_FUN_004703f0
// Address: 004703f0
// Address Range: [[004703f0, 00470549]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_004703f0(CEditorTools *this_ptr,char *format_string,...)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showYesAllNoCancelDialog_FUN_004703f0(CEditorTools *this_ptr,char *format_string,...)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CPickList CStack_180;
  byte *puStack_10;
  
  puStack_10 = &stack0x0000000c;
  _vsprintf((char *)0x1bcbcd0,format_string,(va_list_t)&puStack_10);
  puStack_10 = (byte *)0x0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&CStack_180);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[Y]es");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Yes to [A]ll");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[N]o");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180.base,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[C]ancel");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180.base,pcVar2);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("yanc");
  pcVar2 = CStack_180.hotkeys;
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
                    (&CStack_180,(char *)0x1bcbcd0,-1);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  else if (iVar4 == 1) {
    iVar4 = 2;
  }
  else {
    if (iVar4 != 2) {
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&CStack_180,0);
      return -1;
    }
    iVar4 = 0;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&CStack_180,0);
  return iVar4;
}
