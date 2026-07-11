; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f1e00(undefined4 param_1)
;
;
; XREF[10]:
;   FUN_00422050 at 0042219f
;   FUN_00422370 at 0042261d
;   FUN_004247f0 at 00424959
;   FUN_0043a470 at 0043a893
;   FUN_004a9040 at 004a91e0
;   FUN_004b3880 at 004b3cf3
;   FUN_004baba0 at 004bb137
;   FUN_004fc610 at 004fc7e9
;   FUN_005423c0 at 00542957
;   FUN_005523b0 at 00552470
;
; Called Functions:
;   FUN_004f1c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1e00
        ;   Label: FUN_004f1e00
    PUSH EDX                            ; 004f1e04
    CALL FUN_004f1c90                   ; 004f1e05
        ;   XREF to: 004f1c90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1c90()
    ADD ESP,0x4                         ; 004f1e0a
    RET                                 ; 004f1e0d

