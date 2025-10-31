// Name: core_water.cpp_calculateWaveHeight_FUN_005e9dc0
// Address: 005e9dc0
// Address Range: [[005e9dc0, 005e9e04]]
// Convention: __cdecl
// Signature: float core_water.cpp_calculateWaveHeight_FUN_005e9dc0(int x, int y)
// Globals:
//   double DOUBLE_006571af = 3.14159265350000
//   double DOUBLE_006571b7 = 0.5
//   double DOUBLE_006571bf = 0.25
//   float g_WaterAnimationPhase

#include "nocturne.h"

float __cdecl core_water_cpp_calculateWaveHeight_FUN_005e9dc0(int x,int y)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)y * (float10)DOUBLE_006571af * (float10)DOUBLE_006571b7 +
                        (float10)x * (float10)DOUBLE_006571af + (float10)g_WaterAnimationPhase);
  return (float)(fVar1 * (float10)DOUBLE_006571bf);
}


// Assembly code:
// 005e9dc0: SUB ESP,0x8
//   Label: core_water.cpp_calculateWaveHeight_FUN_005e9dc0
// 005e9dc3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e9dc7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005e9dcb: FLD double ptr [0x006571af]
//   XREF to: 006571af (READ)
// 005e9dd1: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005e9dd5: FMUL ST1
// 005e9dd7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e9ddb: FMUL double ptr [0x006571b7]
//   XREF to: 006571b7 (READ)
// 005e9de1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005e9de5: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005e9de9: FMULP ST2
// 005e9deb: FADDP
// 005e9ded: FADD float ptr [0x03f8f630]
//   XREF to: 03f8f630 (READ)
// 005e9df3: FSIN
// 005e9df5: FMUL double ptr [0x006571bf]
//   XREF to: 006571bf (READ)
// 005e9dfb: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005e9dfe: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005e9e01: ADD ESP,0x8
// 005e9e04: RET
