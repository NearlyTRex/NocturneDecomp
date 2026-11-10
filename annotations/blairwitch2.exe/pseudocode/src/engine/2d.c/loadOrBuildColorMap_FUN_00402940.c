// Name: engine_2d.c_loadOrBuildColorMap_FUN_00402940
// Address: 00402940
// Address Range: [[00402940, 00402ab5]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402940(char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_loadOrBuildColorMap_FUN_00402940(char *filename)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_88 [80];
  CInStreamFile local_38;
  COutStreamFile local_10;
  
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_38);
  pcVar4 = local_88;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    pcVar3 = local_88;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_88;
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
    _DAT_01d046a0 = "..\\engine\\2d.c";
    _DAT_01d046a4 = 0x74f;
    core_main_c_FUN_004e4500("hose!");
  }
  _sprintf(pcVar4,&DAT_005ca0a9);
  iVar2 = support_trstream_cpp_FUN_0057d390(&local_38,&DAT_005ca0ae,local_88);
  if (iVar2 == 0) {
    engine_2d_c_buildColorLookupTable_FUN_00402880();
    support_trstream_cpp_COutStreamFile_ctor_FUN_0057db80(&local_10);
    iVar2 = support_trstream_cpp_FUN_0057ddd0(&local_10,&DAT_005ca0b5,local_88,&DAT_005ca0b2);
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\engine\\2d.c";
      _DAT_01d046a4 = 0x756;
      core_main_c_FUN_004e4500("Unable to write quick map!");
    }
    support_trstream_cpp_FUN_0057dca0(&local_10,&DAT_01c2c910,0x8000);
    support_trstream_cpp_FUN_0057dd60(&local_10);
    support_trstream_cpp_COutStreamFile_dtor_FUN_0057dc10(&local_10,0);
  }
  else {
    unkaddr_0057b9a0_cpp_FUN_0057cfe0(&local_38,&DAT_01c2c910,0x8000);
    unkaddr_0057b9a0_cpp_FUN_0057d180(&local_38);
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_38,0);
  return;
}
