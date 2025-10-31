// Name: core_charactr.cpp_CCharacter_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c180(CCharacter * this_ptr)
// Globals:
//   double DOUBLE_00617192 = 0.400000000000000
//   float FLOAT_0061719a = 10
//   float FLOAT_0061719e = 0.5
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_gore.cpp_FUN_004edbb0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float extraout_EDX;
  float fVar4;
  float extraout_EDX_00;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float10 fVar5;
  float10 fVar6;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  char *in_stack_00000010;
  float *in_stack_00000014;
  double dVar7;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f aCStack_40 [2];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
  core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
  iVar2 = (*((this_ptr->base_actor).metadata.vtable)->testLineIntersection)
                    (&this_ptr->base_actor,aCStack_40,&CStack_4c,&CStack_58);
  if (iVar2 != 0) {
    fVar4 = extraout_EDX;
    if (in_stack_00000014 != (float *)0x0) {
      pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
      fVar4 = extraout_EDX_00;
      if (in_stack_00000014 != pfVar3) {
        *in_stack_00000014 = *pfVar3;
        in_stack_00000014[1] = pfVar3[1];
        fVar4 = pfVar3[2];
        in_stack_00000014[2] = fVar4;
      }
    }
    dVar7 = (double)*(float *)(in_stack_00000010 + 4);
    if (0.0 < dVar7) {
      CStack_4c.y = *in_stack_0000000c - *in_stack_00000008;
      CStack_4c.z = (float)((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1]);
      aCStack_40[0].x = (float)((float10)in_stack_0000000c[2] - (float10)in_stack_00000008[2]);
      fVar5 = SQRT(((float10)in_stack_0000000c[2] - (float10)in_stack_00000008[2]) *
                   (float10)aCStack_40[0].x +
                   (float10)CStack_4c.y * (float10)CStack_4c.y +
                   ((float10)in_stack_0000000c[1] - (float10)in_stack_00000008[1]) *
                   (float10)CStack_4c.z);
      fVar6 = (float10)*(float *)(in_stack_00000010 + 4) * (float10)DOUBLE_00617192;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(fVar4,in_stack_00000008));
      in_stack_00000010 = (char *)(int)ROUND(fVar6);
      dVar7 = (double)(ulonglong)(uint)(float)fVar5;
      if (fVar5 <= (float10)0) {
        CStack_4c.x = 0.0;
        CStack_58.z = 0.0;
        CStack_4c.y = 0.0;
      }
      else {
        fVar4 = 1.0 / (float)fVar5;
        CStack_58.z = CStack_58.z * fVar4;
        CStack_4c.x = CStack_4c.x * fVar4;
        CStack_4c.y = CStack_4c.y * fVar4;
      }
      fStack_14 = CStack_58.z * FLOAT_0061719a;
      unaff_EBP = CStack_4c.x * FLOAT_0061719a;
      core_actor_cpp_CDemonActor_FUN_00408ec0(&this_ptr->base_actor);
      core_gore_cpp_FUN_004edbb0();
    }
    CStack_58.y = fStack_18 + fStack_24;
    CStack_58.z = fStack_14 + fStack_20;
    CStack_4c.x = unaff_EBP + fStack_1c;
    fVar4 = CStack_58.z * FLOAT_0061719e;
    fVar1 = CStack_4c.x * FLOAT_0061719e;
    if (in_stack_00000010 + 0x1c != &stack0x00000000) {
      *(float *)(in_stack_00000010 + 0x1c) = CStack_58.y * FLOAT_0061719e;
      *(float *)(in_stack_00000010 + 0x20) = fVar4;
      *(float *)(in_stack_00000010 + 0x24) = fVar1;
    }
    (*(this_ptr->base_actor).metadata.vtable[1].playAmbientSoundWithVolume)
              (&this_ptr->base_actor,in_stack_00000010,SUB84(dVar7,0));
    return 1;
  }
  in_stack_00000010[4] = '\0';
  in_stack_00000010[5] = '\0';
  in_stack_00000010[6] = '\0';
  in_stack_00000010[7] = '\0';
  return 0;
}


