; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_skip_whitespace_FUN_00604d18(scanf_state_t *state)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 0060499d
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604d18
        ;   Label: crt_stdio.c_skip_whitespace_FUN_00604d18
    PUSH ESI                            ; 00604d19
    MOV ESI,dword ptr [ESP + 0xc]       ; 00604d1a
    XOR EBX,EBX                         ; 00604d1e
    PUSH ESI                            ; 00604d20
        ;   Label: LAB_00604d20
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 00604d21
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    MOV EDX,EAX                         ; 00604d26
    ADD ESP,0x4                         ; 00604d28
    INC DL                              ; 00604d2b
    AND EDX,0xff                        ; 00604d2d
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 00604d33 | g_CharacterClassificationTable
    JZ 0x00604d3f                       ; 00604d3a
        ;   XREF to: 00604d3f (CONDITIONAL_JUMP)  ; LAB_00604d3f
    INC EBX                             ; 00604d3c
    JMP 0x00604d20                      ; 00604d3d
        ;   XREF to: 00604d20 (UNCONDITIONAL_JUMP)  ; LAB_00604d20
    TEST byte ptr [ESI + 0x10],0x2      ; 00604d3f
        ;   Label: LAB_00604d3f
    JNZ 0x00604d4f                      ; 00604d43
        ;   XREF to: 00604d4f (CONDITIONAL_JUMP)  ; LAB_00604d4f
    PUSH ESI                            ; 00604d45
    PUSH EAX                            ; 00604d46
    CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c ; 00604d47
        ;   XREF to: 0060493c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
    ADD ESP,0x8                         ; 00604d4c
    MOV EAX,EBX                         ; 00604d4f
        ;   Label: LAB_00604d4f
    POP ESI                             ; 00604d51
    POP EBX                             ; 00604d52
    RET                                 ; 00604d53

