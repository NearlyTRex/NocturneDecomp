; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e6b0(int param_1)
;
;
; XREF[38]:
;   FUN_00417630 at 00417641
;   FUN_00425ab0 at 00425abe
;   FUN_0042b0e0 at 0042b16e
;   FUN_004425f0 at 0044262d
;   FUN_00444fd0 at 00444fde
;   FUN_00454d20 at 00454d31
;   FUN_00462790 at 0046279d
;   FUN_004a4340 at 004a4441
;   FUN_004c4ee0 at 004c4ef7
;   FUN_004c6a10 at 004c6a1e
;   ... and 28 more
;
; Called Functions:
;   FUN_0054e6e0
;   FUN_005500b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e6b0
        ;   Label: FUN_0054e6b0
    ADD EAX,0x2350                      ; 0054e6b4
    PUSH EAX                            ; 0054e6b9
    CALL FUN_005500b0                   ; 0054e6ba
        ;   XREF to: 005500b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005500b0()
    ADD ESP,0x4                         ; 0054e6bf
    PUSH EAX                            ; 0054e6c2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054e6c3
    PUSH EDX                            ; 0054e6c7
    CALL FUN_0054e6e0                   ; 0054e6c8
        ;   XREF to: 0054e6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6e0()
    ADD ESP,0x8                         ; 0054e6cd
    RET                                 ; 0054e6d0

