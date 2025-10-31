// Name: core_turret.cpp_FUN_005e2d50
// Address: 005e2d50
// Address Range: [[005e2d50, 005e3273]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e2d50()
// Cross-references:
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e2626 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_has_no_guard_trigger_0065675b
//   undefined4 DAT_00656778
//   undefined4 DAT_0065677c
//   undefined4 DAT_00656780
//   WatcomTypeInfo g_CVectorTypeInfo
//   undefined4 DAT_00664b6c
//   undefined4 DAT_00664b70
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   core_turret.cpp_FUN_005e3280
//   core_turret.cpp_FUN_005e3560
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e2d50(undefined4 param_1) */

void core_turret_cpp_FUN_005e2d50(void)

{
  CDemonActor *actor_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  uint corner_index;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  CBoundingBox3D local_b4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  CVector3f aCStack_90 [2];
  CVector3f aCStack_78 [3];
  undefined1 auStack_54 [8];
  float fStack_4c;
  CVector3f CStack_48;
  undefined1 auStack_3c [8];
  float fStack_34;
  float fStack_1c;
  float fStack_18;
  char *pcStack_14;
  
  if (*(int *)(in_stack_00000004[5].create_event + 0x50) == 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s has no guard trigger!\n",in_stack_00000004);
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004[5].create_event + 0x50) + 0x154) + 0x14))();
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)(auStack_d8 + 0xc));
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_b4,aCStack_78,corner_index);
    pCVar1 = (CVector3f *)
             core_actor_cpp_CDemonActor_FUN_00408ec0
                       (*(CDemonActor **)(in_stack_00000004[5].create_event + 0x50));
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_d8 + 0xc),pCVar1);
  } while ((int)corner_index < 8);
  pcStack_14 = in_stack_00000004[5].create_event + 0x54;
  uStack_9c = 0x41700000;
  uStack_98 = 0x41700000;
  uStack_94 = 0x41700000;
  aCStack_90[0].x = 999.0;
  aCStack_90[0].y = 999.0;
  aCStack_90[0].z = 999.0;
  auStack_d8._12_4_ = (float)auStack_d8._12_4_ + _DAT_00656778;
  fStack_c8 = fStack_c8 + _DAT_00656778;
  fStack_c4 = fStack_c4 + _DAT_00656778;
  fStack_c0 = fStack_c0 + _DAT_0065677c;
  fStack_bc = fStack_bc + _DAT_0065677c;
  fStack_b8 = fStack_b8 + _DAT_0065677c;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar5) {
        if ((int)aCStack_90[0].y < 0x42c60001) {
          core_turret_cpp_FUN_005e3280();
          if (in_stack_00000004[2].orient_matrix.m[1].z <= 0.0) {
            (*(in_stack_00000004->metadata).vtable[1].renderTransparent)(in_stack_00000004);
          }
          in_stack_00000004[6].orient_matrix.m[2].z = 1.0;
          return;
        }
        core_turret_cpp_FUN_005e3560();
        return;
      }
      actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4);
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,pcStack_14);
      if ((((iVar2 != 0) && ((float)auStack_d8._12_4_ <= (actor_ptr->location).position.x)) &&
          (fStack_c8 <= (actor_ptr->location).position.y)) &&
         (((fStack_c4 <= (actor_ptr->location).position.z &&
           ((actor_ptr->location).position.x <= fStack_c0)) &&
          (((actor_ptr->location).position.y <= fStack_bc &&
           ((actor_ptr->location).position.z <= fStack_b8)))))) break;
