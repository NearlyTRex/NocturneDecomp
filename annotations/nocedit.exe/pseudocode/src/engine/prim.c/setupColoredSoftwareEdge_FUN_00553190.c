// Name: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
// Address: 00553190
// Address Range: [[00553190, 0055340b]]
// Convention: __cdecl
// Signature: void engine_prim.c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex * vertex0, SRenderVertex * vertex1)
// Globals:
//   int g_ProcessorType
//   int g_RenderStateFlag2
//   int g_ActiveEdgeCount
//   SSoftwareEdge[16] g_SoftwareEdgeTable
//   undefined4 g_SoftwareEdgeTable[0].y_max
//   undefined4 g_SoftwareEdgeTable[0].x_current
//   undefined4 g_SoftwareEdgeTable[0].x_gradient
//   undefined4 g_SoftwareEdgeTable[0].z_current
//   undefined4 g_SoftwareEdgeTable[0].z_gradient
//   undefined4 g_SoftwareEdgeTable[0].u_current
//   undefined4 g_SoftwareEdgeTable[0].u_gradient
//   undefined4 g_SoftwareEdgeTable[0].v_current
//   undefined4 g_SoftwareEdgeTable[0].v_gradient
//   undefined4 g_SoftwareEdgeTable[0].w_current
//   undefined4 g_SoftwareEdgeTable[0].w_gradient
//   undefined4 g_SoftwareEdgeTable[0].fog_current
//   undefined4 g_SoftwareEdgeTable[0].fog_gradient
//   undefined4 g_SoftwareEdgeTable[0].r_current
//   undefined4 g_SoftwareEdgeTable[0].r_gradient
//   undefined4 g_SoftwareEdgeTable[0].g_current
//   undefined4 g_SoftwareEdgeTable[0].g_gradient
//   int g_MinScanline
//   int g_MaxScanline

#include "nocturne.h"

void __cdecl
engine_prim_c_setupColoredSoftwareEdge_FUN_00553190(SRenderVertex *vertex0,SRenderVertex *vertex1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  
  iVar2 = g_ActiveEdgeCount;
  iVar7 = (vertex1->projected_vertex).screen_y >> 0x10;
  iVar3 = (vertex0->projected_vertex).screen_y >> 0x10;
  if (iVar3 != iVar7) {
    iVar4 = iVar3;
    pSVar6 = vertex1;
    if ((vertex1->projected_vertex).screen_y < (vertex0->projected_vertex).screen_y) {
      iVar4 = iVar7;
      pSVar6 = vertex0;
      vertex0 = vertex1;
      iVar7 = iVar3;
    }
    g_SoftwareEdgeTable[g_ActiveEdgeCount].y_min = iVar4;
    iVar3 = g_MinScanline;
    g_SoftwareEdgeTable[iVar2].y_max = iVar7;
    if (iVar4 < iVar3) {
      g_MinScanline = iVar4;
    }
    if (g_MaxScanline < iVar7) {
      g_MaxScanline = iVar7;
    }
    uVar5 = (pSVar6->projected_vertex).screen_y - (vertex0->projected_vertex).screen_y;
    if (uVar5 < 0x10000) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = (uint)(ushort)((ushort)(vertex0->projected_vertex).screen_y ^ 0xffff);
    lVar1 = (longlong)iVar7 *
            (longlong)((pSVar6->projected_vertex).screen_x - (vertex0->projected_vertex).screen_x);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].x_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].x_current =
         (vertex0->projected_vertex).screen_x +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->u - (int)vertex0->u);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].u_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].u_current =
         (int)vertex0->u + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->v - (int)vertex0->v);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].v_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].v_current =
         (int)vertex0->v + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->light - (int)vertex0->light);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].z_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].z_current =
         (int)vertex0->light + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->w_recip - (int)vertex0->w_recip);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].fog_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].fog_current =
         (int)vertex0->w_recip + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    if (g_RenderStateFlag2 == 1) {
      if (g_ProcessorType == 0) {
        local_14 = (vertex0->projected_vertex).inv_z;
        iVar3 = (pSVar6->projected_vertex).inv_z;
      }
      else {
        local_14 = 0x7fffffff - (vertex0->projected_vertex).transformed_z;
        iVar3 = 0x7fffffff - (pSVar6->projected_vertex).transformed_z;
      }
      lVar1 = (longlong)iVar7 * (longlong)(iVar3 - local_14);
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SoftwareEdgeTable[iVar2].w_current =
           local_14 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    else {
      lVar1 = (longlong)iVar7 *
              (longlong)
              ((pSVar6->projected_vertex).transformed_z - (vertex0->projected_vertex).transformed_z)
      ;
      uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      g_SoftwareEdgeTable[iVar2].w_gradient = uVar5;
      lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
      g_SoftwareEdgeTable[iVar2].w_current =
           (vertex0->projected_vertex).transformed_z +
           ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    }
    lVar1 = (longlong)iVar7 * (longlong)(pSVar6->color - vertex0->color);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].r_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_SoftwareEdgeTable[iVar2].r_current =
         vertex0->color + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar7 * (longlong)((int)pSVar6->fog - (int)vertex0->fog);
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_SoftwareEdgeTable[iVar2].g_gradient = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_ActiveEdgeCount = g_ActiveEdgeCount + 1;
    g_SoftwareEdgeTable[iVar2].g_current =
         (int)vertex0->fog + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 00553190: PUSH EBX
