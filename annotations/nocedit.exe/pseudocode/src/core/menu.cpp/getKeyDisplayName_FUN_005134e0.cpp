// Name: core_menu.cpp_getKeyDisplayName_FUN_005134e0
// Address: 005134e0
// Address Range: [[005134e0, 00513718]]
// Convention: __cdecl
// Signature: char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(int key_code)

#include "nocturne.h"

char * __cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(int key_code)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (key_code == 599) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("(none)");
  }
  if (key_code == 0x255) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse X-Axis");
  }
  if (key_code == 0x256) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse Y-Axis");
  }
  if (key_code == 0x200) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B1");
  }
  if (key_code == 0x201) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B2");
  }
  if (key_code == 0x20c) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Mouse B3");
  }
  if (key_code == 0x202) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 1");
  }
  if (key_code == 0x203) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 2");
  }
  if (key_code == 0x204) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 3");
  }
  if (key_code == 0x205) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 4");
  }
  if (key_code == 0x206) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 5");
  }
  if (key_code == 0x207) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 6");
  }
  if (key_code == 0x208) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 7");
  }
  if (key_code == 0x209) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 8");
  }
  if (key_code == 0x20a) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 9");
  }
  if (key_code == 0x20b) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Button 10");
  }
  if (key_code == 0x251) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad left");
  }
  if (key_code == 0x252) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad right");
  }
  if (key_code == 0x253) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad forward");
  }
  if (key_code == 0x254) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Gamepad back");
  }
  if (pcVar3 == (char *)0x0) {
    pcVar3 = wincore_winrun_cpp_getKeyName_FUN_005f3980(key_code);
  }
  pcVar2 = g_StringBuffers[g_StringBufferIndex];
  pcVar4 = pcVar2;
  g_StringBufferIndex = (g_StringBufferIndex + 1) % 10;
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
