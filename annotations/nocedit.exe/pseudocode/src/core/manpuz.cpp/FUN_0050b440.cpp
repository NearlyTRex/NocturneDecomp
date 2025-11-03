// Name: core_manpuz.cpp_FUN_0050b440
// Address: 0050b440
// Address Range: [[0050b440, 0050b7c1]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b440()
// Globals:
//   undefined4 DAT_02f0cb1c
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b440(undefined4 param_1) */

void core_manpuz_cpp_FUN_0050b440(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int iStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  int iStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (DAT_02f0cb1c == 1) {
    core_skeleton_cpp_FUN_005a2060();
    if ((char *)&local_40 != in_stack_00000004[4].create_event + 0xc) {
      local_40 = *(undefined4 *)(in_stack_00000004[4].create_event + 0xc);
      uStack_3c = *(undefined4 *)(in_stack_00000004[4].create_event + 0x10);
      uStack_38 = *(undefined4 *)(in_stack_00000004[4].create_event + 0x14);
    }
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    core_skeleton_cpp_FUN_005a20b0();
    if (in_stack_00000004[4].create_event + 0xc != (char *)&local_40) {
      *(undefined4 *)(in_stack_00000004[4].create_event + 0xc) = local_40;
      *(undefined4 *)(in_stack_00000004[4].create_event + 0x10) = uStack_3c;
      *(undefined4 *)(in_stack_00000004[4].create_event + 0x14) = uStack_38;
    }
  }
  else if (DAT_02f0cb1c == 2) {
    core_skeleton_cpp_FUN_005a2060();
    if (&local_24 != &in_stack_00000004[4].field7_0x6c) {
      local_24 = in_stack_00000004[4].field7_0x6c;
      iStack_20 = in_stack_00000004[4].was_created;
      fStack_1c = in_stack_00000004[4].create_prob;
    }
    if ((char *)&uStack_18 != in_stack_00000004[4].create_event) {
      uStack_18 = *(undefined4 *)in_stack_00000004[4].create_event;
      uStack_14 = *(undefined4 *)(in_stack_00000004[4].create_event + 4);
      uStack_10 = *(undefined4 *)(in_stack_00000004[4].create_event + 8);
    }
    core_skeleton_cpp_FUN_005a20b0();
    if (&in_stack_00000004[4].field7_0x6c != &local_24) {
      in_stack_00000004[4].field7_0x6c = local_24;
      in_stack_00000004[4].was_created = iStack_20;
      in_stack_00000004[4].create_prob = fStack_1c;
    }
    if (in_stack_00000004[4].create_event != (char *)&uStack_18) {
      *(undefined4 *)in_stack_00000004[4].create_event = uStack_18;
      *(undefined4 *)(in_stack_00000004[4].create_event + 4) = uStack_14;
      *(undefined4 *)(in_stack_00000004[4].create_event + 8) = uStack_10;
    }
  }
  else if (DAT_02f0cb1c == 3) {
    core_skeleton_cpp_FUN_005a2060();
    if (&iStack_78 != &in_stack_00000004[0xe].was_created) {
      iStack_78 = in_stack_00000004[0xe].was_created;
      fStack_74 = in_stack_00000004[0xe].create_prob;
      uStack_70 = *(undefined4 *)in_stack_00000004[0xe].create_event;
    }
    if ((char *)&uStack_6c != in_stack_00000004[0xe].create_event + 0x20) {
      uStack_6c = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x20);
      uStack_68 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x24);
      uStack_64 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_skeleton_cpp_FUN_005a20b0();
    if (&in_stack_00000004[0xe].was_created != &iStack_78) {
      in_stack_00000004[0xe].was_created = iStack_78;
      in_stack_00000004[0xe].create_prob = fStack_74;
      *(undefined4 *)in_stack_00000004[0xe].create_event = uStack_70;
    }
    if (in_stack_00000004[0xe].create_event + 0x20 != (char *)&uStack_6c) {
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x20) = uStack_6c;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x24) = uStack_68;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x28) = uStack_64;
    }
    in_stack_00000004[0xe].create_event[0x10] = '\0';
    in_stack_00000004[0xe].create_event[0x11] = '\0';
    in_stack_00000004[0xe].create_event[0x12] = '\0';
    in_stack_00000004[0xe].create_event[0x13] = '\0';
    uVar1 = *(undefined4 *)in_stack_00000004[0xe].create_event;
    *(int *)(in_stack_00000004[0xe].create_event + 4) = in_stack_00000004[0xe].was_created;
    *(undefined4 *)(in_stack_00000004[0xe].create_event + 0xc) = uVar1;
  }
  else if (DAT_02f0cb1c == 4) {
    core_skeleton_cpp_FUN_005a2060();
    if ((char *)&local_5c != in_stack_00000004[0xe].create_event + 4) {
      local_5c = *(undefined4 *)(in_stack_00000004[0xe].create_event + 4);
      uStack_58 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 8);
      uStack_54 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0xc);
    }
    if ((char *)&uStack_50 != in_stack_00000004[0xe].create_event + 0x20) {
      uStack_50 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x20);
      uStack_4c = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x24);
      uStack_48 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x28);
    }
    core_skeleton_cpp_FUN_005a20b0();
    if (in_stack_00000004[0xe].create_event + 4 != (char *)&local_5c) {
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 4) = local_5c;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 8) = uStack_58;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0xc) = uStack_54;
    }
    if (in_stack_00000004[0xe].create_event + 0x20 != (char *)&uStack_50) {
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x20) = uStack_50;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x24) = uStack_4c;
      *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x28) = uStack_48;
    }
    in_stack_00000004[0xe].create_event[0x10] = '\0';
    in_stack_00000004[0xe].create_event[0x11] = '\0';
    in_stack_00000004[0xe].create_event[0x12] = -0x80;
    in_stack_00000004[0xe].create_event[0x13] = '?';
    uVar1 = *(undefined4 *)(in_stack_00000004[0xe].create_event + 0xc);
    in_stack_00000004[0xe].was_created = *(int *)(in_stack_00000004[0xe].create_event + 4);
    *(undefined4 *)in_stack_00000004[0xe].create_event = uVar1;
  }
  else {
    DAT_02f0cb1c = 0;
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  }
  fVar2 = in_stack_00000004[0xe].create_prob;
  fVar3 = (float)in_stack_00000004[0xe].was_created;
  uVar1 = *(undefined4 *)in_stack_00000004[0xe].create_event;
  fVar4 = *(float *)(in_stack_00000004[0xe].create_event + 8);
  fVar5 = *(float *)(in_stack_00000004[0xe].create_event + 4);
  fVar6 = *(float *)(in_stack_00000004[0xe].create_event + 0xc);
  fVar7 = *(float *)(in_stack_00000004[0xe].create_event + 0x10);
  (in_stack_00000004->orient).heading = 0.0;
  *(float *)(in_stack_00000004[0xe].create_event + 0x5c) = fVar2;
  *(undefined4 *)(in_stack_00000004[0xe].create_event + 0x60) = uVar1;
  in_stack_00000004[0xe].field12_0xe0.x = fVar4;
  in_stack_00000004[0xe].field12_0xe0.y = fVar6;
  in_stack_00000004[0xe].field12_0xe0.z = fVar7;
  fVar2 = (in_stack_00000004->orient).heading;
  *(float *)(in_stack_00000004[0xe].create_event + 0x58) = -fVar3;
  in_stack_00000004[0xe].field11_0xdc = (int)-fVar5;
  (in_stack_00000004->orient).pitch = fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(in_stack_00000004);
  (*in_stack_00000004->vtable->setup)(in_stack_00000004);
  return;
}


