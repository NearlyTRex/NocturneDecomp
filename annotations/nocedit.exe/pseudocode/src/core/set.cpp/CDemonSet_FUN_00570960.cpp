// Name: core_set.cpp_CDemonSet_FUN_00570960
// Address: 00570960
// Address Range: [[00570960, 0057096f]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_00570960(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim, int count)
// Cross-references:
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 004829f2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_FUN_00570960(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)

{
  int iVar1;
  
  if (g_CGamePtr->scripted_sequence_active == 0) {
    if (g_CDemonRendererPtr->advanced_culling_enabled == 0) {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                    (g_CDemonRendererPtr,prim);
          prim = prim + 3;
        } while (iVar1 < count);
        return;
      }
    }
    else {
      iVar1 = 0;
      if (0 < count) {
        do {
          iVar1 = iVar1 + 1;
          core_mirror_cpp_renderMirroredPrimitive_FUN_005225e0(this_ptr->active_mirror,prim);
          prim = prim + 3;
        } while (iVar1 < count);
      }
    }
  }
  return;
}


// Assembly code:
// 00570960: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_00570960
// 00570961: PUSH ESI
// 00570962: PUSH EDI
// 00570963: PUSH EBP
// 00570964: MOV EBP,dword ptr [ESP + 0x14]
// 00570968: MOV EAX,dword ptr [ESP + 0x18]
// 0057096c: MOV EDI,dword ptr [ESP + 0x1c]
