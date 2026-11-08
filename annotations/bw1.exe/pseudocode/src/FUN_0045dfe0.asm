; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045dfe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fd010                       ; 0045dfe0
        ;   Label: FUN_0045dfe0
    PUSH 0x4                            ; 0045dfe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045dfe7
    PUSH EDX                            ; 0045dfeb
    CALL FUN_005c1066                   ; 0045dfec
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 0045dff1
    RET                                 ; 0045dff4

