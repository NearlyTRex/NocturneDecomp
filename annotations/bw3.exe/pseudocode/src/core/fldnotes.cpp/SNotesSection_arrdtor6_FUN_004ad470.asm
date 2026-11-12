; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * core_fldnotes_cpp_SNotesSection_arrdtor6_FUN_004ad470(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e02e0                       ; 004ad470
        ;   Label: core_fldnotes.cpp_SNotesSection_arrdtor6_FUN_004ad470
    PUSH 0x6                            ; 004ad475
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad477
    PUSH EDX                            ; 004ad47b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004ad47c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004ad481
    RET                                 ; 004ad484

