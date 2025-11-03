// Name: core_bugs.cpp_FUN_004251b0
// Address: 004251b0
// Address Range: [[004251b0, 004252f7] [00425314, 0042533d]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004251b0()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_set.cpp_CDemonSet_FUN_00570cd0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004251b0(undefined4 param_1) */

CDemonActor ** core_bugs_cpp_FUN_004251b0(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CVector3i *rotation;
  BADSPACEBASE *in_ESP;
  CVector3i *position;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  CDemonActor **in_stack_00000014;
  int in_stack_00000024;
  CDemonActor *in_stack_00000028;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (*(int *)(in_stack_00000004 + 0x240c) == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000008);
      this_ptr = (*in_stack_00000008->vtable->getBoundingBox)
                           (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc4);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      if (iVar1 != 0) {
        iVar1 = 0;
        if (0 < in_stack_00000008[0x8d].field26_0x148) {
          in_stack_00000014 = &in_stack_00000008[0x8d].next_actor;
          position = (CVector3i *)(in_stack_00000008[0x8e].actor_name + 8);
          rotation = (CVector3i *)&in_stack_00000008[0x8d].vtable;
          do {
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr,position,rotation);
            fStack_10 = (in_stack_00000008->location).position.x + (float)rotation->x;
            fStack_c = (in_stack_00000008->location).position.y + (float)rotation->y;
            fStack_8 = (in_stack_00000008->location).position.z + (float)rotation->z;
            if (&fStack_1c != &fStack_10) {
              fStack_1c = fStack_10;
              fStack_18 = fStack_c;
              fStack_14 = fStack_8;
            }
            core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      ((CKeyFramedModelInstance *)
                       (*(int *)(in_stack_00000008[0xd8].create_event + 0x14) * 0x17c +
                       (int)in_stack_00000008),0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
            position = (CVector3i *)&position[5].y;
            iVar1 = iVar1 + 1;
            rotation = (CVector3i *)&rotation[5].y;
          } while (iVar1 < *(int *)(in_stack_00000024 + 0xbec0));
        }
        core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000028);
      return in_stack_00000014;
    }
  }
  return (CDemonActor **)0x0;
}


