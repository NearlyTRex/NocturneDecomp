; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d3c90(int param_1)
;
;
; XREF[1]:
;   FUN_00518cd0 at 0051ae1b
;
; Referenced Globals:
;   undefined4 s_N_CHealthItem_005c4deb+2
;   TerminatedCString s_journal_kfm_005c4df9
;   TerminatedCString s_lantern_kfm_005c4e05
;   TerminatedCString s_voodoo_d_kfm_005c4e11
;   TerminatedCString s_UseSPS_005c4e1e
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fe4b0
;   undefined4 DAT_007e17b4
;   undefined4 DAT_01d1a09c
;
; Called Functions:
;   FUN_0040c790
;   FUN_0040c840
;   FUN_0048c150
;   FUN_004d3b20
;   FUN_004dcb40
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3c90
        ;   Label: FUN_004d3c90
    PUSH ESI                            ; 004d3c91
    PUSH EDI                            ; 004d3c92
    PUSH EBP                            ; 004d3c93
    MOV EBP,ESP                         ; 004d3c94
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d3c96
    LEA ESI,[EBX + 0x206e8]             ; 004d3c99
    MOV EAX,dword ptr [ESI + 0x33c]     ; 004d3c9f
    TEST EAX,EAX                        ; 004d3ca5
    JNZ 0x004d3cae                      ; 004d3ca7
        ;   XREF to: 004d3cae (CONDITIONAL_JUMP)  ; LAB_004d3cae
    POP EBP                             ; 004d3ca9
    POP EDI                             ; 004d3caa
    POP ESI                             ; 004d3cab
    POP EBX                             ; 004d3cac
    RET                                 ; 004d3cad
    PUSH 0x5c4ded                       ; 004d3cae | s_N_CHealthItem_005c4deb+2
        ;   Label: LAB_004d3cae
    PUSH EAX                            ; 004d3cb3
    CALL FUN_0040c790                   ; 004d3cb4
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d3cb9
    TEST EAX,EAX                        ; 004d3cbc
    JNZ 0x004d3d86                      ; 004d3cbe
        ;   XREF to: 004d3d86 (CONDITIONAL_JUMP)  ; LAB_004d3d86
    MOV EDX,dword ptr [0x007e17b4]      ; 004d3cc4 | DAT_007e17b4
    PUSH EDX                            ; 004d3cca
    MOV EAX,dword ptr [ESI + 0x33c]     ; 004d3ccb
    PUSH EAX                            ; 004d3cd1
    CALL FUN_0040c840                   ; 004d3cd2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d3cd7
    TEST EAX,EAX                        ; 004d3cda
    JZ 0x004d3cf9                       ; 004d3cdc
        ;   XREF to: 004d3cf9 (CONDITIONAL_JUMP)  ; LAB_004d3cf9
    PUSH 0x5c4df9                       ; 004d3cde | = "journal.kfm"
    ADD EAX,0x1d0                       ; 004d3ce3
    PUSH EAX                            ; 004d3ce8
    CALL FUN_005a3260                   ; 004d3ce9
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004d3cee
    TEST EAX,EAX                        ; 004d3cf1
    JZ 0x004d3d9b                       ; 004d3cf3
        ;   XREF to: 004d3d9b (CONDITIONAL_JUMP)  ; LAB_004d3d9b
    MOV ECX,dword ptr [0x007e17b4]      ; 004d3cf9 | DAT_007e17b4
        ;   Label: LAB_004d3cf9
    LEA EAX,[EBX + 0x206e8]             ; 004d3cff
    PUSH ECX                            ; 004d3d05
    MOV EAX,dword ptr [EAX + 0x33c]     ; 004d3d06
    PUSH EAX                            ; 004d3d0c
    CALL FUN_0040c840                   ; 004d3d0d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d3d12
    TEST EAX,EAX                        ; 004d3d15
    JZ 0x004d3d34                       ; 004d3d17
        ;   XREF to: 004d3d34 (CONDITIONAL_JUMP)  ; LAB_004d3d34
    PUSH 0x5c4e05                       ; 004d3d19 | = "lantern.kfm"
    ADD EAX,0x1d0                       ; 004d3d1e
    PUSH EAX                            ; 004d3d23
    CALL FUN_005a3260                   ; 004d3d24
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004d3d29
    TEST EAX,EAX                        ; 004d3d2c
    JZ 0x004d3dbb                       ; 004d3d2e
        ;   XREF to: 004d3dbb (CONDITIONAL_JUMP)  ; LAB_004d3dbb
    MOV ESI,dword ptr [0x007e17b4]      ; 004d3d34 | DAT_007e17b4
        ;   Label: LAB_004d3d34
    LEA EAX,[EBX + 0x206e8]             ; 004d3d3a
    PUSH ESI                            ; 004d3d40
    MOV EAX,dword ptr [EAX + 0x33c]     ; 004d3d41
    PUSH EAX                            ; 004d3d47
    CALL FUN_0040c840                   ; 004d3d48
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004d3d4d
    TEST EAX,EAX                        ; 004d3d50
    JZ 0x004d3d6b                       ; 004d3d52
        ;   XREF to: 004d3d6b (CONDITIONAL_JUMP)  ; LAB_004d3d6b
    PUSH 0x5c4e11                       ; 004d3d54 | = "voodoo_d.kfm"
    ADD EAX,0x1d0                       ; 004d3d59
    PUSH EAX                            ; 004d3d5e
    CALL FUN_005a3260                   ; 004d3d5f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004d3d64
    TEST EAX,EAX                        ; 004d3d67
    JZ 0x004d3dca                       ; 004d3d69
        ;   XREF to: 004d3dca (CONDITIONAL_JUMP)  ; LAB_004d3dca
    PUSH EBX                            ; 004d3d6b
        ;   Label: LAB_004d3d6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d3d6c
    CALL dword ptr [EAX + 0x148]        ; 004d3d72
    ADD ESP,0x4                         ; 004d3d78
    TEST EAX,EAX                        ; 004d3d7b
    JZ 0x004d3de5                       ; 004d3d7d
        ;   XREF to: 004d3de5 (CONDITIONAL_JUMP)  ; LAB_004d3de5
    XOR EAX,EAX                         ; 004d3d7f
    POP EBP                             ; 004d3d81
    POP EDI                             ; 004d3d82
    POP ESI                             ; 004d3d83
    POP EBX                             ; 004d3d84
    RET                                 ; 004d3d85
    MOV EAX,dword ptr [ESI + 0x33c]     ; 004d3d86
        ;   Label: LAB_004d3d86
    PUSH EAX                            ; 004d3d8c
    PUSH ESI                            ; 004d3d8d
    CALL FUN_004dcb40                   ; 004d3d8e
        ;   XREF to: 004dcb40 (UNCONDITIONAL_CALL)  ; undefined FUN_004dcb40()
    ADD ESP,0x8                         ; 004d3d93
    POP EBP                             ; 004d3d96
    POP EDI                             ; 004d3d97
    POP ESI                             ; 004d3d98
    POP EBX                             ; 004d3d99
    RET                                 ; 004d3d9a
    MOV EAX,[0x005fe4b0]                ; 004d3d9b | DAT_005fe4b0
        ;   Label: LAB_004d3d9b
    MOV EDX,dword ptr [EAX + 0x40]      ; 004d3da0 | DAT_01d1a09c
    XOR EBX,EBX                         ; 004d3da3
    TEST EDX,EDX                        ; 004d3da5
    SETZ AL                             ; 004d3da7
    MOV BL,AL                           ; 004d3daa
    MOV EAX,[0x005fe4b0]                ; 004d3dac | DAT_005fe4b0
    MOV dword ptr [EAX + 0x40],EBX      ; 004d3db1 | DAT_01d1a09c
    XOR EAX,EAX                         ; 004d3db4
    POP EBP                             ; 004d3db6
    POP EDI                             ; 004d3db7
    POP ESI                             ; 004d3db8
    POP EBX                             ; 004d3db9
    RET                                 ; 004d3dba
    MOV dword ptr [EBX + 0xcdec],0x1    ; 004d3dbb
        ;   Label: LAB_004d3dbb
    POP EBP                             ; 004d3dc5
    POP EDI                             ; 004d3dc6
    POP ESI                             ; 004d3dc7
    POP EBX                             ; 004d3dc8
    RET                                 ; 004d3dc9
    PUSH 0x5c4e1e                       ; 004d3dca | = "UseSPS"
        ;   Label: LAB_004d3dca
    MOV EDI,dword ptr [0x005fba60]      ; 004d3dcf | DAT_005fba60
    PUSH EDI                            ; 004d3dd5
    CALL FUN_0048c150                   ; 004d3dd6
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c150()
    ADD ESP,0x8                         ; 004d3ddb
    XOR EAX,EAX                         ; 004d3dde
    POP EBP                             ; 004d3de0
    POP EDI                             ; 004d3de1
    POP ESI                             ; 004d3de2
    POP EBX                             ; 004d3de3
    RET                                 ; 004d3de4
    PUSH EBX                            ; 004d3de5
        ;   Label: LAB_004d3de5
    CALL FUN_004d3b20                   ; 004d3de6
        ;   XREF to: 004d3b20 (UNCONDITIONAL_CALL)  ; undefined FUN_004d3b20()
    ADD ESP,0x4                         ; 004d3deb
    TEST EAX,EAX                        ; 004d3dee
    JZ 0x004d3df9                       ; 004d3df0
        ;   XREF to: 004d3df9 (CONDITIONAL_JUMP)  ; LAB_004d3df9
    XOR EAX,EAX                         ; 004d3df2
    POP EBP                             ; 004d3df4
    POP EDI                             ; 004d3df5
    POP ESI                             ; 004d3df6
    POP EBX                             ; 004d3df7
    RET                                 ; 004d3df8
    MOV EAX,dword ptr [EBX + 0x20a24]   ; 004d3df9
        ;   Label: LAB_004d3df9
    PUSH EAX                            ; 004d3dff
    ADD EBX,0x206e8                     ; 004d3e00
    PUSH EBX                            ; 004d3e06
    CALL FUN_004dcb40                   ; 004d3e07
        ;   XREF to: 004dcb40 (UNCONDITIONAL_CALL)  ; undefined FUN_004dcb40()
    ADD ESP,0x8                         ; 004d3e0c
    POP EBP                             ; 004d3e0f
    POP EDI                             ; 004d3e10
    POP ESI                             ; 004d3e11
    POP EBX                             ; 004d3e12
    RET                                 ; 004d3e13

