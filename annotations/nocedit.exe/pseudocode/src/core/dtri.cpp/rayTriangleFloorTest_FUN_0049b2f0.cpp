// Name: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// Address: 0049b2f0
// Address Range: [[0049b2f0, 0049b690]]
// Convention: __cdecl
// Signature: int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 (00478740) at 004787e3 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571f20 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_rayTestQuadFloor_FUN_005715d0 (005715d0) at 0057160a [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba6a0 (005ba6a0) at 005ba6d4 [UNCONDITIONAL_CALL]
// Globals:
//   double g_MinFloorNormal = -0.340000000000000
//   double g_Epsilon = 0.0100000000000000
//   CVector3f g_FloorRayDirection
//   undefined4 g_FloorCacheHeight
//   undefined4 g_FloorCacheReserved
//   byte g_FloorCacheValid
// Function calls:
//   core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800

#include "nocturne.h"

int __cdecl
core_dtri_cpp_rayTriangleFloorTest_FUN_0049b2f0
          (CDemonTriangle *triangle,float x,float z,float *out_height)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  BADSPACEBASE *in_ESP;
  undefined8 local_7c;
  float local_74;
  float local_70;
  undefined1 local_6c [20];
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  if ((triangle->normal).y <= (float)g_MinFloorNormal) {
    fVar1 = (triangle->vertex1).x - *(float *)x;
    fVar11 = (triangle->vertex1).y;
    fVar2 = (triangle->vertex1).z - *(float *)((int)x + 8);
    local_58._0_4_ = (triangle->vertex2).x - *(float *)x;
    local_58._4_4_ = (triangle->vertex2).y;
    local_50 = (triangle->vertex2).z - *(float *)((int)x + 8);
    local_70 = (triangle->vertex3).x - *(float *)x;
    local_6c._0_4_ = (triangle->vertex3).y;
    local_6c._4_4_ = (triangle->vertex3).z - *(float *)((int)x + 8);
    local_4c._0_4_ = fVar1;
    local_4c._4_4_ = fVar11;
    local_4c._8_4_ = fVar2;
    if (fVar11 < (float)local_58._4_4_) {
      if (local_4c != local_58) {
        local_4c._0_4_ = local_58._0_4_;
        local_4c._4_4_ = local_58._4_4_;
        local_4c._8_4_ = local_50;
      }
      local_40 = fVar1;
      local_3c = fVar11;
      local_38 = fVar2;
      if ((float *)local_58 != &local_40) {
        local_58._0_4_ = fVar1;
        local_58._4_4_ = fVar11;
        local_50 = fVar2;
      }
    }
    uVar7 = local_4c._8_4_;
    uVar6 = local_4c._4_4_;
    uVar5 = local_4c._0_4_;
    fVar11 = local_50;
    uVar4 = local_58._4_4_;
    uVar3 = local_58._0_4_;
    if ((float)local_58._4_4_ < (float)local_6c._0_4_) {
      local_34 = (float)local_58._0_4_;
      local_30 = (float)local_58._4_4_;
      local_2c = local_50;
      if ((float *)local_58 != &local_70) {
        local_58._0_4_ = local_70;
        local_58._4_4_ = local_6c._0_4_;
        local_50 = (float)local_6c._4_4_;
      }
      if (&local_70 != &local_34) {
        local_70 = (float)uVar3;
        local_6c._0_4_ = uVar4;
        local_6c._4_4_ = fVar11;
      }
    }
    if ((float)local_6c._0_4_ <= *(float *)((int)x + 4)) {
      if ((float)local_4c._4_4_ < (float)local_58._4_4_) {
        local_7c = (double)CONCAT44(local_4c._4_4_,local_4c._0_4_);
        local_74 = (float)local_4c._8_4_;
        if (local_4c != local_58) {
          local_4c._0_4_ = local_58._0_4_;
          local_4c._4_4_ = local_58._4_4_;
          local_4c._8_4_ = local_50;
        }
        if ((undefined8 *)local_58 != &local_7c) {
          local_58._0_4_ = uVar5;
          local_58._4_4_ = uVar6;
          local_50 = (float)uVar7;
        }
      }
      if (*out_height <= (float)local_4c._4_4_) {
        if ((float)local_4c._0_4_ * (float)local_4c._0_4_ +
            (float)local_4c._8_4_ * (float)local_4c._8_4_ < z * z) {
          *out_height = (float)local_4c._4_4_;
          return 1;
        }
        uVar8 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          ((CVector3f *)local_4c,(CVector3f *)local_58,z,out_height);
        uVar9 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                          ((CVector3f *)(local_58 + 4),(CVector3f *)local_6c,z,out_height);
        uVar10 = core_dtri_cpp_rayEdgeHeightTest_FUN_0049b180
                           ((CVector3f *)(local_6c + 4),(CVector3f *)(local_4c + 8),z,out_height);
        fVar11 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar10 = uVar8 | uVar9 | uVar10;
        fVar11 = SQRT(fVar1 * fVar1 + fVar11 * fVar11);
        local_7c = (double)fVar11;
        if ((g_FloorCacheValid & 1) == 0) {
          g_FloorCacheValid = g_FloorCacheValid | 1;
          g_FloorRayDirection.y = -100.0;
          g_FloorRayDirection.x = 0.0;
          g_FloorRayDirection.z = 0.0;
        }
        if (g_Epsilon <= local_7c) {
          fVar11 = z / fVar11;
          local_58._0_4_ = (triangle->normal).x * fVar11 + *(float *)x;
          local_50 = fVar11 * (triangle->normal).z + *(float *)((int)x + 8);
          local_58._4_4_ = *(float *)((int)x + 4);
          fVar11 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                             (triangle,(CVector3f *)local_58,&g_FloorRayDirection);
          if ((0.0 <= fVar11) &&
             (local_50 = fVar11 * g_FloorRayDirection.y + local_50, *out_height < local_50)) {
            *out_height = local_50;
            return 1;
          }
        }
        else if (uVar10 == 0) {
          fVar11 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                             (triangle,(CVector3f *)x,&g_FloorRayDirection);
          if (0.0 <= fVar11) {
            uVar10 = 1;
            *out_height = local_38;
          }
        }
        return uVar10;
      }
    }
  }
  return 0;
}


