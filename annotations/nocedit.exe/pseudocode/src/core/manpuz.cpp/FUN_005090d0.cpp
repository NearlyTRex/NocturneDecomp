// Name: core_manpuz.cpp_FUN_005090d0
// Address: 005090d0
// Address Range: [[005090d0, 005091ca]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005090d0()
// Globals:
//   undefined4 DAT_00660d70
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_manpuz.cpp_FUN_00509bf0
//   core_manpuz.cpp_FUN_00509c60
//   core_manpuz.cpp_FUN_00509d50
//   core_manpuz.cpp_FUN_0050a1f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_005090d0(undefined4 param_1) */

int core_manpuz_cpp_FUN_005090d0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  float fStack_20;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 != 0) {
    in_stack_00000008 = (int)ROUND(g_ZeroVector.x * _DAT_00660d70);
    in_stack_0000000c = (int)ROUND(g_ZeroVector.y * _DAT_00660d70);
    in_stack_00000010 = (int)ROUND(g_ZeroVector.z * _DAT_00660d70);
    fStack_20 = 7.398976e-39;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1000].projected_vertex,
               (CVector3i *)&stack0x00000008);
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_00509bf0();
      core_manpuz_cpp_FUN_00509d50();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
       (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
       iVar2 == 0)) {
      iVar2 = 0;
      do {
        core_manpuz_cpp_FUN_00509c60();
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xc);
    }
    iVar2 = 0;
    do {
      core_manpuz_cpp_FUN_0050a1f0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return iVar1;
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return 0;
}


// Assembly code:
// 005090d0: PUSH ESI
//   Label: core_manpuz.cpp_FUN_005090d0
// 005090d1: PUSH EDI
// 005090d2: SUB ESP,0x24
// 005090d5: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 005090d9: PUSH ESI
// 005090da: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005090df: ADD ESP,0x4
// 005090e2: MOV EDX,ESP
// 005090e4: PUSH EDX
// 005090e5: MOV EAX,dword ptr [ESI + 0x154]
// 005090eb: PUSH ESI
// 005090ec: CALL dword ptr [EAX + 0x14]
// 005090ef: ADD ESP,0x8
// 005090f2: PUSH EAX
// 005090f3: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 005090f8: ADD ESP,0x4
// 005090fb: MOV EDI,EAX
// 005090fd: TEST EAX,EAX
// 005090ff: JNZ 0x00509112
//   XREF to: 00509112 (CONDITIONAL_JUMP)
// 00509101: PUSH ESI
// 00509102: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00509107: ADD ESP,0x4
// 0050910a: MOV EAX,EDI
// 0050910c: ADD ESP,0x24
// 0050910f: POP EDI
// 00509110: POP ESI
// 00509111: RET
// 00509112: PUSH EBX
//   Label: LAB_00509112
// 00509113: LEA EBX,[ESP + 0x1c]
// 00509117: MOV EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 0050911c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00509122: FLD float ptr [EAX]
//   XREF to: 03f87558 (READ)
// 00509124: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 0050912a: FISTP dword ptr [EBX]
// 0050912c: FLD float ptr [EAX + 0x4]
//   XREF to: 03f8755c (READ)
// 0050912f: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509135: FISTP dword ptr [EBX + 0x4]
// 00509138: FLD float ptr [EAX + 0x8]
//   XREF to: 03f87560 (READ)
// 0050913b: FMUL float ptr [0x00660d70]
//   XREF to: 00660d70 (READ)
// 00509141: FISTP dword ptr [EBX + 0x8]
// 00509144: LEA EAX,[ESP + 0x1c]
// 00509148: PUSH EAX
// 00509149: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0050914b: ADD EAX,0xbb80
// 00509150: PUSH EAX
// 00509151: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00509156: ADD ESP,0x8
// 00509159: XOR EBX,EBX
// 0050915b: PUSH EBX
//   Label: LAB_0050915b
// 0050915c: PUSH ESI
// 0050915d: CALL core_manpuz.cpp_FUN_00509bf0
//   XREF to: 00509bf0 (UNCONDITIONAL_CALL)
// 00509162: ADD ESP,0x8
// 00509165: PUSH EBX
// 00509166: PUSH ESI
// 00509167: CALL core_manpuz.cpp_FUN_00509d50
//   XREF to: 00509d50 (UNCONDITIONAL_CALL)
// 0050916c: INC EBX
// 0050916d: ADD ESP,0x8
// 00509170: CMP EBX,0xc
// 00509173: JL 0x0050915b
//   XREF to: 0050915b (CONDITIONAL_JUMP)
// 00509175: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0050917a: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 0050917e: JNZ 0x005091a4
//   XREF to: 005091a4 (CONDITIONAL_JUMP)
// 00509180: XOR EBX,EBX
//   Label: LAB_00509180
// 00509182: PUSH EBX
//   Label: LAB_00509182
// 00509183: PUSH ESI
// 00509184: CALL core_manpuz.cpp_FUN_0050a1f0
//   XREF to: 0050a1f0 (UNCONDITIONAL_CALL)
// 00509189: INC EBX
// 0050918a: ADD ESP,0x8
// 0050918d: CMP EBX,0x2
// 00509190: JL 0x00509182
//   XREF to: 00509182 (CONDITIONAL_JUMP)
// 00509192: POP EBX
// 00509193: PUSH ESI
// 00509194: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00509199: ADD ESP,0x4
// 0050919c: MOV EAX,EDI
// 0050919e: ADD ESP,0x24
// 005091a1: POP EDI
// 005091a2: POP ESI
// 005091a3: RET
// 005091a4: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_005091a4
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 005091aa: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005091ab: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 005091b0: ADD ESP,0x4
// 005091b3: TEST EAX,EAX
// 005091b5: JNZ 0x00509180
//   XREF to: 00509180 (CONDITIONAL_JUMP)
// 005091b7: XOR EBX,EBX
// 005091b9: PUSH EBX
//   Label: LAB_005091b9
// 005091ba: PUSH ESI
// 005091bb: CALL core_manpuz.cpp_FUN_00509c60
//   XREF to: 00509c60 (UNCONDITIONAL_CALL)
// 005091c0: INC EBX
// 005091c1: ADD ESP,0x8
// 005091c4: CMP EBX,0xc
// 005091c7: JL 0x005091b9
//   XREF to: 005091b9 (CONDITIONAL_JUMP)
// 005091c9: JMP 0x00509180
//   XREF to: 00509180 (UNCONDITIONAL_JUMP)
