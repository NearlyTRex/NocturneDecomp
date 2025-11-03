// Name: core_door.cpp_CDoor_reposition_FUN_0047fd20
// Address: 0047fd20
// Address Range: [[0047fd20, 004800af]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_reposition_FUN_0047fd20(CDoor * this_ptr)
// Cross-references:
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 004805c2 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_renderOpaque_FUN_004807d0 (004807d0) at 004808c1 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_updateCollisionData_FUN_00481020 (00481020) at 0048103c [UNCONDITIONAL_CALL]
//   core_door.cpp_FUN_004812b0 (004812b0) at 004812e7 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0047fd0c = 0047fd5a
//   TerminatedCString s_core_door_cpp_00621105
//   TerminatedCString s_CDoor_reposition_Unknown_00621116
//   double DOUBLE_00621139 = 1.57079632675000
//   float FLOAT_00621141 = 0.5
//   double DOUBLE_00621149 = -0.300000000000000
//   double DOUBLE_00621151 = 0.300000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_reposition_FUN_0047fd20(CDoor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  float fStack0000000c;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f aCStack_90 [2];
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  
  (*((this_ptr->base_actor).vtable)->getBoundingBox)
            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffff38);
  switch(this_ptr->door_type) {
  case 0:
    (this_ptr->base_actor).orient.pitch = 0.0;
    (this_ptr->base_actor).orient.heading = 0.0;
    (this_ptr->base_actor).location.position.x = (this_ptr->orig_pos).x;
    (this_ptr->base_actor).location.position.y = (this_ptr->orig_pos).y;
    (this_ptr->base_actor).location.position.z = (this_ptr->orig_pos).z;
    if (this_ptr->door_swing == 0) {
      fVar2 = this_ptr->param * (float)DOUBLE_00621139 + (this_ptr->orig_orient).y;
    }
    else {
      fVar2 = (this_ptr->orig_orient).y - this_ptr->param * (float)DOUBLE_00621139;
    }
    (this_ptr->base_actor).orient.bank = fVar2;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    if (ABS(fStack_b4) <= ABS(fStack_a8)) {
      fVar2 = fStack_a8 + (float)DOUBLE_00621149;
    }
    else {
      fVar2 = fStack_b4 + (float)DOUBLE_00621151;
    }
    *(float *)this_ptr->field17_0x9bc = fVar2;
    this_ptr->field17_0x9bc[4] = '\0';
    this_ptr->field17_0x9bc[5] = '\0';
    this_ptr->field17_0x9bc[6] = '`';
    this_ptr->field17_0x9bc[7] = '@';
    this_ptr->field17_0x9bc[8] = '\0';
    this_ptr->field17_0x9bc[9] = '\0';
    this_ptr->field17_0x9bc[10] = '\0';
    this_ptr->field17_0x9bc[0xb] = '\0';
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_3c,(CVector3f *)this_ptr->field17_0x9bc);
    break;
  case 1:
    (this_ptr->base_actor).location.position.y = (this_ptr->orig_pos).y + this_ptr->param;
    CStack_30.y = 3.5;
    CStack_30.x = 0.0;
    CStack_30.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_60,&CStack_30);
    break;
  case 2:
    if (this_ptr->door_side == 1) {
      aCStack_90[0].x = this_ptr->param;
    }
    else {
      aCStack_90[0].x = -this_ptr->param;
    }
    aCStack_90[0].y = 0.0;
    aCStack_90[0].z = 0.0;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base_actor).orient_matrix,(CVector3f *)&stack0xffffffe8,
                        aCStack_90);
    fStack_6c = (this_ptr->orig_pos).x + pCVar3->x;
    fStack_68 = (this_ptr->orig_pos).y + pCVar3->y;
    fStack_64 = (this_ptr->orig_pos).z + pCVar3->z;
    (this_ptr->base_actor).location.position.x = fStack_6c;
    (this_ptr->base_actor).location.position.y = fStack_68;
    (this_ptr->base_actor).location.position.z = fStack_64;
    CStack_78.x = 0.0;
    CStack_78.y = 3.5;
    CStack_78.z = 0.0;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_54,&CStack_78);
    break;
  case 3:
    (this_ptr->base_actor).orient.pitch = this_ptr->param * (float)DOUBLE_00621139;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
    CStack_48.x = (fStack_b4 + fStack_a8) * FLOAT_00621141;
    CStack_48.y = (fStack_b0 + fStack_a4) * FLOAT_00621141;
    CStack_48.z = (fStack_ac + fStack_a0) * FLOAT_00621141;
    pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base_actor,&CStack_24,&CStack_48);
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0xf8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::reposition - Unknown type");
    goto LAB_0047fe19;
  }
  if ((CVector3f *)this_ptr->field17_0x9bc != pCVar3) {
    *(float *)this_ptr->field17_0x9bc = pCVar3->x;
    *(float *)(this_ptr->field17_0x9bc + 4) = pCVar3->y;
    *(float *)(this_ptr->field17_0x9bc + 8) = pCVar3->z;
  }
