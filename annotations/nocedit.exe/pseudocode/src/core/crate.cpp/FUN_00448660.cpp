// Name: core_crate.cpp_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 0044887d]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448660()
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448660(undefined4 param_1) */

void core_crate_cpp_FUN_00448660(void)

{
  int iVar1;
  float unaff_retaddr;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  float fStack_8;
  
  if (in_stack_00000004[2].location.position.y != 0.0) {
    in_stack_00000004[2].location.area_id = 0;
    return;
  }
  (in_stack_00000004->location).position.x =
       (in_stack_00000004->field_224).x + (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.y =
       (in_stack_00000004->field_224).y + (in_stack_00000004->location).position.y;
  (in_stack_00000004->location).position.z =
       (in_stack_00000004->field_224).z + (in_stack_00000004->location).position.z;
  (in_stack_00000004->field_224).z = 0.0;
  (in_stack_00000004->field_224).y = (in_stack_00000004->field_224).z;
  (in_stack_00000004->field_224).x = (in_stack_00000004->field_224).y;
  (in_stack_00000004->orient).pitch =
       (in_stack_00000004->field_236).x + (in_stack_00000004->orient).pitch;
  (in_stack_00000004->orient).bank =
       (in_stack_00000004->field_236).y + (in_stack_00000004->orient).bank;
  (in_stack_00000004->orient).heading =
       (in_stack_00000004->field_236).z + (in_stack_00000004->orient).heading;
  (in_stack_00000004->field_236).z = 0.0;
  (in_stack_00000004->field_236).y = (in_stack_00000004->field_236).z;
  (in_stack_00000004->field_236).x = (in_stack_00000004->field_236).y;
  if (((((in_stack_00000004[2].orient.pitch != (in_stack_00000004->location).position.x) ||
        (in_stack_00000004[2].orient.bank != (in_stack_00000004->location).position.y)) ||
       (in_stack_00000004[2].orient.heading != (in_stack_00000004->location).position.z)) ||
      ((in_stack_00000004[2].orient_matrix.m[0].x != (in_stack_00000004->orient).pitch ||
       (in_stack_00000004[2].orient_matrix.m[0].y != (in_stack_00000004->orient).bank)))) ||
     (in_stack_00000004[2].orient_matrix.m[0].z != (in_stack_00000004->orient).heading)) {
    unaff_retaddr =
         (*((in_stack_00000004->metadata).vtable)->cylinderGroundCheck)
                   (in_stack_00000004,in_stack_00000004[2].location.position.z,(CVector3f *)0x0);
    if ((CLocation *)&in_stack_00000004[2].orient != &in_stack_00000004->location) {
      in_stack_00000004[2].orient.pitch = (in_stack_00000004->location).position.x;
      in_stack_00000004[2].orient.bank = (in_stack_00000004->location).position.y;
      in_stack_00000004[2].orient.heading = (in_stack_00000004->location).position.z;
    }
    if ((COrientation *)&in_stack_00000004[2].orient_matrix != &in_stack_00000004->orient) {
      in_stack_00000004[2].orient_matrix.m[0].x = (in_stack_00000004->orient).pitch;
      in_stack_00000004[2].orient_matrix.m[0].y = (in_stack_00000004->orient).bank;
      in_stack_00000004[2].orient_matrix.m[0].z = (in_stack_00000004->orient).heading;
    }
    in_stack_00000004[2].orient_matrix.m[1].x = unaff_retaddr;
  }
  if ((in_stack_00000004[2].location.area_id == 0) && (in_stack_00000004->field11_0xdc != 0)) {
    in_stack_00000004[2].location.area_id = in_stack_00000004->field11_0xdc;
  }
  iVar1 = in_stack_00000004[2].location.area_id;
  if (iVar1 == 0) {
    (in_stack_00000004->location).position.y = unaff_retaddr;
    core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
    return;
  }
  in_stack_00000004->field11_0xdc = iVar1;
  (in_stack_00000004->location).position.x = *(float *)(iVar1 + 0x20);
  (in_stack_00000004->location).position.y = *(float *)(iVar1 + 0x24);
  (in_stack_00000004->location).position.z = *(float *)(iVar1 + 0x28);
  (in_stack_00000004->location).area_id = *(int *)(iVar1 + 0x2c);
  iVar1 = in_stack_00000004->field11_0xdc;
  if (&in_stack_00000004->orient != (COrientation *)(iVar1 + 0x30)) {
    (in_stack_00000004->orient).pitch = *(float *)(iVar1 + 0x30);
    (in_stack_00000004->orient).bank = *(float *)(iVar1 + 0x34);
    (in_stack_00000004->orient).heading = *(float *)(iVar1 + 0x38);
  }
  (**(code **)(*(int *)(in_stack_00000004->field11_0xdc + 0x154) + 0x14))();
  (in_stack_00000004->location).position.y =
       (fStack_8 - fStack_14) + (in_stack_00000004->location).position.y;
  core_actor_cpp_CDemonActor_FUN_00408c10(in_stack_00000004);
  return;
}


// Assembly code:
// 00448660: PUSH EBX
//   Label: core_crate.cpp_FUN_00448660
// 00448661: SUB ESP,0x20
// 00448664: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00448668: CMP dword ptr [EBX + 0x2d4],0x0
// 0044866f: JNZ 0x00448801
//   XREF to: 00448801 (CONDITIONAL_JUMP)
// 00448675: LEA EDX,[EBX + 0x20]
// 00448678: LEA EAX,[EBX + 0xe0]
// 0044867e: FLD float ptr [EAX]
// 00448680: FADD float ptr [EDX]
// 00448682: FSTP float ptr [EDX]
// 00448684: FLD float ptr [EAX + 0x4]
// 00448687: FADD float ptr [EDX + 0x4]
// 0044868a: FSTP float ptr [EDX + 0x4]
// 0044868d: FLD float ptr [EAX + 0x8]
// 00448690: FADD float ptr [EDX + 0x8]
// 00448693: FSTP float ptr [EDX + 0x8]
// 00448696: MOV dword ptr [EAX + 0x8],0x0
// 0044869d: LEA EDX,[EBX + 0x30]
// 004486a0: MOV ECX,dword ptr [EAX + 0x8]
// 004486a3: MOV dword ptr [EAX + 0x4],ECX
// 004486a6: MOV ECX,dword ptr [EAX + 0x4]
// 004486a9: MOV dword ptr [EAX],ECX
// 004486ab: LEA EAX,[EBX + 0xec]
// 004486b1: FLD float ptr [EAX]
// 004486b3: FADD float ptr [EDX]
// 004486b5: FSTP float ptr [EDX]
// 004486b7: FLD float ptr [EAX + 0x4]
// 004486ba: FADD float ptr [EDX + 0x4]
// 004486bd: FSTP float ptr [EDX + 0x4]
// 004486c0: FLD float ptr [EAX + 0x8]
// 004486c3: FADD float ptr [EDX + 0x8]
// 004486c6: FSTP float ptr [EDX + 0x8]
// 004486c9: MOV dword ptr [EAX + 0x8],0x0
// 004486d0: MOV EDX,dword ptr [EAX + 0x8]
// 004486d3: MOV dword ptr [EAX + 0x4],EDX
// 004486d6: MOV EDX,dword ptr [EAX + 0x4]
// 004486d9: MOV dword ptr [EAX],EDX
// 004486db: FLD float ptr [EBX + 0x2e0]
// 004486e1: FCOMP float ptr [EBX + 0x20]
// 004486e4: FNSTSW AX
// 004486e6: SAHF
// 004486e7: JNZ 0x004486fb
//   XREF to: 004486fb (CONDITIONAL_JUMP)
// 004486e9: FLD float ptr [EBX + 0x2e4]
// 004486ef: FCOMP float ptr [EBX + 0x24]
// 004486f2: FNSTSW AX
// 004486f4: SAHF
// 004486f5: JZ 0x00448810
//   XREF to: 00448810 (CONDITIONAL_JUMP)
// 004486fb: PUSH 0x0
//   Label: LAB_004486fb
// 004486fd: MOV EAX,dword ptr [EBX + 0x154]
// 00448703: PUSH dword ptr [EBX + 0x2d8]
// 00448709: PUSH EBX
// 0044870a: CALL dword ptr [EAX + 0x38]
// 0044870d: MOV dword ptr [ESP + 0x28],EAX
// 00448711: LEA EDX,[EBX + 0x2e0]
// 00448717: FLD float ptr [ESP + 0x28]
// 0044871b: ADD ESP,0xc
// 0044871e: LEA EAX,[EBX + 0x20]
// 00448721: FSTP float ptr [ESP + 0x18]
// 00448725: CMP EDX,EAX
// 00448727: JZ 0x00448739
//   XREF to: 00448739 (CONDITIONAL_JUMP)
// 00448729: MOV ECX,dword ptr [EAX]
// 0044872b: MOV dword ptr [EDX],ECX
// 0044872d: MOV ECX,dword ptr [EAX + 0x4]
// 00448730: MOV dword ptr [EDX + 0x4],ECX
// 00448733: MOV ECX,dword ptr [EAX + 0x8]
// 00448736: MOV dword ptr [EDX + 0x8],ECX
// 00448739: LEA EDX,[EBX + 0x2ec]
//   Label: LAB_00448739
// 0044873f: LEA EAX,[EBX + 0x30]
// 00448742: CMP EDX,EAX
// 00448744: JZ 0x00448756
//   XREF to: 00448756 (CONDITIONAL_JUMP)
// 00448746: MOV ECX,dword ptr [EAX]
// 00448748: MOV dword ptr [EDX],ECX
// 0044874a: MOV ECX,dword ptr [EAX + 0x4]
// 0044874d: MOV dword ptr [EDX + 0x4],ECX
// 00448750: MOV ECX,dword ptr [EAX + 0x8]
// 00448753: MOV dword ptr [EDX + 0x8],ECX
// 00448756: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00448756
// 0044875a: MOV dword ptr [EBX + 0x2f8],EAX
// 00448760: PUSH EDI
//   Label: LAB_00448760
// 00448761: PUSH ESI
// 00448762: CMP dword ptr [EBX + 0x2dc],0x0
// 00448769: JNZ 0x0044877b
//   XREF to: 0044877b (CONDITIONAL_JUMP)
// 0044876b: MOV ESI,dword ptr [EBX + 0xdc]
// 00448771: TEST ESI,ESI
// 00448773: JZ 0x0044877b
//   XREF to: 0044877b (CONDITIONAL_JUMP)
// 00448775: MOV dword ptr [EBX + 0x2dc],ESI
// 0044877b: MOV EDI,dword ptr [EBX + 0x2dc]
//   Label: LAB_0044877b
// 00448781: TEST EDI,EDI
// 00448783: JZ 0x00448867
//   XREF to: 00448867 (CONDITIONAL_JUMP)
// 00448789: MOV EAX,EDI
// 0044878b: MOV dword ptr [EBX + 0xdc],EDI
// 00448791: LEA EDX,[EBX + 0x20]
// 00448794: MOV ECX,dword ptr [EAX + 0x20]
// 00448797: MOV dword ptr [EDX],ECX
// 00448799: MOV ECX,dword ptr [EAX + 0x24]
// 0044879c: MOV dword ptr [EDX + 0x4],ECX
// 0044879f: MOV ECX,dword ptr [EAX + 0x28]
// 004487a2: MOV dword ptr [EDX + 0x8],ECX
// 004487a5: MOV EAX,dword ptr [EDI + 0x2c]
// 004487a8: MOV dword ptr [EDX + 0xc],EAX
// 004487ab: MOV EAX,dword ptr [EBX + 0xdc]
// 004487b1: LEA EDX,[EBX + 0x30]
// 004487b4: ADD EAX,0x30
// 004487b7: CMP EDX,EAX
// 004487b9: JZ 0x004487cb
//   XREF to: 004487cb (CONDITIONAL_JUMP)
// 004487bb: MOV ECX,dword ptr [EAX]
// 004487bd: MOV dword ptr [EDX],ECX
// 004487bf: MOV ECX,dword ptr [EAX + 0x4]
// 004487c2: MOV dword ptr [EDX + 0x4],ECX
// 004487c5: MOV ECX,dword ptr [EAX + 0x8]
// 004487c8: MOV dword ptr [EDX + 0x8],ECX
// 004487cb: LEA EDX,[ESP + 0x8]
//   Label: LAB_004487cb
// 004487cf: MOV EAX,dword ptr [EBX + 0xdc]
// 004487d5: PUSH EDX
// 004487d6: MOV ECX,dword ptr [EAX + 0x154]
// 004487dc: PUSH EAX
// 004487dd: CALL dword ptr [ECX + 0x14]
// 004487e0: ADD ESP,0x8
// 004487e3: FLD float ptr [ESP + 0x18]
// 004487e7: FSUB float ptr [ESP + 0xc]
// 004487eb: FADD float ptr [EBX + 0x24]
// 004487ee: FSTP float ptr [EBX + 0x24]
// 004487f1: PUSH EBX
// 004487f2: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004487f7: ADD ESP,0x4
// 004487fa: POP ESI
// 004487fb: POP EDI
// 004487fc: ADD ESP,0x20
// 004487ff: POP EBX
// 00448800: RET
// 00448801: MOV dword ptr [EBX + 0x2dc],0x0
//   Label: LAB_00448801
// 0044880b: ADD ESP,0x20
// 0044880e: POP EBX
// 0044880f: RET
// 00448810: FLD float ptr [EBX + 0x2e8]
//   Label: LAB_00448810
// 00448816: FCOMP float ptr [EBX + 0x28]
// 00448819: FNSTSW AX
// 0044881b: SAHF
// 0044881c: JNZ 0x004486fb
//   XREF to: 004486fb (CONDITIONAL_JUMP)
// 00448822: FLD float ptr [EBX + 0x2ec]
// 00448828: FCOMP float ptr [EBX + 0x30]
// 0044882b: FNSTSW AX
// 0044882d: SAHF
// 0044882e: JNZ 0x004486fb
//   XREF to: 004486fb (CONDITIONAL_JUMP)
// 00448834: FLD float ptr [EBX + 0x2f0]
// 0044883a: FCOMP float ptr [EBX + 0x34]
// 0044883d: FNSTSW AX
// 0044883f: SAHF
// 00448840: JNZ 0x004486fb
//   XREF to: 004486fb (CONDITIONAL_JUMP)
// 00448846: FLD float ptr [EBX + 0x2f4]
// 0044884c: FCOMP float ptr [EBX + 0x38]
// 0044884f: FNSTSW AX
// 00448851: SAHF
// 00448852: JNZ 0x004486fb
//   XREF to: 004486fb (CONDITIONAL_JUMP)
// 00448858: MOV EAX,dword ptr [EBX + 0x2f8]
// 0044885e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00448862: JMP 0x00448760
//   XREF to: 00448760 (UNCONDITIONAL_JUMP)
// 00448867: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_00448867
// 0044886b: MOV dword ptr [EBX + 0x24],EAX
// 0044886e: PUSH EBX
// 0044886f: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00448874: ADD ESP,0x4
// 00448877: POP ESI
// 00448878: POP EDI
// 00448879: ADD ESP,0x20
// 0044887c: POP EBX
// 0044887d: RET
