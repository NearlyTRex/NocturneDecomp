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
  
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_3c);
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
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x769;
    core_main_c_FUN_005030e0("hose!");
  }
  FUN_005bfb40(pcVar4,&DAT_005d20a9);
  iVar2 = support_trstream_cpp_FUN_005a0fd0(&local_3c,&DAT_005d20ae,local_8c,1);
  if (iVar2 == 0) {
    engine_2d_c_buildColorLookupTable_FUN_00402880();
    support_trstream_cpp_COutStreamFile_ctor_FUN_005a17d0(&local_10);
    iVar2 = support_trstream_cpp_FUN_005a1a20(&local_10,&DAT_005d20b5,local_8c,&DAT_005d20b2);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\engine\\2d.c";
      _DAT_01d1d404 = 0x770;
      core_main_c_FUN_005030e0("Unable to write quick map!");
    }
    support_trstream_cpp_FUN_005a18f0(&local_10,&DAT_01c45ad0,0x8000);
    support_trstream_cpp_FUN_005a19b0(&local_10);
    support_trstream_cpp_COutStreamFile_dtor_FUN_005a1860(&local_10,0);
  }
  else {
    unkaddr_0059f520_cpp_FUN_005a0c10(&local_3c,&DAT_01c45ad0,0x8000);
    unkaddr_0059f520_cpp_FUN_005a0dc0(&local_3c);
  }
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_3c,0);
  return;
}
