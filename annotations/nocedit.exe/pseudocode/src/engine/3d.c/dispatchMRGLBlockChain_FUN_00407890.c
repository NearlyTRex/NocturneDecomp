// Name: engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
// Address: 00407890
// Address Range: [[00407890, 00407910]]
// Convention: __cdecl
// Signature: void engine_3d.c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended * chain)

#include "nocturne.h"

void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended *chain)

{
  int iVar1;
  
  if (chain == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\engine\\3d.c";
    g_CurrentLineNumber = 0xc5f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Bad pointer!");
  }
  while( true ) {
    iVar1 = (chain->base).type;
    if (iVar1 == 0) break;
    if ((iVar1 < 0) || (0x42 < iVar1)) {
      g_CurrentFilename = "..\\engine\\3d.c";
      g_CurrentLineNumber = 0xc68;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Bad code!");
    }
    chain = (*g_MRGLBlockHandlerTable[iVar1])(chain);
  }
  g_VertexProcessingEnabled = 1;
  return;
}
