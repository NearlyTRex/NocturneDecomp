// Name: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
// Address: 00450e30
// Address Range: [[00450e30, 00450fba]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera * this_ptr, CDemonLight * light_source)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c26e [UNCONDITIONAL_CALL]
// Globals:
//   char[241][320] g_CoronaBlurOutputBuffer
//   undefined4 DAT_00ba8db8
//   undefined4 DAT_00ba8db9
//   undefined4 DAT_00ba8ef8
//   undefined4 DAT_015c2eac

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char (*local_20) [320];
  int local_1c;
  int local_18;
  CDemonLight *local_14;
  
  local_1c = 0;
  if (0 < this_ptr->display_height) {
    local_18 = 0;
    local_20 = g_CoronaBlurOutputBuffer;
    local_14 = light_source;
    do {
      iVar2 = (local_14->right_extent[0] - local_14->left_extent[0]) + 1;
      if (0 < iVar2) {
        puVar3 = (uint *)((int)light_source->corona_visibility_buffers +
                         local_14->left_extent[0] * 4 + local_18);
        puVar8 = (undefined4 *)
                 ((int)light_source->corona_depth_buffer + local_14->left_extent[0] * 4 + local_18);
        piVar4 = (int *)((int)light_source->corona_lightmap_indices +
                        local_14->left_extent[0] * 4 + local_18);
        pcVar9 = *local_20 + local_14->left_extent[0];
        DAT_015c2eac = light_source->precomputed_lighting_textures;
        iVar7 = iVar2;
        do {
          iVar5 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar6 = iVar2;
          iVar7 = iVar5;
        } while (iVar5 != 0 && bVar1);
        do {
          iVar5 = iVar6 + -8;
          bVar1 = 7 < iVar6;
          iVar7 = iVar2;
          iVar6 = iVar5;
        } while (iVar5 != 0 && bVar1);
        do {
          iVar6 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar7 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          if ((*puVar3 != 0) && (*puVar3 <= (uint)*(ushort *)*puVar8)) {
            *pcVar9 = *pcVar9 + DAT_015c2eac[*piVar4];
          }
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
          piVar4 = piVar4 + 1;
          pcVar9 = pcVar9 + 1;
          iVar7 = iVar2 + -1;
          bVar1 = 0 < iVar2;
          iVar2 = iVar7;
        } while (iVar7 != 0 && bVar1);
      }
      local_14 = (CDemonLight *)&(local_14->base).base.position;
      local_20 = local_20 + 1;
      local_18 = local_18 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->display_height);
  }
  return;
}


