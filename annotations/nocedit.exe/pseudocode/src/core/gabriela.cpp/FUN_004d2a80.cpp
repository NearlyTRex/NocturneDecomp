// Name: core_gabriela.cpp_FUN_004d2a80
// Address: 004d2a80
// Address Range: [[004d2a80, 004d2adf]]
// Convention: __cdecl
// Signature: float core_gabriela.cpp_FUN_004d2a80(int current_bone_index, int target_bone_index, float blend_weight, int hierarchy_distance, CDeformableModelInstance * instance)
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5462 [DATA]
// Globals:
//   double DOUBLE_0062ac95 = 0.800000000000000
//   double DOUBLE_0062ac9d = 0.600000000000000
//   double DOUBLE_0062aca5 = 0.400000000000000
//   double DOUBLE_0062acad = 0.200000000000000

#include "nocturne.h"

float __cdecl
core_gabriela_cpp_FUN_004d2a80
          (int current_bone_index,int target_bone_index,float blend_weight,int hierarchy_distance,
          CDeformableModelInstance *instance)

{
  float fVar1;
  
  if (hierarchy_distance < 1) {
    fVar1 = blend_weight * (float)DOUBLE_0062acad;
  }
  else if (hierarchy_distance == 1) {
    fVar1 = blend_weight * (float)DOUBLE_0062aca5;
  }
  else if (hierarchy_distance == 2) {
    fVar1 = blend_weight * (float)DOUBLE_0062ac9d;
  }
  else {
    if (hierarchy_distance != 3) {
      return blend_weight;
    }
    fVar1 = blend_weight * (float)DOUBLE_0062ac95;
  }
  return fVar1;
}


// Assembly code:
// 004d2a80: SUB ESP,0x4
//   Label: core_gabriela.cpp_FUN_004d2a80
// 004d2a83: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004d2a87: TEST EAX,EAX
// 004d2a89: JLE 0x004d2aae
//   XREF to: 004d2aae (CONDITIONAL_JUMP)
// 004d2a8b: CMP EAX,0x1
// 004d2a8e: JZ 0x004d2aba
//   XREF to: 004d2aba (CONDITIONAL_JUMP)
// 004d2a90: CMP EAX,0x2
// 004d2a93: JZ 0x004d2ac6
//   XREF to: 004d2ac6 (CONDITIONAL_JUMP)
// 004d2a95: CMP EAX,0x3
// 004d2a98: JNZ 0x004d2ad2
//   XREF to: 004d2ad2 (CONDITIONAL_JUMP)
// 004d2a9a: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004d2a9e: FMUL double ptr [0x0062ac95]
//   XREF to: 0062ac95 (READ)
// 004d2aa4: FSTP float ptr [ESP]
//   Label: LAB_004d2aa4
//   XREF to: Stack[-0x4] (DATA)
// 004d2aa7: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004d2aaa: ADD ESP,0x4
// 004d2aad: RET
// 004d2aae: FLD float ptr [ESP + 0x10]
//   Label: LAB_004d2aae
//   XREF to: Stack[0xc] (READ)
// 004d2ab2: FMUL double ptr [0x0062acad]
//   XREF to: 0062acad (READ)
// 004d2ab8: JMP 0x004d2aa4
//   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)
// 004d2aba: FLD float ptr [ESP + 0x10]
//   Label: LAB_004d2aba
//   XREF to: Stack[0xc] (READ)
// 004d2abe: FMUL double ptr [0x0062aca5]
//   XREF to: 0062aca5 (READ)
// 004d2ac4: JMP 0x004d2aa4
//   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)
// 004d2ac6: FLD float ptr [ESP + 0x10]
//   Label: LAB_004d2ac6
//   XREF to: Stack[0xc] (READ)
// 004d2aca: FMUL double ptr [0x0062ac9d]
//   XREF to: 0062ac9d (READ)
// 004d2ad0: JMP 0x004d2aa4
//   XREF to: 004d2aa4 (UNCONDITIONAL_JUMP)
// 004d2ad2: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004d2ad2
//   XREF to: Stack[0xc] (READ)
// 004d2ad6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x4] (DATA)
// 004d2ad9: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004d2adc: ADD ESP,0x4
// 004d2adf: RET
