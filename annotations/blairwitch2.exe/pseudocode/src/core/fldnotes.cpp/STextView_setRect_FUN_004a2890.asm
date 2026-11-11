; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_setRect_FUN_004a2890(STextView *this_ptr,int param_2,int param_3,int param_4,int param_5)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; undefined4       Stack[0x14]:4   param_5
;
; XREF[5]:
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a434f
;   core_fldnotes.cpp_CFieldNotes_turnToEntry_FUN_004a5490 at 004a54f2
;   core_fldnotes.cpp_FUN_004a5700 at 004a5756
;   unkaddr_004a1200.cpp_FUN_004a1d4e at 004a1d65
;   unkaddr_004a1200.cpp_FUN_004a1dcc at 004a1df5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2890
        ;   Label: core_fldnotes.cpp_STextView_setRect_FUN_004a2890
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2894
    MOV dword ptr [EAX],EDX             ; 004a2898
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a289a
    MOV dword ptr [EAX + 0x4],EDX       ; 004a289e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a28a1
    MOV dword ptr [EAX + 0x8],EDX       ; 004a28a5
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a28a8
    MOV dword ptr [EAX + 0xc],EDX       ; 004a28ac
    RET                                 ; 004a28af