// Assembly code:
// 0050b440: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b440
// 0050b441: PUSH EBP
// 0050b442: SUB ESP,0x70
// 0050b445: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 0050b449: MOV EDX,dword ptr [0x02f0cb1c]
//   XREF to: 02f0cb1c (READ)
// 0050b44f: CMP EDX,0x1
// 0050b452: JZ 0x0050b5c9
//   XREF to: 0050b5c9 (CONDITIONAL_JUMP)
// 0050b458: CMP EDX,0x2
// 0050b45b: JZ 0x0050b63e
//   XREF to: 0050b63e (CONDITIONAL_JUMP)
// 0050b461: CMP EDX,0x3
// 0050b464: JZ 0x0050b6e9
//   XREF to: 0050b6e9 (CONDITIONAL_JUMP)
// 0050b46a: CMP EDX,0x4
// 0050b46d: JNZ 0x0050b7ac
//   XREF to: 0050b7ac (CONDITIONAL_JUMP)
// 0050b473: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x5c] (DATA)
// 0050b477: PUSH EAX
// 0050b478: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0050b47d: LEA EAX,[ESP + 0x20]
// 0050b481: LEA EDX,[EBX + 0x134c]
// 0050b487: ADD ESP,0x4
// 0050b48a: CMP EAX,EDX
// 0050b48c: JZ 0x0050b4a2
//   XREF to: 0050b4a2 (CONDITIONAL_JUMP)
// 0050b48e: MOV EAX,dword ptr [EDX]
// 0050b490: MOV dword ptr [ESP + 0x1c],EAX
// 0050b494: MOV EAX,dword ptr [EDX + 0x4]
// 0050b497: MOV dword ptr [ESP + 0x20],EAX
// 0050b49b: MOV EAX,dword ptr [EDX + 0x8]
// 0050b49e: MOV dword ptr [ESP + 0x24],EAX
// 0050b4a2: LEA EAX,[ESP + 0x28]
//   Label: LAB_0050b4a2
// 0050b4a6: LEA EDX,[EBX + 0x1368]
// 0050b4ac: CMP EAX,EDX
// 0050b4ae: JZ 0x0050b4c4
//   XREF to: 0050b4c4 (CONDITIONAL_JUMP)
// 0050b4b0: MOV EAX,dword ptr [EDX]
// 0050b4b2: MOV dword ptr [ESP + 0x28],EAX
// 0050b4b6: MOV EAX,dword ptr [EDX + 0x4]
// 0050b4b9: MOV dword ptr [ESP + 0x2c],EAX
// 0050b4bd: MOV EAX,dword ptr [EDX + 0x8]
// 0050b4c0: MOV dword ptr [ESP + 0x30],EAX
// 0050b4c4: LEA EAX,[ESP + 0x1c]
//   Label: LAB_0050b4c4
// 0050b4c8: PUSH EAX
// 0050b4c9: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0050b4ce: LEA EAX,[ESP + 0x20]
// 0050b4d2: LEA EDX,[EBX + 0x134c]
// 0050b4d8: ADD ESP,0x4
// 0050b4db: CMP EDX,EAX
// 0050b4dd: JZ 0x0050b4f3
//   XREF to: 0050b4f3 (CONDITIONAL_JUMP)
// 0050b4df: MOV EAX,dword ptr [ESP + 0x1c]
// 0050b4e3: MOV dword ptr [EDX],EAX
// 0050b4e5: MOV EAX,dword ptr [ESP + 0x20]
// 0050b4e9: MOV dword ptr [EDX + 0x4],EAX
// 0050b4ec: MOV EAX,dword ptr [ESP + 0x24]
// 0050b4f0: MOV dword ptr [EDX + 0x8],EAX
// 0050b4f3: LEA EAX,[ESP + 0x28]
//   Label: LAB_0050b4f3
// 0050b4f7: LEA EDX,[EBX + 0x1368]
// 0050b4fd: CMP EDX,EAX
// 0050b4ff: JZ 0x0050b515
//   XREF to: 0050b515 (CONDITIONAL_JUMP)
// 0050b501: MOV EAX,dword ptr [ESP + 0x28]
// 0050b505: MOV dword ptr [EDX],EAX
// 0050b507: MOV EAX,dword ptr [ESP + 0x2c]
// 0050b50b: MOV dword ptr [EDX + 0x4],EAX
// 0050b50e: MOV EAX,dword ptr [ESP + 0x30]
// 0050b512: MOV dword ptr [EDX + 0x8],EAX
// 0050b515: MOV dword ptr [EBX + 0x1358],0x3f800000
//   Label: LAB_0050b515
// 0050b51f: FLD float ptr [EBX + 0x1354]
// 0050b525: MOV EAX,dword ptr [EBX + 0x134c]
// 0050b52b: MOV dword ptr [EBX + 0x1340],EAX
// 0050b531: FSTP float ptr [EBX + 0x1348]
// 0050b537: FLD float ptr [EBX + 0x1344]
//   Label: LAB_0050b537
// 0050b53d: FLD float ptr [EBX + 0x1340]
// 0050b543: FLD float ptr [EBX + 0x1348]
// 0050b549: FLD float ptr [EBX + 0x1350]
// 0050b54f: FLD float ptr [EBX + 0x134c]
// 0050b555: FLD float ptr [EBX + 0x1354]
// 0050b55b: FLD float ptr [EBX + 0x1358]
// 0050b561: FXCH ST5
// 0050b563: FCHS
// 0050b565: FXCH ST2
// 0050b567: FCHS
// 0050b569: MOV dword ptr [EBX + 0x38],0x0
// 0050b570: PUSH EBX
// 0050b571: FXCH ST6
// 0050b573: FSTP float ptr [EBX + 0x13a4]
// 0050b579: FXCH ST3
// 0050b57b: FSTP float ptr [EBX + 0x13a8]
// 0050b581: FXCH
// 0050b583: FSTP float ptr [EBX + 0x13b0]
// 0050b589: FXCH
// 0050b58b: FSTP float ptr [EBX + 0x13b4]
// 0050b591: FXCH
// 0050b593: FSTP float ptr [EBX + 0x13b8]
// 0050b599: FLD float ptr [EBX + 0x38]
// 0050b59c: FXCH
// 0050b59e: FSTP float ptr [EBX + 0x13a0]
// 0050b5a4: FXCH
// 0050b5a6: FSTP float ptr [EBX + 0x13ac]
// 0050b5ac: FSTP float ptr [EBX + 0x30]
// 0050b5af: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0050b5b4: ADD ESP,0x4
// 0050b5b7: MOV EAX,dword ptr [EBX + 0x154]
// 0050b5bd: PUSH EBX
// 0050b5be: CALL dword ptr [EAX]
// 0050b5c0: ADD ESP,0x4
// 0050b5c3: ADD ESP,0x70
// 0050b5c6: POP EBP
// 0050b5c7: POP EBX
// 0050b5c8: RET
// 0050b5c9: LEA EAX,[ESP + 0x38]
//   Label: LAB_0050b5c9
//   XREF to: Stack[-0x40] (DATA)
// 0050b5cd: PUSH EAX
// 0050b5ce: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0050b5d3: LEA EAX,[ESP + 0x3c]
// 0050b5d7: LEA EDX,[EBX + 0x5e4]
// 0050b5dd: ADD ESP,0x4
// 0050b5e0: CMP EAX,EDX
// 0050b5e2: JZ 0x0050b5f8
//   XREF to: 0050b5f8 (CONDITIONAL_JUMP)
// 0050b5e4: MOV EAX,dword ptr [EDX]
// 0050b5e6: MOV dword ptr [ESP + 0x38],EAX
// 0050b5ea: MOV EAX,dword ptr [EDX + 0x4]
// 0050b5ed: MOV dword ptr [ESP + 0x3c],EAX
// 0050b5f1: MOV EAX,dword ptr [EDX + 0x8]
// 0050b5f4: MOV dword ptr [ESP + 0x40],EAX
// 0050b5f8: XOR EAX,EAX
//   Label: LAB_0050b5f8
// 0050b5fa: MOV dword ptr [ESP + 0x4c],EAX
// 0050b5fe: MOV dword ptr [ESP + 0x48],EAX
// 0050b602: MOV dword ptr [ESP + 0x44],EAX
// 0050b606: LEA EAX,[ESP + 0x38]
// 0050b60a: PUSH EAX
// 0050b60b: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0050b610: LEA EAX,[ESP + 0x3c]
// 0050b614: LEA EDX,[EBX + 0x5e4]
// 0050b61a: ADD ESP,0x4
// 0050b61d: CMP EDX,EAX
// 0050b61f: JZ 0x0050b537
//   XREF to: 0050b537 (CONDITIONAL_JUMP)
// 0050b625: MOV EAX,dword ptr [ESP + 0x38]
// 0050b629: MOV dword ptr [EDX],EAX
// 0050b62b: MOV EAX,dword ptr [ESP + 0x3c]
// 0050b62f: MOV dword ptr [EDX + 0x4],EAX
// 0050b632: MOV EAX,dword ptr [ESP + 0x40]
// 0050b636: MOV dword ptr [EDX + 0x8],EAX
// 0050b639: JMP 0x0050b537
//   XREF to: 0050b537 (UNCONDITIONAL_JUMP)
// 0050b63e: LEA EAX,[ESP + 0x54]
//   Label: LAB_0050b63e
//   XREF to: Stack[-0x24] (DATA)
// 0050b642: PUSH EAX
// 0050b643: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0050b648: LEA EAX,[ESP + 0x58]
// 0050b64c: LEA EDX,[EBX + 0x5cc]
// 0050b652: ADD ESP,0x4
// 0050b655: CMP EAX,EDX
// 0050b657: JZ 0x0050b66d
//   XREF to: 0050b66d (CONDITIONAL_JUMP)
// 0050b659: MOV EAX,dword ptr [EDX]
// 0050b65b: MOV dword ptr [ESP + 0x54],EAX
// 0050b65f: MOV EAX,dword ptr [EDX + 0x4]
// 0050b662: MOV dword ptr [ESP + 0x58],EAX
// 0050b666: MOV EAX,dword ptr [EDX + 0x8]
// 0050b669: MOV dword ptr [ESP + 0x5c],EAX
// 0050b66d: LEA EAX,[ESP + 0x60]
//   Label: LAB_0050b66d
// 0050b671: LEA EDX,[EBX + 0x5d8]
// 0050b677: CMP EAX,EDX
// 0050b679: JZ 0x0050b68f
//   XREF to: 0050b68f (CONDITIONAL_JUMP)
// 0050b67b: MOV EAX,dword ptr [EDX]
// 0050b67d: MOV dword ptr [ESP + 0x60],EAX
// 0050b681: MOV EAX,dword ptr [EDX + 0x4]
// 0050b684: MOV dword ptr [ESP + 0x64],EAX
// 0050b688: MOV EAX,dword ptr [EDX + 0x8]
// 0050b68b: MOV dword ptr [ESP + 0x68],EAX
// 0050b68f: LEA EAX,[ESP + 0x54]
//   Label: LAB_0050b68f
// 0050b693: PUSH EAX
// 0050b694: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0050b699: LEA EAX,[ESP + 0x58]
// 0050b69d: LEA EDX,[EBX + 0x5cc]
// 0050b6a3: ADD ESP,0x4
// 0050b6a6: CMP EDX,EAX
// 0050b6a8: JZ 0x0050b6be
//   XREF to: 0050b6be (CONDITIONAL_JUMP)
// 0050b6aa: MOV EAX,dword ptr [ESP + 0x54]
// 0050b6ae: MOV dword ptr [EDX],EAX
// 0050b6b0: MOV EAX,dword ptr [ESP + 0x58]
// 0050b6b4: MOV dword ptr [EDX + 0x4],EAX
// 0050b6b7: MOV EAX,dword ptr [ESP + 0x5c]
// 0050b6bb: MOV dword ptr [EDX + 0x8],EAX
// 0050b6be: LEA EAX,[ESP + 0x60]
//   Label: LAB_0050b6be
// 0050b6c2: LEA EDX,[EBX + 0x5d8]
// 0050b6c8: CMP EDX,EAX
// 0050b6ca: JZ 0x0050b537
//   XREF to: 0050b537 (CONDITIONAL_JUMP)
// 0050b6d0: MOV EAX,dword ptr [ESP + 0x60]
// 0050b6d4: MOV dword ptr [EDX],EAX
// 0050b6d6: MOV EAX,dword ptr [ESP + 0x64]
// 0050b6da: MOV dword ptr [EDX + 0x4],EAX
// 0050b6dd: MOV EAX,dword ptr [ESP + 0x68]
// 0050b6e1: MOV dword ptr [EDX + 0x8],EAX
// 0050b6e4: JMP 0x0050b537
//   XREF to: 0050b537 (UNCONDITIONAL_JUMP)
// 0050b6e9: MOV EAX,ESP
//   Label: LAB_0050b6e9
// 0050b6eb: PUSH EAX
// 0050b6ec: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0050b6f1: LEA EAX,[ESP + 0x4]
// 0050b6f5: LEA EDX,[EBX + 0x1340]
// 0050b6fb: ADD ESP,0x4
// 0050b6fe: CMP EAX,EDX
// 0050b700: JZ 0x0050b715
//   XREF to: 0050b715 (CONDITIONAL_JUMP)
// 0050b702: MOV EAX,dword ptr [EDX]
// 0050b704: MOV dword ptr [ESP],EAX
// 0050b707: MOV EAX,dword ptr [EDX + 0x4]
// 0050b70a: MOV dword ptr [ESP + 0x4],EAX
// 0050b70e: MOV EAX,dword ptr [EDX + 0x8]
// 0050b711: MOV dword ptr [ESP + 0x8],EAX
// 0050b715: LEA EAX,[ESP + 0xc]
//   Label: LAB_0050b715
// 0050b719: LEA EDX,[EBX + 0x1368]
// 0050b71f: CMP EAX,EDX
// 0050b721: JZ 0x0050b737
//   XREF to: 0050b737 (CONDITIONAL_JUMP)
// 0050b723: MOV EAX,dword ptr [EDX]
// 0050b725: MOV dword ptr [ESP + 0xc],EAX
// 0050b729: MOV EAX,dword ptr [EDX + 0x4]
// 0050b72c: MOV dword ptr [ESP + 0x10],EAX
// 0050b730: MOV EAX,dword ptr [EDX + 0x8]
// 0050b733: MOV dword ptr [ESP + 0x14],EAX
// 0050b737: MOV EAX,ESP
//   Label: LAB_0050b737
// 0050b739: PUSH EAX
// 0050b73a: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0050b73f: LEA EAX,[ESP + 0x4]
// 0050b743: LEA EDX,[EBX + 0x1340]
// 0050b749: ADD ESP,0x4
// 0050b74c: CMP EDX,EAX
// 0050b74e: JZ 0x0050b763
//   XREF to: 0050b763 (CONDITIONAL_JUMP)
// 0050b750: MOV EAX,dword ptr [ESP]
// 0050b753: MOV dword ptr [EDX],EAX
// 0050b755: MOV EAX,dword ptr [ESP + 0x4]
// 0050b759: MOV dword ptr [EDX + 0x4],EAX
// 0050b75c: MOV EAX,dword ptr [ESP + 0x8]
// 0050b760: MOV dword ptr [EDX + 0x8],EAX
// 0050b763: LEA EAX,[ESP + 0xc]
//   Label: LAB_0050b763
// 0050b767: LEA EDX,[EBX + 0x1368]
// 0050b76d: CMP EDX,EAX
// 0050b76f: JZ 0x0050b785
//   XREF to: 0050b785 (CONDITIONAL_JUMP)
// 0050b771: MOV EAX,dword ptr [ESP + 0xc]
// 0050b775: MOV dword ptr [EDX],EAX
// 0050b777: MOV EAX,dword ptr [ESP + 0x10]
// 0050b77b: MOV dword ptr [EDX + 0x4],EAX
// 0050b77e: MOV EAX,dword ptr [ESP + 0x14]
// 0050b782: MOV dword ptr [EDX + 0x8],EAX
// 0050b785: MOV dword ptr [EBX + 0x1358],0x0
//   Label: LAB_0050b785
// 0050b78f: FLD float ptr [EBX + 0x1348]
// 0050b795: MOV EAX,dword ptr [EBX + 0x1340]
// 0050b79b: MOV dword ptr [EBX + 0x134c],EAX
// 0050b7a1: FSTP float ptr [EBX + 0x1354]
// 0050b7a7: JMP 0x0050b537
//   XREF to: 0050b537 (UNCONDITIONAL_JUMP)
// 0050b7ac: XOR EBP,EBP
//   Label: LAB_0050b7ac
// 0050b7ae: PUSH EBX
// 0050b7af: MOV dword ptr [0x02f0cb1c],EBP
//   XREF to: 02f0cb1c (WRITE)
// 0050b7b5: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 0050b7ba: ADD ESP,0x4
// 0050b7bd: JMP 0x0050b537
//   XREF to: 0050b537 (UNCONDITIONAL_JUMP)
