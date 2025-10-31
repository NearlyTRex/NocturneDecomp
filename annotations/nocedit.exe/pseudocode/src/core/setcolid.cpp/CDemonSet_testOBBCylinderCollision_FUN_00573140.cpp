// Name: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// Address: 00573140
// Address Range: [[00573140, 0057346c]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140(CDemonSet * this_ptr, CBoundingBox3D * bounding_box, CMatrix3x3f * orientation_matrix, SIntersectXZCylinder * cylinder1, SIntersectXZCylinder * cylinder2)
// Cross-references:
//   core_manpuz.cpp_FUN_00509720 (00509720) at 005097ac [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 005738f2 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
          (CDemonSet *this_ptr,CBoundingBox3D *bounding_box,CMatrix3x3f *orientation_matrix,
          SIntersectXZCylinder *cylinder1,SIntersectXZCylinder *cylinder2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  BADSPACEBASE *in_ESP;
  uint corner_index;
  SIntersectXZCylinder *in_stack_00000018;
  SIntersectXZCylinder *in_stack_00000020;
  float in_stack_00000058;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [60];
  undefined1 auStack_124 [8];
  undefined1 auStack_11c [64];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [64];
  undefined1 auStack_94 [8];
  undefined1 auStack_8c [40];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [24];
  CVector3f CStack_34;
  CVector3f CStack_24;
  float local_14;
  
  pfVar6 = (float *)&stack0xfffffe18;
  corner_index = 0;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe18,8,&g_CVectorTypeInfo);
  do {
    pCVar5 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
                       ((CBoundingBox3D *)cylinder1,&CStack_34,corner_index);
    pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       ((CMatrix3x3f *)cylinder2,&CStack_24,pCVar5);
    local_14 = pCVar5->x + cylinder1->max_distance;
    fVar1 = pCVar5->y;
    fVar2 = cylinder1->push_z;
    fVar3 = pCVar5->z;
    fVar4 = (float)cylinder1->flags;
    if (pfVar6 != &local_14) {
      *pfVar6 = local_14;
      pfVar6[1] = fVar1 + fVar2;
      pfVar6[2] = fVar3 + fVar4;
    }
    corner_index = corner_index + 1;
    pfVar6 = pfVar6 + 3;
  } while ((int)corner_index < 8);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_64,(CVector3f *)&stack0xfffffe24,
             (CVector3f *)&stack0xfffffe54,(CVector3f *)&stack0xfffffe6c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_64 + 4),in_stack_00000018);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_5c,(CVector3f *)&stack0xfffffe2c,
             (CVector3f *)&stack0xfffffe74,(CVector3f *)&stack0xfffffe44);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_5c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_170 + 4),(CVector3f *)&stack0xfffffe40,
             (CVector3f *)&stack0xfffffe58,(CVector3f *)(auStack_180 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80((CDemonTriangle *)auStack_168,in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_168 + 4),(CVector3f *)&stack0xfffffe48,
             (CVector3f *)auStack_170,(CVector3f *)&stack0xfffffe78);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80((CDemonTriangle *)auStack_160,in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_124,(CVector3f *)&stack0xfffffe44,
             (CVector3f *)&stack0xfffffe50,(CVector3f *)auStack_180);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_124 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_11c,(CVector3f *)&stack0xfffffe4c,
             (CVector3f *)(auStack_180 + 8),(CVector3f *)&stack0xfffffe7c);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_11c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_dc,(CVector3f *)&stack0xfffffe6c,
             (CVector3f *)(auStack_168 + 4),(CVector3f *)(auStack_160 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_dc + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_d4,(CVector3f *)&stack0xfffffe74,
             (CVector3f *)(auStack_160 + 0x10),(CVector3f *)auStack_180);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_d4 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_94,(CVector3f *)&stack0xfffffe64,
             (CVector3f *)&stack0xfffffe7c,(CVector3f *)(auStack_180 + 8));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_94 + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_8c,(CVector3f *)&stack0xfffffe6c,(CVector3f *)auStack_170,
             (CVector3f *)&stack0xfffffe78);
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_8c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)auStack_4c,(CVector3f *)(auStack_160 + 4),
             (CVector3f *)(auStack_160 + 0x10),(CVector3f *)(auStack_160 + 0x28));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_4c + 4),in_stack_00000020);
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            ((CDemonTriangle *)(auStack_4c + 8),(CVector3f *)(auStack_160 + 0xc),
             (CVector3f *)(auStack_160 + 0x30),(CVector3f *)(auStack_160 + 0x24));
  core_dtri_cpp_cylinderTriangleTest_FUN_0049ad80
            ((CDemonTriangle *)(auStack_4c + 0xc),in_stack_00000020);
  return (uint)(in_stack_00000020->max_distance < in_stack_00000058);
}


