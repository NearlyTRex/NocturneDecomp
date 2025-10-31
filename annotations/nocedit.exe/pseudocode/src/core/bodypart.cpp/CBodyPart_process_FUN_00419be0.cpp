// Name: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// Address: 00419be0
// Address Range: [[00419be0, 00419db9]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_CBodyPart_process_FUN_00419be0()
// Globals:
//   TerminatedCString s_disableBodyPartDamage_00615def
//   undefined4 DAT_00615e0c
//   CEventList* g_CEventListPtr = 02d05310
//   undefined4 DAT_02d05310
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   core_bodypart.cpp_FUN_00419e10
//   core_bodypart.cpp_FUN_0041b1b0
//   core_box.cpp_CBox_process_FUN_0041e2f0
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_bodypart.cpp_FUN_00419be0(undefined4 param_1, undefined4
   param_2) */

void core_bodypart_cpp_CBodyPart_process_FUN_00419be0(void)

{
  CVector3f *pCVar1;
  float fVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_0000000c;
  undefined1 auStack_3c [4];
  float fStack_38;
  float local_14;
  CDemonActor *local_10;
  CDemonActor *local_c;
  
  if ((*(int *)(in_stack_00000004[1].actor_name + 0x1c) < 3) ||
     ((int)in_stack_00000004[1].location.position.z < 1)) {
    in_stack_00000004->was_created = 2;
    core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0();
    pCVar1 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x10);
    if (pCVar1 != &g_ZeroVector) {
      pCVar1->x = g_ZeroVector.x;
      *(float *)(in_stack_00000004[1].actor_name + 0x14) = g_ZeroVector.y;
      *(float *)(in_stack_00000004[1].actor_name + 0x18) = g_ZeroVector.z;
    }
    if ((CVector3f *)(in_stack_00000004[1].actor_name + 4) != pCVar1) {
      ((CVector3f *)(in_stack_00000004[1].actor_name + 4))->x = pCVar1->x;
      *(undefined4 *)(in_stack_00000004[1].actor_name + 8) =
           *(undefined4 *)(in_stack_00000004[1].actor_name + 0x14);
      *(undefined4 *)(in_stack_00000004[1].actor_name + 0xc) =
           *(undefined4 *)(in_stack_00000004[1].actor_name + 0x18);
      return;
    }
  }
  else {
    if ((*(int *)in_stack_00000004[1].actor_name != 0) &&
       (in_stack_00000004[0xb].orient_matrix.m[2].y == 0.0)) {
      core_bodypart_cpp_FUN_00419e10();
      return;
    }
    if ((in_stack_00000004[0xb].runtime_state != 0) ||
       (in_stack_00000004[0xb].orient_matrix.m[2].y != 0.0)) {
      core_bodypart_cpp_FUN_0041b1b0();
    }
    if (in_stack_00000004[0xb].runtime_state == 0) {
      fVar2 = *(float *)(in_stack_00000004[9].create_event + 0x2c) - in_stack_0000000c;
      *(float *)(in_stack_00000004[9].create_event + 0x2c) = fVar2;
      if (0.0 <= fVar2) {
        local_14 = (in_stack_00000004->location).position.x;
        local_10 = (CDemonActor *)(in_stack_00000004->location).position.y;
        local_c = (CDemonActor *)(in_stack_00000004->location).position.z;
        core_box_cpp_CBox_process_FUN_0041e2f0
                  ((CBox *)(in_stack_00000004[9].create_event + 0x3c),in_stack_0000000c);
        (in_stack_00000004->location).position.x =
             (((CBox *)(in_stack_00000004[9].create_event + 0x3c))->position).x;
        (in_stack_00000004->location).position.y =
             *(float *)(in_stack_00000004[9].create_event + 0x40);
        (in_stack_00000004->location).position.z =
             *(float *)(in_stack_00000004[9].create_event + 0x44);
        if (&in_stack_00000004->orient != (COrientation *)(in_stack_00000004[9].create_event + 0x48)
           ) {
          (in_stack_00000004->orient).pitch = *(float *)(in_stack_00000004[9].create_event + 0x48);
          (in_stack_00000004->orient).bank = *(float *)(in_stack_00000004[9].create_event + 0x4c);
          (in_stack_00000004->orient).heading = *(float *)(in_stack_00000004[9].create_event + 0x50)
          ;
        }
        core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
        fVar2 = in_stack_00000004[9].field_236.z;
        if (((float)_DAT_00615e0c <
             SQRT((float)in_stack_00000004[9].is_transparent *
                  (float)in_stack_00000004[9].is_transparent +
                  fVar2 * fVar2 +
                  (float)in_stack_00000004[9].field14_0xf8 *
                  (float)in_stack_00000004[9].field14_0xf8)) &&
           (iVar3 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                              (g_CEventListPtr,"disableBodyPartDamage"), iVar3 == 0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffbc);
          fStack_38 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,15.0);
          core_setcolid_cpp_CDemonSet_notifyDamageListeners_FUN_005742b0
                    (g_CDemonSetPtr,(SDamageInfo *)&stack0x00000000,
                     &(in_stack_00000004->location).position,auStack_3c);
          core_bodypart_cpp_FUN_00419e10();
          return;
        }
      }
      else {
        in_stack_00000004[0xb].orient_matrix.m[2].y = 0.0;
        in_stack_00000004[9].create_event[0x2c] = '\0';
        in_stack_00000004[9].create_event[0x2d] = '\0';
        in_stack_00000004[9].create_event[0x2e] = '\0';
        in_stack_00000004[9].create_event[0x2f] = '\0';
      }
    }
    core_bodypart_cpp_FUN_00419e10();
  }
  return;
}


