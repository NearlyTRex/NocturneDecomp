// Name: core_setedit.cpp_addGroundType_FUN_00578290
// Address: 00578290
// MANUAL RECONSTRUCTION
// Address Range: [[00578290, 0057841d]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_addGroundType_FUN_00578290(char *filename,int ground_type)

#include "nocturne.h"

void __cdecl core_setedit_cpp_addGroundType_FUN_00578290(char *filename,int ground_type)

{
  int iVar2;
  int iVar4;
  char (*str1) [40];
  char local_20c [256];
  char local_10c [256];

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
            g_CurrentLineNumber = 0x29e;
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
    g_CurrentLineNumber = 0x2ab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ground type list is full!  (Max is %d)",500);
  }
  if (0x27 < (int)strlen(local_10c)) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x2b1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Texture filename %s is too long to add to CGroundTypeList!",filename);
  }
  strcpy(g_GroundTextureNames[g_GroundTextureCount],local_10c);
  g_GroundTextureTypes[g_GroundTextureCount] = (char)ground_type;
  g_GroundTextureCount = g_GroundTextureCount + 1;
  return;
}
