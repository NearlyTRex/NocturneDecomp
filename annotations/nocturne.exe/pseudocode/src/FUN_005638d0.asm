; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005638d0(undefined4 param_1)
;
;
; XREF[51]:
;   FUN_004012a0 at 004012b0
;   FUN_0040e360 at 0040e375
;   FUN_004303d0 at 004304ac
;   FUN_00439390 at 004393ab
;   FUN_004401d0 at 00440220
;   FUN_0044adf0 at 0044ae33
;   FUN_0044bf70 at 0044bf7f
;   FUN_0044c2f0 at 0044c2ff
;   FUN_0044d4c0 at 0044d4d2
;   FUN_0044e2c0 at 0044e2e4
;   ... and 41 more
;
; Called Functions:
;   FUN_005638e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005638d0
        ;   Label: FUN_005638d0
    PUSH EDX                            ; 005638d4
    CALL FUN_005638e0                   ; 005638d5
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638e0()
    ADD ESP,0x4                         ; 005638da
    RET                                 ; 005638dd