LAB_0047fe19:
  if (0.0 < *(float *)this_ptr->field19_0x9cc) {
    fStack00000008 =
         core_actor_cpp_getRandomFloat_FUN_0040cc10
                   (-*(float *)this_ptr->field19_0x9cc,*(float *)this_ptr->field19_0x9cc);
    fStack00000008 =
         core_actor_cpp_getRandomFloat_FUN_0040cc10
                   (-*(float *)this_ptr->field19_0x9cc,*(float *)this_ptr->field19_0x9cc);
    fStack0000000c = fStack00000008;
    pCVar3 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base_actor,&CStack_78,(CVector3f *)&stack0x00000000);
    pCVar1 = &(this_ptr->base_actor).location;
    (pCVar1->position).x = pCVar3->x + (pCVar1->position).x;
    (this_ptr->base_actor).location.position.y =
         pCVar3->y + (this_ptr->base_actor).location.position.y;
    (this_ptr->base_actor).location.position.z =
         pCVar3->z + (this_ptr->base_actor).location.position.z;
    this_ptr->field19_0x9cc[0] = '\0';
    this_ptr->field19_0x9cc[1] = '\0';
    this_ptr->field19_0x9cc[2] = '\0';
    this_ptr->field19_0x9cc[3] = '\0';
    return;
  }
  return;
}


