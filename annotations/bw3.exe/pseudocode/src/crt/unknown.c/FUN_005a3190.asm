; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a3190(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a31a8 at 005a31f5
;
; Called Functions:
;   crt_stdio.c_ungetc_FUN_005a3480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3190
        ;   Label: crt_unknown.c_FUN_005a3190
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a3191
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a3195
    PUSH EDX                            ; 005a3198
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3199
    PUSH EBX                            ; 005a319d
    CALL crt_stdio.c_ungetc_FUN_005a3480 ; 005a319e
        ;   XREF to: 005a3480 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ungetc_FUN_005a3480()
    ADD ESP,0x8                         ; 005a31a3
    POP EBX                             ; 005a31a6
    RET                                 ; 005a31a7

