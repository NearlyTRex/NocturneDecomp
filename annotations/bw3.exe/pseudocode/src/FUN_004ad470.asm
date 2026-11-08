; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad470(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e02e0                       ; 004ad470
        ;   Label: FUN_004ad470
    PUSH 0x6                            ; 004ad475
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ad477
    PUSH EDX                            ; 004ad47b
    CALL FUN_005a3de6                   ; 004ad47c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004ad481
    RET                                 ; 004ad484

