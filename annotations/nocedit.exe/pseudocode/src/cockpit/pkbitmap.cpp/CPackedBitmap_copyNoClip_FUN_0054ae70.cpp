// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
// Address: 0054ae70
// Address Range: [[0054ae70, 0054afa2]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap * this_ptr, uchar * dest_buffer, int bits_per_pixel, int row_stride)
// Cross-references:
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0 (0054afb0) at 0054afeb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef00
//   TerminatedCString s_CPackedBitmap_copyNoClip_0063ef18
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
//   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
//   cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
          (CPackedBitmap *this_ptr,uchar *dest_buffer,int bits_per_pixel,int row_stride)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  OptimizedMemcpyFunc *unaff_EBP;
  uchar *puVar6;
  int in_stack_00000014;
  int local_18;
  int local_14;
  
  if (this_ptr->row_pointers == (void **)0x0) {
    return;
  }
  if (this_ptr->packed_data == (char *)0x0) {
    return;
  }
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  if ((uint)row_stride < 0x10) {
    if (row_stride == 8) {
      unaff_EBP = cockpit_ckptutil_c_getOptimizedMemcpyFunction_FUN_00431780();
      goto LAB_0054aec0;
    }
  }
  else {
    if ((uint)row_stride < 0x11) {
      unaff_EBP = (OptimizedMemcpyFunc *)
                  cockpit_ckptutil_c_get16BitConversionFunction_FUN_004317a0();
      goto LAB_0054aec0;
    }
    if (row_stride == 0x20) {
      unaff_EBP = (OptimizedMemcpyFunc *)
                  cockpit_ckptutil_c_getRGBConvertersionFunction_FUN_00431770();
      goto LAB_0054aec0;
    }
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 0x29e;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CPackedBitmap::copyNoClip - invalid destBitsPerPixel: %d",row_stride);
LAB_0054aec0:
  local_18 = local_14 << 2;
  puVar5 = (ushort *)(*(int *)(dest_buffer + 0x14) + **(int **)(dest_buffer + 0x20));
  puVar6 = dest_buffer;
  do {
    iVar2 = *(int *)(dest_buffer + 0x14);
    iVar3 = *(int *)(*(int *)(dest_buffer + 0x20) + local_18 + 4);
    for (; puVar5 < (ushort *)(iVar2 + iVar3);
        puVar5 = (ushort *)((uVar1 + 3 & 0xfffffffc) + (int)(puVar5 + 2))) {
      iVar4 = (int)((uint)*puVar5 * in_stack_00000014) >> 0x1f;
      uVar1 = puVar5[1];
      (*unaff_EBP)(puVar6 + ((int)(((uint)*puVar5 * in_stack_00000014 + iVar4 * -8) -
                                  (uint)(iVar4 << 2 < 0)) >> 3),puVar5 + 2,(uint)uVar1);
    }
    local_18 = local_18 + 4;
    local_14 = local_14 + 1;
    puVar6 = puVar6 + row_stride;
  } while (local_14 < *(int *)(dest_buffer + 0x1c));
  return;
}


