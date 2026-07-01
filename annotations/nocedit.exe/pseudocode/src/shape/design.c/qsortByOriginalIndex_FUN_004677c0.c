// Name: shape_design.c_qsortByOriginalIndex_FUN_004677c0
// Address: 004677c0
// Address Range: [[004677c0, 00467841]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_qsortByOriginalIndex_FUN_004677c0(SVertexPair *vertex_pair1,SVertexPair *vertex_pair2)

#include "nocturne.h"

int __cdecl shape_design_c_qsortByOriginalIndex_FUN_004677c0(SVertexPair *vertex_pair1,SVertexPair *vertex_pair2)

{
  int local_1c;
  
  if (vertex_pair1 == vertex_pair2) {
    local_1c = 0;
  }
  else if (vertex_pair1->original_index < vertex_pair2->original_index) {
    local_1c = -1;
  }
  else if (vertex_pair2->original_index < vertex_pair1->original_index) {
    local_1c = 1;
  }
  else {
    g_CurrentFilename = "..\\shape\\design.c";
    g_CurrentLineNumber = 8312;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
    local_1c = 0;
  }
  return local_1c;
}
