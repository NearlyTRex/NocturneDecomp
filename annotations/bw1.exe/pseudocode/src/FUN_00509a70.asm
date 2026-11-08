; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509a70(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_005add50
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509a70
        ;   Label: FUN_00509a70
    MOV EDX,dword ptr [ESP + 0x8]       ; 00509a74
    PUSH EDX                            ; 00509a78
    PUSH EAX                            ; 00509a79
    MOV dword ptr [EAX + 0x590],0x0     ; 00509a7a
    CALL FUN_005add50                   ; 00509a84
        ;   XREF to: 005add50 (UNCONDITIONAL_CALL)  ; undefined FUN_005add50()
    ADD ESP,0x8                         ; 00509a89
    RET                                 ; 00509a8c