// Assembly code:
// 0054ae70: PUSH EBX
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
// 0054ae71: PUSH ESI
// 0054ae72: PUSH EDI
// 0054ae73: PUSH EBP
// 0054ae74: SUB ESP,0xc
// 0054ae77: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0054ae7b: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0054ae7f: CMP dword ptr [EAX + 0x20],0x0
// 0054ae83: JZ 0x0054af53
//   XREF to: 0054af53 (CONDITIONAL_JUMP)
// 0054ae89: CMP dword ptr [EAX + 0x14],0x0
// 0054ae8d: JZ 0x0054af53
//   XREF to: 0054af53 (CONDITIONAL_JUMP)
// 0054ae93: TEST EDI,EDI
// 0054ae95: JZ 0x0054af53
//   XREF to: 0054af53 (CONDITIONAL_JUMP)
// 0054ae9b: XOR EBX,EBX
// 0054ae9d: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0054aea1: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0054aea5: CMP ESI,0x10
// 0054aea8: JNC 0x0054af6f
//   XREF to: 0054af6f (CONDITIONAL_JUMP)
// 0054aeae: CMP ESI,0x8
// 0054aeb1: JNZ 0x0054af76
//   XREF to: 0054af76 (CONDITIONAL_JUMP)
// 0054aeb7: CALL cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780
//   XREF to: 00431780 (UNCONDITIONAL_CALL)
// 0054aebc: MOV dword ptr [ESP + 0x8],EAX
//   Label: LAB_0054aebc
//   XREF to: Stack[-0x14] (WRITE)
// 0054aec0: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0054aec0
//   XREF to: Stack[0x4] (READ)
// 0054aec4: MOV EAX,dword ptr [EAX + 0x20]
// 0054aec7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0054aecb: MOV EBP,dword ptr [EAX]
// 0054aecd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0054aed1: MOV EBX,dword ptr [EBX + 0x14]
// 0054aed4: SHL EAX,0x2
// 0054aed7: ADD EBX,EBP
// 0054aed9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0054aedc: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_0054aedc
//   XREF to: Stack[0x4] (READ)
// 0054aee0: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0054aee3: MOV EAX,dword ptr [EAX + 0x20]
// 0054aee6: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0054aeea: ADD EAX,EDX
// 0054aeec: MOV EBP,dword ptr [EBP + 0x14]
// 0054aeef: ADD EBP,dword ptr [EAX + 0x4]
// 0054aef2: CMP EBX,EBP
// 0054aef4: JNC 0x0054af30
//   XREF to: 0054af30 (CONDITIONAL_JUMP)
// 0054aef6: XOR EDX,EDX
//   Label: LAB_0054aef6
// 0054aef8: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 0054aefc: MOV DX,word ptr [EBX]
// 0054aeff: IMUL EDX,EAX
// 0054af02: MOV EAX,EDX
// 0054af04: SAR EDX,0x1f
// 0054af07: SHL EDX,0x3
// 0054af0a: SBB EAX,EDX
// 0054af0c: SAR EAX,0x3
// 0054af0f: XOR ESI,ESI
// 0054af11: LEA ECX,[EBX + 0x4]
// 0054af14: MOV SI,word ptr [EBX + 0x2]
// 0054af18: LEA EBX,[ESI + 0x3]
// 0054af1b: PUSH ESI
// 0054af1c: PUSH ECX
// 0054af1d: ADD EAX,EDI
// 0054af1f: AND BL,0xfc
// 0054af22: PUSH EAX
// 0054af23: ADD EBX,ECX
// 0054af25: CALL dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0054af29: ADD ESP,0xc
// 0054af2c: CMP EBX,EBP
// 0054af2e: JC 0x0054aef6
//   XREF to: 0054aef6 (CONDITIONAL_JUMP)
// 0054af30: MOV EDX,dword ptr [ESP]
//   Label: LAB_0054af30
// 0054af33: MOV ECX,dword ptr [ESP + 0x4]
// 0054af37: ADD EDX,0x4
// 0054af3a: MOV ESI,dword ptr [ESP + 0x28]
// 0054af3e: MOV dword ptr [ESP],EDX
// 0054af41: MOV EDX,dword ptr [ESP + 0x20]
// 0054af45: INC ECX
// 0054af46: ADD EDI,ESI
// 0054af48: MOV EBP,dword ptr [EDX + 0x1c]
// 0054af4b: MOV dword ptr [ESP + 0x4],ECX
// 0054af4f: CMP ECX,EBP
// 0054af51: JL 0x0054aedc
//   XREF to: 0054aedc (CONDITIONAL_JUMP)
// 0054af53: ADD ESP,0xc
//   Label: LAB_0054af53
// 0054af56: POP EBP
// 0054af57: POP EDI
// 0054af58: POP ESI
// 0054af59: POP EBX
// 0054af5a: RET
// 0054af5b: CALL cockpit_ckptutil.c_get16BitConversionFunction_FUN_004317a0
//   Label: LAB_0054af5b
//   XREF to: 004317a0 (UNCONDITIONAL_CALL)
// 0054af60: JMP 0x0054aebc
//   XREF to: 0054aebc (UNCONDITIONAL_JUMP)
// 0054af65: CALL cockpit_ckptutil.c_getRGBConvertersionFunction_FUN_00431770
//   Label: LAB_0054af65
//   XREF to: 00431770 (UNCONDITIONAL_CALL)
// 0054af6a: JMP 0x0054aebc
//   XREF to: 0054aebc (UNCONDITIONAL_JUMP)
// 0054af6f: JBE 0x0054af5b
//   Label: LAB_0054af6f
//   XREF to: 0054af5b (CONDITIONAL_JUMP)
// 0054af71: CMP ESI,0x20
// 0054af74: JZ 0x0054af65
//   XREF to: 0054af65 (CONDITIONAL_JUMP)
// 0054af76: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_0054af76
//   XREF to: Stack[0x10] (READ)
// 0054af7a: PUSH ESI
// 0054af7b: MOV ECX,0x63ef00
//   XREF to: 0063ef00 (DATA)
// 0054af80: MOV EBX,0x29e
// 0054af85: PUSH 0x63ef18
//   XREF to: 0063ef18 (DATA)
// 0054af8a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0054af90: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0054af96: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054af9b: ADD ESP,0x8
// 0054af9e: JMP 0x0054aec0
//   XREF to: 0054aec0 (UNCONDITIONAL_JUMP)
