; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b8a0(int param_1)
;
;
; XREF[5]:
;   FUN_00497900 at 0049791c
;   FUN_004d4f30 at 004d56f9
;   FUN_004eea20 at 004eec54
;   FUN_0051b880 at 0051b885
;   FUN_005384d0 at 00538557
;
; Referenced Globals:
;   undefined4 DAT_00591b63
;
; Called Functions:
;   FUN_0051b920
;   FUN_0051c3d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b8a0
        ;   Label: FUN_0051b8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b8a1
    PUSH -0x1                           ; 0051b8a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051b8a7
    PUSH dword ptr [EBX + 0x8]          ; 0051b8aa
    PUSH EDX                            ; 0051b8ad
    PUSH EBX                            ; 0051b8ae
    CALL FUN_0051b920                   ; 0051b8af
        ;   XREF to: 0051b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b920()
    FLD float ptr [EBX + 0x14]          ; 0051b8b4
    ADD ESP,0x10                        ; 0051b8b7
    FCOMP double ptr [0x00591b63]       ; 0051b8ba | DAT_00591b63
    FNSTSW AX                           ; 0051b8c0
    SAHF                                ; 0051b8c2
    JA 0x0051b8c7                       ; 0051b8c3
        ;   XREF to: 0051b8c7 (CONDITIONAL_JUMP)  ; LAB_0051b8c7
    POP EBX                             ; 0051b8c5
    RET                                 ; 0051b8c6
    PUSH 0x51b650                       ; 0051b8c7 | LAB_0051b650
        ;   Label: LAB_0051b8c7
    PUSH -0x1                           ; 0051b8cc
    PUSH dword ptr [EBX + 0x14]         ; 0051b8ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 0051b8d1
    PUSH dword ptr [EBX + 0x1c]         ; 0051b8d4
    PUSH ECX                            ; 0051b8d7
    PUSH EBX                            ; 0051b8d8
    CALL FUN_0051c3d0                   ; 0051b8d9
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c3d0()
    ADD ESP,0x18                        ; 0051b8de
    POP EBX                             ; 0051b8e1
    RET                                 ; 0051b8e2

