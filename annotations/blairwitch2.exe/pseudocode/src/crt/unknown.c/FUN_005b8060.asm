; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b8060(int param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b8078 at 005b80c5
;
; Called Functions:
;   crt_stdio.c_ungetc_FUN_005b8350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8060
        ;   Label: crt_unknown.c_FUN_005b8060
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b8061
    MOV EDX,dword ptr [EAX + 0x8]       ; 005b8065
    PUSH EDX                            ; 005b8068
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8069
    PUSH EBX                            ; 005b806d
    CALL crt_stdio.c_ungetc_FUN_005b8350 ; 005b806e
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_ungetc_FUN_005b8350(int character, _FILE * stream)
    ADD ESP,0x8                         ; 005b8073
    POP EBX                             ; 005b8076
    RET                                 ; 005b8077

