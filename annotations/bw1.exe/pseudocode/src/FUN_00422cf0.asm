; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00422cf0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00422cf0
        ;   Label: FUN_00422cf0
    PUSH EDX                            ; 00422cf4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00422cf5
    PUSH ECX                            ; 00422cf9
    CALL FUN_00409d10                   ; 00422cfa
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d10()
    ADD ESP,0x8                         ; 00422cff
    RET                                 ; 00422d02

