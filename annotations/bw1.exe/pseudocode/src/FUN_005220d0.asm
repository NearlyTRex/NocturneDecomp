; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005220d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005220d0
        ;   Label: FUN_005220d0
    PUSH 0x1e                           ; 005220d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005220d7
    PUSH EDX                            ; 005220db
    CALL FUN_005c1066                   ; 005220dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 005220e1
    RET                                 ; 005220e4

