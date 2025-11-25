// Name: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// Address: 0051a030
// Address Range: [[0051a030, 0051a146]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030(CLodMesh * this_ptr, int grid_x, int grid_y, int grid_z)
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50 (00519b50) at 00519d67 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SamplePointCount
//   CVector3f[400] g_SamplePointArray
//   undefined4 DAT_02f313fc
//   double[400] g_SampleDistances
//   undefined4 DAT_02f326b0+4
//   int g_LodGenerationStamp
// Function calls:
//   shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
          (CLodMesh *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int iVar1;
  int iVar2;
  CLodFace *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  double in_stack_ffffffc8;
  undefined4 local_30;
  undefined8 uStack_2c;
  int iStack_14;
  
  piVar4 = this_ptr->spatial_grid_ptr->cell_start_indices[grid_x][grid_y] + grid_z;
  iVar6 = *piVar4;
  iVar1 = piVar4[1];
  if (iVar6 < iVar1) {
    iVar6 = iVar6 * 4;
    do {
      iVar2 = *(int *)(iVar6 + (int)this_ptr->spatial_grid_data);
      pCVar3 = this_ptr->tri_data;
      iVar6 = iVar6 + 4;
      if ((pCVar3[iVar2].processed_flag == 0) &&
         (g_LodGenerationStamp != pCVar3[iVar2].visited_stamp)) {
        pCVar3[iVar2].visited_stamp = g_LodGenerationStamp;
        iVar5 = 0;
        if (0 < g_SamplePointCount) {
          uStack_2c = (double)((ulonglong)(uint)(iVar2 * 0x8c) << 0x20);
          do {
            in_stack_ffffffc8 =
                 shape_meshlod_cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
                           ((CLodMesh *)g_SamplePointArray,
                            (SLodSamplePoint *)
                            ((int)this_ptr->tri_data->attribute_indices + uStack_2c._4_4_),
                            SUB84(in_stack_ffffffc8,0));
            if (in_stack_ffffffc8 < *(double *)((int)g_SampleDistances + iVar5)) {
              *(int *)((int)g_SampleDistances + iVar5) = SUB84(in_stack_ffffffc8,0);
              *(undefined4 *)((int)g_SampleDistances + iVar5 + 4) = local_30;
            }
            iVar5 = iVar5 + 8;
            iStack_14 = iStack_14 + 1;
            uStack_2c = in_stack_ffffffc8;
          } while (iStack_14 < g_SamplePointCount);
        }
      }
    } while (iVar6 < iVar1 << 2);
  }
  return;
}


