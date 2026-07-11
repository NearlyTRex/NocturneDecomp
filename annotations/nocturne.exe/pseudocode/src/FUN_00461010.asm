; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461010(undefined4 param_1,undefined4 param_2)
;
;
; XREF[26]:
;   FUN_00425cc0 at 00425dc6
;   FUN_004270e0 at 0042710d
;   FUN_00437db0 at 00437df8
;   FUN_0043f330 at 0043f3ae
;   FUN_00482950 at 00482c4b
;   FUN_00482ed0 at 00482f44
;   FUN_00484f00 at 00484fb6
;   FUN_00485a90 at 00486551
;   FUN_00487af0 at 00487ce6
;   FUN_00488bf0 at 00488d1d
;   ... and 16 more
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

