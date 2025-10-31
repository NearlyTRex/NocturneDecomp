// Name: core_path.cpp_CPathMap_getDirection_FUN_005465b0
// Address: 005465b0
// Address Range: [[005465b0, 00546a50]]
// Convention: __cdecl
// Signature: float core_path.cpp_CPathMap_getDirection_FUN_005465b0(CPathMap * this_ptr, int current_direction, int next_direction, int prev_direction, CVector3f * dest_position)
// Cross-references:
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 005478a7 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00546554 = 00546654
//   void* switchdataD_00546564 = 00546685
//   void* switchdataD_00546574 = 005466f8
//   void* switchdataD_00546594 = 00546918
//   TerminatedCString s_core_path_cpp_0063e8c6
//   TerminatedCString s_CPathMap_getDirection_Sh_0063e8d7
//   float g_PathDirectionScale100 = 100
//   float g_PathRotationScaleFactor = 0.01000000
//   float g_PathNegativeOne = -1
//   double g_PathAngleNeg3PiOver4 = -2.35619449012500
//   double g_PathAngle3PiOver4 = 2.35619449012500
//   double g_PathAngleNegPiOver4 = -0.785398163375000
//   double g_PathAnglePiOver4 = 0.785398163375000
//   double g_PathAngleNegPiOver2 = -1.57079632675000
//   double g_PathAnglePiOver2 = 1.57079632675000
//   double g_PathAnglePi = 3.14159265350000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

#include "nocturne.h"

float __cdecl
core_path_cpp_CPathMap_getDirection_FUN_005465b0
          (CPathMap *this_ptr,int current_direction,int next_direction,int prev_direction,
          CVector3f *dest_position)

{
  CVector3f *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CVector3f local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  CVector3f CStack_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  CVector3f local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  CVector3f local_68;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  
  local_98.x = (this_ptr->current_position).x - dest_position->x;
  local_98.y = (this_ptr->current_position).y - dest_position->y;
  local_98.z = (this_ptr->current_position).z - dest_position->z;
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&local_68,&local_98);
  local_a0 = pCVar1->x / g_PathDirectionScale100;
  local_98.x = g_PathRotationScaleFactor * pCVar1->z;
  iVar2 = 1;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  local_9c = -(pCVar1->y * g_PathRotationScaleFactor);
  switch(current_direction) {
  case 1:
    local_44 = 1.0;
    local_3c = 0;
    local_40 = 0.0;
    local_38 = 0x3f800000;
    break;
  case 2:
    local_44 = -1.0;
    local_84 = 0;
    local_88 = 0;
    local_80 = 0xbf800000;
    break;
  case 3:
    local_4c = 1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0054667e_caseD_1;
    case 2:
      goto switchD_0054667e_caseD_2;
    case 3:
      goto switchD_0054667e_caseD_3;
    case 4:
      goto switchD_0054667e_caseD_4;
    default:
      goto switchD_0054667e_default;
    }
  case 4:
    local_cc = 0;
    local_c8 = 0;
    local_4c = -1.0;
    local_d8.z = -1.0;
    switch(next_direction) {
    case 1:
      goto switchD_0054667e_caseD_1;
    case 2:
      goto switchD_0054667e_caseD_2;
    case 3:
      goto switchD_0054667e_caseD_3;
    case 4:
      goto switchD_0054667e_caseD_4;
    }
    goto switchD_0054667e_default;
  }
  switch(next_direction) {
  case 1:
switchD_0054667e_caseD_1:
    local_70 = 0;
    local_6c = 0;
    local_44 = local_44 + 1.0;
    local_68.x = 1.0;
    goto LAB_005466ab;
  case 2:
switchD_0054667e_caseD_2:
    local_7c = 0;
    local_78 = 0;
    local_44 = local_44 + g_PathNegativeOne;
    local_74 = 0xbf800000;
LAB_005466ab:
    iVar2 = 2;
    break;
  case 3:
switchD_0054667e_caseD_3:
    iVar2 = 2;
    local_c4 = 0x3f800000;
    local_c0 = 0;
    local_4c = local_4c + 1.0;
    local_bc = 0;
    break;
  case 4:
switchD_0054667e_caseD_4:
    iVar2 = 2;
    local_28 = 0xbf800000;
    local_24 = 0;
    local_4c = local_4c + g_PathNegativeOne;
    local_20 = 0;
  }
