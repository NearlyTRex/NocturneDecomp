// Name: core_menu.cpp_getKeyDisplayName_FUN_005134e0
// Address: 005134e0
// MANUAL RECONSTRUCTION
// Address Range: [[005134e0, 00513718]]
// Convention: __cdecl
// Signature: char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)

#include "nocturne.h"

char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code)

{
  char *pcVar2;
  char *pcVar3;

  pcVar3 = (char *)0x0;
  if (key_code == INPUT_NONE) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("(none)");
  }
  if (key_code == DIM_XAXIS) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse X-Axis");
  }
  if (key_code == DIM_YAXIS) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse Y-Axis");
  }
  if (key_code == DIM_LBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B1");
  }
  if (key_code == DIM_RBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B2");
  }
  if (key_code == DIM_MBUTTON) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B3");
  }
  if (key_code == DIJ_BUTTON1) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 1");
  }
  if (key_code == DIJ_BUTTON2) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 2");
  }
  if (key_code == DIJ_BUTTON3) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 3");
  }
  if (key_code == DIJ_BUTTON4) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 4");
  }
  if (key_code == DIJ_BUTTON5) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 5");
  }
  if (key_code == DIJ_BUTTON6) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 6");
  }
  if (key_code == DIJ_BUTTON7) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 7");
  }
  if (key_code == DIJ_BUTTON8) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 8");
  }
  if (key_code == DIJ_BUTTON9) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 9");
  }
  if (key_code == DIJ_BUTTON10) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 10");
  }
  if (key_code == DIJ_LEFT) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad left");
  }
  if (key_code == DIJ_RIGHT) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad right");
  }
  if (key_code == DIJ_UP) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad forward");
  }
  if (key_code == DIJ_DOWN) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = wincore_winrun_cpp_getKeyName_FUN_005f3980(key_code);
  }
  pcVar2 = g_StringBuffers[g_StringBufferIndex];
  g_StringBufferIndex = (g_StringBufferIndex + 1) % 10;
  strcpy(pcVar2,pcVar3);
  return pcVar2;
}
