// Name: core_setedit.cpp_addGroundType_FUN_00578290
// Address: 00578290
// Address Range: [[00578290, 0057841d]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_addGroundType_FUN_00578290(char *filename,int ground_type)

#include "nocturne.h"

void __cdecl core_setedit_cpp_addGroundType_FUN_00578290(char *filename,int ground_type)

{
  char cVar2;
  int iVar2;
  uint uVar3;
  int iVar4;
  char (*str1) [40];
  char *pcVar5;
  char *pcVar3;
  char *pcVar6;
  byte bVar7;
  char local_20c [256];
  char local_10c [256];
  char cVar1;
  
  bVar7 = 0;
  iVar4 = 0;
  engine_dosio_cpp_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,local_20c,(char *)0x0);
  if (0 < g_GroundTextureCount) {
    str1 = g_GroundTextureNames;
    do {
      iVar2 = _stricmp(*str1,local_20c);
      if (iVar2 == 0) {
        if (-1 < iVar4) {
          if ((uint)(byte)g_GroundTextureTypes[iVar4] != ground_type) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 670;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Tried to define texture %s as ground type %d, but it was already defined as %d",filename,ground_type,
                       (uint)(byte)g_GroundTextureTypes[iVar4]);
            return;
          }
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      str1 = str1 + 1;
    } while (iVar4 < g_GroundTextureCount);
  }
  engine_dosio_cpp_splitPath_FUN_00481f20(filename,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
  if (499 < g_GroundTextureCount) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 683;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ground type list is full!  (Max is %d)",500);
  }
  uVar3 = 0xffffffff;
  pcVar3 = local_10c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x27 < ~uVar3 - 1) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 689;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Texture filename %s is too long to add to CGroundTypeList!",filename);
  }
  pcVar5 = local_10c;
  pcVar6 = g_GroundTextureNames[g_GroundTextureCount];
  do {
    cVar2 = *pcVar5;
    (*(char (*) [40])pcVar6)[0] = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    (*(char (*) [40])pcVar6)[1] = cVar2;
    pcVar6 = *(char (*) [40])pcVar6 + 2;
  } while (cVar2 != '\0');
  g_GroundTextureTypes[g_GroundTextureCount] = (char)ground_type;
  g_GroundTextureCount = g_GroundTextureCount + 1;
  return;
}
