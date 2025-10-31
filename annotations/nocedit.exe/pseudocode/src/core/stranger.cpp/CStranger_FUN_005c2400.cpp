// Name: core_stranger.cpp_CStranger_FUN_005c2400
// Address: 005c2400
// Address Range: [[005c2400, 005c2846]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c2400()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5e23 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_Ladder_dot_:_%f_00653b1c
//   undefined4 DAT_00653b34
//   undefined4 DAT_00653b3c
//   undefined4 DAT_00653b44
//   undefined4 DAT_00653b4c
//   undefined4 DAT_00653b54
//   undefined4 DAT_00653b5c
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   undefined4 g_CLadderClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_charactr.cpp_CCharacter_FUN_0042e840
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c2400(CStranger* param_1) */

undefined4 core_stranger_cpp_CStranger_FUN_005c2400(void)

{
  int *piVar1;
  float fVar2;
  CDemonActor *this_ptr;
  float *pfVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffff38;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_30;
  float fStack_2c;
  float local_28;
  CLocation *pCStack_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  in_stack_00000004[0x17a].orient.heading = 0.0;
  fStack_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)_DAT_00653b34 <= fStack_14) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    pCStack_24 = &in_stack_00000004->location;
    local_1c = 0.0;
    for (local_18 = 0.0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_18 = (float)((int)local_18 + 1)) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)local_1c),
                            g_CLadderClassInfo.name_hash);
      if (((this_ptr != (CDemonActor *)0x0) &&
          (ABS((in_stack_00000004->location).position.y -
               ((this_ptr->location).position.y + this_ptr[2].location.position.z)) <=
           (float)_DAT_00653b44)) &&
         ((core_actor_cpp_CDemonActor_FUN_00408f10(this_ptr), ABS(fStack_bc) <= (float)_DAT_00653b4c
          && (fStack_bc <= 0.0)))) {
        (*((this_ptr->metadata).vtable)->getBoundingBox)
                  (this_ptr,(CBoundingBox3D *)&stack0xffffff24);
        if (fStack_bc < fStack_b0) {
          if (fStack_bc + 1.0 < fStack_b0) goto LAB_005c2488;
          fStack_b0 = fStack_bc;
        }
        fVar2 = fStack_b0;
        if ((in_stack_ffffff38 <= fStack_b0) ||
           (fVar2 = in_stack_ffffff38, in_stack_ffffff38 + (float)_DAT_00653b54 <= fStack_b0)) {
          fStack_b0 = fVar2;
          fStack_5c = in_stack_ffffff38 + fStack_bc;
          fStack_74 = fStack_5c * _DAT_00653b3c;
          fStack_54 = fStack_c0 + fStack_b4;
          fStack_58 = fStack_c4 + fStack_b8;
          fStack_a8 = fStack_54 * _DAT_00653b3c;
          fStack_70 = fStack_58 * _DAT_00653b3c;
          fStack_6c = fStack_a8;
          pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0(this_ptr);
          if (&fStack_ac != pfVar3) {
            fStack_ac = *pfVar3;
            fStack_a8 = pfVar3[1];
            fStack_a4 = pfVar3[2];
          }
          fStack_a8 = fStack_a8 + this_ptr[2].location.position.z;
          CStack_90.z = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_84 = (in_stack_00000004->orient_matrix).m[1].z;
          fStack_80 = (in_stack_00000004->orient_matrix).m[2].z;
          fStack_94 = (this_ptr->orient_matrix).m[0].z;
          CStack_90.x = (this_ptr->orient_matrix).m[1].z;
          CStack_90.y = (this_ptr->orient_matrix).m[2].z;
          fVar5 = (float10)fcos((float10)_DAT_00653b5c);
          local_1c = fStack_84;
          local_18 = fStack_94;
          fStack_14 = CStack_90.x;
          if ((fVar5 <= (float10)ABS(fStack_80 * CStack_90.y +
                                     CStack_90.z * fStack_94 + fStack_84 * CStack_90.x)) &&
             (pCVar4 = core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004), 0.0 < pCVar4->z))
          {
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (g_CConsolePtr,"?Ladder dot : %f\n" + 1);
            in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
            in_stack_00000004[0x8d].create_event[0x48] = '\0';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            fStack_6c = this_ptr[2].location.position.z;
            fStack_70 = 0.0;
            uStack_68 = 0xbfc00000;
            pfVar3 = core_actor_cpp_CDemonActor_FUN_00408ec0(this_ptr);
            fStack_30 = *pfVar3 - (in_stack_00000004->location).position.x;
            fStack_2c = pfVar3[1] - (in_stack_00000004->location).position.y;
            piVar1 = &in_stack_00000004[0x17b].scale.y;
            local_28 = pfVar3[2] - (in_stack_00000004->location).position.z;
            if ((float *)piVar1 != &fStack_30) {
              *piVar1 = (int)fStack_30;
              in_stack_00000004[0x17b].scale.z = (int)fStack_2c;
              in_stack_00000004[0x17b].field19_0x114 = (int)local_28;
            }
            local_18 = fStack_9c - (in_stack_00000004->location).position.x;
            fStack_14 = fStack_98 - (in_stack_00000004->location).position.y;
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_90,(CVector3f *)&local_18);
            in_stack_00000004[0x17b].field20_0x118 = (int)pCVar4->y;
            in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
            return 1;
          }
        }
      }
