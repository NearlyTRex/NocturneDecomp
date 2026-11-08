; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_00485610 at 004857be
;   FUN_004a1d00 at 004a6130
;   FUN_004aee60 at 004aeed2
;   FUN_004b16d0 at 004b1717
;   FUN_004b6fe0 at 004b7056
;   FUN_004b7060 at 004b70da
;
; Called Functions:
;   FUN_00454c20
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0x14]         ; 00555ab0
        ;   Label: FUN_00555ab0
    PUSH dword ptr [ESP + 0x14]         ; 00555ab4
    PUSH dword ptr [ESP + 0x14]         ; 00555ab8
    PUSH dword ptr [ESP + 0x14]         ; 00555abc
    PUSH 0x1fe37ec                      ; 00555ac0
    CALL FUN_00454c20                   ; 00555ac5
        ;   XREF to: 00454c20 (UNCONDITIONAL_CALL)  ; undefined FUN_00454c20()
    ADD ESP,0x14                        ; 00555aca
    RET                                 ; 00555acd

