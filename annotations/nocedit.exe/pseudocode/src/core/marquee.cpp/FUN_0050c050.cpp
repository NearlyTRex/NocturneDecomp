// Name: core_marquee.cpp_FUN_0050c050
// Address: 0050c050
// Address Range: [[0050c050, 0050c2ed]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c050()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067d150
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_course.cpp_CCourse_FUN_00442710
//   core_marquee.cpp_FUN_0050bec0
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050c050(undefined4 param_1) */

undefined4 core_marquee_cpp_FUN_0050c050(void)

{
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CCourse *unaff_EBP;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  CDemonActor *in_stack_00000004;
  undefined1 auStack_74 [8];
  float fStack_6c;
  float fStack_68;
  CVector3f local_5c;
  undefined1 auStack_50 [8];
  float local_48;
  float local_44;
  undefined1 auStack_38 [8];
  float fStack_30;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  float *local_c;
  
  if (in_stack_00000004[1].orient_matrix.m[0].z != 0.0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067d150)
    ;
    pfVar3 = &in_stack_00000004[1].orient_matrix.m[1].y;
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      fVar1 = in_stack_00000004[1].orient_matrix.m[1].x;
      if (fVar1 == 1.4013e-45) {
        fVar6 = (float10)in_stack_00000004[1].location.position.y;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(1,pfVar3));
        iVar4 = 0;
        if (0 < (int)ROUND(fVar6)) {
          do {
            local_14 = (float)iVar4;
            core_course_cpp_CCourse_FUN_00442710(SUB84(dVar7,0));
            pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (in_stack_00000004,&local_5c,(CVector3f *)auStack_50);
            if ((CVector3f *)(auStack_50 + 4) != pCVar2) {
              auStack_50._4_4_ = pCVar2->x;
              local_48 = pCVar2->y;
              local_44 = pCVar2->z;
            }
            iVar4 = iVar4 + 1;
            core_marquee_cpp_FUN_0050bec0();
          } while (iVar4 < (int)ROUND(fVar6));
        }
      }
      else if (fVar1 == 0.0) {
        fVar6 = (float10)in_stack_00000004[1].location.position.y;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)ZEXT48(pfVar3));
        iVar4 = SUB84(dVar7,0)->len;
        iVar5 = 0;
        pfVar3 = (float *)(int)ROUND(fVar6);
        local_c = pfVar3;
        if (0 < iVar4) {
          do {
            if ((int)pfVar3 % (int)in_stack_00000004[1].location.position.z != 0) {
              local_10 = (float)iVar5;
              core_course_cpp_CCourse_FUN_00442710(SUB84(dVar7,0));
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (in_stack_00000004,&CStack_2c,(CVector3f *)auStack_74);
              if ((CVector3f *)(auStack_74 + 4) != pCVar2) {
                auStack_74._4_4_ = pCVar2->x;
                fStack_6c = pCVar2->y;
                fStack_68 = pCVar2->z;
              }
              core_marquee_cpp_FUN_0050bec0();
            }
            iVar5 = iVar5 + 1;
            pfVar3 = (float *)((int)pfVar3 + 1);
          } while (iVar5 < iVar4);
        }
      }
    }
    else {
      fVar1 = *pfVar3;
      iVar4 = 0;
      if (0 < (int)fVar1) {
        do {
          local_c = pfVar3;
          local_20.z = (float)iVar4;
          core_course_cpp_CCourse_FUN_00442710(unaff_EBP);
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,&local_20,(CVector3f *)auStack_38);
          if ((CVector3f *)(auStack_38 + 4) != pCVar2) {
            auStack_38._4_4_ = pCVar2->x;
            fStack_30 = pCVar2->y;
            CStack_2c.x = pCVar2->z;
          }
          iVar4 = iVar4 + 1;
          core_marquee_cpp_FUN_0050bec0();
          pfVar3 = local_c;
        } while (iVar4 < (int)fVar1);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return 1;
  }
  return 0;
}


