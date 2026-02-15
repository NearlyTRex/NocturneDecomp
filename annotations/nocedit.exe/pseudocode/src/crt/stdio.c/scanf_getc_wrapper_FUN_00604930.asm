; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_scanf_getc_wrapper_FUN_00604930(scanf_state_t *state)
;
; Parameters:
; scanf_state_t *  Stack[0x4]:4   state
;
; XREF[8]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604ba5
;   crt_stdio.c_scanf_char_FUN_00604d54 at 00604db8
;   crt_stdio.c_scanf_float_FUN_00605178 at 00605190
;   crt_stdio.c_scanf_getc_with_width_FUN_00605918 at 0060592b
;   crt_stdio.c_scanf_integer_FUN_0060547c at 006054a0
;   crt_stdio.c_scanf_scanset_FUN_00605064 at 006050ed
;   crt_stdio.c_scanf_string_FUN_00604e4c at 00604f22
;   crt_stdio.c_skip_whitespace_FUN_00604d18 at 00604d21
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00604930
        ;   Label: crt_stdio.c_scanf_getc_wrapper_FUN_00604930
    PUSH EAX                            ; 00604934
    CALL dword ptr [EAX]                ; 00604935
    ADD ESP,0x4                         ; 00604937
    RET                                 ; 0060493a