//   Label: engine_prim.c_setupColoredSoftwareEdge_FUN_00553190
// 00553191: PUSH ESI
// 00553192: PUSH EDI
// 00553193: PUSH EBP
// 00553194: SUB ESP,0x8
// 00553197: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0055319b: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0055319f: MOV EDI,dword ptr [EBP + 0x14]
// 005531a2: MOV EBX,dword ptr [ESI + 0x14]
// 005531a5: SAR EDI,0x10
// 005531a8: SAR EBX,0x10
// 005531ab: CMP EBX,EDI
// 005531ad: JZ 0x005533b3
//   XREF to: 005533b3 (CONDITIONAL_JUMP)
// 005531b3: MOV EDX,dword ptr [EBP + 0x14]
// 005531b6: CMP EDX,dword ptr [ESI + 0x14]
// 005531b9: JGE 0x005531c7
//   XREF to: 005531c7 (CONDITIONAL_JUMP)
// 005531bb: MOV EAX,ESI
// 005531bd: MOV ESI,EBP
// 005531bf: MOV EBP,EAX
// 005531c1: MOV EAX,EBX
// 005531c3: MOV EBX,EDI
// 005531c5: MOV EDI,EAX
// 005531c7: MOV EAX,[0x030e56bc]
//   Label: LAB_005531c7
//   XREF to: 030e56bc (READ)
// 005531cc: LEA ECX,[EAX*0x8 + 0x0]
// 005531d3: ADD ECX,EAX
// 005531d5: SHL ECX,0x3
// 005531d8: ADD ECX,0x30e56c0
//   XREF to: 030e56c0 (DATA)
// 005531de: MOV dword ptr [ECX],EBX
//   XREF to: 030e56c0 (DATA)
// 005531e0: MOV EAX,[0x030e5b40]
//   XREF to: 030e5b40 (READ)
// 005531e5: MOV dword ptr [ECX + 0x4],EDI
//   XREF to: 030e56c4 (DATA)
// 005531e8: CMP EBX,EAX
// 005531ea: JGE 0x005531f2
//   XREF to: 005531f2 (CONDITIONAL_JUMP)
// 005531ec: MOV dword ptr [0x030e5b40],EBX
//   XREF to: 030e5b40 (WRITE)
// 005531f2: CMP EDI,dword ptr [0x030e5b44]
//   Label: LAB_005531f2
//   XREF to: 030e5b44 (READ)
// 005531f8: JLE 0x00553200
//   XREF to: 00553200 (CONDITIONAL_JUMP)
// 005531fa: MOV dword ptr [0x030e5b44],EDI
//   XREF to: 030e5b44 (WRITE)
// 00553200: MOV EDI,dword ptr [ESI + 0x14]
//   Label: LAB_00553200
// 00553203: MOV EBX,dword ptr [EBP + 0x14]
// 00553206: SUB EBX,EDI
// 00553208: CMP EBX,0x10000
// 0055320e: JNC 0x005533bb
//   XREF to: 005533bb (CONDITIONAL_JUMP)
// 00553214: XOR EBX,EBX
// 00553216: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_00553216
// 00553219: MOV EDX,dword ptr [ESI + 0x10]
// 0055321c: MOV EDI,dword ptr [ESI + 0x14]
// 0055321f: SUB EAX,EDX
// 00553221: AND EDI,0xffff
// 00553227: MOV EDX,EAX
// 00553229: MOV EAX,EBX
// 0055322b: XOR DI,0xffff
// 0055322f: IMUL EDX
// 00553231: SHRD EAX,EDX,0x10
// 00553235: MOV EDX,EAX
// 00553237: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 030e56cc (DATA)
// 0055323a: MOV EAX,EDI
// 0055323c: IMUL EDX
// 0055323e: SHRD EAX,EDX,0x10
// 00553242: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00553245: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00553248: MOV EAX,dword ptr [ESI + 0x10]
// 0055324b: ADD EAX,EDX
// 0055324d: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 030e56c8 (DATA)
// 00553250: MOV EAX,dword ptr [EBP + 0x18]
// 00553253: MOV EDX,dword ptr [ESI + 0x18]
// 00553256: SUB EAX,EDX
// 00553258: MOV EDX,EAX
// 0055325a: MOV EAX,EBX
// 0055325c: IMUL EDX
// 0055325e: SHRD EAX,EDX,0x10
// 00553262: MOV EDX,EAX
// 00553264: MOV dword ptr [ECX + 0x1c],EAX
//   XREF to: 030e56dc (DATA)
// 00553267: MOV EAX,EDI
// 00553269: IMUL EDX
// 0055326b: SHRD EAX,EDX,0x10
// 0055326f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00553272: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00553275: MOV EAX,dword ptr [ESI + 0x18]
// 00553278: ADD EAX,EDX
// 0055327a: MOV dword ptr [ECX + 0x18],EAX
//   XREF to: 030e56d8 (DATA)
// 0055327d: MOV EAX,dword ptr [EBP + 0x1c]
// 00553280: MOV EDX,dword ptr [ESI + 0x1c]
// 00553283: SUB EAX,EDX
// 00553285: MOV EDX,EAX
// 00553287: MOV EAX,EBX
// 00553289: IMUL EDX
// 0055328b: SHRD EAX,EDX,0x10
// 0055328f: MOV EDX,EAX
// 00553291: MOV dword ptr [ECX + 0x24],EAX
//   XREF to: 030e56e4 (DATA)
// 00553294: MOV EAX,EDI
// 00553296: IMUL EDX
// 00553298: SHRD EAX,EDX,0x10
// 0055329c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0055329f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005532a2: MOV EAX,dword ptr [ESI + 0x1c]
// 005532a5: ADD EAX,EDX
// 005532a7: MOV dword ptr [ECX + 0x20],EAX
//   XREF to: 030e56e0 (DATA)
// 005532aa: MOV EAX,dword ptr [EBP + 0x20]
// 005532ad: MOV EDX,dword ptr [ESI + 0x20]
// 005532b0: SUB EAX,EDX
// 005532b2: MOV EDX,EAX
// 005532b4: MOV EAX,EBX
// 005532b6: IMUL EDX
// 005532b8: SHRD EAX,EDX,0x10
// 005532bc: MOV EDX,EAX
// 005532be: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 030e56d4 (DATA)
// 005532c1: MOV EAX,EDI
// 005532c3: IMUL EDX
// 005532c5: SHRD EAX,EDX,0x10
// 005532c9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005532cc: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005532cf: MOV EAX,dword ptr [ESI + 0x20]
// 005532d2: ADD EAX,EDX
// 005532d4: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 030e56d0 (DATA)
// 005532d7: MOV EAX,dword ptr [EBP + 0x2c]
// 005532da: MOV EDX,dword ptr [ESI + 0x2c]
// 005532dd: SUB EAX,EDX
// 005532df: MOV EDX,EAX
// 005532e1: MOV EAX,EBX
// 005532e3: IMUL EDX
// 005532e5: SHRD EAX,EDX,0x10
// 005532e9: MOV EDX,EAX
// 005532eb: MOV dword ptr [ECX + 0x34],EAX
//   XREF to: 030e56f4 (DATA)
// 005532ee: MOV EAX,EDI
// 005532f0: IMUL EDX
// 005532f2: SHRD EAX,EDX,0x10
// 005532f6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005532f9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005532fc: MOV EAX,dword ptr [ESI + 0x2c]
// 005532ff: ADD EAX,EDX
// 00553301: MOV dword ptr [ECX + 0x30],EAX
//   XREF to: 030e56f0 (DATA)
// 00553304: CMP dword ptr [0x02d052a4],0x1
//   XREF to: 02d052a4 (READ)
// 0055330b: JNZ 0x005533da
//   XREF to: 005533da (CONDITIONAL_JUMP)
// 00553311: CMP dword ptr [0x02d0529c],0x0
//   XREF to: 02d0529c (READ)
// 00553318: JZ 0x005533cb
//   XREF to: 005533cb (CONDITIONAL_JUMP)
// 0055331e: MOV EAX,0x7fffffff
// 00553323: SUB EAX,dword ptr [ESI + 0x8]
// 00553326: MOV EDX,0x7fffffff
// 0055332b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055332f: SUB EDX,dword ptr [EBP + 0x8]
// 00553332: SUB EDX,dword ptr [ESP + 0x4]
//   Label: LAB_00553332
//   XREF to: Stack[-0x14] (READ)
// 00553336: MOV EAX,EBX
// 00553338: IMUL EDX
// 0055333a: SHRD EAX,EDX,0x10
// 0055333e: MOV EDX,EAX
// 00553340: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e56ec (DATA)
// 00553343: MOV EAX,EDI
// 00553345: IMUL EDX
// 00553347: SHRD EAX,EDX,0x10
// 0055334b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0055334f: ADD EDX,EAX
// 00553351: MOV dword ptr [ECX + 0x28],EDX
//   XREF to: 030e56e8 (DATA)
// 00553354: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_00553354
// 00553357: MOV EDX,dword ptr [ESI + 0x24]
// 0055335a: SUB EAX,EDX
// 0055335c: MOV EDX,EAX
// 0055335e: MOV EAX,EBX
// 00553360: IMUL EDX
// 00553362: SHRD EAX,EDX,0x10
// 00553366: MOV EDX,EAX
// 00553368: MOV dword ptr [ECX + 0x3c],EAX
//   XREF to: 030e56fc (DATA)
// 0055336b: MOV EAX,EDI
// 0055336d: IMUL EDX
// 0055336f: SHRD EAX,EDX,0x10
// 00553373: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00553376: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00553379: MOV EAX,dword ptr [ESI + 0x24]
// 0055337c: ADD EAX,EDX
// 0055337e: MOV dword ptr [ECX + 0x38],EAX
//   XREF to: 030e56f8 (DATA)
// 00553381: MOV EDX,dword ptr [EBP + 0x28]
// 00553384: SUB EDX,dword ptr [ESI + 0x28]
// 00553387: MOV EAX,EBX
// 00553389: IMUL EDX
// 0055338b: SHRD EAX,EDX,0x10
// 0055338f: MOV EDX,EAX
// 00553391: MOV dword ptr [ECX + 0x44],EAX
//   XREF to: 030e5704 (DATA)
// 00553394: MOV EAX,EDI
// 00553396: IMUL EDX
// 00553398: SHRD EAX,EDX,0x10
// 0055339c: MOV EDX,EAX
// 0055339e: MOV EAX,dword ptr [ESI + 0x28]
// 005533a1: ADD EAX,EDX
// 005533a3: MOV EDX,dword ptr [0x030e56bc]
//   XREF to: 030e56bc (READ)
// 005533a9: INC EDX
// 005533aa: MOV dword ptr [ECX + 0x40],EAX
//   XREF to: 030e5700 (DATA)
// 005533ad: MOV dword ptr [0x030e56bc],EDX
//   XREF to: 030e56bc (WRITE)
// 005533b3: ADD ESP,0x8
//   Label: LAB_005533b3
// 005533b6: POP EBP
// 005533b7: POP EDI
// 005533b8: POP ESI
// 005533b9: POP EBX
// 005533ba: RET
// 005533bb: MOV EAX,0xffffffff
//   Label: LAB_005533bb
// 005533c0: XOR EDX,EDX
// 005533c2: DIV EBX
// 005533c4: MOV EBX,EAX
// 005533c6: JMP 0x00553216
//   XREF to: 00553216 (UNCONDITIONAL_JUMP)
// 005533cb: MOV EAX,dword ptr [ESI + 0xc]
//   Label: LAB_005533cb
// 005533ce: MOV EDX,dword ptr [EBP + 0xc]
// 005533d1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005533d5: JMP 0x00553332
//   XREF to: 00553332 (UNCONDITIONAL_JUMP)
// 005533da: MOV EAX,dword ptr [EBP + 0x8]
//   Label: LAB_005533da
// 005533dd: MOV EDX,dword ptr [ESI + 0x8]
// 005533e0: SUB EAX,EDX
// 005533e2: MOV EDX,EAX
// 005533e4: MOV EAX,EBX
// 005533e6: IMUL EDX
// 005533e8: SHRD EAX,EDX,0x10
// 005533ec: MOV EDX,EAX
// 005533ee: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 030e56ec (DATA)
// 005533f1: MOV EAX,EDI
// 005533f3: IMUL EDX
// 005533f5: SHRD EAX,EDX,0x10
// 005533f9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005533fc: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005533ff: MOV EAX,dword ptr [ESI + 0x8]
// 00553402: ADD EAX,EDX
// 00553404: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 030e56e8 (DATA)
// 00553407: JMP 0x00553354
//   XREF to: 00553354 (UNCONDITIONAL_JUMP)
