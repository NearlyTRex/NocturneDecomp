// Name: engine_2d.c_FUN_00403630
// Address: 00403630
// Address Range: [[00403630, 00403754]]
// Convention: unknown
// Signature: void engine_2d_c_FUN_00403630(char *param_1)

#include "nocturne.h"

void engine_2d_c_FUN_00403630(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_5c [80];
  
  pcVar4 = local_5c;
  do {
    cVar1 = *param_1;
    *pcVar4 = cVar1;
    pcVar3 = local_5c;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = local_5c;
  } while (cVar1 != '\0');
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00403672;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '.') goto LAB_00403672;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_00403672:
  if (pcVar4 == (char *)0x0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x76e;
    core_main_c_FUN_004c8440("hose!");
  }
  _sprintf(pcVar4,".map");
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("fog",local_5c,"rb");
  if (iVar2 != 0) {
    _fread(&DAT_01bf7720,1,0x8000,iVar2);
    _fclose(iVar2);
    return;
  }
  engine_2d_c_buildColorLookupTable_FUN_00403570();
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60("fog",local_5c,"wb");
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x775;
    core_main_c_FUN_004c8440("Unable to write quick map!");
  }
  _fwrite(&DAT_01bf7720,1,0x8000,iVar2);
  _fclose(iVar2);
  return;
}
