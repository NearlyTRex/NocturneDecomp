; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00489110(undefined4 param_1)
;
;
; XREF[29]:
;   FUN_00417630 at 004177f8
;   FUN_00421060 at 00421083
;   FUN_00425ab0 at 00425cb3
;   FUN_004425f0 at 0044261e
;   FUN_00444fd0 at 0044501e
;   FUN_00454d20 at 00454f26
;   FUN_00462790 at 004627dd
;   FUN_004c4ee0 at 004c4ee8
;   FUN_004c6a10 at 004c6c17
;   FUN_004d5490 at 004d54bd
;   ... and 19 more
;
; Called Functions:
;   FUN_0042b0e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00489110
        ;   Label: FUN_00489110
    PUSH EDX                            ; 00489114
    CALL FUN_0042b0e0                   ; 00489115
        ;   XREF to: 0042b0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b0e0()
    ADD ESP,0x4                         ; 0048911a
    RET                                 ; 0048911d

