; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STextView * core_fldnotes_cpp_STextView_dtor_FUN_004a8de0(STextView *this_ptr,uint flags)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_STextView_reset_FUN_004a8e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8de0
        ;   Label: core_fldnotes.cpp_STextView_dtor_FUN_004a8de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8de1
    PUSH EBX                            ; 004a8de5
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a8e00 ; 004a8de6
        ;   XREF to: 004a8e00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a8e00(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a8deb
    MOV EAX,EBX                         ; 004a8dee
    POP EBX                             ; 004a8df0
    RET                                 ; 004a8df1

