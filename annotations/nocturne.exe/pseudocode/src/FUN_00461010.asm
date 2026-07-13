; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461010(undefined4 param_1,undefined4 param_2)
;
;
; XREF[41]:
;   FUN_004110f0 at 00411233
;   FUN_00416430 at 0041648b
;   FUN_00419c20 at 00419c94
;   FUN_0041eaf0 at 0041eb70
;   FUN_00421540 at 00421655
;   FUN_00425cc0 at 00425dc6
;   FUN_004270e0 at 0042710d
;   FUN_0042c4c0 at 0042c5a9
;   FUN_00437db0 at 00437df8
;   FUN_0043f330 at 0043f3ae
;   ... and 31 more
;
; Called Functions:
;   FUN_00408370
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461010
        ;   Label: FUN_00461010
    PUSH EDX                            ; 00461014
    CALL FUN_00408370                   ; 00461015
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined FUN_00408370()
    ADD ESP,0x4                         ; 0046101a
    RET                                 ; 0046101d

