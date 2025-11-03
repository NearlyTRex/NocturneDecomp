// Name: core_stranger.cpp_CStranger_FUN_005c1fe0
// Address: 005c1fe0
// Address Range: [[005c1fe0, 005c23f2]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1fe0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5def [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Climbing_ladder_s_00653ad4
//   double DOUBLE_00653aec = 0.990000000000000
//   float FLOAT_00653af4 = 0.5
//   double DOUBLE_00653afc = 2
//   double DOUBLE_00653b04 = 4
//   double DOUBLE_00653b0c = -1
//   double DOUBLE_00653b14 = 0.261799387791667
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CLadderClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c1fe0(CStranger* param_1) */

undefined4 core_stranger_cpp_CStranger_FUN_005c1fe0(void)

{
  int *piVar1;
  CConsole *this_ptr;
  float fVar2;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffff40;
  float in_stack_ffffff44;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f local_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [36];
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f *local_18;
  float local_14;
  
  in_stack_00000004[0x179].field19_0x114 = 0;
  fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)DOUBLE_00653aec <= fVar2) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    CStack_24.z = (float)&in_stack_00000004->location;
    local_14 = 0.0;
    for (local_18 = (CVector3f *)0x0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_18 = (CVector3f *)((int)&local_18->x + 1)) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)local_14),
                               g_CLadderClassInfo.name_hash);
      if (((this_ptr_00 != (CDemonActor *)0x0) &&
          (ABS((in_stack_00000004->location).position.y - (this_ptr_00->location).position.y) <=
           (float)DOUBLE_00653afc)) &&
         ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_00,&local_9c,local_18)
          , ABS(fStack_90) <= (float)DOUBLE_00653b04 && (0.0 <= fStack_90)))) {
        (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,(CBoundingBox3D *)&stack0xffffff2c);
        if (fStack_b4 < (float)auStack_84._0_4_) {
          if (fStack_b4 + 1.0 < (float)auStack_84._0_4_) goto LAB_005c2068;
          auStack_84._0_4_ = fStack_b4;
        }
        fVar2 = (float)auStack_84._0_4_;
        if ((in_stack_ffffff40 <= (float)auStack_84._0_4_) ||
           (fVar2 = in_stack_ffffff40,
           in_stack_ffffff40 + (float)DOUBLE_00653b0c <= (float)auStack_84._0_4_)) {
          auStack_84._0_4_ = fVar2;
          local_9c.x = in_stack_ffffff40 + fStack_b4;
          local_9c.z = fStack_b8 + fStack_ac;
          local_9c.y = in_stack_ffffff44 + fStack_b0;
          fStack_7c = local_9c.z * FLOAT_00653af4;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,(CVector3f *)(auStack_74 + 8),(CVector3f *)auStack_84);
          if ((CVector3f *)(auStack_84 + 4) != pCVar3) {
            auStack_84._4_4_ = pCVar3->x;
            fStack_7c = pCVar3->y;
            fStack_78 = pCVar3->z;
          }
          fStack_8c = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_88 = (in_stack_00000004->orient_matrix).m[1].z;
          auStack_84._0_4_ = (in_stack_00000004->orient_matrix).m[2].z;
          CStack_24.y = (this_ptr_00->orient_matrix).m[0].z;
          CStack_24.z = (this_ptr_00->orient_matrix).m[1].z;
          local_18 = (CVector3f *)(this_ptr_00->orient_matrix).m[2].z;
          fVar4 = (float10)fcos((float10)DOUBLE_00653b14);
          local_14 = fStack_8c;
          if ((fVar4 <= ABS((float10)(float)auStack_84._0_4_ * (float10)(float)local_18 +
                            (float10)fStack_8c * (float10)CStack_24.y +
                            (float10)fStack_88 * (float10)CStack_24.z)) &&
             (pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (in_stack_00000004,(CVector3f *)auStack_74,
                                  &(this_ptr_00->location).position), 0.0 < pCVar3->z)) {
            in_stack_00000004[0x179].field19_0x114 = (int)this_ptr_00;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)(in_stack_00000004 + 1));
            in_stack_00000004[0x8d].create_event[0x48] = '\0';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            CStack_30.z = 2.0;
            CStack_30.x = 0.0;
            CStack_30.y = 0.0;
            pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (this_ptr_00,&CStack_24,&CStack_30);
            fStack_38 = pCVar3->x - (in_stack_00000004->location).position.x;
            fStack_34 = pCVar3->y - (in_stack_00000004->location).position.y;
            piVar1 = &in_stack_00000004[0x17b].scale.y;
            CStack_30.x = pCVar3->z - (in_stack_00000004->location).position.z;
            if ((float *)piVar1 != &fStack_38) {
              *piVar1 = (int)fStack_38;
              in_stack_00000004[0x17b].scale.z = (int)fStack_34;
              in_stack_00000004[0x17b].field19_0x114 = (int)CStack_30.x;
            }
            CStack_44.x = (float)auStack_74._0_4_ - (in_stack_00000004->location).position.x;
            CStack_44.y = (float)auStack_74._4_4_ - (in_stack_00000004->location).position.y;
            CStack_44.z = (float)auStack_74._8_4_ - (in_stack_00000004->location).position.z;
            pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_50,&CStack_44);
            this_ptr = g_CConsolePtr;
            in_stack_00000004[0x17b].field20_0x118 = (int)pCVar3->y;
            in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
            engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Climbing ladder %s\n");
            return 1;
          }
        }
      }
