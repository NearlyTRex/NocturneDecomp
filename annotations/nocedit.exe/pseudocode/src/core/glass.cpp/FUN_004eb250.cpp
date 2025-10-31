// Name: core_glass.cpp_FUN_004eb250
// Address: 004eb250
// Address Range: [[004eb250, 004eb385]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004eb250()
// Globals:
//   double DOUBLE_0062e111 = 0.0000152590218966964
//   double DOUBLE_0062e119 = 0.5
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   int g_CurrentTextureDimension = 0x100
//   CDemonRenderer g_CDemonRendererInstance
//   void* g_CurrentTextureData
// Function calls:
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

void core_glass_cpp_FUN_004eb250(void)

{
  float fVar1;
  float fVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  double value;
  CDemonActor *in_stack_00000004;
  SSurfaceInfo *in_stack_00000008;
  float local_14;
  int iVar5;
  int iVar6;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(in_stack_00000004,in_stack_00000008);
  if (*(int *)(in_stack_00000004[1].create_event + 0x18) == 0) {
    in_stack_00000008->reflectivity =
         1.0 - (float)(int)in_stack_00000004[1].location.position.y * (float)DOUBLE_0062e111;
    return;
  }
  if (in_stack_00000004[1].location.position.z == 0.0) {
    in_stack_00000008->alpha_or_wetness = 1.0;
  }
  else {
    fVar1 = (in_stack_00000008->hit_position).y;
    fVar2 = *(float *)(in_stack_00000004[1].actor_name + 4);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[2].create_event + 0x4c));
    fVar3 = (float10)(1.0 - fVar1 / fVar2) * (float10)g_CurrentTextureDimension;
    fVar4 = (float10)local_14 * (float10)g_CurrentTextureDimension;
    value = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
    crt_math_c_round_FUN_005fe6b0(value);
    iVar5 = (int)ROUND(fVar3);
    iVar6 = (int)ROUND(fVar4);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (g_CurrentTextureDimension <= iVar5) {
      iVar5 = g_CurrentTextureDimension + -1;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (g_CurrentTextureDimension <= iVar6) {
      iVar6 = g_CurrentTextureDimension + -1;
    }
    if (*(char *)(iVar5 + iVar6 * g_CurrentTextureDimension + (int)g_CurrentTextureData) == '\0') {
      in_stack_00000008->alpha_or_wetness = 1.0;
      return;
    }
  }
  return;
}


// Assembly code:
// 004eb250: PUSH EBX
//   Label: core_glass.cpp_FUN_004eb250
// 004eb251: PUSH ESI
// 004eb252: PUSH EDI
// 004eb253: PUSH EBP
// 004eb254: SUB ESP,0x14
// 004eb257: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004eb25b: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 004eb25f: PUSH ESI
// 004eb260: PUSH EBX
// 004eb261: CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   XREF to: 00409840 (UNCONDITIONAL_CALL)
// 004eb266: MOV EDX,dword ptr [EBX + 0x1e8]
// 004eb26c: ADD ESP,0x8
// 004eb26f: TEST EDX,EDX
// 004eb271: JZ 0x004eb36b
//   XREF to: 004eb36b (CONDITIONAL_JUMP)
// 004eb277: CMP dword ptr [EBX + 0x180],0x0
// 004eb27e: JNZ 0x004eb28f
//   XREF to: 004eb28f (CONDITIONAL_JUMP)
// 004eb280: MOV dword ptr [ESI + 0x50],0x3f800000
// 004eb287: ADD ESP,0x14
//   Label: LAB_004eb287
// 004eb28a: POP EBP
// 004eb28b: POP EDI
// 004eb28c: POP ESI
// 004eb28d: POP EBX
// 004eb28e: RET
// 004eb28f: FLD float ptr [ESI + 0x30]
//   Label: LAB_004eb28f
// 004eb292: FDIV float ptr [EBX + 0x15c]
// 004eb298: FLD float ptr [ESI + 0x2c]
// 004eb29b: FDIV float ptr [EBX + 0x158]
// 004eb2a1: ADD EBX,0x374
// 004eb2a7: PUSH EBX
// 004eb2a8: FLD1
// 004eb2aa: FXCH
// 004eb2ac: FADD double ptr [0x0062e119]
//   XREF to: 0062e119 (READ)
// 004eb2b2: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004eb2b8: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 004eb2bc: FSUBRP
// 004eb2be: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004eb2bf: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (WRITE)
// 004eb2c3: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004eb2c8: ADD ESP,0x8
// 004eb2cb: FILD dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 004eb2d1: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x20] (READ)
// 004eb2d5: FMUL ST1
// 004eb2d7: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004eb2db: FMULP ST2
// 004eb2dd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eb2e2: FXCH
// 004eb2e4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004eb2e9: FXCH
// 004eb2eb: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 004eb2ef: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004eb2f3: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (WRITE)
// 004eb2f7: TEST EDI,EDI
// 004eb2f9: JL 0x004eb35b
//   XREF to: 004eb35b (CONDITIONAL_JUMP)
// 004eb2fb: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_004eb2fb
//   XREF to: Stack[-0x18] (READ)
// 004eb2ff: MOV EDX,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 004eb305: CMP EAX,EDX
// 004eb307: JL 0x004eb310
//   XREF to: 004eb310 (CONDITIONAL_JUMP)
// 004eb309: LEA EAX,[EDX + -0x1]
// 004eb30c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004eb310: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_004eb310
//   XREF to: Stack[-0x14] (READ)
// 004eb315: JL 0x004eb363
//   XREF to: 004eb363 (CONDITIONAL_JUMP)
// 004eb317: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004eb317
//   XREF to: Stack[-0x14] (READ)
// 004eb31b: MOV EDI,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 004eb321: CMP EAX,EDI
// 004eb323: JL 0x004eb32c
//   XREF to: 004eb32c (CONDITIONAL_JUMP)
// 004eb325: LEA EAX,[EDI + -0x1]
// 004eb328: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004eb32c: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004eb32c
//   XREF to: Stack[-0x14] (READ)
// 004eb330: IMUL EAX,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 004eb337: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004eb33b: ADD EBX,EAX
// 004eb33d: MOV EAX,[0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 004eb342: CMP byte ptr [EBX + EAX*0x1],0x0
// 004eb346: JNZ 0x004eb287
//   XREF to: 004eb287 (CONDITIONAL_JUMP)
// 004eb34c: MOV dword ptr [ESI + 0x50],0x3f800000
// 004eb353: ADD ESP,0x14
// 004eb356: POP EBP
// 004eb357: POP EDI
// 004eb358: POP ESI
// 004eb359: POP EBX
// 004eb35a: RET
// 004eb35b: XOR EBP,EBP
//   Label: LAB_004eb35b
// 004eb35d: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004eb361: JMP 0x004eb2fb
//   XREF to: 004eb2fb (UNCONDITIONAL_JUMP)
// 004eb363: XOR EBX,EBX
//   Label: LAB_004eb363
// 004eb365: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004eb369: JMP 0x004eb317
//   XREF to: 004eb317 (UNCONDITIONAL_JUMP)
// 004eb36b: FILD dword ptr [EBX + 0x17c]
//   Label: LAB_004eb36b
// 004eb371: FMUL double ptr [0x0062e111]
//   XREF to: 0062e111 (READ)
// 004eb377: FLD1
// 004eb379: FSUBRP
// 004eb37b: FSTP float ptr [ESI + 0x48]
// 004eb37e: ADD ESP,0x14
// 004eb381: POP EBP
// 004eb382: POP EDI
// 004eb383: POP ESI
// 004eb384: POP EBX
// 004eb385: RET
