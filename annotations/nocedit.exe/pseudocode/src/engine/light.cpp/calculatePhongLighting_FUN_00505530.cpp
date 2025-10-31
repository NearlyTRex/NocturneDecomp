// Name: engine_light.cpp_calculatePhongLighting_FUN_00505530
// Address: 00505530
// Address Range: [[00505530, 00505770]]
// Convention: __cdecl
// Signature: int engine_light.cpp_calculatePhongLighting_FUN_00505530(int world_x, int world_y, int world_z)
// Cross-references:
//   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850 (00505850) at 00505860 [UNCONDITIONAL_CALL]
//   engine_light.cpp_calculateVertexLighting_FUN_00505830 (00505830) at 00505840 [UNCONDITIONAL_CALL]
//   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 (0045d5d0) at 0045d74e [UNCONDITIONAL_CALL]
// Globals:
//   int g_AmbientLightLevel = 0x8000
//   int g_SpecularEnabled = 0x1
//   int g_DiffuseLightMultiplier = 0x10000
//   int g_SpecularLightMultiplier = 0x10000
//   int g_RelativeX
//   int g_RelativeY
//   int g_RelativeZ
//   int g_LightDirectionX
//   int g_LightDirectionY
//   int g_LightDirectionZ
//   CVector3i g_CachedViewPosition
//   undefined4 g_CachedViewPosition.y
//   undefined4 g_CachedViewPosition.z
//   CVector3i g_NormalizedViewVector
//   undefined4 g_NormalizedViewVector.y
//   undefined4 g_NormalizedViewVector.z
// Function calls:
//   engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0

#include "nocturne.h"

