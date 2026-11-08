; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004669f0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004668a0 at 004669dd
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d9322
;   TerminatedCString s_Error_reading_keyframed_005d9335
;   TerminatedCString s_core_dmodel_cpp_005d9358
;   TerminatedCString s_KFM_file_is_invalid_vers_005d936b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00467650
;   FUN_00468340
;   FUN_005030e0
;   FUN_005bfb70
;   FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004669f0
        ;   Label: FUN_004669f0
    PUSH ESI                            ; 004669f1
    PUSH EDI                            ; 004669f2
    PUSH EBP                            ; 004669f3
    SUB ESP,0x1c                        ; 004669f4
    MOV EBX,dword ptr [ESP + 0x30]      ; 004669f7
    MOV ESI,dword ptr [ESP + 0x34]      ; 004669fb
    PUSH ESI                            ; 004669ff
    PUSH 0x1                            ; 00466a00
    PUSH 0x18                           ; 00466a02
    LEA EAX,[ESP + 0xc]                 ; 00466a04
    PUSH EAX                            ; 00466a08
    CALL FUN_005c0b10                   ; 00466a09
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466a0e
    CMP EAX,0x1                         ; 00466a11
    JNZ 0x00466a69                      ; 00466a14
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    MOV EDI,dword ptr [ESP]             ; 00466a16
        ;   Label: LAB_00466a16
    CMP EDI,0x3                         ; 00466a19
    JGE 0x00466a8e                      ; 00466a1c
        ;   XREF to: 00466a8e (CONDITIONAL_JUMP)  ; LAB_00466a8e
    MOV ECX,dword ptr [ESP]             ; 00466a1e
        ;   Label: LAB_00466a1e
    PUSH ECX                            ; 00466a21
    MOV EAX,0x5d9358                    ; 00466a22 | = "..\\core\\dmodel.cpp"
    MOV EDX,0xed                        ; 00466a27
    PUSH 0x5d936b                       ; 00466a2c | = "KFM file is invalid version %d"
    MOV [0x01d1d400],EAX                ; 00466a31 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00466a36 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00466a3c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00466a41
    XOR EDI,EDI                         ; 00466a44
        ;   Label: LAB_00466a44
    MOV EBP,dword ptr [ESP]             ; 00466a46
    MOV dword ptr [ESP + 0x18],EDI      ; 00466a49
    CMP EBP,0x4                         ; 00466a4d
    JL 0x00466a95                       ; 00466a50
        ;   XREF to: 00466a95 (CONDITIONAL_JUMP)  ; LAB_00466a95
    PUSH ESI                            ; 00466a52
    PUSH 0x1                            ; 00466a53
    PUSH 0x4                            ; 00466a55
    LEA EAX,[ESP + 0x24]                ; 00466a57
    PUSH EAX                            ; 00466a5b
    CALL FUN_005c0b10                   ; 00466a5c
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466a61
    CMP EAX,0x1                         ; 00466a64
    JZ 0x00466a95                       ; 00466a67
        ;   XREF to: 00466a95 (CONDITIONAL_JUMP)  ; LAB_00466a95
    MOV EDX,0x5d9322                    ; 00466a69 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00466a69
    MOV ECX,0xe7                        ; 00466a6e
    PUSH 0x5d9335                       ; 00466a73 | = "Error reading keyframed model file"
    MOV dword ptr [0x01d1d400],EDX      ; 00466a78 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00466a7e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00466a84
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00466a89
    JMP 0x00466a16                      ; 00466a8c
        ;   XREF to: 00466a16 (UNCONDITIONAL_JUMP)  ; LAB_00466a16
    CMP EDI,0x4                         ; 00466a8e
        ;   Label: LAB_00466a8e
    JG 0x00466a1e                       ; 00466a91
        ;   XREF to: 00466a1e (CONDITIONAL_JUMP)  ; LAB_00466a1e
    JMP 0x00466a44                      ; 00466a93
        ;   XREF to: 00466a44 (UNCONDITIONAL_JUMP)  ; LAB_00466a44
    MOV EAX,dword ptr [ESP + 0x14]      ; 00466a95
        ;   Label: LAB_00466a95
    PUSH EAX                            ; 00466a99
    MOV EDX,dword ptr [ESP + 0x14]      ; 00466a9a
    PUSH EDX                            ; 00466a9e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00466a9f
    PUSH ECX                            ; 00466aa3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00466aa4
    PUSH EDI                            ; 00466aa8
    MOV EBP,dword ptr [ESP + 0x14]      ; 00466aa9
    PUSH EBP                            ; 00466aad
    PUSH EBX                            ; 00466aae
    CALL FUN_00467650                   ; 00466aaf
        ;   XREF to: 00467650 (UNCONDITIONAL_CALL)  ; undefined FUN_00467650()
    MOV EDI,dword ptr [EBX + 0x104]     ; 00466ab4
    IMUL EDI,dword ptr [EBX + 0x100]    ; 00466aba
    ADD ESP,0x18                        ; 00466ac1
    LEA EAX,[EDI*0x4 + 0x0]             ; 00466ac4
    PUSH ESI                            ; 00466acb
    SUB EAX,EDI                         ; 00466acc
    PUSH 0x1                            ; 00466ace
    SHL EAX,0x2                         ; 00466ad0
    PUSH EAX                            ; 00466ad3
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00466ad4
    PUSH ECX                            ; 00466ada
    CALL FUN_005c0b10                   ; 00466adb
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466ae0
    CMP EAX,0x1                         ; 00466ae3
    JNZ 0x00466a69                      ; 00466ae6
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    MOV EDI,dword ptr [EBX + 0x110]     ; 00466ae8
    TEST EDI,EDI                        ; 00466aee
    JLE 0x00466b3d                      ; 00466af0
        ;   XREF to: 00466b3d (CONDITIONAL_JUMP)  ; LAB_00466b3d
    PUSH ESI                            ; 00466af2
    PUSH EAX                            ; 00466af3
    LEA EAX,[EDI*0x8 + 0x0]             ; 00466af4
    ADD EAX,EDI                         ; 00466afb
    SHL EAX,0x3                         ; 00466afd
    PUSH EAX                            ; 00466b00
    MOV EBP,dword ptr [EBX + 0x114]     ; 00466b01
    PUSH EBP                            ; 00466b07
    CALL FUN_005c0b10                   ; 00466b08
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466b0d
    CMP EAX,0x1                         ; 00466b10
    JNZ 0x00466a69                      ; 00466b13
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    PUSH ESI                            ; 00466b19
    PUSH EAX                            ; 00466b1a
    MOV EAX,dword ptr [EBX + 0x110]     ; 00466b1b
    SHL EAX,0x2                         ; 00466b21
    PUSH EAX                            ; 00466b24
    MOV EAX,dword ptr [EBX + 0x118]     ; 00466b25
    PUSH EAX                            ; 00466b2b
    CALL FUN_005c0b10                   ; 00466b2c
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466b31
    CMP EAX,0x1                         ; 00466b34
    JNZ 0x00466a69                      ; 00466b37
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    CMP dword ptr [EBX + 0x120],0x0     ; 00466b3d
        ;   Label: LAB_00466b3d
    JLE 0x00466b95                      ; 00466b44
        ;   XREF to: 00466b95 (CONDITIONAL_JUMP)  ; LAB_00466b95
    PUSH 0x120                          ; 00466b46
    PUSH 0x0                            ; 00466b4b
    LEA EAX,[EBX + 0x124]               ; 00466b4d
    PUSH EAX                            ; 00466b53
    XOR EDI,EDI                         ; 00466b54
    CALL FUN_005bfb70                   ; 00466b56
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 00466b5b
    CMP EDI,dword ptr [EBX + 0x120]     ; 00466b5e
        ;   Label: LAB_00466b5e
    JGE 0x00466b95                      ; 00466b64
        ;   XREF to: 00466b95 (CONDITIONAL_JUMP)  ; LAB_00466b95
    PUSH ESI                            ; 00466b66
    LEA EAX,[EDI*0x8 + 0x0]             ; 00466b67
    LEA EDX,[EBX + 0x124]               ; 00466b6e
    ADD EAX,EDI                         ; 00466b74
    PUSH 0x1                            ; 00466b76
    SHL EAX,0x3                         ; 00466b78
    PUSH 0x18                           ; 00466b7b
    ADD EAX,EDX                         ; 00466b7d
    PUSH EAX                            ; 00466b7f
    CALL FUN_005c0b10                   ; 00466b80
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466b85
    CMP EAX,0x1                         ; 00466b88
    JNZ 0x00466a69                      ; 00466b8b
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    ADD EDI,EAX                         ; 00466b91
    JMP 0x00466b5e                      ; 00466b93
        ;   XREF to: 00466b5e (UNCONDITIONAL_JUMP)  ; LAB_00466b5e
    PUSH ESI                            ; 00466b95
        ;   Label: LAB_00466b95
    MOV EAX,dword ptr [EBX + 0x244]     ; 00466b96
    PUSH 0x1                            ; 00466b9c
    SHL EAX,0x3                         ; 00466b9e
    PUSH EAX                            ; 00466ba1
    LEA EAX,[EBX + 0x248]               ; 00466ba2
    PUSH EAX                            ; 00466ba8
    CALL FUN_005c0b10                   ; 00466ba9
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0b10()
    ADD ESP,0x10                        ; 00466bae
    CMP EAX,0x1                         ; 00466bb1
    JNZ 0x00466a69                      ; 00466bb4
        ;   XREF to: 00466a69 (CONDITIONAL_JUMP)  ; LAB_00466a69
    CMP dword ptr [ESP + 0x18],0x0      ; 00466bba
    JNZ 0x00466bc9                      ; 00466bbf
        ;   XREF to: 00466bc9 (CONDITIONAL_JUMP)  ; LAB_00466bc9
    ADD ESP,0x1c                        ; 00466bc1
    POP EBP                             ; 00466bc4
    POP EDI                             ; 00466bc5
    POP ESI                             ; 00466bc6
    POP EBX                             ; 00466bc7
    RET                                 ; 00466bc8
    PUSH EBX                            ; 00466bc9
        ;   Label: LAB_00466bc9
    CALL FUN_00468340                   ; 00466bca
        ;   XREF to: 00468340 (UNCONDITIONAL_CALL)  ; undefined FUN_00468340()
    ADD ESP,0x4                         ; 00466bcf
    ADD ESP,0x1c                        ; 00466bd2
    POP EBP                             ; 00466bd5
    POP EDI                             ; 00466bd6
    POP ESI                             ; 00466bd7
    POP EBX                             ; 00466bd8
    RET                                 ; 00466bd9

