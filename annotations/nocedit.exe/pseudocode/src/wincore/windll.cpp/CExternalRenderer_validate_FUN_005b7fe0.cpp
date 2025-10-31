// Name: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// Address: 005b7fe0
// Address Range: [[005b7fe0, 005b8116]]
// Convention: __cdecl
// Signature: bool wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0(CExternalRenderer * this_ptr, CExternalRenderer * capabilities)
// Cross-references:
//   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 (005b5ec0) at 005b5f34 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b67f5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

bool __cdecl
wincore_windll_cpp_CExternalRenderer_validate_FUN_005b7fe0
          (CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = capabilities == (CExternalRenderer *)0x0;
  if (capabilities != (CExternalRenderer *)0x0) {
    if ((this_ptr->api_version == capabilities->api_version) || (this_ptr->api_version == 0xffff)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && ((~this_ptr->feature_flags & capabilities->feature_flags) != 0)) {
      return false;
    }
    if (bVar4) {
      if (capabilities->hardware_flag1 != 0) {
        bVar4 = *(int *)(this_ptr->dll_identifier + 0xfe) >> 0x18 ==
                *(int *)(capabilities->dll_identifier + 0xfe) >> 0x18;
      }
      if ((bVar4) && (capabilities->hardware_flag2 != 0)) {
        iVar3._0_2_ = this_ptr->hardware_flag1;
        iVar3._2_2_ = this_ptr->hardware_flag2;
        iVar2._0_2_ = capabilities->hardware_flag1;
        iVar2._2_2_ = capabilities->hardware_flag2;
        bVar4 = iVar3 >> 0x18 == iVar2 >> 0x18;
      }
    }
    if ((bVar4) && (capabilities->dll_identifier[0] != '\0')) {
      iVar3 = crt_string_c_strcmp_FUN_005fef20
                        (capabilities->dll_identifier,this_ptr->dll_identifier);
      bVar4 = iVar3 == 0;
    }
    if (bVar4) {
      if (this_ptr->function_count != 0x10) {
        return false;
      }
      iVar3 = 0;
      if (bVar4) {
        do {
          puVar1 = this_ptr->function_table;
          this_ptr = (CExternalRenderer *)(this_ptr->processing_data + 4);
          bVar4 = capabilities->function_table[0] == *puVar1;
          capabilities = (CExternalRenderer *)(capabilities->processing_data + 4);
          iVar3 = iVar3 + 1;
          if (0xf < iVar3) {
            return bVar4;
          }
        } while (bVar4);
      }
    }
  }
  return bVar4;
}


