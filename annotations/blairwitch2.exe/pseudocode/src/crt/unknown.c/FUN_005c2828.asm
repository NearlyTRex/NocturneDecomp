; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2828(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2abd
;
; Called Functions:
;   crt_unknown.c_FUN_005c27c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c2828
        ;   Label: crt_unknown.c_FUN_005c2828
    AND EAX,0xf                         ; 005c282c
    SHL EAX,0x4                         ; 005c282f
    ADD EAX,0x2680930                   ; 005c2832
    PUSH EAX                            ; 005c2837
    CALL crt_unknown.c_FUN_005c27c4     ; 005c2838
        ;   XREF to: 005c27c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c27c4()
    ADD ESP,0x4                         ; 005c283d
    RET                                 ; 005c2840

