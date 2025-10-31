// Name: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
// Address: 00450fc0
// Address Range: [[00450fc0, 0045108b]]
// Convention: __cdecl
// Signature: int core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0(CDemonCamera * this_ptr, CDemonLight * light_source)
// Cross-references:
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a8a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int *local_18;
  int *local_14;
  
  iVar4 = 0;
  local_1c = 0;
  if (0 < this_ptr->display_height) {
    local_18 = light_source->corona_depth_buffer;
    local_14 = light_source->corona_visibility_buffers;
    do {
      iVar3 = light_source->left_extent[0];
      puVar1 = (uint *)(local_14 + iVar3);
      piVar2 = local_18 + iVar3;
      for (iVar3 = (light_source->right_extent[0] - iVar3) + 1; 0 < iVar3; iVar3 = iVar3 + -1) {
        if ((*puVar1 != 0) && (*puVar1 < (uint)*(ushort *)*piVar2)) {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar1 + 1;
        piVar2 = piVar2 + 1;
      }
      if (0x300 < iVar4) {
        return 1;
      }
      light_source = (CDemonLight *)&(light_source->base).base.position;
      local_18 = local_18 + 0x140;
      local_14 = local_14 + 0x140;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->display_height);
  }
  return 0;
}


// Assembly code:
// 00450fc0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00450fc0
// 00450fc1: PUSH ESI
// 00450fc2: PUSH EDI
// 00450fc3: PUSH EBP
// 00450fc4: SUB ESP,0xc
// 00450fc7: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00450fcb: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00450fcf: XOR EBX,EBX
// 00450fd1: MOV ECX,dword ptr [EBP + 0x154]
// 00450fd7: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x1c] (DATA)
// 00450fda: TEST ECX,ECX
// 00450fdc: JLE 0x00451075
//   XREF to: 00451075 (CONDITIONAL_JUMP)
// 00450fe2: MOV EAX,dword ptr [EDI + 0x1c4c]
// 00450fe8: MOV EDX,dword ptr [EDI + 0x1c48]
// 00450fee: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00450ff2: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00450ff6: MOV ESI,dword ptr [EDI + 0x14c8]
//   Label: LAB_00450ff6
// 00450ffc: MOV EAX,dword ptr [EDI + 0x1888]
// 00451002: SUB EAX,ESI
// 00451004: LEA EDX,[EAX + 0x1]
// 00451007: LEA ECX,[ESI*0x4 + 0x0]
// 0045100e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 00451012: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00451016: ADD EAX,ECX
// 00451018: ADD ECX,ESI
// 0045101a: TEST EDX,EDX
// 0045101c: JLE 0x0045103e
//   XREF to: 0045103e (CONDITIONAL_JUMP)
// 0045101e: CMP dword ptr [EAX],0x0
//   Label: LAB_0045101e
// 00451021: JBE 0x00451033
//   XREF to: 00451033 (CONDITIONAL_JUMP)
// 00451023: MOV ESI,dword ptr [ECX]
// 00451025: MOV SI,word ptr [ESI]
// 00451028: AND ESI,0xffff
// 0045102e: CMP ESI,dword ptr [EAX]
// 00451030: JBE 0x00451033
//   XREF to: 00451033 (CONDITIONAL_JUMP)
// 00451032: INC EBX
// 00451033: ADD EAX,0x4
//   Label: LAB_00451033
// 00451036: DEC EDX
// 00451037: ADD ECX,0x4
// 0045103a: TEST EDX,EDX
// 0045103c: JG 0x0045101e
//   XREF to: 0045101e (CONDITIONAL_JUMP)
// 0045103e: CMP EBX,0x300
//   Label: LAB_0045103e
// 00451044: JG 0x0045107f
//   XREF to: 0045107f (CONDITIONAL_JUMP)
// 00451046: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0045104a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0045104e: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00451051: ADD EDI,0x4
// 00451054: MOV ECX,dword ptr [EBP + 0x154]
// 0045105a: ADD ESI,0x500
// 00451060: ADD EAX,0x500
// 00451065: INC EDX
// 00451066: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0045106a: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0045106e: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 00451071: CMP EDX,ECX
// 00451073: JL 0x00450ff6
//   XREF to: 00450ff6 (CONDITIONAL_JUMP)
// 00451075: XOR EAX,EAX
//   Label: LAB_00451075
// 00451077: ADD ESP,0xc
// 0045107a: POP EBP
// 0045107b: POP EDI
// 0045107c: POP ESI
// 0045107d: POP EBX
// 0045107e: RET
// 0045107f: MOV EAX,0x1
//   Label: LAB_0045107f
// 00451084: ADD ESP,0xc
// 00451087: POP EBP
// 00451088: POP EDI
// 00451089: POP ESI
// 0045108a: POP EBX
// 0045108b: RET
