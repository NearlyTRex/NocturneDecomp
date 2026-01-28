; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdio_c_scanf_getc_with_width_FUN_00605918(scanf_state_t *state)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
;
; XREF[3]:
;   crt_stdio.c_scanf_float_FUN_00605178 at 00605282
;   crt_stdio.c_scanf_integer_FUN_0060547c at 006055e3
;   crt_stdio.c_scanf_string_FUN_00604e4c at 00604f5b
;
; Called Functions:
;   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00605918
        ;   Label: crt_stdio.c_scanf_getc_with_width_FUN_00605918
    MOV EBX,dword ptr [ESP + 0x8]       ; 00605919
    MOV EAX,dword ptr [EBX + 0xc]       ; 0060591d
    LEA EDX,[EAX + -0x1]                ; 00605920
    MOV dword ptr [EBX + 0xc],EDX       ; 00605923
    TEST EAX,EAX                        ; 00605926
    JZ 0x0060593b                       ; 00605928
        ;   XREF to: 0060593b (CONDITIONAL_JUMP)  ; LAB_0060593b
    PUSH EBX                            ; 0060592a
    CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930 ; 0060592b
        ;   XREF to: 00604930 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_scanf_getc_wrapper_FUN_00604930(scanf_state_t * state)
    MOV DL,byte ptr [EBX + 0x10]        ; 00605930
    ADD ESP,0x4                         ; 00605933
    TEST DL,0x2                         ; 00605936
    JZ 0x00605940                       ; 00605939
        ;   XREF to: 00605940 (CONDITIONAL_JUMP)  ; LAB_00605940
    MOV EAX,0xffffffff                  ; 0060593b
        ;   Label: LAB_0060593b
    POP EBX                             ; 00605940
        ;   Label: LAB_00605940
    RET                                 ; 00605941

