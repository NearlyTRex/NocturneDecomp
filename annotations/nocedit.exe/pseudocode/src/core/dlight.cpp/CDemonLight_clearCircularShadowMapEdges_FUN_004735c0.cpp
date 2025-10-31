// Name: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
// Address: 004735c0
// Address Range: [[004735c0, 004736be]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056bf8f [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cae0 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ab74 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0(CDemonLight *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (this_ptr->shadow_bounds_mode != 0) {
    for (iVar6 = 0; iVar6 < this_ptr->shadow_map_height / 2; iVar6 = iVar6 + 1) {
      for (iVar4 = 0; iVar1 = this_ptr->shadow_map_width / 2, iVar4 < iVar1; iVar4 = iVar4 + 1) {
        iVar2 = this_ptr->shadow_map_width * this_ptr->shadow_map_height;
        iVar3 = iVar2 >> 0x1f;
        iVar1 = iVar1 - iVar4;
        iVar5 = this_ptr->shadow_map_height / 2 - iVar6;
        if ((int)((iVar2 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2 <
            iVar1 * iVar1 + iVar5 * iVar5) {
          this_ptr->shadow_depth_buffer[this_ptr->shadow_map_width * iVar6 + iVar4] = 0;
          this_ptr->shadow_depth_buffer
          [this_ptr->shadow_map_width * iVar6 + ((this_ptr->shadow_map_width + -1) - iVar4)] = 0;
          this_ptr->shadow_depth_buffer
          [((this_ptr->shadow_map_width + -1) - iVar4) +
           this_ptr->shadow_map_width * ((this_ptr->shadow_map_height + -1) - iVar6)] = 0;
          this_ptr->shadow_depth_buffer
          [((this_ptr->shadow_map_height + -1) - iVar6) * this_ptr->shadow_map_width + iVar4] = 0;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 004735c0: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_004735c0
// 004735c1: PUSH ESI
// 004735c2: PUSH EDI
// 004735c3: PUSH EBP
// 004735c4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004735c8: CMP dword ptr [ECX + 0x1cb8],0x0
// 004735cf: JZ 0x00473586
//   XREF to: 00473586 (CONDITIONAL_JUMP)
// 004735d1: XOR ESI,ESI
// 004735d3: MOV EAX,dword ptr [ECX + 0x1cc4]
//   Label: LAB_004735d3
// 004735d9: MOV EDX,EAX
// 004735db: SAR EDX,0x1f
// 004735de: SUB EAX,EDX
// 004735e0: SAR EAX,0x1
// 004735e2: CMP ESI,EAX
// 004735e4: JGE 0x00473586
//   XREF to: 00473586 (CONDITIONAL_JUMP)
// 004735e6: XOR EBX,EBX
// 004735e8: MOV EAX,dword ptr [ECX + 0x1cc0]
//   Label: LAB_004735e8
// 004735ee: MOV EDX,EAX
// 004735f0: SAR EDX,0x1f
// 004735f3: SUB EAX,EDX
// 004735f5: SAR EAX,0x1
// 004735f7: CMP EBX,EAX
// 004735f9: JL 0x004735fe
//   XREF to: 004735fe (CONDITIONAL_JUMP)
// 004735fb: INC ESI
// 004735fc: JMP 0x004735d3
//   XREF to: 004735d3 (UNCONDITIONAL_JUMP)
// 004735fe: MOV EDI,EAX
//   Label: LAB_004735fe
// 00473600: MOV EAX,dword ptr [ECX + 0x1cc4]
// 00473606: MOV EDX,EAX
// 00473608: SAR EDX,0x1f
// 0047360b: SUB EAX,EDX
// 0047360d: SAR EAX,0x1
// 0047360f: MOV EBP,EAX
// 00473611: MOV EDX,dword ptr [ECX + 0x1cc0]
// 00473617: MOV EAX,dword ptr [ECX + 0x1cc4]
// 0047361d: IMUL EDX,EAX
// 00473620: MOV EAX,EDX
// 00473622: SAR EDX,0x1f
// 00473625: SHL EDX,0x2
// 00473628: SBB EAX,EDX
// 0047362a: SAR EAX,0x2
// 0047362d: SUB EDI,EBX
// 0047362f: IMUL EDI,EDI
// 00473632: SUB EBP,ESI
// 00473634: IMUL EBP,EBP
// 00473637: ADD EDI,EBP
// 00473639: CMP EDI,EAX
// 0047363b: JLE 0x004736b9
//   XREF to: 004736b9 (CONDITIONAL_JUMP)
// 0047363d: MOV EAX,dword ptr [ECX + 0x1cc0]
// 00473643: IMUL EAX,ESI
// 00473646: MOV EDX,dword ptr [ECX + 0x2f94]
// 0047364c: ADD EAX,EBX
// 0047364e: MOV word ptr [EDX + EAX*0x2],0x0
// 00473654: MOV EAX,dword ptr [ECX + 0x1cc0]
// 0047365a: LEA EDX,[EAX + -0x1]
// 0047365d: IMUL EAX,ESI
// 00473660: SUB EDX,EBX
// 00473662: ADD EAX,EDX
// 00473664: MOV EDX,dword ptr [ECX + 0x2f94]
// 0047366a: MOV word ptr [EDX + EAX*0x2],0x0
// 00473670: MOV EAX,dword ptr [ECX + 0x1cc4]
// 00473676: DEC EAX
// 00473677: MOV EDX,dword ptr [ECX + 0x1cc0]
// 0047367d: SUB EAX,ESI
// 0047367f: IMUL EDX,EAX
// 00473682: MOV EAX,dword ptr [ECX + 0x1cc0]
// 00473688: DEC EAX
// 00473689: SUB EAX,EBX
// 0047368b: ADD EAX,EDX
// 0047368d: MOV EDX,dword ptr [ECX + 0x2f94]
// 00473693: MOV word ptr [EDX + EAX*0x2],0x0
// 00473699: MOV EAX,dword ptr [ECX + 0x1cc4]
// 0047369f: DEC EAX
// 004736a0: MOV EDX,dword ptr [ECX + 0x1cc0]
// 004736a6: SUB EAX,ESI
// 004736a8: IMUL EAX,EDX
// 004736ab: MOV EDX,dword ptr [ECX + 0x2f94]
// 004736b1: ADD EAX,EBX
// 004736b3: MOV word ptr [EDX + EAX*0x2],0x0
// 004736b9: INC EBX
//   Label: LAB_004736b9
// 004736ba: JMP 0x004735e8
//   XREF to: 004735e8 (UNCONDITIONAL_JUMP)
