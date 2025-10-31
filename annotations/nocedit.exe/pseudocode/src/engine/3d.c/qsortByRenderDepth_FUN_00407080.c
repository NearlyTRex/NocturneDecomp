// Name: engine_3d.c_qsortByRenderDepth_FUN_00407080
// Address: 00407080
// Address Range: [[00407080, 004070b0]]
// Convention: __cdecl
// Signature: int engine_3d.c_qsortByRenderDepth_FUN_00407080(SRenderBufferEntry * * entry1_ptr, SRenderBufferEntry * * entry2_ptr)
// Cross-references:
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 (004070c0) at 00407100 [DATA]

#include "nocturne.h"

int __cdecl
engine_3d_c_qsortByRenderDepth_FUN_00407080
          (SRenderBufferEntry **entry1_ptr,SRenderBufferEntry **entry2_ptr)

{
  if ((*entry1_ptr)->min_z_value < (*entry2_ptr)->min_z_value) {
    return 1;
  }
  if ((*entry2_ptr)->min_z_value < (*entry1_ptr)->min_z_value) {
    return -1;
  }
  return 0;
}


// Assembly code:
// 00407080: PUSH EBX
//   Label: engine_3d.c_qsortByRenderDepth_FUN_00407080
// 00407081: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00407085: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00407089: MOV EDX,dword ptr [EDX]
// 0040708b: MOV EAX,dword ptr [EAX]
// 0040708d: MOV ECX,dword ptr [EDX + 0x114]
// 00407093: MOV EBX,dword ptr [EAX + 0x114]
// 00407099: CMP ECX,EBX
// 0040709b: JL 0x004070a6
//   XREF to: 004070a6 (CONDITIONAL_JUMP)
// 0040709d: JLE 0x004070ad
//   XREF to: 004070ad (CONDITIONAL_JUMP)
// 0040709f: MOV EAX,0xffffffff
// 004070a4: POP EBX
// 004070a5: RET
// 004070a6: MOV EAX,0x1
//   Label: LAB_004070a6
// 004070ab: POP EBX
// 004070ac: RET
// 004070ad: XOR EAX,EAX
//   Label: LAB_004070ad
// 004070af: POP EBX
// 004070b0: RET
