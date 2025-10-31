// Name: wincore_windll.cpp_drawPolyList_FUN_005b7640
// Address: 005b7640
// Address Range: [[005b7640, 005b7775]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_drawPolyList_FUN_005b7640(void * vertex_buffer, void * * polygons, int polygon_count, int render_flags)
// Cross-references:
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407b28 [UNCONDITIONAL_CALL]
//   engine_3d.c_flushRenderQueue_FUN_00407a30 (00407a30) at 00407a88 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048d152 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   int g_RenderedTriangleCount
//   APIDLL_drawPolygon2* g_APIDLL_drawPolygon2
//   APIDLL_drawPolyList* g_APIDLL_drawPolyList

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_drawPolyList_FUN_005b7640
          (void *vertex_buffer,void **polygons,int polygon_count,int render_flags)

{
  void *pvVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  g_RenderedTriangleCount = g_RenderedTriangleCount + polygon_count;
  if (g_APIDLL_drawPolyList != (APIDLL_drawPolyList *)0x0) {
    iVar2 = (*g_APIDLL_drawPolyList)(vertex_buffer,polygons,polygon_count,render_flags);
    return iVar2;
  }
  iVar2 = 0;
  if (0 < polygon_count) {
    do {
      pvVar1 = *polygons;
      local_20 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x18) * 0x30);
      local_1c = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x24) * 0x30);
      local_18 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x30) * 0x30);
      if (*(int *)((int)pvVar1 + 4) == 4) {
        local_14 = (void *)((int)vertex_buffer + *(int *)((int)pvVar1 + 0x3c) * 0x30);
      }
      *(undefined4 *)((int)local_20 + 0x18) = *(undefined4 *)((int)pvVar1 + 0x1c);
      *(undefined4 *)((int)local_20 + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x20);
      *(undefined4 *)((int)local_1c + 0x18) = *(undefined4 *)((int)pvVar1 + 0x28);
      *(undefined4 *)((int)local_1c + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x2c);
      *(undefined4 *)((int)local_18 + 0x18) = *(undefined4 *)((int)pvVar1 + 0x34);
      *(undefined4 *)((int)local_18 + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x38);
      if (*(int *)((int)pvVar1 + 4) == 4) {
        *(undefined4 *)((int)local_14 + 0x18) = *(undefined4 *)((int)pvVar1 + 0x40);
        *(undefined4 *)((int)local_14 + 0x1c) = *(undefined4 *)((int)pvVar1 + 0x44);
      }
      polygons = polygons + 1;
      iVar2 = iVar2 + 1;
      (*g_APIDLL_drawPolygon2)(&local_20,*(int *)((int)pvVar1 + 4),render_flags);
    } while (iVar2 < polygon_count);
  }
  return 1;
}


