// Name: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
// Address: 004a01f0
// Address Range: [[004a01f0, 004a02f3]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0(CEditorTools * this_ptr, char * prompt_text, double * result_ptr, bool enable_range_check, double min_value, double max_value, bool show_current_value)
// Globals:
//   TerminatedCString s_s_15g_00623258
//   TerminatedCString s_lf_0062325e
//   TerminatedCString s_Please_enter_a_valid_num_00623262
//   TerminatedCString s_Please_enter_a_valid_int_0062327f
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
          (CEditorTools *this_ptr,char *prompt_text,double *result_ptr,bool enable_range_check,
          double min_value,double max_value,bool show_current_value)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined3 in_stack_00000011;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [6];
  
  if (show_current_value) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              ((char *)&local_30,"%.15g",*(undefined4 *)result_ptr,
               *(undefined4 *)((int)result_ptr + 4));
  }
  else {
    local_30 = local_30 & 0xffffff00;
  }
  while( true ) {
    while( true ) {
      uStack_34 = (undefined4)((ulonglong)max_value >> 0x20);
      local_38 = SUB84(max_value,0);
      iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (this_ptr,prompt_text,(char *)&uStack_2c,0x1e,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = crt_stdio_c_sscanf_FUN_0060013c((char *)auStack_28,"%lf",&stack0xffffffc0);
      if (iVar1 == 1) break;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (this_ptr,"Please enter a valid number.");
    }
    if ((_enable_range_check == 0) ||
       (((double)CONCAT44(local_30,uStack_34) <= (double)CONCAT44(local_38,min_value._4_4_) &&
        ((double)CONCAT44(local_38,min_value._4_4_) <= (double)CONCAT44(auStack_28[0],uStack_2c)))))
    break;
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Please enter a valid integer between %.15g and %.15g.",uStack_34,local_30,uStack_2c);
  }
  *(undefined4 *)result_ptr = min_value._4_4_;
  *(undefined4 *)((int)result_ptr + 4) = local_38;
  return 1;
}


// Assembly code:
// 004a01f0: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
// 004a01f1: PUSH ESI
// 004a01f2: PUSH EDI
// 004a01f3: PUSH EBP
// 004a01f4: MOV EBP,ESP
// 004a01f6: SUB ESP,0x38
// 004a01f9: AND ESP,0xfffffff8
// 004a01fc: MOV EAX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004a01ff: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004a0203: MOV EAX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004a0206: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a0209: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004a020d: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004a0210: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a0213: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004a0217: MOV EAX,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 004a021a: MOV EDI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a021d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004a0221: TEST byte ptr [EBP + 0x34],0x1
//   XREF to: Stack[0x24] (READ)
// 004a0225: JNZ 0x004a024b
//   XREF to: 004a024b (CONDITIONAL_JUMP)
// 004a0227: XOR DL,DL
// 004a0229: MOV byte ptr [ESP + 0x18],DL
//   XREF to: Stack[-0x30] (WRITE)
// 004a022d: PUSH 0x1
//   Label: LAB_004a022d
// 004a022f: PUSH 0x1e
// 004a0231: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004a0235: PUSH EAX
// 004a0236: PUSH ESI
// 004a0237: PUSH EBX
// 004a0238: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004a023d: ADD ESP,0x14
// 004a0240: TEST EAX,EAX
// 004a0242: JNZ 0x004a0269
//   XREF to: 004a0269 (CONDITIONAL_JUMP)
// 004a0244: MOV ESP,EBP
// 004a0246: POP EBP
// 004a0247: POP EDI
// 004a0248: POP ESI
// 004a0249: POP EBX
// 004a024a: RET
// 004a024b: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_004a024b
//   XREF to: Stack[0xc] (READ)
// 004a024e: MOV EDX,dword ptr [EAX + 0x4]
// 004a0251: PUSH EDX
// 004a0252: MOV ECX,dword ptr [EAX]
// 004a0254: PUSH ECX
// 004a0255: PUSH 0x623258
//   XREF to: 00623258 (DATA)
// 004a025a: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x30] (DATA)
// 004a025e: PUSH EAX
// 004a025f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004a0264: ADD ESP,0x10
// 004a0267: JMP 0x004a022d
//   XREF to: 004a022d (UNCONDITIONAL_JUMP)
// 004a0269: MOV EAX,ESP
//   Label: LAB_004a0269
// 004a026b: PUSH EAX
// 004a026c: PUSH 0x62325e
//   XREF to: 0062325e (DATA)
// 004a0271: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x30] (DATA)
// 004a0275: PUSH EAX
// 004a0276: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004a027b: ADD ESP,0xc
// 004a027e: CMP EAX,0x1
// 004a0281: JNZ 0x004a02ba
//   XREF to: 004a02ba (CONDITIONAL_JUMP)
// 004a0283: TEST EDI,EDI
// 004a0285: JZ 0x004a029f
//   XREF to: 004a029f (CONDITIONAL_JUMP)
// 004a0287: FLD double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a028a: FCOMP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x40] (READ)
// 004a028e: FNSTSW AX
// 004a0290: SAHF
// 004a0291: JC 0x004a02cd
//   XREF to: 004a02cd (CONDITIONAL_JUMP)
// 004a0293: FLD double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a0296: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x38] (READ)
// 004a029a: FNSTSW AX
// 004a029c: SAHF
// 004a029d: JA 0x004a02cd
//   XREF to: 004a02cd (CONDITIONAL_JUMP)
// 004a029f: MOV EBX,dword ptr [EBP + 0x1c]
//   Label: LAB_004a029f
//   XREF to: Stack[0xc] (READ)
// 004a02a2: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 004a02a5: MOV dword ptr [EBX],EAX
// 004a02a7: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 004a02ab: MOV dword ptr [EBX + 0x4],EAX
// 004a02ae: MOV EAX,0x1
// 004a02b3: MOV ESP,EBP
// 004a02b5: POP EBP
// 004a02b6: POP EDI
// 004a02b7: POP ESI
// 004a02b8: POP EBX
// 004a02b9: RET
// 004a02ba: PUSH 0x623262
//   Label: LAB_004a02ba
//   XREF to: 00623262 (DATA)
// 004a02bf: PUSH EBX
// 004a02c0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a02c5: ADD ESP,0x8
// 004a02c8: JMP 0x004a022d
//   XREF to: 004a022d (UNCONDITIONAL_JUMP)
// 004a02cd: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_004a02cd
//   XREF to: Stack[-0x34] (READ)
// 004a02d1: PUSH EAX
// 004a02d2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x38] (READ)
// 004a02d6: PUSH EDX
// 004a02d7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x3c] (READ)
// 004a02db: PUSH ECX
// 004a02dc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 004a02e0: PUSH EAX
// 004a02e1: PUSH 0x62327f
//   XREF to: 0062327f (DATA)
// 004a02e6: PUSH EBX
// 004a02e7: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004a02ec: ADD ESP,0x18
// 004a02ef: JMP 0x004a022d
//   XREF to: 004a022d (UNCONDITIONAL_JUMP)
