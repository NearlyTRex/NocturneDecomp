// Name: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
// Address: 0056db80
// Address Range: [[0056db80, 0056dda4]]
// Convention: __cdecl
// Signature: int core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cbde [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 (0056ddb0) at 0056e045 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dfd62 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonCamera g_CDemonCameraInstance
//   int g_DynamicLightCount
//   CDemonLight*[4] g_DynamicLights
//   undefined4 DAT_032776bc
//   int g_SecondaryDirectionalLightCount
//   CDemonLight*[32] g_SecondaryDirectionalLights
//   undefined4 DAT_032c161c
//   int g_PrimaryDirectionalLightCount
//   CDemonLight* g_PrimaryDirectionalLights
//   undefined4 DAT_032c17a0
//   int g_GlobeLightCount
//   CDemonGlobe* g_GlobeLights
//   undefined4 DAT_032c17b4
//   int g_LightingSystemDirty
//   undefined4 DAT_032c1c68
//   undefined4 DAT_032c1c74
//   undefined4 DAT_032c1c80
//   undefined4 DAT_032c1c8c
//   undefined4 DAT_032c1c98
// Function calls:
//   core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
//   core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
//   core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
//   core_mirror.cpp_transformMirrorVertex_FUN_005229b0
//   core_set.cpp_CDemonSet_FUN_0056d4a0

#include "nocturne.h"

