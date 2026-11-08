; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b9d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6058e0                       ; 0056b9d0
        ;   Label: FUN_0056b9d0
    PUSH 0x40                           ; 0056b9d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056b9d7
    PUSH EDX                            ; 0056b9db
    CALL FUN_005c1066                   ; 0056b9dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 0056b9e1
    RET                                 ; 0056b9e4

