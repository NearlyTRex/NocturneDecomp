; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * core_fldnotes_cpp_SNotesSection_dtor_FUN_004a9ba0(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9ba0
        ;   Label: core_fldnotes.cpp_SNotesSection_dtor_FUN_004a9ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9ba1
    PUSH EBX                            ; 004a9ba5
    CALL core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0 ; 004a9ba6
        ;   XREF to: 004a9bc0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0(SNotesSection * this_ptr)
    ADD ESP,0x4                         ; 004a9bab
    MOV EAX,EBX                         ; 004a9bae
    POP EBX                             ; 004a9bb0
    RET                                 ; 004a9bb1

