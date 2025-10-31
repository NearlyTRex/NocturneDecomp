// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// Address: 00499170
// Address Range: [[00499170, 00499329]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170(CDemonRaytrace * this_ptr, CVector3f * world_position)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_getVoxelHeight_FUN_005724e0 (005724e0) at 005724ed [UNCONDITIONAL_CALL]
// Globals:
//   float g_VoxelSizeReciprocal = 0.125
//   uchar[8] g_VoxelYBitMasks
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  int grid_x;
  int iVar1;
  undefined4 in_EAX;
  CDemonCube *pCVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int unaff_retaddr;
  float local_14;
  
  fVar6 = ((float10)world_position->x - (float10)(this_ptr->bbox_min).x) /
          (float10)(this_ptr->cell_size).x;
  fVar7 = ((float10)world_position->y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->cell_size).y;
  fVar8 = ((float10)world_position->z - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(world_position,in_EAX));
  pfVar4 = (float *)((ulonglong)dVar11 >> 0x20);
  fVar9 = (float10)g_VoxelSizeReciprocal;
  fVar10 = ((float10)*pfVar4 -
           ((float10)(int)ROUND(fVar6) * (float10)(this_ptr->cell_size).x +
           (float10)(this_ptr->bbox_min).x)) / ((float10)(this_ptr->cell_size).x * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pfVar4,(int)ROUND(fVar6)));
  iVar5 = (int)((ulonglong)dVar11 >> 0x20);
  grid_x = (int)ROUND(fVar7);
  fVar6 = ((float10)*(float *)(iVar5 + 4) -
          ((float10)grid_x * (float10)(this_ptr->cell_size).y + (float10)(this_ptr->bbox_min).y)) /
          ((float10)(this_ptr->cell_size).y * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar5,grid_x));
  iVar3 = (int)((ulonglong)dVar11 >> 0x20);
  iVar5 = (int)ROUND(fVar8);
  fVar9 = ((float10)*(float *)(iVar3 + 8) -
          ((float10)iVar5 * (float10)(this_ptr->cell_size).z + (float10)(this_ptr->bbox_min).z)) /
          ((float10)(this_ptr->cell_size).z * fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,iVar5));
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)ROUND(fVar10),SUB84(dVar11,0)));
  iVar3 = (int)ROUND(fVar6);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  iVar1 = (int)ROUND(fVar9);
  if ((((((longlong)dVar11 < 0) || (unaff_retaddr < 0)) || (iVar1 < 0)) ||
      ((7 < (int)((ulonglong)dVar11 >> 0x20) || (7 < unaff_retaddr)))) || (7 < iVar1)) {
    local_14 = -999.0;
  }
  else {
    while (pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,grid_x,iVar3,(int)ROUND(fVar10)),
          pCVar2 != (CDemonCube *)0x0) {
      if ((pCVar2->voxel_buffer1 != (SVoxelGrid *)0x0) &&
         ((pCVar2->voxel_buffer1->voxels[iVar1][unaff_retaddr] & g_VoxelYBitMasks[iVar5]) != 0)) {
        return (float)unaff_retaddr * (this_ptr->cell_size).y * g_VoxelSizeReciprocal +
               (float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
      }
      unaff_retaddr = unaff_retaddr + -1;
      if (unaff_retaddr < 0) {
        iVar3 = iVar3 + -1;
        unaff_retaddr = 7;
      }
    }
    local_14 = -999.9;
  }
  return local_14;
}


