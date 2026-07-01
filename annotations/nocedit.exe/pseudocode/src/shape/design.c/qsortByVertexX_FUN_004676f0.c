// Name: shape_design.c_qsortByVertexX_FUN_004676f0
// Address: 004676f0
// Address Range: [[004676f0, 004677b6]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_qsortByVertexX_FUN_004676f0(SVertexPair *a,SVertexPair *b)

#include "nocturne.h"

int __cdecl shape_design_c_qsortByVertexX_FUN_004676f0(SVertexPair *a,SVertexPair *b)

{
  int local_24;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar1;
  
  if (a == b) {
    local_24 = 0;
  }
  else {
    iVar1 = a->original_index;
    iVar2 = b->original_index;
    fVar3 = g_LoadedVertices[iVar1].vertex.x;
    fVar4 = g_LoadedVertices[iVar2].vertex.x;
    if (fVar4 <= fVar3) {
      if (fVar3 <= fVar4) {
        if (iVar1 < iVar2) {
          local_24 = -1;
        }
        else if (iVar2 < iVar1) {
          local_24 = 1;
        }
        else {
          g_CurrentFilename = "..\\shape\\design.c";
          g_CurrentLineNumber = 8290;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
          local_24 = 0;
        }
      }
      else {
        local_24 = 1;
      }
    }
    else {
      local_24 = -1;
    }
  }
  return local_24;
}
