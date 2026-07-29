; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_string_ungetc_FUN_00566b18(int ch,scanf_state_t *state)
;
; Parameters:
; int              Stack[0x4]:4   ch
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[1]:
;   crt_unknown.c_vsscanf_FUN_00566b20 at 00566b4a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00566b18
        ;   Label: crt_unknown.c_string_ungetc_FUN_00566b18
    DEC dword ptr [EAX + 0x8]           ; 00566b1c
    RET                                 ; 00566b1f

