// Name: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// Address: 004570a0
// Address Range: [[004570a0, 00457427]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube * this_ptr, void * triangle_data, int triangle_count, CVector3f * min_bounds, CVector3f * max_bounds, uchar * ground_types, uint * voxel_data)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494b6f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_d_d_0061a7ba
//   TerminatedCString s_core_dcube_cpp_0061a7cb
//   int g_VertexCount
//   SVertexData[20000] g_LoadedVertices
//   undefined4 DAT_01626410
//   undefined4 g_LoadedVertices[0].vertex.z
//   undefined4 DAT_01626420
//   undefined4 DAT_01626424
//   undefined4 DAT_01626428
//   undefined4 DAT_01626434
//   undefined4 DAT_01626438
//   undefined4 DAT_0162643c
//   undefined4 DAT_01626448
//   undefined4 DAT_0162644c
//   undefined4 DAT_01626450
//   undefined4 DAT_0162645c
//   undefined4 DAT_01626460
//   undefined4 DAT_01626464
//   undefined4 DAT_01626470
//   undefined4 DAT_01626474
//   undefined4 DAT_01626478
//   int g_PolygonCount
//   SShapeEditorPolygon[20000] g_ModelPolygonData
//   undefined4 DAT_016e9914
//   undefined4 DAT_016e9964
//   undefined4 DAT_016e99b4
//   undefined4 DAT_016e99c8
//   undefined4 DAT_016e99cc
//   undefined4 DAT_016e99d0
//   undefined4 DAT_016e9a08
//   undefined4 DAT_016e9a0c
//   undefined4 DAT_016e9a10
//   undefined4 DAT_016e9a48
//   undefined4 DAT_016e9a4c
//   undefined4 DAT_016e9a50
//   undefined4 DAT_016e9a88
//   undefined4 DAT_016e9b4c
//   undefined4 DAT_016e9b50
//   undefined4 DAT_016e9b54
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
//   core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_design.c_calculateVertexNormals_FUN_0045be40
//   shape_design.c_vertexReducer_FUN_00467850

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
          (CDemonCube *this_ptr,void *triangle_data,int triangle_count,CVector3f *min_bounds,
          CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  SVoxelGrid *pSVar10;
  byte bVar11;
  undefined1 *in_stack_0000002c;
  uchar *in_stack_00000030;
  
  bVar11 = 0;
  if (&this_ptr->min_bounds != min_bounds) {
    (this_ptr->min_bounds).x = min_bounds->x;
    (this_ptr->min_bounds).y = min_bounds->y;
    (this_ptr->min_bounds).z = min_bounds->z;
  }
  if (&this_ptr->max_bounds != max_bounds) {
    (this_ptr->max_bounds).x = max_bounds->x;
    (this_ptr->max_bounds).y = max_bounds->y;
    (this_ptr->max_bounds).z = max_bounds->z;
  }
  if (triangle_count != 0) {
    g_VertexCount = triangle_count * 3;
    g_PolygonCount = triangle_count;
    if ((20000 < g_VertexCount) || (20000 < triangle_count)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffffee0,"Too many! %d, %d",g_VertexCount,triangle_count);
      g_CurrentFilename = "..\\core\\dcube.cpp";
      g_CurrentLineNumber = 0x716;
      core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffee4);
    }
    iVar6 = 0;
    if (0 < (int)max_bounds) {
      iVar9 = 0;
      pCVar4 = min_bounds + 1;
      iVar8 = 0;
      iVar5 = 0x14;
      do {
        puVar7 = (undefined4 *)((int)min_bounds + iVar6 * 0x38);
        *(undefined4 *)((int)&g_LoadedVertices[0].vertex.x + iVar9) = *puVar7;
        *(undefined4 *)((int)&g_LoadedVertices[0].vertex.y + iVar9) = puVar7[1];
        *(undefined4 *)((int)&g_LoadedVertices[0].vertex.z + iVar9) = puVar7[2];
        iVar3 = iVar6 * 3;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar5) = pCVar4->x;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar5) = pCVar4->y;
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar5) = pCVar4->z;
        *(float *)((int)&g_LoadedVertices[1].vertex.x + iVar5) = pCVar4[1].x;
        *(float *)((int)&g_LoadedVertices[1].vertex.y + iVar5) = pCVar4[1].y;
        fVar2 = pCVar4[1].z;
        g_ModelPolygonData[0].texture_name[iVar8] = '\0';
        *(undefined4 *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + -0x14) = 3;
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar8 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8) = iVar3;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 4) = iVar3 + 1;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 8) = iVar3 + 2;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_u + iVar8) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_v + iVar8) = 0;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 4) = 0;
        pCVar4 = (CVector3f *)&pCVar4[4].z;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 4) = 0;
        iVar9 = iVar9 + 0x3c;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 8) = 0;
        iVar6 = iVar6 + 1;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 8) = 0;
        *(float *)((int)&g_LoadedVertices[1].vertex.z + iVar5) = fVar2;
        *(undefined4 *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 0x40) = 0;
        g_ModelPolygonData[0].lightmap_name[iVar8] = '\0';
        iVar8 = iVar8 + 0x184;
        iVar5 = iVar5 + 0x3c;
      } while (iVar6 < (int)max_bounds);
    }
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    this_ptr->vertex_count = g_VertexCount;
    iVar6 = g_PolygonCount;
    this_ptr->triangle_count = g_PolygonCount;
    if ((iVar6 == 0) || (this_ptr->vertex_count == 0)) {
      this_ptr->triangle_count = 0;
      this_ptr->vertex_count = 0;
      return;
    }
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar5 = 0;
      iVar8 = 0;
      do {
        iVar6 = iVar6 + 1;
        *(undefined4 *)((int)&this_ptr->vertex_buffer->x + iVar8) =
             *(undefined4 *)((int)&g_LoadedVertices[0].vertex.x + iVar5);
        *(undefined4 *)((int)&this_ptr->vertex_buffer->y + iVar8) =
             *(undefined4 *)((int)&g_LoadedVertices[0].vertex.y + iVar5);
        *(undefined4 *)((int)&this_ptr->vertex_buffer->z + iVar8) =
             *(undefined4 *)((int)&g_LoadedVertices[0].vertex.z + iVar5);
        iVar5 = iVar5 + 0x14;
        iVar8 = iVar8 + 0xc;
      } while (iVar6 < this_ptr->vertex_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->triangle_count) {
      iVar8 = 0;
      iVar5 = 0;
      do {
        pCVar4 = this_ptr->vertex_buffer;
        core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430
                  ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar8),
                   pCVar4 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5),
                   pCVar4 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + 4),
                   pCVar4 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + 8));
        iVar5 = iVar5 + 0x184;
        iVar8 = iVar8 + 0x20;
        *(undefined1 *)((int)this_ptr->ground_type_memory + iVar6) = *in_stack_0000002c;
        iVar6 = iVar6 + 1;
        in_stack_0000002c = in_stack_0000002c + 1;
      } while (iVar6 < this_ptr->triangle_count);
    }
    pSVar10 = this_ptr->voxel_buffer1;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar10->voxels[0] = *(undefined4 *)in_stack_00000030;
      in_stack_00000030 = in_stack_00000030 + ((uint)bVar11 * -2 + 1) * 4;
      pSVar10 = (SVoxelGrid *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar10->voxels[0][0] = *in_stack_00000030;
      in_stack_00000030 = in_stack_00000030 + (uint)bVar11 * -2 + 1;
      pSVar10 = (SVoxelGrid *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
    }
  }
  return;
}


