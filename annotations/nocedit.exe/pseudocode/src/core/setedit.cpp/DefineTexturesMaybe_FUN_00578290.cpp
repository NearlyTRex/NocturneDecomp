// Name: core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
// Address: 00578290
// Address Range: [[00578290, 0057841d]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_DefineTexturesMaybe_FUN_00578290()

#include "nocturne.h"

void core_setedit_cpp_DefineTexturesMaybe_FUN_00578290(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char *in_stack_00000004;
  uint in_stack_0000000c;
  byte in_stack_00000014;
  char *apcStack_208 [64];
  char acStack_108 [8];
  char acStack_100 [244];
  
  bVar7 = 0;
  iVar4 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,&stack0xfffffdf4,(char *)0x0);
  if (0 < DAT_03654368) {
    pcVar5 = &DAT_03654370;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,(char *)apcStack_208);
      if (iVar2 == 0) {
        if (-1 < iVar4) {
          if ((byte)(&DAT_03659190)[iVar4] != in_stack_0000000c) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x29e;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Tried to define texture %s as ground type %d, but it was already defined as %d",in_stack_00000004,in_stack_0000000c);
            return;
          }
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x28;
    } while (iVar4 < DAT_03654368);
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,acStack_108,(char *)0x0);
  if (499 < DAT_03654368) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x2ab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ground type list is full!  (Max is %d)");
  }
  uVar3 = 0xffffffff;
  pcVar5 = acStack_100;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x27 < ~uVar3 - 1) {
    apcStack_208[0] = in_stack_00000004;
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x2b1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Texture filename %s is too long to add to CGroundTypeList!");
  }
  pcVar5 = acStack_100;
  pcVar6 = &DAT_03654370 + DAT_03654368 * 0x28;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  (&DAT_03659190)[DAT_03654368] = in_stack_00000014;
  DAT_03654368 = DAT_03654368 + 1;
  return;
}
