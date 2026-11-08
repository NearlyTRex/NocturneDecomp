; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3f40(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Finger1_005f0263
;   TerminatedCString s_Bip01_R_Finger1_005f0273
;
; Called Functions:
;   FUN_00540e80
;   FUN_0059e6a0
;   FUN_005a8030
;   FUN_005a8050
;   FUN_005a80d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3f40
        ;   Label: FUN_005a3f40
    PUSH ESI                            ; 005a3f41
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3f42
    PUSH EBX                            ; 005a3f46
    CALL FUN_0059e6a0                   ; 005a3f47
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005a3f4c
    PUSH 0x1                            ; 005a3f4f
    PUSH 0x5f0263                       ; 005a3f51 | = "Bip01 L Finger1"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005a3f56
    PUSH EDX                            ; 005a3f5c
    CALL FUN_00540e80                   ; 005a3f5d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a3f62
    PUSH 0x1                            ; 005a3f65
    PUSH 0x5f0273                       ; 005a3f67 | = "Bip01 R Finger1"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005a3f6c
    PUSH ECX                            ; 005a3f72
    MOV dword ptr [EBX + 0x11850],EAX   ; 005a3f73
    CALL FUN_00540e80                   ; 005a3f79
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005a3f7e
    PUSH 0x100                          ; 005a3f81
    LEA ESI,[EBX + 0x264]               ; 005a3f86
    PUSH ESI                            ; 005a3f8c
    MOV dword ptr [EBX + 0x11854],EAX   ; 005a3f8d
    CALL FUN_005a8030                   ; 005a3f93
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8030()
    ADD ESP,0x8                         ; 005a3f98
    PUSH EBX                            ; 005a3f9b
    PUSH ESI                            ; 005a3f9c
    CALL FUN_005a8050                   ; 005a3f9d
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8050()
    ADD ESP,0x8                         ; 005a3fa2
    PUSH 0x0                            ; 005a3fa5
    PUSH ESI                            ; 005a3fa7
    CALL FUN_005a80d0                   ; 005a3fa8
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a80d0()
    ADD ESP,0x8                         ; 005a3fad
    POP ESI                             ; 005a3fb0
    POP EBX                             ; 005a3fb1
    RET                                 ; 005a3fb2

