// Name: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700
// Address: 0048a700
// Address Range: [[0048a700, 0048a734]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer *this_ptr,int mode)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer *this_ptr,int mode)

{
  this_ptr->projection_mode = mode;
  if (mode != 1) {
    return;
  }
  g_CurrentFilename = "..\\engine\\drender.cpp";
  g_CurrentLineNumber = 156;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Ortho isn't supported any more");
  return;
}
