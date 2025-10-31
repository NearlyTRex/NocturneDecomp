// Name: core_emitter.cpp_FUN_004a8fe0
// Address: 004a8fe0
// Address Range: [[004a8fe0, 004a934f]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8fe0()
// Globals:
//   double DOUBLE_006242ca = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 DAT_02cf2b5c
//   undefined4 DAT_02cf2b60
//   undefined4 DAT_02cf2b64
//   undefined4 DAT_02cf2b68
//   undefined4 DAT_02cf2b6c
//   undefined4 DAT_02cf2b70
//   undefined4 DAT_02cf2b74
//   undefined4 DAT_02cf2b78
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8fe0(undefined4 param_1) */

void core_emitter_cpp_FUN_004a8fe0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  float *pfVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000014;
  float in_stack_00000028;
  float in_stack_0000003c;
  float in_stack_00000050;
  float in_stack_00000064;
  float in_stack_00000078;
  float fStack_30;
  float in_stack_ffffffd4;
  float fStack_1c;
  
  if (*(int *)in_stack_00000004[1].actor_name == 3) {
    if (DAT_02cf2b5c != 0) goto LAB_004a9009;
  }
  else {
    DAT_02cf2b5c = 0;
  }
  DAT_02cf2b78 = (CDemonActor *)0x0;
LAB_004a9009:
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    if (DAT_02cf2b5c != 0) {
      if (in_stack_00000004 != DAT_02cf2b78) {
        DAT_02cf2b78 = in_stack_00000004;
        fStack_30 = 0.0;
        in_stack_ffffffd4 = 5.0;
        pfVar4 = core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
        if (pfVar4 != &DAT_02cf2b60) {
          DAT_02cf2b60 = *pfVar4;
          DAT_02cf2b68 = pfVar4[2];
          DAT_02cf2b64 = pfVar4[1];
        }
        if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
          DAT_02cf2b6c = (in_stack_00000004->orient).pitch;
          DAT_02cf2b74 = (in_stack_00000004->orient).heading;
          DAT_02cf2b70 = (in_stack_00000004->orient).bank;
        }
      }
      fVar1 = (in_stack_00000004->location).position.z;
      (in_stack_00000004->location).position.x = DAT_02cf2b60;
      (in_stack_00000004->location).position.y = DAT_02cf2b64;
      (in_stack_00000004->location).position.z = DAT_02cf2b68;
      if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
        (in_stack_00000004->orient).pitch = DAT_02cf2b6c;
        (in_stack_00000004->orient).bank = DAT_02cf2b70;
        (in_stack_00000004->orient).heading = DAT_02cf2b74;
      }
      core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
      core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
      if (&in_stack_00000004->location != (CLocation *)&DAT_02cf2b60) {
        DAT_02cf2b60 = (in_stack_00000004->location).position.x;
        DAT_02cf2b68 = (in_stack_00000004->location).position.z;
        DAT_02cf2b64 = (in_stack_00000004->location).position.y;
      }
      if (&in_stack_00000004->orient != (COrientation *)&DAT_02cf2b6c) {
        DAT_02cf2b6c = (in_stack_00000004->orient).pitch;
        DAT_02cf2b74 = (in_stack_00000004->orient).heading;
        DAT_02cf2b70 = (in_stack_00000004->orient).bank;
      }
      (in_stack_00000004->location).position.x = fVar1;
      (in_stack_00000004->location).position.y = fStack_30;
      (in_stack_00000004->location).position.z = in_stack_ffffffd4;
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&fStack_1c,(CVector3f *)&stack0xffffffc0);
      if (&in_stack_00000004->orient != (COrientation *)pCVar3) {
        (in_stack_00000004->orient).pitch = pCVar3->x;
        (in_stack_00000004->orient).bank = pCVar3->y;
        (in_stack_00000004->orient).heading = pCVar3->z;
      }
      core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
      return;
    }
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
    return;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) - in_stack_00000014;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 4) =
         *(float *)(in_stack_00000004[1].actor_name + 4) + in_stack_00000028;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) - in_stack_0000003c;
  }
  fStack_1c = 6.847722e-39;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 8) =
         *(float *)(in_stack_00000004[1].actor_name + 8) + in_stack_00000050;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) - in_stack_00000064;
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
  if (iVar2 != 0) {
    *(float *)(in_stack_00000004[1].actor_name + 0xc) =
         *(float *)(in_stack_00000004[1].actor_name + 0xc) + in_stack_00000078;
  }
  if (*(int *)(in_stack_00000004[1].actor_name + 4) < 0x3f000000) {
    in_stack_00000004[1].actor_name[4] = '\0';
    in_stack_00000004[1].actor_name[5] = '\0';
    in_stack_00000004[1].actor_name[6] = '\0';
    in_stack_00000004[1].actor_name[7] = '?';
  }
  if (*(float *)(in_stack_00000004[1].actor_name + 8) < 0.5) {
    in_stack_00000004[1].actor_name[8] = '\0';
    in_stack_00000004[1].actor_name[9] = '\0';
    in_stack_00000004[1].actor_name[10] = '\0';
    in_stack_00000004[1].actor_name[0xb] = '?';
  }
  if (0.5 <= *(float *)(in_stack_00000004[1].actor_name + 0xc)) {
    return;
  }
  in_stack_00000004[1].actor_name[0xc] = '\0';
  in_stack_00000004[1].actor_name[0xd] = '\0';
  in_stack_00000004[1].actor_name[0xe] = '\0';
  in_stack_00000004[1].actor_name[0xf] = '?';
  return;
}


