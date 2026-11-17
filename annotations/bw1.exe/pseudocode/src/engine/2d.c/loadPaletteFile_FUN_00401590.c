// Name: engine_2d.c_loadPaletteFile_FUN_00401590
// Address: 00401590
// Address Range: [[00401590, 00401616]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadPaletteFile_FUN_00401590(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadPaletteFile_FUN_00401590(char *filename)

{
  int iVar1;
  CInStreamFile local_2c;
  
  support_trstream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_2c);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                    (&local_2c,"art",filename,1);
  if (iVar1 == 0) {
    g_CHAR_PTR_01d1d400 = "..\\engine\\2d.c";
    g_INT_01d1d404 = 0x29b;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Unable to open VGA palette");
  }
  support_trstream_cpp_CInStreamFile_read_FUN_005a0c10(&local_2c,g_UCHAR_ARRAY_01c4e9f8,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_005a0dc0(&local_2c);
  support_trstream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_2c,0);
  return;
}
