// Name: shape_design.c_getVertexCountFromModel_FUN_00468080
// Address: 00468080
// MANUAL RECONSTRUCTION
// Address Range: [[00468080, 004680ef]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended *model_ptr)

#include "nocturne.h"

int __cdecl shape_design_c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended *model_ptr)

{
  int iVar1;
  
  if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 8674;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find vlist");
    return 0;
  }
  while (((char)(model_ptr->base).type != '\x02' && ((char)(model_ptr->base).type != '\0'))) {
    iVar1 = engine_model_c_getMRGLSize_FUN_00528700(model_ptr);
    model_ptr = (SMRGLHeaderExtended *)((char *)model_ptr + iVar1);
  }
  return model_ptr->child_count;
}
