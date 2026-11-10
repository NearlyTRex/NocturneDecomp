; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3320(int *param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c3330 at 005c3372
;   crt_unknown.c_FUN_005c3388 at 005c33d7
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005c3320
        ;   Label: crt_unknown.c_FUN_005c3320
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c3321
    CMP dword ptr [EAX],0x0             ; 005c3325
    JZ 0x005c332e                       ; 005c3328
        ;   XREF to: 005c332e (CONDITIONAL_JUMP)  ; LAB_005c332e
    PUSH DS                             ; 005c332a
    POP ES                              ; 005c332b
    CALL dword ptr [EAX]                ; 005c332c
    POP ES                              ; 005c332e
        ;   Label: LAB_005c332e
    RET                                 ; 005c332f

