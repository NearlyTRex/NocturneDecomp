; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b6d0(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0056b6e8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b6d0
        ;   Label: FUN_0056b6d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b6d4
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b6d8
    PUSH ECX                            ; 0056b6db
    SUB EAX,EDX                         ; 0056b6dc
    PUSH EAX                            ; 0056b6de
    CALL FUN_0056b6e8                   ; 0056b6df
        ;   XREF to: 0056b6e8 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b6e8()
    ADD ESP,0x8                         ; 0056b6e4
    RET                                 ; 0056b6e7

