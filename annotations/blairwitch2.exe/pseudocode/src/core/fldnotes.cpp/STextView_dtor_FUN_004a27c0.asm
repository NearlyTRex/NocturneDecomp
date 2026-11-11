; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STextView * core_fldnotes_cpp_STextView_dtor_FUN_004a27c0(STextView *this_ptr,uint flags)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_STextView_reset_FUN_004a27e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a27c0
        ;   Label: core_fldnotes.cpp_STextView_dtor_FUN_004a27c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a27c1
    PUSH EBX                            ; 004a27c5
    CALL core_fldnotes.cpp_STextView_reset_FUN_004a27e0 ; 004a27c6
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004a27e0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a27cb
    MOV EAX,EBX                         ; 004a27ce
    POP EBX                             ; 004a27d0
    RET                                 ; 004a27d1

