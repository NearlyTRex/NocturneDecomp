; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * core_fldnotes_cpp_SNotesSection_arrdtor6_FUN_004bf720(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600980                       ; 004bf720
        ;   Label: core_fldnotes.cpp_SNotesSection_arrdtor6_FUN_004bf720
    PUSH 0x6                            ; 004bf725
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bf727
    PUSH EDX                            ; 004bf72b
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 004bf72c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 004bf731
    RET                                 ; 004bf734

