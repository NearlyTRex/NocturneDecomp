; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c280c(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ab4 at 005c2ab8
;
; Called Functions:
;   crt_unknown.c_FUN_005c2760
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c280c
        ;   Label: crt_unknown.c_FUN_005c280c
    AND EAX,0xf                         ; 005c2810
    SHL EAX,0x4                         ; 005c2813
    ADD EAX,0x2680930                   ; 005c2816
    PUSH EAX                            ; 005c281b
    CALL crt_unknown.c_FUN_005c2760     ; 005c281c
        ;   XREF to: 005c2760 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2760()
    ADD ESP,0x4                         ; 005c2821
    RET                                 ; 005c2824