LAB_005e2ed6:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    iVar2 = (*((actor_ptr->metadata).vtable)->isActiveTarget)(actor_ptr);
    if (iVar2 == 0) goto LAB_005e2ed6;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              (&stack0xfffffea8,10,&g_CVectorTypeInfo);
    iVar2 = (*((actor_ptr->metadata).vtable)->getTargetPoints)
                      (actor_ptr,(CVector3f *)&stack0xfffffea8);
    if (iVar2 < 1) {
      pCVar3 = (*((actor_ptr->metadata).vtable)->getBoundingBox)
                         (actor_ptr,(CBoundingBox3D *)auStack_d8);
      fStack_1c = (pCVar3->min).x + (pCVar3->max).x;
      fStack_18 = (pCVar3->min).y + (pCVar3->max).y;
      fStack_4c = fStack_1c * _DAT_00656780;
      pcStack_14 = (char *)((pCVar3->min).z + (pCVar3->max).z);
      CStack_48.x = fStack_18 * _DAT_00656780;
      CStack_48.y = (float)pcStack_14 * _DAT_00656780;
      if (&fStack_148 != &fStack_4c) {
        fStack_148 = fStack_4c;
        fStack_144 = CStack_48.x;
        fStack_140 = CStack_48.y;
      }
    }
    core_actor_cpp_CDemonActor_FUN_00408ec0(actor_ptr);
    pCVar1 = core_actor_cpp_CDemonActor_FUN_00408f10
                       (*(CDemonActor **)(in_stack_00000004[5].create_event + 0x50));
    if (((pCVar1->x < local_b4.min.x) || (pCVar1->y < local_b4.min.y)) ||
       ((pCVar1->z < local_b4.min.z ||
        (((local_b4.max.x < pCVar1->x || (local_b4.max.y < pCVar1->y)) ||
         (local_b4.max.z < pCVar1->z)))))) goto LAB_005e2ed6;
    pCVar1 = core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar1);
    if (((CStack_48.x < DAT_00664b6c) || (DAT_00664b70 < CStack_48.x)) ||
       (SQRT(aCStack_90[0].z * aCStack_90[0].z +
             aCStack_90[0].x * aCStack_90[0].x + aCStack_90[0].y * aCStack_90[0].y) <
        SQRT(CStack_48.z * CStack_48.z + CStack_48.x * CStack_48.x + CStack_48.y * CStack_48.y)))
    goto LAB_005e2ed6;
    if (aCStack_90 != &CStack_48) {
      aCStack_90[0].x = CStack_48.x;
      aCStack_90[0].y = CStack_48.y;
      aCStack_90[0].z = CStack_48.z;
    }
    if (auStack_3c == auStack_54) goto LAB_005e2ed6;
    fStack_34 = fStack_4c;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}


