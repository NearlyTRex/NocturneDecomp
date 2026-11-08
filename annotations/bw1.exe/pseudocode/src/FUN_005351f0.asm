; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005351f0(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_00426030 at 0042618f
;   FUN_004263d0 at 004266ff
;   FUN_0042ccf0 at 0042d133
;   FUN_004d9260 at 004da161
;   FUN_004de100 at 004de2a0
;   FUN_004e98b0 at 004e9e11
;   FUN_004f1b50 at 004f21bc
;   FUN_005415c0 at 005417fb
;   FUN_005938c0 at 00593f2c
;   FUN_005ab880 at 005ab952
;
; Called Functions:
;   FUN_00535080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005351f0
        ;   Label: FUN_005351f0
    PUSH EDX                            ; 005351f4
    CALL FUN_00535080                   ; 005351f5
        ;   XREF to: 00535080 (UNCONDITIONAL_CALL)  ; undefined FUN_00535080()
    ADD ESP,0x4                         ; 005351fa
    RET                                 ; 005351fd

