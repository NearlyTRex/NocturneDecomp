// Name: engine_matrix.c_transformWorldToView_FUN_0050cc40
// Address: 0050cc40
// Address Range: [[0050cc40, 0050cd0c]]
// Convention: __cdecl
// Signature: void engine_matrix.c_transformWorldToView_FUN_0050cc40(int * input_coords, int * output_coords)
// Cross-references:
//   engine_matrix.c_projectToScreen_FUN_0050e5b0 (0050e5b0) at 0050e5d6 [UNCONDITIONAL_CALL]
// Globals:
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]

#include "nocturne.h"

void __cdecl engine_matrix_c_transformWorldToView_FUN_0050cc40(int *input_coords,int *output_coords)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int iVar9;
  
  iVar9 = *input_coords - g_RelativeX;
  iVar8 = input_coords[2] - g_RelativeZ;
  iVar7 = input_coords[1] - g_RelativeY;
  lVar1 = (longlong)g_TransformMatrix.m[0].y;
  lVar2 = (longlong)g_TransformMatrix.m[1].y;
  lVar3 = (longlong)g_TransformMatrix.m[2].y;
  lVar4 = (longlong)g_TransformMatrix.m[0].z;
  lVar5 = (longlong)g_TransformMatrix.m[1].z;
  lVar6 = (longlong)g_TransformMatrix.m[2].z;
  *unaff_ESI = ((uint)((longlong)g_TransformMatrix.m[0].x * (longlong)iVar9) >> 0x10 |
               (int)((ulonglong)((longlong)g_TransformMatrix.m[0].x * (longlong)iVar9) >> 0x20) <<
               0x10) + ((uint)((longlong)g_TransformMatrix.m[1].x * (longlong)iVar7) >> 0x10 |
                       (int)((ulonglong)((longlong)g_TransformMatrix.m[1].x * (longlong)iVar7) >>
                            0x20) << 0x10) +
               ((uint)((longlong)g_TransformMatrix.m[2].x * (longlong)iVar8) >> 0x10 |
               (int)((ulonglong)((longlong)g_TransformMatrix.m[2].x * (longlong)iVar8) >> 0x20) <<
               0x10);
  unaff_ESI[1] = ((uint)(lVar1 * iVar9) >> 0x10 | (int)((ulonglong)(lVar1 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar2 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar2 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar3 * iVar8) >> 0x10 | (int)((ulonglong)(lVar3 * iVar8) >> 0x20) << 0x10)
  ;
  unaff_ESI[2] = ((uint)(lVar4 * iVar9) >> 0x10 | (int)((ulonglong)(lVar4 * iVar9) >> 0x20) << 0x10)
                 + ((uint)(lVar5 * iVar7) >> 0x10 |
                   (int)((ulonglong)(lVar5 * iVar7) >> 0x20) << 0x10) +
                 ((uint)(lVar6 * iVar8) >> 0x10 | (int)((ulonglong)(lVar6 * iVar8) >> 0x20) << 0x10)
  ;
  return;
}


// Assembly code:
// 0050cc40: PUSH EBX
//   Label: engine_matrix.c_transformWorldToView_FUN_0050cc40
// 0050cc41: PUSH EDI
// 0050cc42: PUSH EBP
// 0050cc43: SUB ESP,0xc
// 0050cc46: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0050cc4a: MOV EBP,ESI
// 0050cc4c: MOV EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050cc52: MOV EDI,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050cc58: MOV EAX,[0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050cc5d: MOV ESI,dword ptr [EBX]
// 0050cc5f: MOV ECX,dword ptr [EBX + 0x4]
// 0050cc62: SUB ESI,EDX
// 0050cc64: MOV EBX,dword ptr [EBX + 0x8]
// 0050cc67: MOV EDX,ESI
// 0050cc69: SUB EBX,EAX
// 0050cc6b: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050cc70: SUB ECX,EDI
// 0050cc72: IMUL EDX
// 0050cc74: SHRD EAX,EDX,0x10
// 0050cc78: MOV EDI,EAX
// 0050cc7a: MOV EDX,ECX
// 0050cc7c: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050cc81: IMUL EDX
// 0050cc83: SHRD EAX,EDX,0x10
// 0050cc87: MOV EDX,EBX
// 0050cc89: ADD EDI,EAX
// 0050cc8b: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050cc90: IMUL EDX
// 0050cc92: SHRD EAX,EDX,0x10
// 0050cc96: MOV EDX,ESI
// 0050cc98: ADD EDI,EAX
// 0050cc9a: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050cc9f: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x18] (DATA)
// 0050cca2: IMUL EDX
// 0050cca4: SHRD EAX,EDX,0x10
// 0050cca8: MOV EDI,EAX
// 0050ccaa: MOV EDX,ECX
// 0050ccac: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050ccb1: IMUL EDX
// 0050ccb3: SHRD EAX,EDX,0x10
// 0050ccb7: MOV EDX,EBX
// 0050ccb9: ADD EDI,EAX
// 0050ccbb: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050ccc0: IMUL EDX
// 0050ccc2: SHRD EAX,EDX,0x10
// 0050ccc6: MOV EDX,ESI
// 0050ccc8: ADD EDI,EAX
// 0050ccca: MOV EAX,[0x02d052f0]
//   XREF to: 02d052f0 (READ)
// 0050cccf: IMUL EDX
// 0050ccd1: SHRD EAX,EDX,0x10
// 0050ccd5: MOV ESI,EAX
// 0050ccd7: MOV EDX,ECX
// 0050ccd9: MOV EAX,[0x02d052fc]
//   XREF to: 02d052fc (READ)
// 0050ccde: IMUL EDX
// 0050cce0: SHRD EAX,EDX,0x10
// 0050cce4: MOV EDX,EBX
// 0050cce6: ADD ESI,EAX
// 0050cce8: MOV EAX,[0x02d05308]
//   XREF to: 02d05308 (READ)
// 0050cced: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0050ccf1: IMUL EDX
// 0050ccf3: SHRD EAX,EDX,0x10
// 0050ccf7: ADD ESI,EAX
// 0050ccf9: MOV EDI,EBP
// 0050ccfb: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0050ccff: MOV ESI,ESP
// 0050cd01: MOVSD ES:EDI,ESI
// 0050cd02: MOVSD ES:EDI,ESI
// 0050cd03: MOVSD ES:EDI,ESI
// 0050cd04: MOV EAX,EBP
// 0050cd06: ADD ESP,0xc
// 0050cd09: POP EBP
// 0050cd0a: POP EDI
// 0050cd0b: POP EBX
// 0050cd0c: RET
