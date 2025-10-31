// Name: core_flame.cpp_FUN_004caa80
// Address: 004caa80
// Address Range: [[004caa80, 004cabf2]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004caa80()
// Globals:
//   double DOUBLE_0062a13e = 5
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 g_CFlameClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004caa80(undefined4 param_1, undefined4 param_2)
    */

void core_flame_cpp_FUN_004caa80(void)

{
  float fVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  float fVar3;
  CDemonActor *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack00000010;
  float fStack_24;
  
  this_ptr = g_CDemonRendererPtr;
  pCVar4 = in_stack_00000004 + 1;
  (pCVar4->metadata).field3_0x1c[4] = '\0';
  (pCVar4->metadata).field3_0x1c[5] = '\0';
  (pCVar4->metadata).field3_0x1c[6] = '\0';
  (pCVar4->metadata).field3_0x1c[7] = '\0';
  in_stack_00000004[1].metadata.runtime_flags = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if ((iVar2 == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr_00 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd0);
    fStack_24 = 7.040803e-39;
    fVar3 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    in_stack_00000004[1].metadata.runtime_vector2.y = fVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    if ((in_stack_00000004[1].metadata.runtime_vector2.y != 0.0) &&
       (((1.0 < SQRT(*(float *)(in_stack_00000004[1].actor_name + 8) *
                     *(float *)(in_stack_00000004[1].actor_name + 8) +
                     *(float *)in_stack_00000004[1].actor_name *
                     *(float *)in_stack_00000004[1].actor_name +
                     *(float *)(in_stack_00000004[1].actor_name + 4) *
                     *(float *)(in_stack_00000004[1].actor_name + 4)) &&
         (0.0 < in_stack_00000004[1].orient_matrix.m[2].x)) &&
        (in_stack_00000004[1].orient_matrix.m[1].z == 0.0)))) {
      iVar2 = 0;
      fStack00000010 = 0.0;
      for (iVar5 = 0; iVar5 < (int)g_CDemonSetPtr->actor_list_ptr; iVar5 = iVar5 + 1) {
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                            g_CFlameClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          fVar3 = (in_stack_00000004->location).position.x - (pCVar4->location).position.x;
          fVar1 = (in_stack_00000004->location).position.y - (pCVar4->location).position.y;
          fStack00000010 = (in_stack_00000004->location).position.z - (pCVar4->location).position.z;
          if ((SQRT(fStack00000010 * fStack00000010 + fVar3 * fVar3 + fVar1 * fVar1) <
               (float)DOUBLE_0062a13e) && (*(int *)(pCVar4[1].metadata.field3_0x1c + 4) == 1)) {
            return;
          }
        }
        iVar2 = iVar2 + 4;
      }
      if (fStack00000010 == 0.0) {
        in_stack_00000004 = in_stack_00000004 + 1;
        (in_stack_00000004->metadata).field3_0x1c[4] = '\x01';
        (in_stack_00000004->metadata).field3_0x1c[5] = '\0';
        (in_stack_00000004->metadata).field3_0x1c[6] = '\0';
        (in_stack_00000004->metadata).field3_0x1c[7] = '\0';
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004caa80: PUSH EBX
//   Label: core_flame.cpp_FUN_004caa80
// 004caa81: PUSH ESI
// 004caa82: PUSH EDI
// 004caa83: PUSH EBP
// 004caa84: MOV EBP,ESP
// 004caa86: SUB ESP,0x28
// 004caa89: AND ESP,0xfffffff8
// 004caa8c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004caa8f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004caa95: MOV dword ptr [EAX + 0x2a0],0x0
// 004caa9f: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004caaa0: MOV dword ptr [EAX + 0x298],0x0
// 004caaaa: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004caaaf: ADD ESP,0x4
// 004caab2: TEST EAX,EAX
// 004caab4: JNZ 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004caab6: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 004caaba: JNZ 0x004caac3
//   XREF to: 004caac3 (CONDITIONAL_JUMP)
// 004caabc: MOV ESP,EBP
//   Label: LAB_004caabc
// 004caabe: POP EBP
// 004caabf: POP EDI
// 004caac0: POP ESI
// 004caac1: POP EBX
// 004caac2: RET
// 004caac3: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_004caac3
//   XREF to: Stack[0x4] (READ)
// 004caac6: PUSH EBX
// 004caac7: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004caacc: ADD ESP,0x4
// 004caacf: MOV EDX,ESP
// 004caad1: PUSH EDX
// 004caad2: MOV EAX,dword ptr [EBX + 0x154]
// 004caad8: PUSH EBX
// 004caad9: CALL dword ptr [EAX + 0x14]
// 004caadc: ADD ESP,0x8
// 004caadf: PUSH EAX
// 004caae0: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004caae5: ADD ESP,0x4
// 004caae8: PUSH EBX
// 004caae9: MOV dword ptr [EBX + 0x290],EAX
// 004caaef: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004caaf4: MOV EDX,dword ptr [EBX + 0x290]
// 004caafa: ADD ESP,0x4
// 004caafd: TEST EDX,EDX
// 004caaff: JZ 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004cab01: FLD float ptr [EBX + 0x15c]
// 004cab07: FMUL ST0
// 004cab09: FLD float ptr [EBX + 0x158]
// 004cab0f: FMUL ST0
// 004cab11: FADDP
// 004cab13: FLD float ptr [EBX + 0x160]
// 004cab19: FMUL ST0
// 004cab1b: FADDP
// 004cab1d: FSQRT
// 004cab1f: FLD1
// 004cab21: FCOMPP
// 004cab23: FNSTSW AX
// 004cab25: SAHF
// 004cab26: JNC 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004cab28: FLD float ptr [EBX + 0x1ac]
// 004cab2e: FLDZ
// 004cab30: FCOMPP
// 004cab32: FNSTSW AX
// 004cab34: SAHF
// 004cab35: JNC 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004cab37: MOV ECX,dword ptr [EBX + 0x1a8]
// 004cab3d: TEST ECX,ECX
// 004cab3f: JNZ 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004cab45: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cab48: MOV dword ptr [ESP + 0x24],ECX
// 004cab4c: XOR EBX,EBX
// 004cab4e: XOR EDI,EDI
// 004cab50: ADD ESI,0x20
// 004cab53: MOV EAX,[0x006810c8]
//   Label: LAB_004cab53
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004cab58: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004cab5e: JL 0x004cab85
//   XREF to: 004cab85 (CONDITIONAL_JUMP)
// 004cab60: CMP dword ptr [ESP + 0x24],0x0
// 004cab65: JNZ 0x004caabc
//   XREF to: 004caabc (CONDITIONAL_JUMP)
// 004cab6b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cab6e: MOV dword ptr [EAX + 0x2a0],0x1
// 004cab78: MOV ESP,EBP
// 004cab7a: POP EBP
// 004cab7b: POP EDI
// 004cab7c: POP ESI
// 004cab7d: POP EBX
// 004cab7e: RET
// 004cab7f: INC EDI
//   Label: LAB_004cab7f
// 004cab80: ADD EBX,0x4
// 004cab83: JMP 0x004cab53
//   XREF to: 004cab53 (UNCONDITIONAL_JUMP)
// 004cab85: MOV EDX,dword ptr [0x02d7a6fc]
//   Label: LAB_004cab85
//   XREF to: 02d7a6fc (READ)
// 004cab8b: PUSH EDX
// 004cab8c: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004cab93: PUSH ECX
// 004cab94: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004cab99: MOV EDX,EAX
// 004cab9b: ADD ESP,0x8
// 004cab9e: TEST EAX,EAX
// 004caba0: JZ 0x004cab7f
//   XREF to: 004cab7f (CONDITIONAL_JUMP)
// 004caba2: FLD float ptr [ESI]
// 004caba4: FSUB float ptr [EAX + 0x20]
// 004caba7: FSTP float ptr [ESP + 0x18]
// 004cabab: FLD float ptr [ESI + 0x4]
// 004cabae: FSUB float ptr [EAX + 0x24]
// 004cabb1: FST float ptr [ESP + 0x1c]
// 004cabb5: FMUL float ptr [ESP + 0x1c]
// 004cabb9: FLD float ptr [ESP + 0x18]
// 004cabbd: FMUL ST0
// 004cabbf: FLD float ptr [ESI + 0x8]
// 004cabc2: FSUB float ptr [EAX + 0x28]
// 004cabc5: FXCH
// 004cabc7: FADDP ST2,ST0
// 004cabc9: FST float ptr [ESP + 0x20]
// 004cabcd: FMUL float ptr [ESP + 0x20]
// 004cabd1: FADDP
// 004cabd3: ADD EAX,0x20
// 004cabd6: FSQRT
// 004cabd8: FCOMP double ptr [0x0062a13e]
//   XREF to: 0062a13e (READ)
// 004cabde: FNSTSW AX
// 004cabe0: SAHF
// 004cabe1: JNC 0x004cab7f
//   XREF to: 004cab7f (CONDITIONAL_JUMP)
// 004cabe3: CMP dword ptr [EDX + 0x2a0],0x1
// 004cabea: JNZ 0x004cab7f
//   XREF to: 004cab7f (CONDITIONAL_JUMP)
// 004cabec: MOV ESP,EBP
// 004cabee: POP EBP
// 004cabef: POP EDI
// 004cabf0: POP ESI
// 004cabf1: POP EBX
// 004cabf2: RET