// Assembly code:
// 0050c050: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050c050
// 0050c051: PUSH EBP
// 0050c052: SUB ESP,0x8c
// 0050c058: MOV EBX,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x4] (READ)
// 0050c05f: CMP dword ptr [EBX + 0x19c],0x0
// 0050c066: JNZ 0x0050c073
//   XREF to: 0050c073 (CONDITIONAL_JUMP)
// 0050c068: XOR EAX,EAX
// 0050c06a: ADD ESP,0x8c
// 0050c070: POP EBP
// 0050c071: POP EBX
// 0050c072: RET
// 0050c073: PUSH EDI
//   Label: LAB_0050c073
// 0050c074: PUSH ESI
// 0050c075: PUSH 0x1
// 0050c077: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050c07d: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0050c07e: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050c083: ADD ESP,0x8
// 0050c086: PUSH 0xffff
// 0050c08b: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050c091: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0050c092: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0050c097: ADD ESP,0x8
// 0050c09a: PUSH 0x67d150
//   XREF to: 0067d150 (DATA)
// 0050c09f: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050c0a5: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0050c0a6: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0050c0ab: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 0050c0b1: ADD ESP,0x8
// 0050c0b4: MOV EBP,dword ptr [EDX + 0x4]
//   XREF to: 02f33744 (READ)
// 0050c0b7: LEA EAX,[EBX + 0x1a4]
// 0050c0bd: TEST EBP,EBP
// 0050c0bf: JZ 0x0050c16f
//   XREF to: 0050c16f (CONDITIONAL_JUMP)
// 0050c0c5: MOV EDX,dword ptr [EAX]
// 0050c0c7: XOR EDI,EDI
// 0050c0c9: MOV EBP,EDX
// 0050c0cb: TEST EDX,EDX
// 0050c0cd: JLE 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c0d3: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0050c0da: LEA EAX,[ESP + 0x8]
//   Label: LAB_0050c0da
//   XREF to: Stack[-0x94] (DATA)
// 0050c0de: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0050c0e5: PUSH EAX
// 0050c0e6: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x4c] (DATA)
// 0050c0ea: FILD dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xc] (READ)
// 0050c0f1: PUSH EAX
// 0050c0f2: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x28] (WRITE)
// 0050c0f6: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 0050c0fd: PUSH dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x28] (READ)
// 0050c101: PUSH EAX
// 0050c102: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0050c107: ADD ESP,0x10
// 0050c10a: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x4c] (DATA)
// 0050c10e: PUSH EAX
// 0050c10f: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x34] (DATA)
// 0050c113: PUSH EAX
// 0050c114: PUSH EBX
// 0050c115: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050c11a: MOV ESI,EAX
// 0050c11c: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x4c] (DATA)
// 0050c120: ADD ESP,0xc
// 0050c123: CMP EAX,ESI
// 0050c125: JZ 0x0050c13b
//   XREF to: 0050c13b (CONDITIONAL_JUMP)
// 0050c127: MOV EAX,dword ptr [ESI]
// 0050c129: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0050c12d: MOV EAX,dword ptr [ESI + 0x4]
// 0050c130: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0050c134: MOV EAX,dword ptr [ESI + 0x8]
// 0050c137: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0050c13b: LEA EAX,[ESP + 0x50]
//   Label: LAB_0050c13b
//   XREF to: Stack[-0x4c] (DATA)
// 0050c13f: PUSH EAX
// 0050c140: PUSH EBX
// 0050c141: INC EDI
// 0050c142: CALL core_marquee.cpp_FUN_0050bec0
//   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
// 0050c147: ADD ESP,0x8
// 0050c14a: CMP EDI,EBP
// 0050c14c: JL 0x0050c0da
//   XREF to: 0050c0da (CONDITIONAL_JUMP)
// 0050c14e: PUSH 0x0
//   Label: LAB_0050c14e
// 0050c150: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050c156: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050c157: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050c15c: MOV EAX,0x1
// 0050c161: ADD ESP,0x8
// 0050c164: POP ESI
// 0050c165: POP EDI
// 0050c166: ADD ESP,0x8c
// 0050c16c: POP EBP
// 0050c16d: POP EBX
// 0050c16e: RET
// 0050c16f: MOV EDX,dword ptr [EBX + 0x1a0]
//   Label: LAB_0050c16f
// 0050c175: CMP EDX,0x1
// 0050c178: JNZ 0x0050c21f
//   XREF to: 0050c21f (CONDITIONAL_JUMP)
// 0050c17e: FLD float ptr [EBX + 0x17c]
// 0050c184: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c189: FISTP dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x10] (WRITE)
// 0050c190: MOV EDI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x10] (READ)
// 0050c197: XOR ESI,ESI
// 0050c199: TEST EDI,EDI
// 0050c19b: JLE 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c19d: MOV EBP,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x10] (READ)
// 0050c1a4: MOV EDI,EAX
// 0050c1a6: LEA EAX,[ESP + 0x20]
//   Label: LAB_0050c1a6
//   XREF to: Stack[-0x7c] (DATA)
// 0050c1aa: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0xc] (WRITE)
// 0050c1b1: PUSH EAX
// 0050c1b2: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x64] (DATA)
// 0050c1b6: FILD dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xc] (READ)
// 0050c1bd: PUSH EAX
// 0050c1be: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x24] (WRITE)
// 0050c1c5: PUSH dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x24] (READ)
// 0050c1cc: PUSH EDI
// 0050c1cd: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0050c1d2: ADD ESP,0x10
// 0050c1d5: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x64] (DATA)
// 0050c1d9: PUSH EAX
// 0050c1da: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x70] (DATA)
// 0050c1de: PUSH EAX
// 0050c1df: PUSH EBX
// 0050c1e0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050c1e5: MOV EDX,EAX
// 0050c1e7: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x64] (DATA)
// 0050c1eb: ADD ESP,0xc
// 0050c1ee: CMP EAX,EDX
// 0050c1f0: JZ 0x0050c206
//   XREF to: 0050c206 (CONDITIONAL_JUMP)
// 0050c1f2: MOV EAX,dword ptr [EDX]
// 0050c1f4: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0050c1f8: MOV EAX,dword ptr [EDX + 0x4]
// 0050c1fb: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0050c1ff: MOV EAX,dword ptr [EDX + 0x8]
// 0050c202: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0050c206: LEA EAX,[ESP + 0x38]
//   Label: LAB_0050c206
//   XREF to: Stack[-0x64] (DATA)
// 0050c20a: PUSH EAX
// 0050c20b: PUSH EBX
// 0050c20c: INC ESI
// 0050c20d: CALL core_marquee.cpp_FUN_0050bec0
//   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
// 0050c212: ADD ESP,0x8
// 0050c215: CMP ESI,EBP
// 0050c217: JGE 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c21d: JMP 0x0050c1a6
//   XREF to: 0050c1a6 (UNCONDITIONAL_JUMP)
// 0050c21f: TEST EDX,EDX
//   Label: LAB_0050c21f
// 0050c221: JNZ 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c227: FLD float ptr [EBX + 0x17c]
// 0050c22d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0050c232: MOV EDX,dword ptr [EAX]
// 0050c234: XOR EDI,EDI
// 0050c236: FISTP dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x1c] (WRITE)
// 0050c23d: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0050c244: TEST EDX,EDX
// 0050c246: JLE 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c24c: MOV ESI,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x1c] (READ)
// 0050c253: MOV EBP,EAX
// 0050c255: MOV EAX,ESI
//   Label: LAB_0050c255
// 0050c257: MOV EDX,ESI
// 0050c259: MOV ECX,dword ptr [EBX + 0x180]
// 0050c25f: SAR EDX,0x1f
// 0050c262: IDIV ECX
// 0050c264: TEST EDX,EDX
// 0050c266: JNZ 0x0050c27b
//   XREF to: 0050c27b (CONDITIONAL_JUMP)
// 0050c268: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_0050c268
//   XREF to: Stack[-0x14] (READ)
// 0050c26f: INC EDI
// 0050c270: INC ESI
// 0050c271: CMP EDI,EAX
// 0050c273: JGE 0x0050c14e
//   XREF to: 0050c14e (CONDITIONAL_JUMP)
// 0050c279: JMP 0x0050c255
//   XREF to: 0050c255 (UNCONDITIONAL_JUMP)
// 0050c27b: LEA EAX,[ESP + 0x44]
//   Label: LAB_0050c27b
//   XREF to: Stack[-0x58] (DATA)
// 0050c27f: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0050c286: PUSH EAX
// 0050c287: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x88] (DATA)
// 0050c28b: FILD dword ptr [ESP + 0x94]
//   XREF to: Stack[-0xc] (READ)
// 0050c292: PUSH EAX
// 0050c293: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0x20] (WRITE)
// 0050c29a: PUSH dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x20] (READ)
// 0050c2a1: PUSH EBP
// 0050c2a2: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0050c2a7: ADD ESP,0x10
// 0050c2aa: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x88] (DATA)
// 0050c2ae: PUSH EAX
// 0050c2af: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 0050c2b3: PUSH EAX
// 0050c2b4: PUSH EBX
// 0050c2b5: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050c2ba: MOV EDX,EAX
// 0050c2bc: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x88] (DATA)
// 0050c2c0: ADD ESP,0xc
// 0050c2c3: CMP EAX,EDX
// 0050c2c5: JZ 0x0050c2db
//   XREF to: 0050c2db (CONDITIONAL_JUMP)
// 0050c2c7: MOV EAX,dword ptr [EDX]
// 0050c2c9: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0050c2cd: MOV EAX,dword ptr [EDX + 0x4]
// 0050c2d0: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0050c2d4: MOV EAX,dword ptr [EDX + 0x8]
// 0050c2d7: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0050c2db: LEA EAX,[ESP + 0x14]
//   Label: LAB_0050c2db
//   XREF to: Stack[-0x88] (DATA)
// 0050c2df: PUSH EAX
// 0050c2e0: PUSH EBX
// 0050c2e1: CALL core_marquee.cpp_FUN_0050bec0
//   XREF to: 0050bec0 (UNCONDITIONAL_CALL)
// 0050c2e6: ADD ESP,0x8
// 0050c2e9: JMP 0x0050c268
//   XREF to: 0050c268 (UNCONDITIONAL_JUMP)
