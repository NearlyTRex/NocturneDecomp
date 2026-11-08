; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7950(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6001a0                       ; 004b7950
        ;   Label: FUN_004b7950
    PUSH 0x100                          ; 004b7955
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b795a
    PUSH EDX                            ; 004b795e
    CALL FUN_005c1066                   ; 004b795f
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7964
    RET                                 ; 004b7967

