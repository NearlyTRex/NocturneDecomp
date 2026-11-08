; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f2b0(undefined4 param_1)
;
;
; XREF[56]:
;   FUN_0040f120 at 0040f135
;   FUN_0040f1c0 at 0040f1d5
;   FUN_00412a20 at 00412a35
;   FUN_00414620 at 00414635
;   FUN_00414c10 at 00414c25
;   FUN_00415410 at 00415435
;   FUN_0041a3d0 at 0041a3e5
;   FUN_0041ee50 at 0041ee65
;   FUN_00422150 at 00422165
;   FUN_0042c000 at 0042c015
;   ... and 46 more
;
; Referenced Globals:
;   undefined4 DAT_005f2820
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f2820                       ; 0040f2b0 | DAT_005f2820
        ;   Label: FUN_0040f2b0
    PUSH 0x32                           ; 0040f2b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040f2b7
    PUSH EDX                            ; 0040f2bb
    CALL FUN_005b854f                   ; 0040f2bc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0040f2c1
    RET                                 ; 0040f2c4

