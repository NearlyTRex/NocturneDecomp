; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b491(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0056b5ad
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b491
        ;   Label: FUN_0056b491
    MOV ECX,dword ptr [ESP + 0x8]       ; 0056b495
    MOV EDX,dword ptr [EAX + -0x4]      ; 0056b499
    PUSH ECX                            ; 0056b49c
    SUB EAX,EDX                         ; 0056b49d
    PUSH EAX                            ; 0056b49f
    CALL FUN_0056b5ad                   ; 0056b4a0
        ;   XREF to: 0056b5ad (UNCONDITIONAL_CALL)  ; undefined FUN_0056b5ad()
    ADD ESP,0x8                         ; 0056b4a5
    RET                                 ; 0056b4a8

