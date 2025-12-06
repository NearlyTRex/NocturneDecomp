; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c(int character, scanf_state_t * state)
;
; Parameters:
; int              Stack[0x4]:4   character
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[6]:
;   crt_stdio.c_doscan_FUN_00604950 at 006049ce
;   crt_stdio.c_scanf_float_FUN_00605178 at 006053a5
;   crt_stdio.c_scanf_integer_FUN_0060547c at 00605790
;   crt_stdio.c_scanf_scanset_FUN_00605064 at 0060513d
;   crt_stdio.c_scanf_string_FUN_00604e4c at 00604f80
;   crt_stdio.c_skip_whitespace_FUN_00604d18 at 00604d47
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0060493c
        ;   Label: crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
    PUSH EAX                            ; 00604940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00604941
    PUSH EDX                            ; 00604945
    CALL dword ptr [EAX + 0x4]          ; 00604946
    ADD ESP,0x8                         ; 00604949
    RET                                 ; 0060494c

