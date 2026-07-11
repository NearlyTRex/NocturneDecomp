; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004764b0(int param_1)
;
;
; XREF[1]:
;   FUN_00476490 at 00476496
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004764b0
        ;   Label: FUN_004764b0
    CMP EDX,dword ptr [0x01bcde24]      ; 004764b4 | DAT_01bcde24
    JZ 0x004764bd                       ; 004764ba
        ;   XREF to: 004764bd (CONDITIONAL_JUMP)  ; LAB_004764bd
    RET                                 ; 004764bc
    XOR ECX,ECX                         ; 004764bd
        ;   Label: LAB_004764bd
    MOV dword ptr [0x01bcde24],ECX      ; 004764bf | DAT_01bcde24
    RET                                 ; 004764c5

