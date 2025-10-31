// Name: core_hero.cpp_FUN_004f3120
// Address: 004f3120
// Address Range: [[004f3120, 004f3345]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3120()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4027 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5d83 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062ec56 = 0.5
//   double DOUBLE_0062ec5e = 1.20000000000000
//   double DOUBLE_0062ec66 = 5
//   double DOUBLE_0062ec6e = 0.610865238180555
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CBoxActorClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd70
//   core_charactr.cpp_CCharacter_FUN_0042d360
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3120(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f3120(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  undefined4 uVar3;
  CVector3f *pCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_EDI;
  int iVar6;
  CCharacter *in_stack_00000004;
  double dStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
      iVar1 = 0;
      for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                            g_CBoxActorClassInfo.name_hash);
        if (((pCVar2 != (CDemonActor *)0x0) && (pCVar2[2].field7_0x6c != 0)) &&
           (pCVar2[2].was_created == 0)) {
          (*((pCVar2->metadata).vtable)->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xffffff88);
          core_actor_cpp_CDemonActor_FUN_00408ec0(pCVar2);
          core_actor_cpp_CDemonActor_FUN_00408f10(&in_stack_00000004->base_actor);
          in_stack_00000004 = (CCharacter *)(fStack_50 - fStack_5c);
          fVar5 = ((fStack_60 + fStack_54) - fStack_54) * FLOAT_0062ec56;
          if (((unaff_EDI -
                SQRT(fVar5 * fVar5 +
                     (float)in_stack_00000004 * FLOAT_0062ec56 *
                     (float)in_stack_00000004 * FLOAT_0062ec56) <= (float)DOUBLE_0062ec5e) &&
              (dStack_64 = (double)unaff_EBP, 1.0 <= dStack_64)) && (dStack_64 <= DOUBLE_0062ec66))
          {
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               ((CVector3f *)&stack0xfffffff8,(CVector3f *)&stack0xffffffec);
            fStack_60 = (float)((ulonglong)dStack_64 >> 0x20);
            dStack_64 = (double)CONCAT44(fStack_60,pCVar4->y);
            fVar5 = core_actor_cpp_FUN_0040cd70(pCVar4->y);
            if (ABS(fVar5) <= (float)DOUBLE_0062ec6e) {
              *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) = pCVar2;
              break;
            }
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) == (CDemonActor *)0x0)
      goto LAB_004f31b0;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                          g_CBoxActorClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        pCVar2[2].was_created = (int)in_stack_00000004;
        uVar3 = (*((pCVar2->metadata).vtable)->playAmbientSound)(pCVar2,pCVar2[2].create_event + 4);
        *(undefined4 *)pCVar2[2].create_event = uVar3;
      }
    }
    uVar3 = 1;
  }
  else {
LAB_004f31b0:
    uVar3 = 0;
  }
  return uVar3;
}


