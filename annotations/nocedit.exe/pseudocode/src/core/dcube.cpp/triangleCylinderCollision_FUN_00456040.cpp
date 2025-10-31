// Name: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
// Address: 00456040
// Address Range: [[00456040, 004563f6]]
// Convention: __cdecl
// Signature: uint core_dcube.cpp_triangleCylinderCollision_FUN_00456040(CDemonCubeTriangle * triangle, CVector3f * cylinder_center, float cylinder_radius, float * out_height)
// Cross-references:
//   core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60 (00457b60) at 00457b8f [UNCONDITIONAL_CALL]
// Globals:
//   double g_CylinderCollisionMaxNormalY = -0.340000000000000
//   double g_CylinderCollisionMinNormal2D = 0.0100000000000000
//   CVector3f g_DownwardRayDirection
//   undefined4 g_DownwardRayDirection.y
//   undefined4 g_DownwardRayDirection.z
//   uchar g_DownwardRayInitialized
// Function calls:
//   core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
//   core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0

#include "nocturne.h"

uint __cdecl
core_dcube_cpp_triangleCylinderCollision_FUN_00456040
          (CDemonCubeTriangle *triangle,CVector3f *cylinder_center,float cylinder_radius,
          float *out_height)

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
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [8];
  float local_44;
  float local_40;
  undefined1 local_3c [20];
  CVector3f aCStack_28 [2];
  
  if ((triangle->normal).y <= (float)g_CylinderCollisionMaxNormalY) {
    fVar1 = triangle->vertices[0]->x - cylinder_center->x;
    fVar11 = triangle->vertices[0]->y;
    fVar2 = triangle->vertices[0]->z - cylinder_center->z;
    local_4c._0_4_ = triangle->vertices[1]->x - cylinder_center->x;
    local_4c._4_4_ = triangle->vertices[1]->y;
    local_44 = triangle->vertices[1]->z - cylinder_center->z;
    local_40 = triangle->vertices[2]->x - cylinder_center->x;
    local_3c._0_4_ = triangle->vertices[2]->y;
    local_3c._4_4_ = triangle->vertices[2]->z - cylinder_center->z;
    local_58._0_4_ = fVar1;
    local_58._4_4_ = fVar11;
    local_58._8_4_ = fVar2;
    if (fVar11 < (float)local_4c._4_4_) {
      if (local_58 != local_4c) {
        local_58._0_4_ = local_4c._0_4_;
        local_58._4_4_ = local_4c._4_4_;
        local_58._8_4_ = local_44;
      }
      local_70 = fVar1;
      local_6c = fVar11;
      local_68 = fVar2;
      if ((float *)local_4c != &local_70) {
        local_4c._0_4_ = fVar1;
        local_4c._4_4_ = fVar11;
        local_44 = fVar2;
      }
    }
    fVar11 = local_44;
    uVar7 = local_4c._4_4_;
    uVar6 = local_4c._0_4_;
    uVar5 = local_58._8_4_;
    uVar4 = local_58._4_4_;
    uVar3 = local_58._0_4_;
    if ((float)local_4c._4_4_ < (float)local_3c._0_4_) {
      local_7c = (double)CONCAT44(local_4c._4_4_,local_4c._0_4_);
      local_74 = local_44;
      if ((float *)local_4c != &local_40) {
        local_4c._0_4_ = local_40;
        local_4c._4_4_ = local_3c._0_4_;
        local_44 = (float)local_3c._4_4_;
      }
      if (&local_40 != (float *)&local_7c) {
        local_40 = (float)uVar6;
        local_3c._0_4_ = uVar7;
        local_3c._4_4_ = fVar11;
      }
    }
    if ((float)local_3c._0_4_ <= cylinder_center->y) {
      if ((float)local_58._4_4_ < (float)local_4c._4_4_) {
        local_64 = (float)local_58._0_4_;
        local_60 = (float)local_58._4_4_;
        local_5c = (float)local_58._8_4_;
        if (local_58 != local_4c) {
          local_58._0_4_ = local_4c._0_4_;
          local_58._4_4_ = local_4c._4_4_;
          local_58._8_4_ = local_44;
        }
        if ((float *)local_4c != &local_64) {
          local_4c._0_4_ = uVar3;
          local_4c._4_4_ = uVar4;
          local_44 = (float)uVar5;
        }
      }
      if (*out_height <= (float)local_58._4_4_) {
        if ((float)local_58._0_4_ * (float)local_58._0_4_ +
            (float)local_58._8_4_ * (float)local_58._8_4_ < cylinder_radius * cylinder_radius) {
          *out_height = (float)local_58._4_4_;
          return 1;
        }
        uVar8 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          ((CVector3f *)local_58,(CVector3f *)local_4c,cylinder_radius,out_height);
        uVar9 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                          ((CVector3f *)(local_4c + 4),(CVector3f *)local_3c,cylinder_radius,
                           out_height);
        uVar10 = core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0
                           ((CVector3f *)(local_3c + 4),(CVector3f *)(local_58 + 8),cylinder_radius,
                            out_height);
        fVar11 = (triangle->normal).x;
        fVar1 = (triangle->normal).z;
        uVar10 = uVar8 | uVar9 | uVar10;
        fVar11 = SQRT(fVar1 * fVar1 + fVar11 * fVar11);
        local_7c = (double)fVar11;
        if ((g_DownwardRayInitialized & 1) == 0) {
          g_DownwardRayInitialized = g_DownwardRayInitialized | 1;
          g_DownwardRayDirection.y = -100.0;
          g_DownwardRayDirection.x = 0.0;
          g_DownwardRayDirection.z = 0.0;
        }
        if (g_CylinderCollisionMinNormal2D <= local_7c) {
          fVar11 = cylinder_radius / fVar11;
          aCStack_28[0].x = (triangle->normal).x * fVar11 + cylinder_center->x;
          aCStack_28[0].z = fVar11 * (triangle->normal).z + cylinder_center->z;
          aCStack_28[0].y = cylinder_center->y;
          fVar11 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                             (triangle,aCStack_28,&g_DownwardRayDirection);
          if ((0.0 <= fVar11) &&
             (aCStack_28[0].z = fVar11 * g_DownwardRayDirection.y + aCStack_28[0].z,
             *out_height < aCStack_28[0].z)) {
            *out_height = aCStack_28[0].z;
            return 1;
          }
        }
        else if (uVar10 == 0) {
          fVar11 = core_dcube_cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
                             (triangle,cylinder_center,&g_DownwardRayDirection);
          if (0.0 <= fVar11) {
            uVar10 = 1;
            *out_height = local_44;
          }
        }
        return uVar10;
      }
    }
  }
  return 0;
}


