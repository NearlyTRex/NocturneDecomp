// Name: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// Address: 00516000
// Address Range: [[00516000, 0051641d]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 005181d5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00519710 (00519710) at 0051972c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 (0051cdf0) at 0051d01d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063751d = 0.5
//   double DOUBLE_00637525 = -0.258800000000000
//   double DOUBLE_0063752d = -0.5
//   double DOUBLE_00637535 = 3
//   undefined4 DAT_02f33330
// Function calls:
//   shape_meshlod.cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
//   shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
          (CLodMesh *this_ptr,int edge_index,int full_check)

{
  SLodTriangle *pSVar1;
  float fVar2;
  SLodEdge *pSVar3;
  int iVar4;
  int iVar5;
  CLodMesh *pCVar6;
  int corner_idx;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar7;
  SLodTriangle *tri_ptr;
  float *out_offset;
  undefined1 local_6c [12];
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  SLodTriangle *local_50;
  SLodEdge *local_4c;
  int local_48;
  float local_44;
  SLodTriangle *local_40;
  CVector3f *local_3c;
  char *local_38;
  int local_34;
  SLodTriangle *local_30;
  SLodEdge *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *pcStack_14;
  
  local_4c = this_ptr->edges_ptr + edge_index;
  if (full_check == 0) {
    if (local_4c->collapse_viability < 2) {
      local_4c->collapse_viability = 0;
    }
  }
  else {
    local_4c->collapse_viability = 0;
    local_4c->collapse_curvature = 0;
  }
  if (local_4c->adjacent_tri_count < 2) {
    local_4c->collapse_curvature = 2;
    return;
  }
  if (local_4c->collapse_viability < 2) {
    pSVar1 = this_ptr->triangle_data;
    local_40 = pSVar1 + local_4c->adjacent_tri_indices[0];
    if ((DAT_02f33330 == 0) && (local_48 = 1, pSVar3 = local_4c, 1 < local_4c->adjacent_tri_count))
    {
      do {
        iVar4 = 0;
        pCVar6 = this_ptr;
        if (0 < this_ptr->field6_0x18) {
          do {
            if ((*(int *)pCVar6->field9_0x24 != 0) &&
               (*(int *)(local_40->field0_0x0 + iVar4 * 4) !=
                *(int *)(pSVar1[pSVar3->adjacent_tri_indices[1]].field0_0x0 + iVar4 * 4))) {
              local_4c->collapse_viability = 1;
              return;
            }
            iVar4 = iVar4 + 1;
            pCVar6 = (CLodMesh *)&pCVar6->vertex_data;
          } while (iVar4 < this_ptr->field6_0x18);
        }
        local_48 = local_48 + 1;
        pSVar3 = (SLodEdge *)&pSVar3->vertex_idx_2;
        local_50 = pSVar1;
      } while (local_48 < local_4c->adjacent_tri_count);
    }
    if ((full_check != 0) && (local_44 = 0.0, local_2c = local_4c, 0 < local_4c->adjacent_tri_count)
       ) {
      do {
        local_28 = local_4c->adjacent_tri_indices[0];
        local_30 = this_ptr->triangle_data + local_28;
        local_34 = (int)local_44 + 1;
        if (local_34 < local_2c->adjacent_tri_count) {
          local_3c = &local_30->normal;
          local_38 = local_2c->field2_0x8 + (int)local_44 * 4 + -4;
          do {
            pSVar1 = local_30;
            local_1c = *(int *)(local_38 + 0x28);
            tri_ptr = this_ptr->triangle_data + local_1c;
            fVar2 = local_3c->z * (tri_ptr->normal).z +
                    local_3c->x * (tri_ptr->normal).x + local_3c->y * (tri_ptr->normal).y;
            if (local_2c->collapse_curvature < 2) {
              if (fVar2 <= (float)DOUBLE_00637525) {
                local_2c->collapse_curvature = 1;
              }
              if (fVar2 <= (float)DOUBLE_0063752d) {
                local_2c->collapse_curvature = 2;
              }
            }
            if (((DAT_02f33330 == 0) && (*(int *)this_ptr->field9_0x24 != 0)) &&
               (local_2c->collapse_viability < 2)) {
              pcStack_14 = (char *)shape_meshlod_cpp_findVertexIndexInTriangle_FUN_00515e90
                                             (local_30,local_2c->vertex_idx_1);
              iVar4 = shape_meshlod_cpp_findVertexIndexInTriangle_FUN_00515e90
                                (pSVar1,*(int *)(local_28 + 4));
              fStack_54 = (float)shape_meshlod_cpp_findVertexIndexInTriangle_FUN_00515e90
                                           (tri_ptr,*local_24);
              corner_idx = 0;
              iVar5 = shape_meshlod_cpp_findVertexIndexInTriangle_FUN_00515e90
                                (tri_ptr,*(int *)(local_20 + 4));
              iVar4 = local_20 + iVar4 * 8;
              pcStack_14 = tri_ptr->field0_0x0 + iVar5 * 8;
              iVar5 = unaff_ESI * 8 + local_20;
              pcVar7 = tri_ptr->field0_0x0 + (int)local_50 * 8;
              do {
                if (((float)DOUBLE_00637535 <
                     ABS(*(float *)(iVar5 + 0x1c) - *(float *)(pcVar7 + 0x1c))) ||
                   ((float)DOUBLE_00637535 <
                    ABS(*(float *)(iVar4 + corner_idx * 4 + 0x1c) -
                        *(float *)(pcStack_14 + corner_idx * 4 + 0x1c)))) {
                  *(undefined4 *)(local_1c + 0x18) = 2;
                  break;
                }
                shape_meshlod_cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
                          (this_ptr,local_18,corner_idx,(CVector3f *)(local_6c + 8),
                           (float *)&local_4c);
                out_offset = &local_44;
                shape_meshlod_cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
                          (this_ptr,unaff_ESI,corner_idx,(CVector3f *)local_6c,out_offset);
                if (fStack_54 * local_60 +
                    local_5c * (float)local_6c._4_4_ + local_58 * (float)local_6c._8_4_ <=
                    SQRT(local_60 * local_60 +
                         (float)local_6c._4_4_ * (float)local_6c._4_4_ +
                         (float)local_6c._8_4_ * (float)local_6c._8_4_) *
                    SQRT(fStack_54 * fStack_54 + local_5c * local_5c + local_58 * local_58) *
                    (float)out_offset * (float)DOUBLE_0063751d) {
                  *(int *)(pcStack_14 + 0x18) = 2;
                  break;
                }
                iVar5 = iVar5 + 4;
                corner_idx = corner_idx + 1;
                pcVar7 = pcVar7 + 4;
              } while (corner_idx < 2);
            }
            local_38 = local_38 + 4;
            local_34 = local_34 + 1;
          } while (local_34 < local_2c->adjacent_tri_count);
        }
        local_4c = (SLodEdge *)&local_4c->vertex_idx_2;
        local_44 = (float)((int)local_44 + 1);
      } while ((int)local_44 < local_2c->adjacent_tri_count);
    }
  }
  return;
}


