// Name: core_fire.cpp_CFireball_onCollision_FUN_004c1690
// Address: 004c1690
// Address Range: [[004c1690, 004c17bb]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireball_onCollision_FUN_004c1690(CFireball * this_ptr, CVector3f * collision_normal)
// Globals:
//   TerminatedCString s_rock_x_wav_00629cb3
//   TerminatedCString s_rock_x_wav_00629cbe
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CFireEffect g_CFireEffectInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c79d0
//   core_fire.cpp_CFireEffect_FUN_004c7db0
//   core_set.cpp_CDemonSet_FUN_00570fa0
//   sound_sndmain.cpp_FUN_005a9c40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

int __cdecl
core_fire_cpp_CFireball_onCollision_FUN_004c1690(CFireball *this_ptr,CVector3f *collision_normal)

{
  int iVar1;
  
  sound_sndmain_cpp_FUN_005a9c40();
  if (this_ptr->lighting_active == 0) {
    iVar1 = 0;
    do {
      core_fire_cpp_CFireEffect_FUN_004c7db0(g_CFireEffectPtr);
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 8);
    core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
  }
  else {
    if (this_ptr->lighting_active != 2) {
      return 0;
    }
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
    } while (iVar1 < 8);
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
              ((double)(this_ptr->base).position.x,(double)(this_ptr->base).position.y,
               (double)(this_ptr->base).position.z);
    sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(0.8);
  }
  sound_sndmain_cpp_startSfx_FUN_005a8e90();
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return 1;
}


// Assembly code:
// 004c1690: PUSH EBX
//   Label: core_fire.cpp_CFireball_onCollision_FUN_004c1690
// 004c1691: PUSH ESI
// 004c1692: PUSH EDI
// 004c1693: PUSH EBP
// 004c1694: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c1698: MOV EDX,dword ptr [EBX + 0x58]
// 004c169b: PUSH EDX
// 004c169c: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004c16a1: MOV ECX,dword ptr [EBX + 0x44]
// 004c16a4: ADD ESP,0x4
// 004c16a7: TEST ECX,ECX
// 004c16a9: JNZ 0x004c174d
//   XREF to: 004c174d (CONDITIONAL_JUMP)
// 004c16af: XOR ESI,ESI
// 004c16b1: XOR EDI,EDI
// 004c16b3: PUSH EDI
//   Label: LAB_004c16b3
// 004c16b4: PUSH 0x1
// 004c16b6: PUSH EDI
// 004c16b7: PUSH EBX
// 004c16b8: MOV EAX,[0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c16bd: PUSH EAX
//   XREF to: 02d12db0 (DATA)
// 004c16be: CALL core_fire.cpp_CFireEffect_FUN_004c7db0
//   XREF to: 004c7db0 (UNCONDITIONAL_CALL)
// 004c16c3: ADD ESP,0x14
// 004c16c6: PUSH 0xffff
// 004c16cb: PUSH EDI
// 004c16cc: PUSH 0x10000
// 004c16d1: PUSH 0x10000
// 004c16d6: PUSH EDI
// 004c16d7: PUSH EBX
// 004c16d8: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c16de: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004c16df: INC ESI
// 004c16e0: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c16e5: ADD ESP,0x1c
// 004c16e8: CMP ESI,0x8
// 004c16eb: JL 0x004c16b3
//   XREF to: 004c16b3 (CONDITIONAL_JUMP)
// 004c16ed: PUSH 0x3f800000
// 004c16f2: PUSH 0x0
// 004c16f4: PUSH 0x0
// 004c16f6: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004c16fc: PUSH 0x42c80000
// 004c1701: PUSH ECX
//   XREF to: 03114278 (DATA)
// 004c1702: CALL core_set.cpp_CDemonSet_FUN_00570fa0
//   XREF to: 00570fa0 (UNCONDITIONAL_CALL)
// 004c1707: ADD ESP,0x14
// 004c170a: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004c170f: SUB ESP,0x8
// 004c1712: FLD float ptr [EBX + 0x8]
// 004c1715: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c1718: SUB ESP,0x8
// 004c171b: FLD float ptr [EBX + 0x4]
// 004c171e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c1721: SUB ESP,0x8
// 004c1724: FLD float ptr [EBX]
// 004c1726: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c1729: CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 004c172e: ADD ESP,0x18
// 004c1731: PUSH 0x629cb3
//   XREF to: 00629cb3 (DATA)
// 004c1736: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   Label: LAB_004c1736
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 004c173b: ADD ESP,0x4
// 004c173e: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 004c1743: MOV EAX,0x1
// 004c1748: POP EBP
// 004c1749: POP EDI
// 004c174a: POP ESI
// 004c174b: POP EBX
// 004c174c: RET
// 004c174d: CMP ECX,0x2
//   Label: LAB_004c174d
// 004c1750: JNZ 0x004c17b5
//   XREF to: 004c17b5 (CONDITIONAL_JUMP)
// 004c1752: XOR ESI,ESI
// 004c1754: MOV EDI,0x10000
// 004c1759: PUSH 0xffff
//   Label: LAB_004c1759
// 004c175e: PUSH 0x2
// 004c1760: PUSH EDI
// 004c1761: PUSH EDI
// 004c1762: PUSH 0x0
// 004c1764: PUSH EBX
// 004c1765: MOV EBP,dword ptr [0x0067a3d0]
//   XREF to: 0067a3d0 (READ)
// 004c176b: PUSH EBP
//   XREF to: 02d12db0 (DATA)
// 004c176c: INC ESI
// 004c176d: CALL core_fire.cpp_CFireEffect_FUN_004c79d0
//   XREF to: 004c79d0 (UNCONDITIONAL_CALL)
// 004c1772: ADD ESP,0x1c
// 004c1775: CMP ESI,0x8
// 004c1778: JL 0x004c1759
//   XREF to: 004c1759 (CONDITIONAL_JUMP)
// 004c177a: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004c177f: SUB ESP,0x8
// 004c1782: FLD float ptr [EBX + 0x8]
// 004c1785: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c1788: SUB ESP,0x8
// 004c178b: FLD float ptr [EBX + 0x4]
// 004c178e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c1791: SUB ESP,0x8
// 004c1794: FLD float ptr [EBX]
// 004c1796: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c1799: CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 004c179e: ADD ESP,0x18
// 004c17a1: PUSH 0x3f4ccccd
// 004c17a6: CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 004c17ab: ADD ESP,0x4
// 004c17ae: PUSH 0x629cbe
//   XREF to: 00629cbe (DATA)
// 004c17b3: JMP 0x004c1736
//   XREF to: 004c1736 (UNCONDITIONAL_JUMP)
// 004c17b5: XOR EAX,EAX
//   Label: LAB_004c17b5
// 004c17b7: POP EBP
// 004c17b8: POP EDI
// 004c17b9: POP ESI
// 004c17ba: POP EBX
// 004c17bb: RET
