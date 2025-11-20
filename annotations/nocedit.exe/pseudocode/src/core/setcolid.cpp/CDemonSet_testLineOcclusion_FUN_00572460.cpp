// Name: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
// Address: 00572460
// Address Range: [[00572460, 005724d8]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
// Cross-references:
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d939 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d70c8 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b2fd0 (005b2fd0) at 005b334b [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b2855 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c40e9 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9716 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRaytrace g_CDemonRaytraceInstance
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
          (CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  int iVar1;
  float fVar2;
  
  iVar1 = core_dtrace_cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
                    (&g_CDemonRaytraceInstance,start_pos,end_pos);
  if (iVar1 == 0) {
    fVar2 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
                      (this_ptr,-1.0,start_pos,end_pos,1.01);
    if ((fVar2 < 0.0) || (1.0 < fVar2)) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 00572460: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
// 00572461: PUSH ESI
// 00572462: PUSH EDI
// 00572463: PUSH EBP
// 00572464: MOV EBP,ESP
// 00572466: SUB ESP,0xc
// 00572469: AND ESP,0xfffffff8
// 0057246c: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0057246f: PUSH EDX
// 00572470: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00572473: PUSH ECX
// 00572474: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00572479: CALL core_dtrace.cpp_CDemonRaytrace_rayVoxelGridTest_FUN_00496220
//   XREF to: 00496220 (UNCONDITIONAL_CALL)
// 0057247e: ADD ESP,0xc
// 00572481: TEST EAX,EAX
// 00572483: JZ 0x00572491
//   XREF to: 00572491 (CONDITIONAL_JUMP)
// 00572485: MOV EAX,0x1
//   Label: LAB_00572485
// 0057248a: MOV ESP,EBP
// 0057248c: POP EBP
// 0057248d: POP EDI
// 0057248e: POP ESI
// 0057248f: POP EBX
// 00572490: RET
// 00572491: MOV EBX,dword ptr [EBP + 0x1c]
//   Label: LAB_00572491
//   XREF to: Stack[0xc] (READ)
// 00572494: PUSH 0x3f8147ae
// 00572499: PUSH EBX
// 0057249a: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057249d: PUSH ESI
// 0057249e: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005724a1: PUSH 0xbf800000
// 005724a6: PUSH EDI
// 005724a7: CALL core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10
//   XREF to: 00572a10 (UNCONDITIONAL_CALL)
// 005724ac: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005724b0: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x18] (READ)
// 005724b4: ADD ESP,0x14
// 005724b7: FLDZ
// 005724b9: FXCH
// 005724bb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005724be: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005724c1: FNSTSW AX
// 005724c3: SAHF
// 005724c4: JA 0x005724d0
//   XREF to: 005724d0 (CONDITIONAL_JUMP)
// 005724c6: FLD1
// 005724c8: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005724cb: FNSTSW AX
// 005724cd: SAHF
// 005724ce: JNC 0x00572485
//   XREF to: 00572485 (CONDITIONAL_JUMP)
// 005724d0: XOR EAX,EAX
//   Label: LAB_005724d0
// 005724d2: MOV ESP,EBP
// 005724d4: POP EBP
// 005724d5: POP EDI
// 005724d6: POP ESI
// 005724d7: POP EBX
// 005724d8: RET
