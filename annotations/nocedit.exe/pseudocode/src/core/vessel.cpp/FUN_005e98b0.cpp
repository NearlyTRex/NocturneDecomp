// Name: core_vessel.cpp_FUN_005e98b0
// Address: 005e98b0
// Address Range: [[005e98b0, 005e99ff] [005e9a01, 005e9a79]]
// Convention: __cdecl
// Signature: int core_vessel.cpp_FUN_005e98b0(CCryptVessel * this_ptr)
// Globals:
//   TerminatedCString s_MENUCLD2_RAW_00657069
//   undefined4 s_ENUCLD2.RAW_0065706a
//   undefined4 s_NUCLD2.RAW_0065706b
//   undefined4 s_UCLD2.RAW_0065706c
//   TerminatedCString s_BWATER_d_RAW_00657076
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_flame.cpp_FUN_004ca110
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

int __cdecl core_vessel_cpp_FUN_005e98b0(CCryptVessel *this_ptr)

{
  char cVar1;
  CKeyFramedModel *pCVar2;
  undefined4 extraout_EDX;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  
  if (*(int *)(this_ptr->field14_0x3c0 + 0x428) == 0) {
    return 0;
  }
  if (this_ptr->visual_type == 1) {
    core_flame_cpp_FUN_004ca110();
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->base_actor).location.position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->base_actor).orient,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)0x400ccccd,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  if (this_ptr->visual_type == 2) {
    dVar5 = crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44(extraout_EDX,
                                        (CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac)
                                       ));
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84(dVar5,0));
    crt_stdio_c_sprintf_FUN_005fdbd0
              (pCVar2->texture_list[0].base.texture_name,"BWATER%d.RAW");
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,48000);
  }
  else {
    pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                       ((CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac));
    pcVar3 = "MENUCLD2.RAW";
    pcVar4 = pCVar2->texture_list[0].base.texture_name;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    if (this_ptr->visual_type == 0) {
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    }
    else {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x4000);
    }
  }
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->field14_0x3c0 + 0x2ac),0.0,0x267);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return 1;
}


