; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b9b0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605900                       ; 0056b9b0
        ;   Label: FUN_0056b9b0
    PUSH 0x28                           ; 0056b9b5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056b9b7
    PUSH EDX                            ; 0056b9bb
    CALL FUN_005c1066                   ; 0056b9bc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 0056b9c1
    RET                                 ; 0056b9c4

