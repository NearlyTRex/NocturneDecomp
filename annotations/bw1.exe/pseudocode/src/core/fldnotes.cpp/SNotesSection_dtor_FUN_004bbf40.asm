; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * __cdecl core_fldnotes_cpp_SNotesSection_dtor_FUN_004bbf40(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004bbf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbf40
        ;   Label: core_fldnotes.cpp_SNotesSection_dtor_FUN_004bbf40
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bbf41
    PUSH EBX                            ; 004bbf45
    CALL core_fldnotes.cpp_SNotesSection_clear_FUN_004bbf60 ; 004bbf46
        ;   XREF to: 004bbf60 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesSection_clear_FUN_004bbf60(SNotesSection * this_ptr)
    ADD ESP,0x4                         ; 004bbf4b
    MOV EAX,EBX                         ; 004bbf4e
    POP EBX                             ; 004bbf50
    RET                                 ; 004bbf51

