; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c0336(undefined4 param_1)
;
;
; XREF[172]:
;   FUN_00408730 at 00408770
;   FUN_0040e000 at 0040e035
;   FUN_0040e520 at 0040e555
;   FUN_0040e930 at 0040e965
;   FUN_0040ecc0 at 0040ed2c
;   FUN_0040ed50 at 0040edbc
;   FUN_0040ede0 at 0040ee15
;   FUN_0040f130 at 0040f165
;   FUN_00410730 at 00410765
;   FUN_00410780 at 004107b5
;   ... and 162 more
;
; Called Functions:
;   FUN_005c0344
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0336
        ;   Label: FUN_005c0336
    PUSH EDX                            ; 005c033a
    CALL FUN_005c0344                   ; 005c033b
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005c0340
    RET                                 ; 005c0343