// Assembly code:
// 00419be0: PUSH EBX
//   Label: core_bodypart.cpp_CBodyPart_process_FUN_00419be0
// 00419be1: PUSH ESI
// 00419be2: SUB ESP,0x4c
// 00419be5: MOV EBX,dword ptr [ESP + 0x58]
// 00419be9: CMP dword ptr [EBX + 0x174],0x3
// 00419bf0: JL 0x00419c73
//   XREF to: 00419c73 (CONDITIONAL_JUMP)
// 00419bf6: CMP dword ptr [EBX + 0x180],0x1
// 00419bfd: JL 0x00419c73
//   XREF to: 00419c73 (CONDITIONAL_JUMP)
// 00419bff: CMP dword ptr [EBX + 0x158],0x0
// 00419c06: JZ 0x00419c15
//   XREF to: 00419c15 (CONDITIONAL_JUMP)
// 00419c08: CMP dword ptr [EBX + 0xf20],0x0
// 00419c0f: JZ 0x00419cd0
//   XREF to: 00419cd0 (CONDITIONAL_JUMP)
// 00419c15: CMP dword ptr [EBX + 0xf28],0x0
//   Label: LAB_00419c15
// 00419c1c: JZ 0x00419ce3
//   XREF to: 00419ce3 (CONDITIONAL_JUMP)
// 00419c22: PUSH EBX
//   Label: LAB_00419c22
// 00419c23: CALL core_bodypart.cpp_FUN_0041b1b0
//   XREF to: 0041b1b0 (UNCONDITIONAL_CALL)
// 00419c28: ADD ESP,0x4
// 00419c2b: PUSH EDI
//   Label: LAB_00419c2b
// 00419c2c: MOV EDX,dword ptr [EBX + 0xf28]
// 00419c32: TEST EDX,EDX
// 00419c34: JNZ 0x00419c5f
//   XREF to: 00419c5f (CONDITIONAL_JUMP)
// 00419c36: FLD float ptr [EBX + 0xcbc]
// 00419c3c: FSUB float ptr [ESP + 0x60]
// 00419c40: FST float ptr [EBX + 0xcbc]
// 00419c46: FLDZ
// 00419c48: FCOMPP
// 00419c4a: FNSTSW AX
// 00419c4c: SAHF
// 00419c4d: JBE 0x00419cf5
//   XREF to: 00419cf5 (CONDITIONAL_JUMP)
// 00419c53: MOV dword ptr [EBX + 0xf20],EDX
// 00419c59: MOV dword ptr [EBX + 0xcbc],EDX
// 00419c5f: PUSH dword ptr [ESP + 0x60]
//   Label: LAB_00419c5f
// 00419c63: PUSH EBX
// 00419c64: CALL core_bodypart.cpp_FUN_00419e10
//   XREF to: 00419e10 (UNCONDITIONAL_CALL)
// 00419c69: ADD ESP,0x8
// 00419c6c: POP EDI
// 00419c6d: ADD ESP,0x4c
//   Label: LAB_00419c6d
// 00419c70: POP ESI
// 00419c71: POP EBX
// 00419c72: RET
// 00419c73: PUSH 0x0
//   Label: LAB_00419c73
// 00419c75: PUSH 0x0
// 00419c77: PUSH EBX
// 00419c78: MOV dword ptr [EBX + 0x70],0x2
// 00419c7f: CALL core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0
//   XREF to: 004191d0 (UNCONDITIONAL_CALL)
// 00419c84: LEA EAX,[EBX + 0x168]
// 00419c8a: ADD ESP,0xc
// 00419c8d: MOV ESI,EAX
// 00419c8f: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 00419c94: JZ 0x00419cb0
//   XREF to: 00419cb0 (CONDITIONAL_JUMP)
// 00419c96: MOV EDX,dword ptr [0x03f87558]
//   XREF to: 03f87558 (READ)
// 00419c9c: MOV dword ptr [EAX],EDX
// 00419c9e: MOV EDX,dword ptr [0x03f8755c]
//   XREF to: 03f8755c (READ)
// 00419ca4: MOV dword ptr [EAX + 0x4],EDX
// 00419ca7: MOV EDX,dword ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 00419cad: MOV dword ptr [EAX + 0x8],EDX
// 00419cb0: ADD EBX,0x15c
//   Label: LAB_00419cb0
// 00419cb6: CMP EBX,ESI
// 00419cb8: JZ 0x00419c6d
//   XREF to: 00419c6d (CONDITIONAL_JUMP)
// 00419cba: MOV EAX,dword ptr [ESI]
// 00419cbc: MOV dword ptr [EBX],EAX
// 00419cbe: MOV EAX,dword ptr [ESI + 0x4]
// 00419cc1: MOV dword ptr [EBX + 0x4],EAX
// 00419cc4: MOV EAX,dword ptr [ESI + 0x8]
// 00419cc7: MOV dword ptr [EBX + 0x8],EAX
// 00419cca: ADD ESP,0x4c
// 00419ccd: POP ESI
// 00419cce: POP EBX
// 00419ccf: RET
// 00419cd0: PUSH dword ptr [ESP + 0x5c]
//   Label: LAB_00419cd0
// 00419cd4: PUSH EBX
// 00419cd5: CALL core_bodypart.cpp_FUN_00419e10
//   XREF to: 00419e10 (UNCONDITIONAL_CALL)
// 00419cda: ADD ESP,0x8
// 00419cdd: ADD ESP,0x4c
// 00419ce0: POP ESI
// 00419ce1: POP EBX
// 00419ce2: RET
// 00419ce3: CMP dword ptr [EBX + 0xf20],0x0
//   Label: LAB_00419ce3
// 00419cea: JNZ 0x00419c22
//   XREF to: 00419c22 (CONDITIONAL_JUMP)
// 00419cf0: JMP 0x00419c2b
//   XREF to: 00419c2b (UNCONDITIONAL_JUMP)
// 00419cf5: LEA ESI,[EBX + 0x20]
//   Label: LAB_00419cf5
// 00419cf8: MOV EAX,dword ptr [ESI]
// 00419cfa: MOV dword ptr [ESP + 0x40],EAX
// 00419cfe: LEA EAX,[ESI + 0x4]
// 00419d01: MOV EAX,dword ptr [EAX]
// 00419d03: MOV dword ptr [ESP + 0x44],EAX
// 00419d07: LEA EAX,[ESI + 0x8]
// 00419d0a: PUSH dword ptr [ESP + 0x60]
// 00419d0e: LEA EDI,[EBX + 0xccc]
// 00419d14: MOV EAX,dword ptr [EAX]
// 00419d16: PUSH EDI
// 00419d17: MOV dword ptr [ESP + 0x50],EAX
// 00419d1b: CALL core_box.cpp_CBox_process_FUN_0041e2f0
//   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)
// 00419d20: MOV EAX,dword ptr [EDI]
// 00419d22: MOV dword ptr [ESI],EAX
// 00419d24: MOV EAX,dword ptr [EDI + 0x4]
// 00419d27: MOV dword ptr [ESI + 0x4],EAX
// 00419d2a: MOV EAX,dword ptr [EDI + 0x8]
// 00419d2d: MOV dword ptr [ESI + 0x8],EAX
// 00419d30: LEA ESI,[EBX + 0x30]
// 00419d33: LEA EAX,[EBX + 0xcd8]
// 00419d39: ADD ESP,0x8
// 00419d3c: CMP ESI,EAX
// 00419d3e: JZ 0x00419d50
//   XREF to: 00419d50 (CONDITIONAL_JUMP)
// 00419d40: MOV EDX,dword ptr [EAX]
// 00419d42: MOV dword ptr [ESI],EDX
// 00419d44: MOV EDX,dword ptr [EAX + 0x4]
// 00419d47: MOV dword ptr [ESI + 0x4],EDX
// 00419d4a: MOV EDX,dword ptr [EAX + 0x8]
// 00419d4d: MOV dword ptr [ESI + 0x8],EDX
// 00419d50: PUSH EBX
//   Label: LAB_00419d50
// 00419d51: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00419d56: LEA EAX,[EBX + 0xd0c]
// 00419d5c: FLD float ptr [EAX + 0x4]
// 00419d5f: FMUL ST0
// 00419d61: FLD float ptr [EAX]
// 00419d63: FMUL ST0
// 00419d65: FADDP
// 00419d67: FLD float ptr [EAX + 0x8]
// 00419d6a: FMUL ST0
// 00419d6c: FADDP
// 00419d6e: FSQRT
// 00419d70: ADD ESP,0x4
// 00419d73: FCOMP double ptr [0x00615e0c]
//   XREF to: 00615e0c (READ)
// 00419d79: FNSTSW AX
// 00419d7b: SAHF
// 00419d7c: JBE 0x00419c5f
//   XREF to: 00419c5f (CONDITIONAL_JUMP)
// 00419d82: PUSH 0x615def
//   XREF to: 00615def (DATA)
// 00419d87: MOV ECX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00419d8d: PUSH ECX
//   XREF to: 02d05310 (DATA)
// 00419d8e: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00419d93: ADD ESP,0x8
// 00419d96: TEST EAX,EAX
// 00419d98: JNZ 0x00419c5f
//   XREF to: 00419c5f (CONDITIONAL_JUMP)
// 00419d9e: LEA EAX,[ESP + 0x4]
// 00419da2: PUSH EAX
// 00419da3: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00419da8: ADD ESP,0x4
// 00419dab: PUSH 0x41700000
// 00419db0: PUSH 0x41200000
// 00419db5: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
