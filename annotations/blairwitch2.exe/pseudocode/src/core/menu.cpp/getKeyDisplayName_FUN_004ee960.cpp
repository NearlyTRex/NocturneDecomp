// Name: core_menu.cpp_getKeyDisplayName_FUN_004ee960
// Address: 004ee960
// Address Range: [[004ee960, 004eeb98]]
// Convention: __cdecl
// Signature: char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_004ee960(EInputCodeType key_code)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (key_code == INPUT_NONE) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("(none)");
  }
  if (key_code == DIM_XAXIS) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse X-Axis");
  }
  if (key_code == DIM_YAXIS) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse Y-Axis");
  }
  if (key_code == DIM_LBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B1");
  }
  if (key_code == DIM_RBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B2");
  }
  if (key_code == DIM_MBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Mouse B3");
  }
  if (key_code == DIJ_BUTTON1) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 1");
  }
  if (key_code == DIJ_BUTTON2) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 2");
  }
  if (key_code == DIJ_BUTTON3) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 3");
  }
  if (key_code == DIJ_BUTTON4) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 4");
  }
  if (key_code == DIJ_BUTTON5) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 5");
  }
  if (key_code == DIJ_BUTTON6) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 6");
  }
  if (key_code == DIJ_BUTTON7) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 7");
  }
  if (key_code == DIJ_BUTTON8) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 8");
  }
  if (key_code == DIJ_BUTTON9) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 9");
  }
  if (key_code == DIJ_BUTTON10) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Button 10");
  }
  if (key_code == DIJ_LEFT) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad left");
  }
  if (key_code == DIJ_RIGHT) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad right");
  }
  if (key_code == DIJ_UP) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad forward");
  }
  if (key_code == DIJ_DOWN) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = wincore_winrun_cpp_getKeyName_FUN_0058f630(key_code);
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
