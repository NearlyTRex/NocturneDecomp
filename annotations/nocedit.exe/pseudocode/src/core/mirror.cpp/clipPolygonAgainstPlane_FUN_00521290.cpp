// Name: core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
// Address: 00521290
// Address Range: [[00521290, 005213b8]]
// Convention: __cdecl
// Signature: void core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290(SClipPlane * clip_plane, CVector3f * input_vertices, int input_count, CVector3f * output_vertices, int * output_count)
// Cross-references:
//   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 (00522310) at 00522441 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_caseD_1_00521278 = 00521365
//   void* PTR_caseD_3_00521280 = 00521347
// Function calls:
//   core_mirror.cpp_computePlaneIntersection_FUN_00521160

#include "nocturne.h"

void __cdecl
core_mirror_cpp_clipPolygonAgainstPlane_FUN_00521290
          (SClipPlane *clip_plane,CVector3f *input_vertices,int input_count,
          CVector3f *output_vertices,int *output_count)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  CVector3f *vertex_a;
  int local_14;
  
  *output_count = 0;
  local_14 = 0;
  vertex_a = input_vertices;
  if (0 < input_count) {
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == input_count) {
        uVar3 = uVar3 ^ input_count;
      }
      pCVar5 = input_vertices + uVar3;
      bVar2 = 0.0 < (float)clip_plane->C * vertex_a->z +
                    (float)clip_plane->A * vertex_a->x + (float)clip_plane->B * vertex_a->y +
                    (float)clip_plane->D;
      if (0.0 < (float)clip_plane->C * pCVar5->z +
                (float)clip_plane->A * pCVar5->x + (float)clip_plane->B * pCVar5->y +
                (float)clip_plane->D) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        pCVar5 = output_vertices + *output_count;
        if (pCVar5 != vertex_a) {
          pCVar5->x = vertex_a->x;
          pCVar5->y = vertex_a->y;
          pCVar5->z = vertex_a->z;
        }
        *output_count = *output_count + 1;
        break;
      case 1:
        core_mirror_cpp_computePlaneIntersection_FUN_00521160
                  (clip_plane,pCVar5,vertex_a,output_vertices + *output_count);
        *output_count = *output_count + 1;
        break;
      case 2:
        pCVar4 = output_vertices + *output_count;
        if (pCVar4 != vertex_a) {
          pCVar4->x = vertex_a->x;
          pCVar4->y = vertex_a->y;
          pCVar4->z = vertex_a->z;
        }
        iVar1 = *output_count;
        *output_count = iVar1 + 1;
        core_mirror_cpp_computePlaneIntersection_FUN_00521160
                  (clip_plane,vertex_a,pCVar5,output_vertices + iVar1 + 1);
        *output_count = *output_count + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < input_count);
  }
  return;
}


