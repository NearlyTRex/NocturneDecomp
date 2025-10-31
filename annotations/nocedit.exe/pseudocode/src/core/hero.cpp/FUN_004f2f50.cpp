// Name: core_hero.cpp_FUN_004f2f50
// Address: 004f2f50
// Address Range: [[004f2f50, 004f30eb]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2f50()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fdf8 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4034 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1285 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8608 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5de2 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d90c0 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062ec36 = 5
//   double DOUBLE_0062ec3e = 3
//   double DOUBLE_0062ec46 = 1.04719755116667
//   undefined4 DAT_0062ec4e
//   float FLOAT_0062ec52 = -2
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CLeverClassInfo.name_hash
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_event.cpp_FUN_004b18e0
//   core_lever.cpp_FUN_00505080
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f2f50(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f2f50(void)

{
  float fVar1;
  CDemonActor *pCVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int iVar5;
  int iVar6;
  CDemonActor *in_stack_00000004;
  CVector3f local_34;
  CVector3f CStack_28;
  CLocation *local_1c;
  undefined4 local_18;
  
  local_1c = &in_stack_00000004->location;
  iVar5 = 0;
  local_18 = 0x7149f2ca;
  in_stack_00000004[0x179].scale.z = 0;
  for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                        g_CLeverClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
      if ((((ABS(local_34.y) <= (float)DOUBLE_0062ec36) && (0.0 <= (double)local_34.z)) &&
          ((double)local_34.z <= DOUBLE_0062ec3e)) && (ABS(local_34.x) <= (float)DOUBLE_0062ec3e)) {
        pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_28,&local_34);
        if (ABS(pCVar3->y) <= (float)DOUBLE_0062ec46) {
          iVar4 = core_lever_cpp_FUN_00505080();
          if (iVar4 != 0) {
            local_34.x = 0.0;
            fVar1 = SQRT((CStack_28.y + FLOAT_0062ec52) * (CStack_28.y + FLOAT_0062ec52) +
                         (local_34.z + _DAT_0062ec4e) * (local_34.z + _DAT_0062ec4e));
            local_34.y = 2.0;
            if (fVar1 <= unaff_ESI) {
              in_stack_00000004[0x179].scale.z = (int)pCVar2;
              unaff_ESI = fVar1;
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  if (in_stack_00000004[0x179].scale.z != 0) {
    iVar5 = core_event_cpp_FUN_004b18e0();
    if (iVar5 == 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004f2f50: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2f50
// 004f2f51: PUSH ESI
// 004f2f52: PUSH EDI
// 004f2f53: PUSH EBP
// 004f2f54: MOV EBP,ESP
// 004f2f56: SUB ESP,0x40
// 004f2f59: AND ESP,0xfffffff8
// 004f2f5c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2f5f: MOV EDX,0x7149f2ca
// 004f2f64: XOR EDI,EDI
// 004f2f66: ADD EAX,0x20
// 004f2f69: XOR ESI,ESI
// 004f2f6b: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004f2f6f: MOV dword ptr [EAX + 0x1fb88],0x0
// 004f2f79: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f2f7d: MOV EAX,[0x006810c8]
//   Label: LAB_004f2f7d
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004f2f82: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f2f88: JL 0x004f2fa4
//   XREF to: 004f2fa4 (CONDITIONAL_JUMP)
// 004f2f8a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2f8d: MOV EBX,dword ptr [EAX + 0x1fba8]
// 004f2f93: TEST EBX,EBX
// 004f2f95: JNZ 0x004f30bc
//   XREF to: 004f30bc (CONDITIONAL_JUMP)
// 004f2f9b: XOR EAX,EAX
//   Label: LAB_004f2f9b
// 004f2f9d: MOV ESP,EBP
// 004f2f9f: POP EBP
// 004f2fa0: POP EDI
// 004f2fa1: POP ESI
// 004f2fa2: POP EBX
// 004f2fa3: RET
// 004f2fa4: MOV EDX,dword ptr [0x02dd3090]
//   Label: LAB_004f2fa4
//   XREF to: 02dd3090 (READ)
// 004f2faa: PUSH EDX
// 004f2fab: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004f2fb2: PUSH ECX
// 004f2fb3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f2fb8: MOV EBX,EAX
// 004f2fba: ADD ESP,0x8
// 004f2fbd: TEST EAX,EAX
// 004f2fbf: JZ 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f2fc5: ADD EAX,0x20
// 004f2fc8: PUSH EAX
// 004f2fc9: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x3c] (DATA)
// 004f2fcd: PUSH EAX
// 004f2fce: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2fd1: PUSH EAX
// 004f2fd2: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f2fd7: ADD ESP,0xc
// 004f2fda: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 004f2fde: FABS
// 004f2fe0: FCOMP double ptr [0x0062ec36]
//   XREF to: 0062ec36 (READ)
// 004f2fe6: FNSTSW AX
// 004f2fe8: SAHF
// 004f2fe9: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f2fef: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 004f2ff3: FLDZ
// 004f2ff5: FXCH
// 004f2ff7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004f2ffa: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004f2ffd: FNSTSW AX
// 004f2fff: SAHF
// 004f3000: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f3006: FLD double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 004f3009: FCOMP double ptr [0x0062ec3e]
//   XREF to: 0062ec3e (READ)
// 004f300f: FNSTSW AX
// 004f3011: SAHF
// 004f3012: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f3018: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 004f301c: FABS
// 004f301e: FCOMP double ptr [0x0062ec3e]
//   XREF to: 0062ec3e (READ)
// 004f3024: FNSTSW AX
// 004f3026: SAHF
// 004f3027: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f302d: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 004f3031: PUSH EAX
// 004f3032: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 004f3036: PUSH EAX
// 004f3037: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f303c: FLD float ptr [EAX + 0x4]
// 004f303f: FABS
// 004f3041: ADD ESP,0x8
// 004f3044: FCOMP double ptr [0x0062ec46]
//   XREF to: 0062ec46 (READ)
// 004f304a: FNSTSW AX
// 004f304c: SAHF
// 004f304d: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f304f: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x1c] (READ)
// 004f3053: PUSH EDX
// 004f3054: PUSH EBX
// 004f3055: CALL core_lever.cpp_FUN_00505080
//   XREF to: 00505080 (UNCONDITIONAL_CALL)
// 004f305a: ADD ESP,0x8
// 004f305d: TEST EAX,EAX
// 004f305f: JZ 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f3061: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 004f3065: FADD float ptr [0x0062ec4e]
//   XREF to: 0062ec4e (READ)
// 004f306b: FMUL ST0
// 004f306d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x34] (READ)
// 004f3071: FADD float ptr [0x0062ec52]
//   XREF to: 0062ec52 (READ)
// 004f3077: FMUL ST0
// 004f3079: XOR EAX,EAX
// 004f307b: FADDP
// 004f307d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004f3081: FSQRT
// 004f3083: MOV ECX,0x3f000000
// 004f3088: MOV EDX,0x40000000
// 004f308d: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 004f3091: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 004f3095: FST float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (WRITE)
// 004f3099: FCOMP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x18] (READ)
// 004f309d: FNSTSW AX
// 004f309f: SAHF
// 004f30a0: JA 0x004f30b3
//   XREF to: 004f30b3 (CONDITIONAL_JUMP)
// 004f30a2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f30a5: MOV dword ptr [EAX + 0x1fba8],EBX
// 004f30ab: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x14] (READ)
// 004f30af: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f30b3: INC EDI
//   Label: LAB_004f30b3
// 004f30b4: ADD ESI,0x4
// 004f30b7: JMP 0x004f2f7d
//   XREF to: 004f2f7d (UNCONDITIONAL_JUMP)
// 004f30bc: LEA EAX,[EBX + 0x420]
//   Label: LAB_004f30bc
// 004f30c2: PUSH EAX
// 004f30c3: CALL core_event.cpp_FUN_004b18e0
//   XREF to: 004b18e0 (UNCONDITIONAL_CALL)
// 004f30c8: ADD ESP,0x4
// 004f30cb: TEST EAX,EAX
// 004f30cd: JNZ 0x004f2f9b
//   XREF to: 004f2f9b (CONDITIONAL_JUMP)
// 004f30d3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f30d6: MOV dword ptr [EAX + 0xbe38],0x0
// 004f30e0: MOV EAX,0x1
// 004f30e5: MOV ESP,EBP
// 004f30e7: POP EBP
// 004f30e8: POP EDI
// 004f30e9: POP ESI
// 004f30ea: POP EBX
// 004f30eb: RET