// Assembly code:
// 0047fd20: PUSH EBX
//   Label: core_door.cpp_CDoor_reposition_FUN_0047fd20
// 0047fd21: PUSH ESI
// 0047fd22: PUSH EDI
// 0047fd23: PUSH EBP
// 0047fd24: MOV EBP,ESP
// 0047fd26: SUB ESP,0xc8
// 0047fd2c: AND ESP,0xfffffff8
// 0047fd2f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0047fd32: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0xc8] (DATA)
// 0047fd36: PUSH EAX
// 0047fd37: MOV ESI,dword ptr [EBX + 0x154]
// 0047fd3d: PUSH EBX
// 0047fd3e: CALL dword ptr [ESI + 0x14]
// 0047fd41: MOV EAX,dword ptr [EBX + 0x2d8]
// 0047fd47: ADD ESP,0x8
// 0047fd4a: CMP EAX,0x3
// 0047fd4d: JA 0x0047ffd9
//   XREF to: 0047ffd9 (CONDITIONAL_JUMP)
// 0047fd53: JMP dword ptr [EAX*0x4 + 0x47fd0c]
//   Label: switchD
//   XREF to: 0047fd5a (COMPUTED_JUMP)
//   XREF to: 0047fe59 (COMPUTED_JUMP)
//   XREF to: 0047fea2 (COMPUTED_JUMP)
//   XREF to: 0047ff52 (COMPUTED_JUMP)
//   XREF to: 0047fd0c (DATA)
// 0047fd5a: LEA ESI,[EBX + 0x20]
//   Label: caseD_0
// 0047fd5d: MOV dword ptr [EBX + 0x30],0x0
// 0047fd64: LEA EAX,[EBX + 0x994]
// 0047fd6a: MOV dword ptr [EBX + 0x38],0x0
// 0047fd71: MOV EDX,dword ptr [EAX]
// 0047fd73: MOV dword ptr [ESI],EDX
// 0047fd75: MOV EDX,dword ptr [EAX + 0x4]
// 0047fd78: MOV dword ptr [ESI + 0x4],EDX
// 0047fd7b: MOV EDX,dword ptr [EAX + 0x8]
// 0047fd7e: MOV dword ptr [ESI + 0x8],EDX
// 0047fd81: CMP dword ptr [EBX + 0x2e4],0x0
// 0047fd88: JNZ 0x0047fe33
//   XREF to: 0047fe33 (CONDITIONAL_JUMP)
// 0047fd8e: FLD float ptr [EBX + 0x9ac]
// 0047fd94: FMUL double ptr [0x00621139]
//   XREF to: 00621139 (READ)
// 0047fd9a: FADD float ptr [EBX + 0x9a4]
// 0047fda0: FSTP float ptr [EBX + 0x34]
//   Label: LAB_0047fda0
// 0047fda3: PUSH EBX
// 0047fda4: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0047fda9: ADD ESP,0x4
// 0047fdac: FLD float ptr [ESP + 0x1c]
// 0047fdb0: FST double ptr [ESP + 0x8]
// 0047fdb4: FABS
// 0047fdb6: FLD float ptr [ESP + 0x10]
// 0047fdba: FST double ptr [ESP]
// 0047fdbd: FABS
// 0047fdbf: FCOMPP
// 0047fdc1: FNSTSW AX
// 0047fdc3: SAHF
// 0047fdc4: JBE 0x0047fe4a
//   XREF to: 0047fe4a (CONDITIONAL_JUMP)
// 0047fdca: FLD double ptr [ESP]
// 0047fdcd: FADD double ptr [0x00621151]
//   XREF to: 00621151 (READ)
// 0047fdd3: FSTP float ptr [EBX + 0x9bc]
//   Label: LAB_0047fdd3
// 0047fdd9: LEA ESI,[EBX + 0x9bc]
// 0047fddf: PUSH ESI
// 0047fde0: LEA EAX,[ESP + 0x8c]
// 0047fde7: PUSH EAX
// 0047fde8: MOV dword ptr [EBX + 0x9c0],0x40600000
// 0047fdf2: PUSH EBX
// 0047fdf3: MOV dword ptr [EBX + 0x9c4],0x0
// 0047fdfd: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047fe02: ADD ESP,0xc
//   Label: LAB_0047fe02
// 0047fe05: CMP ESI,EAX
// 0047fe07: JZ 0x0047fe19
//   XREF to: 0047fe19 (CONDITIONAL_JUMP)
// 0047fe09: MOV EDX,dword ptr [EAX]
// 0047fe0b: MOV dword ptr [ESI],EDX
// 0047fe0d: MOV EDX,dword ptr [EAX + 0x4]
// 0047fe10: MOV dword ptr [ESI + 0x4],EDX
// 0047fe13: MOV EDX,dword ptr [EAX + 0x8]
// 0047fe16: MOV dword ptr [ESI + 0x8],EDX
// 0047fe19: FLD float ptr [EBX + 0x9cc]
//   Label: LAB_0047fe19
// 0047fe1f: FLDZ
// 0047fe21: FCOMPP
// 0047fe23: FNSTSW AX
// 0047fe25: SAHF
// 0047fe26: JC 0x00480001
//   XREF to: 00480001 (CONDITIONAL_JUMP)
// 0047fe2c: MOV ESP,EBP
// 0047fe2e: POP EBP
// 0047fe2f: POP EDI
// 0047fe30: POP ESI
// 0047fe31: POP EBX
// 0047fe32: RET
// 0047fe33: FLD float ptr [EBX + 0x9ac]
//   Label: LAB_0047fe33
// 0047fe39: FMUL double ptr [0x00621139]
//   XREF to: 00621139 (READ)
// 0047fe3f: FSUBR float ptr [EBX + 0x9a4]
// 0047fe45: JMP 0x0047fda0
//   XREF to: 0047fda0 (UNCONDITIONAL_JUMP)
// 0047fe4a: FLD double ptr [ESP + 0x8]
//   Label: LAB_0047fe4a
// 0047fe4e: FADD double ptr [0x00621149]
//   XREF to: 00621149 (READ)
// 0047fe54: JMP 0x0047fdd3
//   XREF to: 0047fdd3 (UNCONDITIONAL_JUMP)
// 0047fe59: FLD float ptr [EBX + 0x998]
//   Label: caseD_1
// 0047fe5f: FADD float ptr [EBX + 0x9ac]
// 0047fe65: MOV EAX,0x40600000
// 0047fe6a: FSTP float ptr [EBX + 0x24]
// 0047fe6d: MOV dword ptr [ESP + 0x98],EAX
// 0047fe74: LEA EAX,[ESP + 0x94]
// 0047fe7b: PUSH EAX
// 0047fe7c: LEA EAX,[ESP + 0x68]
// 0047fe80: PUSH EAX
// 0047fe81: XOR EDI,EDI
// 0047fe83: PUSH EBX
// 0047fe84: MOV dword ptr [ESP + 0xa0],EDI
// 0047fe8b: MOV dword ptr [ESP + 0xa8],EDI
// 0047fe92: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047fe97: LEA ESI,[EBX + 0x9bc]
// 0047fe9d: JMP 0x0047fe02
//   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)
// 0047fea2: CMP dword ptr [EBX + 0x2dc],0x1
//   Label: caseD_2
// 0047fea9: JZ 0x0047ff43
//   XREF to: 0047ff43 (CONDITIONAL_JUMP)
// 0047feaf: FLD float ptr [EBX + 0x9ac]
// 0047feb5: FCHS
// 0047feb7: FSTP float ptr [ESP + 0x34]
// 0047febb: LEA EAX,[ESP + 0x34]
//   Label: LAB_0047febb
// 0047febf: PUSH EAX
// 0047fec0: LEA EAX,[ESP + 0xb0]
// 0047fec7: XOR EDI,EDI
// 0047fec9: PUSH EAX
// 0047feca: LEA EAX,[EBX + 0x3c]
// 0047fecd: MOV dword ptr [ESP + 0x40],EDI
// 0047fed1: PUSH EAX
// 0047fed2: LEA ESI,[EBX + 0x994]
// 0047fed8: MOV dword ptr [ESP + 0x48],EDI
// 0047fedc: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0047fee1: FLD float ptr [ESI]
// 0047fee3: FADD float ptr [EAX]
// 0047fee5: ADD ESP,0xc
// 0047fee8: FSTP float ptr [ESP + 0x58]
// 0047feec: FLD float ptr [ESI + 0x4]
// 0047feef: FADD float ptr [EAX + 0x4]
// 0047fef2: FSTP float ptr [ESP + 0x5c]
// 0047fef6: FLD float ptr [ESI + 0x8]
// 0047fef9: LEA ESI,[EBX + 0x20]
// 0047fefc: FADD float ptr [EAX + 0x8]
// 0047feff: MOV EAX,dword ptr [ESP + 0x58]
// 0047ff03: FSTP float ptr [ESP + 0x60]
// 0047ff07: MOV dword ptr [ESI],EAX
// 0047ff09: MOV EAX,dword ptr [ESP + 0x5c]
// 0047ff0d: MOV dword ptr [ESI + 0x4],EAX
// 0047ff10: MOV EAX,dword ptr [ESP + 0x60]
// 0047ff14: MOV dword ptr [ESI + 0x8],EAX
// 0047ff17: LEA EAX,[ESP + 0x4c]
// 0047ff1b: PUSH EAX
// 0047ff1c: LEA EAX,[ESP + 0x74]
// 0047ff20: PUSH EAX
// 0047ff21: MOV ECX,0x40600000
// 0047ff26: MOV dword ptr [ESP + 0x54],EDI
// 0047ff2a: PUSH EBX
// 0047ff2b: MOV dword ptr [ESP + 0x5c],ECX
// 0047ff2f: MOV dword ptr [ESP + 0x60],EDI
// 0047ff33: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047ff38: LEA ESI,[EBX + 0x9bc]
// 0047ff3e: JMP 0x0047fe02
//   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)
// 0047ff43: MOV EAX,dword ptr [EBX + 0x9ac]
//   Label: LAB_0047ff43
// 0047ff49: MOV dword ptr [ESP + 0x34],EAX
// 0047ff4d: JMP 0x0047febb
//   XREF to: 0047febb (UNCONDITIONAL_JUMP)
// 0047ff52: FLD float ptr [EBX + 0x9ac]
//   Label: caseD_3
// 0047ff58: FMUL double ptr [0x00621139]
//   XREF to: 00621139 (READ)
// 0047ff5e: PUSH EBX
// 0047ff5f: FSTP float ptr [EBX + 0x30]
// 0047ff62: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0047ff67: ADD ESP,0x4
// 0047ff6a: FLD float ptr [ESP + 0x14]
// 0047ff6e: FLD float ptr [ESP + 0x10]
// 0047ff72: FADD float ptr [ESP + 0x1c]
// 0047ff76: FXCH
// 0047ff78: FADD float ptr [ESP + 0x20]
// 0047ff7c: FXCH
// 0047ff7e: FST float ptr [ESP + 0x28]
// 0047ff82: FLD float ptr [0x00621141]
//   XREF to: 00621141 (READ)
// 0047ff88: FXCH
// 0047ff8a: FMUL ST1
// 0047ff8c: FXCH ST2
// 0047ff8e: FST float ptr [ESP + 0x2c]
// 0047ff92: FMUL ST1
// 0047ff94: LEA EAX,[ESP + 0x7c]
// 0047ff98: FLD float ptr [ESP + 0x18]
// 0047ff9c: PUSH EAX
// 0047ff9d: FADD float ptr [ESP + 0x28]
// 0047ffa1: LEA EAX,[ESP + 0xa4]
// 0047ffa8: FST float ptr [ESP + 0x34]
// 0047ffac: PUSH EAX
// 0047ffad: FMULP ST2
// 0047ffaf: PUSH EBX
// 0047ffb0: FXCH ST2
// 0047ffb2: FSTP float ptr [ESP + 0x88]
// 0047ffb9: FXCH
// 0047ffbb: FSTP float ptr [ESP + 0x8c]
// 0047ffc2: FSTP float ptr [ESP + 0x90]
// 0047ffc9: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0047ffce: LEA ESI,[EBX + 0x9bc]
// 0047ffd4: JMP 0x0047fe02
//   XREF to: 0047fe02 (UNCONDITIONAL_JUMP)
// 0047ffd9: MOV EDX,0x621105
//   Label: default
//   XREF to: 00621105 (DATA)
// 0047ffde: MOV ECX,0xf8
// 0047ffe3: PUSH 0x621116
//   XREF to: 00621116 (DATA)
// 0047ffe8: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0047ffee: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0047fff4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047fff9: ADD ESP,0x4
// 0047fffc: JMP 0x0047fe19
//   XREF to: 0047fe19 (UNCONDITIONAL_JUMP)
// 00480001: PUSH dword ptr [EBX + 0x9cc]
//   Label: LAB_00480001
// 00480007: FLD float ptr [EBX + 0x9cc]
// 0048000d: SUB ESP,0x4
// 00480010: FCHS
// 00480012: FSTP float ptr [ESP]
// 00480015: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0048001a: MOV dword ptr [ESP + 0xcc],EAX
// 00480021: XOR ESI,ESI
// 00480023: FLD float ptr [ESP + 0xcc]
// 0048002a: ADD ESP,0x8
// 0048002d: MOV dword ptr [ESP + 0xbc],ESI
// 00480034: FSTP float ptr [ESP + 0xb8]
// 0048003b: PUSH dword ptr [EBX + 0x9cc]
// 00480041: FLD float ptr [EBX + 0x9cc]
// 00480047: SUB ESP,0x4
// 0048004a: FCHS
// 0048004c: FSTP float ptr [ESP]
// 0048004f: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00480054: MOV dword ptr [ESP + 0xcc],EAX
// 0048005b: FLD float ptr [ESP + 0xcc]
// 00480062: ADD ESP,0x8
// 00480065: LEA EAX,[ESP + 0xb8]
// 0048006c: PUSH EAX
// 0048006d: LEA EAX,[ESP + 0x44]
// 00480071: PUSH EAX
// 00480072: PUSH EBX
// 00480073: FSTP float ptr [ESP + 0xcc]
// 0048007a: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0048007f: MOV ESI,EAX
// 00480081: LEA EAX,[EBX + 0x20]
// 00480084: FLD float ptr [ESI]
// 00480086: FADD float ptr [EAX]
// 00480088: FSTP float ptr [EAX]
// 0048008a: FLD float ptr [ESI + 0x4]
// 0048008d: FADD float ptr [EAX + 0x4]
// 00480090: FSTP float ptr [EAX + 0x4]
// 00480093: FLD float ptr [ESI + 0x8]
// 00480096: FADD float ptr [EAX + 0x8]
// 00480099: ADD ESP,0xc
// 0048009c: FSTP float ptr [EAX + 0x8]
// 0048009f: MOV dword ptr [EBX + 0x9cc],0x0
// 004800a9: MOV ESP,EBP
// 004800ab: POP EBP
// 004800ac: POP EDI
// 004800ad: POP ESI
// 004800ae: POP EBX
// 004800af: RET
