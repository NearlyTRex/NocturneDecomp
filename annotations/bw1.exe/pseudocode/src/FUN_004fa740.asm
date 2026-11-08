; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fa740(int param_1)
;
;
; XREF[1]:
;   FUN_004d6320 at 004d6332
;
; Referenced Globals:
;   undefined4 DAT_01d06ab4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004fa740
        ;   Label: FUN_004fa740
    MOV EDX,dword ptr [0x01d06ab4]      ; 004fa744 | DAT_01d06ab4
    MOV EAX,dword ptr [ECX + 0x4]       ; 004fa74a
    CMP EAX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004fa74d
    JZ 0x004fa757                       ; 004fa754
        ;   XREF to: 004fa757 (CONDITIONAL_JUMP)  ; LAB_004fa757
    RET                                 ; 004fa756
    MOV dword ptr [ECX + 0x348],0x40a00000 ; 004fa757
        ;   Label: LAB_004fa757
    RET                                 ; 004fa761