LAB_005c2068:
      local_14 = (float)((int)local_14 + 4);
    }
  }
  return 0;
}


// Assembly code:
// 005c1fe0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c1fe0
// 005c1fe1: PUSH ESI
// 005c1fe2: PUSH EDI
// 005c1fe3: PUSH EBP
// 005c1fe4: MOV EBP,ESP
// 005c1fe6: SUB ESP,0xd8
// 005c1fec: AND ESP,0xfffffff8
// 005c1fef: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c1ff2: PUSH 0x0
// 005c1ff4: PUSH EDI
// 005c1ff5: MOV dword ptr [EDI + 0x1fbac],0x0
// 005c1fff: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c2004: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c200b: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x14] (READ)
// 005c2012: ADD ESP,0x8
// 005c2015: FCOMP double ptr [0x00653aec]
//   XREF to: 00653aec (READ)
// 005c201b: FNSTSW AX
// 005c201d: SAHF
// 005c201e: JC 0x005c205f
//   XREF to: 005c205f (CONDITIONAL_JUMP)
// 005c2020: MOV EDX,dword ptr [EDI + 0x24b4]
// 005c2026: TEST EDX,EDX
// 005c2028: JNZ 0x005c205f
//   XREF to: 005c205f (CONDITIONAL_JUMP)
// 005c202a: CMP dword ptr [EDI + 0x24f8],0x0
// 005c2031: JNZ 0x005c205f
//   XREF to: 005c205f (CONDITIONAL_JUMP)
// 005c2033: MOV dword ptr [ESP + 0xcc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c203a: LEA EAX,[EDI + 0x20]
// 005c203d: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005c2044: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005c204b: MOV EAX,[0x006810c8]
//   Label: LAB_005c204b
//   XREF to: 006810c8 (READ)
// 005c2050: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x1c] (READ)
// 005c2057: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c205d: JL 0x005c208a
//   XREF to: 005c208a (CONDITIONAL_JUMP)
// 005c205f: XOR EAX,EAX
//   Label: LAB_005c205f
// 005c2061: MOV ESP,EBP
// 005c2063: POP EBP
// 005c2064: POP EDI
// 005c2065: POP ESI
// 005c2066: POP EBX
// 005c2067: RET
// 005c2068: MOV EBX,dword ptr [ESP + 0xcc]
//   Label: LAB_005c2068
//   XREF to: Stack[-0x1c] (READ)
// 005c206f: MOV ECX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x18] (READ)
// 005c2076: INC EBX
// 005c2077: ADD ECX,0x4
// 005c207a: MOV dword ptr [ESP + 0xcc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c2081: MOV dword ptr [ESP + 0xd0],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005c2088: JMP 0x005c204b
//   XREF to: 005c204b (UNCONDITIONAL_JUMP)
// 005c208a: MOV EBX,dword ptr [ESP + 0xd0]
//   Label: LAB_005c208a
//   XREF to: Stack[-0x18] (READ)
// 005c2091: MOV ESI,dword ptr [0x02dcd810]
//   XREF to: 02dcd810 (READ)
// 005c2097: ADD EAX,EBX
// 005c2099: PUSH ESI
// 005c209a: MOV EAX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
// 005c20a0: PUSH EAX
// 005c20a1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c20a6: MOV EBX,EAX
// 005c20a8: ADD ESP,0x8
// 005c20ab: MOV ESI,EAX
// 005c20ad: TEST EAX,EAX
// 005c20af: JZ 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c20b1: FLD float ptr [EDI + 0x24]
// 005c20b4: FSUB float ptr [EAX + 0x24]
// 005c20b7: FABS
// 005c20b9: FCOMP double ptr [0x00653afc]
//   XREF to: 00653afc (READ)
// 005c20bf: FNSTSW AX
// 005c20c1: SAHF
// 005c20c2: JA 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c20c4: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x20] (READ)
// 005c20cb: PUSH EAX
// 005c20cc: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0xa4] (DATA)
// 005c20d0: PUSH EAX
// 005c20d1: PUSH EBX
// 005c20d2: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c20d7: ADD ESP,0xc
// 005c20da: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x9c] (READ)
// 005c20de: FST double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005c20e1: FABS
// 005c20e3: FCOMP double ptr [0x00653b04]
//   XREF to: 00653b04 (READ)
// 005c20e9: FNSTSW AX
// 005c20eb: SAHF
// 005c20ec: JA 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c20f2: FLDZ
// 005c20f4: FCOMP double ptr [ESP]
//   XREF to: Stack[-0xe8] (DATA)
// 005c20f7: FNSTSW AX
// 005c20f9: SAHF
// 005c20fa: JA 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c2100: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0xe0] (DATA)
// 005c2104: PUSH EDX
// 005c2105: MOV EAX,dword ptr [EBX + 0x154]
// 005c210b: PUSH EBX
// 005c210c: CALL dword ptr [EAX + 0x14]
// 005c210f: ADD ESP,0x8
// 005c2112: FLD float ptr [ESP + 0x44]
// 005c2116: FCOMP float ptr [ESP + 0x14]
// 005c211a: FNSTSW AX
// 005c211c: SAHF
// 005c211d: JBE 0x005c213e
//   XREF to: 005c213e (CONDITIONAL_JUMP)
// 005c211f: FLD float ptr [ESP + 0x14]
// 005c2123: FLD1
// 005c2125: FADDP
// 005c2127: FLD float ptr [ESP + 0x44]
// 005c212b: FCOMPP
// 005c212d: FNSTSW AX
// 005c212f: SAHF
// 005c2130: JA 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c2136: MOV EAX,dword ptr [ESP + 0x14]
// 005c213a: MOV dword ptr [ESP + 0x44],EAX
// 005c213e: FLD float ptr [ESP + 0x44]
//   Label: LAB_005c213e
// 005c2142: FCOMP float ptr [ESP + 0x8]
// 005c2146: FNSTSW AX
// 005c2148: SAHF
// 005c2149: JNC 0x005c216c
//   XREF to: 005c216c (CONDITIONAL_JUMP)
// 005c214b: FLD float ptr [ESP + 0x8]
// 005c214f: FADD double ptr [0x00653b0c]
//   XREF to: 00653b0c (READ)
// 005c2155: FLD float ptr [ESP + 0x44]
// 005c2159: FCOMPP
// 005c215b: FNSTSW AX
// 005c215d: SAHF
// 005c215e: JC 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c2164: MOV EAX,dword ptr [ESP + 0x8]
// 005c2168: MOV dword ptr [ESP + 0x44],EAX
// 005c216c: FLD float ptr [ESP + 0x8]
//   Label: LAB_005c216c
// 005c2170: FADD float ptr [ESP + 0x14]
// 005c2174: FST float ptr [ESP + 0x2c]
// 005c2178: FLD float ptr [0x00653af4]
//   XREF to: 00653af4 (READ)
// 005c217e: FXCH
// 005c2180: FMUL ST1
// 005c2182: FLD float ptr [ESP + 0xc]
// 005c2186: FLD float ptr [ESP + 0x10]
// 005c218a: FADD float ptr [ESP + 0x1c]
// 005c218e: FXCH
// 005c2190: FADD float ptr [ESP + 0x18]
// 005c2194: FXCH
// 005c2196: FST float ptr [ESP + 0x34]
// 005c219a: FMUL ST3
// 005c219c: FXCH
// 005c219e: FST float ptr [ESP + 0x30]
// 005c21a2: FMULP ST3
// 005c21a4: FSTP float ptr [ESP + 0x28]
// 005c21a8: MOV EAX,dword ptr [ESP + 0x28]
// 005c21ac: MOV dword ptr [ESP + 0x4c],EAX
// 005c21b0: LEA EAX,[ESP + 0x44]
// 005c21b4: PUSH EAX
// 005c21b5: LEA EAX,[ESP + 0x60]
// 005c21b9: PUSH EAX
// 005c21ba: FSTP float ptr [ESP + 0x28]
// 005c21be: PUSH ESI
// 005c21bf: FSTP float ptr [ESP + 0x30]
// 005c21c3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c21c8: MOV EBX,EAX
// 005c21ca: LEA EAX,[ESP + 0x50]
// 005c21ce: ADD ESP,0xc
// 005c21d1: CMP EAX,EBX
// 005c21d3: JZ 0x005c21e9
//   XREF to: 005c21e9 (CONDITIONAL_JUMP)
// 005c21d5: MOV EAX,dword ptr [EBX]
// 005c21d7: MOV dword ptr [ESP + 0x44],EAX
// 005c21db: MOV EAX,dword ptr [EBX + 0x4]
// 005c21de: MOV dword ptr [ESP + 0x48],EAX
// 005c21e2: MOV EAX,dword ptr [EBX + 0x8]
// 005c21e5: MOV dword ptr [ESP + 0x4c],EAX
// 005c21e9: MOV EAX,dword ptr [EDI + 0x44]
//   Label: LAB_005c21e9
// 005c21ec: MOV dword ptr [ESP + 0xb0],EAX
// 005c21f3: MOV EAX,dword ptr [EDI + 0x50]
// 005c21f6: MOV dword ptr [ESP + 0xb4],EAX
// 005c21fd: MOV EAX,dword ptr [EDI + 0x5c]
// 005c2200: MOV dword ptr [ESP + 0xb8],EAX
// 005c2207: MOV EAX,dword ptr [ESP + 0xb0]
// 005c220e: MOV dword ptr [ESP + 0x38],EAX
// 005c2212: MOV EAX,dword ptr [ESP + 0xb4]
// 005c2219: MOV dword ptr [ESP + 0x3c],EAX
// 005c221d: MOV EAX,dword ptr [ESP + 0xb8]
// 005c2224: MOV dword ptr [ESP + 0x40],EAX
// 005c2228: MOV EAX,dword ptr [ESI + 0x44]
// 005c222b: MOV dword ptr [ESP + 0xbc],EAX
// 005c2232: MOV EAX,dword ptr [ESI + 0x50]
// 005c2235: MOV dword ptr [ESP + 0xc0],EAX
// 005c223c: FLD float ptr [ESP + 0xb4]
// 005c2243: FMUL float ptr [ESP + 0xc0]
// 005c224a: MOV EAX,dword ptr [ESI + 0x5c]
// 005c224d: FLD float ptr [ESP + 0xb0]
// 005c2254: MOV dword ptr [ESP + 0xc4],EAX
// 005c225b: MOV EAX,dword ptr [ESP + 0xbc]
// 005c2262: FMUL float ptr [ESP + 0xbc]
// 005c2269: MOV dword ptr [ESP + 0xa4],EAX
// 005c2270: FADDP
// 005c2272: MOV EAX,dword ptr [ESP + 0xc0]
// 005c2279: FLD float ptr [ESP + 0xb8]
// 005c2280: FMUL float ptr [ESP + 0xc4]
// 005c2287: MOV dword ptr [ESP + 0xa8],EAX
// 005c228e: MOV EAX,dword ptr [ESP + 0xc4]
// 005c2295: FADDP
// 005c2297: MOV dword ptr [ESP + 0xac],EAX
// 005c229e: FABS
// 005c22a0: FLD double ptr [0x00653b14]
//   XREF to: 00653b14 (READ)
// 005c22a6: FCOS
// 005c22a8: FCOMPP
// 005c22aa: FNSTSW AX
// 005c22ac: SAHF
// 005c22ad: JA 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c22b3: LEA EAX,[ESI + 0x20]
// 005c22b6: PUSH EAX
// 005c22b7: LEA EAX,[ESP + 0x54]
// 005c22bb: PUSH EAX
// 005c22bc: PUSH EDI
// 005c22bd: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c22c2: FLD float ptr [EAX + 0x8]
// 005c22c5: FLDZ
// 005c22c7: ADD ESP,0xc
// 005c22ca: FCOMPP
// 005c22cc: FNSTSW AX
// 005c22ce: SAHF
// 005c22cf: JNC 0x005c2068
//   XREF to: 005c2068 (CONDITIONAL_JUMP)
// 005c22d5: PUSH 0x1
// 005c22d7: PUSH 0x2a
// 005c22d9: LEA EAX,[EDI + 0x158]
// 005c22df: PUSH EAX
// 005c22e0: MOV dword ptr [EDI + 0x1fbac],ESI
// 005c22e6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c22eb: MOV EAX,0x40000000
// 005c22f0: ADD ESP,0xc
// 005c22f3: MOV dword ptr [EDI + 0xbe38],0x0
// 005c22fd: MOV dword ptr [ESP + 0x94],EAX
// 005c2304: LEA EAX,[ESP + 0x8c]
// 005c230b: PUSH EAX
// 005c230c: LEA EAX,[ESP + 0x9c]
// 005c2313: PUSH EAX
// 005c2314: LEA EBX,[EDI + 0x20]
// 005c2317: XOR EDX,EDX
// 005c2319: PUSH ESI
// 005c231a: MOV dword ptr [ESP + 0x98],EDX
// 005c2321: MOV dword ptr [ESP + 0x9c],EDX
// 005c2328: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c232d: FLD float ptr [EAX]
// 005c232f: FSUB float ptr [EBX]
// 005c2331: ADD ESP,0xc
// 005c2334: FSTP float ptr [ESP + 0x80]
// 005c233b: FLD float ptr [EAX + 0x4]
// 005c233e: FSUB float ptr [EBX + 0x4]
// 005c2341: LEA EDX,[EDI + 0x1fe54]
// 005c2347: FSTP float ptr [ESP + 0x84]
// 005c234e: FLD float ptr [EAX + 0x8]
// 005c2351: FSUB float ptr [EBX + 0x8]
// 005c2354: LEA EAX,[ESP + 0x80]
// 005c235b: FSTP float ptr [ESP + 0x88]
// 005c2362: CMP EDX,EAX
// 005c2364: JZ 0x005c2383
//   XREF to: 005c2383 (CONDITIONAL_JUMP)
// 005c2366: MOV EAX,dword ptr [ESP + 0x80]
// 005c236d: MOV dword ptr [EDX],EAX
// 005c236f: MOV EAX,dword ptr [ESP + 0x84]
// 005c2376: MOV dword ptr [EDX + 0x4],EAX
// 005c2379: MOV EAX,dword ptr [ESP + 0x88]
// 005c2380: MOV dword ptr [EDX + 0x8],EAX
// 005c2383: LEA EAX,[EDI + 0x20]
//   Label: LAB_005c2383
// 005c2386: FLD float ptr [ESP + 0x44]
// 005c238a: FSUB float ptr [EAX]
// 005c238c: FLD float ptr [ESP + 0x48]
// 005c2390: FXCH
// 005c2392: FSTP float ptr [ESP + 0x74]
// 005c2396: FSUB float ptr [EAX + 0x4]
// 005c2399: FLD float ptr [ESP + 0x4c]
// 005c239d: FXCH
// 005c239f: FSTP float ptr [ESP + 0x78]
// 005c23a3: FSUB float ptr [EAX + 0x8]
// 005c23a6: LEA EAX,[ESP + 0x74]
// 005c23aa: PUSH EAX
// 005c23ab: LEA EAX,[ESP + 0x6c]
// 005c23af: PUSH EAX
// 005c23b0: FSTP float ptr [ESP + 0x84]
// 005c23b7: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c23bc: ADD ESP,0x8
// 005c23bf: PUSH ESI
// 005c23c0: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005c23c6: PUSH 0x653ad4
//   XREF to: 00653ad4 (DATA)
// 005c23cb: FLD float ptr [EAX + 0x4]
// 005c23ce: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005c23cf: FSTP float ptr [EDI + 0x1fe60]
// 005c23d5: MOV dword ptr [EDI + 0x1fe64],0x3f800000
// 005c23df: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c23e4: MOV EAX,0x1
// 005c23e9: ADD ESP,0xc
// 005c23ec: MOV ESP,EBP
// 005c23ee: POP EBP
// 005c23ef: POP EDI
// 005c23f0: POP ESI
// 005c23f1: POP EBX
// 005c23f2: RET
