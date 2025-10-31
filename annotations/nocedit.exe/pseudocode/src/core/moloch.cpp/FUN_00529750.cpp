// Name: core_moloch.cpp_FUN_00529750
// Address: 00529750
// Address Range: [[00529750, 00529873]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_00529750()
// Globals:
//   undefined4 DAT_00661938
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f43978
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_charactr.cpp_CCharacter_FUN_00429aa0
//   core_morph.cpp_FUN_0052b600
//   core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   core_motion.cpp_CMotionController_FUN_0052e700
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_moloch.cpp_FUN_00529750(undefined4 param_1) */

int core_moloch_cpp_FUN_00529750(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  CCharacter *pCStack_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    in_stack_00000004->field13_0x2620[0] = '\0';
    in_stack_00000004->field13_0x2620[1] = '\0';
    in_stack_00000004->field13_0x2620[2] = '\0';
    in_stack_00000004->field13_0x2620[3] = '\0';
  }
  if (*(int *)in_stack_00000004->field2_0x240c == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&in_stack_00000004->base_actor);
    this_ptr = (*((in_stack_00000004->base_actor).metadata.vtable)->getBoundingBox)
                         (&in_stack_00000004->base_actor,(CBoundingBox3D *)&pCStack_14);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
    if (iVar1 != 0) {
      iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x77ac);
      in_stack_00000004->field13_0x2620[0] = '\x01';
      in_stack_00000004->field13_0x2620[1] = '\0';
      in_stack_00000004->field13_0x2620[2] = '\0';
      in_stack_00000004->field13_0x2620[3] = '\0';
      if (iVar2 == 0) {
        core_charactr_cpp_CCharacter_FUN_00429aa0(in_stack_00000004);
      }
      else {
        pCStack_14 = (CCharacter *)(in_stack_00000004[2].cloth_data + 0x787c);
        core_morph_cpp_FUN_0052b600();
        pCStack_14 = (CCharacter *)0x1;
        core_morph_cpp_FUN_0052b600();
        core_morph_cpp_MorphModelRotatePointsTwice_FUN_0052bae0();
      }
      if (DAT_02f43978 != 0) {
        iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
        if (iVar2 == 0) {
          pCStack_14 = in_stack_00000004;
          core_motion_cpp_CMotionController_FUN_0052e700();
          pCStack_14 = (CCharacter *)0x529842;
          (*((in_stack_00000004->base_actor).metadata.vtable)->renderTargetPoints)
                    (&in_stack_00000004->base_actor);
        }
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&in_stack_00000004->base_actor);
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 00529750: PUSH EBX
//   Label: core_moloch.cpp_FUN_00529750
// 00529751: SUB ESP,0x18
// 00529754: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00529758: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052975e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0052975f: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 00529764: ADD ESP,0x4
// 00529767: TEST EAX,EAX
// 00529769: JZ 0x00529857
//   XREF to: 00529857 (CONDITIONAL_JUMP)
// 0052976f: CMP dword ptr [EBX + 0x240c],0x0
//   Label: LAB_0052976f
// 00529776: JNZ 0x00529862
//   XREF to: 00529862 (CONDITIONAL_JUMP)
// 0052977c: PUSH EDI
// 0052977d: PUSH ESI
// 0052977e: PUSH EBX
// 0052977f: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00529784: ADD ESP,0x4
// 00529787: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 0052978b: PUSH EAX
// 0052978c: MOV ESI,dword ptr [EBX + 0x154]
// 00529792: PUSH EBX
// 00529793: CALL dword ptr [ESI + 0x14]
// 00529796: ADD ESP,0x8
// 00529799: PUSH EAX
// 0052979a: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0052979f: ADD ESP,0x4
// 005297a2: MOV EDI,EAX
// 005297a4: TEST EAX,EAX
// 005297a6: JZ 0x00529845
//   XREF to: 00529845 (CONDITIONAL_JUMP)
// 005297ac: MOV ESI,dword ptr [EBX + 0x21e8c]
// 005297b2: MOV dword ptr [EBX + 0x2620],0x1
// 005297bc: TEST ESI,ESI
// 005297be: JZ 0x00529869
//   XREF to: 00529869 (CONDITIONAL_JUMP)
// 005297c4: PUSH 0x0
// 005297c6: LEA EAX,[EBX + 0x158]
// 005297cc: PUSH EAX
// 005297cd: PUSH 0x0
// 005297cf: LEA ESI,[EBX + 0x21f5c]
// 005297d5: PUSH ESI
// 005297d6: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005297db: ADD ESP,0x10
// 005297de: PUSH 0x0
// 005297e0: LEA EAX,[EBX + 0x1fbd4]
// 005297e6: PUSH EAX
// 005297e7: PUSH 0x1
// 005297e9: PUSH ESI
// 005297ea: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 005297ef: FLD float ptr [EBX + 0x21e90]
// 005297f5: FDIV float ptr [0x00661938]
//   XREF to: 00661938 (READ)
// 005297fb: ADD ESP,0x10
// 005297fe: SUB ESP,0x4
// 00529801: FSTP float ptr [ESP]
// 00529804: PUSH ESI
// 00529805: CALL core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
//   XREF to: 0052bae0 (UNCONDITIONAL_CALL)
// 0052980a: ADD ESP,0x8
// 0052980d: CMP dword ptr [0x02f43978],0x0
//   Label: LAB_0052980d
//   XREF to: 02f43978 (READ)
// 00529814: JZ 0x00529845
//   XREF to: 00529845 (CONDITIONAL_JUMP)
// 00529816: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0052981b: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0052981c: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00529821: ADD ESP,0x4
// 00529824: TEST EAX,EAX
// 00529826: JNZ 0x00529845
//   XREF to: 00529845 (CONDITIONAL_JUMP)
// 00529828: PUSH EBX
// 00529829: LEA EAX,[EBX + 0x158]
// 0052982f: PUSH EAX
// 00529830: CALL core_motion.cpp_CMotionController_FUN_0052e700
//   XREF to: 0052e700 (UNCONDITIONAL_CALL)
// 00529835: ADD ESP,0x8
// 00529838: MOV EAX,dword ptr [EBX + 0x154]
// 0052983e: PUSH EBX
// 0052983f: CALL dword ptr [EAX + 0x50]
// 00529842: ADD ESP,0x4
// 00529845: PUSH EBX
//   Label: LAB_00529845
// 00529846: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0052984b: ADD ESP,0x4
// 0052984e: MOV EAX,EDI
// 00529850: POP ESI
// 00529851: POP EDI
// 00529852: ADD ESP,0x18
// 00529855: POP EBX
// 00529856: RET
// 00529857: MOV dword ptr [EBX + 0x2620],EAX
//   Label: LAB_00529857
// 0052985d: JMP 0x0052976f
//   XREF to: 0052976f (UNCONDITIONAL_JUMP)
// 00529862: XOR EAX,EAX
//   Label: LAB_00529862
// 00529864: ADD ESP,0x18
// 00529867: POP EBX
// 00529868: RET
// 00529869: PUSH EBX
//   Label: LAB_00529869
// 0052986a: CALL core_charactr.cpp_CCharacter_FUN_00429aa0
//   XREF to: 00429aa0 (UNCONDITIONAL_CALL)
// 0052986f: ADD ESP,0x4
// 00529872: JMP 0x0052980d
//   XREF to: 0052980d (UNCONDITIONAL_JUMP)
