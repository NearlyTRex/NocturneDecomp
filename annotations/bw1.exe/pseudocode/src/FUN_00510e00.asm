; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510e00(int param_1)
;
;
; Called Functions:
;   FUN_005395d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00510e00
        ;   Label: FUN_00510e00
    PUSH EDX                            ; 00510e04
    CALL FUN_005395d0                   ; 00510e05
        ;   XREF to: 005395d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005395d0()
    ADD ESP,0x4                         ; 00510e0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00510e0d
    MOV dword ptr [EAX + 0x728],0x0     ; 00510e11
    RET                                 ; 00510e1b

