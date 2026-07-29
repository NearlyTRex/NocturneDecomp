; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_unknown_c_ungetc_helper_FUN_005632b0(int character,scanf_state_t *state)
;
; Parameters:
; int              Stack[0x4]:4   character
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[1]:
;   crt_unknown.c_vfscanf_FUN_005632c8 at 00563315
;
; Called Functions:
;   crt_stdio.c_ungetc_FUN_00564740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005632b0
        ;   Label: crt_unknown.c_ungetc_helper_FUN_005632b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005632b1
    MOV EDX,dword ptr [EAX + 0x8]       ; 005632b5
    PUSH EDX                            ; 005632b8
    MOV EBX,dword ptr [ESP + 0xc]       ; 005632b9
    PUSH EBX                            ; 005632bd
    CALL crt_stdio.c_ungetc_FUN_00564740 ; 005632be
        ;   XREF to: 00564740 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_ungetc_FUN_00564740(int character, _FILE * stream)
    ADD ESP,0x8                         ; 005632c3
    POP EBX                             ; 005632c6
    RET                                 ; 005632c7

