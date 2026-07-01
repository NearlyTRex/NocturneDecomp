// Name: engine_3d.c_addFaceIfVisible_FUN_004079c0
// Address: 004079c0
// Address Range: [[004079c0, 00407a22]]
// Convention: __cdecl
// Signature: void __cdecl engine_3d_c_addFaceIfVisible_FUN_004079c0(SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue)

#include "nocturne.h"

void __cdecl engine_3d_c_addFaceIfVisible_FUN_004079c0(SMRGLHeaderPrimitive *cull_reference,SMRGLHeaderPrimitive *face_to_queue)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&cull_reference->surface_normal);
  if (iVar1 != 0) {
    if (1999 < g_RenderFaceCount) {
      g_CurrentFilename = "..\\engine\\3d.c";
      g_CurrentLineNumber = 3239;
      core_main_c_displayErrorAndQuit_FUN_00506f10("renderFaceList - too many faces");
    }
    g_RenderFaceArray[g_RenderFaceCount] = cull_reference;
    g_RenderFaceCount = g_RenderFaceCount + 1;
  }
  return;
}