// Assembly code:
// 004251b0: PUSH EBP
//   Label: core_bugs.cpp_FUN_004251b0
// 004251b1: SUB ESP,0x40
// 004251b4: MOV EAX,dword ptr [ESP + 0x48]
// 004251b8: CMP dword ptr [EAX + 0x240c],0x0
// 004251bf: JZ 0x004251c8
//   XREF to: 004251c8 (CONDITIONAL_JUMP)
// 004251c1: XOR EAX,EAX
//   Label: LAB_004251c1
// 004251c3: ADD ESP,0x40
// 004251c6: POP EBP
// 004251c7: RET
// 004251c8: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004251c8
//   XREF to: 006703ec (READ)
// 004251ce: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004251cf: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004251d4: ADD ESP,0x4
// 004251d7: TEST EAX,EAX
// 004251d9: JNZ 0x004251c1
//   XREF to: 004251c1 (CONDITIONAL_JUMP)
// 004251db: PUSH EBX
// 004251dc: MOV EBX,dword ptr [ESP + 0x4c]
// 004251e0: PUSH EBX
// 004251e1: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004251e6: ADD ESP,0x4
// 004251e9: LEA EDX,[ESP + 0x4]
// 004251ed: PUSH EDX
// 004251ee: MOV EAX,dword ptr [EBX + 0x154]
// 004251f4: PUSH EBX
// 004251f5: CALL dword ptr [EAX + 0x14]
// 004251f8: ADD ESP,0x8
// 004251fb: PUSH EAX
// 004251fc: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00425201: ADD ESP,0x4
// 00425204: MOV dword ptr [ESP + 0x34],EAX
// 00425208: TEST EAX,EAX
// 0042520a: JZ 0x00425327
//   XREF to: 00425327 (CONDITIONAL_JUMP)
// 00425210: PUSH EDI
// 00425211: PUSH ESI
// 00425212: MOV EDI,dword ptr [EBX + 0xbec0]
// 00425218: XOR ESI,ESI
// 0042521a: TEST EDI,EDI
// 0042521c: JLE 0x00425314
//   XREF to: 00425314 (CONDITIONAL_JUMP)
// 00425222: LEA EAX,[EBX + 0x122c8]
// 00425228: MOV dword ptr [ESP + 0x40],EAX
// 0042522c: LEA EAX,[EBX + 0xbec4]
// 00425232: LEA EDI,[EBX + 0x20]
// 00425235: LEA EBP,[EBX + 0xbed8]
// 0042523b: MOV dword ptr [ESP + 0x44],EAX
// 0042523f: ADD EBX,0xbecc
// 00425245: MOV EDX,dword ptr [ESP + 0x44]
//   Label: LAB_00425245
// 00425249: MOV EAX,ESI
// 0042524b: PUSH EBX
// 0042524c: SHL EAX,0x6
// 0042524f: PUSH EBP
// 00425250: ADD EDX,EAX
// 00425252: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00425257: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00425258: MOV dword ptr [ESP + 0x54],EDX
// 0042525c: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00425261: FLD float ptr [EDI]
// 00425263: FADD float ptr [EBX]
// 00425265: ADD ESP,0xc
// 00425268: FSTP float ptr [ESP + 0x30]
// 0042526c: FLD float ptr [EDI + 0x4]
// 0042526f: FADD float ptr [EBX + 0x4]
// 00425272: LEA EDX,[ESP + 0x30]
// 00425276: FSTP float ptr [ESP + 0x34]
// 0042527a: FLD float ptr [EDI + 0x8]
// 0042527d: FADD float ptr [EBX + 0x8]
// 00425280: LEA EAX,[ESP + 0x24]
// 00425284: FSTP float ptr [ESP + 0x38]
// 00425288: CMP EAX,EDX
// 0042528a: JZ 0x004252a4
//   XREF to: 004252a4 (CONDITIONAL_JUMP)
// 0042528c: MOV EAX,dword ptr [ESP + 0x30]
// 00425290: MOV dword ptr [ESP + 0x24],EAX
// 00425294: MOV EAX,dword ptr [ESP + 0x34]
// 00425298: MOV dword ptr [ESP + 0x28],EAX
// 0042529c: MOV EAX,dword ptr [ESP + 0x38]
// 004252a0: MOV dword ptr [ESP + 0x2c],EAX
// 004252a4: LEA EAX,[ESP + 0x24]
//   Label: LAB_004252a4
// 004252a8: PUSH EAX
// 004252a9: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004252ae: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004252af: CALL core_set.cpp_CDemonSet_FUN_00570cd0
//   XREF to: 00570cd0 (UNCONDITIONAL_CALL)
// 004252b4: ADD ESP,0x8
// 004252b7: PUSH 0xffff
// 004252bc: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004252c2: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004252c3: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004252c8: ADD ESP,0x8
// 004252cb: MOV EAX,dword ptr [ESP + 0x48]
// 004252cf: IMUL EAX,dword ptr [EAX + 0x4],0x17c
// 004252d6: MOV EDX,dword ptr [ESP + 0x40]
// 004252da: PUSH 0x2e7
// 004252df: ADD EAX,EDX
// 004252e1: PUSH 0x0
// 004252e3: PUSH EAX
// 004252e4: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004252e9: ADD ESP,0xc
// 004252ec: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004252f2: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004252f3: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00425314: PUSH 0x0
//   Label: LAB_00425314
// 00425316: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042531c: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0042531d: CALL core_set.cpp_CDemonSet_FUN_00570cd0
//   XREF to: 00570cd0 (UNCONDITIONAL_CALL)
// 00425322: ADD ESP,0x8
// 00425325: POP ESI
// 00425326: POP EDI
// 00425327: MOV EDX,dword ptr [ESP + 0x4c]
//   Label: LAB_00425327
// 0042532b: PUSH EDX
// 0042532c: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00425331: ADD ESP,0x4
// 00425334: MOV EAX,dword ptr [ESP + 0x34]
// 00425338: POP EBX
// 00425339: ADD ESP,0x40
// 0042533c: POP EBP
// 0042533d: RET
