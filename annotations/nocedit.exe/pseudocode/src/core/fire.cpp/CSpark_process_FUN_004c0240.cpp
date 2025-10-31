// Name: core_fire.cpp_CSpark_process_FUN_004c0240
// Address: 004c0240
// Address Range: [[004c0240, 004c02f6]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSpark_process_FUN_004c0240(CSpark * this_ptr)
// Globals:
//   double DOUBLE_00629c63 = 0.0000152587890625
//   CGame* g_CGamePtr = 02d81a9c
//   int g_GlobalDeltaTimeInt
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_game.cpp_CGame_slamDT_FUN_004e3080
//   core_particle.cpp_CParticle_process_FUN_00545760

#include "nocturne.h"

void __cdecl core_fire_cpp_CSpark_process_FUN_004c0240(CSpark *this_ptr)

{
  longlong lVar1;
  int iVar2;
  float unaff_EBP;
  
  if (this_ptr->first_update_flag == 0) {
    this_ptr->first_update_flag = 1;
  }
  else {
    lVar1 = (longlong)g_GlobalDeltaTimeInt * (longlong)this_ptr->fade_rate;
    lVar1 = (longlong)this_ptr->intensity_target *
            (longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    iVar2 = this_ptr->intensity_current -
            ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    this_ptr->intensity_current = iVar2;
    if (iVar2 < 0) {
      (this_ptr->base).lifetime_remaining = 0.0;
      this_ptr->intensity_current = 0;
    }
  }
  lVar1 = (longlong)this_ptr->fade_rate * (longlong)g_GlobalDeltaTimeInt;
  core_game_cpp_CGame_slamDT_FUN_004e3080
            (g_CGamePtr,
             (float)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (float)DOUBLE_00629c63);
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  core_game_cpp_CGame_slamDT_FUN_004e3080(g_CGamePtr,unaff_EBP);
  return;
}


// Assembly code:
// 004c0240: PUSH EBX
//   Label: core_fire.cpp_CSpark_process_FUN_004c0240
// 004c0241: PUSH EDI
// 004c0242: PUSH EBP
// 004c0243: SUB ESP,0x8
// 004c0246: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004c024a: CMP dword ptr [EBX + 0x40],0x0
// 004c024e: JNZ 0x004c02b9
//   XREF to: 004c02b9 (CONDITIONAL_JUMP)
// 004c0250: MOV dword ptr [EBX + 0x40],0x1
// 004c0257: MOV EAX,[0x0067b654]
//   Label: LAB_004c0257
//   XREF to: 0067b654 (READ)
// 004c025c: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c0262: MOV EDX,dword ptr [0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 004c0268: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004c026b: MOV EAX,dword ptr [EBX + 0x48]
// 004c026e: IMUL EDX
// 004c0270: SHRD EAX,EDX,0x10
// 004c0274: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004c0278: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 004c027c: FMUL double ptr [0x00629c63]
//   XREF to: 00629c63 (READ)
// 004c0282: SUB ESP,0x4
// 004c0285: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c028b: FSTP float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c028e: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 004c028f: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 004c0294: ADD ESP,0x8
// 004c0297: PUSH EBX
// 004c0298: CALL core_particle.cpp_CParticle_process_FUN_00545760
//   XREF to: 00545760 (UNCONDITIONAL_CALL)
// 004c029d: ADD ESP,0x4
// 004c02a0: MOV EBP,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c02a6: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004c02a9: PUSH EBP
//   XREF to: 02d81a9c (DATA)
// 004c02aa: CALL core_game.cpp_CGame_slamDT_FUN_004e3080
//   XREF to: 004e3080 (UNCONDITIONAL_CALL)
// 004c02af: ADD ESP,0x8
// 004c02b2: ADD ESP,0x8
// 004c02b5: POP EBP
// 004c02b6: POP EDI
// 004c02b7: POP EBX
// 004c02b8: RET
// 004c02b9: MOV EAX,[0x02cf6a80]
//   Label: LAB_004c02b9
//   XREF to: 02cf6a80 (READ)
// 004c02be: MOV EDX,dword ptr [EBX + 0x48]
// 004c02c1: MOV ECX,dword ptr [EBX + 0x3c]
// 004c02c4: IMUL EDX
// 004c02c6: SHRD EAX,EDX,0x10
// 004c02ca: MOV EDX,EAX
// 004c02cc: MOV EAX,ECX
// 004c02ce: IMUL EDX
// 004c02d0: SHRD EAX,EDX,0x10
// 004c02d4: MOV ECX,dword ptr [EBX + 0x38]
// 004c02d7: SUB ECX,EAX
// 004c02d9: MOV dword ptr [EBX + 0x38],ECX
// 004c02dc: TEST ECX,ECX
// 004c02de: JGE 0x004c0257
//   XREF to: 004c0257 (CONDITIONAL_JUMP)
// 004c02e4: MOV dword ptr [EBX + 0x18],0x0
// 004c02eb: MOV dword ptr [EBX + 0x38],0x0
// 004c02f2: JMP 0x004c0257
//   XREF to: 004c0257 (UNCONDITIONAL_JUMP)
