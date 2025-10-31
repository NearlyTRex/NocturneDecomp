// Name: core_trigger.cpp_CTrigger_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e1180(CTrigger * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWayPoint_FUN_005ec5e0 (005ec5e0) at 005ec5ef [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00655a34 = 4
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_trigger.cpp_FUN_005e0ba0

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e1180(CTrigger *this_ptr)

{
  int iVar1;
  float in_stack_00000020;
  float in_stack_00000034;
  float in_stack_00000048;
  float in_stack_0000005c;
  undefined4 uStack0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000084;
  
  this_ptr->field1_0x158[0x14] = '\0';
  this_ptr->field1_0x158[0x15] = '\0';
  this_ptr->field1_0x158[0x16] = '\0';
  this_ptr->field1_0x158[0x17] = '\0';
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base_actor);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) - in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 8) =
           *(float *)(this_ptr->field1_0x158 + 8) + in_stack_00000034;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 0xc) =
           *(float *)(this_ptr->field1_0x158 + 0xc) - in_stack_00000048;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 0xc) =
           *(float *)(this_ptr->field1_0x158 + 0xc) + in_stack_0000005c;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 0x10) =
           *(float *)(this_ptr->field1_0x158 + 0x10) - in_stack_00000070;
    }
    iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field1_0x158 + 0x10) =
           *(float *)(this_ptr->field1_0x158 + 0x10) + in_stack_00000084;
    }
    if (*(int *)(this_ptr->field1_0x158 + 8) < 0x3c23d70a) {
      this_ptr->field1_0x158[8] = '\n';
      this_ptr->field1_0x158[9] = -0x29;
      this_ptr->field1_0x158[10] = '#';
      this_ptr->field1_0x158[0xb] = '<';
    }
    if (*(float *)(this_ptr->field1_0x158 + 0xc) < 0.01) {
      this_ptr->field1_0x158[0xc] = '\n';
      this_ptr->field1_0x158[0xd] = -0x29;
      this_ptr->field1_0x158[0xe] = '#';
      this_ptr->field1_0x158[0xf] = '<';
    }
    if (*(float *)(this_ptr->field1_0x158 + 0x10) < 0.01) {
      this_ptr->field1_0x158[0x10] = '\n';
      this_ptr->field1_0x158[0x11] = -0x29;
      this_ptr->field1_0x158[0x12] = '#';
      this_ptr->field1_0x158[0x13] = '<';
    }
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x18) == 1) {
    if (in_stack_00000074 != *(float *)(this_ptr->field1_0x158 + 8)) {
      *(undefined4 *)(this_ptr->field1_0x158 + 0x10) = *(undefined4 *)(this_ptr->field1_0x158 + 8);
    }
    *(undefined4 *)(this_ptr->field1_0x158 + 8) = *(undefined4 *)(this_ptr->field1_0x158 + 0x10);
  }
  uStack0000006c = 0x5e1200;
  core_trigger_cpp_FUN_005e0ba0();
  return;
}


