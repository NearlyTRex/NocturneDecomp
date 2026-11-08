; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d460(int param_1,int param_2)
;
;
; XREF[16]:
;   FUN_0041e9b0 at 0041ea65
;   FUN_0042a280 at 0042a32e
;   FUN_0043f460 at 0043f495
;   FUN_00448060 at 00448180
;   FUN_004512f0 at 0045136c
;   FUN_004540c0 at 0045410b
;   FUN_0045d170 at 0045d2da
;   FUN_00460270 at 004602a2
;   FUN_00461050 at 0046108f
;   FUN_0046e4e0 at 0046e556
;   ... and 6 more
;
; Called Functions:
;   FUN_0046d450
;   FUN_00515500
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046d460
        ;   Label: FUN_0046d460
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046d461
    TEST EDX,EDX                        ; 0046d465
    JZ 0x0046d49e                       ; 0046d467
        ;   XREF to: 0046d49e (CONDITIONAL_JUMP)  ; LAB_0046d49e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d469
    CMP dword ptr [EAX + 0x18],0x0      ; 0046d46d
    JZ 0x0046d49a                       ; 0046d471
        ;   XREF to: 0046d49a (CONDITIONAL_JUMP)  ; LAB_0046d49a
    PUSH 0x2                            ; 0046d473
    CALL FUN_00515500                   ; 0046d475
        ;   XREF to: 00515500 (UNCONDITIONAL_CALL)  ; undefined FUN_00515500()
        ;   Label: LAB_0046d475
    ADD ESP,0x4                         ; 0046d47a
    CMP dword ptr [ESP + 0xc],0x0       ; 0046d47d
    SETZ AL                             ; 0046d482
    AND EAX,0xff                        ; 0046d485
    PUSH EAX                            ; 0046d48a
    MOV ESI,dword ptr [ESP + 0xc]       ; 0046d48b
    PUSH ESI                            ; 0046d48f
    CALL FUN_0046d450                   ; 0046d490
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d450()
    ADD ESP,0x8                         ; 0046d495
    POP ESI                             ; 0046d498
    RET                                 ; 0046d499
    PUSH 0x1                            ; 0046d49a
        ;   Label: LAB_0046d49a
    JMP 0x0046d475                      ; 0046d49c
        ;   XREF to: 0046d475 (UNCONDITIONAL_JUMP)  ; LAB_0046d475
    PUSH EDX                            ; 0046d49e
        ;   Label: LAB_0046d49e
    JMP 0x0046d475                      ; 0046d49f
        ;   XREF to: 0046d475 (UNCONDITIONAL_JUMP)  ; LAB_0046d475

