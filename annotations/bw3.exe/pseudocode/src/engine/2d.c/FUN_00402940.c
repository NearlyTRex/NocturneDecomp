// Name: engine_2d.c_FUN_00402940
// Address: 00402940
// Address Range: [[00402940, 00402abc]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_FUN_00402940(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_FUN_00402940(char *filename)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_8c [80];
  CInStreamFile local_3c;
  COutStreamFile local_10;
  
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&local_3c);
  pcVar4 = local_8c;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = local_8c;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_8c;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00402994;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00402994;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00402994:
  if (pcVar4 == (char *)0x0) {
    _DAT_01d71de0 = "..\\engine\\2d.c";
    _DAT_01d71de4 = 0x769;
    core_main_c_FUN_004e4330("hose!");
  }
  FUN_005a28c0(pcVar4,&DAT_005b50e1);
  iVar2 = support_trstream_cpp_FUN_00573fc0(&local_3c,&DAT_005b50e6,local_8c,1);
  if (iVar2 == 0) {
    engine_2d_c_buildColorLookupTable_FUN_00402880();
    support_trstream_cpp_COutStreamFile_ctor_FUN_005747c0(&local_10);
    iVar2 = support_trstream_cpp_FUN_00574a10(&local_10,&DAT_005b50ed,local_8c,&DAT_005b50ea);
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\engine\\2d.c";
      _DAT_01d71de4 = 0x770;
      core_main_c_FUN_004e4330("Unable to write quick map!");
    }
    support_trstream_cpp_FUN_005748e0(&local_10,&DAT_01c62070,0x8000);
    support_trstream_cpp_FUN_005749a0(&local_10);
    support_trstream_cpp_COutStreamFile_dtor_FUN_00574850(&local_10,0);
  }
  else {
    unkafter_turret_cpp_FUN_00573c00(&local_3c,&DAT_01c62070,0x8000);
    unkafter_turret_cpp_FUN_00573db0(&local_3c);
  }
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&local_3c,0);
  return;
}