// Assembly code:
// 00450e30: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
// 00450e31: PUSH ESI
// 00450e32: PUSH EDI
// 00450e33: PUSH EBP
// 00450e34: MOV EBP,ESP
// 00450e36: SUB ESP,0x24
// 00450e39: MOV EAX,dword ptr [EBP + 0x14]
// 00450e3c: XOR EDX,EDX
// 00450e3e: MOV ECX,dword ptr [EAX + 0x154]
// 00450e44: MOV dword ptr [EBP + -0xc],EDX
// 00450e47: TEST ECX,ECX
// 00450e49: JLE 0x00450eaf
//   XREF to: 00450eaf (CONDITIONAL_JUMP)
// 00450e4b: MOV EBX,0xba8c78
//   XREF to: 00ba8c78 (DATA)
// 00450e50: MOV EAX,dword ptr [EBP + 0x18]
// 00450e53: MOV dword ptr [EBP + -0x8],EDX
// 00450e56: MOV dword ptr [EBP + -0x10],EBX
//   XREF to: 00ba8c78 (DATA)
// 00450e59: MOV dword ptr [EBP + -0x4],EAX
// 00450e5c: MOV EDX,dword ptr [EBP + -0x4]
//   Label: LAB_00450e5c
// 00450e5f: MOV EAX,dword ptr [EBP + -0x4]
// 00450e62: MOV EDI,dword ptr [EDX + 0x14c8]
// 00450e68: MOV EAX,dword ptr [EAX + 0x1888]
// 00450e6e: SUB EAX,EDI
// 00450e70: INC EAX
// 00450e71: MOV dword ptr [EBP + -0x14],EAX
// 00450e74: CMP dword ptr [EBP + -0x14],0x0
// 00450e78: JG 0x00450eb6
//   XREF to: 00450eb6 (CONDITIONAL_JUMP)
// 00450e7a: MOV EBX,dword ptr [EBP + -0x4]
//   Label: LAB_00450e7a
// 00450e7d: MOV ESI,dword ptr [EBP + -0x10]
// 00450e80: MOV EDI,dword ptr [EBP + -0x8]
// 00450e83: MOV EAX,dword ptr [EBP + -0xc]
// 00450e86: MOV EDX,dword ptr [EBP + 0x14]
// 00450e89: ADD EBX,0x4
// 00450e8c: ADD ESI,0x140
// 00450e92: ADD EDI,0x500
// 00450e98: INC EAX
// 00450e99: MOV ECX,dword ptr [EDX + 0x154]
// 00450e9f: MOV dword ptr [EBP + -0x4],EBX
// 00450ea2: MOV dword ptr [EBP + -0x10],ESI
//   XREF to: 00ba8db8 (DATA)
//   XREF to: 00ba8ef8 (DATA)
// 00450ea5: MOV dword ptr [EBP + -0x8],EDI
// 00450ea8: MOV dword ptr [EBP + -0xc],EAX
// 00450eab: CMP EAX,ECX
// 00450ead: JL 0x00450e5c
//   XREF to: 00450e5c (CONDITIONAL_JUMP)
// 00450eaf: MOV ESP,EBP
//   Label: LAB_00450eaf
// 00450eb1: POP EBP
// 00450eb2: POP EDI
// 00450eb3: POP ESI
// 00450eb4: POP EBX
// 00450eb5: RET
// 00450eb6: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00450eb6
// 00450eb9: MOV ECX,dword ptr [EBP + -0x8]
// 00450ebc: MOV EAX,dword ptr [EAX + 0x1c48]
// 00450ec2: LEA EDX,[EDI*0x4 + 0x0]
// 00450ec9: ADD EAX,ECX
// 00450ecb: ADD EAX,EDX
// 00450ecd: MOV dword ptr [EBP + -0x24],EAX
// 00450ed0: MOV EAX,dword ptr [EBP + -0x4]
// 00450ed3: MOV EDX,dword ptr [EBP + 0x18]
// 00450ed6: MOV EAX,dword ptr [EAX + 0x14c8]
// 00450edc: MOV EDX,dword ptr [EDX + 0x1c4c]
// 00450ee2: SHL EAX,0x2
// 00450ee5: ADD EDX,ECX
// 00450ee7: ADD EDX,EAX
// 00450ee9: MOV dword ptr [EBP + -0x20],EDX
// 00450eec: MOV EDX,dword ptr [EBP + -0x4]
// 00450eef: MOV EAX,dword ptr [EBP + 0x18]
// 00450ef2: MOV EDX,dword ptr [EDX + 0x14c8]
// 00450ef8: MOV EAX,dword ptr [EAX + 0x1c50]
// 00450efe: SHL EDX,0x2
// 00450f01: ADD EAX,ECX
// 00450f03: ADD EAX,EDX
// 00450f05: MOV dword ptr [EBP + -0x1c],EAX
// 00450f08: MOV EDX,dword ptr [EBP + -0x4]
// 00450f0b: MOV EAX,dword ptr [EBP + -0x10]
// 00450f0e: MOV EDI,dword ptr [EDX + 0x14c8]
// 00450f14: ADD EAX,EDI
// 00450f16: MOV dword ptr [EBP + -0x18],EAX
// 00450f19: MOV EAX,dword ptr [EBP + 0x18]
// 00450f1c: MOV EAX,dword ptr [EAX + 0x1c54]
// 00450f22: MOV [0x015c2eac],EAX
//   XREF to: 015c2eac (WRITE)
// 00450f27: MOV ECX,dword ptr [EBP + 0xffffffec]
// 00450f2d: MOV EBX,dword ptr [EBP + 0xffffffdc]
// 00450f33: MOV EAX,dword ptr [EBX]
//   Label: LAB_00450f33
// 00450f35: ADD EBX,0x20
// 00450f38: SUB ECX,0x8
// 00450f3b: JG 0x00450f33
//   XREF to: 00450f33 (CONDITIONAL_JUMP)
// 00450f3d: MOV ECX,dword ptr [EBP + 0xffffffec]
// 00450f43: MOV EBX,dword ptr [EBP + 0xffffffe0]
// 00450f49: MOV EAX,dword ptr [EBX]
//   Label: LAB_00450f49
// 00450f4b: ADD EBX,0x20
// 00450f4e: SUB ECX,0x8
// 00450f51: JG 0x00450f49
//   XREF to: 00450f49 (CONDITIONAL_JUMP)
// 00450f53: MOV ECX,dword ptr [EBP + 0xffffffec]
// 00450f59: MOV EBX,dword ptr [EBP + 0xffffffe4]
// 00450f5f: MOV EAX,dword ptr [EBX]
//   Label: LAB_00450f5f
// 00450f61: ADD EBX,0x20
// 00450f64: SUB ECX,0x8
// 00450f67: JG 0x00450f5f
//   XREF to: 00450f5f (CONDITIONAL_JUMP)
// 00450f69: MOV ECX,dword ptr [EBP + 0xffffffec]
// 00450f6f: MOV EBX,dword ptr [EBP + 0xffffffdc]
// 00450f75: MOV ESI,dword ptr [EBP + 0xffffffe0]
// 00450f7b: MOV EDX,dword ptr [EBP + 0xffffffe4]
// 00450f81: MOV EDI,dword ptr [EBP + 0xffffffe8]
// 00450f87: PUSH EBP
// 00450f88: MOV EAX,dword ptr [EBX]
//   Label: LAB_00450f88
// 00450f8a: CMP EAX,0x0
// 00450f8d: JBE 0x00450fa6
//   XREF to: 00450fa6 (CONDITIONAL_JUMP)
// 00450f8f: MOV EBP,dword ptr [ESI]
// 00450f91: MOVZX EAX,word ptr [EBP]
// 00450f95: CMP EAX,dword ptr [EBX]
// 00450f97: JC 0x00450fa6
//   XREF to: 00450fa6 (CONDITIONAL_JUMP)
// 00450f99: MOV EBP,dword ptr [0x015c2eac]
//   XREF to: 015c2eac (READ)
// 00450f9f: ADD EBP,dword ptr [EDX]
// 00450fa1: MOV AL,byte ptr [EBP]
// 00450fa4: ADD byte ptr [EDI],AL
//   XREF to: 00ba8db8 (DATA)
//   XREF to: 00ba8db9 (DATA)
// 00450fa6: ADD EBX,0x4
//   Label: LAB_00450fa6
// 00450fa9: ADD ESI,0x4
// 00450fac: ADD EDX,0x4
// 00450faf: INC EDI
// 00450fb0: SUB ECX,0x1
// 00450fb3: JG 0x00450f88
//   XREF to: 00450f88 (CONDITIONAL_JUMP)
// 00450fb5: POP EBP
// 00450fb6: JMP 0x00450e7a
//   XREF to: 00450e7a (UNCONDITIONAL_JUMP)
