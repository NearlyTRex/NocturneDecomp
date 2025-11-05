// Name: core_dracbrid.cpp_FUN_00485be0
// Address: 00485be0
// Address Range: [[00485be0, 00485dc0]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00485be0()
// Globals:
//   double DOUBLE_00621b16 = 0.5
//   undefined4 DAT_0065cd88
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00485be0(undefined4 param_1) */

int core_dracbrid_cpp_FUN_00485be0
              (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
              CCharacter *param_5)

{
  int iVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float fStack_20;
  undefined8 uVar3;
  float fVar4;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    param_5->field13_0x2620[0] = '\0';
    param_5->field13_0x2620[1] = '\0';
    param_5->field13_0x2620[2] = '\0';
    param_5->field13_0x2620[3] = '\0';
  }
  if (param_5[1].base_actor.field23_0x124 != 2) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((((iVar2 == 0) || (param_5[1].base_actor.field23_0x124 == 0)) && (iVar1 == 0)) &&
       (*(int *)param_5->field2_0x240c == 0)) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&param_5->base_actor);
      this_ptr = (*((param_5->base_actor).vtable)->getBoundingBox)
                           (&param_5->base_actor,(CBoundingBox3D *)&fStack_20);
      fStack_20 = 6.645305e-39;
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      if (iVar1 != 0) {
        iVar2 = param_5[1].base_actor.field23_0x124;
        param_5->field13_0x2620[0] = '\x01';
        param_5->field13_0x2620[1] = '\0';
        param_5->field13_0x2620[2] = '\0';
        param_5->field13_0x2620[3] = '\0';
        if (iVar2 == 0) {
          if (param_5[1].model.transformed_vertices[1].y == 0.0) {
            core_charactr_cpp_CCharacter_FUN_00429aa0(param_5);
          }
        }
        else {
          if (iVar2 == 1) {
            fVar4 = (1.0 - param_5[1].base_actor.previous_transform_state.position.x) / DAT_0065cd88
            ;
          }
          else {
            fVar4 = ((float)DOUBLE_00621b16 -
                    param_5[1].base_actor.previous_transform_state.position.x) / DAT_0065cd88;
            if (fVar4 < 0.0) {
              fVar4 = 0.0;
            }
          }
          if (0.0 < fVar4) {
            fStack_20 = 6.645571e-39;
            engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
                      (g_CDemonRendererPtr,unaff_ESI);
            engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
                      (g_CDemonRendererPtr,1);
            if ((double)CONCAT44(unaff_EBX,unaff_ESI) <= DOUBLE_00621b16) {
              uVar3._0_4_ = 8.61799e-43;
              uVar3._4_4_ = 1.4013e-45;
            }
            else {
              uVar3._0_4_ = 1.04116e-42;
              uVar3._4_4_ = 1.4013e-45;
            }
            fStack_20 = 6.645678e-39;
            core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                      (&param_5->model,-1,(uint)(float)uVar3,(int)SUB84(uVar3,4),0);
            engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr)
            ;
          }
        }
        if (DAT_02f43978 != 0) {
          iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_FUN_0052e700(&(param_5->model).motion_controller);
            (*((param_5->base_actor).vtable)->renderTargetPoints)(&param_5->base_actor);
          }
        }
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&param_5->base_actor);
      return iVar1;
    }
  }
  return 0;
}