int __cdecl
engine_light_cpp_calculatePhongLighting_FUN_00505530(int world_x,int world_y,int world_z)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  byte bVar6;
  int aiStackY_1008 [1016];
  int iStack_20;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  iVar3 = ((uint)((longlong)world_x * (longlong)g_LightDirectionX) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)g_LightDirectionX) >> 0x20) << 0x10) +
          ((uint)((longlong)world_y * (longlong)g_LightDirectionY) >> 0x10 |
          (int)((ulonglong)((longlong)world_y * (longlong)g_LightDirectionY) >> 0x20) << 0x10) +
          ((uint)((longlong)world_z * (longlong)g_LightDirectionZ) >> 0x10 |
          (int)((ulonglong)((longlong)world_z * (longlong)g_LightDirectionZ) >> 0x20) << 0x10);
  iVar4 = -iVar3;
  if (iVar3 < 1) {
    if (iVar3 != -0xffff && 0xfffe < iVar4) {
      iVar4 = 0xffff;
    }
  }
  else {
    iVar4 = 0;
  }
  lVar1 = (longlong)iVar4 * (longlong)(0xffff - g_AmbientLightLevel);
  uVar5 = g_AmbientLightLevel + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xffff < (int)uVar5) {
    uVar5 = 0xffff;
  }
  if (g_SpecularEnabled == 0) {
    uVar5 = (uint)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x10 |
            (int)((ulonglong)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x20) <<
            0x10;
    goto LAB_005056f8;
  }
  iVar4 = ((uint)((longlong)world_x * (longlong)iVar3) >> 0x10 |
          (int)((ulonglong)((longlong)world_x * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
          g_LightDirectionX;
  local_18 = ((uint)((longlong)world_y * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_y * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_LightDirectionY;
  local_14 = ((uint)((longlong)world_z * (longlong)iVar3) >> 0x10 |
             (int)((ulonglong)((longlong)world_z * (longlong)iVar3) >> 0x20) << 0x10) * 2 -
             g_LightDirectionZ;
  if (((g_CachedViewPosition.x != g_RelativeX) || (g_CachedViewPosition.y != g_RelativeY)) ||
     (g_CachedViewPosition.z != g_RelativeZ)) {
    g_CachedViewPosition.x = g_RelativeX;
    g_CachedViewPosition.y = g_RelativeY;
    g_CachedViewPosition.z = g_RelativeZ;
    engine_matrix_c_normalizeVector3DFloat_FUN_0050d9f0(&g_CachedViewPosition);
    g_NormalizedViewVector.x = iStack_20;
    *(undefined4 *)((int)&g_NormalizedViewVector + (uint)bVar6 * -8 + 4) =
         *(undefined4 *)(&stack0xffffffe4 + (uint)bVar6 * -8);
    *(undefined4 *)((uint)bVar6 * -8 + 0x2dd30b4 + (uint)bVar6 * -8) =
         *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  }
  lVar1 = (longlong)iVar4 * (longlong)g_NormalizedViewVector.x;
  iVar3 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
          ((uint)((longlong)local_14 * (longlong)g_NormalizedViewVector.y) >> 0x10 |
          (int)((ulonglong)((longlong)local_14 * (longlong)g_NormalizedViewVector.y) >> 0x20) <<
          0x10) + ((uint)((longlong)unaff_EBP * (longlong)g_NormalizedViewVector.z) >> 0x10 |
                  (int)((ulonglong)((longlong)unaff_EBP * (longlong)g_NormalizedViewVector.z) >>
                       0x20) << 0x10);
  iVar4 = -iVar3;
  if (0 < iVar3) goto LAB_005056f8;
  if (iVar3 == -0xffff || iVar4 < 0xffff) {
    if (iVar3 != -48000 && 47999 < iVar4) goto LAB_005056ad;
    uVar2 = 0;
  }
  else {
    iVar4 = 0xffff;
LAB_005056ad:
    uVar2 = (uint)((longlong)iVar4 * (longlong)iVar4) >> 0x10 |
            (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar2 * (longlong)(int)uVar2;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  }
  uVar5 = ((uint)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x10 |
          (int)((ulonglong)((longlong)g_DiffuseLightMultiplier * (longlong)(int)uVar5) >> 0x20) <<
          0x10) + ((uint)((longlong)g_SpecularLightMultiplier * (longlong)(int)uVar2) >> 0x10 |
                  (int)((ulonglong)((longlong)g_SpecularLightMultiplier * (longlong)(int)uVar2) >>
                       0x20) << 0x10);
LAB_005056f8:
  return ((int)((uVar5 + ((int)uVar5 >> 0x1f) * -0x10) - (uint)(((int)uVar5 >> 0x1f) << 3 < 0)) >> 4
         ) + 0x100;
}


// Assembly code:
// 00505530: PUSH EBX
//   Label: engine_light.cpp_calculatePhongLighting_FUN_00505530
// 00505531: PUSH ESI
// 00505532: PUSH EDI
// 00505533: PUSH EBP
// 00505534: SUB ESP,0x14
// 00505537: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0050553b: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0050553f: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 00505545: MOV EAX,ESI
// 00505547: IMUL EDX
// 00505549: SHRD EAX,EDX,0x10
// 0050554d: MOV EDX,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 00505553: MOV ECX,EAX
// 00505555: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00505559: IMUL EDX
// 0050555b: SHRD EAX,EDX,0x10
// 0050555f: MOV EDX,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 00505565: ADD ECX,EAX
// 00505567: MOV EAX,EDI
// 00505569: IMUL EDX
// 0050556b: SHRD EAX,EDX,0x10
// 0050556f: LEA EBX,[ECX + EAX*0x1]
// 00505572: MOV ECX,EBX
// 00505574: NEG EBX
// 00505576: TEST EBX,EBX
// 00505578: JL 0x00505712
//   XREF to: 00505712 (CONDITIONAL_JUMP)
// 0050557e: CMP EBX,0xffff
// 00505584: JLE 0x0050558b
//   XREF to: 0050558b (CONDITIONAL_JUMP)
// 00505586: MOV EBX,0xffff
// 0050558b: MOV EDX,0xffff
//   Label: LAB_0050558b
// 00505590: MOV EBP,dword ptr [0x0067cfc8]
//   XREF to: 0067cfc8 (READ)
// 00505596: MOV EAX,EBX
// 00505598: SUB EDX,EBP
// 0050559a: IMUL EDX
// 0050559c: SHRD EAX,EDX,0x10
// 005055a0: MOV EBX,dword ptr [0x0067cfc8]
//   XREF to: 0067cfc8 (READ)
// 005055a6: ADD EBX,EAX
// 005055a8: TEST EBX,EBX
// 005055aa: JL 0x00505719
//   XREF to: 00505719 (CONDITIONAL_JUMP)
// 005055b0: CMP EBX,0xffff
// 005055b6: JLE 0x005055bd
//   XREF to: 005055bd (CONDITIONAL_JUMP)
// 005055b8: MOV EBX,0xffff
// 005055bd: CMP dword ptr [0x0067cfcc],0x0
//   Label: LAB_005055bd
//   XREF to: 0067cfcc (READ)
// 005055c4: JZ 0x00505720
//   XREF to: 00505720 (CONDITIONAL_JUMP)
// 005055ca: MOV EAX,ESI
// 005055cc: MOV EDX,ECX
// 005055ce: IMUL EDX
// 005055d0: SHRD EAX,EDX,0x10
// 005055d4: LEA EBP,[EAX + EAX*0x1]
// 005055d7: MOV EDX,dword ptr [0x02d052dc]
//   XREF to: 02d052dc (READ)
// 005055dd: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005055e1: SUB EBP,EDX
// 005055e3: MOV EDX,ECX
// 005055e5: IMUL EDX
// 005055e7: SHRD EAX,EDX,0x10
// 005055eb: MOV ESI,dword ptr [0x02d052e0]
//   XREF to: 02d052e0 (READ)
// 005055f1: ADD EAX,EAX
// 005055f3: SUB EAX,ESI
// 005055f5: MOV EDX,ECX
// 005055f7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005055fb: MOV EAX,EDI
// 005055fd: IMUL EDX
// 005055ff: SHRD EAX,EDX,0x10
// 00505603: MOV EDI,dword ptr [0x02d052e4]
//   XREF to: 02d052e4 (READ)
// 00505609: ADD EAX,EAX
// 0050560b: SUB EAX,EDI
// 0050560d: MOV EDX,dword ptr [0x02dd30a0]
//   XREF to: 02dd30a0 (READ)
// 00505613: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00505617: CMP EDX,dword ptr [0x02d052b8]
//   XREF to: 02d052b8 (READ)
// 0050561d: JZ 0x00505731
//   XREF to: 00505731 (CONDITIONAL_JUMP)
// 00505623: MOV EAX,[0x02d052b8]
//   Label: LAB_00505623
//   XREF to: 02d052b8 (READ)
// 00505628: PUSH 0x2dd30a0
//   XREF to: 02dd30a0 (DATA)
// 0050562d: MOV [0x02dd30a0],EAX
//   XREF to: 02dd30a0 (WRITE)
// 00505632: MOV EAX,[0x02d052bc]
//   XREF to: 02d052bc (READ)
// 00505637: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 0050563b: MOV [0x02dd30a4],EAX
//   XREF to: 02dd30a4 (WRITE)
// 00505640: MOV EAX,[0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 00505645: MOV EDI,0x2dd30ac
//   XREF to: 02dd30ac (DATA)
// 0050564a: MOV [0x02dd30a8],EAX
//   XREF to: 02dd30a8 (WRITE)
// 0050564f: CALL engine_matrix.c_normalizeVector3DFloat_FUN_0050d9f0
//   XREF to: 0050d9f0 (UNCONDITIONAL_CALL)
// 00505654: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 00505658: ADD ESP,0x4
// 0050565b: MOVSD ES:EDI,ESI
//   XREF to: 02dd30ac (WRITE)
// 0050565c: MOVSD ES:EDI,ESI
//   XREF to: 02dd30b0 (WRITE)
// 0050565d: MOVSD ES:EDI,ESI
//   XREF to: 02dd30b4 (WRITE)
// 0050565e: MOV EDX,dword ptr [0x02dd30ac]
//   Label: LAB_0050565e
//   XREF to: 02dd30ac (READ)
// 00505664: MOV EAX,EBP
// 00505666: IMUL EDX
// 00505668: SHRD EAX,EDX,0x10
// 0050566c: MOV EDX,dword ptr [0x02dd30b0]
//   XREF to: 02dd30b0 (READ)
// 00505672: MOV ECX,EAX
// 00505674: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 00505678: IMUL EDX
// 0050567a: SHRD EAX,EDX,0x10
// 0050567e: MOV EDX,dword ptr [0x02dd30b4]
//   XREF to: 02dd30b4 (READ)
// 00505684: ADD ECX,EAX
// 00505686: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 0050568a: IMUL EDX
// 0050568c: SHRD EAX,EDX,0x10
// 00505690: ADD ECX,EAX
// 00505692: NEG ECX
// 00505694: TEST ECX,ECX
// 00505696: JL 0x0050575a
//   XREF to: 0050575a (CONDITIONAL_JUMP)
// 0050569c: CMP ECX,0xffff
// 005056a2: JLE 0x0050575e
//   XREF to: 0050575e (CONDITIONAL_JUMP)
// 005056a8: MOV ECX,0xffff
// 005056ad: MOV EAX,ECX
//   Label: LAB_005056ad
// 005056af: MOV EDX,ECX
// 005056b1: IMUL EDX
// 005056b3: SHRD EAX,EDX,0x10
// 005056b7: MOV EDX,EAX
// 005056b9: IMUL EDX
// 005056bb: SHRD EAX,EDX,0x10
// 005056bf: MOV EDX,EAX
// 005056c1: IMUL EDX
// 005056c3: SHRD EAX,EDX,0x10
// 005056c7: MOV EDX,EAX
// 005056c9: IMUL EDX
// 005056cb: SHRD EAX,EDX,0x10
// 005056cf: MOV EDX,EAX
// 005056d1: IMUL EDX
// 005056d3: SHRD EAX,EDX,0x10
// 005056d7: MOV ECX,EAX
// 005056d9: MOV EAX,[0x0067cfd0]
//   Label: LAB_005056d9
//   XREF to: 0067cfd0 (READ)
// 005056de: MOV EDX,EBX
// 005056e0: IMUL EDX
// 005056e2: SHRD EAX,EDX,0x10
// 005056e6: MOV EBX,EAX
// 005056e8: MOV EDX,ECX
// 005056ea: MOV EAX,[0x0067cfd4]
//   XREF to: 0067cfd4 (READ)
// 005056ef: IMUL EDX
// 005056f1: SHRD EAX,EDX,0x10
// 005056f5: LEA EDX,[EBX + EAX*0x1]
// 005056f8: MOV EAX,EDX
//   Label: LAB_005056f8
// 005056fa: SAR EDX,0x1f
// 005056fd: SHL EDX,0x4
// 00505700: SBB EAX,EDX
// 00505702: SAR EAX,0x4
// 00505705: ADD EAX,0x100
// 0050570a: ADD ESP,0x14
// 0050570d: POP EBP
// 0050570e: POP EDI
// 0050570f: POP ESI
// 00505710: POP EBX
// 00505711: RET
// 00505712: XOR EBX,EBX
//   Label: LAB_00505712
// 00505714: JMP 0x0050558b
//   XREF to: 0050558b (UNCONDITIONAL_JUMP)
// 00505719: XOR EBX,EBX
//   Label: LAB_00505719
// 0050571b: JMP 0x005055bd
//   XREF to: 005055bd (UNCONDITIONAL_JUMP)
// 00505720: MOV EAX,[0x0067cfd0]
//   Label: LAB_00505720
//   XREF to: 0067cfd0 (READ)
// 00505725: MOV EDX,EBX
// 00505727: IMUL EDX
// 00505729: SHRD EAX,EDX,0x10
// 0050572d: MOV EDX,EAX
// 0050572f: JMP 0x005056f8
//   XREF to: 005056f8 (UNCONDITIONAL_JUMP)
// 00505731: MOV ECX,dword ptr [0x02dd30a4]
//   Label: LAB_00505731
//   XREF to: 02dd30a4 (READ)
// 00505737: CMP ECX,dword ptr [0x02d052bc]
//   XREF to: 02d052bc (READ)
// 0050573d: JNZ 0x00505623
//   XREF to: 00505623 (CONDITIONAL_JUMP)
// 00505743: MOV ESI,dword ptr [0x02dd30a8]
//   XREF to: 02dd30a8 (READ)
// 00505749: CMP ESI,dword ptr [0x02d052c0]
//   XREF to: 02d052c0 (READ)
// 0050574f: JNZ 0x00505623
//   XREF to: 00505623 (CONDITIONAL_JUMP)
// 00505755: JMP 0x0050565e
//   XREF to: 0050565e (UNCONDITIONAL_JUMP)
// 0050575a: MOV EDX,EBX
//   Label: LAB_0050575a
// 0050575c: JMP 0x005056f8
//   XREF to: 005056f8 (UNCONDITIONAL_JUMP)
// 0050575e: CMP ECX,0xbb80
//   Label: LAB_0050575e
// 00505764: JG 0x005056ad
//   XREF to: 005056ad (CONDITIONAL_JUMP)
// 0050576a: XOR ECX,ECX
// 0050576c: JMP 0x005056d9
//   XREF to: 005056d9 (UNCONDITIONAL_JUMP)
