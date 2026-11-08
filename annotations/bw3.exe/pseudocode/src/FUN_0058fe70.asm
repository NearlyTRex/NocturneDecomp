; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058fe70(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_bwp3_keddem_dfm_005d8cfd
;   TerminatedCString s_bwp3_keddem_invis_dfm_005d8d0d
;   TerminatedCString s_Bip01_R_Hand_005d8d23
;
; Called Functions:
;   FUN_00489110
;   FUN_004fc070
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058fe70
        ;   Label: FUN_0058fe70
    PUSH ESI                            ; 0058fe71
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058fe72
    CMP dword ptr [EBX + 0x3268],0x0    ; 0058fe76
    JZ 0x0058ff2b                       ; 0058fe7d
        ;   XREF to: 0058ff2b (CONDITIONAL_JUMP)  ; LAB_0058ff2b
    MOV ECX,dword ptr [EBX + 0xd094]    ; 0058fe83
        ;   Label: LAB_0058fe83
    LEA EAX,[EBX + 0x158]               ; 0058fe89
    TEST ECX,ECX                        ; 0058fe8f
    JZ 0x0058ff4e                       ; 0058fe91
        ;   XREF to: 0058ff4e (CONDITIONAL_JUMP)  ; LAB_0058ff4e
    PUSH 0x5d8d0d                       ; 0058fe97 | = "bwp3_keddem_invis.dfm"
    PUSH EAX                            ; 0058fe9c
        ;   Label: LAB_0058fe9c
    CALL FUN_0054eae0                   ; 0058fe9d
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    ADD ESP,0x8                         ; 0058fea2
    LEA ESI,[EBX + 0x158]               ; 0058fea5
    PUSH ESI                            ; 0058feab
    CALL FUN_0054e6b0                   ; 0058feac
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 0058feb1
    PUSH ESI                            ; 0058feb4
    CALL FUN_0054eac0                   ; 0058feb5
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0058feba
    PUSH 0x1                            ; 0058febd
    PUSH 0x5d8d23                       ; 0058febf | = "Bip01 R Hand"
    PUSH EAX                            ; 0058fec4
    CALL FUN_00548090                   ; 0058fec5
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0058feca
    MOV dword ptr [EBX + 0xce5c],0x0    ; 0058fecd
    PUSH EBX                            ; 0058fed7
    MOV dword ptr [EBX + 0xd074],EAX    ; 0058fed8
    CALL FUN_00489110                   ; 0058fede
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 0058fee3
    PUSH ESI                            ; 0058fee6
    CALL FUN_004fc070                   ; 0058fee7
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058feec
    ADD ESP,0x4                         ; 0058feef
    CMP EAX,0x8                         ; 0058fef2
    JZ 0x0058ff00                       ; 0058fef5
        ;   XREF to: 0058ff00 (CONDITIONAL_JUMP)  ; LAB_0058ff00
    CMP dword ptr [EBX + 0xd094],0x0    ; 0058fef7
    JZ 0x0058ff58                       ; 0058fefe
        ;   XREF to: 0058ff58 (CONDITIONAL_JUMP)  ; LAB_0058ff58
    MOV dword ptr [EBX + 0x2540],0x0    ; 0058ff00
        ;   Label: LAB_0058ff00
    MOV dword ptr [EBX + 0xd05c],0x0    ; 0058ff0a
        ;   Label: LAB_0058ff0a
    MOV dword ptr [EBX + 0xcdcc],0x3fc00000 ; 0058ff14
    MOV dword ptr [EBX + 0xd058],0x0    ; 0058ff1e
    POP ESI                             ; 0058ff28
    POP EBX                             ; 0058ff29
    RET                                 ; 0058ff2a
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 0058ff2b
        ;   Label: LAB_0058ff2b
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 0058ff35
    MOV dword ptr [EBX + 0x2538],0x43160000 ; 0058ff3f
    JMP 0x0058fe83                      ; 0058ff49
        ;   XREF to: 0058fe83 (UNCONDITIONAL_JUMP)  ; LAB_0058fe83
    PUSH 0x5d8cfd                       ; 0058ff4e | = "bwp3_keddem.dfm"
        ;   Label: LAB_0058ff4e
    JMP 0x0058fe9c                      ; 0058ff53
        ;   XREF to: 0058fe9c (UNCONDITIONAL_JUMP)  ; LAB_0058fe9c
    MOV dword ptr [EBX + 0x2540],0x2    ; 0058ff58
        ;   Label: LAB_0058ff58
    JMP 0x0058ff0a                      ; 0058ff62
        ;   XREF to: 0058ff0a (UNCONDITIONAL_JUMP)  ; LAB_0058ff0a