// Assembly code:
// 0042c180: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c180
// 0042c181: PUSH ESI
// 0042c182: PUSH EDI
// 0042c183: PUSH EBP
// 0042c184: MOV EBP,ESP
// 0042c186: SUB ESP,0x7c
// 0042c189: AND ESP,0xfffffff8
// 0042c18c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042c18f: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042c192: MOV ESI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0042c195: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042c198: PUSH EDX
// 0042c199: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x48] (DATA)
// 0042c19d: PUSH EAX
// 0042c19e: PUSH EBX
// 0042c19f: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0042c1a4: ADD ESP,0xc
// 0042c1a7: PUSH EDI
// 0042c1a8: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x54] (DATA)
// 0042c1ac: PUSH EAX
// 0042c1ad: PUSH EBX
// 0042c1ae: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0042c1b3: ADD ESP,0xc
// 0042c1b6: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x60] (DATA)
// 0042c1ba: PUSH EDX
// 0042c1bb: LEA EDX,[ESP + 0x40]
//   XREF to: Stack[-0x54] (DATA)
// 0042c1bf: PUSH EDX
// 0042c1c0: LEA EDX,[ESP + 0x50]
//   XREF to: Stack[-0x48] (DATA)
// 0042c1c4: PUSH EDX
// 0042c1c5: MOV EAX,dword ptr [EBX + 0x154]
// 0042c1cb: PUSH EBX
// 0042c1cc: CALL dword ptr [EAX + 0xa8]
// 0042c1d2: ADD ESP,0x10
// 0042c1d5: TEST EAX,EAX
// 0042c1d7: JZ 0x0042c365
//   XREF to: 0042c365 (CONDITIONAL_JUMP)
// 0042c1dd: TEST ESI,ESI
// 0042c1df: JNZ 0x0042c378
//   XREF to: 0042c378 (CONDITIONAL_JUMP)
// 0042c1e5: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0042c1e5
//   XREF to: Stack[0x10] (READ)
// 0042c1e8: FLDZ
// 0042c1ea: FLD float ptr [EAX + 0x4]
// 0042c1ed: FSTP double ptr [ESP]
// 0042c1f0: FCOMP double ptr [ESP]
// 0042c1f3: FNSTSW AX
// 0042c1f5: SAHF
// 0042c1f6: JNC 0x0042c2dd
//   XREF to: 0042c2dd (CONDITIONAL_JUMP)
// 0042c1fc: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042c1ff: FLD float ptr [EDI]
// 0042c201: FSUB float ptr [EAX]
// 0042c203: FSTP float ptr [ESP + 0x18]
// 0042c207: FLD float ptr [EDI + 0x4]
// 0042c20a: FSUB float ptr [EAX + 0x4]
// 0042c20d: FST float ptr [ESP + 0x1c]
// 0042c211: FMUL float ptr [ESP + 0x1c]
// 0042c215: FLD float ptr [ESP + 0x18]
// 0042c219: FMUL ST0
// 0042c21b: FLD float ptr [EDI + 0x8]
// 0042c21e: FSUB float ptr [EAX + 0x8]
// 0042c221: FXCH
// 0042c223: FADDP ST2,ST0
// 0042c225: FST float ptr [ESP + 0x20]
// 0042c229: FMUL float ptr [ESP + 0x20]
// 0042c22d: FADDP
// 0042c22f: FSQRT
// 0042c231: FLD double ptr [ESP]
// 0042c234: FMUL double ptr [0x00617192]
//   XREF to: 00617192 (READ)
// 0042c23a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042c23f: FISTP dword ptr [ESP + 0x78]
// 0042c243: MOV ESI,dword ptr [ESP + 0x78]
// 0042c247: INC ESI
// 0042c248: FST float ptr [ESP + 0x8]
// 0042c24c: FLDZ
// 0042c24e: FCOMPP
// 0042c250: FNSTSW AX
// 0042c252: SAHF
// 0042c253: JNC 0x0042c3a8
//   XREF to: 0042c3a8 (CONDITIONAL_JUMP)
// 0042c259: FLD1
// 0042c25b: FLD float ptr [ESP + 0x18]
// 0042c25f: FXCH
// 0042c261: FDIV float ptr [ESP + 0x8]
// 0042c265: FXCH
// 0042c267: FMUL ST1
// 0042c269: FLD float ptr [ESP + 0x1c]
// 0042c26d: FMUL ST2
// 0042c26f: FLD float ptr [ESP + 0x20]
// 0042c273: FMULP ST3
// 0042c275: FXCH
// 0042c277: FSTP float ptr [ESP + 0x18]
// 0042c27b: FSTP float ptr [ESP + 0x1c]
// 0042c27f: FSTP float ptr [ESP + 0x20]
// 0042c283: FLD float ptr [0x0061719a]
//   Label: LAB_0042c283
//   XREF to: 0061719a (READ)
// 0042c289: FLD float ptr [ESP + 0x18]
// 0042c28d: FMUL ST1
// 0042c28f: FLD float ptr [ESP + 0x1c]
// 0042c293: FMUL ST2
// 0042c295: FLD float ptr [ESP + 0x20]
// 0042c299: LEA EAX,[ESP + 0x30]
// 0042c29d: FMULP ST3
// 0042c29f: PUSH EAX
// 0042c2a0: LEA EAX,[ESP + 0x70]
// 0042c2a4: FXCH
// 0042c2a6: FSTP float ptr [ESP + 0x58]
// 0042c2aa: PUSH EAX
// 0042c2ab: FSTP float ptr [ESP + 0x60]
// 0042c2af: PUSH EBX
// 0042c2b0: FSTP float ptr [ESP + 0x68]
// 0042c2b4: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042c2b9: ADD ESP,0xc
// 0042c2bc: MOV EDX,dword ptr [EBX + 0x2610]
// 0042c2c2: PUSH EDX
// 0042c2c3: PUSH ESI
// 0042c2c4: LEA EAX,[ESP + 0x5c]
// 0042c2c8: PUSH EAX
// 0042c2c9: LEA EAX,[ESP + 0x78]
// 0042c2cd: PUSH EAX
// 0042c2ce: MOV ECX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0042c2d4: PUSH ECX
//   XREF to: 02d83364 (DATA)
// 0042c2d5: CALL core_gore.cpp_FUN_004edbb0
//   XREF to: 004edbb0 (UNCONDITIONAL_CALL)
// 0042c2da: ADD ESP,0x14
// 0042c2dd: FLD float ptr [ESP + 0x48]
//   Label: LAB_0042c2dd
// 0042c2e1: FADD float ptr [ESP + 0x3c]
// 0042c2e5: FST float ptr [ESP + 0xc]
// 0042c2e9: FLD float ptr [0x0061719e]
//   XREF to: 0061719e (READ)
// 0042c2ef: FXCH
// 0042c2f1: FMUL ST1
// 0042c2f3: FLD float ptr [ESP + 0x50]
// 0042c2f7: FLD float ptr [ESP + 0x4c]
// 0042c2fb: FADD float ptr [ESP + 0x40]
// 0042c2ff: FXCH
// 0042c301: FADD float ptr [ESP + 0x44]
// 0042c305: FXCH
// 0042c307: FST float ptr [ESP + 0x10]
// 0042c30b: FMUL ST3
// 0042c30d: FXCH
// 0042c30f: FST float ptr [ESP + 0x14]
// 0042c313: FMULP ST3
// 0042c315: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0042c318: LEA EAX,[ESP + 0x60]
// 0042c31c: ADD EDX,0x1c
// 0042c31f: FXCH
// 0042c321: FSTP float ptr [ESP + 0x60]
// 0042c325: FSTP float ptr [ESP + 0x64]
// 0042c329: FSTP float ptr [ESP + 0x68]
// 0042c32d: CMP EDX,EAX
// 0042c32f: JZ 0x0042c345
//   XREF to: 0042c345 (CONDITIONAL_JUMP)
// 0042c331: MOV EAX,dword ptr [ESP + 0x60]
// 0042c335: MOV dword ptr [EDX],EAX
// 0042c337: MOV EAX,dword ptr [ESP + 0x64]
// 0042c33b: MOV dword ptr [EDX + 0x4],EAX
// 0042c33e: MOV EAX,dword ptr [ESP + 0x68]
// 0042c342: MOV dword ptr [EDX + 0x8],EAX
// 0042c345: MOV ESI,dword ptr [EBP + 0x20]
//   Label: LAB_0042c345
//   XREF to: Stack[0x10] (READ)
// 0042c348: PUSH ESI
// 0042c349: MOV EAX,dword ptr [EBX + 0x154]
// 0042c34f: PUSH EBX
// 0042c350: CALL dword ptr [EAX + 0x11c]
// 0042c356: MOV EAX,0x1
// 0042c35b: ADD ESP,0x8
// 0042c35e: MOV ESP,EBP
// 0042c360: POP EBP
// 0042c361: POP EDI
// 0042c362: POP ESI
// 0042c363: POP EBX
// 0042c364: RET
// 0042c365: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0042c365
//   XREF to: Stack[0x10] (READ)
// 0042c368: MOV dword ptr [EAX + 0x4],0x0
// 0042c36f: XOR EAX,EAX
// 0042c371: MOV ESP,EBP
// 0042c373: POP EBP
// 0042c374: POP EDI
// 0042c375: POP ESI
// 0042c376: POP EBX
// 0042c377: RET
// 0042c378: LEA EAX,[ESP + 0x30]
//   Label: LAB_0042c378
// 0042c37c: PUSH EAX
// 0042c37d: LEA EAX,[ESP + 0x28]
// 0042c381: PUSH EAX
// 0042c382: PUSH EBX
// 0042c383: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042c388: ADD ESP,0xc
// 0042c38b: CMP ESI,EAX
// 0042c38d: JZ 0x0042c1e5
//   XREF to: 0042c1e5 (CONDITIONAL_JUMP)
// 0042c393: MOV EDX,dword ptr [EAX]
// 0042c395: MOV dword ptr [ESI],EDX
// 0042c397: MOV EDX,dword ptr [EAX + 0x4]
// 0042c39a: MOV dword ptr [ESI + 0x4],EDX
// 0042c39d: MOV EDX,dword ptr [EAX + 0x8]
// 0042c3a0: MOV dword ptr [ESI + 0x8],EDX
// 0042c3a3: JMP 0x0042c1e5
//   XREF to: 0042c1e5 (UNCONDITIONAL_JUMP)
// 0042c3a8: XOR ECX,ECX
//   Label: LAB_0042c3a8
// 0042c3aa: MOV dword ptr [ESP + 0x1c],ECX
// 0042c3ae: MOV dword ptr [ESP + 0x18],ECX
// 0042c3b2: MOV dword ptr [ESP + 0x20],ECX
// 0042c3b6: JMP 0x0042c283
//   XREF to: 0042c283 (UNCONDITIONAL_JUMP)
