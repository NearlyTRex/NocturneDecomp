// Name: core_menu.cpp_getKeyDisplayName_FUN_004ee960
// Address: 004ee960
// Address Range: [[004ee960, 004eeb98]]
// Convention: __cdecl
// Signature: char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004ee960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004ee960(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (param_1 == 599) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("(none)");
  }
  if (param_1 == 0x255) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse X-Axis");
  }
  if (param_1 == 0x256) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse Y-Axis");
  }
  if (param_1 == 0x200) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B1");
  }
  if (param_1 == 0x201) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B2");
  }
  if (param_1 == 0x20c) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B3");
  }
  if (param_1 == 0x202) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 1");
  }
  if (param_1 == 0x203) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 2");
  }
  if (param_1 == 0x204) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 3");
  }
  if (param_1 == 0x205) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 4");
  }
  if (param_1 == 0x206) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 5");
  }
  if (param_1 == 0x207) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 6");
  }
  if (param_1 == 0x208) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 7");
  }
  if (param_1 == 0x209) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 8");
  }
  if (param_1 == 0x20a) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 9");
  }
  if (param_1 == 0x20b) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 10");
  }
  if (param_1 == 0x251) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad left");
  }
  if (param_1 == 0x252) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad right");
  }
  if (param_1 == 0x253) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad forward");
  }
  if (param_1 == 0x254) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)wincore_winrun_cpp_getKeyName_FUN_0058f630(param_1);
  }
  pcVar2 = (char *)(_DAT_01d08d80 * 0x100 + 0x1d08d88);
  pcVar4 = pcVar2;
  _DAT_01d08d80 = (_DAT_01d08d80 + 1) % 10;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return pcVar2;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return pcVar2;
}