// Assembly code:
// 00485be0: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00485be0
// 00485be1: PUSH ESI
// 00485be2: PUSH EDI
// 00485be3: PUSH EBP
// 00485be4: MOV EBP,ESP
// 00485be6: SUB ESP,0x24
// 00485be9: AND ESP,0xfffffff8
// 00485bec: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00485bef: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00485bf5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00485bf6: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 00485bfb: ADD ESP,0x4
// 00485bfe: MOV ESI,EAX
// 00485c00: TEST EAX,EAX
// 00485c02: JZ 0x00485c16
//   XREF to: 00485c16 (CONDITIONAL_JUMP)
// 00485c04: CMP dword ptr [EBX + 0xbf48],0x2
//   Label: LAB_00485c04
// 00485c0b: JNZ 0x00485c1e
//   XREF to: 00485c1e (CONDITIONAL_JUMP)
// 00485c0d: XOR EAX,EAX
//   Label: LAB_00485c0d
// 00485c0f: MOV ESP,EBP
// 00485c11: POP EBP
// 00485c12: POP EDI
// 00485c13: POP ESI
// 00485c14: POP EBX
// 00485c15: RET
// 00485c16: MOV dword ptr [EBX + 0x2620],EAX
//   Label: LAB_00485c16
// 00485c1c: JMP 0x00485c04
//   XREF to: 00485c04 (UNCONDITIONAL_JUMP)
// 00485c1e: MOV EDI,dword ptr [0x006703ec]
//   Label: LAB_00485c1e
//   XREF to: 006703ec (READ)
// 00485c24: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00485c25: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00485c2a: ADD ESP,0x4
// 00485c2d: TEST EAX,EAX
// 00485c2f: JZ 0x00485c3a
//   XREF to: 00485c3a (CONDITIONAL_JUMP)
// 00485c31: CMP dword ptr [EBX + 0xbf48],0x0
// 00485c38: JNZ 0x00485c0d
//   XREF to: 00485c0d (CONDITIONAL_JUMP)
// 00485c3a: TEST ESI,ESI
//   Label: LAB_00485c3a
// 00485c3c: JNZ 0x00485c0d
//   XREF to: 00485c0d (CONDITIONAL_JUMP)
// 00485c3e: CMP dword ptr [EBX + 0x240c],0x0
// 00485c45: JNZ 0x00485c0d
//   XREF to: 00485c0d (CONDITIONAL_JUMP)
// 00485c47: PUSH EBX
// 00485c48: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00485c4d: ADD ESP,0x4
// 00485c50: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x2c] (DATA)
// 00485c54: PUSH EDX
// 00485c55: MOV EAX,dword ptr [EBX + 0x154]
// 00485c5b: PUSH EBX
// 00485c5c: CALL dword ptr [EAX + 0x14]
// 00485c5f: ADD ESP,0x8
// 00485c62: PUSH EAX
// 00485c63: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00485c68: ADD ESP,0x4
// 00485c6b: MOV ESI,EAX
// 00485c6d: TEST EAX,EAX
// 00485c6f: JZ 0x00485cc7
//   XREF to: 00485cc7 (CONDITIONAL_JUMP)
// 00485c71: MOV ECX,dword ptr [EBX + 0xbf48]
// 00485c77: MOV dword ptr [EBX + 0x2620],0x1
// 00485c81: TEST ECX,ECX
// 00485c83: JNZ 0x00485ce4
//   XREF to: 00485ce4 (CONDITIONAL_JUMP)
// 00485c85: CMP dword ptr [EBX + 0xbfe4],0x0
// 00485c8c: JZ 0x00485cd9
//   XREF to: 00485cd9 (CONDITIONAL_JUMP)
// 00485c8e: CMP dword ptr [0x02f43978],0x0
//   Label: LAB_00485c8e
//   XREF to: 02f43978 (READ)
// 00485c95: JZ 0x00485cc7
//   XREF to: 00485cc7 (CONDITIONAL_JUMP)
// 00485c97: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00485c9d: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00485c9e: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00485ca3: ADD ESP,0x4
// 00485ca6: TEST EAX,EAX
// 00485ca8: JNZ 0x00485cc7
//   XREF to: 00485cc7 (CONDITIONAL_JUMP)
// 00485caa: PUSH EBX
// 00485cab: LEA EAX,[EBX + 0x158]
// 00485cb1: PUSH EAX
// 00485cb2: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00485cb7: ADD ESP,0x8
// 00485cba: MOV EAX,dword ptr [EBX + 0x154]
// 00485cc0: PUSH EBX
// 00485cc1: CALL dword ptr [EAX + 0x50]
// 00485cc4: ADD ESP,0x4
// 00485cc7: PUSH EBX
//   Label: LAB_00485cc7
// 00485cc8: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00485ccd: ADD ESP,0x4
// 00485cd0: MOV EAX,ESI
// 00485cd2: MOV ESP,EBP
// 00485cd4: POP EBP
// 00485cd5: POP EDI
// 00485cd6: POP ESI
// 00485cd7: POP EBX
// 00485cd8: RET
// 00485cd9: PUSH EBX
//   Label: LAB_00485cd9
// 00485cda: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 00485cdf: ADD ESP,0x4
// 00485ce2: JMP 0x00485c8e
//   XREF to: 00485c8e (UNCONDITIONAL_JUMP)
// 00485ce4: CMP ECX,0x1
//   Label: LAB_00485ce4
// 00485ce7: JNZ 0x00485d88
//   XREF to: 00485d88 (CONDITIONAL_JUMP)
// 00485ced: FLD float ptr [EBX + 0xbf4c]
// 00485cf3: FLD1
// 00485cf5: FSUBRP
// 00485cf7: FDIV float ptr [0x0065cd88]
//   XREF to: 0065cd88 (READ)
// 00485cfd: FSTP float ptr [ESP + 0x8]
// 00485d01: FLD float ptr [ESP + 0x8]
//   Label: LAB_00485d01
// 00485d05: FLDZ
// 00485d07: FXCH
// 00485d09: FSTP double ptr [ESP]
// 00485d0c: FCOMP double ptr [ESP]
// 00485d0f: FNSTSW AX
// 00485d11: SAHF
// 00485d12: JNC 0x00485c8e
//   XREF to: 00485c8e (CONDITIONAL_JUMP)
// 00485d18: PUSH 0x0
// 00485d1a: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00485d20: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00485d21: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 00485d26: ADD ESP,0x8
// 00485d29: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00485d2f: PUSH dword ptr [ESP + 0x8]
// 00485d33: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00485d34: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca70
//   XREF to: 0048ca70 (UNCONDITIONAL_CALL)
// 00485d39: ADD ESP,0x8
// 00485d3c: PUSH 0x1
// 00485d3e: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00485d44: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00485d45: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 00485d4a: ADD ESP,0x8
// 00485d4d: LEA EDX,[EBX + 0x158]
// 00485d53: FLD double ptr [ESP]
// 00485d56: FCOMP double ptr [0x00621b16]
//   XREF to: 00621b16 (READ)
// 00485d5c: FNSTSW AX
// 00485d5e: SAHF
// 00485d5f: JBE 0x00485db6
//   XREF to: 00485db6 (CONDITIONAL_JUMP)
// 00485d61: PUSH 0x0
// 00485d63: PUSH 0x1
// 00485d65: PUSH 0x2e7
// 00485d6a: PUSH -0x1
//   Label: LAB_00485d6a
// 00485d6c: PUSH EDX
// 00485d6d: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 00485d72: ADD ESP,0x14
// 00485d75: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00485d7a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00485d7b: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 00485d80: ADD ESP,0x4
// 00485d83: JMP 0x00485c8e
//   XREF to: 00485c8e (UNCONDITIONAL_JUMP)
// 00485d88: FLD float ptr [EBX + 0xbf4c]
//   Label: LAB_00485d88
// 00485d8e: FSUBR double ptr [0x00621b16]
//   XREF to: 00621b16 (READ)
// 00485d94: FDIV float ptr [0x0065cd88]
//   XREF to: 0065cd88 (READ)
// 00485d9a: FST float ptr [ESP + 0x8]
// 00485d9e: FLDZ
// 00485da0: FCOMPP
// 00485da2: FNSTSW AX
// 00485da4: SAHF
// 00485da5: JBE 0x00485d01
//   XREF to: 00485d01 (CONDITIONAL_JUMP)
// 00485dab: XOR EAX,EAX
// 00485dad: MOV dword ptr [ESP + 0x8],EAX
// 00485db1: JMP 0x00485d01
//   XREF to: 00485d01 (UNCONDITIONAL_JUMP)
// 00485db6: PUSH 0x0
//   Label: LAB_00485db6
// 00485db8: PUSH 0x1
// 00485dba: PUSH 0x267
// 00485dbf: JMP 0x00485d6a
//   XREF to: 00485d6a (UNCONDITIONAL_JUMP)
