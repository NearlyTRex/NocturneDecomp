// Name: engine_2d.c_loadPaletteFile_FUN_00401590
// Address: 00401590
// Address Range: [[00401590, 00401614]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_loadPaletteFile_FUN_00401590(char *filename)

#include "nocturne.h"

void __cdecl engine_2d_c_loadPaletteFile_FUN_00401590(char *filename)

{
  int iVar1;
  CInStreamFile local_28;
  
  support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50(&local_28);
  iVar1 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                    (&local_28,"art",filename);
  if (iVar1 == 0) {
    g_CHAR_PTR_01d046a0 = "..\\engine\\2d.c";
    g_INT_01d046a4 = 0x29b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Unable to open VGA palette");
  }
  support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0(&local_28,g_UCHAR_ARRAY_01c35838,0x300);
  support_trstream_cpp_CInStreamFile_close_FUN_0057d180(&local_28);
  support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0(&local_28,0);
  return;
}