// Assembly code:
// 00516000: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
// 00516001: PUSH ESI
// 00516002: PUSH EDI
// 00516003: PUSH EBP
// 00516004: MOV EBP,ESP
// 00516006: SUB ESP,0x74
// 00516009: AND ESP,0xfffffff8
// 0051600c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051600f: SHL EAX,0x4
// 00516012: MOV EDX,EAX
// 00516014: SHL EAX,0x4
// 00516017: SUB EAX,EDX
// 00516019: MOV EDX,EAX
// 0051601b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051601e: MOV EAX,dword ptr [EAX + 0x48]
// 00516021: ADD EAX,EDX
// 00516023: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00516026: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0051602a: TEST EDX,EDX
// 0051602c: JNZ 0x005160fb
//   XREF to: 005160fb (CONDITIONAL_JUMP)
// 00516032: CMP dword ptr [EAX + 0x18],0x2
// 00516036: JGE 0x0051603b
//   XREF to: 0051603b (CONDITIONAL_JUMP)
// 00516038: MOV dword ptr [EAX + 0x18],EDX
// 0051603b: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0051603b
//   XREF to: Stack[-0x2c] (READ)
// 0051603f: CMP dword ptr [EAX + 0x24],0x2
// 00516043: JL 0x0051610e
//   XREF to: 0051610e (CONDITIONAL_JUMP)
// 00516049: CMP dword ptr [EAX + 0x18],0x1
// 0051604d: JG 0x005160f4
//   XREF to: 005160f4 (CONDITIONAL_JUMP)
// 00516053: MOV EDX,dword ptr [EAX + 0x28]
// 00516056: LEA EAX,[EDX*0x8 + 0x0]
// 0051605d: ADD EAX,EDX
// 0051605f: SHL EAX,0x2
// 00516062: SUB EAX,EDX
// 00516064: LEA EDX,[EAX*0x4 + 0x0]
// 0051606b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051606e: MOV EAX,dword ptr [EAX + 0xc]
// 00516071: LEA EBX,[EAX + EDX*0x1]
// 00516074: MOV EDI,dword ptr [0x02f33330]
//   XREF to: 02f33330 (READ)
// 0051607a: MOV dword ptr [ESP + 0x48],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 0051607e: TEST EDI,EDI
// 00516080: JZ 0x0051611c
//   XREF to: 0051611c (CONDITIONAL_JUMP)
// 00516086: CMP dword ptr [EBP + 0x1c],0x0
//   Label: LAB_00516086
//   XREF to: Stack[0xc] (READ)
// 0051608a: JZ 0x005160f4
//   XREF to: 005160f4 (CONDITIONAL_JUMP)
// 0051608c: XOR EAX,EAX
// 0051608e: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00516092: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00516096: CMP dword ptr [EAX + 0x24],0x0
// 0051609a: JLE 0x005160f4
//   XREF to: 005160f4 (CONDITIONAL_JUMP)
// 0051609c: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005160a0: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_005160a0
//   XREF to: Stack[-0x4c] (READ)
// 005160a4: MOV EAX,dword ptr [EAX + 0x28]
// 005160a7: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005160ab: IMUL EDX,EAX,0x8c
// 005160b1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005160b4: MOV EAX,dword ptr [EAX + 0xc]
// 005160b7: ADD EAX,EDX
// 005160b9: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005160bd: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 005160c1: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005160c5: INC EAX
// 005160c6: MOV ECX,dword ptr [EDX + 0x24]
// 005160c9: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 005160cd: CMP EAX,ECX
// 005160cf: JL 0x005161aa
//   XREF to: 005161aa (CONDITIONAL_JUMP)
// 005160d5: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_005160d5
//   XREF to: Stack[-0x4c] (READ)
// 005160d9: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 005160dd: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005160e1: ADD ECX,0x4
// 005160e4: INC EBX
// 005160e5: MOV ESI,dword ptr [EDX + 0x24]
// 005160e8: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 005160ec: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 005160f0: CMP EBX,ESI
// 005160f2: JL 0x005160a0
//   XREF to: 005160a0 (CONDITIONAL_JUMP)
// 005160f4: MOV ESP,EBP
//   Label: LAB_005160f4
// 005160f6: POP EBP
// 005160f7: POP EDI
// 005160f8: POP ESI
// 005160f9: POP EBX
// 005160fa: RET
// 005160fb: MOV dword ptr [EAX + 0x18],0x0
//   Label: LAB_005160fb
// 00516102: MOV dword ptr [EAX + 0x1c],0x0
// 00516109: JMP 0x0051603b
//   XREF to: 0051603b (UNCONDITIONAL_JUMP)
// 0051610e: MOV dword ptr [EAX + 0x1c],0x2
//   Label: LAB_0051610e
// 00516115: MOV ESP,EBP
// 00516117: POP EBP
// 00516118: POP EDI
// 00516119: POP ESI
// 0051611a: POP EBX
// 0051611b: RET
// 0051611c: MOV dword ptr [ESP + 0x40],0x1
//   Label: LAB_0051611c
//   XREF to: Stack[-0x48] (WRITE)
// 00516124: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00516128: CMP dword ptr [EDX + 0x24],0x1
// 0051612c: JLE 0x00516086
//   XREF to: 00516086 (CONDITIONAL_JUMP)
// 00516132: LEA ECX,[EDX + 0x4]
// 00516135: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00516139: IMUL EDI,dword ptr [ECX + 0x28],0x8c
//   Label: LAB_00516139
// 00516140: MOV EAX,ECX
// 00516142: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00516145: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 00516149: XOR EAX,ECX
// 0051614b: MOV ESI,dword ptr [EDX + 0x18]
// 0051614e: ADD EDI,EBX
// 00516150: TEST ESI,ESI
// 00516152: JLE 0x0051617c
//   XREF to: 0051617c (CONDITIONAL_JUMP)
// 00516154: MOV ESI,dword ptr [EDX + 0x24]
//   Label: LAB_00516154
// 00516157: LEA EBX,[EAX*0x4 + 0x0]
// 0051615e: TEST ESI,ESI
// 00516160: JZ 0x0051616e
//   XREF to: 0051616e (CONDITIONAL_JUMP)
// 00516162: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (READ)
// 00516166: MOV ESI,dword ptr [ESI + EBX*0x1]
// 00516169: CMP ESI,dword ptr [EDI + EBX*0x1]
// 0051616c: JNZ 0x00516198
//   XREF to: 00516198 (CONDITIONAL_JUMP)
// 0051616e: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_0051616e
//   XREF to: Stack[0x4] (READ)
// 00516171: INC EAX
// 00516172: MOV ESI,dword ptr [EBX + 0x18]
// 00516175: ADD EDX,0x4
// 00516178: CMP EAX,ESI
// 0051617a: JL 0x00516154
//   XREF to: 00516154 (CONDITIONAL_JUMP)
// 0051617c: MOV EBX,dword ptr [ESP + 0x40]
//   Label: LAB_0051617c
//   XREF to: Stack[-0x48] (READ)
// 00516180: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00516184: ADD ECX,0x4
// 00516187: INC EBX
// 00516188: MOV ESI,dword ptr [EDX + 0x24]
// 0051618b: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 0051618f: CMP EBX,ESI
// 00516191: JL 0x00516139
//   XREF to: 00516139 (CONDITIONAL_JUMP)
// 00516193: JMP 0x00516086
//   XREF to: 00516086 (UNCONDITIONAL_JUMP)
// 00516198: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_00516198
//   XREF to: Stack[-0x2c] (READ)
// 0051619c: MOV dword ptr [EAX + 0x18],0x1
// 005161a3: MOV ESP,EBP
// 005161a5: POP EBP
// 005161a6: POP EDI
// 005161a7: POP ESI
// 005161a8: POP EBX
// 005161a9: RET
// 005161aa: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_005161aa
//   XREF to: Stack[-0x30] (READ)
// 005161ae: ADD EAX,0x44
// 005161b1: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005161b5: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 005161b9: SHL EAX,0x2
// 005161bc: ADD EAX,EDX
// 005161be: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005161c2: JMP 0x005162d1
//   XREF to: 005162d1 (UNCONDITIONAL_JUMP)
// 005161c7: ADD EDI,0x4
//   Label: LAB_005161c7
// 005161ca: INC EBX
// 005161cb: ADD ESI,0x4
// 005161ce: CMP EBX,0x2
// 005161d1: JL 0x005163f0
//   XREF to: 005163f0 (CONDITIONAL_JUMP)
// 005161d7: JMP 0x005162ae
//   XREF to: 005162ae (UNCONDITIONAL_JUMP)
// 005161dc: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_005161dc
//   XREF to: Stack[-0x20] (READ)
// 005161e0: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 005161e4: ADD EAX,EDX
// 005161e6: ADD EDX,ECX
// 005161e8: FLD float ptr [EAX + 0x1c]
// 005161eb: FSUB float ptr [EDX + 0x1c]
// 005161ee: FABS
// 005161f0: FCOMP double ptr [0x00637535]
//   XREF to: 00637535 (READ)
// 005161f6: FNSTSW AX
// 005161f8: SAHF
// 005161f9: JA 0x0051640e
//   XREF to: 0051640e (CONDITIONAL_JUMP)
// 005161ff: LEA EDX,[ESP + 0x2c]
//   XREF to: Stack[-0x5c] (DATA)
// 00516203: PUSH EDX
// 00516204: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x74] (DATA)
// 00516208: PUSH EDX
// 00516209: PUSH EBX
// 0051620a: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x28] (READ)
// 0051620e: PUSH EAX
// 0051620f: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00516212: PUSH EDX
// 00516213: CALL shape_meshlod.cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
//   XREF to: 00517530 (UNCONDITIONAL_CALL)
// 00516218: ADD ESP,0x14
// 0051621b: LEA EDX,[ESP + 0x30]
//   XREF to: Stack[-0x58] (DATA)
// 0051621f: PUSH EDX
// 00516220: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x80] (DATA)
// 00516224: PUSH EDX
// 00516225: PUSH EBX
// 00516226: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x1c] (READ)
// 0051622a: PUSH ECX
// 0051622b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051622e: PUSH EAX
// 0051622f: CALL shape_meshlod.cpp_CLodMesh_extractTriangleTexCoordGradient_FUN_00517530
//   XREF to: 00517530 (UNCONDITIONAL_CALL)
// 00516234: ADD ESP,0x14
// 00516237: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 0051623b: FMUL ST0
// 0051623d: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 00516241: FMUL ST0
// 00516243: FADDP
// 00516245: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 00516249: FMUL ST0
// 0051624b: FADDP
// 0051624d: FSQRT
// 0051624f: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 00516253: FMUL ST0
// 00516255: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 00516259: FMUL ST0
// 0051625b: FADDP
// 0051625d: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00516261: FMUL ST0
// 00516263: FADDP
// 00516265: FSQRT
// 00516267: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 0051626b: FMUL float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 0051626f: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 00516273: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 00516277: FADDP
// 00516279: FXCH
// 0051627b: FMULP ST2
// 0051627d: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 00516281: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 00516285: FXCH ST2
// 00516287: FMUL float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0051628a: FXCH ST2
// 0051628c: FADDP
// 0051628e: FXCH
// 00516290: FMUL double ptr [0x0063751d]
//   XREF to: 0063751d (READ)
// 00516296: FXCH
// 00516298: FCOMPP
// 0051629a: FNSTSW AX
// 0051629c: SAHF
// 0051629d: JA 0x005161c7
//   XREF to: 005161c7 (CONDITIONAL_JUMP)
// 005162a3: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005162a7: MOV dword ptr [EAX + 0x18],0x2
// 005162ae: MOV EBX,dword ptr [ESP + 0x50]
//   Label: LAB_005162ae
//   XREF to: Stack[-0x38] (READ)
// 005162b2: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 005162b6: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005162ba: ADD EBX,0x4
// 005162bd: INC ESI
// 005162be: MOV EDI,dword ptr [EDX + 0x24]
// 005162c1: MOV dword ptr [ESP + 0x50],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005162c5: MOV dword ptr [ESP + 0x54],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 005162c9: CMP ESI,EDI
// 005162cb: JGE 0x005160d5
//   XREF to: 005160d5 (CONDITIONAL_JUMP)
// 005162d1: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_005162d1
//   XREF to: Stack[-0x38] (READ)
// 005162d5: MOV EAX,dword ptr [EAX + 0x28]
// 005162d8: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005162dc: IMUL ESI,EAX,0x8c
// 005162e2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005162e5: MOV EAX,dword ptr [EAX + 0xc]
// 005162e8: ADD ESI,EAX
// 005162ea: MOV EDX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 005162ee: LEA EAX,[ESI + 0x44]
// 005162f1: FLD float ptr [EDX + 0x4]
// 005162f4: FMUL float ptr [EAX + 0x4]
// 005162f7: FLD float ptr [EDX]
// 005162f9: FMUL float ptr [EAX]
// 005162fb: FADDP
// 005162fd: FLD float ptr [EDX + 0x8]
// 00516300: FMUL float ptr [EAX + 0x8]
// 00516303: FADDP
// 00516305: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (WRITE)
// 00516309: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0051630d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x88] (DATA)
// 00516310: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00516314: CMP dword ptr [EAX + 0x1c],0x2
// 00516318: JGE 0x0051634d
//   XREF to: 0051634d (CONDITIONAL_JUMP)
// 0051631a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 0051631e: FCOMP double ptr [0x00637525]
//   XREF to: 00637525 (READ)
// 00516324: FNSTSW AX
// 00516326: SAHF
// 00516327: JA 0x00516334
//   XREF to: 00516334 (CONDITIONAL_JUMP)
// 00516329: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0051632d: MOV dword ptr [EAX + 0x1c],0x1
// 00516334: FLD float ptr [ESP]
//   Label: LAB_00516334
//   XREF to: Stack[-0x88] (DATA)
// 00516337: FCOMP double ptr [0x0063752d]
//   XREF to: 0063752d (READ)
// 0051633d: FNSTSW AX
// 0051633f: SAHF
// 00516340: JA 0x0051634d
//   XREF to: 0051634d (CONDITIONAL_JUMP)
// 00516342: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 00516346: MOV dword ptr [EAX + 0x1c],0x2
// 0051634d: CMP dword ptr [0x02f33330],0x0
//   Label: LAB_0051634d
//   XREF to: 02f33330 (READ)
// 00516354: JNZ 0x005162ae
//   XREF to: 005162ae (CONDITIONAL_JUMP)
// 0051635a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051635d: CMP dword ptr [EAX + 0x24],0x0
// 00516361: JZ 0x005162ae
//   XREF to: 005162ae (CONDITIONAL_JUMP)
// 00516367: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0051636b: CMP dword ptr [EAX + 0x18],0x2
// 0051636f: JGE 0x005162ae
//   XREF to: 005162ae (CONDITIONAL_JUMP)
// 00516375: MOV EBX,dword ptr [EAX]
// 00516377: PUSH EBX
// 00516378: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x30] (READ)
// 0051637c: PUSH EDI
// 0051637d: CALL shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 00516382: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00516386: ADD ESP,0x8
// 00516389: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 0051638d: MOV EDX,dword ptr [EAX + 0x4]
// 00516390: PUSH EDX
// 00516391: PUSH EDI
// 00516392: CALL shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 00516397: ADD ESP,0x8
// 0051639a: MOV EDI,EAX
// 0051639c: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005163a0: MOV EBX,dword ptr [EAX]
// 005163a2: PUSH EBX
// 005163a3: PUSH ESI
// 005163a4: CALL shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 005163a9: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005163ad: ADD ESP,0x8
// 005163b0: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 005163b4: MOV EDX,dword ptr [EAX + 0x4]
// 005163b7: PUSH EDX
// 005163b8: PUSH ESI
// 005163b9: SHL EDI,0x3
// 005163bc: XOR EBX,EBX
// 005163be: CALL shape_meshlod.cpp_findVertexIndexInTriangle_FUN_00515e90
//   XREF to: 00515e90 (UNCONDITIONAL_CALL)
// 005163c3: ADD ESP,0x8
// 005163c6: SHL EAX,0x3
// 005163c9: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005163cd: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 005163d1: ADD EDX,EDI
// 005163d3: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x18] (READ)
// 005163d7: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005163db: SHL EDI,0x3
// 005163de: LEA EDX,[ESI + EAX*0x1]
// 005163e1: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 005163e5: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005163e9: SHL EAX,0x3
// 005163ec: ADD EDI,ECX
// 005163ee: ADD ESI,EAX
// 005163f0: FLD float ptr [EDI + 0x1c]
//   Label: LAB_005163f0
// 005163f3: FSUB float ptr [ESI + 0x1c]
// 005163f6: FABS
// 005163f8: LEA EDX,[EBX*0x4 + 0x0]
// 005163ff: FCOMP double ptr [0x00637535]
//   XREF to: 00637535 (READ)
// 00516405: FNSTSW AX
// 00516407: SAHF
// 00516408: JBE 0x005161dc
//   XREF to: 005161dc (CONDITIONAL_JUMP)
// 0051640e: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_0051640e
//   XREF to: Stack[-0x2c] (READ)
// 00516412: MOV dword ptr [EAX + 0x18],0x2
// 00516419: JMP 0x005162ae
//   XREF to: 005162ae (UNCONDITIONAL_JUMP)
