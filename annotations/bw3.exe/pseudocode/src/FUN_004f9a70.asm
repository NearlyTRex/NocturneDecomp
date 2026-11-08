; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9a70(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_004f9a50 at 004f9a56
;   FUN_004fa8e0 at 004fa8e5
;   FUN_004fa900 at 004fa920
;   FUN_004fa9c0 at 004fa9dd
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9a70
        ;   Label: FUN_004f9a70
    PUSH ESI                            ; 004f9a71
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f9a72
    MOV EDX,dword ptr [EBX + 0x58]      ; 004f9a76
    TEST EDX,EDX                        ; 004f9a79
    JNZ 0x004f9aa2                      ; 004f9a7b
        ;   XREF to: 004f9aa2 (CONDITIONAL_JUMP)  ; LAB_004f9aa2
    MOV ESI,dword ptr [EBX + 0x60]      ; 004f9a7d
        ;   Label: LAB_004f9a7d
    TEST ESI,ESI                        ; 004f9a80
    JNZ 0x004f9ab4                      ; 004f9a82
        ;   XREF to: 004f9ab4 (CONDITIONAL_JUMP)  ; LAB_004f9ab4
    MOV dword ptr [EBX + 0x5c],0x0      ; 004f9a84
        ;   Label: LAB_004f9a84
    MOV dword ptr [EBX + 0x64],0x0      ; 004f9a8b
    MOV dword ptr [EBX],0x0             ; 004f9a92
    MOV dword ptr [EBX + 0x54],0x0      ; 004f9a98
    POP ESI                             ; 004f9a9f
    POP EBX                             ; 004f9aa0
    RET                                 ; 004f9aa1
    PUSH EDX                            ; 004f9aa2
        ;   Label: LAB_004f9aa2
    CALL FUN_005a3770                   ; 004f9aa3
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 004f9aa8
    MOV dword ptr [EBX + 0x58],0x0      ; 004f9aab
    JMP 0x004f9a7d                      ; 004f9ab2
        ;   XREF to: 004f9a7d (UNCONDITIONAL_JUMP)  ; LAB_004f9a7d
    PUSH ESI                            ; 004f9ab4
        ;   Label: LAB_004f9ab4
    CALL FUN_005a3770                   ; 004f9ab5
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 004f9aba
    MOV dword ptr [EBX + 0x60],0x0      ; 004f9abd
    JMP 0x004f9a84                      ; 004f9ac4
        ;   XREF to: 004f9a84 (UNCONDITIONAL_JUMP)  ; LAB_004f9a84