// Assembly code:
// 0051a030: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030
// 0051a031: PUSH ESI
// 0051a032: PUSH EDI
// 0051a033: PUSH EBP
// 0051a034: MOV EBP,ESP
// 0051a036: SUB ESP,0x24
// 0051a039: AND ESP,0xfffffff8
// 0051a03c: MOV EDI,dword ptr [EBP + 0x14]
// 0051a03f: MOV EAX,dword ptr [EBP + 0x18]
// 0051a042: MOV EDX,dword ptr [EBP + 0x1c]
// 0051a045: SHL EAX,0x4
// 0051a048: ADD EAX,EDX
// 0051a04a: MOV ECX,dword ptr [EBP + 0x20]
// 0051a04d: SHL EAX,0x4
// 0051a050: ADD EAX,ECX
// 0051a052: LEA EDX,[EAX*0x4 + 0x0]
// 0051a059: MOV EAX,dword ptr [EDI + 0x54]
// 0051a05c: ADD EAX,EDX
// 0051a05e: MOV EDX,dword ptr [EAX]
// 0051a060: MOV EAX,dword ptr [EAX + 0x4]
// 0051a063: MOV dword ptr [ESP + 0x18],EDX
// 0051a067: CMP EAX,EDX
// 0051a069: JLE 0x0051a0a3
//   XREF to: 0051a0a3 (CONDITIONAL_JUMP)
// 0051a06b: SHL EAX,0x2
// 0051a06e: LEA ESI,[EDX*0x4 + 0x0]
// 0051a075: MOV dword ptr [ESP + 0x14],EAX
// 0051a079: MOV EAX,dword ptr [EDI + 0x58]
//   Label: LAB_0051a079
// 0051a07c: MOV EAX,dword ptr [ESI + EAX*0x1]
// 0051a07f: IMUL EAX,EAX,0x8c
// 0051a085: MOV EBX,dword ptr [EDI + 0xc]
// 0051a088: MOV EDX,dword ptr [ESP + 0x18]
// 0051a08c: ADD EBX,EAX
// 0051a08e: ADD ESI,0x4
// 0051a091: INC EDX
// 0051a092: MOV ECX,dword ptr [EBX + 0x40]
// 0051a095: MOV dword ptr [ESP + 0x18],EDX
// 0051a099: TEST ECX,ECX
// 0051a09b: JZ 0x0051a0aa
//   XREF to: 0051a0aa (CONDITIONAL_JUMP)
// 0051a09d: CMP ESI,dword ptr [ESP + 0x14]
//   Label: LAB_0051a09d
// 0051a0a1: JL 0x0051a079
//   XREF to: 0051a079 (CONDITIONAL_JUMP)
// 0051a0a3: MOV ESP,EBP
//   Label: LAB_0051a0a3
// 0051a0a5: POP EBP
// 0051a0a6: POP EDI
// 0051a0a7: POP ESI
// 0051a0a8: POP EBX
// 0051a0a9: RET
// 0051a0aa: MOV ECX,dword ptr [0x02f33334]
//   Label: LAB_0051a0aa
//   XREF to: 02f33334 (READ)
// 0051a0b0: CMP ECX,dword ptr [EBX + 0x84]
// 0051a0b6: JZ 0x0051a09d
//   XREF to: 0051a09d (CONDITIONAL_JUMP)
// 0051a0b8: MOV dword ptr [EBX + 0x84],ECX
// 0051a0be: XOR EBX,EBX
// 0051a0c0: MOV EDX,dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 0051a0c6: MOV dword ptr [ESP + 0x20],EBX
// 0051a0ca: TEST EDX,EDX
// 0051a0cc: JLE 0x0051a09d
//   XREF to: 0051a09d (CONDITIONAL_JUMP)
// 0051a0ce: MOV ECX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 0051a0d3: MOV dword ptr [ESP + 0x10],EAX
// 0051a0d7: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: 02f313f0 (DATA)
// 0051a0db: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_0051a0db
// 0051a0df: MOV EAX,dword ptr [EDI + 0xc]
// 0051a0e2: ADD EAX,EDX
// 0051a0e4: PUSH EAX
// 0051a0e5: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: 02f313f0 (PARAM)
//   XREF to: 02f313fc (PARAM)
// 0051a0e9: PUSH ECX
//   XREF to: 02f313f0 (DATA)
//   XREF to: 02f313fc (DATA)
// 0051a0ea: PUSH EDI
// 0051a0eb: CALL shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
//   XREF to: 0051a400 (UNCONDITIONAL_CALL)
// 0051a0f0: MOV dword ptr [ESP + 0x14],EAX
// 0051a0f4: MOV dword ptr [ESP + 0x18],EDX
// 0051a0f8: FLD double ptr [ESP + 0x14]
// 0051a0fc: ADD ESP,0xc
// 0051a0ff: FST double ptr [ESP]
// 0051a102: FCOMP double ptr [EBX + 0x2f326b0]
//   XREF to: 02f326b0 (READ)
// 0051a108: FNSTSW AX
// 0051a10a: SAHF
// 0051a10b: JNC 0x0051a120
//   XREF to: 0051a120 (CONDITIONAL_JUMP)
// 0051a10d: MOV EAX,dword ptr [ESP]
// 0051a110: MOV dword ptr [EBX + 0x2f326b0],EAX
//   XREF to: 02f326b0 (WRITE)
// 0051a116: MOV EAX,dword ptr [ESP + 0x4]
// 0051a11a: MOV dword ptr [EBX + 0x2f326b4],EAX
//   XREF to: 02f326b4 (WRITE)
// 0051a120: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_0051a120
// 0051a124: MOV EAX,dword ptr [ESP + 0x20]
// 0051a128: MOV EDX,dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 0051a12e: ADD EBX,0x8
// 0051a131: ADD ECX,0xc
// 0051a134: INC EAX
// 0051a135: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: 02f313fc (DATA)
// 0051a139: MOV dword ptr [ESP + 0x20],EAX
// 0051a13d: CMP EAX,EDX
// 0051a13f: JGE 0x0051a09d
//   XREF to: 0051a09d (CONDITIONAL_JUMP)
// 0051a145: JMP 0x0051a0db
//   XREF to: 0051a0db (UNCONDITIONAL_JUMP)