// Assembly code:
// 00456040: PUSH EBX
//   Label: core_dcube.cpp_triangleCylinderCollision_FUN_00456040
// 00456041: PUSH ESI
// 00456042: PUSH EDI
// 00456043: PUSH EBP
// 00456044: MOV EBP,ESP
// 00456046: SUB ESP,0x78
// 00456049: AND ESP,0xfffffff8
// 0045604c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0045604f: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00456052: FLD float ptr [EBX + 0x10]
// 00456055: FCOMP double ptr [0x0061a50a]
//   XREF to: 0061a50a (READ)
// 0045605b: FNSTSW AX
// 0045605d: SAHF
// 0045605e: JA 0x004562ba
//   XREF to: 004562ba (CONDITIONAL_JUMP)
// 00456064: MOV EAX,dword ptr [EBX]
// 00456066: FLD float ptr [EAX]
// 00456068: FSUB float ptr [ESI]
// 0045606a: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 0045606e: MOV EAX,dword ptr [EBX]
// 00456070: MOV EAX,dword ptr [EAX + 0x4]
// 00456073: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00456077: MOV EAX,dword ptr [EBX]
// 00456079: FLD float ptr [EAX + 0x8]
// 0045607c: FSUB float ptr [ESI + 0x8]
// 0045607f: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 00456083: MOV EAX,dword ptr [EBX + 0x4]
// 00456086: FLD float ptr [EAX]
// 00456088: FSUB float ptr [ESI]
// 0045608a: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0045608e: MOV EAX,dword ptr [EBX + 0x4]
// 00456091: MOV EAX,dword ptr [EAX + 0x4]
// 00456094: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00456098: MOV EAX,dword ptr [EBX + 0x4]
// 0045609b: FLD float ptr [EAX + 0x8]
// 0045609e: FSUB float ptr [ESI + 0x8]
// 004560a1: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 004560a5: MOV EAX,dword ptr [EBX + 0x8]
// 004560a8: FLD float ptr [EAX]
// 004560aa: FSUB float ptr [ESI]
// 004560ac: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 004560b0: MOV EAX,dword ptr [EBX + 0x8]
// 004560b3: MOV EAX,dword ptr [EAX + 0x4]
// 004560b6: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004560ba: MOV EAX,dword ptr [EBX + 0x8]
// 004560bd: FLD float ptr [EAX + 0x8]
// 004560c0: FSUB float ptr [ESI + 0x8]
// 004560c3: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004560c7: FXCH
// 004560c9: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 004560cd: FCOMP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 004560d1: FNSTSW AX
// 004560d3: SAHF
// 004560d4: JC 0x004562c3
//   XREF to: 004562c3 (CONDITIONAL_JUMP)
// 004560da: FLD float ptr [ESP + 0x40]
//   Label: LAB_004560da
//   XREF to: Stack[-0x48] (READ)
// 004560de: FCOMP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 004560e2: FNSTSW AX
// 004560e4: SAHF
// 004560e5: JNC 0x00456147
//   XREF to: 00456147 (CONDITIONAL_JUMP)
// 004560e7: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004560eb: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 004560ef: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 004560f3: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004560f7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 004560fb: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004560ff: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00456103: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 00456107: CMP EDI,EAX
// 00456109: JZ 0x00456123
//   XREF to: 00456123 (CONDITIONAL_JUMP)
// 0045610b: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (DATA)
// 0045610f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00456113: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 00456117: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0045611b: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 0045611f: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00456123: LEA EAX,[ESP + 0x48]
//   Label: LAB_00456123
//   XREF to: Stack[-0x40] (DATA)
// 00456127: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x7c] (DATA)
// 0045612b: CMP EAX,EDI
// 0045612d: JZ 0x00456147
//   XREF to: 00456147 (CONDITIONAL_JUMP)
// 0045612f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 00456133: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00456137: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 0045613b: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0045613f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 00456143: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00456147: FLD float ptr [ESP + 0x4c]
//   Label: LAB_00456147
//   XREF to: Stack[-0x3c] (READ)
// 0045614b: FCOMP float ptr [ESI + 0x4]
// 0045614e: FNSTSW AX
// 00456150: SAHF
// 00456151: JA 0x004562ba
//   XREF to: 004562ba (CONDITIONAL_JUMP)
// 00456157: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 0045615b: FCOMP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 0045615f: FNSTSW AX
// 00456161: SAHF
// 00456162: JNC 0x004561c4
//   XREF to: 004561c4 (CONDITIONAL_JUMP)
// 00456164: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 00456168: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0045616c: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00456170: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00456174: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00456178: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0045617c: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00456180: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 00456184: CMP EDI,EAX
// 00456186: JZ 0x004561a0
//   XREF to: 004561a0 (CONDITIONAL_JUMP)
// 00456188: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 0045618c: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00456190: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 00456194: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00456198: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 0045619c: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004561a0: LEA EDI,[ESP + 0x3c]
//   Label: LAB_004561a0
//   XREF to: Stack[-0x4c] (DATA)
// 004561a4: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x64] (DATA)
// 004561a8: CMP EDI,EAX
// 004561aa: JZ 0x004561c4
//   XREF to: 004561c4 (CONDITIONAL_JUMP)
// 004561ac: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (DATA)
// 004561b0: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004561b4: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 004561b8: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004561bc: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 004561c0: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004561c4: MOV EAX,dword ptr [EBP + 0x20]
//   Label: LAB_004561c4
//   XREF to: Stack[0x10] (READ)
// 004561c7: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004561cb: FCOMP float ptr [EAX]
// 004561cd: FNSTSW AX
// 004561cf: SAHF
// 004561d0: JC 0x004562ba
//   XREF to: 004562ba (CONDITIONAL_JUMP)
// 004561d6: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 004561da: FMUL ST0
// 004561dc: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 004561e0: FMUL ST0
// 004561e2: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004561e5: FMUL ST0
// 004561e7: FXCH
// 004561e9: FADDP ST2,ST0
// 004561eb: FCOMPP
// 004561ed: FNSTSW AX
// 004561ef: SAHF
// 004561f0: JA 0x0045632c
//   XREF to: 0045632c (CONDITIONAL_JUMP)
// 004561f6: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004561f9: PUSH EDX
// 004561fa: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x4c] (DATA)
// 004561fe: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00456201: PUSH EAX
// 00456202: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x58] (DATA)
// 00456206: PUSH EAX
// 00456207: CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
//   XREF to: 00455ed0 (UNCONDITIONAL_CALL)
// 0045620c: ADD ESP,0x10
// 0045620f: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00456212: PUSH ECX
// 00456213: MOV EDI,EAX
// 00456215: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x40] (DATA)
// 00456219: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0045621c: PUSH EAX
// 0045621d: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x4c] (DATA)
// 00456221: PUSH EAX
// 00456222: CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
//   XREF to: 00455ed0 (UNCONDITIONAL_CALL)
// 00456227: ADD ESP,0x10
// 0045622a: OR EDI,EAX
// 0045622c: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0045622f: PUSH EAX
// 00456230: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x58] (DATA)
// 00456234: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00456237: PUSH EAX
// 00456238: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x40] (DATA)
// 0045623c: PUSH EAX
// 0045623d: CALL core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
//   XREF to: 00455ed0 (UNCONDITIONAL_CALL)
// 00456242: FLD float ptr [EBX + 0xc]
// 00456245: FMUL ST0
// 00456247: FLD float ptr [EBX + 0x14]
// 0045624a: FMUL ST0
// 0045624c: FADDP
// 0045624e: OR EDI,EAX
// 00456250: FSQRT
// 00456252: ADD ESP,0x10
// 00456255: MOV AH,byte ptr [0x015c4290]
//   XREF to: 015c4290 (READ)
// 0045625b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0045625e: TEST AH,0x1
// 00456261: JZ 0x00456341
//   XREF to: 00456341 (CONDITIONAL_JUMP)
// 00456267: FLD double ptr [ESP]
//   Label: LAB_00456267
//   XREF to: Stack[-0x88] (DATA)
// 0045626a: FCOMP double ptr [0x0061a512]
//   XREF to: 0061a512 (READ)
// 00456270: FNSTSW AX
// 00456272: SAHF
// 00456273: JNC 0x0045636a
//   XREF to: 0045636a (CONDITIONAL_JUMP)
// 00456279: TEST EDI,EDI
// 0045627b: JNZ 0x004562b1
//   XREF to: 004562b1 (CONDITIONAL_JUMP)
// 0045627d: PUSH 0x15c4284
//   XREF to: 015c4284 (DATA)
// 00456282: PUSH ESI
// 00456283: PUSH EBX
// 00456284: CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
//   XREF to: 00455460 (UNCONDITIONAL_CALL)
// 00456289: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00456290: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 00456297: FLDZ
// 00456299: ADD ESP,0xc
// 0045629c: FCOMPP
// 0045629e: FNSTSW AX
// 004562a0: SAHF
// 004562a1: JA 0x004562b1
//   XREF to: 004562b1 (CONDITIONAL_JUMP)
// 004562a3: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004562a6: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004562aa: MOV EDI,0x1
// 004562af: MOV dword ptr [EBX],EAX
// 004562b1: MOV EAX,EDI
//   Label: LAB_004562b1
// 004562b3: MOV ESP,EBP
// 004562b5: POP EBP
// 004562b6: POP EDI
// 004562b7: POP ESI
// 004562b8: POP EBX
// 004562b9: RET
// 004562ba: XOR EAX,EAX
//   Label: LAB_004562ba
// 004562bc: MOV ESP,EBP
// 004562be: POP EBP
// 004562bf: POP EDI
// 004562c0: POP ESI
// 004562c1: POP EBX
// 004562c2: RET
// 004562c3: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_004562c3
//   XREF to: Stack[-0x58] (READ)
// 004562c7: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004562cb: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004562cf: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004562d3: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 004562d7: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 004562db: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004562df: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004562e3: CMP EDI,EAX
// 004562e5: JZ 0x004562ff
//   XREF to: 004562ff (CONDITIONAL_JUMP)
// 004562e7: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (DATA)
// 004562eb: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 004562ef: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 004562f3: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 004562f7: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 004562fb: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 004562ff: LEA EDI,[ESP + 0x3c]
//   Label: LAB_004562ff
//   XREF to: Stack[-0x4c] (DATA)
// 00456303: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 00456307: CMP EDI,EAX
// 00456309: JZ 0x004560da
//   XREF to: 004560da (CONDITIONAL_JUMP)
// 0045630f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (DATA)
// 00456313: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00456317: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 0045631b: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0045631f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 00456323: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00456327: JMP 0x004560da
//   XREF to: 004560da (UNCONDITIONAL_JUMP)
// 0045632c: MOV EBX,dword ptr [EBP + 0x20]
//   Label: LAB_0045632c
//   XREF to: Stack[0x10] (READ)
// 0045632f: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 00456333: MOV dword ptr [EBX],EAX
// 00456335: MOV EAX,0x1
// 0045633a: MOV ESP,EBP
// 0045633c: POP EBP
// 0045633d: POP EDI
// 0045633e: POP ESI
// 0045633f: POP EBX
// 00456340: RET
// 00456341: MOV DL,AH
//   Label: LAB_00456341
// 00456343: OR DL,0x1
// 00456346: MOV ECX,0xc2c80000
// 0045634b: MOV byte ptr [0x015c4290],DL
//   XREF to: 015c4290 (WRITE)
// 00456351: XOR EDX,EDX
// 00456353: MOV dword ptr [0x015c4288],ECX
//   XREF to: 015c4288 (WRITE)
// 00456359: MOV dword ptr [0x015c4284],EDX
//   XREF to: 015c4284 (WRITE)
// 0045635f: MOV dword ptr [0x015c428c],EDX
//   XREF to: 015c428c (WRITE)
// 00456365: JMP 0x00456267
//   XREF to: 00456267 (UNCONDITIONAL_JUMP)
// 0045636a: FLD float ptr [EBX + 0xc]
//   Label: LAB_0045636a
// 0045636d: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00456370: FDIV double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 00456373: FXCH
// 00456375: FMUL ST1
// 00456377: FADD float ptr [ESI]
// 00456379: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 0045637d: FMUL float ptr [EBX + 0x14]
// 00456380: FADD float ptr [ESI + 0x8]
// 00456383: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 00456387: MOV EAX,dword ptr [ESI + 0x4]
// 0045638a: PUSH 0x15c4284
//   XREF to: 015c4284 (DATA)
// 0045638f: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00456393: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x34] (DATA)
// 00456397: PUSH EAX
// 00456398: PUSH EBX
// 00456399: CALL core_dcube.cpp_CDemonCubeTriangle_rayTriangleIntersection_FUN_00455460
//   XREF to: 00455460 (UNCONDITIONAL_CALL)
// 0045639e: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004563a5: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x14] (READ)
// 004563ac: ADD ESP,0xc
// 004563af: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 004563b3: FLDZ
// 004563b5: FCOMPP
// 004563b7: FNSTSW AX
// 004563b9: SAHF
// 004563ba: JA 0x004562b1
//   XREF to: 004562b1 (CONDITIONAL_JUMP)
// 004563c0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004563c4: FMUL float ptr [0x015c4288]
//   XREF to: 015c4288 (READ)
// 004563ca: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 004563ce: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004563d1: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (WRITE)
// 004563d5: FCOMP float ptr [EAX]
// 004563d7: FNSTSW AX
// 004563d9: SAHF
// 004563da: JBE 0x004562b1
//   XREF to: 004562b1 (CONDITIONAL_JUMP)
// 004563e0: MOV EBX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004563e3: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 004563e7: MOV EDI,0x1
// 004563ec: MOV dword ptr [EBX],EAX
// 004563ee: MOV EAX,EDI
// 004563f0: MOV ESP,EBP
// 004563f2: POP EBP
// 004563f3: POP EDI
// 004563f4: POP ESI
// 004563f5: POP EBX
// 004563f6: RET
