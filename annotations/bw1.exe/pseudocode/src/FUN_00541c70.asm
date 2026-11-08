; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541c70(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_scat_die_wav_005ede9e+1
;   TerminatedCString s_scat_hurt_wav_005edeae
;   undefined4 DAT_00604c38
;   undefined4 DAT_0061d95c
;   undefined4 DAT_0061dca4
;   undefined4 DAT_01ccf57c
;   undefined4 DAT_01ccf5d8
;
; Called Functions:
;   FUN_004319e0
;   FUN_004e64d0
;   FUN_00524770
;   FUN_005247c0
;   FUN_00541de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541c70
        ;   Label: FUN_00541c70
    PUSH ESI                            ; 00541c71
    PUSH EDI                            ; 00541c72
    PUSH EBP                            ; 00541c73
    MOV EBX,dword ptr [ESP + 0x14]      ; 00541c74
    MOV EDI,dword ptr [ESP + 0x18]      ; 00541c78
    TEST dword ptr [EBX + 0xc1d0],0x7fffffff ; 00541c7c
    JNZ 0x00541cf4                      ; 00541c86
        ;   XREF to: 00541cf4 (CONDITIONAL_JUMP)  ; LAB_00541cf4
    MOV EAX,[0x0061d95c]                ; 00541c88 | DAT_0061d95c
        ;   Label: LAB_00541c88
    CMP dword ptr [EAX + 0x1ec],0x0     ; 00541c8d | DAT_01ccf57c
    JZ 0x00541c9d                       ; 00541c94
        ;   XREF to: 00541c9d (CONDITIONAL_JUMP)  ; LAB_00541c9d
    MOV dword ptr [EDI + 0x4],0x0       ; 00541c96
    MOV EAX,[0x0061d95c]                ; 00541c9d | DAT_0061d95c
        ;   Label: LAB_00541c9d
    MOV ESI,dword ptr [EAX + 0x248]     ; 00541ca2 | DAT_01ccf5d8
    TEST ESI,ESI                        ; 00541ca8
    JZ 0x00541cfd                       ; 00541caa
        ;   XREF to: 00541cfd (CONDITIONAL_JUMP)  ; LAB_00541cfd
    MOV EAX,[0x00604c38]                ; 00541cac | DAT_00604c38
        ;   Label: LAB_00541cac
    MOV dword ptr [EBX + 0xc1d0],EAX    ; 00541cb1
    FLD float ptr [EDI + 0x4]           ; 00541cb7
    FSUBR float ptr [EBX + 0x2538]      ; 00541cba
    LEA ESI,[EBX + 0x158]               ; 00541cc0
    FST float ptr [EBX + 0x2538]        ; 00541cc6
    FLDZ                                ; 00541ccc
    FCOMPP                              ; 00541cce
    FNSTSW AX                           ; 00541cd0
    SAHF                                ; 00541cd2
    JNC 0x00541d02                      ; 00541cd3
        ;   XREF to: 00541d02 (CONDITIONAL_JUMP)  ; LAB_00541d02
    FLD float ptr [EDI + 0x4]           ; 00541cd5
    FLDZ                                ; 00541cd8
    FCOMPP                              ; 00541cda
    FNSTSW AX                           ; 00541cdc
    SAHF                                ; 00541cde
    JC 0x00541d7f                       ; 00541cdf
        ;   XREF to: 00541d7f (CONDITIONAL_JUMP)  ; LAB_00541d7f
    PUSH EDI                            ; 00541ce5
    PUSH EBX                            ; 00541ce6
    CALL FUN_004319e0                   ; 00541ce7
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00541cec
    POP EBP                             ; 00541cef
    POP EDI                             ; 00541cf0
    POP ESI                             ; 00541cf1
    POP EBX                             ; 00541cf2
    RET                                 ; 00541cf3
    MOV dword ptr [EDI + 0x4],0x0       ; 00541cf4
        ;   Label: LAB_00541cf4
    JMP 0x00541c88                      ; 00541cfb
        ;   XREF to: 00541c88 (UNCONDITIONAL_JUMP)  ; LAB_00541c88
    MOV dword ptr [EDI + 0x4],ESI       ; 00541cfd
        ;   Label: LAB_00541cfd
    JMP 0x00541cac                      ; 00541d00
        ;   XREF to: 00541cac (UNCONDITIONAL_JUMP)  ; LAB_00541cac
    PUSH ESI                            ; 00541d02
        ;   Label: LAB_00541d02
    MOV dword ptr [EBX + 0x2538],0x0    ; 00541d03
    CALL FUN_00524770                   ; 00541d0d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541d12
    ADD ESP,0x4                         ; 00541d15
    CMP EAX,0x5                         ; 00541d18
    JZ 0x00541d5e                       ; 00541d1b
        ;   XREF to: 00541d5e (CONDITIONAL_JUMP)  ; LAB_00541d5e
    PUSH ESI                            ; 00541d1d
    CALL FUN_00524770                   ; 00541d1e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00541d23
    ADD ESP,0x4                         ; 00541d26
    CMP EAX,0x4                         ; 00541d29
    JZ 0x00541d5e                       ; 00541d2c
        ;   XREF to: 00541d5e (CONDITIONAL_JUMP)  ; LAB_00541d5e
    PUSH 0x1                            ; 00541d2e
    PUSH 0x4                            ; 00541d30
    PUSH ESI                            ; 00541d32
    MOV dword ptr [EBX + 0x26fc],0x0    ; 00541d33
    CALL FUN_005247c0                   ; 00541d3d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00541d42
    PUSH 0x0                            ; 00541d45
    PUSH 0x42480000                     ; 00541d47
    PUSH 0x32                           ; 00541d4c
    PUSH EBX                            ; 00541d4e
    MOV EBP,dword ptr [0x0061dca4]      ; 00541d4f | DAT_0061dca4
    PUSH EBP                            ; 00541d55
    CALL FUN_004e64d0                   ; 00541d56
        ;   XREF to: 004e64d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e64d0()
    ADD ESP,0x14                        ; 00541d5b
    PUSH 0x5ede9f                       ; 00541d5e | s_scat_die_wav_005ede9e+1
        ;   Label: LAB_00541d5e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00541d63
    PUSH EBX                            ; 00541d69
    CALL dword ptr [EAX + 0x2c]         ; 00541d6a
    ADD ESP,0x8                         ; 00541d6d
    PUSH EDI                            ; 00541d70
    PUSH EBX                            ; 00541d71
    CALL FUN_004319e0                   ; 00541d72
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00541d77
    POP EBP                             ; 00541d7a
    POP EDI                             ; 00541d7b
    POP ESI                             ; 00541d7c
    POP EBX                             ; 00541d7d
    RET                                 ; 00541d7e
    PUSH EBX                            ; 00541d7f
        ;   Label: LAB_00541d7f
    CALL FUN_00541de0                   ; 00541d80
        ;   XREF to: 00541de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00541de0()
    ADD ESP,0x4                         ; 00541d85
    TEST EAX,EAX                        ; 00541d88
    JZ 0x00541dba                       ; 00541d8a
        ;   XREF to: 00541dba (CONDITIONAL_JUMP)  ; LAB_00541dba
    PUSH 0x1                            ; 00541d8c
    PUSH 0xd                            ; 00541d8e
    PUSH ESI                            ; 00541d90
        ;   Label: LAB_00541d90
    CALL FUN_005247c0                   ; 00541d91
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00541d96
    PUSH 0x5edeae                       ; 00541d99 | = "scat-hurt-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00541d9e
    PUSH EBX                            ; 00541da4
    CALL dword ptr [EAX + 0x2c]         ; 00541da5
    ADD ESP,0x8                         ; 00541da8
    PUSH EDI                            ; 00541dab
    PUSH EBX                            ; 00541dac
    CALL FUN_004319e0                   ; 00541dad
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004319e0()
    ADD ESP,0x8                         ; 00541db2
    POP EBP                             ; 00541db5
    POP EDI                             ; 00541db6
    POP ESI                             ; 00541db7
    POP EBX                             ; 00541db8
    RET                                 ; 00541db9
    PUSH 0x1                            ; 00541dba
        ;   Label: LAB_00541dba
    PUSH 0xc                            ; 00541dbc
    JMP 0x00541d90                      ; 00541dbe
        ;   XREF to: 00541d90 (UNCONDITIONAL_JUMP)  ; LAB_00541d90

