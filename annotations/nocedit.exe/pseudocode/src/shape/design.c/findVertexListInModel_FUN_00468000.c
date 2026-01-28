// Name: shape_design.c_findVertexListInModel_FUN_00468000
// Address: 00468000
// Address Range: [[00468000, 00468075]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl shape_design_c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended *model_ptr)

#include "nocturne.h"

CVector3i * __cdecl
shape_design_c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended *model_ptr)

{
  int iVar1;
  
  while (((char)(model_ptr->base).type != '\x02' && ((char)(model_ptr->base).type != '\0'))) {
    iVar1 = engine_model_c_getMRGLSize_FUN_00528700(model_ptr);
    model_ptr = (SMRGLHeaderExtended *)((int)&(model_ptr->base).type + iVar1);
  }
  if (model_ptr == (SMRGLHeaderExtended *)0x0) {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 0x21ce;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find vlist");
  }
  return (CVector3i *)(model_ptr + 1);
}