// Assembly code:
// 005e98b0: PUSH EBX
//   Label: core_vessel.cpp_FUN_005e98b0
// 005e98b1: PUSH ESI
// 005e98b2: PUSH EDI
// 005e98b3: PUSH EBP
// 005e98b4: MOV EBP,ESP
// 005e98b6: SUB ESP,0x1c
// 005e98b9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005e98bc: CMP dword ptr [EBX + 0x7e8],0x0
// 005e98c3: JZ 0x005e9a01
//   XREF to: 005e9a01 (CONDITIONAL_JUMP)
// 005e98c9: CMP dword ptr [EBX + 0x3b4],0x1
// 005e98d0: JZ 0x005e9a0a
//   XREF to: 005e9a0a (CONDITIONAL_JUMP)
// 005e98d6: LEA EAX,[EBX + 0x20]
//   Label: LAB_005e98d6
// 005e98d9: PUSH EAX
// 005e98da: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e98e0: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005e98e1: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005e98e6: ADD ESP,0x8
// 005e98e9: PUSH 0x0
// 005e98eb: LEA EAX,[EBX + 0x30]
// 005e98ee: PUSH EAX
// 005e98ef: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e98f5: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005e98f6: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e98fb: XOR EAX,EAX
// 005e98fd: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005e9900: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005e9903: MOV ESI,0x400ccccd
// 005e9908: MOV EAX,dword ptr [EBX + 0x668]
// 005e990e: ADD ESP,0xc
// 005e9911: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005e9914: LEA EAX,[EBP + -0x1c]
//   XREF to: Stack[-0x2c] (DATA)
// 005e9917: XOR EDX,EDX
// 005e9919: PUSH EAX
// 005e991a: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 005e991d: XOR ECX,ECX
// 005e991f: PUSH EAX
// 005e9920: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005e9925: MOV dword ptr [EBP + -0x1c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005e9928: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005e9929: MOV dword ptr [EBP + -0x18],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005e992c: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005e992f: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005e9934: ADD ESP,0xc
// 005e9937: PUSH 0xffff
// 005e993c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e9942: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e9943: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005e9948: ADD ESP,0x8
// 005e994b: MOV ECX,dword ptr [EBX + 0x3b4]
// 005e9951: LEA EAX,[EBX + 0x66c]
// 005e9957: CMP ECX,0x2
// 005e995a: JZ 0x005e9a33
//   XREF to: 005e9a33 (CONDITIONAL_JUMP)
// 005e9960: PUSH EAX
// 005e9961: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e9966: ADD ESP,0x4
// 005e9969: MOV ESI,0x657069
//   XREF to: 00657069 (DATA)
// 005e996e: LEA EDI,[EAX + 0x12c]
// 005e9974: PUSH EDI
// 005e9975: MOV AL,byte ptr [ESI]
//   Label: LAB_005e9975
//   XREF to: 00657069 (READ)
//   XREF to: 0065706b (READ)
// 005e9977: MOV byte ptr [EDI],AL
// 005e9979: CMP AL,0x0
// 005e997b: JZ 0x005e998d
//   XREF to: 005e998d (CONDITIONAL_JUMP)
// 005e997d: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0065706a (READ)
//   XREF to: 0065706c (READ)
// 005e9980: ADD ESI,0x2
// 005e9983: MOV byte ptr [EDI + 0x1],AL
// 005e9986: ADD EDI,0x2
// 005e9989: CMP AL,0x0
// 005e998b: JNZ 0x005e9975
//   XREF to: 005e9975 (CONDITIONAL_JUMP)
// 005e998d: POP EDI
//   Label: LAB_005e998d
// 005e998e: CMP dword ptr [EBX + 0x3b4],0x0
// 005e9995: JNZ 0x005e9a1e
//   XREF to: 005e9a1e (CONDITIONAL_JUMP)
// 005e999b: PUSH 0x1
// 005e999d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e99a3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005e99a4: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005e99a9: ADD ESP,0x8
//   Label: LAB_005e99a9
// 005e99ac: PUSH 0x267
// 005e99b1: ADD EBX,0x66c
// 005e99b7: PUSH 0x0
// 005e99b9: PUSH EBX
// 005e99ba: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 005e99bf: ADD ESP,0xc
// 005e99c2: PUSH 0x0
// 005e99c4: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e99ca: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005e99cb: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005e99d0: ADD ESP,0x8
// 005e99d3: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e99d9: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005e99da: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005e99df: ADD ESP,0x4
// 005e99e2: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e99e8: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005e99e9: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005e99ee: MOV EAX,0x1
// 005e99f3: ADD ESP,0x4
// 005e99f6: MOV ESP,EBP
// 005e99f8: POP EBP
// 005e99f9: POP EDI
// 005e99fa: POP ESI
// 005e99fb: POP EBX
// 005e99fc: LEA EAX,[EAX]
// 005e9a01: XOR EAX,EAX
//   Label: LAB_005e9a01
// 005e9a03: MOV ESP,EBP
// 005e9a05: POP EBP
// 005e9a06: POP EDI
// 005e9a07: POP ESI
// 005e9a08: POP EBX
// 005e9a09: RET
// 005e9a0a: LEA EAX,[EBX + 0x3c4]
//   Label: LAB_005e9a0a
// 005e9a10: PUSH EAX
// 005e9a11: CALL core_flame.cpp_FUN_004ca110
//   XREF to: 004ca110 (UNCONDITIONAL_CALL)
// 005e9a16: ADD ESP,0x4
// 005e9a19: JMP 0x005e98d6
//   XREF to: 005e98d6 (UNCONDITIONAL_JUMP)
// 005e9a1e: PUSH 0x4000
//   Label: LAB_005e9a1e
// 005e9a23: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005e9a28: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005e9a29: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005e9a2e: JMP 0x005e99a9
//   XREF to: 005e99a9 (UNCONDITIONAL_JUMP)
// 005e9a33: FLD float ptr [EBX + 0x7ec]
//   Label: LAB_005e9a33
// 005e9a39: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e9a3e: PUSH EAX
// 005e9a3f: FISTP dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 005e9a42: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e9a47: MOV EDI,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005e9a4a: ADD ESP,0x4
// 005e9a4d: AND EDI,0xf
// 005e9a50: PUSH EDI
// 005e9a51: PUSH 0x657076
//   XREF to: 00657076 (DATA)
// 005e9a56: ADD EAX,0x12c
// 005e9a5b: PUSH EAX
// 005e9a5c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005e9a61: ADD ESP,0xc
// 005e9a64: PUSH 0xbb80
// 005e9a69: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005e9a6f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005e9a70: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005e9a75: JMP 0x005e99a9
//   XREF to: 005e99a9 (UNCONDITIONAL_JUMP)