// Assembly code:
// 005e2d50: PUSH EBX
//   Label: core_turret.cpp_FUN_005e2d50
// 005e2d51: PUSH ESI
// 005e2d52: PUSH EDI
// 005e2d53: PUSH EBP
// 005e2d54: SUB ESP,0x14c
// 005e2d5a: MOV ESI,dword ptr [ESP + 0x160]
//   XREF to: Stack[0x4] (READ)
// 005e2d61: MOV EDX,dword ptr [ESI + 0x780]
// 005e2d67: TEST EDX,EDX
// 005e2d69: JZ 0x005e2edc
//   XREF to: 005e2edc (CONDITIONAL_JUMP)
// 005e2d6f: MOV EAX,EDX
// 005e2d71: MOV EBX,dword ptr [EDX + 0x154]
// 005e2d77: LEA EDX,[ESP + 0xa8]
//   XREF to: Stack[-0xb4] (DATA)
// 005e2d7e: PUSH EDX
// 005e2d7f: PUSH EAX
// 005e2d80: CALL dword ptr [EBX + 0x14]
// 005e2d83: ADD ESP,0x8
// 005e2d86: LEA EAX,[ESP + 0x90]
// 005e2d8d: PUSH EAX
// 005e2d8e: XOR EBX,EBX
// 005e2d90: CALL core_box.cpp_CBoundingBox3D_reset_FUN_00420fb0
//   XREF to: 00420fb0 (UNCONDITIONAL_CALL)
// 005e2d95: ADD ESP,0x4
// 005e2d98: PUSH EBX
//   Label: LAB_005e2d98
// 005e2d99: LEA EAX,[ESP + 0xe8]
// 005e2da0: PUSH EAX
// 005e2da1: LEA EAX,[ESP + 0xb0]
// 005e2da8: PUSH EAX
// 005e2da9: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 005e2dae: ADD ESP,0xc
// 005e2db1: PUSH EAX
// 005e2db2: LEA EAX,[ESP + 0xf4]
// 005e2db9: PUSH EAX
// 005e2dba: MOV EDI,dword ptr [ESI + 0x780]
// 005e2dc0: PUSH EDI
// 005e2dc1: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e2dc6: ADD ESP,0xc
// 005e2dc9: PUSH EAX
// 005e2dca: LEA EAX,[ESP + 0x94]
// 005e2dd1: PUSH EAX
// 005e2dd2: INC EBX
// 005e2dd3: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 005e2dd8: ADD ESP,0x8
// 005e2ddb: CMP EBX,0x8
// 005e2dde: JL 0x005e2d98
//   XREF to: 005e2d98 (CONDITIONAL_JUMP)
// 005e2de0: FLD float ptr [ESP + 0x90]
// 005e2de7: FLD float ptr [ESP + 0x94]
// 005e2dee: FLD float ptr [ESP + 0x98]
// 005e2df5: FLD float ptr [ESP + 0x9c]
// 005e2dfc: FLD float ptr [ESP + 0xa0]
// 005e2e03: FLD float ptr [ESP + 0xa4]
// 005e2e0a: MOV EBP,0x41700000
// 005e2e0f: MOV ECX,0x4479c000
// 005e2e14: LEA EAX,[ESI + 0x784]
// 005e2e1a: MOV dword ptr [ESP + 0xc0],EBP
// 005e2e21: MOV dword ptr [ESP + 0xc4],EBP
// 005e2e28: MOV dword ptr [ESP + 0xc8],EBP
// 005e2e2f: MOV dword ptr [ESP + 0xcc],ECX
// 005e2e36: MOV dword ptr [ESP + 0xd0],ECX
// 005e2e3d: MOV EDI,ECX
// 005e2e3f: MOV dword ptr [ESP + 0xd4],ECX
// 005e2e46: MOV dword ptr [ESP + 0x148],EAX
// 005e2e4d: FXCH ST5
// 005e2e4f: FLD float ptr [0x00656778]
//   XREF to: 00656778 (READ)
// 005e2e55: FXCH
// 005e2e57: FADD ST0,ST1
// 005e2e59: FXCH ST5
// 005e2e5b: FADD ST0,ST1
// 005e2e5d: FXCH ST4
// 005e2e5f: FADDP
// 005e2e61: FXCH ST2
// 005e2e63: FLD float ptr [0x0065677c]
//   XREF to: 0065677c (READ)
// 005e2e69: FXCH
// 005e2e6b: FADD ST0,ST1
// 005e2e6d: FXCH ST2
// 005e2e6f: FADD ST0,ST1
// 005e2e71: FXCH ST6
// 005e2e73: FADDP
// 005e2e75: FXCH ST4
// 005e2e77: FSTP float ptr [ESP + 0x90]
// 005e2e7e: FXCH ST2
// 005e2e80: FSTP float ptr [ESP + 0x94]
// 005e2e87: FSTP float ptr [ESP + 0x98]
// 005e2e8e: FSTP float ptr [ESP + 0x9c]
// 005e2e95: FXCH
// 005e2e97: FSTP float ptr [ESP + 0xa0]
// 005e2e9e: FSTP float ptr [ESP + 0xa4]
// 005e2ea5: XOR EDI,ECX
// 005e2ea7: XOR EBP,EBP
// 005e2ea9: MOV EAX,[0x006810c8]
//   Label: LAB_005e2ea9
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 005e2eae: CMP EDI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005e2eb4: JGE 0x005e3200
//   XREF to: 005e3200 (CONDITIONAL_JUMP)
// 005e2eba: MOV EBX,dword ptr [EAX + EBP*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 005e2ec1: MOV EAX,dword ptr [ESP + 0x148]
// 005e2ec8: PUSH EAX
// 005e2ec9: PUSH EBX
// 005e2eca: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005e2ecf: ADD ESP,0x8
// 005e2ed2: TEST EAX,EAX
// 005e2ed4: JNZ 0x005e2efc
//   XREF to: 005e2efc (CONDITIONAL_JUMP)
// 005e2ed6: INC EDI
//   Label: LAB_005e2ed6
// 005e2ed7: ADD EBP,0x4
// 005e2eda: JMP 0x005e2ea9
//   XREF to: 005e2ea9 (UNCONDITIONAL_JUMP)
// 005e2edc: PUSH ESI
//   Label: LAB_005e2edc
// 005e2edd: PUSH 0x65675b
//   XREF to: 0065675b (DATA)
// 005e2ee2: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005e2ee8: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005e2ee9: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005e2eee: ADD ESP,0xc
// 005e2ef1: ADD ESP,0x14c
// 005e2ef7: POP EBP
// 005e2ef8: POP EDI
// 005e2ef9: POP ESI
// 005e2efa: POP EBX
// 005e2efb: RET
// 005e2efc: LEA EDX,[EBX + 0x20]
//   Label: LAB_005e2efc
// 005e2eff: FLD float ptr [ESP + 0x90]
// 005e2f06: FCOMP float ptr [EDX]
// 005e2f08: FNSTSW AX
// 005e2f0a: SAHF
// 005e2f0b: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f0d: FLD float ptr [ESP + 0x94]
// 005e2f14: FCOMP float ptr [EDX + 0x4]
// 005e2f17: FNSTSW AX
// 005e2f19: SAHF
// 005e2f1a: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f1c: FLD float ptr [ESP + 0x98]
// 005e2f23: FCOMP float ptr [EDX + 0x8]
// 005e2f26: FNSTSW AX
// 005e2f28: SAHF
// 005e2f29: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f2b: FLD float ptr [ESP + 0x9c]
// 005e2f32: FCOMP float ptr [EDX]
// 005e2f34: FNSTSW AX
// 005e2f36: SAHF
// 005e2f37: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f39: FLD float ptr [ESP + 0xa0]
// 005e2f40: FCOMP float ptr [EDX + 0x4]
// 005e2f43: FNSTSW AX
// 005e2f45: SAHF
// 005e2f46: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f48: FLD float ptr [ESP + 0xa4]
// 005e2f4f: FCOMP float ptr [EDX + 0x8]
// 005e2f52: FNSTSW AX
// 005e2f54: SAHF
// 005e2f55: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f5b: PUSH EBX
// 005e2f5c: MOV EAX,dword ptr [EBX + 0x154]
// 005e2f62: CALL dword ptr [EAX + 0x54]
// 005e2f65: ADD ESP,0x4
// 005e2f68: TEST EAX,EAX
// 005e2f6a: JZ 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e2f70: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005e2f75: PUSH 0xa
// 005e2f77: LEA EAX,[ESP + 0x8]
// 005e2f7b: PUSH EAX
// 005e2f7c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005e2f81: ADD ESP,0xc
// 005e2f84: MOV EAX,ESP
// 005e2f86: PUSH EAX
// 005e2f87: MOV EDX,dword ptr [EBX + 0x154]
// 005e2f8d: PUSH EBX
// 005e2f8e: CALL dword ptr [EDX + 0x4c]
// 005e2f91: ADD ESP,0x8
// 005e2f94: CMP EAX,0x1
// 005e2f97: JGE 0x005e3033
//   XREF to: 005e3033 (CONDITIONAL_JUMP)
// 005e2f9d: LEA EDX,[ESP + 0x78]
// 005e2fa1: PUSH EDX
// 005e2fa2: MOV EAX,dword ptr [EBX + 0x154]
// 005e2fa8: PUSH EBX
// 005e2fa9: CALL dword ptr [EAX + 0x14]
// 005e2fac: LEA EDX,[EAX + 0xc]
// 005e2faf: FLD float ptr [EAX]
// 005e2fb1: FADD float ptr [EDX]
// 005e2fb3: ADD ESP,0x8
// 005e2fb6: FST float ptr [ESP + 0x12c]
// 005e2fbd: FLD float ptr [EAX + 0x4]
// 005e2fc0: FADD float ptr [EDX + 0x4]
// 005e2fc3: FXCH
// 005e2fc5: FLD float ptr [0x00656780]
//   XREF to: 00656780 (READ)
// 005e2fcb: FXCH
// 005e2fcd: FMUL ST1
// 005e2fcf: FXCH ST2
// 005e2fd1: FST float ptr [ESP + 0x130]
// 005e2fd8: FLD float ptr [EAX + 0x8]
// 005e2fdb: FADD float ptr [EDX + 0x8]
// 005e2fde: FXCH
// 005e2fe0: FMUL ST2
// 005e2fe2: FXCH
// 005e2fe4: FST float ptr [ESP + 0x134]
// 005e2feb: FMULP ST2
// 005e2fed: LEA EAX,[ESP + 0xfc]
// 005e2ff4: FXCH ST2
// 005e2ff6: FSTP float ptr [ESP + 0xfc]
// 005e2ffd: FXCH
// 005e2fff: FSTP float ptr [ESP + 0x100]
// 005e3006: MOV EDX,ESP
// 005e3008: FSTP float ptr [ESP + 0x104]
// 005e300f: CMP EDX,EAX
// 005e3011: JZ 0x005e3033
//   XREF to: 005e3033 (CONDITIONAL_JUMP)
// 005e3013: MOV EAX,dword ptr [ESP + 0xfc]
// 005e301a: MOV dword ptr [ESP],EAX
// 005e301d: MOV EAX,dword ptr [ESP + 0x100]
// 005e3024: MOV dword ptr [ESP + 0x4],EAX
// 005e3028: MOV EAX,dword ptr [ESP + 0x104]
// 005e302f: MOV dword ptr [ESP + 0x8],EAX
// 005e3033: MOV EAX,ESP
//   Label: LAB_005e3033
// 005e3035: PUSH EAX
// 005e3036: LEA EAX,[ESP + 0x10c]
// 005e303d: PUSH EAX
// 005e303e: PUSH EBX
// 005e303f: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005e3044: ADD ESP,0xc
// 005e3047: LEA EAX,[ESP + 0x108]
// 005e304e: PUSH EAX
// 005e304f: LEA EAX,[ESP + 0x13c]
// 005e3056: PUSH EAX
// 005e3057: MOV EDX,dword ptr [ESI + 0x780]
// 005e305d: PUSH EDX
// 005e305e: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e3063: ADD ESP,0xc
// 005e3066: MOV EBX,EAX
// 005e3068: FLD float ptr [ESP + 0xa8]
// 005e306f: FCOMP float ptr [EAX]
// 005e3071: FNSTSW AX
// 005e3073: SAHF
// 005e3074: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e307a: FLD float ptr [ESP + 0xac]
// 005e3081: FCOMP float ptr [EBX + 0x4]
// 005e3084: FNSTSW AX
// 005e3086: SAHF
// 005e3087: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e308d: FLD float ptr [ESP + 0xb0]
// 005e3094: FCOMP float ptr [EBX + 0x8]
// 005e3097: FNSTSW AX
// 005e3099: SAHF
// 005e309a: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e30a0: FLD float ptr [ESP + 0xb4]
// 005e30a7: FCOMP float ptr [EBX]
// 005e30a9: FNSTSW AX
// 005e30ab: SAHF
// 005e30ac: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e30b2: FLD float ptr [ESP + 0xb8]
// 005e30b9: FCOMP float ptr [EBX + 0x4]
// 005e30bc: FNSTSW AX
// 005e30be: SAHF
// 005e30bf: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e30c5: FLD float ptr [ESP + 0xbc]
// 005e30cc: FCOMP float ptr [EBX + 0x8]
// 005e30cf: FNSTSW AX
// 005e30d1: SAHF
// 005e30d2: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e30d8: LEA EAX,[ESP + 0x108]
// 005e30df: PUSH EAX
// 005e30e0: LEA EAX,[ESP + 0xdc]
// 005e30e7: PUSH EAX
// 005e30e8: PUSH ESI
// 005e30e9: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005e30ee: ADD ESP,0xc
// 005e30f1: PUSH EAX
// 005e30f2: LEA EAX,[ESP + 0x118]
// 005e30f9: PUSH EAX
// 005e30fa: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005e30ff: ADD ESP,0x8
// 005e3102: FLD float ptr [ESP + 0x114]
// 005e3109: FCOMP float ptr [0x00664b6c]
//   XREF to: 00664b6c (READ)
// 005e310f: FNSTSW AX
// 005e3111: SAHF
// 005e3112: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e3118: FLD float ptr [ESP + 0x114]
// 005e311f: FCOMP float ptr [0x00664b70]
//   XREF to: 00664b70 (READ)
// 005e3125: FNSTSW AX
// 005e3127: SAHF
// 005e3128: JA 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e312e: FLD float ptr [ESP + 0x118]
// 005e3135: FMUL ST0
// 005e3137: FLD float ptr [ESP + 0x114]
// 005e313e: FMUL ST0
// 005e3140: FADDP
// 005e3142: FLD float ptr [ESP + 0x11c]
// 005e3149: FMUL ST0
// 005e314b: FADDP
// 005e314d: FSQRT
// 005e314f: FLD float ptr [ESP + 0xd0]
// 005e3156: FMUL ST0
// 005e3158: FLD float ptr [ESP + 0xcc]
// 005e315f: FMUL ST0
// 005e3161: FADDP
// 005e3163: FLD float ptr [ESP + 0xd4]
// 005e316a: FMUL ST0
// 005e316c: FADDP
// 005e316e: FSQRT
// 005e3170: FCOMPP
// 005e3172: FNSTSW AX
// 005e3174: SAHF
// 005e3175: JC 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e317b: LEA EDX,[ESP + 0xcc]
// 005e3182: LEA EAX,[ESP + 0x114]
// 005e3189: CMP EDX,EAX
// 005e318b: JZ 0x005e31b7
//   XREF to: 005e31b7 (CONDITIONAL_JUMP)
// 005e318d: MOV EAX,dword ptr [ESP + 0x114]
// 005e3194: MOV dword ptr [ESP + 0xcc],EAX
// 005e319b: MOV EAX,dword ptr [ESP + 0x118]
// 005e31a2: MOV dword ptr [ESP + 0xd0],EAX
// 005e31a9: MOV EAX,dword ptr [ESP + 0x11c]
// 005e31b0: MOV dword ptr [ESP + 0xd4],EAX
// 005e31b7: LEA EDX,[ESP + 0x120]
//   Label: LAB_005e31b7
// 005e31be: LEA EAX,[ESP + 0x108]
// 005e31c5: CMP EDX,EAX
// 005e31c7: JZ 0x005e2ed6
//   XREF to: 005e2ed6 (CONDITIONAL_JUMP)
// 005e31cd: MOV EAX,dword ptr [ESP + 0x108]
// 005e31d4: MOV dword ptr [ESP + 0x120],EAX
// 005e31db: MOV EAX,dword ptr [ESP + 0x10c]
// 005e31e2: MOV dword ptr [ESP + 0x124],EAX
// 005e31e9: MOV EAX,dword ptr [ESP + 0x110]
// 005e31f0: MOV dword ptr [ESP + 0x128],EAX
// 005e31f7: INC EDI
// 005e31f8: ADD EBP,0x4
// 005e31fb: JMP 0x005e2ea9
//   XREF to: 005e2ea9 (UNCONDITIONAL_JUMP)
// 005e3200: CMP dword ptr [ESP + 0xd0],0x42c60000
//   Label: LAB_005e3200
// 005e320b: JG 0x005e3259
//   XREF to: 005e3259 (CONDITIONAL_JUMP)
// 005e320d: LEA EAX,[ESP + 0x120]
// 005e3214: PUSH dword ptr [ESP + 0x164]
// 005e321b: PUSH EAX
// 005e321c: PUSH ESI
// 005e321d: CALL core_turret.cpp_FUN_005e3280
//   XREF to: 005e3280 (UNCONDITIONAL_CALL)
// 005e3222: FLD float ptr [ESI + 0x300]
// 005e3228: FLDZ
// 005e322a: ADD ESP,0xc
// 005e322d: FCOMPP
// 005e322f: FNSTSW AX
// 005e3231: SAHF
// 005e3232: JC 0x005e3244
//   XREF to: 005e3244 (CONDITIONAL_JUMP)
// 005e3234: PUSH ESI
// 005e3235: MOV EAX,dword ptr [ESI + 0x154]
// 005e323b: CALL dword ptr [EAX + 0xf8]
// 005e3241: ADD ESP,0x4
// 005e3244: MOV dword ptr [ESI + 0x86c],0x3f800000
//   Label: LAB_005e3244
// 005e324e: ADD ESP,0x14c
// 005e3254: POP EBP
// 005e3255: POP EDI
// 005e3256: POP ESI
// 005e3257: POP EBX
// 005e3258: RET
// 005e3259: PUSH dword ptr [ESP + 0x164]
//   Label: LAB_005e3259
// 005e3260: PUSH ESI
// 005e3261: CALL core_turret.cpp_FUN_005e3560
//   XREF to: 005e3560 (UNCONDITIONAL_CALL)
// 005e3266: ADD ESP,0x8
// 005e3269: ADD ESP,0x14c
// 005e326f: POP EBP
// 005e3270: POP EDI
// 005e3271: POP ESI
// 005e3272: POP EBX
// 005e3273: RET
