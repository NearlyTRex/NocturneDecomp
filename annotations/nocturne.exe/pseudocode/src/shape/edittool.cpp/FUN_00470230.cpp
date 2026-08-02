// Name: shape_edittool.cpp_FUN_00470230
// Address: 00470230
// Address Range: [[00470230, 0047030f]]
// Convention: unknown
// Signature: bool shape_edittool_cpp_FUN_00470230(undefined4 param_1,char *param_2)

#include "nocturne.h"

bool shape_edittool_cpp_FUN_00470230(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  CStrList local_17c;
  char local_168 [348];
  byte *local_c;
  
  local_c = &stack0x0000000c;
  _vsprintf((char *)0x1bcb4d0,param_2,(va_list_t)&local_c);
  local_c = (byte *)0x0;
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&local_17c);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[Y]es, I know what I'm doing and I hate these annoying prompts.");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_17c,pcVar2);
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("[N]o, please, I didn't mean to do it!");
  shape_edittool_cpp_CStrList_add_FUN_00473cb0(&local_17c,pcVar2);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("yn");
  pcVar2 = local_168;
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
                    (&local_17c,0x1bcb4d0,0xffffffff);
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&local_17c,0);
  return iVar4 == 0;
}