// Assembly code:
// 00521290: PUSH EBX
//   Label: core_mirror.cpp_clipPolygonAgainstPlane_FUN_00521290
// 00521291: PUSH ESI
// 00521292: PUSH EDI
// 00521293: PUSH EBP
// 00521294: SUB ESP,0x4
// 00521297: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0052129b: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 0052129f: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005212a3: XOR EDX,EDX
// 005212a5: MOV dword ptr [EBX],0x0
// 005212ab: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 005212ae: TEST ECX,ECX
// 005212b0: JLE 0x0052135d
//   XREF to: 0052135d (CONDITIONAL_JUMP)
// 005212b6: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005212ba: MOV ECX,dword ptr [ESP]
//   Label: LAB_005212ba
//   XREF to: Stack[-0x14] (DATA)
// 005212bd: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 005212c1: INC ECX
// 005212c2: CMP ECX,EDX
// 005212c4: JNZ 0x005212c8
//   XREF to: 005212c8 (CONDITIONAL_JUMP)
// 005212c6: XOR ECX,EDX
// 005212c8: IMUL ECX,ECX,0xc
//   Label: LAB_005212c8
// 005212cb: FLD float ptr [ESI + 0x4]
// 005212ce: FMUL float ptr [EDI + 0x4]
// 005212d1: FLD float ptr [ESI]
// 005212d3: FMUL float ptr [EDI]
// 005212d5: FADDP
// 005212d7: FLD float ptr [ESI + 0x8]
// 005212da: FMUL float ptr [EDI + 0x8]
// 005212dd: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 005212e1: MOV EDX,EDI
// 005212e3: FADDP
// 005212e5: ADD EBP,ECX
// 005212e7: FADD float ptr [ESI + 0xc]
// 005212ea: XOR ECX,ECX
// 005212ec: FLDZ
// 005212ee: FCOMPP
// 005212f0: FNSTSW AX
// 005212f2: SAHF
// 005212f3: JNC 0x005212fa
//   XREF to: 005212fa (CONDITIONAL_JUMP)
// 005212f5: MOV ECX,0x1
// 005212fa: FLD float ptr [ESI + 0x4]
//   Label: LAB_005212fa
// 005212fd: FMUL float ptr [EBP + 0x4]
// 00521300: FLD float ptr [ESI]
// 00521302: FMUL float ptr [EBP]
// 00521305: FADDP
// 00521307: FLD float ptr [ESI + 0x8]
// 0052130a: FMUL float ptr [EBP + 0x8]
// 0052130d: FADDP
// 0052130f: FADD float ptr [ESI + 0xc]
// 00521312: FLDZ
// 00521314: FCOMPP
// 00521316: FNSTSW AX
// 00521318: SAHF
// 00521319: JNC 0x0052131e
//   XREF to: 0052131e (CONDITIONAL_JUMP)
// 0052131b: OR CL,0x2
// 0052131e: CMP ECX,0x3
//   Label: LAB_0052131e
// 00521321: JA 0x00521347
//   XREF to: 00521347 (CONDITIONAL_JUMP)
// 00521323: JMP dword ptr [ECX*0x4 + 0x521274]
//   Label: switchD
//   XREF to: 0052132a (COMPUTED_JUMP)
//   XREF to: 00521347 (COMPUTED_JUMP)
//   XREF to: 00521365 (COMPUTED_JUMP)
//   XREF to: 0052137f (COMPUTED_JUMP)
//   XREF to: 00521278 (READ)
//   XREF to: 00521280 (READ)
//   XREF to: 00521347 (COMPUTED_JUMP)
//   XREF to: 00521365 (COMPUTED_JUMP)
// 0052132a: IMUL ECX,dword ptr [EBX],0xc
//   Label: caseD_0
// 0052132d: ADD ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00521331: CMP ECX,EDX
// 00521333: JZ 0x00521345
//   XREF to: 00521345 (CONDITIONAL_JUMP)
// 00521335: MOV EAX,dword ptr [EDX]
// 00521337: MOV dword ptr [ECX],EAX
// 00521339: MOV EAX,dword ptr [EDX + 0x4]
// 0052133c: MOV dword ptr [ECX + 0x4],EAX
// 0052133f: MOV EAX,dword ptr [EDX + 0x8]
// 00521342: MOV dword ptr [ECX + 0x8],EAX
// 00521345: INC dword ptr [EBX]
//   Label: LAB_00521345
// 00521347: MOV EBP,dword ptr [ESP]
//   Label: caseD_3
//   XREF to: Stack[-0x14] (DATA)
// 0052134a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0052134e: INC EBP
// 0052134f: ADD EDI,0xc
// 00521352: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
// 00521355: CMP EBP,EAX
// 00521357: JL 0x005212ba
//   XREF to: 005212ba (CONDITIONAL_JUMP)
// 0052135d: ADD ESP,0x4
//   Label: LAB_0052135d
// 00521360: POP EBP
// 00521361: POP EDI
// 00521362: POP ESI
// 00521363: POP EBX
// 00521364: RET
// 00521365: IMUL ECX,dword ptr [EBX],0xc
//   Label: caseD_1
// 00521368: ADD ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052136c: PUSH ECX
// 0052136d: PUSH EDX
// 0052136e: PUSH EBP
// 0052136f: PUSH ESI
// 00521370: CALL core_mirror.cpp_computePlaneIntersection_FUN_00521160
//   XREF to: 00521160 (UNCONDITIONAL_CALL)
// 00521375: MOV EDX,dword ptr [EBX]
// 00521377: INC EDX
// 00521378: ADD ESP,0x10
// 0052137b: MOV dword ptr [EBX],EDX
// 0052137d: JMP 0x00521347
//   XREF to: 00521347 (UNCONDITIONAL_JUMP)
// 0052137f: IMUL ECX,dword ptr [EBX],0xc
//   Label: caseD_2
// 00521382: ADD ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00521386: CMP ECX,EDX
// 00521388: JZ 0x0052139a
//   XREF to: 0052139a (CONDITIONAL_JUMP)
// 0052138a: MOV EAX,dword ptr [EDX]
// 0052138c: MOV dword ptr [ECX],EAX
// 0052138e: MOV EAX,dword ptr [EDX + 0x4]
// 00521391: MOV dword ptr [ECX + 0x4],EAX
// 00521394: MOV EAX,dword ptr [EDX + 0x8]
// 00521397: MOV dword ptr [ECX + 0x8],EAX
// 0052139a: MOV ECX,dword ptr [EBX]
//   Label: LAB_0052139a
// 0052139c: INC ECX
// 0052139d: MOV dword ptr [EBX],ECX
// 0052139f: IMUL ECX,ECX,0xc
// 005213a2: ADD ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 005213a6: PUSH ECX
// 005213a7: PUSH EBP
// 005213a8: PUSH EDX
// 005213a9: PUSH ESI
// 005213aa: CALL core_mirror.cpp_computePlaneIntersection_FUN_00521160
//   XREF to: 00521160 (UNCONDITIONAL_CALL)
// 005213af: MOV EDX,dword ptr [EBX]
// 005213b1: INC EDX
// 005213b2: ADD ESP,0x10
// 005213b5: MOV dword ptr [EBX],EDX
// 005213b7: JMP 0x00521347
//   XREF to: 00521347 (UNCONDITIONAL_JUMP)