// Assembly code:
// 005e1180: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e1180
// 005e1181: SUB ESP,0x14
// 005e1184: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005e1188: LEA EDX,[EBX + 0x160]
// 005e118e: MOV dword ptr [EBX + 0x16c],0x0
// 005e1198: MOV EAX,dword ptr [EDX]
// 005e119a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005e119d: LEA EAX,[EDX + 0x4]
// 005e11a0: MOV EAX,dword ptr [EAX]
// 005e11a2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005e11a6: LEA EAX,[EDX + 0x8]
// 005e11a9: MOV EAX,dword ptr [EAX]
// 005e11ab: PUSH 0x1d
// 005e11ad: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005e11b1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e11b6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e11b7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e11b9: CALL dword ptr [EDX]
// 005e11bb: ADD ESP,0x8
// 005e11be: TEST EAX,EAX
// 005e11c0: JNZ 0x005e1208
//   XREF to: 005e1208 (CONDITIONAL_JUMP)
// 005e11c2: PUSH EBX
// 005e11c3: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 005e11c8: ADD ESP,0x4
// 005e11cb: CMP dword ptr [EBX + 0x170],0x1
//   Label: LAB_005e11cb
// 005e11d2: JNZ 0x005e11fa
//   XREF to: 005e11fa (CONDITIONAL_JUMP)
// 005e11d4: FLD float ptr [ESP]
// 005e11d7: FCOMP float ptr [EBX + 0x160]
// 005e11dd: FNSTSW AX
// 005e11df: SAHF
// 005e11e0: JZ 0x005e11ee
//   XREF to: 005e11ee (CONDITIONAL_JUMP)
// 005e11e2: MOV EAX,dword ptr [EBX + 0x160]
// 005e11e8: MOV dword ptr [EBX + 0x168],EAX
// 005e11ee: MOV EAX,dword ptr [EBX + 0x168]
//   Label: LAB_005e11ee
// 005e11f4: MOV dword ptr [EBX + 0x160],EAX
// 005e11fa: PUSH EBX
//   Label: LAB_005e11fa
// 005e11fb: CALL core_trigger.cpp_FUN_005e0ba0
//   XREF to: 005e0ba0 (UNCONDITIONAL_CALL)
// 005e1200: ADD ESP,0x4
// 005e1203: ADD ESP,0x14
// 005e1206: POP EBX
// 005e1207: RET
// 005e1208: MOV EAX,[0x0067b654]
//   Label: LAB_005e1208
//   XREF to: 0067b654 (READ)
// 005e120d: PUSH 0x4b
// 005e120f: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005e1215: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e121a: FMUL double ptr [0x00655a34]
//   XREF to: 00655a34 (READ)
// 005e1220: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e1221: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e1223: FSTP float ptr [ESP + 0x18]
// 005e1227: CALL dword ptr [EDX]
// 005e1229: ADD ESP,0x8
// 005e122c: TEST EAX,EAX
// 005e122e: JZ 0x005e1240
//   XREF to: 005e1240 (CONDITIONAL_JUMP)
// 005e1230: FLD float ptr [EBX + 0x160]
// 005e1236: FSUB float ptr [ESP + 0x10]
// 005e123a: FSTP float ptr [EBX + 0x160]
// 005e1240: PUSH 0x4d
//   Label: LAB_005e1240
// 005e1242: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e1247: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e1248: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e124a: CALL dword ptr [EDX]
// 005e124c: ADD ESP,0x8
// 005e124f: TEST EAX,EAX
// 005e1251: JZ 0x005e1263
//   XREF to: 005e1263 (CONDITIONAL_JUMP)
// 005e1253: FLD float ptr [EBX + 0x160]
// 005e1259: FADD float ptr [ESP + 0x10]
// 005e125d: FSTP float ptr [EBX + 0x160]
// 005e1263: PUSH 0x1e
//   Label: LAB_005e1263
// 005e1265: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e126a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e126b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e126d: CALL dword ptr [EDX]
// 005e126f: ADD ESP,0x8
// 005e1272: TEST EAX,EAX
// 005e1274: JZ 0x005e1286
//   XREF to: 005e1286 (CONDITIONAL_JUMP)
// 005e1276: FLD float ptr [EBX + 0x164]
// 005e127c: FSUB float ptr [ESP + 0x10]
// 005e1280: FSTP float ptr [EBX + 0x164]
// 005e1286: PUSH 0x10
//   Label: LAB_005e1286
// 005e1288: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e128d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e128e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e1290: CALL dword ptr [EDX]
// 005e1292: ADD ESP,0x8
// 005e1295: TEST EAX,EAX
// 005e1297: JZ 0x005e12a9
//   XREF to: 005e12a9 (CONDITIONAL_JUMP)
// 005e1299: FLD float ptr [EBX + 0x164]
// 005e129f: FADD float ptr [ESP + 0x10]
// 005e12a3: FSTP float ptr [EBX + 0x164]
// 005e12a9: PUSH 0x50
//   Label: LAB_005e12a9
// 005e12ab: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e12b0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e12b1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e12b3: CALL dword ptr [EDX]
// 005e12b5: ADD ESP,0x8
// 005e12b8: TEST EAX,EAX
// 005e12ba: JZ 0x005e12cc
//   XREF to: 005e12cc (CONDITIONAL_JUMP)
// 005e12bc: FLD float ptr [EBX + 0x168]
// 005e12c2: FSUB float ptr [ESP + 0x10]
// 005e12c6: FSTP float ptr [EBX + 0x168]
// 005e12cc: PUSH 0x48
//   Label: LAB_005e12cc
// 005e12ce: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005e12d3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005e12d4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005e12d6: CALL dword ptr [EDX]
// 005e12d8: ADD ESP,0x8
// 005e12db: TEST EAX,EAX
// 005e12dd: JZ 0x005e12ef
//   XREF to: 005e12ef (CONDITIONAL_JUMP)
// 005e12df: FLD float ptr [EBX + 0x168]
// 005e12e5: FADD float ptr [ESP + 0x10]
// 005e12e9: FSTP float ptr [EBX + 0x168]
// 005e12ef: MOV EDX,0x3c23d70a
//   Label: LAB_005e12ef
// 005e12f4: MOV ECX,dword ptr [EBX + 0x160]
// 005e12fa: MOV dword ptr [ESP + 0xc],EDX
// 005e12fe: CMP ECX,EDX
// 005e1300: JGE 0x005e1308
//   XREF to: 005e1308 (CONDITIONAL_JUMP)
// 005e1302: MOV dword ptr [EBX + 0x160],EDX
// 005e1308: FLD float ptr [EBX + 0x164]
//   Label: LAB_005e1308
// 005e130e: FCOMP float ptr [ESP + 0xc]
// 005e1312: FNSTSW AX
// 005e1314: SAHF
// 005e1315: JNC 0x005e1321
//   XREF to: 005e1321 (CONDITIONAL_JUMP)
// 005e1317: MOV EAX,dword ptr [ESP + 0xc]
// 005e131b: MOV dword ptr [EBX + 0x164],EAX
// 005e1321: FLD float ptr [EBX + 0x168]
//   Label: LAB_005e1321
// 005e1327: FCOMP float ptr [ESP + 0xc]
// 005e132b: FNSTSW AX
// 005e132d: SAHF
// 005e132e: JNC 0x005e11cb
//   XREF to: 005e11cb (CONDITIONAL_JUMP)
// 005e1334: MOV EAX,dword ptr [ESP + 0xc]
// 005e1338: MOV dword ptr [EBX + 0x168],EAX
// 005e133e: JMP 0x005e11cb
//   XREF to: 005e11cb (UNCONDITIONAL_JUMP)
