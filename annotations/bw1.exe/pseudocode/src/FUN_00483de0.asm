; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483de0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[45]:
;   FUN_004101f0 at 00410345
;   FUN_00419280 at 004192db
;   FUN_0041d000 at 0041d086
;   FUN_00422600 at 00422692
;   FUN_00425480 at 004255cc
;   FUN_0042ea10 at 0042eb16
;   FUN_00430060 at 0043008d
;   FUN_00436600 at 004366fc
;   FUN_00441800 at 00441848
;   FUN_0044bf20 at 0044bfb0
;   ... and 35 more
;
; Called Functions:
;   FUN_00406bd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00483de0
        ;   Label: FUN_00483de0
    PUSH EDX                            ; 00483de4
    CALL FUN_00406bd0                   ; 00483de5
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bd0()
    ADD ESP,0x4                         ; 00483dea
    RET                                 ; 00483ded

