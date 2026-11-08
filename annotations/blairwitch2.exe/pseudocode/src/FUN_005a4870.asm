; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4870(undefined4 param_1)
;
;
; XREF[6]:
;   FUN_005a4c00 at 005a4c07
;   FUN_005a5c10 at 005a5c15
;   FUN_005a6030 at 005a6037
;   FUN_005a7be0 at 005a7be6
;   FUN_005a8da0 at 005a8da5
;   FUN_005a9050 at 005a9055
;
; Called Functions:
;   FUN_0059e6a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4870
        ;   Label: FUN_005a4870
    PUSH EDX                            ; 005a4874
    CALL FUN_0059e6a0                   ; 005a4875
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a487a
    RET                                 ; 005a487d

