// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out)
// Cross-references:
//   core_bugs.cpp_FUN_004257f0 (004257f0) at 00425b37 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005716f7 [UNCONDITIONAL_CALL]
// Globals:
//   float g_GroundCheckOffsetAbove = 2
//   float g_GroundCheckOffsetBelow = -10
//   CVector3f g_TempNormal0
//   undefined4 g_TempNormal0.y
//   undefined4 g_TempNormal0.z
//   CVector3f g_TempNormal1
//   undefined4 g_TempNormal1.y
//   undefined4 g_TempNormal1.z
//   CVector3f g_TempNormal2
//   undefined4 g_TempNormal2.y
//   undefined4 g_TempNormal2.z
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
          (CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float *pfVar1;
  CDemonCube *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  CVector3f local_50;
  float local_3c;
  undefined1 local_38 [8];
  float local_30;
  CVector3f local_2c;
  float local_20;
  int local_1c;
  float *local_18;
  int iStack_14;
  
  local_18 = &pos->y;
  pfVar1 = &pos->z;
  fVar9 = *pfVar1;
  local_50.x = pos->x;
  local_50.z = *pfVar1;
  local_50.y = *local_18 + g_GroundCheckOffsetBelow;
  fVar2 = ((float10)pos->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x;
  fVar3 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar4 = ((float10)fVar9 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  fVar5 = ((float10)(*local_18 + g_GroundCheckOffsetAbove) - (float10)(this_ptr->bbox_min).y) *
          fVar3;
  fVar3 = ((float10)local_50.y - (float10)(this_ptr->bbox_min).y) * fVar3;
  fVar6 = (float10)local_50.x - (float10)pos->x;
  fVar7 = (float10)local_50.z;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pfVar1,local_50.z));
  local_1c = (int)ROUND(fVar2);
  fVar7 = fVar7 - (float10)local_50.x;
  fVar2 = (float10)local_50.z - (float10)fVar9;
  dVar8 = crt_math_c_round_FUN_005fe6b0(dVar8);
  local_1c = (int)ROUND(fVar4);
  local_30 = (float)fVar6;
  local_2c.x = (float)fVar2;
  dVar8 = crt_math_c_round_FUN_005fe6b0(dVar8);
  crt_math_c_round_FUN_005fe6b0(dVar8);
  local_1c = (int)ROUND(fVar5);
  local_20 = (float)fVar7;
  while( true ) {
    if (local_1c < (int)ROUND(fVar3)) {
      if (hit_flag != (int *)0x0) {
        *hit_flag = 1;
      }
      if (normal_out != (CVector3f *)0x0) {
        normal_out->y = 1.0;
        normal_out->z = 0.0;
        normal_out->x = 0.0;
      }
      g_TempNormal2.y = g_ZeroVector.y;
      g_TempNormal2.z = g_ZeroVector.z;
      g_TempNormal2.x = g_ZeroVector.x;
      g_TempNormal1.y = g_ZeroVector.y;
      g_TempNormal1.z = g_ZeroVector.z;
      g_TempNormal1.x = g_ZeroVector.x;
      g_TempNormal0.y = g_ZeroVector.y;
      g_TempNormal0.z = g_ZeroVector.z;
      g_TempNormal0.x = g_ZeroVector.x;
      return local_3c;
    }
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,unaff_EBP,local_1c,iStack_14);
    if ((this_ptr_00 != (CDemonCube *)0x0) &&
       (local_50.x = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,&local_50,&local_2c,(CVector3f *)local_38,
                                (uint *)hit_flag), local_50.x <= 1.0)) break;
    local_1c = local_1c + -1;
  }
  if ((normal_out != (CVector3f *)0x0) && (normal_out != (CVector3f *)(local_38 + 4))) {
    normal_out->x = (float)local_38._4_4_;
    normal_out->y = local_30;
    normal_out->z = local_2c.x;
  }
  return local_50.x * local_2c.z + local_50.z;
}