// Assembly code:
// 004570a0: PUSH EBX
//   Label: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// 004570a1: PUSH ESI
// 004570a2: PUSH EDI
// 004570a3: PUSH EBP
// 004570a4: SUB ESP,0x110
// 004570aa: MOV ESI,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x4] (READ)
// 004570b1: MOV EDX,dword ptr [ESP + 0x130]
//   XREF to: Stack[0x10] (READ)
// 004570b8: MOV ECX,dword ptr [ESP + 0x134]
//   XREF to: Stack[0x14] (READ)
// 004570bf: LEA EAX,[ESI + 0x8]
// 004570c2: CMP EAX,EDX
// 004570c4: JNZ 0x004573e9
//   XREF to: 004573e9 (CONDITIONAL_JUMP)
// 004570ca: LEA EAX,[ESI + 0x14]
//   Label: LAB_004570ca
// 004570cd: CMP EAX,ECX
// 004570cf: JZ 0x004570e1
//   XREF to: 004570e1 (CONDITIONAL_JUMP)
// 004570d1: MOV EDX,dword ptr [ECX]
// 004570d3: MOV dword ptr [EAX],EDX
// 004570d5: MOV EDX,dword ptr [ECX + 0x4]
// 004570d8: MOV dword ptr [EAX + 0x4],EDX
// 004570db: MOV EDX,dword ptr [ECX + 0x8]
// 004570de: MOV dword ptr [EAX + 0x8],EDX
// 004570e1: MOV EDX,dword ptr [ESP + 0x12c]
//   Label: LAB_004570e1
//   XREF to: Stack[0xc] (READ)
// 004570e8: TEST EDX,EDX
// 004570ea: JZ 0x004573de
//   XREF to: 004573de (CONDITIONAL_JUMP)
// 004570f0: LEA EAX,[EDX*0x4 + 0x0]
// 004570f7: SUB EAX,EDX
// 004570f9: MOV dword ptr [0x016e990c],EDX
//   XREF to: 016e990c (WRITE)
// 004570ff: MOV [0x01626408],EAX
//   XREF to: 01626408 (WRITE)
// 00457104: CMP EAX,0x4e20
// 00457109: JLE 0x004573fe
//   XREF to: 004573fe (CONDITIONAL_JUMP)
// 0045710f: MOV EDI,dword ptr [0x016e990c]
//   Label: LAB_0045710f
//   XREF to: 016e990c (READ)
// 00457115: PUSH EDI
// 00457116: MOV EBP,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 0045711c: PUSH EBP
// 0045711d: PUSH 0x61a7ba
//   XREF to: 0061a7ba (DATA)
// 00457122: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x120] (DATA)
// 00457126: PUSH EAX
// 00457127: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045712c: MOV EAX,0x61a7cb
//   XREF to: 0061a7cb (DATA)
// 00457131: ADD ESP,0x10
// 00457134: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00457139: MOV EAX,ESP
// 0045713b: MOV EDX,0x716
// 00457140: PUSH EAX
// 00457141: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00457147: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0045714c: ADD ESP,0x4
// 0045714f: MOV ECX,dword ptr [ESP + 0x12c]
//   Label: LAB_0045714f
//   XREF to: Stack[0xc] (READ)
// 00457156: XOR EBX,EBX
// 00457158: TEST ECX,ECX
// 0045715a: JLE 0x004572a0
//   XREF to: 004572a0 (CONDITIONAL_JUMP)
// 00457160: MOV EDX,0x14
// 00457165: MOV ECX,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x8] (READ)
// 0045716c: XOR EAX,EAX
// 0045716e: XOR EDI,EDI
// 00457170: ADD ECX,0xc
// 00457173: IMUL EBP,EBX,0x38
//   Label: LAB_00457173
// 00457176: MOV dword ptr [ESP + 0x104],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 0045717d: MOV EBP,dword ptr [ESP + 0x128]
//   XREF to: Stack[0x8] (READ)
// 00457184: ADD EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 0045718b: ADD EAX,0x184
// 00457190: FLD float ptr [EBP]
// 00457193: FSTP float ptr [EDI + 0x162640c]
//   XREF to: 0162640c (WRITE)
//   XREF to: 01626448 (WRITE)
// 00457199: FLD float ptr [EBP + 0x4]
// 0045719c: FSTP float ptr [EDI + 0x1626410]
//   XREF to: 01626410 (WRITE)
//   XREF to: 0162644c (WRITE)
// 004571a2: FLD float ptr [EBP + 0x8]
// 004571a5: FSTP float ptr [EDI + 0x1626414]
//   XREF to: 01626414 (WRITE)
//   XREF to: 01626450 (WRITE)
// 004571ab: LEA EBP,[EBX + EBX*0x2]
// 004571ae: FLD float ptr [ECX]
// 004571b0: FSTP float ptr [EDX + 0x162640c]
//   XREF to: 01626420 (WRITE)
//   XREF to: 0162645c (WRITE)
// 004571b6: MOV dword ptr [ESP + 0x104],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 004571bd: FLD float ptr [ECX + 0x4]
// 004571c0: FSTP float ptr [EDX + 0x1626410]
//   XREF to: 01626424 (WRITE)
//   XREF to: 01626460 (WRITE)
// 004571c6: INC EBP
// 004571c7: FLD float ptr [ECX + 0x8]
// 004571ca: FSTP float ptr [EDX + 0x1626414]
//   XREF to: 01626428 (WRITE)
//   XREF to: 01626464 (WRITE)
// 004571d0: MOV dword ptr [ESP + 0x108],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 004571d7: MOV EBP,dword ptr [ECX + 0xc]
// 004571da: MOV dword ptr [EDX + 0x1626420],EBP
//   XREF to: 01626434 (WRITE)
//   XREF to: 01626470 (WRITE)
// 004571e0: MOV EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 004571e7: FLD float ptr [ECX + 0x10]
// 004571ea: FSTP float ptr [EDX + 0x1626424]
//   XREF to: 01626438 (WRITE)
//   XREF to: 01626474 (WRITE)
// 004571f0: ADD EBP,0x2
// 004571f3: FLD float ptr [ECX + 0x14]
// 004571f6: MOV dword ptr [ESP + 0x10c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004571fd: MOV byte ptr [EAX + 0x16e9790],0x0
//   XREF to: 016e9914 (WRITE)
// 00457204: MOV dword ptr [EAX + 0x16e9830],0x3
//   XREF to: 016e99b4 (WRITE)
// 0045720e: MOV dword ptr [EAX + 0x16e978c],0x1
//   XREF to: 016e9910 (WRITE)
// 00457218: MOV EBP,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x1c] (READ)
// 0045721f: MOV dword ptr [EAX + 0x16e9844],EBP
//   XREF to: 016e99c8 (WRITE)
// 00457225: MOV EBP,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x18] (READ)
// 0045722c: MOV dword ptr [EAX + 0x16e9848],EBP
//   XREF to: 016e99cc (WRITE)
// 00457232: MOV EBP,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x14] (READ)
// 00457239: MOV dword ptr [EAX + 0x16e984c],EBP
//   XREF to: 016e99d0 (WRITE)
// 0045723f: XOR EBP,EBP
// 00457241: MOV dword ptr [EAX + 0x16e9884],EBP
//   XREF to: 016e9a08 (WRITE)
// 00457247: MOV dword ptr [EAX + 0x16e98c4],EBP
//   XREF to: 016e9a48 (WRITE)
// 0045724d: ADD EDX,0x3c
// 00457250: MOV dword ptr [EAX + 0x16e9888],EBP
//   XREF to: 016e9a0c (WRITE)
// 00457256: ADD ECX,0x38
// 00457259: MOV dword ptr [EAX + 0x16e98c8],EBP
//   XREF to: 016e9a4c (WRITE)
// 0045725f: ADD EDI,0x3c
// 00457262: MOV dword ptr [EAX + 0x16e988c],EBP
//   XREF to: 016e9a10 (WRITE)
// 00457268: INC EBX
// 00457269: MOV dword ptr [EAX + 0x16e98cc],EBP
//   XREF to: 016e9a50 (WRITE)
// 0045726f: FSTP float ptr [EDX + 0x16263ec]
//   XREF to: 0162643c (WRITE)
//   XREF to: 01626478 (WRITE)
// 00457275: MOV dword ptr [EAX + 0x16e9904],EBP
//   XREF to: 016e9a88 (WRITE)
// 0045727b: MOV EBP,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0xc] (READ)
// 00457282: MOV byte ptr [EAX + 0x16e97e0],0x0
//   XREF to: 016e9964 (WRITE)
// 00457289: CMP EBX,EBP
// 0045728b: JL 0x00457173
//   XREF to: 00457173 (CONDITIONAL_JUMP)
// 00457291: LEA EAX,[EAX]
// 00457297: LEA EDX,[EDX]
// 0045729d: LEA EAX,[EAX]
// 004572a0: CALL shape_design.c_calculateVertexNormals_FUN_0045be40
//   Label: LAB_004572a0
//   XREF to: 0045be40 (UNCONDITIONAL_CALL)
// 004572a5: PUSH -0x1
// 004572a7: PUSH 0xbf800000
// 004572ac: PUSH 0x3c23d70a
// 004572b1: CALL shape_design.c_vertexReducer_FUN_00467850
//   XREF to: 00467850 (UNCONDITIONAL_CALL)
// 004572b6: MOV EAX,[0x01626408]
//   XREF to: 01626408 (READ)
// 004572bb: MOV dword ptr [ESI + 0x20],EAX
// 004572be: MOV EAX,[0x016e990c]
//   XREF to: 016e990c (READ)
// 004572c3: ADD ESP,0xc
// 004572c6: MOV dword ptr [ESI + 0x28],EAX
// 004572c9: TEST EAX,EAX
// 004572cb: JZ 0x0045740f
//   XREF to: 0045740f (CONDITIONAL_JUMP)
// 004572d1: CMP dword ptr [ESI + 0x20],0x0
// 004572d5: JZ 0x0045740f
//   XREF to: 0045740f (CONDITIONAL_JUMP)
// 004572db: PUSH ESI
// 004572dc: CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
//   XREF to: 00456840 (UNCONDITIONAL_CALL)
// 004572e1: ADD ESP,0x4
// 004572e4: MOV EBX,dword ptr [ESI + 0x20]
// 004572e7: XOR ECX,ECX
// 004572e9: TEST EBX,EBX
// 004572eb: JLE 0x00457330
//   XREF to: 00457330 (CONDITIONAL_JUMP)
// 004572ed: XOR EDX,EDX
// 004572ef: XOR EAX,EAX
// 004572f1: ADD EAX,0xc
//   Label: LAB_004572f1
// 004572f4: MOV EBX,dword ptr [ESI + 0x24]
// 004572f7: FLD float ptr [EDX + 0x162640c]
//   XREF to: 0162640c (READ)
//   XREF to: 01626420 (READ)
// 004572fd: INC ECX
// 004572fe: FSTP float ptr [EBX + EAX*0x1 + -0xc]
// 00457302: MOV EBX,dword ptr [ESI + 0x24]
// 00457305: MOV EDI,dword ptr [EDX + 0x1626410]
//   XREF to: 01626410 (READ)
//   XREF to: 01626424 (READ)
// 0045730b: MOV dword ptr [EBX + EAX*0x1 + -0x8],EDI
// 0045730f: MOV EBX,dword ptr [ESI + 0x24]
// 00457312: MOV EDI,dword ptr [EDX + 0x1626414]
//   XREF to: 01626414 (READ)
//   XREF to: 01626428 (READ)
// 00457318: MOV dword ptr [EBX + EAX*0x1 + -0x4],EDI
// 0045731c: MOV EDI,dword ptr [ESI + 0x20]
// 0045731f: ADD EDX,0x14
// 00457322: CMP ECX,EDI
// 00457324: JL 0x004572f1
//   XREF to: 004572f1 (CONDITIONAL_JUMP)
// 00457326: LEA EAX,[EAX]
// 0045732c: LEA EDX,[EDX]
// 00457330: MOV EBP,dword ptr [ESI + 0x28]
//   Label: LAB_00457330
// 00457333: XOR EBX,EBX
// 00457335: TEST EBP,EBP
// 00457337: JLE 0x004573c0
//   XREF to: 004573c0 (CONDITIONAL_JUMP)
// 0045733d: MOV EAX,dword ptr [ESP + 0x138]
//   XREF to: Stack[0x18] (READ)
// 00457344: XOR EBP,EBP
// 00457346: XOR EDI,EDI
// 00457348: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045734f: IMUL EDX,dword ptr [EDI + 0x16e99d0],0xc
//   Label: LAB_0045734f
//   XREF to: 016e99d0 (READ)
//   XREF to: 016e9b54 (READ)
// 00457356: MOV EAX,dword ptr [ESI + 0x24]
// 00457359: ADD EDX,EAX
// 0045735b: MOV ECX,dword ptr [EDI + 0x16e99cc]
//   XREF to: 016e99cc (READ)
//   XREF to: 016e9b50 (READ)
// 00457361: PUSH EDX
// 00457362: IMUL EDX,ECX,0xc
// 00457365: ADD EDX,EAX
// 00457367: MOV ECX,dword ptr [EDI + 0x16e99c8]
//   XREF to: 016e99c8 (READ)
//   XREF to: 016e9b4c (READ)
// 0045736d: PUSH EDX
// 0045736e: IMUL EDX,ECX,0xc
// 00457371: ADD EAX,EDX
// 00457373: PUSH EAX
// 00457374: MOV EAX,dword ptr [ESI + 0x2c]
// 00457377: ADD EAX,EBP
// 00457379: PUSH EAX
// 0045737a: CALL core_dcube.cpp_CDemonCubeTriangle_ctor_FUN_00455430
//   XREF to: 00455430 (UNCONDITIONAL_CALL)
// 0045737f: MOV EAX,dword ptr [ESI + 0x30]
// 00457382: ADD ESP,0x10
// 00457385: LEA EDX,[EAX + EBX*0x1]
// 00457388: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x20] (READ)
// 0045738f: ADD EDI,0x184
// 00457395: MOV AL,byte ptr [EAX]
// 00457397: ADD EBP,0x20
// 0045739a: MOV byte ptr [EDX],AL
// 0045739c: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x20] (READ)
// 004573a3: INC EBX
// 004573a4: INC EAX
// 004573a5: MOV EDX,dword ptr [ESI + 0x28]
// 004573a8: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004573af: CMP EBX,EDX
// 004573b1: JL 0x0045734f
//   XREF to: 0045734f (CONDITIONAL_JUMP)
// 004573b3: LEA EAX,[EAX]
// 004573b9: LEA EDX,[EDX]
// 004573bf: NOP
// 004573c0: MOV ECX,0x40
//   Label: LAB_004573c0
// 004573c5: MOV EDI,dword ptr [ESI]
// 004573c7: MOV ESI,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x1c] (READ)
// 004573ce: PUSH EDI
// 004573cf: MOV EAX,ECX
// 004573d1: SHR ECX,0x2
// 004573d4: MOVSD.REP ES:EDI,ESI
// 004573d6: MOV CL,AL
// 004573d8: AND CL,0x3
// 004573db: MOVSB.REP ES:EDI,ESI
// 004573dd: POP EDI
// 004573de: ADD ESP,0x110
//   Label: LAB_004573de
// 004573e4: POP EBP
// 004573e5: POP EDI
// 004573e6: POP ESI
// 004573e7: POP EBX
// 004573e8: RET
// 004573e9: MOV EBX,dword ptr [EDX]
//   Label: LAB_004573e9
// 004573eb: MOV dword ptr [EAX],EBX
// 004573ed: MOV EBX,dword ptr [EDX + 0x4]
// 004573f0: MOV dword ptr [EAX + 0x4],EBX
// 004573f3: MOV EBX,dword ptr [EDX + 0x8]
// 004573f6: MOV dword ptr [EAX + 0x8],EBX
// 004573f9: JMP 0x004570ca
//   XREF to: 004570ca (UNCONDITIONAL_JUMP)
// 004573fe: CMP EDX,0x4e20
//   Label: LAB_004573fe
// 00457404: JG 0x0045710f
//   XREF to: 0045710f (CONDITIONAL_JUMP)
// 0045740a: JMP 0x0045714f
//   XREF to: 0045714f (UNCONDITIONAL_JUMP)
// 0045740f: MOV dword ptr [ESI + 0x28],0x0
//   Label: LAB_0045740f
// 00457416: MOV dword ptr [ESI + 0x20],0x0
// 0045741d: ADD ESP,0x110
// 00457423: POP EBP
// 00457424: POP EDI
// 00457425: POP ESI
// 00457426: POP EBX
// 00457427: RET
