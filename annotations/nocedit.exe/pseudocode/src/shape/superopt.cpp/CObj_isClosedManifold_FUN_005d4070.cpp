// Name: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// Address: 005d4070
// Address Range: [[005d4070, 005d4101]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070(CObj * this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  
  local_18 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      uVar4 = 0;
      iVar2 = 0;
      if (this_ptr->poly_count != 0) {
        iVar3 = 0;
        do {
          iVar1 = (**(code **)(*(int *)((int)(this_ptr->poly_array->uv_coords + 5) + iVar3 + 4) +
                              0x70))();
          if ((iVar1 != 0) && (iVar2 = iVar2 + 1, iVar2 == 3)) break;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x68;
        } while (uVar4 < (uint)this_ptr->poly_count);
      }
      if (iVar2 != 3) {
        return 0;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (uint)this_ptr->poly_count);
  }
  return 1;
}


// Assembly code:
// 005d4070: PUSH EBX
//   Label: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
// 005d4071: PUSH ESI
// 005d4072: PUSH EDI
// 005d4073: PUSH EBP
// 005d4074: SUB ESP,0xc
// 005d4077: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005d407b: XOR EDX,EDX
// 005d407d: MOV ECX,dword ptr [EBP + 0x8]
// 005d4080: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005d4084: TEST ECX,ECX
// 005d4086: JBE 0x005d40de
//   XREF to: 005d40de (CONDITIONAL_JUMP)
// 005d4088: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 005d408b: MOV EDX,dword ptr [EBP + 0x8]
//   Label: LAB_005d408b
// 005d408e: XOR EDI,EDI
// 005d4090: XOR EBX,EBX
// 005d4092: TEST EDX,EDX
// 005d4094: JBE 0x005d40c0
//   XREF to: 005d40c0 (CONDITIONAL_JUMP)
// 005d4096: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 005d4099: XOR ESI,ESI
// 005d409b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d409f: MOV EDX,dword ptr [EBP + 0xc]
//   Label: LAB_005d409f
// 005d40a2: LEA EAX,[EDX + ESI*0x1]
// 005d40a5: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 005d40a9: PUSH EDX
// 005d40aa: MOV ECX,dword ptr [EAX + 0x64]
// 005d40ad: PUSH EAX
// 005d40ae: MOV EAX,ECX
// 005d40b0: CALL dword ptr [EAX + 0x70]
// 005d40b3: ADD ESP,0x8
// 005d40b6: TEST EAX,EAX
// 005d40b8: JZ 0x005d40eb
//   XREF to: 005d40eb (CONDITIONAL_JUMP)
// 005d40ba: INC EBX
// 005d40bb: CMP EBX,0x3
// 005d40be: JNZ 0x005d40eb
//   XREF to: 005d40eb (CONDITIONAL_JUMP)
// 005d40c0: CMP EBX,0x3
//   Label: LAB_005d40c0
// 005d40c3: JNZ 0x005d40f8
//   XREF to: 005d40f8 (CONDITIONAL_JUMP)
// 005d40c5: MOV EBX,dword ptr [ESP]
// 005d40c8: MOV ESI,dword ptr [ESP + 0x4]
// 005d40cc: MOV EDI,dword ptr [EBP + 0x8]
// 005d40cf: ADD EBX,0x68
// 005d40d2: INC ESI
// 005d40d3: MOV dword ptr [ESP],EBX
// 005d40d6: MOV dword ptr [ESP + 0x4],ESI
// 005d40da: CMP ESI,EDI
// 005d40dc: JC 0x005d408b
//   XREF to: 005d408b (CONDITIONAL_JUMP)
// 005d40de: MOV EAX,0x1
//   Label: LAB_005d40de
// 005d40e3: ADD ESP,0xc
// 005d40e6: POP EBP
// 005d40e7: POP EDI
// 005d40e8: POP ESI
// 005d40e9: POP EBX
// 005d40ea: RET
// 005d40eb: INC EDI
//   Label: LAB_005d40eb
// 005d40ec: MOV ECX,dword ptr [EBP + 0x8]
// 005d40ef: ADD ESI,0x68
// 005d40f2: CMP EDI,ECX
// 005d40f4: JC 0x005d409f
//   XREF to: 005d409f (CONDITIONAL_JUMP)
// 005d40f6: JMP 0x005d40c0
//   XREF to: 005d40c0 (UNCONDITIONAL_JUMP)
// 005d40f8: XOR EAX,EAX
//   Label: LAB_005d40f8
// 005d40fa: ADD ESP,0xc
// 005d40fd: POP EBP
// 005d40fe: POP EDI
// 005d40ff: POP ESI
// 005d4100: POP EBX
// 005d4101: RET
