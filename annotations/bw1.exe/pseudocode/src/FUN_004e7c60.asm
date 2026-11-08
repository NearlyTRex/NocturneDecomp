; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e7c60(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004e7c80 at 004e7dbc
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00482170
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004e7c60
        ;   Label: FUN_004e7c60
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e7c65
    PUSH EDX                            ; 004e7c69
    MOV ECX,dword ptr [0x00612560]      ; 004e7c6a | DAT_00612560
    PUSH ECX                            ; 004e7c70 | DAT_01bc120c
    CALL FUN_00482170                   ; 004e7c71
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; undefined FUN_00482170()
    ADD ESP,0xc                         ; 004e7c76
    RET                                 ; 004e7c79

