// Name: shape_design.c_initializeCramConfig_FUN_0046b6e0
// Address: 0046b6e0
// Address Range: [[0046b6e0, 0046b760]]
// Convention: __cdecl
// Signature: void shape_design.c_initializeCramConfig_FUN_0046b6e0(SCramConfig * cram_config)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a559 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058de70 (0058de70) at 0058e01f [UNCONDITIONAL_CALL]
//   shape_design.c_setTextureQualityParameter_FUN_0046a8e0 (0046a8e0) at 0046a8fe [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl shape_design_c_initializeCramConfig_FUN_0046b6e0(SCramConfig *cram_config)

{
  crt_memory_c_memset_FUN_005fde40(cram_config,0,0x74);
  cram_config->filename[0] = '\0';
  cram_config->initial_value = 0;
  cram_config->algorithm_mode = 2;
  cram_config->coverage_threshold = 0x5f;
  cram_config->enable_optimization = 1;
  cram_config->enable_gap_filling = 1;
  cram_config->enable_rotation = 1;
  cram_config->enable_flipping = 1;
  cram_config->enable_scaling = 1;
  cram_config->final_mode = 0;
  return;
}


// Assembly code:
// 0046b6e0: PUSH EBX
//   Label: shape_design.c_initializeCramConfig_FUN_0046b6e0
// 0046b6e1: PUSH ESI
// 0046b6e2: PUSH EDI
// 0046b6e3: PUSH EBP
// 0046b6e4: MOV EBP,ESP
// 0046b6e6: SUB ESP,0x0
// 0046b6ec: PUSH 0x74
// 0046b6ee: PUSH 0x0
// 0046b6f0: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b6f3: PUSH EAX
// 0046b6f4: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0046b6f9: ADD ESP,0xc
// 0046b6fc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b6ff: MOV byte ptr [EAX],0x0
// 0046b702: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b705: MOV dword ptr [EAX + 0x50],0x0
// 0046b70c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b70f: MOV dword ptr [EAX + 0x54],0x2
// 0046b716: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b719: MOV dword ptr [EAX + 0x58],0x5f
// 0046b720: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b723: MOV dword ptr [EAX + 0x5c],0x1
// 0046b72a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b72d: MOV dword ptr [EAX + 0x60],0x1
// 0046b734: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b737: MOV dword ptr [EAX + 0x64],0x1
// 0046b73e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b741: MOV dword ptr [EAX + 0x68],0x1
// 0046b748: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b74b: MOV dword ptr [EAX + 0x6c],0x1
// 0046b752: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046b755: MOV dword ptr [EAX + 0x70],0x0
// 0046b75c: POP EBP
// 0046b75d: POP EDI
// 0046b75e: POP ESI
// 0046b75f: POP EBX
// 0046b760: RET
