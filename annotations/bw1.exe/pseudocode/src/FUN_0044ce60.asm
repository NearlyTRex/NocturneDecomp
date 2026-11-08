; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ce60(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_0044ceb0 at 0044cff7
;   FUN_00462820 at 00462845
;
; Referenced Globals:
;   undefined4 DAT_007c6120
;   undefined4 DAT_00857cd4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044ce60
        ;   Label: FUN_0044ce60
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044ce64
    MOV dword ptr [0x007c6120],EDX      ; 0044ce68 | DAT_007c6120
    TEST ECX,ECX                        ; 0044ce6e
    JZ 0x0044ce79                       ; 0044ce70
        ;   XREF to: 0044ce79 (CONDITIONAL_JUMP)  ; LAB_0044ce79
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce72 | DAT_00857cd4
    RET                                 ; 0044ce78
    XOR EDX,EDX                         ; 0044ce79
        ;   Label: LAB_0044ce79
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce7b | DAT_00857cd4
    RET                                 ; 0044ce81