// Assembly code:
// 0049b2f0: PUSH EBX
//   Label: core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
// 0049b2f1: PUSH ESI
// 0049b2f2: PUSH EDI
// 0049b2f3: PUSH EBP
// 0049b2f4: MOV EBP,ESP
// 0049b2f6: SUB ESP,0x78
// 0049b2f9: AND ESP,0xfffffff8
// 0049b2fc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049b2ff: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0049b302: FLD float ptr [EBX + 0x28]
// 0049b305: FCOMP double ptr [0x00622e1a]
//   XREF to: 00622e1a (READ)
// 0049b30b: FNSTSW AX
// 0049b30d: SAHF
// 0049b30e: JA 0x0049b554
//   XREF to: 0049b554 (CONDITIONAL_JUMP)
// 0049b314: FLD float ptr [EBX]
// 0049b316: FSUB float ptr [ESI]
// 0049b318: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0049b31c: MOV EAX,dword ptr [EBX + 0x4]
// 0049b31f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049b323: FLD float ptr [EBX + 0x8]
// 0049b326: FSUB float ptr [ESI + 0x8]
// 0049b329: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 0049b32d: FLD float ptr [EBX + 0xc]
// 0049b330: FSUB float ptr [ESI]
// 0049b332: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 0049b336: MOV EAX,dword ptr [EBX + 0x10]
// 0049b339: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0049b33d: FLD float ptr [EBX + 0x14]
// 0049b340: FSUB float ptr [ESI + 0x8]
// 0049b343: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 0049b347: FLD float ptr [EBX + 0x18]
// 0049b34a: FSUB float ptr [ESI]
// 0049b34c: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (WRITE)
// 0049b350: MOV EAX,dword ptr [EBX + 0x1c]
// 0049b353: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0049b357: FLD float ptr [EBX + 0x20]
// 0049b35a: FSUB float ptr [ESI + 0x8]
// 0049b35d: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b361: FXCH
// 0049b363: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (WRITE)
// 0049b367: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0049b36b: FNSTSW AX
// 0049b36d: SAHF
// 0049b36e: JC 0x0049b55d
//   XREF to: 0049b55d (CONDITIONAL_JUMP)
// 0049b374: FLD float ptr [ESP + 0x34]
//   Label: LAB_0049b374
//   XREF to: Stack[-0x54] (READ)
// 0049b378: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0049b37c: FNSTSW AX
// 0049b37e: SAHF
// 0049b37f: JNC 0x0049b3e1
//   XREF to: 0049b3e1 (CONDITIONAL_JUMP)
// 0049b381: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 0049b385: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0049b389: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0049b38d: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0049b391: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0049b395: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0049b399: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0049b39d: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 0049b3a1: CMP EDI,EAX
// 0049b3a3: JZ 0x0049b3bd
//   XREF to: 0049b3bd (CONDITIONAL_JUMP)
// 0049b3a5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 0049b3a9: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0049b3ad: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0049b3b1: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0049b3b5: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 0049b3b9: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049b3bd: LEA EAX,[ESP + 0x18]
//   Label: LAB_0049b3bd
//   XREF to: Stack[-0x70] (DATA)
// 0049b3c1: LEA EDI,[ESP + 0x54]
//   XREF to: Stack[-0x34] (DATA)
// 0049b3c5: CMP EAX,EDI
// 0049b3c7: JZ 0x0049b3e1
//   XREF to: 0049b3e1 (CONDITIONAL_JUMP)
// 0049b3c9: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 0049b3cd: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 0049b3d1: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 0049b3d5: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0049b3d9: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0049b3dd: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 0049b3e1: FLD float ptr [ESP + 0x1c]
//   Label: LAB_0049b3e1
//   XREF to: Stack[-0x6c] (READ)
// 0049b3e5: FCOMP float ptr [ESI + 0x4]
// 0049b3e8: FNSTSW AX
// 0049b3ea: SAHF
// 0049b3eb: JA 0x0049b554
//   XREF to: 0049b554 (CONDITIONAL_JUMP)
// 0049b3f1: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b3f5: FCOMP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0049b3f9: FNSTSW AX
// 0049b3fb: SAHF
// 0049b3fc: JNC 0x0049b45e
//   XREF to: 0049b45e (CONDITIONAL_JUMP)
// 0049b3fe: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0049b402: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0049b406: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b40a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0049b40e: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0049b412: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0049b416: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0049b41a: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0049b41e: CMP EDI,EAX
// 0049b420: JZ 0x0049b43a
//   XREF to: 0049b43a (CONDITIONAL_JUMP)
// 0049b422: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0049b426: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049b42a: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0049b42e: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049b432: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0049b436: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0049b43a: LEA EDI,[ESP + 0x30]
//   Label: LAB_0049b43a
//   XREF to: Stack[-0x58] (DATA)
// 0049b43e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x7c] (DATA)
// 0049b442: CMP EDI,EAX
// 0049b444: JZ 0x0049b45e
//   XREF to: 0049b45e (CONDITIONAL_JUMP)
// 0049b446: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (DATA)
// 0049b44a: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0049b44e: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 0049b452: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0049b456: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 0049b45a: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049b45e: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_0049b45e
//   XREF to: Stack[0x10] (READ)
// 0049b461: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b465: FCOMP float ptr [EAX]
// 0049b467: FNSTSW AX
// 0049b469: SAHF
// 0049b46a: JC 0x0049b554
//   XREF to: 0049b554 (CONDITIONAL_JUMP)
// 0049b470: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0049b474: FMUL ST0
// 0049b476: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 0049b47a: FMUL ST0
// 0049b47c: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b47f: FMUL ST0
// 0049b481: FXCH
// 0049b483: FADDP ST2,ST0
// 0049b485: FCOMPP
// 0049b487: FNSTSW AX
// 0049b489: SAHF
// 0049b48a: JA 0x0049b5c6
//   XREF to: 0049b5c6 (CONDITIONAL_JUMP)
// 0049b490: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b493: PUSH EDX
// 0049b494: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x58] (DATA)
// 0049b498: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b49b: PUSH EAX
// 0049b49c: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 0049b4a0: PUSH EAX
// 0049b4a1: CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
//   XREF to: 0049b180 (UNCONDITIONAL_CALL)
// 0049b4a6: ADD ESP,0x10
// 0049b4a9: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b4ac: PUSH ECX
// 0049b4ad: MOV EDI,EAX
// 0049b4af: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x70] (DATA)
// 0049b4b3: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b4b6: PUSH EAX
// 0049b4b7: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x58] (DATA)
// 0049b4bb: PUSH EAX
// 0049b4bc: CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
//   XREF to: 0049b180 (UNCONDITIONAL_CALL)
// 0049b4c1: ADD ESP,0x10
// 0049b4c4: OR EDI,EAX
// 0049b4c6: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b4c9: PUSH EAX
// 0049b4ca: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x4c] (DATA)
// 0049b4ce: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b4d1: PUSH EAX
// 0049b4d2: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x70] (DATA)
// 0049b4d6: PUSH EAX
// 0049b4d7: CALL core_dtri.cpp_rayEdgeHeightTest_FUN_0049b180
//   XREF to: 0049b180 (UNCONDITIONAL_CALL)
// 0049b4dc: FLD float ptr [EBX + 0x24]
// 0049b4df: FMUL ST0
// 0049b4e1: FLD float ptr [EBX + 0x2c]
// 0049b4e4: FMUL ST0
// 0049b4e6: FADDP
// 0049b4e8: OR EDI,EAX
// 0049b4ea: FSQRT
// 0049b4ec: ADD ESP,0x10
// 0049b4ef: MOV AH,byte ptr [0x02cee5c8]
//   XREF to: 02cee5c8 (READ)
// 0049b4f5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0049b4f8: TEST AH,0x1
// 0049b4fb: JZ 0x0049b5db
//   XREF to: 0049b5db (CONDITIONAL_JUMP)
// 0049b501: FLD double ptr [ESP]
//   Label: LAB_0049b501
//   XREF to: Stack[-0x88] (DATA)
// 0049b504: FCOMP double ptr [0x00622e22]
//   XREF to: 00622e22 (READ)
// 0049b50a: FNSTSW AX
// 0049b50c: SAHF
// 0049b50d: JNC 0x0049b604
//   XREF to: 0049b604 (CONDITIONAL_JUMP)
// 0049b513: TEST EDI,EDI
// 0049b515: JNZ 0x0049b54b
//   XREF to: 0049b54b (CONDITIONAL_JUMP)
// 0049b517: PUSH 0x2cee5bc
//   XREF to: 02cee5bc (DATA)
// 0049b51c: PUSH ESI
// 0049b51d: PUSH EBX
// 0049b51e: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 0049b523: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049b52a: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 0049b531: FLDZ
// 0049b533: ADD ESP,0xc
// 0049b536: FCOMPP
// 0049b538: FNSTSW AX
// 0049b53a: SAHF
// 0049b53b: JA 0x0049b54b
//   XREF to: 0049b54b (CONDITIONAL_JUMP)
// 0049b53d: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b540: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b544: MOV EDI,0x1
// 0049b549: MOV dword ptr [EBX],EAX
// 0049b54b: MOV EAX,EDI
//   Label: LAB_0049b54b
// 0049b54d: MOV ESP,EBP
// 0049b54f: POP EBP
// 0049b550: POP EDI
// 0049b551: POP ESI
// 0049b552: POP EBX
// 0049b553: RET
// 0049b554: XOR EAX,EAX
//   Label: LAB_0049b554
// 0049b556: MOV ESP,EBP
// 0049b558: POP EBP
// 0049b559: POP EDI
// 0049b55a: POP ESI
// 0049b55b: POP EBX
// 0049b55c: RET
// 0049b55d: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_0049b55d
//   XREF to: Stack[-0x4c] (READ)
// 0049b561: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0049b565: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b569: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049b56d: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0049b571: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0049b575: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0049b579: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0049b57d: CMP EDI,EAX
// 0049b57f: JZ 0x0049b599
//   XREF to: 0049b599 (CONDITIONAL_JUMP)
// 0049b581: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0049b585: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049b589: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0049b58d: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0049b591: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 0049b595: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0049b599: LEA EDI,[ESP + 0x30]
//   Label: LAB_0049b599
//   XREF to: Stack[-0x58] (DATA)
// 0049b59d: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 0049b5a1: CMP EDI,EAX
// 0049b5a3: JZ 0x0049b374
//   XREF to: 0049b374 (CONDITIONAL_JUMP)
// 0049b5a9: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 0049b5ad: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0049b5b1: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 0049b5b5: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0049b5b9: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0049b5bd: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049b5c1: JMP 0x0049b374
//   XREF to: 0049b374 (UNCONDITIONAL_JUMP)
// 0049b5c6: MOV EBX,dword ptr [EBP + 0x20]
//   Label: LAB_0049b5c6
//   XREF to: Stack[0x10] (READ)
// 0049b5c9: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0049b5cd: MOV dword ptr [EBX],EAX
// 0049b5cf: MOV EAX,0x1
// 0049b5d4: MOV ESP,EBP
// 0049b5d6: POP EBP
// 0049b5d7: POP EDI
// 0049b5d8: POP ESI
// 0049b5d9: POP EBX
// 0049b5da: RET
// 0049b5db: MOV DL,AH
//   Label: LAB_0049b5db
// 0049b5dd: OR DL,0x1
// 0049b5e0: MOV ECX,0xc2c80000
// 0049b5e5: MOV byte ptr [0x02cee5c8],DL
//   XREF to: 02cee5c8 (WRITE)
// 0049b5eb: XOR EDX,EDX
// 0049b5ed: MOV dword ptr [0x02cee5c0],ECX
//   XREF to: 02cee5c0 (WRITE)
// 0049b5f3: MOV dword ptr [0x02cee5bc],EDX
//   XREF to: 02cee5bc (WRITE)
// 0049b5f9: MOV dword ptr [0x02cee5c4],EDX
//   XREF to: 02cee5c4 (WRITE)
// 0049b5ff: JMP 0x0049b501
//   XREF to: 0049b501 (UNCONDITIONAL_JUMP)
// 0049b604: FLD float ptr [EBX + 0x24]
//   Label: LAB_0049b604
// 0049b607: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0049b60a: FDIV double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0049b60d: FXCH
// 0049b60f: FMUL ST1
// 0049b611: FADD float ptr [ESI]
// 0049b613: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 0049b617: FMUL float ptr [EBX + 0x2c]
// 0049b61a: FADD float ptr [ESI + 0x8]
// 0049b61d: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 0049b621: MOV EAX,dword ptr [ESI + 0x4]
// 0049b624: PUSH 0x2cee5bc
//   XREF to: 02cee5bc (DATA)
// 0049b629: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0049b62d: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x64] (DATA)
// 0049b631: PUSH EAX
// 0049b632: PUSH EBX
// 0049b633: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 0049b638: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049b63f: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 0049b646: ADD ESP,0xc
// 0049b649: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 0049b64d: FLDZ
// 0049b64f: FCOMPP
// 0049b651: FNSTSW AX
// 0049b653: SAHF
// 0049b654: JA 0x0049b54b
//   XREF to: 0049b54b (CONDITIONAL_JUMP)
// 0049b65a: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 0049b65e: FMUL float ptr [0x02cee5c0]
//   XREF to: 02cee5c0 (READ)
// 0049b664: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 0049b668: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b66b: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (WRITE)
// 0049b66f: FCOMP float ptr [EAX]
// 0049b671: FNSTSW AX
// 0049b673: SAHF
// 0049b674: JBE 0x0049b54b
//   XREF to: 0049b54b (CONDITIONAL_JUMP)
// 0049b67a: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0049b67d: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 0049b681: MOV EDI,0x1
// 0049b686: MOV dword ptr [EBX],EAX
// 0049b688: MOV EAX,EDI
// 0049b68a: MOV ESP,EBP
// 0049b68c: POP EBP
// 0049b68d: POP EDI
// 0049b68e: POP ESI
// 0049b68f: POP EBX
// 0049b690: RET
