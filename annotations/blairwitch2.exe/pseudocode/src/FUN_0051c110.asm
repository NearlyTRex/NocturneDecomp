; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051c110(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0051b080
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0051c110
        ;   Label: FUN_0051c110
    PUSH EDX                            ; 0051c114
    CALL FUN_0051b080                   ; 0051c115
        ;   XREF to: 0051b080 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b080()
    ADD ESP,0x4                         ; 0051c11a
    MOV dword ptr [EAX + 0x194],0x5fadd4 ; 0051c11d
    RET                                 ; 0051c127

