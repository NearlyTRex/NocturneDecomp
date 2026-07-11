; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564c18(undefined4 param_1)
;
;
; XREF[13]:
;   FUN_004351b0 at 004351c8
;   FUN_0043b610 at 0043b635
;   FUN_0044acb0 at 0044acca
;   FUN_00452990 at 00452e46
;   FUN_004533e0 at 00453479
;   FUN_00453ff0 at 00454090
;   FUN_00467330 at 0046735d
;   FUN_00474380 at 004743c2
;   FUN_0048ff70 at 0049003c
;   FUN_00490470 at 0049049a
;   ... and 3 more
;
; Called Functions:
;   FUN_0056497c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564c18
        ;   Label: FUN_00564c18
    PUSH EDX                            ; 00564c1c
    CALL FUN_0056497c                   ; 00564c1d
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 00564c22
    RET                                 ; 00564c25

