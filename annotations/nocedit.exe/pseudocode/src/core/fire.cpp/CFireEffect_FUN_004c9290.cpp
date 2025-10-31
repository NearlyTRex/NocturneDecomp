// Name: core_fire.cpp_CFireEffect_FUN_004c9290
// Address: 004c9290
// Address Range: [[004c9290, 004c92f1]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9290(CFireEffect * this_ptr)
// Cross-references:
//   core_weather.cpp_CWeather_SomethingWithLightingThunder_FUN_005eeaf0 (005eeaf0) at 005eebb0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d76ec0
//   CRainDrop[256] g_CFireEffectRainDrops
//   undefined4 DAT_02d76edc
//   undefined4 DAT_02d76ef8

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9290(CFireEffect *this_ptr)

{
  int iVar1;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  
  (*(g_CFireEffectRainDrops[DAT_02d76ec0].base.vtable)->setup)
            (&g_CFireEffectRainDrops[DAT_02d76ec0].base,in_stack_00000008,in_stack_0000000c);
  iVar1 = DAT_02d76ec0 + 1;
  g_CFireEffectRainDrops[DAT_02d76ec0].base.lifetime_remaining = 0.25;
  if (0xff < iVar1) {
    iVar1 = 0;
  }
  DAT_02d76ec0 = iVar1;
  return;
}


// Assembly code:
// 004c9290: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c9290
// 004c9291: PUSH ESI
// 004c9292: MOV EBX,dword ptr [0x02d76ec0]
//   XREF to: 02d76ec0 (READ)
// 004c9298: LEA EAX,[EBX*0x8 + 0x0]
// 004c929f: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004c92a3: MOV EDX,EAX
// 004c92a5: PUSH ECX
// 004c92a6: SHL EAX,0x3
// 004c92a9: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004c92ad: SUB EAX,EDX
// 004c92af: PUSH ESI
// 004c92b0: ADD EAX,0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004c92b5: PUSH EAX
// 004c92b6: MOV EDX,dword ptr [EAX + 0x34]
//   XREF to: 02d76ef8 (DATA)
// 004c92b9: CALL dword ptr [EDX]
// 004c92bb: MOV EBX,dword ptr [0x02d76ec0]
//   XREF to: 02d76ec0 (READ)
// 004c92c1: LEA EAX,[EBX*0x8 + 0x0]
// 004c92c8: MOV EDX,EAX
// 004c92ca: SHL EAX,0x3
// 004c92cd: SUB EAX,EDX
// 004c92cf: ADD EAX,0x2d76ec4
//   XREF to: 02d76ec4 (DATA)
// 004c92d4: ADD ESP,0xc
// 004c92d7: INC EBX
// 004c92d8: MOV dword ptr [EAX + 0x18],0x3e800000
//   XREF to: 02d76edc (DATA)
// 004c92df: CMP EBX,0x100
// 004c92e5: JL 0x004c92e9
//   XREF to: 004c92e9 (CONDITIONAL_JUMP)
// 004c92e7: XOR EBX,EBX
// 004c92e9: MOV dword ptr [0x02d76ec0],EBX
//   Label: LAB_004c92e9
//   XREF to: 02d76ec0 (WRITE)
// 004c92ef: POP ESI
// 004c92f0: POP EBX
// 004c92f1: RET
