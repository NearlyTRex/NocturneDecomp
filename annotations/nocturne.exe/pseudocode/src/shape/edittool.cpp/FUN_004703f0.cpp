// Name: shape_edittool.cpp_FUN_004703f0
// Address: 004703f0
// Address Range: [[004703f0, 00470549]]
// Convention: unknown
// Signature: undefined4 shape_edittool_cpp_FUN_004703f0(undefined4 param_1,char *param_2)

#include "nocturne.h"

uint shape_edittool_cpp_FUN_004703f0(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  CStrList CStack_180;
  char acStack_16c [348];
  byte *puStack_10;
  
  puStack_10 = &stack0x0000000c;
  _vsprintf((char *)0x1bcbcd0,param_2,(va_list_t)&puStack_10);
  puStack_10 = (byte *)0x0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&CStack_180);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[Y]es");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Yes to [A]ll");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[N]o");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[C]ancel");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&CStack_180,pcVar2);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("yanc");
  pcVar2 = acStack_16c;
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
                    (&CStack_180,0x1bcbcd0,0xffffffff);
  if (iVar4 == 0) {
    uVar5 = 1;
  }
  else if (iVar4 == 1) {
    uVar5 = 2;
  }
  else {
    if (iVar4 != 2) {
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&CStack_180,0);
      return 0xffffffff;
    }
    uVar5 = 0;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&CStack_180,0);
  return uVar5;
}