// Assembly code:
// 00499170: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_00499170
// 00499171: PUSH ESI
// 00499172: PUSH EDI
// 00499173: PUSH EBP
// 00499174: SUB ESP,0x20
// 00499177: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0049917b: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0049917f: FLD float ptr [EDX]
// 00499181: FSUB float ptr [EBX + 0x10]
// 00499184: FDIV float ptr [EBX + 0x28]
// 00499187: FLD float ptr [EDX + 0x4]
// 0049918a: FSUB float ptr [EBX + 0x14]
// 0049918d: FDIV float ptr [EBX + 0x2c]
// 00499190: FLD float ptr [EDX + 0x8]
// 00499193: FSUB float ptr [EBX + 0x18]
// 00499196: FDIV float ptr [EBX + 0x30]
// 00499199: FXCH ST2
// 0049919b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004991a0: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 004991a4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 004991a8: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004991ac: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 004991b0: FMUL float ptr [EBX + 0x28]
// 004991b3: FADD float ptr [EBX + 0x10]
// 004991b6: FSUBR float ptr [EDX]
// 004991b8: FLD float ptr [0x00622d4e]
//   XREF to: 00622d4e (READ)
// 004991be: FLD float ptr [EBX + 0x28]
// 004991c1: FMUL ST1
// 004991c3: FDIVP ST2,ST0
// 004991c5: FXCH ST2
// 004991c7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004991cc: FISTP dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 004991d0: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 004991d4: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004991d8: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 004991dc: FMUL float ptr [EBX + 0x2c]
// 004991df: FADD float ptr [EBX + 0x14]
// 004991e2: FSUBR float ptr [EDX + 0x4]
// 004991e5: FLD float ptr [EBX + 0x2c]
// 004991e8: FMUL ST3
// 004991ea: FDIVP
// 004991ec: FXCH ST3
// 004991ee: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004991f3: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 004991f7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 004991fb: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004991ff: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 00499203: FMUL float ptr [EBX + 0x30]
// 00499206: FADD float ptr [EBX + 0x18]
// 00499209: FSUBR float ptr [EDX + 0x8]
// 0049920c: FLD float ptr [EBX + 0x30]
// 0049920f: FMULP ST3
// 00499211: FDIVRP ST2,ST0
// 00499213: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499218: FISTP dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0049921c: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 00499220: FXCH
// 00499222: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499227: FISTP dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (WRITE)
// 0049922b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00499230: FISTP dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00499233: TEST EDX,EDX
// 00499235: JL 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 0049923b: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0049923f: TEST ECX,ECX
// 00499241: JL 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 00499247: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0049924a: TEST ESI,ESI
// 0049924c: JL 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 00499252: CMP EDX,0x8
// 00499255: JGE 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 0049925b: CMP ECX,0x8
// 0049925e: JGE 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 00499264: CMP ESI,0x8
// 00499267: JGE 0x004992d3
//   XREF to: 004992d3 (CONDITIONAL_JUMP)
// 00499269: SHL ESI,0x3
// 0049926c: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0049926c
//   XREF to: Stack[-0x28] (READ)
// 00499270: PUSH EAX
// 00499271: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 00499275: PUSH EDX
// 00499276: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 0049927a: PUSH ECX
// 0049927b: PUSH EBX
// 0049927c: CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
//   XREF to: 004952b0 (UNCONDITIONAL_CALL)
// 00499281: ADD ESP,0x10
// 00499284: TEST EAX,EAX
// 00499286: JZ 0x004992e7
//   XREF to: 004992e7 (CONDITIONAL_JUMP)
// 00499288: MOV EDI,dword ptr [EAX]
// 0049928a: TEST EDI,EDI
// 0049928c: JZ 0x004992b2
//   XREF to: 004992b2 (CONDITIONAL_JUMP)
// 0049928e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00499292: MOV EAX,EDI
// 00499294: ADD EDX,ESI
// 00499296: MOV DL,byte ptr [EDX + EAX*0x1]
// 00499299: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0049929d: AND EDX,0xff
// 004992a3: MOV AL,byte ptr [EAX + 0x6789f8]
//   XREF to: 006789f8 (DATA)
// 004992a9: AND EAX,0xff
// 004992ae: TEST EDX,EAX
// 004992b0: JNZ 0x004992f1
//   XREF to: 004992f1 (CONDITIONAL_JUMP)
// 004992b2: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_004992b2
//   XREF to: Stack[-0x18] (READ)
// 004992b6: DEC EBP
// 004992b7: MOV dword ptr [ESP + 0x18],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004992bb: TEST EBP,EBP
// 004992bd: JGE 0x0049926c
//   XREF to: 0049926c (CONDITIONAL_JUMP)
// 004992bf: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 004992c3: MOV EDX,0x7
// 004992c8: DEC ECX
// 004992c9: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004992cd: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004992d1: JMP 0x0049926c
//   XREF to: 0049926c (UNCONDITIONAL_JUMP)
// 004992d3: MOV dword ptr [ESP + 0x4],0xc479c000
//   Label: LAB_004992d3
//   XREF to: Stack[-0x2c] (WRITE)
// 004992db: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004992db
//   XREF to: Stack[-0x2c] (READ)
// 004992df: ADD ESP,0x20
// 004992e2: POP EBP
// 004992e3: POP EDI
// 004992e4: POP ESI
// 004992e5: POP EBX
// 004992e6: RET
// 004992e7: MOV dword ptr [ESP + 0x4],0xc479f99a
//   Label: LAB_004992e7
//   XREF to: Stack[-0x2c] (WRITE)
// 004992ef: JMP 0x004992db
//   XREF to: 004992db (UNCONDITIONAL_JUMP)
// 004992f1: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004992f1
//   XREF to: Stack[-0x1c] (READ)
// 004992f5: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004992f9: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 004992fd: FMUL float ptr [EBX + 0x2c]
// 00499300: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00499304: FADD float ptr [EBX + 0x14]
// 00499307: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049930b: FILD dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0049930f: FMUL float ptr [EBX + 0x2c]
// 00499312: FMUL float ptr [0x00622d4e]
//   XREF to: 00622d4e (READ)
// 00499318: FADDP
// 0049931a: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 0049931e: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 00499322: ADD ESP,0x20
// 00499325: POP EBP
// 00499326: POP EDI
// 00499327: POP ESI
// 00499328: POP EBX
// 00499329: RET
