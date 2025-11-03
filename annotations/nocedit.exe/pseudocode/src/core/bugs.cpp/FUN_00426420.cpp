// Name: core_bugs.cpp_FUN_00426420
// Address: 00426420
// Address Range: [[00426420, 004264fb] [004265af, 004268d4]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_00426420()
// Cross-references:
//   core_bugs.cpp_FUN_00425cc0 (00425cc0) at 00425da0 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 0042700a [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004278d0 (004278d0) at 0042797f [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00616e17 = 12
//   double DOUBLE_00616e1b = 0.5
//   double DOUBLE_00616e23 = 1.60185815079703E-314
//   double DOUBLE_00616e2b = 0.400000000000000
//   double DOUBLE_00616e33 = 3.14159265350000
//   double DOUBLE_00616e3b = 4
//   undefined4 DAT_0065b5c8
//   undefined4 DAT_0065b5d0
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_bugs.cpp_FUN_00425b70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_00426420(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4
core_bugs_cpp_FUN_00426420
          (undefined4 param_1,undefined4 param_2,float unaff_EBX,undefined4 param_4,
          undefined4 param_5,int *param_6,float param_7,float *param_8)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_ffffff84;
  float fVar4;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  CVector3f local_58;
  float local_4c;
  float local_44;
  CVector3f local_40 [3];
  float local_18;
  float local_14;
  
  if (*param_6 != 0) {
    return 0;
  }
  pfVar1 = (float *)(param_6 + 8);
  local_68 = *pfVar1 - (float)param_6[2];
  local_64 = (float)param_6[9] - (float)param_6[3];
  local_60 = (float)param_6[10] - (float)param_6[4];
  local_44 = SQRT(local_60 * local_60 + local_68 * local_68 + local_64 * local_64);
  if (local_44 < _DAT_0065b5c8) {
    fVar2 = (float)core_bugs_cpp_FUN_00425b70();
    param_6[3] = (int)fVar2;
    if (param_8 == (float *)0x0) {
      local_40[0].y = _DAT_0065b5c8 * FLOAT_00616e17 * (float)DOUBLE_00616e1b;
      local_14 = _DAT_0065b5c8 * DOUBLE_00616e23._0_4_ * (float)DOUBLE_00616e1b;
      fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(local_14,local_40[0].y);
      param_6[8] = (int)fVar3;
      fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fVar2,local_40[0].z);
      param_6[10] = (int)fVar2;
      unaff_EBX = (float)core_bugs_cpp_FUN_00425b70();
      param_6[9] = (int)unaff_EBX;
      local_40[0].x = *pfVar1 - (float)param_6[2];
      local_40[0].y = (float)param_6[9] - (float)param_6[3];
      local_40[0].z = (float)param_6[10] - (float)param_6[4];
      if (&local_58 != local_40) {
        local_58.x = local_40[0].x;
        local_58.y = local_40[0].y;
        local_58.z = local_40[0].z;
      }
    }
    else {
      if (pfVar1 != param_8) {
        *pfVar1 = *param_8;
        param_6[9] = (int)param_8[1];
        param_6[10] = (int)param_8[2];
      }
      local_6c = (float)param_6[9] - (float)param_6[3];
      local_68 = (float)param_6[10] - (float)param_6[4];
      if (&local_64 != (float *)&stack0xffffff90) {
        local_64 = (float)param_6[8] - (float)param_6[2];
        local_60 = local_6c;
        local_5c = local_68;
      }
      local_40[0].z = SQRT(local_5c * local_5c + local_64 * local_64 + local_60 * local_60);
      if (local_40[0].z < _DAT_0065b5c8) {
        return 1;
      }
    }
  }
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            ((CVector3f *)&stack0xffffff90,&local_58);
  if (in_stack_ffffff84 <= 0.0) {
    return 1;
  }
  local_18 = _DAT_0065b5d0 * param_7;
  if (in_stack_ffffff84 < _DAT_0065b5d0 * param_7) {
    local_18 = in_stack_ffffff84;
  }
  local_18 = local_18 / in_stack_ffffff84;
  local_58.y = local_58.y * local_18;
  local_58.z = local_58.z * local_18;
  local_4c = local_4c * local_18;
  pfVar1 = (float *)(param_6 + 2);
  fVar2 = *pfVar1 + local_58.y;
  fVar3 = (float)param_6[3] + local_58.z;
  fVar4 = (float)param_6[4] + local_4c;
  local_18 = (float)core_bugs_cpp_FUN_00425b70();
  if (local_18 - (float)param_6[3] <= fVar2 * (float)DOUBLE_00616e2b) {
    if (pfVar1 != (float *)&stack0xffffff8c) {
      *pfVar1 = fVar3;
      param_6[3] = (int)fVar4;
      param_6[4] = (int)local_6c;
    }
    if ((float)param_6[3] < local_18) {
      param_6[3] = (int)local_18;
    }
  }
  else if (local_4c <= 0.0) {
    param_6[3] = (int)((float)param_6[3] - unaff_EBX);
    local_68 = 1.5707964;
  }
  else {
    param_6[3] = (int)((float)param_6[3] + unaff_EBX);
    local_68 = -1.5707964;
  }
  local_44 = local_68 - (float)param_6[5];
  local_40[0].x = local_64 - (float)param_6[6];
  local_40[0].y = local_60 - (float)param_6[7];
  core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40[0].x);
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(local_40[0].x);
  local_14 = fVar2 * (float)DOUBLE_00616e33 * (float)DOUBLE_00616e3b;
  local_18 = -local_14;
  if (unaff_EBX < local_18) {
    unaff_EBX = local_18;
  }
  if (local_14 < unaff_EBX) {
    unaff_EBX = local_14;
  }
  local_14 = -local_14;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)param_6[6] + unaff_EBX);
  param_6[7] = 0;
  param_6[6] = (int)fVar2;
  fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)param_6[5] + unaff_EBX);
  param_6[5] = (int)fVar2;
  return 0;
}