LAB_005c2488:
      local_1c = (float)((int)local_1c + 4);
    }
  }
  return 0;
}


// Assembly code:
// 005c2400: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c2400
// 005c2401: PUSH ESI
// 005c2402: PUSH EDI
// 005c2403: PUSH EBP
// 005c2404: MOV EBP,ESP
// 005c2406: SUB ESP,0xe4
// 005c240c: AND ESP,0xfffffff8
// 005c240f: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c2412: PUSH 0x0
// 005c2414: PUSH EDI
// 005c2415: MOV dword ptr [EDI + 0x1fc28],0x0
// 005c241f: CALL core_charactr.cpp_CCharacter_FUN_0042e840
//   XREF to: 0042e840 (UNCONDITIONAL_CALL)
// 005c2424: MOV dword ptr [ESP + 0xe8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c242b: FLD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x18] (READ)
// 005c2432: ADD ESP,0x8
// 005c2435: FCOMP double ptr [0x00653b34]
//   XREF to: 00653b34 (READ)
// 005c243b: FNSTSW AX
// 005c243d: SAHF
// 005c243e: JC 0x005c247f
//   XREF to: 005c247f (CONDITIONAL_JUMP)
// 005c2440: MOV EDX,dword ptr [EDI + 0x24b4]
// 005c2446: TEST EDX,EDX
// 005c2448: JNZ 0x005c247f
//   XREF to: 005c247f (CONDITIONAL_JUMP)
// 005c244a: CMP dword ptr [EDI + 0x24f8],0x0
// 005c2451: JNZ 0x005c247f
//   XREF to: 005c247f (CONDITIONAL_JUMP)
// 005c2453: MOV dword ptr [ESP + 0xdc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c245a: LEA EAX,[EDI + 0x20]
// 005c245d: MOV dword ptr [ESP + 0xd8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005c2464: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c246b: MOV EAX,[0x006810c8]
//   Label: LAB_005c246b
//   XREF to: 006810c8 (READ)
// 005c2470: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005c2477: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005c247d: JL 0x005c24aa
//   XREF to: 005c24aa (CONDITIONAL_JUMP)
// 005c247f: XOR EAX,EAX
//   Label: LAB_005c247f
// 005c2481: MOV ESP,EBP
// 005c2483: POP EBP
// 005c2484: POP EDI
// 005c2485: POP ESI
// 005c2486: POP EBX
// 005c2487: RET
// 005c2488: MOV EBX,dword ptr [ESP + 0xdc]
//   Label: LAB_005c2488
//   XREF to: Stack[-0x1c] (READ)
// 005c248f: MOV ECX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (READ)
// 005c2496: INC EBX
// 005c2497: ADD ECX,0x4
// 005c249a: MOV dword ptr [ESP + 0xdc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c24a1: MOV dword ptr [ESP + 0xd8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 005c24a8: JMP 0x005c246b
//   XREF to: 005c246b (UNCONDITIONAL_JUMP)
// 005c24aa: MOV EBX,dword ptr [ESP + 0xd8]
//   Label: LAB_005c24aa
//   XREF to: Stack[-0x20] (READ)
// 005c24b1: MOV ESI,dword ptr [0x02dcd810]
//   XREF to: 02dcd810 (READ)
// 005c24b7: ADD EAX,EBX
// 005c24b9: PUSH ESI
// 005c24ba: MOV EAX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
// 005c24c0: PUSH EAX
// 005c24c1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c24c6: MOV EBX,EAX
// 005c24c8: ADD ESP,0x8
// 005c24cb: MOV ESI,EAX
// 005c24cd: TEST EAX,EAX
// 005c24cf: JZ 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c24d1: FLD float ptr [EBX + 0x24]
// 005c24d4: FADD float ptr [EAX + 0x2d8]
// 005c24da: FSUBR float ptr [EDI + 0x24]
// 005c24dd: FABS
// 005c24df: FCOMP double ptr [0x00653b44]
//   XREF to: 00653b44 (READ)
// 005c24e5: FNSTSW AX
// 005c24e7: SAHF
// 005c24e8: JA 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c24ea: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x28] (READ)
// 005c24f1: PUSH EAX
// 005c24f2: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0xd0] (DATA)
// 005c24f6: PUSH EAX
// 005c24f7: PUSH EBX
// 005c24f8: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c24fd: ADD ESP,0xc
// 005c2500: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc8] (READ)
// 005c2504: FST double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (WRITE)
// 005c2508: FABS
// 005c250a: FCOMP double ptr [0x00653b4c]
//   XREF to: 00653b4c (READ)
// 005c2510: FNSTSW AX
// 005c2512: SAHF
// 005c2513: JA 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c2519: FLDZ
// 005c251b: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xf0] (READ)
// 005c251f: FNSTSW AX
// 005c2521: SAHF
// 005c2522: JC 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c2528: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xe8] (DATA)
// 005c252c: PUSH EAX
// 005c252d: MOV EDX,dword ptr [EBX + 0x154]
// 005c2533: PUSH EBX
// 005c2534: CALL dword ptr [EDX + 0x14]
// 005c2537: ADD ESP,0x8
// 005c253a: FLD float ptr [ESP + 0x28]
// 005c253e: FCOMP float ptr [ESP + 0x1c]
// 005c2542: FNSTSW AX
// 005c2544: SAHF
// 005c2545: JBE 0x005c2566
//   XREF to: 005c2566 (CONDITIONAL_JUMP)
// 005c2547: FLD float ptr [ESP + 0x1c]
// 005c254b: FLD1
// 005c254d: FADDP
// 005c254f: FLD float ptr [ESP + 0x28]
// 005c2553: FCOMPP
// 005c2555: FNSTSW AX
// 005c2557: SAHF
// 005c2558: JA 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c255e: MOV EAX,dword ptr [ESP + 0x1c]
// 005c2562: MOV dword ptr [ESP + 0x28],EAX
// 005c2566: FLD float ptr [ESP + 0x28]
//   Label: LAB_005c2566
// 005c256a: FCOMP float ptr [ESP + 0x10]
// 005c256e: FNSTSW AX
// 005c2570: SAHF
// 005c2571: JNC 0x005c2594
//   XREF to: 005c2594 (CONDITIONAL_JUMP)
// 005c2573: FLD float ptr [ESP + 0x10]
// 005c2577: FADD double ptr [0x00653b54]
//   XREF to: 00653b54 (READ)
// 005c257d: FLD float ptr [ESP + 0x28]
// 005c2581: FCOMPP
// 005c2583: FNSTSW AX
// 005c2585: SAHF
// 005c2586: JC 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c258c: MOV EAX,dword ptr [ESP + 0x10]
// 005c2590: MOV dword ptr [ESP + 0x28],EAX
// 005c2594: FLD float ptr [ESP + 0x10]
//   Label: LAB_005c2594
// 005c2598: FADD float ptr [ESP + 0x1c]
// 005c259c: FST float ptr [ESP + 0x7c]
// 005c25a0: FLD float ptr [0x00653b3c]
//   XREF to: 00653b3c (READ)
// 005c25a6: FXCH
// 005c25a8: FMUL ST1
// 005c25aa: FLD float ptr [ESP + 0x14]
// 005c25ae: FLD float ptr [ESP + 0x18]
// 005c25b2: FADD float ptr [ESP + 0x24]
// 005c25b6: FXCH
// 005c25b8: FADD float ptr [ESP + 0x20]
// 005c25bc: FXCH
// 005c25be: FST float ptr [ESP + 0x84]
// 005c25c5: FMUL ST3
// 005c25c7: FXCH
// 005c25c9: FST float ptr [ESP + 0x80]
// 005c25d0: FMULP ST3
// 005c25d2: FSTP float ptr [ESP + 0x6c]
// 005c25d6: MOV EAX,dword ptr [ESP + 0x6c]
// 005c25da: MOV dword ptr [ESP + 0x30],EAX
// 005c25de: LEA EAX,[ESP + 0x28]
// 005c25e2: PUSH EAX
// 005c25e3: LEA EAX,[ESP + 0x74]
// 005c25e7: PUSH EAX
// 005c25e8: FSTP float ptr [ESP + 0x6c]
// 005c25ec: PUSH ESI
// 005c25ed: FSTP float ptr [ESP + 0x74]
// 005c25f1: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c25f6: MOV EBX,EAX
// 005c25f8: LEA EAX,[ESP + 0x34]
// 005c25fc: ADD ESP,0xc
// 005c25ff: CMP EAX,EBX
// 005c2601: JZ 0x005c2617
//   XREF to: 005c2617 (CONDITIONAL_JUMP)
// 005c2603: MOV EAX,dword ptr [EBX]
// 005c2605: MOV dword ptr [ESP + 0x28],EAX
// 005c2609: MOV EAX,dword ptr [EBX + 0x4]
// 005c260c: MOV dword ptr [ESP + 0x2c],EAX
// 005c2610: MOV EAX,dword ptr [EBX + 0x8]
// 005c2613: MOV dword ptr [ESP + 0x30],EAX
// 005c2617: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005c2617
// 005c261b: FADD float ptr [ESI + 0x2d8]
// 005c2621: FSTP float ptr [ESP + 0x2c]
// 005c2625: MOV EAX,dword ptr [EDI + 0x44]
// 005c2628: MOV dword ptr [ESP + 0xd4],EAX
// 005c262f: MOV EAX,dword ptr [EDI + 0x50]
// 005c2632: MOV dword ptr [ESP + 0xb8],EAX
// 005c2639: MOV EAX,dword ptr [EDI + 0x5c]
// 005c263c: MOV dword ptr [ESP + 0xc8],EAX
// 005c2643: MOV EAX,dword ptr [ESP + 0xd4]
// 005c264a: MOV dword ptr [ESP + 0x4c],EAX
// 005c264e: MOV EAX,dword ptr [ESP + 0xb8]
// 005c2655: MOV dword ptr [ESP + 0x50],EAX
// 005c2659: MOV EAX,dword ptr [ESP + 0xc8]
// 005c2660: MOV dword ptr [ESP + 0x54],EAX
// 005c2664: MOV EAX,dword ptr [ESI + 0x44]
// 005c2667: MOV dword ptr [ESP + 0xbc],EAX
// 005c266e: MOV EAX,dword ptr [ESI + 0x50]
// 005c2671: MOV dword ptr [ESP + 0xc0],EAX
// 005c2678: MOV EAX,dword ptr [ESI + 0x5c]
// 005c267b: MOV dword ptr [ESP + 0xc4],EAX
// 005c2682: MOV EAX,dword ptr [ESP + 0xbc]
// 005c2689: MOV dword ptr [ESP + 0x40],EAX
// 005c268d: MOV EAX,dword ptr [ESP + 0xc0]
// 005c2694: MOV dword ptr [ESP + 0x44],EAX
// 005c2698: MOV EAX,dword ptr [ESP + 0xc4]
// 005c269f: FLD double ptr [0x00653b5c]
//   XREF to: 00653b5c (READ)
// 005c26a5: MOV dword ptr [ESP + 0x48],EAX
// 005c26a9: FCOS
// 005c26ab: FLD float ptr [ESP + 0xb8]
// 005c26b2: FMUL float ptr [ESP + 0xc0]
// 005c26b9: FLD float ptr [ESP + 0xd4]
// 005c26c0: FMUL float ptr [ESP + 0xbc]
// 005c26c7: FADDP
// 005c26c9: FLD float ptr [ESP + 0xc8]
// 005c26d0: FMUL float ptr [ESP + 0xc4]
// 005c26d7: FADDP
// 005c26d9: FABS
// 005c26db: FSTP double ptr [ESP]
// 005c26de: FCOMP double ptr [ESP]
// 005c26e1: FNSTSW AX
// 005c26e3: SAHF
// 005c26e4: JA 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c26ea: LEA EAX,[ESI + 0x20]
// 005c26ed: PUSH EAX
// 005c26ee: LEA EAX,[ESP + 0x8c]
// 005c26f5: PUSH EAX
// 005c26f6: PUSH EDI
// 005c26f7: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005c26fc: FLD float ptr [EAX + 0x8]
// 005c26ff: FLDZ
// 005c2701: ADD ESP,0xc
// 005c2704: FCOMPP
// 005c2706: FNSTSW AX
// 005c2708: SAHF
// 005c2709: JNC 0x005c2488
//   XREF to: 005c2488 (CONDITIONAL_JUMP)
// 005c270f: MOV EDX,dword ptr [ESP + 0x4]
// 005c2713: PUSH EDX
// 005c2714: MOV ECX,dword ptr [ESP + 0x4]
// 005c2718: PUSH ECX
// 005c2719: PUSH 0x653b1c
//   XREF to: 00653b1c (DATA)
// 005c271e: MOV EBX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005c2724: PUSH EBX
//   XREF to: 0083b1a4 (DATA)
// 005c2725: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c272a: ADD ESP,0x10
// 005c272d: PUSH 0x1
// 005c272f: PUSH 0x2b
// 005c2731: LEA EAX,[EDI + 0x158]
// 005c2737: PUSH EAX
// 005c2738: MOV dword ptr [EDI + 0x1fc28],ESI
// 005c273e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c2743: MOV dword ptr [EDI + 0xbe38],0x0
// 005c274d: ADD ESP,0xc
// 005c2750: MOV EAX,dword ptr [ESI + 0x2d8]
// 005c2756: MOV dword ptr [ESP + 0xcc],EAX
// 005c275d: XOR EAX,EAX
// 005c275f: MOV dword ptr [ESP + 0x58],EAX
// 005c2763: MOV EAX,dword ptr [ESP + 0xcc]
// 005c276a: MOV dword ptr [ESP + 0x5c],EAX
// 005c276e: LEA EAX,[ESP + 0x58]
// 005c2772: PUSH EAX
// 005c2773: LEA EAX,[ESP + 0xa4]
// 005c277a: PUSH EAX
// 005c277b: MOV EDX,0xbfc00000
// 005c2780: PUSH ESI
// 005c2781: LEA EBX,[EDI + 0x20]
// 005c2784: MOV dword ptr [ESP + 0x6c],EDX
// 005c2788: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005c278d: FLD float ptr [EAX]
// 005c278f: FSUB float ptr [EBX]
// 005c2791: ADD ESP,0xc
// 005c2794: FSTP float ptr [ESP + 0x94]
// 005c279b: FLD float ptr [EAX + 0x4]
// 005c279e: FSUB float ptr [EBX + 0x4]
// 005c27a1: LEA EDX,[EDI + 0x1fe54]
// 005c27a7: FSTP float ptr [ESP + 0x98]
// 005c27ae: FLD float ptr [EAX + 0x8]
// 005c27b1: FSUB float ptr [EBX + 0x8]
// 005c27b4: LEA EAX,[ESP + 0x94]
// 005c27bb: FSTP float ptr [ESP + 0x9c]
// 005c27c2: CMP EDX,EAX
// 005c27c4: JZ 0x005c27e3
//   XREF to: 005c27e3 (CONDITIONAL_JUMP)
// 005c27c6: MOV EAX,dword ptr [ESP + 0x94]
// 005c27cd: MOV dword ptr [EDX],EAX
// 005c27cf: MOV EAX,dword ptr [ESP + 0x98]
// 005c27d6: MOV dword ptr [EDX + 0x4],EAX
// 005c27d9: MOV EAX,dword ptr [ESP + 0x9c]
// 005c27e0: MOV dword ptr [EDX + 0x8],EAX
// 005c27e3: LEA EAX,[EDI + 0x20]
//   Label: LAB_005c27e3
// 005c27e6: FLD float ptr [ESP + 0x28]
// 005c27ea: FSUB float ptr [EAX]
// 005c27ec: FLD float ptr [ESP + 0x2c]
// 005c27f0: FXCH
// 005c27f2: FSTP float ptr [ESP + 0xac]
// 005c27f9: FSUB float ptr [EAX + 0x4]
// 005c27fc: FLD float ptr [ESP + 0x30]
// 005c2800: FXCH
// 005c2802: FSTP float ptr [ESP + 0xb0]
// 005c2809: FSUB float ptr [EAX + 0x8]
// 005c280c: LEA EAX,[ESP + 0xac]
// 005c2813: PUSH EAX
// 005c2814: LEA EAX,[ESP + 0x38]
// 005c2818: PUSH EAX
// 005c2819: FSTP float ptr [ESP + 0xbc]
// 005c2820: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005c2825: FLD float ptr [EAX + 0x4]
// 005c2828: ADD ESP,0x8
// 005c282b: FSTP float ptr [EDI + 0x1fe60]
// 005c2831: MOV EAX,0x1
// 005c2836: MOV dword ptr [EDI + 0x1fe64],0x3f800000
// 005c2840: MOV ESP,EBP
// 005c2842: POP EBP
// 005c2843: POP EDI
// 005c2844: POP ESI
// 005c2845: POP EBX
// 005c2846: RET
