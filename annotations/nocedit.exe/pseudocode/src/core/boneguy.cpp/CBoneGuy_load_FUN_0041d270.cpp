// Name: core_boneguy.cpp_CBoneGuy_load_FUN_0041d270
// Address: 0041d270
// Address Range: [[0041d270, 0041d4b2]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_CBoneGuy_load_FUN_0041d270()
// Globals:
//   TerminatedCString s_speed_0061623d
//   TerminatedCString s_modelName_00616243
//   TerminatedCString s_guardDistance_0061624d
//   TerminatedCString s_motion_state_0061625b
//   TerminatedCString s_deathEvent_00616268
//   TerminatedCString s_recombineTime_00616273
//   TerminatedCString s_blownUp_00616281
//   TerminatedCString s_param_00616289
//   TerminatedCString s_boxCount_0061628f
//   TerminatedCString s_partStatus_00616298
//   TerminatedCString s_boxListPos_006162a3
//   TerminatedCString s_boxListOrient_006162ae
//   TerminatedCString s_boxListDestOrient_006162bc
//   TerminatedCString s_boxListStartOrient_006162ce
//   TerminatedCString s_sourcePos_006162e1
//   TerminatedCString s_boxListPart_006162eb
//   TerminatedCString s_victimHeight_006162f7
//   undefined4 g_CBoneGuyClassVersion
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_actor.cpp_serializeQuaternion_FUN_0040b520
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_actor.cpp_serializeVector_FUN_0040b340
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: CBoneGuy* actors_enemy_boneguy.cpp_CBoneGuy_load(CBoneGuy* param_1, char* param_2) */

void core_boneguy_cpp_CBoneGuy_load_FUN_0041d270(void)

{
  CQuaternion4f *quat_ptr;
  int iVar1;
  CVector3f *vector_ptr;
  CVector3f *vector_ptr_00;
  CQuaternion4f *quat_ptr_00;
  CEnemy *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CDemonActor *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000030;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770((float *)(in_stack_00000008 + 0xbe24),"speed")
  ;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            ((CDeformableModelInstance *)(in_stack_0000000c + 0x158),"modelName");
  if (g_CBoneGuyClassVersion < 4) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000010 + 0xbe34),"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            ((CMotionController *)((int)in_stack_00000014 + 0x158),"motion state");
  if (1 < g_CBoneGuyClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000018 + 0xbed0),"deathEvent");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_0000001c + 0xbf34),"recombineTime");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000020 + 0xc4dc),"blownUp");
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000024 + 0xc4e0),"param");
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)(in_stack_00000028 + 0xbf38),"boxCount");
    core_actor_cpp_serializePartStatus_FUN_0040bae0
              ((CMotionController *)((int)in_stack_00000014 + 0x158),"partStatus");
    iVar1 = 0;
    if (0 < *(int *)(in_stack_00000030 + 0xbf38)) {
      vector_ptr_00 = (CVector3f *)(in_stack_00000030 + 0xbf74);
      quat_ptr_00 = (CQuaternion4f *)(in_stack_00000030 + 0xbf54);
      in_stack_00000014 = (CDemonActor *)(in_stack_00000030 + 0xbf64);
      vector_ptr = (CVector3f *)(in_stack_00000030 + 0xbf48);
      do {
        quat_ptr = (CQuaternion4f *)(iVar1 * 0x48 + in_stack_00000030 + 0xbf3c);
        core_actor_cpp_serializeVector_FUN_0040b340((CVector3f *)quat_ptr,"boxListPos");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr,"boxListOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(quat_ptr_00,"boxListDestOrient");
        core_actor_cpp_serializeQuaternion_FUN_0040b520(quat_ptr,"boxListStartOrient");
        core_actor_cpp_serializeVector_FUN_0040b340(vector_ptr_00,"sourcePos");
        iVar1 = iVar1 + 1;
        vector_ptr = vector_ptr + 6;
        quat_ptr_00 = (CQuaternion4f *)&quat_ptr_00[4].y;
        core_actor_cpp_serializeActor_FUN_0040b870(in_stack_00000014,"boxListPart");
        vector_ptr_00 = vector_ptr_00 + 6;
        in_stack_00000014 = (CDemonActor *)((in_stack_00000014->orient_matrix).m + 1);
      } while (iVar1 < *(int *)(in_stack_00000030 + 0xbf38));
    }
  }
  if ((2 < g_CBoneGuyClassVersion) && (g_CBoneGuyClassVersion < 5)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              ((float *)(in_stack_00000030 + 0xbeb0),"victimHeight");
    return;
  }
  return;
}