// Assembly code:
// 005b7640: PUSH EBX
//   Label: wincore_windll.cpp_drawPolyList_FUN_005b7640
// 005b7641: PUSH ESI
// 005b7642: PUSH EDI
// 005b7643: PUSH EBP
// 005b7644: SUB ESP,0x10
// 005b7647: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005b764b: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005b764f: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005b7653: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b765a: JZ 0x005b7738
//   XREF to: 005b7738 (CONDITIONAL_JUMP)
// 005b7660: MOV EAX,[0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 005b7665: MOV ESI,dword ptr [0x03f6b8d0]
//   XREF to: 03f6b8d0 (READ)
// 005b766b: ADD EAX,EBP
// 005b766d: TEST ESI,ESI
// 005b766f: JNZ 0x005b7754
//   XREF to: 005b7754 (CONDITIONAL_JUMP)
// 005b7675: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b767a: XOR EDI,EDI
// 005b767c: TEST EBP,EBP
// 005b767e: JLE 0x005b7729
//   XREF to: 005b7729 (CONDITIONAL_JUMP)
// 005b7684: MOV ESI,EDX
// 005b7686: MOV EAX,dword ptr [ESI]
//   Label: LAB_005b7686
// 005b7688: IMUL EDX,dword ptr [EAX + 0x18],0x30
// 005b768c: LEA ECX,[EBX + EDX*0x1]
// 005b768f: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 005b7692: IMUL EDX,dword ptr [EAX + 0x24],0x30
// 005b7696: LEA ECX,[EBX + EDX*0x1]
// 005b7699: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005b769d: IMUL EDX,dword ptr [EAX + 0x30],0x30
// 005b76a1: LEA ECX,[EBX + EDX*0x1]
// 005b76a4: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005b76a8: CMP dword ptr [EAX + 0x4],0x4
// 005b76ac: JZ 0x005b7744
//   XREF to: 005b7744 (CONDITIONAL_JUMP)
// 005b76b2: MOV EDX,dword ptr [ESP]
//   Label: LAB_005b76b2
//   XREF to: Stack[-0x20] (DATA)
// 005b76b5: MOV ECX,dword ptr [EAX + 0x1c]
// 005b76b8: MOV dword ptr [EDX + 0x18],ECX
// 005b76bb: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005b76be: MOV ECX,dword ptr [EAX + 0x20]
// 005b76c1: MOV dword ptr [EDX + 0x1c],ECX
// 005b76c4: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005b76c8: MOV EDX,dword ptr [EAX + 0x28]
// 005b76cb: MOV dword ptr [ECX + 0x18],EDX
// 005b76ce: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005b76d2: MOV EDX,dword ptr [EAX + 0x2c]
// 005b76d5: MOV dword ptr [ECX + 0x1c],EDX
// 005b76d8: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005b76dc: MOV ECX,dword ptr [EAX + 0x34]
// 005b76df: MOV dword ptr [EDX + 0x18],ECX
// 005b76e2: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005b76e6: MOV ECX,dword ptr [EAX + 0x38]
// 005b76e9: MOV dword ptr [EDX + 0x1c],ECX
// 005b76ec: CMP dword ptr [EAX + 0x4],0x4
// 005b76f0: JNZ 0x005b7706
//   XREF to: 005b7706 (CONDITIONAL_JUMP)
// 005b76f2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005b76f6: MOV ECX,dword ptr [EAX + 0x40]
// 005b76f9: MOV dword ptr [EDX + 0x18],ECX
// 005b76fc: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005b7700: MOV ECX,dword ptr [EAX + 0x44]
// 005b7703: MOV dword ptr [EDX + 0x1c],ECX
// 005b7706: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_005b7706
//   XREF to: Stack[0x10] (READ)
// 005b770a: PUSH EDX
// 005b770b: MOV ECX,dword ptr [EAX + 0x4]
// 005b770e: PUSH ECX
// 005b770f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 005b7713: PUSH EAX
// 005b7714: ADD ESI,0x4
// 005b7717: INC EDI
// 005b7718: CALL dword ptr [g_APIDLL_drawPolygon2]
//   XREF to: 03f6b8cc (READ)
// 005b771e: ADD ESP,0xc
// 005b7721: CMP EDI,EBP
// 005b7723: JL 0x005b7686
//   XREF to: 005b7686 (CONDITIONAL_JUMP)
// 005b7729: MOV EDX,0x1
//   Label: LAB_005b7729
// 005b772e: MOV EAX,EDX
// 005b7730: ADD ESP,0x10
// 005b7733: POP EBP
// 005b7734: POP EDI
// 005b7735: POP ESI
// 005b7736: POP EBX
// 005b7737: RET
// 005b7738: XOR EDX,EDX
//   Label: LAB_005b7738
// 005b773a: MOV EAX,EDX
// 005b773c: ADD ESP,0x10
// 005b773f: POP EBP
// 005b7740: POP EDI
// 005b7741: POP ESI
// 005b7742: POP EBX
// 005b7743: RET
// 005b7744: IMUL EDX,dword ptr [EAX + 0x3c],0x30
//   Label: LAB_005b7744
// 005b7748: LEA ECX,[EBX + EDX*0x1]
// 005b774b: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005b774f: JMP 0x005b76b2
//   XREF to: 005b76b2 (UNCONDITIONAL_JUMP)
// 005b7754: MOV EDI,dword ptr [ESP + 0x30]
//   Label: LAB_005b7754
//   XREF to: Stack[0x10] (READ)
// 005b7758: PUSH EDI
// 005b7759: PUSH EBP
// 005b775a: PUSH EDX
// 005b775b: PUSH EBX
// 005b775c: MOV [0x030e56b8],EAX
//   XREF to: 030e56b8 (WRITE)
// 005b7761: CALL dword ptr [g_APIDLL_drawPolyList]
//   XREF to: 03f6b8d0 (READ)
// 005b7767: ADD ESP,0x10
// 005b776a: MOV EDX,EAX
// 005b776c: MOV EAX,EDX
// 005b776e: ADD ESP,0x10
// 005b7771: POP EBP
// 005b7772: POP EDI
// 005b7773: POP ESI
// 005b7774: POP EBX
// 005b7775: RET
