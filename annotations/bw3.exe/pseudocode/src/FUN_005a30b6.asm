; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a30b6(undefined4 param_1)
;
;
; XREF[180]:
;   FUN_00408770 at 004087b0
;   FUN_0040e420 at 0040e455
;   FUN_0040e470 at 0040e4a5
;   FUN_0040e4c0 at 0040e4f5
;   FUN_0040e510 at 0040e545
;   FUN_0040ea10 at 0040ea45
;   FUN_0040ec90 at 0040ecc5
;   FUN_0040f3d0 at 0040f41c
;   FUN_0040f6d0 at 0040f705
;   FUN_0040f940 at 0040f975
;   ... and 170 more
;
; Called Functions:
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a30b6
        ;   Label: FUN_005a30b6
    PUSH EDX                            ; 005a30ba
    CALL FUN_005a30c4                   ; 005a30bb
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005a30c0
    RET                                 ; 005a30c3