// Assembly code:
// 005b7fe0: PUSH EBX
//   Label: wincore_windll.cpp_CExternalRenderer_validate_FUN_005b7fe0
// 005b7fe1: PUSH ESI
// 005b7fe2: PUSH EDI
// 005b7fe3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005b7fe7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005b7feb: TEST ESI,ESI
// 005b7fed: SETZ AL
// 005b7ff0: XOR EBX,EBX
// 005b7ff2: MOV BL,AL
// 005b7ff4: TEST ESI,ESI
// 005b7ff6: JZ 0x005b80f8
//   XREF to: 005b80f8 (CONDITIONAL_JUMP)
// 005b7ffc: MOV DX,word ptr [EDI + 0x204]
// 005b8003: CMP DX,word ptr [ESI + 0x204]
// 005b800a: JNZ 0x005b80fe
//   XREF to: 005b80fe (CONDITIONAL_JUMP)
// 005b8010: MOV EAX,0x1
//   Label: LAB_005b8010
// 005b8015: MOV EBX,EAX
//   Label: LAB_005b8015
// 005b8017: TEST EAX,EAX
// 005b8019: JZ 0x005b8031
//   XREF to: 005b8031 (CONDITIONAL_JUMP)
// 005b801b: MOV EAX,dword ptr [EDI + 0x208]
// 005b8021: MOV EDX,dword ptr [ESI + 0x208]
// 005b8027: NOT EAX
// 005b8029: AND EAX,EDX
// 005b802b: JNZ 0x005b810f
//   XREF to: 005b810f (CONDITIONAL_JUMP)
// 005b8031: TEST EBX,EBX
//   Label: LAB_005b8031
// 005b8033: JZ 0x005b808f
//   XREF to: 005b808f (CONDITIONAL_JUMP)
// 005b8035: CMP word ptr [ESI + 0x200],0x0
// 005b803d: JZ 0x005b8060
//   XREF to: 005b8060 (CONDITIONAL_JUMP)
// 005b803f: MOV EAX,dword ptr [EDI + 0x1fe]
// 005b8045: MOV EDX,dword ptr [ESI + 0x1fe]
// 005b804b: SAR EAX,0x10
// 005b804e: SAR EDX,0x10
// 005b8051: SAR EAX,0x8
// 005b8054: SAR EDX,0x8
// 005b8057: XOR EBX,EBX
// 005b8059: CMP EAX,EDX
// 005b805b: SETZ AL
// 005b805e: MOV BL,AL
// 005b8060: TEST EBX,EBX
//   Label: LAB_005b8060
// 005b8062: JZ 0x005b808f
//   XREF to: 005b808f (CONDITIONAL_JUMP)
// 005b8064: CMP word ptr [ESI + 0x202],0x0
// 005b806c: JZ 0x005b808f
//   XREF to: 005b808f (CONDITIONAL_JUMP)
// 005b806e: MOV EDX,dword ptr [EDI + 0x200]
// 005b8074: MOV EAX,dword ptr [ESI + 0x200]
// 005b807a: SAR EDX,0x10
// 005b807d: SAR EAX,0x10
// 005b8080: SAR EDX,0x8
// 005b8083: SAR EAX,0x8
// 005b8086: XOR EBX,EBX
// 005b8088: CMP EDX,EAX
// 005b808a: SETZ AL
// 005b808d: MOV BL,AL
// 005b808f: TEST EBX,EBX
//   Label: LAB_005b808f
// 005b8091: JZ 0x005b80bb
//   XREF to: 005b80bb (CONDITIONAL_JUMP)
// 005b8093: CMP byte ptr [ESI + 0x100],0x0
// 005b809a: JZ 0x005b80bb
//   XREF to: 005b80bb (CONDITIONAL_JUMP)
// 005b809c: LEA EAX,[EDI + 0x100]
// 005b80a2: PUSH EAX
// 005b80a3: LEA EAX,[ESI + 0x100]
// 005b80a9: PUSH EAX
// 005b80aa: XOR EBX,EBX
// 005b80ac: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005b80b1: ADD ESP,0x8
// 005b80b4: TEST EAX,EAX
// 005b80b6: SETZ AL
// 005b80b9: MOV BL,AL
// 005b80bb: TEST EBX,EBX
//   Label: LAB_005b80bb
// 005b80bd: JZ 0x005b80f8
//   XREF to: 005b80f8 (CONDITIONAL_JUMP)
// 005b80bf: CMP dword ptr [EDI + 0x20c],0x10
// 005b80c6: JNZ 0x005b810f
//   XREF to: 005b810f (CONDITIONAL_JUMP)
// 005b80c8: XOR EDX,EDX
// 005b80ca: TEST EBX,EBX
// 005b80cc: JZ 0x005b80f8
//   XREF to: 005b80f8 (CONDITIONAL_JUMP)
// 005b80ce: MOV EAX,ESI
// 005b80d0: MOV ECX,EDI
// 005b80d2: MOV EDI,dword ptr [ECX + 0x210]
//   Label: LAB_005b80d2
// 005b80d8: MOV ESI,dword ptr [EAX + 0x210]
// 005b80de: ADD ECX,0x4
// 005b80e1: CMP ESI,EDI
// 005b80e3: SETZ BL
// 005b80e6: ADD EAX,0x4
// 005b80e9: MOVZX ESI,BL
// 005b80ec: INC EDX
// 005b80ed: MOV EBX,ESI
// 005b80ef: CMP EDX,0x10
// 005b80f2: JGE 0x005b80f8
//   XREF to: 005b80f8 (CONDITIONAL_JUMP)
// 005b80f4: TEST ESI,ESI
// 005b80f6: JNZ 0x005b80d2
//   XREF to: 005b80d2 (CONDITIONAL_JUMP)
// 005b80f8: MOV EAX,EBX
//   Label: LAB_005b80f8
// 005b80fa: POP EDI
// 005b80fb: POP ESI
// 005b80fc: POP EBX
// 005b80fd: RET
// 005b80fe: CMP DX,-0x1
//   Label: LAB_005b80fe
// 005b8102: JZ 0x005b8010
//   XREF to: 005b8010 (CONDITIONAL_JUMP)
// 005b8108: XOR EAX,EAX
// 005b810a: JMP 0x005b8015
//   XREF to: 005b8015 (UNCONDITIONAL_JUMP)
// 005b810f: XOR EBX,EBX
//   Label: LAB_005b810f
// 005b8111: MOV EAX,EBX
// 005b8113: POP EDI
// 005b8114: POP ESI
// 005b8115: POP EBX
// 005b8116: RET
