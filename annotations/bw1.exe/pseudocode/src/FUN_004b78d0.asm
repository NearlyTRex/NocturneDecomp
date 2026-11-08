; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b78d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x600280                       ; 004b78d0
        ;   Label: FUN_004b78d0
    PUSH 0x14                           ; 004b78d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b78d7
    PUSH EDX                            ; 004b78db
    CALL FUN_005c1066                   ; 004b78dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b78e1
    RET                                 ; 004b78e4