int __cdecl
core_set_cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
          (CDemonSet *this_ptr,CVector3i *world_position,CVector3i *surface_normal)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int unaff_EDI;
  int iVar5;
  byte bVar6;
  SMirrorReflection *in_stack_00000010;
  int aiStackY_102c [1011];
  CDemonLight *in_stack_ffffffbc;
  CVector3i *in_stack_ffffffc0;
  CVector3i local_3c;
  int local_30 [5];
  undefined4 uStack_1c;
  int local_14;
  CVector3i *pCVar7;
  
  bVar6 = 0;
  if (g_LightingSystemDirty != 0) {
    core_set_cpp_CDemonSet_FUN_0056d4a0(this_ptr);
    g_LightingSystemDirty = 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < g_PrimaryDirectionalLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)((int)&g_PrimaryDirectionalLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                        (&g_CDemonCameraInstance,surface_normal,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_PrimaryDirectionalLightCount);
  }
  iVar4 = 0;
  if (0 < g_SecondaryDirectionalLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)((int)g_SecondaryDirectionalLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                        (&g_CDemonCameraInstance,surface_normal,(CDemonLight *)*puVar1,
                         surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_SecondaryDirectionalLightCount);
  }
  iVar4 = 0;
  if (0 < g_GlobeLightCount) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)((int)&g_GlobeLights + iVar5);
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      iVar2 = core_dglobe_cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
                        ((CDemonGlobe *)*puVar1,surface_normal,surface_normal);
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < g_GlobeLightCount);
  }
  local_14 = 0;
  pCVar7 = world_position;
  if (0 < world_position[0x1ce64].y) {
    do {
      core_mirror_cpp_transformMirrorVertex_FUN_005229b0
                ((SMirrorReflection *)(pCVar7[0x1ce64].z + 0x1ec),(CVector3f *)surface_normal,
                 (CVector3f *)in_stack_ffffffbc);
      in_stack_ffffffbc = (CDemonLight *)local_3c.z;
      local_30[(uint)bVar6 * -2 + -4] = local_30[(uint)bVar6 * -2];
      *(int *)((int)&local_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
           local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (surface_normal != (CVector3i *)0x0) {
        in_stack_ffffffbc = (CDemonLight *)surface_normal;
        core_mirror_cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
                  ((CVector3i *)(*(int *)(unaff_EDI + 0x15acb8) + 0x1ec),in_stack_00000010,
                   surface_normal,in_stack_ffffffc0);
        uStack_1c = local_30[3];
        local_30[(uint)bVar6 * -2 + 6] = local_30[(uint)bVar6 * -2 + 4];
        local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             local_30[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
      }
      iVar4 = 0;
      if (0 < g_DynamicLightCount) {
        iVar5 = 0;
        do {
          if (surface_normal == (CVector3i *)0x0) {
            in_stack_ffffffbc = *(CDemonLight **)((int)g_DynamicLights + iVar5);
            in_stack_ffffffc0 = (CVector3i *)0x0;
          }
          else {
            in_stack_ffffffc0 = (CVector3i *)(local_30 + 6);
            in_stack_ffffffbc = *(CDemonLight **)((int)g_DynamicLights + iVar5);
          }
          iVar2 = core_dcamera_cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
                            (&g_CDemonCameraInstance,&local_3c,in_stack_ffffffbc,in_stack_ffffffc0);
          iVar3 = iVar3 + iVar2;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar4 < g_DynamicLightCount);
      }
      local_14 = local_14 + 1;
      pCVar7 = (CVector3i *)&pCVar7->y;
    } while (local_14 < world_position[0x1ce64].y);
  }
  return iVar3;
}


// Assembly code:
// 0056db80: PUSH EBX
//   Label: core_set.cpp_CDemonSet_calculateSpatialLighting_FUN_0056db80
// 0056db81: PUSH ESI
// 0056db82: PUSH EDI
// 0056db83: PUSH EBP
// 0056db84: SUB ESP,0x38
// 0056db87: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 0056db8b: MOV EDX,dword ptr [0x032c1c64]
//   XREF to: 032c1c64 (READ)
// 0056db91: TEST EDX,EDX
// 0056db93: JZ 0x0056dbbd
//   XREF to: 0056dbbd (CONDITIONAL_JUMP)
// 0056db95: CMP EDX,0x1
// 0056db98: JNZ 0x0056dd43
//   XREF to: 0056dd43 (CONDITIONAL_JUMP)
// 0056db9e: PUSH 0x0
// 0056dba0: PUSH 0x0
// 0056dba2: PUSH 0x0
// 0056dba4: PUSH 0x0
// 0056dba6: PUSH 0x0
// 0056dba8: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0056dbac: PUSH ESI
// 0056dbad: CALL core_set.cpp_CDemonSet_FUN_0056d4a0
//   Label: LAB_0056dbad
//   XREF to: 0056d4a0 (UNCONDITIONAL_CALL)
// 0056dbb2: ADD ESP,0x18
// 0056dbb5: XOR EDI,EDI
// 0056dbb7: MOV dword ptr [0x032c1c64],EDI
//   XREF to: 032c1c64 (WRITE)
// 0056dbbd: MOV EAX,[0x032c1798]
//   Label: LAB_0056dbbd
//   XREF to: 032c1798 (READ)
// 0056dbc2: XOR ESI,ESI
// 0056dbc4: XOR EBX,EBX
// 0056dbc6: TEST EAX,EAX
// 0056dbc8: JLE 0x0056dc00
//   XREF to: 0056dc00 (CONDITIONAL_JUMP)
// 0056dbca: XOR EDI,EDI
// 0056dbcc: PUSH EBP
//   Label: LAB_0056dbcc
// 0056dbcd: MOV EDX,dword ptr [EDI + 0x32c179c]
//   XREF to: 032c179c (READ)
//   XREF to: 032c17a0 (READ)
// 0056dbd3: PUSH EDX
// 0056dbd4: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0056dbd8: PUSH ECX
// 0056dbd9: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056dbde: ADD EDI,0x4
// 0056dbe1: INC ESI
// 0056dbe2: CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
//   XREF to: 0044edf0 (UNCONDITIONAL_CALL)
// 0056dbe7: ADD EBX,EAX
// 0056dbe9: MOV EAX,[0x032c1798]
//   XREF to: 032c1798 (READ)
// 0056dbee: ADD ESP,0x10
// 0056dbf1: CMP ESI,EAX
// 0056dbf3: JL 0x0056dbcc
//   XREF to: 0056dbcc (CONDITIONAL_JUMP)
// 0056dbf5: LEA EAX,[EAX]
// 0056dbfb: LEA EDX,[EDX]
// 0056dbfe: MOV EBX,EBX
// 0056dc00: MOV EDX,dword ptr [0x032c1614]
//   Label: LAB_0056dc00
//   XREF to: 032c1614 (READ)
// 0056dc06: XOR EDI,EDI
// 0056dc08: TEST EDX,EDX
// 0056dc0a: JLE 0x0056dc40
//   XREF to: 0056dc40 (CONDITIONAL_JUMP)
// 0056dc0c: XOR ESI,ESI
// 0056dc0e: PUSH EBP
//   Label: LAB_0056dc0e
// 0056dc0f: MOV ECX,dword ptr [ESI + 0x32c1618]
//   XREF to: 032c1618 (READ)
//   XREF to: 032c161c (READ)
// 0056dc15: PUSH ECX
// 0056dc16: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 0056dc1a: PUSH EAX
// 0056dc1b: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056dc20: ADD ESI,0x4
// 0056dc23: INC EDI
// 0056dc24: CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
//   XREF to: 0044edf0 (UNCONDITIONAL_CALL)
// 0056dc29: MOV EDX,dword ptr [0x032c1614]
//   XREF to: 032c1614 (READ)
// 0056dc2f: ADD ESP,0x10
// 0056dc32: ADD EBX,EAX
// 0056dc34: CMP EDI,EDX
// 0056dc36: JL 0x0056dc0e
//   XREF to: 0056dc0e (CONDITIONAL_JUMP)
// 0056dc38: LEA EAX,[EAX]
// 0056dc3e: MOV EDX,EDX
// 0056dc40: MOV ECX,dword ptr [0x032c17ac]
//   Label: LAB_0056dc40
//   XREF to: 032c17ac (READ)
// 0056dc46: XOR EDI,EDI
// 0056dc48: TEST ECX,ECX
// 0056dc4a: JLE 0x0056dc80
//   XREF to: 0056dc80 (CONDITIONAL_JUMP)
// 0056dc4c: XOR ESI,ESI
// 0056dc4e: PUSH EBP
//   Label: LAB_0056dc4e
// 0056dc4f: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0056dc53: PUSH EAX
// 0056dc54: MOV EDX,dword ptr [ESI + 0x32c17b0]
//   XREF to: 032c17b0 (READ)
//   XREF to: 032c17b4 (READ)
// 0056dc5a: PUSH EDX
// 0056dc5b: ADD ESI,0x4
// 0056dc5e: INC EDI
// 0056dc5f: CALL core_dglobe.cpp_CDemonGlobe_getAttenuationAtVertex_FUN_00471850
//   XREF to: 00471850 (UNCONDITIONAL_CALL)
// 0056dc64: MOV ECX,dword ptr [0x032c17ac]
//   XREF to: 032c17ac (READ)
// 0056dc6a: ADD ESP,0xc
// 0056dc6d: ADD EBX,EAX
// 0056dc6f: CMP EDI,ECX
// 0056dc71: JL 0x0056dc4e
//   XREF to: 0056dc4e (CONDITIONAL_JUMP)
// 0056dc73: LEA EAX,[EAX]
// 0056dc79: LEA EDX,[EDX]
// 0056dc7f: NOP
// 0056dc80: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0056dc80
//   XREF to: Stack[0x4] (READ)
// 0056dc84: XOR ESI,ESI
// 0056dc86: MOV EDI,dword ptr [EAX + 0x15acb4]
// 0056dc8c: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0056dc90: TEST EDI,EDI
// 0056dc92: JLE 0x0056dd39
//   XREF to: 0056dd39 (CONDITIONAL_JUMP)
// 0056dc98: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056dc9c: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0056dc9c
//   XREF to: Stack[-0x14] (READ)
// 0056dca0: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0056dca4: MOV EAX,dword ptr [EAX + 0x15acb8]
// 0056dcaa: PUSH ESI
// 0056dcab: ADD EAX,0x1ec
// 0056dcb0: PUSH EAX
// 0056dcb1: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 0056dcb5: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 0056dcb9: CALL core_mirror.cpp_transformMirrorVertex_FUN_005229b0
//   XREF to: 005229b0 (UNCONDITIONAL_CALL)
// 0056dcbe: LEA ESI,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 0056dcc2: ADD ESP,0x8
// 0056dcc5: MOVSD ES:EDI,ESI
// 0056dcc6: MOVSD ES:EDI,ESI
// 0056dcc7: MOVSD ES:EDI,ESI
// 0056dcc8: TEST EBP,EBP
// 0056dcca: JNZ 0x0056dd66
//   XREF to: 0056dd66 (CONDITIONAL_JUMP)
// 0056dcd0: MOV EAX,[0x032776b4]
//   Label: LAB_0056dcd0
//   XREF to: 032776b4 (READ)
// 0056dcd5: XOR EDI,EDI
// 0056dcd7: TEST EAX,EAX
// 0056dcd9: JLE 0x0056dd13
//   XREF to: 0056dd13 (CONDITIONAL_JUMP)
// 0056dcdb: XOR ESI,ESI
// 0056dcdd: TEST EBP,EBP
//   Label: LAB_0056dcdd
// 0056dcdf: JZ 0x0056dd98
//   XREF to: 0056dd98 (CONDITIONAL_JUMP)
// 0056dce5: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x24] (DATA)
// 0056dce9: PUSH EAX
// 0056dcea: MOV EAX,dword ptr [ESI + 0x32776b8]
//   XREF to: 032776b8 (READ)
//   XREF to: 032776bc (READ)
// 0056dcf0: PUSH EAX
// 0056dcf1: LEA EAX,[ESP + 0x8]
//   Label: LAB_0056dcf1
//   XREF to: Stack[-0x48] (DATA)
// 0056dcf5: PUSH EAX
// 0056dcf6: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056dcfb: CALL core_dcamera.cpp_CDemonCamera_calculateAttenuatedDirectionalLight_FUN_0044edf0
//   XREF to: 0044edf0 (UNCONDITIONAL_CALL)
// 0056dd00: ADD ESP,0x10
// 0056dd03: ADD EBX,EAX
// 0056dd05: MOV EDX,dword ptr [0x032776b4]
//   XREF to: 032776b4 (READ)
// 0056dd0b: INC EDI
// 0056dd0c: ADD ESI,0x4
// 0056dd0f: CMP EDI,EDX
// 0056dd11: JL 0x0056dcdd
//   XREF to: 0056dcdd (CONDITIONAL_JUMP)
// 0056dd13: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0056dd13
//   XREF to: Stack[-0x14] (READ)
// 0056dd17: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x18] (READ)
// 0056dd1b: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0056dd1f: ADD EAX,0x4
// 0056dd22: INC EDX
// 0056dd23: MOV ECX,dword ptr [ESI + 0x15acb4]
// 0056dd29: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0056dd2d: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0056dd31: CMP EDX,ECX
// 0056dd33: JL 0x0056dc9c
//   XREF to: 0056dc9c (CONDITIONAL_JUMP)
// 0056dd39: MOV EAX,EBX
//   Label: LAB_0056dd39
// 0056dd3b: ADD ESP,0x38
// 0056dd3e: POP EBP
// 0056dd3f: POP EDI
// 0056dd40: POP ESI
// 0056dd41: POP EBX
// 0056dd42: RET
// 0056dd43: PUSH 0x32c1c98
//   Label: LAB_0056dd43
//   XREF to: 032c1c98 (DATA)
// 0056dd48: PUSH 0x32c1c8c
//   XREF to: 032c1c8c (DATA)
// 0056dd4d: PUSH 0x32c1c80
//   XREF to: 032c1c80 (DATA)
// 0056dd52: PUSH 0x32c1c74
//   XREF to: 032c1c74 (DATA)
// 0056dd57: PUSH 0x32c1c68
//   XREF to: 032c1c68 (DATA)
// 0056dd5c: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 0056dd60: PUSH EBX
// 0056dd61: JMP 0x0056dbad
//   XREF to: 0056dbad (UNCONDITIONAL_JUMP)
// 0056dd66: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0056dd66
//   XREF to: Stack[-0x14] (READ)
// 0056dd6a: PUSH EBP
// 0056dd6b: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 0056dd6f: MOV EAX,dword ptr [EAX + 0x15acb8]
// 0056dd75: PUSH EDI
// 0056dd76: ADD EAX,0x1ec
// 0056dd7b: PUSH EAX
// 0056dd7c: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 0056dd80: LEA EDI,[ESP + 0x30]
//   XREF to: Stack[-0x24] (DATA)
// 0056dd84: CALL core_mirror.cpp_transformMirrorEdgeToIntegerSpace_FUN_00522a50
//   XREF to: 00522a50 (UNCONDITIONAL_CALL)
// 0056dd89: LEA ESI,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 0056dd8d: ADD ESP,0xc
// 0056dd90: MOVSD ES:EDI,ESI
// 0056dd91: MOVSD ES:EDI,ESI
// 0056dd92: MOVSD ES:EDI,ESI
// 0056dd93: JMP 0x0056dcd0
//   XREF to: 0056dcd0 (UNCONDITIONAL_JUMP)
// 0056dd98: PUSH EBP
//   Label: LAB_0056dd98
// 0056dd99: MOV ECX,dword ptr [ESI + 0x32776b8]
//   XREF to: 032776bc (READ)
// 0056dd9f: PUSH ECX
// 0056dda0: JMP 0x0056dcf1
//   XREF to: 0056dcf1 (UNCONDITIONAL_JUMP)
