// Name: cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0
// Address: 00431ac0
// MANUAL RECONSTRUCTION
// Address Range: [[00431ac0, 00431bff]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,uchar *output_buffer)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadACTPaletteFile_FUN_00431ac0(char *base_filename,uchar *output_buffer)

{
  _FILE *file;
  SIZE_T SVar2;
  char *pcVar6;
  char local_ac [80];
  char local_5c [80];
  
  strcpy(local_ac, base_filename);
  pcVar6 = strchr(local_ac, '.');
  if (pcVar6 == (char *)0x0) {
    pcVar6 = local_ac + strlen(local_ac);
  }
  strcpy(pcVar6, ".ACT");
  file = engine_dosio_c_getFile_FUN_00481a50("art",local_ac,"rb");
  if (file == (_FILE *)0x0) {
    memcpy(output_buffer,g_DefaultPalette,0x300);
    return;
  }
  SVar2 = _fread(output_buffer,0x100,3,file);
  if (SVar2 != 3) {
    _sprintf(local_5c,"Error reading %s.",local_ac);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x13d;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_5c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x140);
  return;
}
