; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dfee0(undefined4 param_1,int param_2)
;
;
; XREF[2]:
;   FUN_004b6170 at 004b6584
;   FUN_004eed60 at 004efd2a
;
; Referenced Globals:
;   undefined4 DAT_006141cc
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004dfee0
        ;   Label: FUN_004dfee0
    JZ 0x004dfef3                       ; 004dfee5
        ;   XREF to: 004dfef3 (CONDITIONAL_JUMP)  ; LAB_004dfef3
    MOV EDX,0x1ff                       ; 004dfee7
    MOV dword ptr [0x006141cc],EDX      ; 004dfeec | DAT_006141cc
    RET                                 ; 004dfef2
    MOV EDX,0x7f                        ; 004dfef3
        ;   Label: LAB_004dfef3
    MOV dword ptr [0x006141cc],EDX      ; 004dfef8 | DAT_006141cc
    RET                                 ; 004dfefe

