; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3650(undefined4 param_1)
;
;
; XREF[44]:
;   FUN_0040d320 at 0040d345
;   FUN_00437e10 at 00437e3f
;   FUN_00438ef0 at 00438fa7
;   FUN_00441bf0 at 00441c1c
;   FUN_00448d70 at 00448e76
;   FUN_00453d90 at 00453df6
;   FUN_00459910 at 00459925
;   FUN_00459d00 at 00459d97
;   FUN_0045c2a0 at 0045c2c8
;   FUN_0045daf0 at 0045daf5
;   ... and 34 more
;
; Called Functions:
;   FUN_005a3660
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3650
        ;   Label: FUN_005a3650
    PUSH EDX                            ; 005a3654
    CALL FUN_005a3660                   ; 005a3655
        ;   XREF to: 005a3660 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3660()
    ADD ESP,0x4                         ; 005a365a
    RET                                 ; 005a365d