switchD_0054667e_default:
  if ((ABS(local_4c) == 0.0) && (ABS(local_44) == 0.0)) {
    switch(current_direction) {
    case 1:
      return local_9c;
    case 2:
      return local_9c + (float)g_PathAnglePi;
    case 3:
      return local_9c + (float)g_PathAnglePiOver2;
    case 4:
      return local_9c + (float)g_PathAngleNegPiOver2;
    case 5:
      return local_9c + (float)g_PathAnglePiOver4;
    case 6:
      return local_9c + (float)g_PathAngleNegPiOver4;
    case 7:
      return local_9c + (float)g_PathAngle3PiOver4;
    case 8:
      return local_9c + (float)g_PathAngleNeg3PiOver4;
    default:
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 0x183;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CPathMap::getDirection - Should never get here either");
    }
  }
  if ((current_direction != prev_direction) && (prev_direction != next_direction))
  goto switchD_00546911_default;
  switch(prev_direction) {
  case 1:
    local_40 = local_40 + 1.0;
    goto LAB_00546935;
  case 2:
    local_a8 = 0;
    local_a4 = 0;
    local_40 = local_40 + g_PathNegativeOne;
    local_a0 = -1.0;
LAB_00546935:
    iVar2 = iVar2 + 1;
    break;
  case 3:
    iVar2 = iVar2 + 1;
    local_54 = 0x3f800000;
    local_50 = 0;
    local_48 = local_48 + 1.0;
    local_4c = 0.0;
    break;
  case 4:
    iVar2 = iVar2 + 1;
    local_30 = 0xbf800000;
    local_2c = 0;
    local_48 = local_48 + g_PathNegativeOne;
    local_28 = 0;
  }
switchD_00546911_default:
  local_18 = (float)iVar2;
  local_d8.z = 1.0 / local_18;
  local_d8.x = local_48 * local_d8.z;
  local_d8.y = local_44 * local_d8.z;
  local_d8.z = local_40 * local_d8.z;
  pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_b4,&local_d8);
  return pCVar1->y + local_98.y;
}


