; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; STextView * core_fldnotes_cpp_STextView_dtor_FUN_004bb1a0(STextView *this_ptr,uint flags)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_STextView_reset_FUN_004bb1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb1a0
        ;   Label: core_fldnotes.cpp_STextView_dtor_FUN_004bb1a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb1a1
    PUSH EBX                            ; 004bb1a5
    CALL core_fldnotes.cpp_STextView_reset_FUN_004bb1c0 ; 004bb1a6
        ;   XREF to: 004bb1c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_reset_FUN_004bb1c0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bb1ab
    MOV EAX,EBX                         ; 004bb1ae
    POP EBX                             ; 004bb1b0
    RET                                 ; 004bb1b1

