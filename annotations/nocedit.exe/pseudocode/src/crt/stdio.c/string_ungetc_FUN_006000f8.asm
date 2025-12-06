; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_string_ungetc_FUN_006000f8(int ch, scanf_state_t * state)
;
; Parameters:
; int              Stack[0x4]:4   ch
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[1]:
;   crt_stdio.c_vsscanf_FUN_00600100 at 00600120
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 006000f8
        ;   Label: crt_stdio.c_string_ungetc_FUN_006000f8
    DEC dword ptr [EAX + 0x8]           ; 006000fc
    RET                                 ; 006000ff