// Assembly code:
// 00426420: PUSH EBX
//   Label: core_bugs.cpp_FUN_00426420
// 00426421: PUSH ESI
// 00426422: PUSH EDI
// 00426423: PUSH EBP
// 00426424: MOV EBP,ESP
// 00426426: SUB ESP,0x80
// 0042642c: AND ESP,0xfffffff8
// 0042642f: MOV EBX,dword ptr [EBP + 0x18]
// 00426432: CMP dword ptr [EBX],0x0
// 00426435: JNZ 0x004267e0
//   XREF to: 004267e0 (CONDITIONAL_JUMP)
// 0042643b: LEA ESI,[EBX + 0x20]
// 0042643e: LEA EDI,[EBX + 0x8]
// 00426441: FLD float ptr [ESI]
// 00426443: FSUB float ptr [EDI]
// 00426445: FSTP float ptr [ESP + 0x28]
// 00426449: FLD float ptr [ESI + 0x4]
// 0042644c: FSUB float ptr [EDI + 0x4]
// 0042644f: FST float ptr [ESP + 0x2c]
// 00426453: FMUL float ptr [ESP + 0x2c]
// 00426457: FLD float ptr [ESP + 0x28]
// 0042645b: FMUL ST0
// 0042645d: FLD float ptr [ESI + 0x8]
// 00426460: FSUB float ptr [EDI + 0x8]
// 00426463: FXCH
// 00426465: FADDP ST2,ST0
// 00426467: FST float ptr [ESP + 0x30]
// 0042646b: FMUL float ptr [ESP + 0x30]
// 0042646f: FADDP
// 00426471: FSQRT
// 00426473: FSTP float ptr [ESP + 0x4c]
// 00426477: MOV EAX,dword ptr [ESP + 0x4c]
// 0042647b: FLD float ptr [ESP + 0x4c]
// 0042647f: MOV dword ptr [ESP],EAX
// 00426482: FCOMP float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00426488: FNSTSW AX
// 0042648a: SAHF
// 0042648b: JNC 0x004265af
//   XREF to: 004265af (CONDITIONAL_JUMP)
// 00426491: PUSH dword ptr [EBX + 0x10]
// 00426494: MOV ECX,dword ptr [EBP + 0x14]
// 00426497: PUSH dword ptr [EBX + 0x8]
// 0042649a: PUSH ECX
// 0042649b: CALL core_bugs.cpp_FUN_00425b70
//   XREF to: 00425b70 (UNCONDITIONAL_CALL)
// 004264a0: MOV dword ptr [ESP + 0x88],EAX
// 004264a7: FLD float ptr [ESP + 0x88]
// 004264ae: ADD ESP,0xc
// 004264b1: MOV EAX,dword ptr [EBP + 0x20]
// 004264b4: FSTP float ptr [EBX + 0xc]
// 004264b7: TEST EAX,EAX
// 004264b9: JNZ 0x004267e9
//   XREF to: 004267e9 (CONDITIONAL_JUMP)
// 004264bf: FLD float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 004264c5: FLD ST0
// 004264c7: FMUL float ptr [0x00616e17]
//   XREF to: 00616e17 (READ)
// 004264cd: FXCH
// 004264cf: FMUL float ptr [0x00616e23]
//   XREF to: 00616e23 (READ)
// 004264d5: FXCH
// 004264d7: FLD double ptr [0x00616e1b]
//   XREF to: 00616e1b (READ)
// 004264dd: FXCH
// 004264df: FMUL ST1
// 004264e1: FXCH ST2
// 004264e3: FMULP
// 004264e5: FXCH
// 004264e7: FSTP float ptr [ESP + 0x50]
// 004264eb: PUSH dword ptr [ESP + 0x50]
// 004264ef: FSTP float ptr [ESP + 0x7c]
// 004264f3: PUSH dword ptr [ESP + 0x7c]
// 004264f7: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004265af: LEA EAX,[ESP + 0x28]
//   Label: LAB_004265af
// 004265b3: PUSH EAX
// 004265b4: LEA EAX,[ESP + 0x14]
// 004265b8: PUSH EAX
// 004265b9: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004265be: ADD ESP,0x8
// 004265c1: FLD float ptr [ESP]
// 004265c4: FLDZ
// 004265c6: FCOMPP
// 004265c8: FNSTSW AX
// 004265ca: SAHF
// 004265cb: JNC 0x00426879
//   XREF to: 00426879 (CONDITIONAL_JUMP)
// 004265d1: FLD float ptr [0x0065b5d0]
//   XREF to: 0065b5d0 (READ)
// 004265d7: FMUL float ptr [EBP + 0x1c]
// 004265da: FST float ptr [ESP + 0x74]
// 004265de: FCOMP float ptr [ESP]
// 004265e1: FNSTSW AX
// 004265e3: SAHF
// 004265e4: JBE 0x004265ed
//   XREF to: 004265ed (CONDITIONAL_JUMP)
// 004265e6: MOV EAX,dword ptr [ESP]
// 004265e9: MOV dword ptr [ESP + 0x74],EAX
// 004265ed: FLD float ptr [ESP + 0x74]
//   Label: LAB_004265ed
// 004265f1: FDIV float ptr [ESP]
// 004265f4: FLD float ptr [ESP + 0x28]
// 004265f8: FXCH
// 004265fa: FSTP float ptr [ESP + 0x64]
// 004265fe: FMUL float ptr [ESP + 0x64]
// 00426602: FLD float ptr [ESP + 0x2c]
// 00426606: FMUL float ptr [ESP + 0x64]
// 0042660a: FLD float ptr [ESP + 0x30]
// 0042660e: FMUL float ptr [ESP + 0x64]
// 00426612: LEA ESI,[EBX + 0x8]
// 00426615: FXCH ST2
// 00426617: FSTP float ptr [ESP + 0x28]
// 0042661b: FSTP float ptr [ESP + 0x2c]
// 0042661f: FSTP float ptr [ESP + 0x30]
// 00426623: FLD float ptr [ESI]
// 00426625: FADD float ptr [ESP + 0x28]
// 00426629: FSTP float ptr [ESP + 0x4]
// 0042662d: FLD float ptr [ESI + 0x4]
// 00426630: FADD float ptr [ESP + 0x2c]
// 00426634: FSTP float ptr [ESP + 0x8]
// 00426638: FLD float ptr [ESI + 0x8]
// 0042663b: FADD float ptr [ESP + 0x30]
// 0042663f: FSTP float ptr [ESP + 0xc]
// 00426643: PUSH dword ptr [ESP + 0xc]
// 00426647: MOV EDI,dword ptr [EBP + 0x14]
// 0042664a: PUSH dword ptr [ESP + 0x8]
// 0042664e: PUSH EDI
// 0042664f: CALL core_bugs.cpp_FUN_00425b70
//   XREF to: 00425b70 (UNCONDITIONAL_CALL)
// 00426654: MOV dword ptr [ESP + 0x88],EAX
// 0042665b: FLD float ptr [ESP + 0x88]
// 00426662: ADD ESP,0xc
// 00426665: FST float ptr [ESP + 0x60]
// 00426669: FSUB float ptr [EBX + 0xc]
// 0042666c: FLD float ptr [ESP]
// 0042666f: FMUL double ptr [0x00616e2b]
//   XREF to: 00616e2b (READ)
// 00426675: FCOMPP
// 00426677: FNSTSW AX
// 00426679: SAHF
// 0042667a: JNC 0x0042689d
//   XREF to: 0042689d (CONDITIONAL_JUMP)
// 00426680: FLD float ptr [ESP + 0x2c]
// 00426684: FLDZ
// 00426686: FCOMPP
// 00426688: FNSTSW AX
// 0042668a: SAHF
// 0042668b: JNC 0x00426885
//   XREF to: 00426885 (CONDITIONAL_JUMP)
// 00426691: FLD float ptr [EBX + 0xc]
// 00426694: FADD float ptr [ESP + 0x74]
// 00426698: MOV EDX,0xbfc90fdb
// 0042669d: FSTP float ptr [EBX + 0xc]
// 004266a0: MOV dword ptr [ESP + 0x10],EDX
// 004266a4: LEA EAX,[EBX + 0x14]
//   Label: LAB_004266a4
// 004266a7: FLD float ptr [ESP + 0x10]
// 004266ab: FSUB float ptr [EAX]
// 004266ad: FLD float ptr [ESP + 0x14]
// 004266b1: FXCH
// 004266b3: FSTP float ptr [ESP + 0x34]
// 004266b7: FSUB float ptr [EAX + 0x4]
// 004266ba: FLD float ptr [ESP + 0x18]
// 004266be: FXCH
// 004266c0: FSTP float ptr [ESP + 0x38]
// 004266c4: FSUB float ptr [EAX + 0x8]
// 004266c7: PUSH dword ptr [ESP + 0x38]
// 004266cb: FSTP float ptr [ESP + 0x40]
// 004266cf: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004266d4: MOV dword ptr [ESP + 0x80],EAX
// 004266db: FLD float ptr [ESP + 0x80]
// 004266e2: ADD ESP,0x4
// 004266e5: PUSH dword ptr [ESP + 0x34]
// 004266e9: FSTP float ptr [ESP + 0x70]
// 004266ed: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004266f2: MOV dword ptr [ESP + 0x80],EAX
// 004266f9: FLD float ptr [ESP + 0x80]
// 00426700: ADD ESP,0x4
// 00426703: FLD float ptr [EBP + 0x1c]
// 00426706: FMUL double ptr [0x00616e33]
//   XREF to: 00616e33 (READ)
// 0042670c: FMUL double ptr [0x00616e3b]
//   XREF to: 00616e3b (READ)
// 00426712: FLD float ptr [ESP + 0x6c]
// 00426716: FXCH ST2
// 00426718: FSTP float ptr [ESP + 0x68]
// 0042671c: FST float ptr [ESP + 0x70]
// 00426720: FCHS
// 00426722: FSTP float ptr [ESP + 0x58]
// 00426726: FCOMP float ptr [ESP + 0x58]
// 0042672a: FNSTSW AX
// 0042672c: SAHF
// 0042672d: JNC 0x00426737
//   XREF to: 00426737 (CONDITIONAL_JUMP)
// 0042672f: MOV EAX,dword ptr [ESP + 0x58]
// 00426733: MOV dword ptr [ESP + 0x6c],EAX
// 00426737: FLD float ptr [ESP + 0x6c]
//   Label: LAB_00426737
// 0042673b: FCOMP float ptr [ESP + 0x70]
// 0042673f: FNSTSW AX
// 00426741: SAHF
// 00426742: JBE 0x0042674c
//   XREF to: 0042674c (CONDITIONAL_JUMP)
// 00426744: MOV EAX,dword ptr [ESP + 0x70]
// 00426748: MOV dword ptr [ESP + 0x6c],EAX
// 0042674c: FLD float ptr [ESP + 0x68]
//   Label: LAB_0042674c
// 00426750: FLD float ptr [ESP + 0x70]
// 00426754: FCHS
// 00426756: FSTP float ptr [ESP + 0x5c]
// 0042675a: FCOMP float ptr [ESP + 0x5c]
// 0042675e: FNSTSW AX
// 00426760: SAHF
// 00426761: JNC 0x0042676b
//   XREF to: 0042676b (CONDITIONAL_JUMP)
// 00426763: MOV EAX,dword ptr [ESP + 0x5c]
// 00426767: MOV dword ptr [ESP + 0x68],EAX
// 0042676b: FLD float ptr [ESP + 0x68]
//   Label: LAB_0042676b
// 0042676f: FCOMP float ptr [ESP + 0x70]
// 00426773: FNSTSW AX
// 00426775: SAHF
// 00426776: JBE 0x00426780
//   XREF to: 00426780 (CONDITIONAL_JUMP)
// 00426778: MOV EAX,dword ptr [ESP + 0x70]
// 0042677c: MOV dword ptr [ESP + 0x68],EAX
// 00426780: FLD float ptr [EBX + 0x18]
//   Label: LAB_00426780
// 00426783: FADD float ptr [ESP + 0x6c]
// 00426787: SUB ESP,0x4
// 0042678a: FSTP float ptr [ESP]
// 0042678d: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00426792: MOV dword ptr [ESP + 0x80],EAX
// 00426799: FLD float ptr [EBX + 0x14]
// 0042679c: FLD float ptr [ESP + 0x80]
// 004267a3: ADD ESP,0x4
// 004267a6: MOV dword ptr [EBX + 0x1c],0x0
// 004267ad: FXCH
// 004267af: FADD float ptr [ESP + 0x68]
// 004267b3: SUB ESP,0x4
// 004267b6: FXCH
// 004267b8: FSTP float ptr [EBX + 0x18]
// 004267bb: FSTP float ptr [ESP]
// 004267be: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004267c3: MOV dword ptr [ESP + 0x80],EAX
// 004267ca: FLD float ptr [ESP + 0x80]
// 004267d1: XOR EAX,EAX
// 004267d3: FSTP float ptr [EBX + 0x14]
// 004267d6: ADD ESP,0x4
// 004267d9: MOV ESP,EBP
// 004267db: POP EBP
// 004267dc: POP EDI
// 004267dd: POP ESI
// 004267de: POP EBX
// 004267df: RET
// 004267e0: XOR EAX,EAX
//   Label: LAB_004267e0
// 004267e2: MOV ESP,EBP
// 004267e4: POP EBP
// 004267e5: POP EDI
// 004267e6: POP ESI
// 004267e7: POP EBX
// 004267e8: RET
// 004267e9: CMP ESI,EAX
//   Label: LAB_004267e9
// 004267eb: JZ 0x004267fd
//   XREF to: 004267fd (CONDITIONAL_JUMP)
// 004267ed: MOV EDX,dword ptr [EAX]
// 004267ef: MOV dword ptr [ESI],EDX
// 004267f1: MOV EDX,dword ptr [EAX + 0x4]
// 004267f4: MOV dword ptr [ESI + 0x4],EDX
// 004267f7: MOV EDX,dword ptr [EAX + 0x8]
// 004267fa: MOV dword ptr [ESI + 0x8],EDX
// 004267fd: LEA EAX,[EBX + 0x20]
//   Label: LAB_004267fd
// 00426800: LEA ESI,[EBX + 0x8]
// 00426803: FLD float ptr [EAX]
// 00426805: FSUB float ptr [ESI]
// 00426807: FSTP float ptr [ESP + 0x1c]
// 0042680b: FLD float ptr [EAX + 0x4]
// 0042680e: FSUB float ptr [ESI + 0x4]
// 00426811: FSTP float ptr [ESP + 0x20]
// 00426815: FLD float ptr [EAX + 0x8]
// 00426818: LEA EAX,[ESP + 0x1c]
// 0042681c: FSUB float ptr [ESI + 0x8]
// 0042681f: LEA ESI,[ESP + 0x28]
// 00426823: FSTP float ptr [ESP + 0x24]
// 00426827: CMP ESI,EAX
// 00426829: JZ 0x00426843
//   XREF to: 00426843 (CONDITIONAL_JUMP)
// 0042682b: MOV EAX,dword ptr [ESP + 0x1c]
// 0042682f: MOV dword ptr [ESP + 0x28],EAX
// 00426833: MOV EAX,dword ptr [ESP + 0x20]
// 00426837: MOV dword ptr [ESP + 0x2c],EAX
// 0042683b: MOV EAX,dword ptr [ESP + 0x24]
// 0042683f: MOV dword ptr [ESP + 0x30],EAX
// 00426843: FLD float ptr [ESP + 0x2c]
//   Label: LAB_00426843
// 00426847: FMUL ST0
// 00426849: FLD float ptr [ESP + 0x28]
// 0042684d: FMUL ST0
// 0042684f: FADDP
// 00426851: FLD float ptr [ESP + 0x30]
// 00426855: FMUL ST0
// 00426857: FADDP
// 00426859: FSQRT
// 0042685b: FSTP float ptr [ESP + 0x54]
// 0042685f: MOV EAX,dword ptr [ESP + 0x54]
// 00426863: FLD float ptr [ESP + 0x54]
// 00426867: MOV dword ptr [ESP],EAX
// 0042686a: FCOMP float ptr [0x0065b5c8]
//   XREF to: 0065b5c8 (READ)
// 00426870: FNSTSW AX
// 00426872: SAHF
// 00426873: JNC 0x004265af
//   XREF to: 004265af (CONDITIONAL_JUMP)
// 00426879: MOV EAX,0x1
//   Label: LAB_00426879
// 0042687e: MOV ESP,EBP
// 00426880: POP EBP
// 00426881: POP EDI
// 00426882: POP ESI
// 00426883: POP EBX
// 00426884: RET
// 00426885: FLD float ptr [EBX + 0xc]
//   Label: LAB_00426885
// 00426888: FSUB float ptr [ESP + 0x74]
// 0042688c: MOV EAX,0x3fc90fdb
// 00426891: FSTP float ptr [EBX + 0xc]
// 00426894: MOV dword ptr [ESP + 0x10],EAX
// 00426898: JMP 0x004266a4
//   XREF to: 004266a4 (UNCONDITIONAL_JUMP)
// 0042689d: LEA EAX,[ESP + 0x4]
//   Label: LAB_0042689d
// 004268a1: CMP ESI,EAX
// 004268a3: JZ 0x004268b9
//   XREF to: 004268b9 (CONDITIONAL_JUMP)
// 004268a5: MOV EAX,dword ptr [ESP + 0x4]
// 004268a9: MOV dword ptr [ESI],EAX
// 004268ab: MOV EAX,dword ptr [ESP + 0x8]
// 004268af: MOV dword ptr [ESI + 0x4],EAX
// 004268b2: MOV EAX,dword ptr [ESP + 0xc]
// 004268b6: MOV dword ptr [ESI + 0x8],EAX
// 004268b9: FLD float ptr [ESP + 0x60]
//   Label: LAB_004268b9
// 004268bd: FCOMP float ptr [EBX + 0xc]
// 004268c0: FNSTSW AX
// 004268c2: SAHF
// 004268c3: JBE 0x004266a4
//   XREF to: 004266a4 (CONDITIONAL_JUMP)
// 004268c9: MOV EAX,dword ptr [ESP + 0x60]
// 004268cd: MOV dword ptr [EBX + 0xc],EAX
// 004268d0: JMP 0x004266a4
//   XREF to: 004266a4 (UNCONDITIONAL_JUMP)