// Assembly code:
// 00573140: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
// 00573141: PUSH ESI
// 00573142: PUSH EDI
// 00573143: PUSH EBP
// 00573144: SUB ESP,0x1d8
// 0057314a: MOV EDI,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x10] (READ)
// 00573151: MOV EBP,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0x14] (READ)
// 00573158: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0057315d: PUSH 0x8
// 0057315f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 00573163: PUSH EAX
// 00573164: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x1e8] (DATA)
// 00573168: XOR ESI,ESI
// 0057316a: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0057316f: ADD ESP,0xc
// 00573172: PUSH ESI
//   Label: LAB_00573172
// 00573173: LEA EAX,[ESP + 0x1b4]
//   XREF to: Stack[-0x38] (DATA)
// 0057317a: PUSH EAX
// 0057317b: MOV EDX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[0xc] (READ)
// 00573182: PUSH EDX
// 00573183: CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
//   XREF to: 004202b0 (UNCONDITIONAL_CALL)
// 00573188: ADD ESP,0xc
// 0057318b: PUSH EAX
// 0057318c: LEA EAX,[ESP + 0x1c0]
//   XREF to: Stack[-0x2c] (DATA)
// 00573193: PUSH EAX
// 00573194: PUSH EBP
// 00573195: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0057319a: FLD float ptr [EAX]
// 0057319c: FADD float ptr [EDI]
// 0057319e: ADD ESP,0xc
// 005731a1: FSTP float ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x20] (WRITE)
// 005731a8: FLD float ptr [EAX + 0x4]
// 005731ab: FADD float ptr [EDI + 0x4]
// 005731ae: FSTP float ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x1c] (WRITE)
// 005731b5: FLD float ptr [EAX + 0x8]
// 005731b8: FADD float ptr [EDI + 0x8]
// 005731bb: LEA EAX,[ESP + 0x1c8]
//   XREF to: Stack[-0x20] (DATA)
// 005731c2: FSTP float ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x18] (WRITE)
// 005731c9: CMP EBX,EAX
// 005731cb: JNZ 0x0057344b
//   XREF to: 0057344b (CONDITIONAL_JUMP)
// 005731d1: INC ESI
//   Label: LAB_005731d1
// 005731d2: ADD EBX,0xc
// 005731d5: CMP ESI,0x8
// 005731d8: JL 0x00573172
//   XREF to: 00573172 (CONDITIONAL_JUMP)
// 005731da: MOV EAX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[0x8] (READ)
// 005731e1: MOV EAX,dword ptr [EAX]
// 005731e3: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005731ea: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x1a0] (DATA)
// 005731ee: PUSH EAX
// 005731ef: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x1b8] (DATA)
// 005731f3: PUSH EAX
// 005731f4: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 005731f8: PUSH EAX
// 005731f9: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x70] (DATA)
// 00573200: PUSH EAX
// 00573201: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573206: ADD ESP,0x10
// 00573209: MOV ECX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[0x8] (READ)
// 00573210: PUSH ECX
// 00573211: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0x70] (DATA)
// 00573218: PUSH EAX
// 00573219: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 0057321e: ADD ESP,0x8
// 00573221: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1d0] (DATA)
// 00573225: PUSH EAX
// 00573226: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x1a0] (DATA)
// 0057322a: PUSH EAX
// 0057322b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 0057322f: PUSH EAX
// 00573230: LEA EAX,[ESP + 0x184]
//   XREF to: Stack[-0x70] (DATA)
// 00573237: PUSH EAX
// 00573238: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0057323d: ADD ESP,0x10
// 00573240: MOV EBX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[0x8] (READ)
// 00573247: PUSH EBX
// 00573248: LEA EAX,[ESP + 0x17c]
//   XREF to: Stack[-0x70] (DATA)
// 0057324f: PUSH EAX
// 00573250: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573255: ADD ESP,0x8
// 00573258: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x194] (DATA)
// 0057325c: PUSH EAX
// 0057325d: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c4] (DATA)
// 00573261: PUSH EAX
// 00573262: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1dc] (DATA)
// 00573266: PUSH EAX
// 00573267: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x188] (DATA)
// 0057326b: PUSH EAX
// 0057326c: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573271: ADD ESP,0x10
// 00573274: PUSH EBX
// 00573275: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x188] (DATA)
// 00573279: PUSH EAX
// 0057327a: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 0057327f: ADD ESP,0x8
// 00573282: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1ac] (DATA)
// 00573286: PUSH EAX
// 00573287: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x194] (DATA)
// 0057328b: PUSH EAX
// 0057328c: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1dc] (DATA)
// 00573290: PUSH EAX
// 00573291: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0x188] (DATA)
// 00573295: PUSH EAX
// 00573296: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 0057329b: ADD ESP,0x10
// 0057329e: PUSH EBX
// 0057329f: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x188] (DATA)
// 005732a3: PUSH EAX
// 005732a4: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 005732a9: ADD ESP,0x8
// 005732ac: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1ac] (DATA)
// 005732b0: PUSH EAX
// 005732b1: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1dc] (DATA)
// 005732b5: PUSH EAX
// 005732b6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 005732ba: PUSH EAX
// 005732bb: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x150] (DATA)
// 005732c2: PUSH EAX
// 005732c3: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005732c8: ADD ESP,0x10
// 005732cb: PUSH EBX
// 005732cc: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x150] (DATA)
// 005732d3: PUSH EAX
// 005732d4: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 005732d9: ADD ESP,0x8
// 005732dc: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x1b8] (DATA)
// 005732e0: PUSH EAX
// 005732e1: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x1ac] (DATA)
// 005732e5: PUSH EAX
// 005732e6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 005732ea: PUSH EAX
// 005732eb: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x150] (DATA)
// 005732f2: PUSH EAX
// 005732f3: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005732f8: ADD ESP,0x10
// 005732fb: PUSH EBX
// 005732fc: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x150] (DATA)
// 00573303: PUSH EAX
// 00573304: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573309: ADD ESP,0x8
// 0057330c: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x194] (DATA)
// 00573310: PUSH EAX
// 00573311: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x1a0] (DATA)
// 00573315: PUSH EAX
// 00573316: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x1d0] (DATA)
// 0057331a: PUSH EAX
// 0057331b: LEA EAX,[ESP + 0xdc]
//   XREF to: Stack[-0x118] (DATA)
// 00573322: PUSH EAX
// 00573323: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573328: ADD ESP,0x10
// 0057332b: PUSH EBX
// 0057332c: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x118] (DATA)
// 00573333: PUSH EAX
// 00573334: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573339: ADD ESP,0x8
// 0057333c: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c4] (DATA)
// 00573340: PUSH EAX
// 00573341: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x194] (DATA)
// 00573345: PUSH EAX
// 00573346: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x1d0] (DATA)
// 0057334a: PUSH EAX
// 0057334b: LEA EAX,[ESP + 0xdc]
//   XREF to: Stack[-0x118] (DATA)
// 00573352: PUSH EAX
// 00573353: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573358: ADD ESP,0x10
// 0057335b: PUSH EBX
// 0057335c: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x118] (DATA)
// 00573363: PUSH EAX
// 00573364: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573369: ADD ESP,0x8
// 0057336c: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c4] (DATA)
// 00573370: PUSH EAX
// 00573371: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1d0] (DATA)
// 00573375: PUSH EAX
// 00573376: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 0057337a: PUSH EAX
// 0057337b: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0xe0] (DATA)
// 00573382: PUSH EAX
// 00573383: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573388: ADD ESP,0x10
// 0057338b: PUSH EBX
// 0057338c: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0xe0] (DATA)
// 00573393: PUSH EAX
// 00573394: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573399: ADD ESP,0x8
// 0057339c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1dc] (DATA)
// 005733a0: PUSH EAX
// 005733a1: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1c4] (DATA)
// 005733a5: PUSH EAX
// 005733a6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e8] (DATA)
// 005733aa: PUSH EAX
// 005733ab: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0xe0] (DATA)
// 005733b2: PUSH EAX
// 005733b3: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005733b8: ADD ESP,0x10
// 005733bb: PUSH EBX
// 005733bc: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0xe0] (DATA)
// 005733c3: PUSH EAX
// 005733c4: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 005733c9: ADD ESP,0x8
// 005733cc: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x194] (DATA)
// 005733d0: PUSH EAX
// 005733d1: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x1ac] (DATA)
// 005733d5: PUSH EAX
// 005733d6: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b8] (DATA)
// 005733da: PUSH EAX
// 005733db: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0xa8] (DATA)
// 005733e2: PUSH EAX
// 005733e3: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 005733e8: ADD ESP,0x10
// 005733eb: PUSH EBX
// 005733ec: LEA EAX,[ESP + 0x144]
//   XREF to: Stack[-0xa8] (DATA)
// 005733f3: PUSH EAX
// 005733f4: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 005733f9: ADD ESP,0x8
// 005733fc: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x1a0] (DATA)
// 00573400: PUSH EAX
// 00573401: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x194] (DATA)
// 00573405: PUSH EAX
// 00573406: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b8] (DATA)
// 0057340a: PUSH EAX
// 0057340b: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0xa8] (DATA)
// 00573412: PUSH EAX
// 00573413: CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
//   XREF to: 0049a790 (UNCONDITIONAL_CALL)
// 00573418: ADD ESP,0x10
// 0057341b: PUSH EBX
// 0057341c: LEA EAX,[ESP + 0x144]
//   XREF to: Stack[-0xa8] (DATA)
// 00573423: PUSH EAX
// 00573424: CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
//   XREF to: 0049ad80 (UNCONDITIONAL_CALL)
// 00573429: ADD ESP,0x8
// 0057342c: FLD float ptr [EBX]
// 0057342e: FCOMP float ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x14] (READ)
// 00573435: FNSTSW AX
// 00573437: SAHF
// 00573438: SETC AL
// 0057343b: AND EAX,0xff
// 00573440: ADD ESP,0x1d8
// 00573446: POP EBP
// 00573447: POP EDI
// 00573448: POP ESI
// 00573449: POP EBX
// 0057344a: RET
// 0057344b: MOV EAX,dword ptr [ESP + 0x1c8]
//   Label: LAB_0057344b
//   XREF to: Stack[-0x20] (DATA)
// 00573452: MOV dword ptr [EBX],EAX
//   XREF to: Stack[-0x1e8] (DATA)
// 00573454: MOV EAX,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x1c] (READ)
// 0057345b: MOV dword ptr [EBX + 0x4],EAX
//   XREF to: Stack[-0x1e4] (WRITE)
// 0057345e: MOV EAX,dword ptr [ESP + 0x1d0]
//   XREF to: Stack[-0x18] (READ)
// 00573465: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 00573468: JMP 0x005731d1
//   XREF to: 005731d1 (UNCONDITIONAL_JUMP)