// Assembly code:
// 0041d270: PUSH EBX
//   Label: core_boneguy.cpp_CBoneGuy_load_FUN_0041d270
// 0041d271: PUSH ESI
// 0041d272: PUSH EDI
// 0041d273: PUSH EBP
// 0041d274: SUB ESP,0xc
// 0041d277: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d27b: PUSH EDX
// 0041d27c: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0041d281: ADD ESP,0x4
// 0041d284: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d288: PUSH 0x61623d
//   XREF to: 0061623d (DATA)
// 0041d28d: ADD EAX,0xbe24
// 0041d292: PUSH EAX
// 0041d293: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041d298: ADD ESP,0x8
// 0041d29b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d29f: PUSH 0x616243
//   XREF to: 00616243 (DATA)
// 0041d2a4: ADD EAX,0x158
// 0041d2a9: PUSH EAX
// 0041d2aa: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 0041d2af: MOV ECX,dword ptr [0x0066e594]
//   XREF to: 0066e594 (READ)
// 0041d2b5: ADD ESP,0x8
// 0041d2b8: CMP ECX,0x4
// 0041d2bb: JL 0x0041d478
//   XREF to: 0041d478 (CONDITIONAL_JUMP)
// 0041d2c1: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_0041d2c1
//   XREF to: Stack[0x4] (READ)
// 0041d2c5: PUSH 0x61625b
//   XREF to: 0061625b (DATA)
// 0041d2ca: ADD EBX,0x158
// 0041d2d0: PUSH EBX
// 0041d2d1: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 0041d2d6: MOV ESI,dword ptr [0x0066e594]
//   XREF to: 0066e594 (READ)
// 0041d2dc: ADD ESP,0x8
// 0041d2df: CMP ESI,0x2
// 0041d2e2: JL 0x0041d460
//   XREF to: 0041d460 (CONDITIONAL_JUMP)
// 0041d2e8: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d2ec: PUSH 0x616268
//   XREF to: 00616268 (DATA)
// 0041d2f1: ADD EAX,0xbed0
// 0041d2f6: PUSH EAX
// 0041d2f7: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0041d2fc: ADD ESP,0x8
// 0041d2ff: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d303: PUSH 0x616273
//   XREF to: 00616273 (DATA)
// 0041d308: ADD EAX,0xbf34
// 0041d30d: PUSH EAX
// 0041d30e: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041d313: ADD ESP,0x8
// 0041d316: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d31a: PUSH 0x616281
//   XREF to: 00616281 (DATA)
// 0041d31f: ADD EAX,0xc4dc
// 0041d324: PUSH EAX
// 0041d325: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0041d32a: ADD ESP,0x8
// 0041d32d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d331: PUSH 0x616289
//   XREF to: 00616289 (DATA)
// 0041d336: ADD EAX,0xc4e0
// 0041d33b: PUSH EAX
// 0041d33c: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041d341: ADD ESP,0x8
// 0041d344: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d348: PUSH 0x61628f
//   XREF to: 0061628f (DATA)
// 0041d34d: ADD EAX,0xbf38
// 0041d352: PUSH EAX
// 0041d353: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0041d358: ADD ESP,0x8
// 0041d35b: PUSH 0x616298
//   XREF to: 00616298 (DATA)
// 0041d360: PUSH EBX
// 0041d361: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 0041d366: ADD ESP,0x8
// 0041d369: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d36d: MOV EDI,dword ptr [EAX + 0xbf38]
// 0041d373: XOR EBX,EBX
// 0041d375: TEST EDI,EDI
// 0041d377: JLE 0x0041d460
//   XREF to: 0041d460 (CONDITIONAL_JUMP)
// 0041d37d: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d381: ADD EAX,0xbf3c
// 0041d386: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d38a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0041d38d: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d391: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d395: ADD EAX,0xbf80
// 0041d39a: ADD ESI,0xbf74
// 0041d3a0: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041d3a4: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d3a8: ADD EDI,0xbf54
// 0041d3ae: ADD EAX,0xbf64
// 0041d3b3: ADD EBP,0xbf48
// 0041d3b9: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041d3bd: IMUL EAX,EBX,0x48
//   Label: LAB_0041d3bd
// 0041d3c0: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0041d3c3: PUSH 0x6162a3
//   XREF to: 006162a3 (DATA)
// 0041d3c8: ADD EAX,EDX
// 0041d3ca: PUSH EAX
// 0041d3cb: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0041d3d0: ADD ESP,0x8
// 0041d3d3: PUSH 0x6162ae
//   XREF to: 006162ae (DATA)
// 0041d3d8: PUSH EBP
// 0041d3d9: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0041d3de: ADD ESP,0x8
// 0041d3e1: PUSH 0x6162bc
//   XREF to: 006162bc (DATA)
// 0041d3e6: PUSH EDI
// 0041d3e7: CALL core_actor.cpp_serializeQuaternion_FUN_0040b520
//   XREF to: 0040b520 (UNCONDITIONAL_CALL)
// 0041d3ec: ADD ESP,0x8
// 0041d3ef: PUSH 0x6162ce
//   XREF to: 006162ce (DATA)
// 0041d3f4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0041d3f8: PUSH ECX
// 0041d3f9: CALL core_actor.cpp_serializeQuaternion_FUN_0040b520
//   XREF to: 0040b520 (UNCONDITIONAL_CALL)
// 0041d3fe: ADD ESP,0x8
// 0041d401: PUSH 0x6162e1
//   XREF to: 006162e1 (DATA)
// 0041d406: PUSH ESI
// 0041d407: CALL core_actor.cpp_serializeVector_FUN_0040b340
//   XREF to: 0040b340 (UNCONDITIONAL_CALL)
// 0041d40c: ADD ESP,0x8
// 0041d40f: PUSH 0x6162eb
//   XREF to: 006162eb (DATA)
// 0041d414: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 0041d418: INC EBX
// 0041d419: PUSH EAX
// 0041d41a: ADD EBP,0x48
// 0041d41d: ADD EDI,0x48
// 0041d420: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 0041d425: ADD ESP,0x8
// 0041d428: ADD ESI,0x48
// 0041d42b: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0041d42f: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0041d433: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0041d437: ADD EDX,0x48
// 0041d43a: ADD ECX,0x48
// 0041d43d: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0041d441: MOV EDX,dword ptr [EAX + 0xbf38]
// 0041d447: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0041d44b: CMP EBX,EDX
// 0041d44d: JL 0x0041d3bd
//   XREF to: 0041d3bd (CONDITIONAL_JUMP)
// 0041d453: LEA EAX,[EAX]
// 0041d459: LEA EDX,[EDX]
// 0041d45f: NOP
// 0041d460: MOV ECX,dword ptr [0x0066e594]
//   Label: LAB_0041d460
//   XREF to: 0066e594 (READ)
// 0041d466: CMP ECX,0x3
// 0041d469: JL 0x0041d470
//   XREF to: 0041d470 (CONDITIONAL_JUMP)
// 0041d46b: CMP ECX,0x5
// 0041d46e: JL 0x0041d494
//   XREF to: 0041d494 (CONDITIONAL_JUMP)
// 0041d470: ADD ESP,0xc
//   Label: LAB_0041d470
// 0041d473: POP EBP
// 0041d474: POP EDI
// 0041d475: POP ESI
// 0041d476: POP EBX
// 0041d477: RET
// 0041d478: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0041d478
//   XREF to: Stack[0x4] (READ)
// 0041d47c: PUSH 0x61624d
//   XREF to: 0061624d (DATA)
// 0041d481: ADD EAX,0xbe34
// 0041d486: PUSH EAX
// 0041d487: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041d48c: ADD ESP,0x8
// 0041d48f: JMP 0x0041d2c1
//   XREF to: 0041d2c1 (UNCONDITIONAL_JUMP)
// 0041d494: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0041d494
//   XREF to: Stack[0x4] (READ)
// 0041d498: PUSH 0x6162f7
//   XREF to: 006162f7 (DATA)
// 0041d49d: ADD EAX,0xbeb0
// 0041d4a2: PUSH EAX
// 0041d4a3: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0041d4a8: ADD ESP,0x8
// 0041d4ab: ADD ESP,0xc
// 0041d4ae: POP EBP
// 0041d4af: POP EDI
// 0041d4b0: POP ESI
// 0041d4b1: POP EBX
// 0041d4b2: RET
