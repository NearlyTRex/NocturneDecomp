// Name: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40
// Address: 0045ed40
// Address Range: [[0045ed40, 0045ed74]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40(CDemonRenderer *this_ptr,int mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40(CDemonRenderer *this_ptr,int mode)

{
  this_ptr->projection_mode = mode;
  if (mode != 1) {
    return;
  }
  g_CurrentFilename = "..\\engine\\drender.cpp";
  g_CurrentLineNumber = 155;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Ortho isn't supported any more");
  return;
}
