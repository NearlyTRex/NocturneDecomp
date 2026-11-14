; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cb620(int *param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005cb630 at 005cb672
;   crt_unknown.c_FUN_005cb688 at 005cb6d7
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005cb620
        ;   Label: crt_unknown.c_FUN_005cb620
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cb621
    CMP dword ptr [EAX],0x0             ; 005cb625
    JZ 0x005cb62e                       ; 005cb628
        ;   XREF to: 005cb62e (CONDITIONAL_JUMP)  ; LAB_005cb62e
    PUSH DS                             ; 005cb62a
    POP ES                              ; 005cb62b
    CALL dword ptr [EAX]                ; 005cb62c
    POP ES                              ; 005cb62e
        ;   Label: LAB_005cb62e
    RET                                 ; 005cb62f