// Assembly code:
// 005465b0: PUSH EBX
//   Label: core_path.cpp_CPathMap_getDirection_FUN_005465b0
// 005465b1: PUSH ESI
// 005465b2: PUSH EDI
// 005465b3: PUSH EBP
// 005465b4: MOV EBP,ESP
// 005465b6: SUB ESP,0xe4
// 005465bc: AND ESP,0xfffffff8
// 005465bf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005465c2: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005465c5: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005465c8: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005465cb: FLD float ptr [EAX]
// 005465cd: FSUB float ptr [EBX]
// 005465cf: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x98] (WRITE)
// 005465d3: FLD float ptr [EAX + 0x4]
// 005465d6: FSUB float ptr [EBX + 0x4]
// 005465d9: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x94] (WRITE)
// 005465dd: FLD float ptr [EAX + 0x8]
// 005465e0: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x98] (DATA)
// 005465e4: PUSH EAX
// 005465e5: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x68] (DATA)
// 005465ec: FSUB float ptr [EBX + 0x8]
// 005465ef: PUSH EAX
// 005465f0: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x90] (WRITE)
// 005465f4: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005465f9: FLD float ptr [EAX]
// 005465fb: FDIV float ptr [0x0063e950]
//   XREF to: 0063e950 (READ)
// 00546601: ADD ESP,0x8
// 00546604: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xa4] (WRITE)
// 00546608: FLD float ptr [0x0063e954]
//   XREF to: 0063e954 (READ)
// 0054660e: FLD float ptr [EAX + 0x4]
// 00546611: FMUL ST1
// 00546613: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (WRITE)
// 00546617: FMUL float ptr [EAX + 0x8]
// 0054661a: MOV EBX,0x1
// 0054661f: XOR EDX,EDX
// 00546621: MOV AH,byte ptr [ESP + 0x5b]
//   XREF to: Stack[-0x9d] (READ)
// 00546625: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 0054662c: MOV dword ptr [ESP + 0xac],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00546633: XOR AH,0x80
// 00546636: MOV dword ptr [ESP + 0xb0],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 0054663d: MOV byte ptr [ESP + 0x5b],AH
//   XREF to: Stack[-0x9d] (WRITE)
// 00546641: LEA EAX,[ESI + -0x1]
// 00546644: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x9c] (WRITE)
// 00546648: CMP EAX,0x3
// 0054664b: JA 0x00546675
//   XREF to: 00546675 (CONDITIONAL_JUMP)
// 0054664d: JMP dword ptr [EAX*0x4 + 0x546554]
//   Label: switchD
//   XREF to: 00546654 (COMPUTED_JUMP)
//   XREF to: 00546711 (COMPUTED_JUMP)
//   XREF to: 00546727 (COMPUTED_JUMP)
//   XREF to: 00546752 (COMPUTED_JUMP)
//   XREF to: 00546554 (DATA)
// 00546654: MOV ECX,0x3f800000
//   Label: caseD_1
// 00546659: MOV dword ptr [ESP + 0xb8],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00546660: MOV dword ptr [ESP + 0xb4],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00546667: MOV dword ptr [ESP + 0xbc],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 0054666e: MOV dword ptr [ESP + 0xb0],ECX
//   Label: LAB_0054666e
//   XREF to: Stack[-0x48] (WRITE)
// 00546675: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: default
//   XREF to: Stack[0xc] (READ)
// 00546678: DEC EAX
// 00546679: CMP EAX,0x3
// 0054667c: JA 0x005466b2
//   XREF to: 005466b2 (CONDITIONAL_JUMP)
// 0054667e: JMP dword ptr [EAX*0x4 + 0x546564]
//   Label: switchD
//   XREF to: 00546685 (COMPUTED_JUMP)
//   XREF to: 0054677e (COMPUTED_JUMP)
//   XREF to: 005467a7 (COMPUTED_JUMP)
//   XREF to: 005467d0 (COMPUTED_JUMP)
//   XREF to: 00546564 (DATA)
// 00546685: FLD1
//   Label: caseD_1
// 00546687: MOV ECX,0x3f800000
// 0054668c: XOR EAX,EAX
// 0054668e: INC EBX
// 0054668f: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00546696: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0054669d: FADD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x48] (READ)
// 005466a4: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 005466ab: FSTP float ptr [ESP + 0xb0]
//   Label: LAB_005466ab
//   XREF to: Stack[-0x48] (WRITE)
// 005466b2: TEST dword ptr [ESP + 0xa8],0x7fffffff
//   Label: default
//   XREF to: Stack[-0x50] (READ)
// 005466bd: JNZ 0x00546901
//   XREF to: 00546901 (CONDITIONAL_JUMP)
// 005466c3: TEST dword ptr [ESP + 0xac],0x7fffffff
//   XREF to: Stack[-0x4c] (READ)
// 005466ce: JNZ 0x00546901
//   XREF to: 00546901 (CONDITIONAL_JUMP)
// 005466d4: TEST dword ptr [ESP + 0xb0],0x7fffffff
//   XREF to: Stack[-0x48] (READ)
// 005466df: JNZ 0x00546901
//   XREF to: 00546901 (CONDITIONAL_JUMP)
// 005466e5: LEA EAX,[ESI + -0x1]
// 005466e8: CMP EAX,0x7
// 005466eb: JA 0x005468df
//   XREF to: 005468df (CONDITIONAL_JUMP)
// 005466f1: JMP dword ptr [EAX*0x4 + 0x546574]
//   Label: switchD
//   XREF to: 005466f8 (COMPUTED_JUMP)
//   XREF to: 00546806 (COMPUTED_JUMP)
//   XREF to: 00546825 (COMPUTED_JUMP)
//   XREF to: 00546844 (COMPUTED_JUMP)
//   XREF to: 00546863 (COMPUTED_JUMP)
//   XREF to: 00546882 (COMPUTED_JUMP)
//   XREF to: 005468a1 (COMPUTED_JUMP)
//   XREF to: 005468c0 (COMPUTED_JUMP)
//   XREF to: 00546574 (DATA)
// 005466f8: MOV EAX,dword ptr [ESP + 0x58]
//   Label: caseD_1
//   XREF to: Stack[-0xa0] (READ)
// 005466fc: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00546703: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054670a: MOV ESP,EBP
// 0054670c: POP EBP
// 0054670d: POP EDI
// 0054670e: POP ESI
// 0054670f: POP EBX
// 00546710: RET
// 00546711: MOV ECX,0xbf800000
//   Label: caseD_2
// 00546716: MOV dword ptr [ESP + 0x70],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 0054671a: MOV dword ptr [ESP + 0x6c],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 0054671e: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x84] (WRITE)
// 00546722: JMP 0x0054666e
//   XREF to: 0054666e (UNCONDITIONAL_JUMP)
// 00546727: MOV EAX,0x3f800000
//   Label: caseD_3
// 0054672c: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0xf4] (WRITE)
// 00546730: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0xf0] (WRITE)
// 00546734: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0054673b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xf8] (DATA)
// 0054673e: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00546741: DEC EAX
// 00546742: CMP EAX,0x3
// 00546745: JA 0x005466b2
//   XREF to: 005466b2 (CONDITIONAL_JUMP)
// 0054674b: JMP dword ptr [EAX*0x4 + 0x546564]
//   Label: switchD
//   XREF to: 00546685 (COMPUTED_JUMP)
//   XREF to: 0054677e (COMPUTED_JUMP)
//   XREF to: 005467a7 (COMPUTED_JUMP)
//   XREF to: 005467d0 (COMPUTED_JUMP)
//   XREF to: 00546564 (DATA)
// 00546752: MOV EAX,0xbf800000
//   Label: caseD_4
// 00546757: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0xd0] (WRITE)
// 0054675b: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0xcc] (WRITE)
// 0054675f: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00546766: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 0054676a: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054676d: DEC EAX
// 0054676e: CMP EAX,0x3
// 00546771: JA 0x005466b2
//   XREF to: 005466b2 (CONDITIONAL_JUMP)
// 00546777: JMP dword ptr [EAX*0x4 + 0x546564]
//   Label: switchD
//   XREF to: 00546685 (COMPUTED_JUMP)
//   XREF to: 0054677e (COMPUTED_JUMP)
//   XREF to: 005467a7 (COMPUTED_JUMP)
//   XREF to: 005467d0 (COMPUTED_JUMP)
//   XREF to: 00546564 (DATA)
// 0054677e: FLD float ptr [ESP + 0xb0]
//   Label: caseD_2
//   XREF to: Stack[-0x48] (READ)
// 00546785: MOV ECX,0xbf800000
// 0054678a: XOR EAX,EAX
// 0054678c: INC EBX
// 0054678d: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 00546791: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00546795: FADD float ptr [0x0063e958]
//   XREF to: 0063e958 (READ)
// 0054679b: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 005467a2: JMP 0x005466ab
//   XREF to: 005466ab (UNCONDITIONAL_JUMP)
// 005467a7: FLD1
//   Label: caseD_3
// 005467a9: MOV EAX,0x3f800000
// 005467ae: INC EBX
// 005467af: XOR EDX,EDX
// 005467b1: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 005467b5: MOV dword ptr [ESP + 0x34],EDX
//   XREF to: Stack[-0xc4] (WRITE)
// 005467b9: FADD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (READ)
// 005467c0: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0xc0] (WRITE)
// 005467c4: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (WRITE)
// 005467cb: JMP 0x005466b2
//   XREF to: 005466b2 (UNCONDITIONAL_JUMP)
// 005467d0: FLD float ptr [ESP + 0xa8]
//   Label: caseD_4
//   XREF to: Stack[-0x50] (READ)
// 005467d7: MOV EAX,0xbf800000
// 005467dc: INC EBX
// 005467dd: XOR EDX,EDX
// 005467df: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005467e6: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005467ed: FADD float ptr [0x0063e958]
//   XREF to: 0063e958 (READ)
// 005467f3: MOV dword ptr [ESP + 0xd4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005467fa: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (WRITE)
// 00546801: JMP 0x005466b2
//   XREF to: 005466b2 (UNCONDITIONAL_JUMP)
// 00546806: FLD float ptr [ESP + 0x58]
//   Label: caseD_5
//   XREF to: Stack[-0xa0] (READ)
// 0054680a: FADD double ptr [0x0063e978]
//   XREF to: 0063e978 (READ)
// 00546810: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00546817: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054681e: MOV ESP,EBP
// 00546820: POP EBP
// 00546821: POP EDI
// 00546822: POP ESI
// 00546823: POP EBX
// 00546824: RET
// 00546825: FLD float ptr [ESP + 0x58]
//   Label: caseD_3
//   XREF to: Stack[-0xa0] (READ)
// 00546829: FADD double ptr [0x0063e988]
//   XREF to: 0063e988 (READ)
// 0054682f: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00546836: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054683d: MOV ESP,EBP
// 0054683f: POP EBP
// 00546840: POP EDI
// 00546841: POP ESI
// 00546842: POP EBX
// 00546843: RET
// 00546844: FLD float ptr [ESP + 0x58]
//   Label: caseD_7
//   XREF to: Stack[-0xa0] (READ)
// 00546848: FADD double ptr [0x0063e968]
//   XREF to: 0063e968 (READ)
// 0054684e: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00546855: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054685c: MOV ESP,EBP
// 0054685e: POP EBP
// 0054685f: POP EDI
// 00546860: POP ESI
// 00546861: POP EBX
// 00546862: RET
// 00546863: FLD float ptr [ESP + 0x58]
//   Label: caseD_2
//   XREF to: Stack[-0xa0] (READ)
// 00546867: FADD double ptr [0x0063e990]
//   XREF to: 0063e990 (READ)
// 0054686d: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00546874: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054687b: MOV ESP,EBP
// 0054687d: POP EBP
// 0054687e: POP EDI
// 0054687f: POP ESI
// 00546880: POP EBX
// 00546881: RET
// 00546882: FLD float ptr [ESP + 0x58]
//   Label: caseD_8
//   XREF to: Stack[-0xa0] (READ)
// 00546886: FADD double ptr [0x0063e960]
//   XREF to: 0063e960 (READ)
// 0054688c: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00546893: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 0054689a: MOV ESP,EBP
// 0054689c: POP EBP
// 0054689d: POP EDI
// 0054689e: POP ESI
// 0054689f: POP EBX
// 005468a0: RET
// 005468a1: FLD float ptr [ESP + 0x58]
//   Label: caseD_4
//   XREF to: Stack[-0xa0] (READ)
// 005468a5: FADD double ptr [0x0063e980]
//   XREF to: 0063e980 (READ)
// 005468ab: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005468b2: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005468b9: MOV ESP,EBP
// 005468bb: POP EBP
// 005468bc: POP EDI
// 005468bd: POP ESI
// 005468be: POP EBX
// 005468bf: RET
// 005468c0: FLD float ptr [ESP + 0x58]
//   Label: caseD_6
//   XREF to: Stack[-0xa0] (READ)
// 005468c4: FADD double ptr [0x0063e970]
//   XREF to: 0063e970 (READ)
// 005468ca: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005468d1: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005468d8: MOV ESP,EBP
// 005468da: POP EBP
// 005468db: POP EDI
// 005468dc: POP ESI
// 005468dd: POP EBX
// 005468de: RET
// 005468df: MOV EAX,0x63e8c6
//   Label: default
//   XREF to: 0063e8c6 (PARAM)
// 005468e4: MOV EDX,0x183
// 005468e9: PUSH 0x63e8d7
//   XREF to: 0063e8d7 (DATA)
// 005468ee: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005468f3: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005468f9: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005468fe: ADD ESP,0x4
// 00546901: CMP ESI,EDI
//   Label: LAB_00546901
// 00546903: JNZ 0x005469b5
//   XREF to: 005469b5 (CONDITIONAL_JUMP)
// 00546909: LEA EAX,[EDI + -0x1]
//   Label: LAB_00546909
// 0054690c: CMP EAX,0x3
// 0054690f: JA 0x0054693c
//   XREF to: 0054693c (CONDITIONAL_JUMP)
// 00546911: JMP dword ptr [EAX*0x4 + 0x546594]
//   Label: switchD
//   XREF to: 00546918 (COMPUTED_JUMP)
//   XREF to: 005469c3 (COMPUTED_JUMP)
//   XREF to: 005469e9 (COMPUTED_JUMP)
//   XREF to: 00546a1b (COMPUTED_JUMP)
//   XREF to: 00546594 (DATA)
// 00546918: FLD1
//   Label: caseD_1
// 0054691a: MOV EDI,0x3f800000
// 0054691f: XOR ECX,ECX
// 00546921: INC EBX
// 00546922: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 00546926: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0xe8] (WRITE)
// 0054692a: FADD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x48] (READ)
// 00546931: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0xe4] (WRITE)
// 00546935: FSTP float ptr [ESP + 0xb0]
//   Label: LAB_00546935
//   XREF to: Stack[-0x48] (WRITE)
// 0054693c: FLD1
//   Label: default
// 0054693e: MOV dword ptr [ESP + 0xe0],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00546945: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (READ)
// 0054694c: FILD dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x18] (READ)
// 00546953: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (WRITE)
// 0054695a: FXCH
// 0054695c: FDIV float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x20] (READ)
// 00546963: FXCH
// 00546965: FMUL ST1
// 00546967: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x4c] (READ)
// 0054696e: FMUL ST2
// 00546970: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0xe0] (DATA)
// 00546974: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x48] (READ)
// 0054697b: PUSH EAX
// 0054697c: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0xbc] (DATA)
// 00546980: FMULP ST3
// 00546982: PUSH EAX
// 00546983: FXCH
// 00546985: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0xe0] (WRITE)
// 00546989: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xdc] (WRITE)
// 0054698d: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0xd8] (WRITE)
// 00546991: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00546996: ADD ESP,0x8
// 00546999: FLD float ptr [EAX + 0x4]
// 0054699c: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xa0] (READ)
// 005469a0: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005469a7: MOV EAX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x1c] (READ)
// 005469ae: MOV ESP,EBP
// 005469b0: POP EBP
// 005469b1: POP EDI
// 005469b2: POP ESI
// 005469b3: POP EBX
// 005469b4: RET
// 005469b5: CMP EDI,dword ptr [EBP + 0x1c]
//   Label: LAB_005469b5
//   XREF to: Stack[0xc] (READ)
// 005469b8: JZ 0x00546909
//   XREF to: 00546909 (CONDITIONAL_JUMP)
// 005469be: JMP 0x0054693c
//   XREF to: 0054693c (UNCONDITIONAL_JUMP)
// 005469c3: FLD float ptr [ESP + 0xb0]
//   Label: caseD_2
//   XREF to: Stack[-0x48] (READ)
// 005469ca: MOV EDX,0xbf800000
// 005469cf: XOR EDI,EDI
// 005469d1: INC EBX
// 005469d2: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0xb0] (WRITE)
// 005469d6: MOV dword ptr [ESP + 0x4c],EDI
//   XREF to: Stack[-0xac] (WRITE)
// 005469da: FADD float ptr [0x0063e958]
//   XREF to: 0063e958 (READ)
// 005469e0: MOV dword ptr [ESP + 0x50],EDX
//   XREF to: Stack[-0xa8] (WRITE)
// 005469e4: JMP 0x00546935
//   XREF to: 00546935 (UNCONDITIONAL_JUMP)
// 005469e9: FLD1
//   Label: caseD_3
// 005469eb: MOV EDX,0x3f800000
// 005469f0: INC EBX
// 005469f1: XOR ECX,ECX
// 005469f3: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 005469fa: MOV dword ptr [ESP + 0xa0],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 00546a01: FADD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (READ)
// 00546a08: MOV dword ptr [ESP + 0xa4],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00546a0f: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (WRITE)
// 00546a16: JMP 0x0054693c
//   XREF to: 0054693c (UNCONDITIONAL_JUMP)
// 00546a1b: FLD float ptr [ESP + 0xa8]
//   Label: caseD_4
//   XREF to: Stack[-0x50] (READ)
// 00546a22: MOV ESI,0xbf800000
// 00546a27: INC EBX
// 00546a28: XOR EDI,EDI
// 00546a2a: MOV dword ptr [ESP + 0xc0],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00546a31: MOV dword ptr [ESP + 0xc4],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00546a38: FADD float ptr [0x0063e958]
//   XREF to: 0063e958 (READ)
// 00546a3e: MOV dword ptr [ESP + 0xc8],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00546a45: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x50] (WRITE)
// 00546a4c: JMP 0x0054693c
//   XREF to: 0054693c (UNCONDITIONAL_JUMP)
