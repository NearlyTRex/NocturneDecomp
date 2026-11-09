; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNotesSection * unkaddr_004a1200_cpp_SNotesSection_arrdtor6_FUN_004a6750(SNotesSection *this_ptr,uint flags)
;
; Parameters:
; SNotesSection *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f20                       ; 004a6750
        ;   Label: unkaddr_004a1200.cpp_SNotesSection_arrdtor6_FUN_004a6750
    PUSH 0x6                            ; 004a6755
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6757
    PUSH EDX                            ; 004a675b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004a675c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 004a6761
    RET                                 ; 004a6764

