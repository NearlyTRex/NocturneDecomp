; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7930(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x6001e0                       ; 004b7930
        ;   Label: FUN_004b7930
    PUSH 0x40                           ; 004b7935
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b7937
    PUSH EDX                            ; 004b793b
    CALL FUN_005c1066                   ; 004b793c
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 004b7941
    RET                                 ; 004b7944

