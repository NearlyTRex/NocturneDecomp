; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441ca0(undefined4 param_1)
;
;
; XREF[47]:
;   FUN_0040ecc0 at 0040ece5
;   FUN_0040ed50 at 0040ed75
;   FUN_00412690 at 004126b5
;   FUN_00414320 at 00414345
;   FUN_00414900 at 00414925
;   FUN_004150f0 at 00415125
;   FUN_004159f0 at 00415a25
;   FUN_00415a90 at 00415ab5
;   FUN_0041d850 at 0041d875
;   FUN_00424e90 at 00424eb5
;   ... and 37 more
;
; Called Functions:
;   FUN_00441d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ca0
        ;   Label: FUN_00441ca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441ca1
    PUSH EBX                            ; 00441ca5
    CALL FUN_00441d70                   ; 00441ca6
        ;   XREF to: 00441d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00441d70()
    ADD ESP,0x4                         ; 00441cab
    MOV EAX,EBX                         ; 00441cae
    POP EBX                             ; 00441cb0
    RET                                 ; 00441cb1

