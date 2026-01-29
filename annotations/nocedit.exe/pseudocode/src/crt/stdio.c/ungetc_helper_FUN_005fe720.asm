; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_stdio_c_ungetc_helper_FUN_005fe720(int character,scanf_state_t *state)
;
; Parameters:
; int              Stack[0x4]:4   character
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[1]:
;   crt_stdio.c_vfscanf_FUN_005fe738 at 005fe785
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005fea10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe720
        ;   Label: crt_stdio.c_ungetc_helper_FUN_005fe720
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fe721
    MOV EDX,dword ptr [EAX + 0x8]       ; 005fe725
    PUSH EDX                            ; 005fe728
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fe729
    PUSH EBX                            ; 005fe72d
    CALL crt_stdio.c_fputc_FUN_005fea10 ; 005fe72e
        ;   XREF to: 005fea10 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005fea10(int character, _FILE * stream)
    ADD ESP,0x8                         ; 005fe733
    POP EBX                             ; 005fe736
    RET                                 ; 005fe737

