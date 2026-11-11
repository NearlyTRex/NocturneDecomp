; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * core_fldnotes_cpp_SNotesSection_dtor_FUN_004a3550(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3550
        ;   Label: core_fldnotes.cpp_SNotesSection_dtor_FUN_004a3550
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3551
    PUSH EBX                            ; 004a3555
    CALL core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570 ; 004a3556
        ;   XREF to: 004a3570 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570(SNotesSection * this_ptr)
    ADD ESP,0x4                         ; 004a355b
    MOV EAX,EBX                         ; 004a355e
    POP EBX                             ; 004a3560
    RET                                 ; 004a3561