// Assembly code:
// 004a8fe0: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8fe0
// 004a8fe1: PUSH ESI
// 004a8fe2: PUSH EDI
// 004a8fe3: PUSH EBP
// 004a8fe4: SUB ESP,0x50
// 004a8fe7: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x4] (READ)
// 004a8feb: CMP dword ptr [EBX + 0x158],0x3
// 004a8ff2: JNZ 0x004a9150
//   XREF to: 004a9150 (CONDITIONAL_JUMP)
// 004a8ff8: CMP dword ptr [0x02cf2b5c],0x0
//   XREF to: 02cf2b5c (READ)
// 004a8fff: JNZ 0x004a9009
//   XREF to: 004a9009 (CONDITIONAL_JUMP)
// 004a9001: XOR EDI,EDI
//   Label: LAB_004a9001
// 004a9003: MOV dword ptr [0x02cf2b78],EDI
//   XREF to: 02cf2b78 (WRITE)
// 004a9009: PUSH 0x1d
//   Label: LAB_004a9009
// 004a900b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a9010: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a9011: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a9013: CALL dword ptr [EDX]
// 004a9015: ADD ESP,0x8
// 004a9018: TEST EAX,EAX
// 004a901a: JZ 0x004a916f
//   XREF to: 004a916f (CONDITIONAL_JUMP)
// 004a9020: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004a9025: PUSH 0x4b
// 004a9027: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004a902d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a9032: FMUL double ptr [0x006242ca]
//   XREF to: 006242ca (READ)
// 004a9038: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a9039: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a903b: FSTP float ptr [ESP + 0x54]
// 004a903f: CALL dword ptr [EDX]
// 004a9041: ADD ESP,0x8
// 004a9044: TEST EAX,EAX
// 004a9046: JZ 0x004a9058
//   XREF to: 004a9058 (CONDITIONAL_JUMP)
// 004a9048: FLD float ptr [EBX + 0x15c]
// 004a904e: FSUB float ptr [ESP + 0x4c]
// 004a9052: FSTP float ptr [EBX + 0x15c]
// 004a9058: PUSH 0x4d
//   Label: LAB_004a9058
// 004a905a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a905f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a9060: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a9062: CALL dword ptr [EDX]
// 004a9064: ADD ESP,0x8
// 004a9067: TEST EAX,EAX
// 004a9069: JZ 0x004a907b
//   XREF to: 004a907b (CONDITIONAL_JUMP)
// 004a906b: FLD float ptr [EBX + 0x15c]
// 004a9071: FADD float ptr [ESP + 0x4c]
// 004a9075: FSTP float ptr [EBX + 0x15c]
// 004a907b: PUSH 0x1e
//   Label: LAB_004a907b
// 004a907d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a9082: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a9083: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a9085: CALL dword ptr [EDX]
// 004a9087: ADD ESP,0x8
// 004a908a: TEST EAX,EAX
// 004a908c: JZ 0x004a909e
//   XREF to: 004a909e (CONDITIONAL_JUMP)
// 004a908e: FLD float ptr [EBX + 0x160]
// 004a9094: FSUB float ptr [ESP + 0x4c]
// 004a9098: FSTP float ptr [EBX + 0x160]
// 004a909e: PUSH 0x10
//   Label: LAB_004a909e
// 004a90a0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a90a5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a90a6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a90a8: CALL dword ptr [EDX]
// 004a90aa: ADD ESP,0x8
// 004a90ad: TEST EAX,EAX
// 004a90af: JZ 0x004a90c1
//   XREF to: 004a90c1 (CONDITIONAL_JUMP)
// 004a90b1: FLD float ptr [EBX + 0x160]
// 004a90b7: FADD float ptr [ESP + 0x4c]
// 004a90bb: FSTP float ptr [EBX + 0x160]
// 004a90c1: PUSH 0x50
//   Label: LAB_004a90c1
// 004a90c3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a90c8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a90c9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a90cb: CALL dword ptr [EDX]
// 004a90cd: ADD ESP,0x8
// 004a90d0: TEST EAX,EAX
// 004a90d2: JZ 0x004a90e4
//   XREF to: 004a90e4 (CONDITIONAL_JUMP)
// 004a90d4: FLD float ptr [EBX + 0x164]
// 004a90da: FSUB float ptr [ESP + 0x4c]
// 004a90de: FSTP float ptr [EBX + 0x164]
// 004a90e4: PUSH 0x48
//   Label: LAB_004a90e4
// 004a90e6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004a90eb: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004a90ec: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004a90ee: CALL dword ptr [EDX]
// 004a90f0: ADD ESP,0x8
// 004a90f3: TEST EAX,EAX
// 004a90f5: JZ 0x004a9107
//   XREF to: 004a9107 (CONDITIONAL_JUMP)
// 004a90f7: FLD float ptr [EBX + 0x164]
// 004a90fd: FADD float ptr [ESP + 0x4c]
// 004a9101: FSTP float ptr [EBX + 0x164]
// 004a9107: MOV EDI,0x3f000000
//   Label: LAB_004a9107
// 004a910c: MOV EBP,dword ptr [EBX + 0x15c]
// 004a9112: MOV dword ptr [ESP + 0x48],EDI
// 004a9116: CMP EBP,EDI
// 004a9118: JGE 0x004a9120
//   XREF to: 004a9120 (CONDITIONAL_JUMP)
// 004a911a: MOV dword ptr [EBX + 0x15c],EDI
// 004a9120: FLD float ptr [EBX + 0x160]
//   Label: LAB_004a9120
// 004a9126: FCOMP float ptr [ESP + 0x48]
// 004a912a: FNSTSW AX
// 004a912c: SAHF
// 004a912d: JNC 0x004a9139
//   XREF to: 004a9139 (CONDITIONAL_JUMP)
// 004a912f: MOV EAX,dword ptr [ESP + 0x48]
// 004a9133: MOV dword ptr [EBX + 0x160],EAX
// 004a9139: FLD float ptr [EBX + 0x164]
//   Label: LAB_004a9139
// 004a913f: FCOMP float ptr [ESP + 0x48]
// 004a9143: FNSTSW AX
// 004a9145: SAHF
// 004a9146: JC 0x004a915d
//   XREF to: 004a915d (CONDITIONAL_JUMP)
// 004a9148: ADD ESP,0x50
// 004a914b: POP EBP
// 004a914c: POP EDI
// 004a914d: POP ESI
// 004a914e: POP EBX
// 004a914f: RET
// 004a9150: XOR ESI,ESI
//   Label: LAB_004a9150
// 004a9152: MOV dword ptr [0x02cf2b5c],ESI
//   XREF to: 02cf2b5c (WRITE)
// 004a9158: JMP 0x004a9001
//   XREF to: 004a9001 (UNCONDITIONAL_JUMP)
// 004a915d: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_004a915d
// 004a9161: MOV dword ptr [EBX + 0x164],EAX
// 004a9167: ADD ESP,0x50
// 004a916a: POP EBP
// 004a916b: POP EDI
// 004a916c: POP ESI
// 004a916d: POP EBX
// 004a916e: RET
// 004a916f: CMP dword ptr [0x02cf2b5c],0x0
//   Label: LAB_004a916f
//   XREF to: 02cf2b5c (READ)
// 004a9176: JZ 0x004a933f
//   XREF to: 004a933f (CONDITIONAL_JUMP)
// 004a917c: CMP EBX,dword ptr [0x02cf2b78]
//   XREF to: 02cf2b78 (READ)
// 004a9182: JNZ 0x004a92c5
//   XREF to: 004a92c5 (CONDITIONAL_JUMP)
// 004a9188: LEA ECX,[EBX + 0x20]
//   Label: LAB_004a9188
// 004a918b: MOV EAX,dword ptr [ECX]
// 004a918d: MOV dword ptr [ESP + 0xc],EAX
// 004a9191: LEA EAX,[ECX + 0x4]
// 004a9194: MOV EAX,dword ptr [EAX]
// 004a9196: MOV dword ptr [ESP + 0x10],EAX
// 004a919a: LEA EAX,[ECX + 0x8]
// 004a919d: MOV EAX,dword ptr [EAX]
// 004a919f: LEA EDX,[EBX + 0x30]
// 004a91a2: MOV dword ptr [ESP + 0x14],EAX
// 004a91a6: MOV EAX,dword ptr [EDX]
// 004a91a8: MOV dword ptr [ESP + 0x3c],EAX
// 004a91ac: LEA EAX,[EDX + 0x4]
// 004a91af: MOV EAX,dword ptr [EAX]
// 004a91b1: MOV dword ptr [ESP + 0x40],EAX
// 004a91b5: LEA EAX,[EDX + 0x8]
// 004a91b8: MOV EAX,dword ptr [EAX]
// 004a91ba: MOV dword ptr [ESP + 0x44],EAX
// 004a91be: MOV EAX,[0x02cf2b60]
//   XREF to: 02cf2b60 (READ)
// 004a91c3: MOV dword ptr [ECX],EAX
// 004a91c5: MOV EAX,[0x02cf2b64]
//   XREF to: 02cf2b64 (READ)
// 004a91ca: MOV dword ptr [ECX + 0x4],EAX
// 004a91cd: MOV EAX,[0x02cf2b68]
//   XREF to: 02cf2b68 (READ)
// 004a91d2: MOV dword ptr [ECX + 0x8],EAX
// 004a91d5: CMP EDX,0x2cf2b6c
//   XREF to: 02cf2b6c (DATA)
// 004a91db: JZ 0x004a91f4
//   XREF to: 004a91f4 (CONDITIONAL_JUMP)
// 004a91dd: MOV EAX,[0x02cf2b6c]
//   XREF to: 02cf2b6c (READ)
// 004a91e2: MOV dword ptr [EDX],EAX
// 004a91e4: MOV EAX,[0x02cf2b70]
//   XREF to: 02cf2b70 (READ)
// 004a91e9: MOV dword ptr [EDX + 0x4],EAX
// 004a91ec: MOV EAX,[0x02cf2b74]
//   XREF to: 02cf2b74 (READ)
// 004a91f1: MOV dword ptr [EDX + 0x8],EAX
// 004a91f4: PUSH EBX
//   Label: LAB_004a91f4
// 004a91f5: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004a91fa: ADD ESP,0x4
// 004a91fd: PUSH EBX
// 004a91fe: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004a9203: LEA EAX,[EBX + 0x20]
// 004a9206: ADD ESP,0x4
// 004a9209: CMP EAX,0x2cf2b60
//   XREF to: 02cf2b60 (DATA)
// 004a920e: JZ 0x004a922a
//   XREF to: 004a922a (CONDITIONAL_JUMP)
// 004a9210: FLD float ptr [EAX]
// 004a9212: FLD float ptr [EAX + 0x8]
// 004a9215: MOV EDX,dword ptr [EAX + 0x4]
// 004a9218: MOV dword ptr [0x02cf2b64],EDX
//   XREF to: 02cf2b64 (WRITE)
// 004a921e: FSTP float ptr [0x02cf2b68]
//   XREF to: 02cf2b68 (WRITE)
// 004a9224: FSTP float ptr [0x02cf2b60]
//   XREF to: 02cf2b60 (WRITE)
// 004a922a: LEA EAX,[EBX + 0x30]
//   Label: LAB_004a922a
// 004a922d: CMP EAX,0x2cf2b6c
//   XREF to: 02cf2b6c (DATA)
// 004a9232: JZ 0x004a924e
//   XREF to: 004a924e (CONDITIONAL_JUMP)
// 004a9234: FLD float ptr [EAX]
// 004a9236: FLD float ptr [EAX + 0x8]
// 004a9239: MOV EDX,dword ptr [EAX + 0x4]
// 004a923c: MOV dword ptr [0x02cf2b70],EDX
//   XREF to: 02cf2b70 (WRITE)
// 004a9242: FSTP float ptr [0x02cf2b74]
//   XREF to: 02cf2b74 (WRITE)
// 004a9248: FSTP float ptr [0x02cf2b6c]
//   XREF to: 02cf2b6c (WRITE)
// 004a924e: LEA EDX,[EBX + 0x20]
//   Label: LAB_004a924e
// 004a9251: MOV EAX,dword ptr [ESP + 0xc]
// 004a9255: MOV dword ptr [EDX],EAX
// 004a9257: MOV EAX,dword ptr [ESP + 0x10]
// 004a925b: MOV dword ptr [EDX + 0x4],EAX
// 004a925e: MOV EAX,dword ptr [ESP + 0x14]
// 004a9262: MOV dword ptr [EDX + 0x8],EAX
// 004a9265: FLD float ptr [0x02cf2b60]
//   XREF to: 02cf2b60 (READ)
// 004a926b: FLD float ptr [0x02cf2b64]
//   XREF to: 02cf2b64 (READ)
// 004a9271: FLD float ptr [0x02cf2b68]
//   XREF to: 02cf2b68 (READ)
// 004a9277: MOV EAX,ESP
// 004a9279: FXCH ST2
// 004a927b: FSUB float ptr [EDX]
// 004a927d: PUSH EAX
// 004a927e: FSTP float ptr [ESP + 0x4]
// 004a9282: FSUB float ptr [EDX + 0x4]
// 004a9285: LEA EAX,[ESP + 0x28]
// 004a9289: FSTP float ptr [ESP + 0x8]
// 004a928d: FSUB float ptr [EDX + 0x8]
// 004a9290: PUSH EAX
// 004a9291: FSTP float ptr [ESP + 0x10]
// 004a9295: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004a929a: LEA EDX,[EBX + 0x30]
// 004a929d: ADD ESP,0x8
// 004a92a0: CMP EDX,EAX
// 004a92a2: JZ 0x004a92b4
//   XREF to: 004a92b4 (CONDITIONAL_JUMP)
// 004a92a4: MOV ECX,dword ptr [EAX]
// 004a92a6: MOV dword ptr [EDX],ECX
// 004a92a8: MOV ECX,dword ptr [EAX + 0x4]
// 004a92ab: MOV dword ptr [EDX + 0x4],ECX
// 004a92ae: MOV ECX,dword ptr [EAX + 0x8]
// 004a92b1: MOV dword ptr [EDX + 0x8],ECX
// 004a92b4: PUSH EBX
//   Label: LAB_004a92b4
// 004a92b5: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004a92ba: ADD ESP,0x4
// 004a92bd: ADD ESP,0x50
// 004a92c0: POP EBP
// 004a92c1: POP EDI
// 004a92c2: POP ESI
// 004a92c3: POP EBX
// 004a92c4: RET
// 004a92c5: LEA EAX,[ESP + 0x18]
//   Label: LAB_004a92c5
// 004a92c9: MOV ESI,0x40a00000
// 004a92ce: PUSH EAX
// 004a92cf: LEA EAX,[ESP + 0x34]
// 004a92d3: XOR EDX,EDX
// 004a92d5: PUSH EAX
// 004a92d6: MOV dword ptr [0x02cf2b78],EBX
//   XREF to: 02cf2b78 (WRITE)
// 004a92dc: MOV dword ptr [ESP + 0x20],EDX
// 004a92e0: PUSH EBX
// 004a92e1: MOV dword ptr [ESP + 0x28],EDX
// 004a92e5: MOV dword ptr [ESP + 0x2c],ESI
// 004a92e9: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a92ee: ADD ESP,0xc
// 004a92f1: CMP EAX,0x2cf2b60
//   XREF to: 02cf2b60 (DATA)
// 004a92f6: JZ 0x004a9312
//   XREF to: 004a9312 (CONDITIONAL_JUMP)
// 004a92f8: FLD float ptr [EAX]
// 004a92fa: FLD float ptr [EAX + 0x8]
// 004a92fd: MOV EDX,dword ptr [EAX + 0x4]
// 004a9300: MOV dword ptr [0x02cf2b64],EDX
//   XREF to: 02cf2b64 (WRITE)
// 004a9306: FSTP float ptr [0x02cf2b68]
//   XREF to: 02cf2b68 (WRITE)
// 004a930c: FSTP float ptr [0x02cf2b60]
//   XREF to: 02cf2b60 (WRITE)
// 004a9312: LEA EAX,[EBX + 0x30]
//   Label: LAB_004a9312
// 004a9315: CMP EAX,0x2cf2b6c
//   XREF to: 02cf2b6c (DATA)
// 004a931a: JZ 0x004a9188
//   XREF to: 004a9188 (CONDITIONAL_JUMP)
// 004a9320: FLD float ptr [EAX]
// 004a9322: FLD float ptr [EAX + 0x8]
// 004a9325: MOV EDX,dword ptr [EAX + 0x4]
// 004a9328: MOV dword ptr [0x02cf2b70],EDX
//   XREF to: 02cf2b70 (WRITE)
// 004a932e: FSTP float ptr [0x02cf2b74]
//   XREF to: 02cf2b74 (WRITE)
// 004a9334: FSTP float ptr [0x02cf2b6c]
//   XREF to: 02cf2b6c (WRITE)
// 004a933a: JMP 0x004a9188
//   XREF to: 004a9188 (UNCONDITIONAL_JUMP)
// 004a933f: PUSH EBX
//   Label: LAB_004a933f
// 004a9340: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004a9345: ADD ESP,0x4
// 004a9348: ADD ESP,0x50
// 004a934b: POP EBP
// 004a934c: POP EDI
// 004a934d: POP ESI
// 004a934e: POP EBX
// 004a934f: RET