// Assembly code:
// 004f3120: PUSH EBX
//   Label: core_hero.cpp_FUN_004f3120
// 004f3121: PUSH ESI
// 004f3122: PUSH EDI
// 004f3123: PUSH EBP
// 004f3124: MOV EBP,ESP
// 004f3126: SUB ESP,0x78
// 004f3129: AND ESP,0xfffffff8
// 004f312c: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f312f: PUSH EDX
// 004f3130: CALL core_charactr.cpp_CCharacter_FUN_0042d360
//   XREF to: 0042d360 (UNCONDITIONAL_CALL)
// 004f3135: ADD ESP,0x4
// 004f3138: TEST EAX,EAX
// 004f313a: JNZ 0x004f31b0
//   XREF to: 004f31b0 (CONDITIONAL_JUMP)
// 004f3140: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f3143: CMP dword ptr [EAX + 0x1fba4],0x0
// 004f314a: JNZ 0x004f31a4
//   XREF to: 004f31a4 (CONDITIONAL_JUMP)
// 004f314c: XOR EDI,EDI
// 004f314e: XOR ESI,ESI
// 004f3150: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_004f3150
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004f3156: CMP EDI,dword ptr [EBX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f315c: JL 0x004f31ba
//   XREF to: 004f31ba (CONDITIONAL_JUMP)
// 004f315e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004f315e
//   XREF to: Stack[0x4] (READ)
// 004f3161: MOV EDX,dword ptr [EAX + 0x1fba4]
// 004f3167: TEST EDX,EDX
// 004f3169: JZ 0x004f31b0
//   XREF to: 004f31b0 (CONDITIONAL_JUMP)
// 004f316b: MOV ECX,dword ptr [0x008229e8]
//   XREF to: 008229e8 (READ)
// 004f3171: PUSH ECX
// 004f3172: PUSH EDX
// 004f3173: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f3178: MOV EBX,EAX
// 004f317a: ADD ESP,0x8
// 004f317d: TEST EAX,EAX
// 004f317f: JZ 0x004f31a4
//   XREF to: 004f31a4 (CONDITIONAL_JUMP)
// 004f3181: LEA EDX,[EBX + 0x32c]
// 004f3187: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f318a: PUSH EDX
// 004f318b: MOV dword ptr [EBX + 0x320],EAX
// 004f3191: PUSH EBX
// 004f3192: MOV EAX,dword ptr [EBX + 0x154]
// 004f3198: CALL dword ptr [EAX + 0x28]
// 004f319b: ADD ESP,0x8
// 004f319e: MOV dword ptr [EBX + 0x328],EAX
// 004f31a4: MOV EAX,0x1
//   Label: LAB_004f31a4
// 004f31a9: MOV ESP,EBP
//   Label: LAB_004f31a9
// 004f31ab: POP EBP
// 004f31ac: POP EDI
// 004f31ad: POP ESI
// 004f31ae: POP EBX
// 004f31af: RET
// 004f31b0: XOR EAX,EAX
//   Label: LAB_004f31b0
// 004f31b2: JMP 0x004f31a9
//   XREF to: 004f31a9 (UNCONDITIONAL_JUMP)
// 004f31b4: INC EDI
//   Label: LAB_004f31b4
// 004f31b5: ADD ESI,0x4
// 004f31b8: JMP 0x004f3150
//   XREF to: 004f3150 (UNCONDITIONAL_JUMP)
// 004f31ba: MOV EDX,dword ptr [0x008229e8]
//   Label: LAB_004f31ba
//   XREF to: 008229e8 (READ)
// 004f31c0: PUSH EDX
// 004f31c1: MOV ECX,dword ptr [ESI + EBX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004f31c8: PUSH ECX
// 004f31c9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f31ce: MOV EBX,EAX
// 004f31d0: ADD ESP,0x8
// 004f31d3: TEST EAX,EAX
// 004f31d5: JZ 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f31d7: CMP dword ptr [EAX + 0x31c],0x0
// 004f31de: JZ 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f31e0: CMP dword ptr [EBX + 0x320],0x0
// 004f31e7: JNZ 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f31e9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x80] (DATA)
// 004f31ed: PUSH EAX
// 004f31ee: MOV EDX,dword ptr [EBX + 0x154]
// 004f31f4: PUSH EBX
// 004f31f5: CALL dword ptr [EDX + 0x14]
// 004f31f8: ADD ESP,0x8
// 004f31fb: FLD float ptr [ESP + 0xc]
// 004f31ff: FLD float ptr [ESP + 0x8]
// 004f3203: FADD float ptr [ESP + 0x14]
// 004f3207: FXCH
// 004f3209: FADD float ptr [ESP + 0x18]
// 004f320d: FXCH
// 004f320f: FST float ptr [ESP + 0x20]
// 004f3213: FMUL float ptr [0x0062ec56]
//   XREF to: 0062ec56 (READ)
// 004f3219: FXCH
// 004f321b: FST float ptr [ESP + 0x24]
// 004f321f: FMUL float ptr [0x0062ec56]
//   XREF to: 0062ec56 (READ)
// 004f3225: LEA EAX,[ESP + 0x38]
// 004f3229: FLD float ptr [ESP + 0x10]
// 004f322d: PUSH EAX
// 004f322e: FADD float ptr [ESP + 0x20]
// 004f3232: LEA EAX,[ESP + 0x30]
// 004f3236: FST float ptr [ESP + 0x2c]
// 004f323a: PUSH EAX
// 004f323b: FMUL float ptr [0x0062ec56]
//   XREF to: 0062ec56 (READ)
// 004f3241: PUSH EBX
// 004f3242: FXCH ST2
// 004f3244: FSTP float ptr [ESP + 0x44]
// 004f3248: FSTP float ptr [ESP + 0x48]
// 004f324c: FSTP float ptr [ESP + 0x4c]
// 004f3250: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f3255: ADD ESP,0xc
// 004f3258: LEA EAX,[ESP + 0x2c]
// 004f325c: PUSH EAX
// 004f325d: LEA EAX,[ESP + 0x54]
// 004f3261: PUSH EAX
// 004f3262: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f3265: PUSH ECX
// 004f3266: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f326b: ADD ESP,0xc
// 004f326e: FLD float ptr [ESP + 0x1c]
// 004f3272: FLD float ptr [ESP + 0x14]
// 004f3276: FSUB float ptr [ESP + 0x8]
// 004f327a: FXCH
// 004f327c: FSUB float ptr [ESP + 0x10]
// 004f3280: FXCH
// 004f3282: FST float ptr [ESP + 0x68]
// 004f3286: FMUL float ptr [0x0062ec56]
//   XREF to: 0062ec56 (READ)
// 004f328c: FXCH
// 004f328e: FST float ptr [ESP + 0x70]
// 004f3292: FMUL float ptr [0x0062ec56]
//   XREF to: 0062ec56 (READ)
// 004f3298: FXCH
// 004f329a: FST float ptr [ESP + 0x44]
// 004f329e: FMUL float ptr [ESP + 0x44]
// 004f32a2: FXCH
// 004f32a4: FST float ptr [ESP + 0x4c]
// 004f32a8: FMUL float ptr [ESP + 0x4c]
// 004f32ac: XOR EAX,EAX
// 004f32ae: FADDP
// 004f32b0: MOV dword ptr [ESP + 0x48],EAX
// 004f32b4: FSQRT
// 004f32b6: FLD float ptr [ESP + 0x18]
// 004f32ba: FSUB float ptr [ESP + 0xc]
// 004f32be: FXCH
// 004f32c0: FSUBR float ptr [ESP + 0x58]
// 004f32c4: FXCH
// 004f32c6: FSTP float ptr [ESP + 0x6c]
// 004f32ca: FCOMP double ptr [0x0062ec5e]
//   XREF to: 0062ec5e (READ)
// 004f32d0: FNSTSW AX
// 004f32d2: SAHF
// 004f32d3: JA 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f32d9: FLD float ptr [ESP + 0x54]
// 004f32dd: FLD1
// 004f32df: FXCH
// 004f32e1: FSTP double ptr [ESP]
// 004f32e4: FCOMP double ptr [ESP]
// 004f32e7: FNSTSW AX
// 004f32e9: SAHF
// 004f32ea: JA 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f32f0: FLD double ptr [ESP]
// 004f32f3: FCOMP double ptr [0x0062ec66]
//   XREF to: 0062ec66 (READ)
// 004f32f9: FNSTSW AX
// 004f32fb: SAHF
// 004f32fc: JA 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f3302: LEA EAX,[ESP + 0x50]
// 004f3306: PUSH EAX
// 004f3307: LEA EAX,[ESP + 0x60]
// 004f330b: PUSH EAX
// 004f330c: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f3311: ADD ESP,0x8
// 004f3314: PUSH dword ptr [EAX + 0x4]
// 004f3317: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f331c: MOV dword ptr [ESP + 0x78],EAX
// 004f3320: FLD float ptr [ESP + 0x78]
// 004f3324: FABS
// 004f3326: ADD ESP,0x4
// 004f3329: FCOMP double ptr [0x0062ec6e]
//   XREF to: 0062ec6e (READ)
// 004f332f: FNSTSW AX
// 004f3331: SAHF
// 004f3332: JA 0x004f31b4
//   XREF to: 004f31b4 (CONDITIONAL_JUMP)
// 004f3338: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f333b: MOV dword ptr [EAX + 0x1fba4],EBX
// 004f3341: JMP 0x004f315e
//   XREF to: 004f315e (UNCONDITIONAL_JUMP)