// Assembly code:
// 004966f0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// 004966f1: PUSH ESI
// 004966f2: PUSH EDI
// 004966f3: PUSH EBP
// 004966f4: MOV EBP,ESP
// 004966f6: SUB ESP,0x4c
// 004966f9: AND ESP,0xfffffff8
// 004966fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004966ff: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00496702: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00496705: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00496708: MOV EAX,dword ptr [ECX]
// 0049670a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0049670e: LEA EAX,[ECX + 0x4]
// 00496711: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00496715: MOV EAX,dword ptr [EAX]
// 00496717: LEA EDX,[ECX + 0x8]
// 0049671a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0049671e: MOV EAX,dword ptr [EDX]
// 00496720: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00496724: MOV EAX,dword ptr [ECX]
// 00496726: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049672a: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 0049672e: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 00496732: MOV EAX,dword ptr [EAX]
// 00496734: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00496738: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049673c: FADD float ptr [0x00622b6a]
//   XREF to: 00622b6a (READ)
// 00496742: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00496746: MOV EAX,dword ptr [EDX]
// 00496748: FXCH
// 0049674a: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (WRITE)
// 0049674e: FADD float ptr [0x00622b6e]
//   XREF to: 00622b6e (READ)
// 00496754: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00496758: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (WRITE)
// 0049675c: FSUB float ptr [EBX + 0x10]
// 0049675f: FDIV float ptr [EBX + 0x28]
// 00496762: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00496766: FSUB float ptr [EBX + 0x14]
// 00496769: FLD1
// 0049676b: FDIV float ptr [EBX + 0x2c]
// 0049676e: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 00496772: FSUB float ptr [EBX + 0x18]
// 00496775: FDIV float ptr [EBX + 0x30]
// 00496778: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 0049677c: FSUB float ptr [EBX + 0x14]
// 0049677f: FXCH ST3
// 00496781: FMUL ST2
// 00496783: FXCH ST3
// 00496785: FMULP ST2
// 00496787: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x50] (READ)
// 0049678b: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x5c] (READ)
// 0049678f: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 00496793: FXCH ST5
// 00496795: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049679a: FISTP dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 0049679e: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 004967a2: FXCH ST5
// 004967a4: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x54] (READ)
// 004967a8: FXCH ST5
// 004967aa: FSUB float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 004967ae: FXCH ST2
// 004967b0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004967b5: FISTP dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x24] (WRITE)
// 004967b9: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 004967bd: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 004967c1: FXCH
// 004967c3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004967c8: FXCH
// 004967ca: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004967cf: FXCH
// 004967d1: FISTP dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (WRITE)
// 004967d5: FISTP dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (WRITE)
// 004967d9: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 004967dd: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 004967e1: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 004967e5: CMP EAX,EDX
// 004967e7: JL 0x00496885
//   XREF to: 00496885 (CONDITIONAL_JUMP)
// 004967ed: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_004967ed
//   XREF to: Stack[-0x24] (READ)
// 004967f1: PUSH ECX
// 004967f2: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x2c] (READ)
// 004967f6: PUSH EAX
// 004967f7: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 004967fb: PUSH EDX
// 004967fc: PUSH EBX
// 004967fd: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00496802: ADD ESP,0x10
// 00496805: TEST EAX,EAX
// 00496807: JZ 0x00496870
//   XREF to: 00496870 (CONDITIONAL_JUMP)
// 00496809: PUSH ESI
// 0049680a: LEA EDX,[ESP + 0x20]
//   XREF to: Stack[-0x44] (DATA)
// 0049680e: PUSH EDX
// 0049680f: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 00496813: PUSH EDX
// 00496814: LEA EDX,[ESP + 0x10]
//   XREF to: Stack[-0x5c] (DATA)
// 00496818: PUSH EDX
// 00496819: PUSH EAX
// 0049681a: CALL core_dcube.cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
//   XREF to: 004578f0 (UNCONDITIONAL_CALL)
// 0049681f: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00496823: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x18] (READ)
// 00496827: ADD ESP,0x14
// 0049682a: FST float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 0049682d: FLD1
// 0049682f: FCOMPP
// 00496831: FNSTSW AX
// 00496833: SAHF
// 00496834: JC 0x00496870
//   XREF to: 00496870 (CONDITIONAL_JUMP)
// 00496836: TEST EDI,EDI
// 00496838: JZ 0x00496856
//   XREF to: 00496856 (CONDITIONAL_JUMP)
// 0049683a: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x44] (DATA)
// 0049683e: CMP EDI,EAX
// 00496840: JZ 0x00496856
//   XREF to: 00496856 (CONDITIONAL_JUMP)
// 00496842: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (DATA)
// 00496846: MOV dword ptr [EDI],EAX
// 00496848: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 0049684c: MOV dword ptr [EDI + 0x4],EAX
// 0049684f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00496853: MOV dword ptr [EDI + 0x8],EAX
// 00496856: FLD float ptr [ESP]
//   Label: LAB_00496856
//   XREF to: Stack[-0x60] (DATA)
// 00496859: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 0049685d: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x58] (READ)
// 00496861: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (WRITE)
// 00496865: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 00496869: MOV ESP,EBP
// 0049686b: POP EBP
// 0049686c: POP EDI
// 0049686d: POP ESI
// 0049686e: POP EBX
// 0049686f: RET
// 00496870: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_00496870
//   XREF to: Stack[-0x2c] (READ)
// 00496874: DEC ECX
// 00496875: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 00496879: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049687d: CMP ECX,EDX
// 0049687f: JGE 0x004967ed
//   XREF to: 004967ed (CONDITIONAL_JUMP)
// 00496885: TEST ESI,ESI
//   Label: LAB_00496885
// 00496887: JZ 0x0049688f
//   XREF to: 0049688f (CONDITIONAL_JUMP)
// 00496889: MOV dword ptr [ESI],0x1
// 0049688f: TEST EDI,EDI
//   Label: LAB_0049688f
// 00496891: JZ 0x004968a7
//   XREF to: 004968a7 (CONDITIONAL_JUMP)
// 00496893: MOV dword ptr [EDI + 0x4],0x3f800000
// 0049689a: MOV dword ptr [EDI + 0x8],0x0
// 004968a1: MOV dword ptr [EDI],0x0
// 004968a7: MOV EAX,0x15c4818
//   Label: LAB_004968a7
//   XREF to: 015c4818 (DATA)
// 004968ac: CMP EAX,0x3f87558
//   XREF to: 03f87558 (DATA)
// 004968b1: JZ 0x004968d5
//   XREF to: 004968d5 (CONDITIONAL_JUMP)
// 004968b3: FLD float ptr [0x03f87558]
//   XREF to: 03f87558 (READ)
// 004968b9: FLD float ptr [0x03f87560]
//   XREF to: 03f87560 (READ)
// 004968bf: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 004968c4: MOV [0x015c481c],EAX
//   XREF to: 015c481c (WRITE)
// 004968c9: FSTP float ptr [0x015c4820]
//   XREF to: 015c4820 (WRITE)
// 004968cf: FSTP float ptr [0x015c4818]
//   XREF to: 015c4818 (WRITE)
// 004968d5: MOV EAX,0x15c480c
//   Label: LAB_004968d5
//   XREF to: 015c480c (DATA)
// 004968da: CMP EAX,0x15c4818
//   XREF to: 015c4818 (DATA)
// 004968df: JZ 0x00496903
//   XREF to: 00496903 (CONDITIONAL_JUMP)
// 004968e1: FLD float ptr [0x015c4818]
//   XREF to: 015c4818 (READ)
// 004968e7: FLD float ptr [0x015c4820]
//   XREF to: 015c4820 (READ)
// 004968ed: MOV EAX,[0x015c481c]
//   XREF to: 015c481c (READ)
// 004968f2: MOV [0x015c4810],EAX
//   XREF to: 015c4810 (WRITE)
// 004968f7: FSTP float ptr [0x015c4814]
//   XREF to: 015c4814 (WRITE)
// 004968fd: FSTP float ptr [0x015c480c]
//   XREF to: 015c480c (WRITE)
// 00496903: MOV EAX,0x15c4800
//   Label: LAB_00496903
//   XREF to: 015c4800 (DATA)
// 00496908: CMP EAX,0x15c480c
//   XREF to: 015c480c (DATA)
// 0049690d: JZ 0x00496931
//   XREF to: 00496931 (CONDITIONAL_JUMP)
// 0049690f: FLD float ptr [0x015c480c]
//   XREF to: 015c480c (READ)
// 00496915: FLD float ptr [0x015c4814]
//   XREF to: 015c4814 (READ)
// 0049691b: MOV EAX,[0x015c4810]
//   XREF to: 015c4810 (READ)
// 00496920: MOV [0x015c4804],EAX
//   XREF to: 015c4804 (WRITE)
// 00496925: FSTP float ptr [0x015c4808]
//   XREF to: 015c4808 (WRITE)
// 0049692b: FSTP float ptr [0x015c4800]
//   XREF to: 015c4800 (WRITE)
// 00496931: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00496931
//   XREF to: Stack[-0x4c] (READ)
// 00496935: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00496939: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 0049693d: MOV ESP,EBP
// 0049693f: POP EBP
// 00496940: POP EDI
// 00496941: POP ESI
// 00496942: POP EBX
// 00496943: RET
