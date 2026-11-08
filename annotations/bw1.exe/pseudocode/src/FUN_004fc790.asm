; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc790(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409d10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004fc790
        ;   Label: FUN_004fc790
    PUSH EDX                            ; 004fc794
    MOV ECX,dword ptr [ESP + 0x8]       ; 004fc795
    PUSH ECX                            ; 004fc799
    CALL FUN_00409d10                   ; 004fc79a
        ;   XREF to: 00409d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d10()
    ADD ESP,0x8                         ; 004fc79f
    RET                                 ; 004fc7a2

