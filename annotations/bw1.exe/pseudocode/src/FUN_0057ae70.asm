; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057ae70(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   void* PTR_waveInGetDevCapsA_005d0464 = 001d0962
;   void* PTR_waveInOpen_005d0468 = 001d0976
;   void* PTR_GlobalAlloc_005d05dc = 001d0fca
;   void* PTR_GlobalLock_005d05e4 = 001d0fe6
;   TerminatedCString s_WavInDevice_setMode_Can_005f585e
;   undefined4 DAT_006235d4
;   undefined4 DAT_006235d8
;   undefined4 DAT_006235dc
;   undefined4 DAT_006235e0
;   undefined4 DAT_006235e4
;   undefined4 DAT_006235e8
;   undefined4 DAT_006235ec
;   undefined4 DAT_006235f0
;   undefined4 DAT_006235f4
;   undefined4 DAT_006235f8
;   ... and 12 more
;
; Called Functions:
;   FUN_005773f0
;   GlobalAlloc
;   GlobalLock
;   waveInGetDevCapsA
;   waveInOpen
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ae70
        ;   Label: FUN_0057ae70
    PUSH ESI                            ; 0057ae71
    PUSH EDI                            ; 0057ae72
    PUSH EBP                            ; 0057ae73
    SUB ESP,0x48                        ; 0057ae74
    MOV EDI,dword ptr [0x02c82a38]      ; 0057ae77 | DAT_02c82a38
    MOV EBP,dword ptr [0x02c82a34]      ; 0057ae7d | DAT_02c82a34
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0057ae83
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0057ae87
    PUSH EDX                            ; 0057ae8b
    MOV EAX,dword ptr [EAX]             ; 0057ae8c
    CALL dword ptr [EAX]                ; 0057ae8e
    ADD ESP,0x4                         ; 0057ae90
    TEST EAX,EAX                        ; 0057ae93
    JNZ 0x0057aea5                      ; 0057ae95
        ;   XREF to: 0057aea5 (CONDITIONAL_JUMP)  ; LAB_0057aea5
    MOV EDI,dword ptr [0x02c82a38]      ; 0057ae97 | DAT_02c82a38
        ;   Label: LAB_0057ae97
    ADD ESP,0x48                        ; 0057ae9d
    POP EBP                             ; 0057aea0
    POP EDI                             ; 0057aea1
    POP ESI                             ; 0057aea2
    POP EBX                             ; 0057aea3
    RET                                 ; 0057aea4
    PUSH 0x30                           ; 0057aea5
        ;   Label: LAB_0057aea5
    LEA EAX,[ESP + 0x4]                 ; 0057aea7
    PUSH EAX                            ; 0057aeab
    MOV ECX,dword ptr [0x006235d8]      ; 0057aeac | DAT_006235d8
    PUSH ECX                            ; 0057aeb2
    CALL dword ptr CS:[0x5d0464]        ; 0057aeb3 | PTR_waveInGetDevCapsA_005d0464
    TEST EAX,EAX                        ; 0057aeba
    JNZ 0x0057b0b0                      ; 0057aebc
        ;   XREF to: 0057b0b0 (CONDITIONAL_JUMP)  ; LAB_0057b0b0
    MOV EDI,dword ptr [ESP + 0x64]      ; 0057aec2
    MOV EAX,dword ptr [ESP + 0x68]      ; 0057aec6
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0057aeca
    MOV EBP,dword ptr [ESP + 0x60]      ; 0057aece
    MOV [0x02c82a3c],EAX                ; 0057aed2 | DAT_02c82a3c
    TEST EBX,EBX                        ; 0057aed7
    SETNZ AL                            ; 0057aed9
    AND EAX,0xff                        ; 0057aedc
    MOV [0x02c82a40],EAX                ; 0057aee1 | DAT_02c82a40
    MOV EAX,dword ptr [ESP + 0x28]      ; 0057aee6
    MOV dword ptr [ESP + 0x40],EAX      ; 0057aeea
    MOV EAX,0xffffffff                  ; 0057aeee
        ;   Label: LAB_0057aeee
    MOV ESI,0x1869f                     ; 0057aef3
    XOR EDX,EDX                         ; 0057aef8
    XOR EBX,EBX                         ; 0057aefa
    MOV dword ptr [ESP + 0x44],EAX      ; 0057aefc
    MOV ECX,dword ptr [ESP + 0x40]      ; 0057af00
        ;   Label: LAB_0057af00
    TEST dword ptr [EBX + 0x6235dc],ECX ; 0057af04 | DAT_006235dc | DAT_006235ec
    JZ 0x0057af72                       ; 0057af0a
        ;   XREF to: 0057af72 (CONDITIONAL_JUMP)  ; LAB_0057af72
    MOV ECX,dword ptr [EBX + 0x6235e0]  ; 0057af10 | DAT_006235e0 | DAT_006235f0
    XOR EAX,EAX                         ; 0057af16
    CMP ECX,EBP                         ; 0057af18
    JLE 0x0057af21                      ; 0057af1a
        ;   XREF to: 0057af21 (CONDITIONAL_JUMP)  ; LAB_0057af21
    MOV EAX,0x1                         ; 0057af1c
    MOV ECX,dword ptr [EBX + 0x6235e0]  ; 0057af21 | DAT_006235e0 | DAT_006235f0
        ;   Label: LAB_0057af21
    CMP ECX,EBP                         ; 0057af27
    JGE 0x0057af2e                      ; 0057af29
        ;   XREF to: 0057af2e (CONDITIONAL_JUMP)  ; LAB_0057af2e
    ADD EAX,0x2                         ; 0057af2b
    MOV ECX,dword ptr [EBX + 0x6235e8]  ; 0057af2e | DAT_006235e8 | DAT_006235f8
        ;   Label: LAB_0057af2e
    CMP ECX,dword ptr [0x02c82a3c]      ; 0057af34 | DAT_02c82a3c
    JLE 0x0057af3d                      ; 0057af3a
        ;   XREF to: 0057af3d (CONDITIONAL_JUMP)  ; LAB_0057af3d
    INC EAX                             ; 0057af3c
    MOV ECX,dword ptr [EBX + 0x6235e8]  ; 0057af3d | DAT_006235e8 | DAT_006235f8
        ;   Label: LAB_0057af3d
    CMP ECX,dword ptr [0x02c82a3c]      ; 0057af43 | DAT_02c82a3c
    JGE 0x0057af4e                      ; 0057af49
        ;   XREF to: 0057af4e (CONDITIONAL_JUMP)  ; LAB_0057af4e
    ADD EAX,0x2                         ; 0057af4b
    MOV ECX,dword ptr [EBX + 0x6235e4]  ; 0057af4e | DAT_006235e4 | DAT_006235f4
        ;   Label: LAB_0057af4e
    CMP ECX,EDI                         ; 0057af54
    JLE 0x0057af5b                      ; 0057af56
        ;   XREF to: 0057af5b (CONDITIONAL_JUMP)  ; LAB_0057af5b
    ADD EAX,0x2                         ; 0057af58
    MOV ECX,dword ptr [EBX + 0x6235e4]  ; 0057af5b | DAT_006235e4 | DAT_006235f4
        ;   Label: LAB_0057af5b
    CMP ECX,EDI                         ; 0057af61
    JGE 0x0057af68                      ; 0057af63
        ;   XREF to: 0057af68 (CONDITIONAL_JUMP)  ; LAB_0057af68
    ADD EAX,0x3                         ; 0057af65
    CMP EAX,ESI                         ; 0057af68
        ;   Label: LAB_0057af68
    JGE 0x0057af72                      ; 0057af6a
        ;   XREF to: 0057af72 (CONDITIONAL_JUMP)  ; LAB_0057af72
    MOV dword ptr [ESP + 0x44],EDX      ; 0057af6c
    MOV ESI,EAX                         ; 0057af70
    INC EDX                             ; 0057af72
        ;   Label: LAB_0057af72
    ADD EBX,0x10                        ; 0057af73
    CMP EDX,0xc                         ; 0057af76
    JL 0x0057af00                       ; 0057af79
        ;   XREF to: 0057af00 (CONDITIONAL_JUMP)  ; LAB_0057af00
    MOV EBX,dword ptr [ESP + 0x44]      ; 0057af7b
    MOV dword ptr [0x02c82a38],EDI      ; 0057af7f | DAT_02c82a38
    MOV dword ptr [0x02c82a34],EBP      ; 0057af85 | DAT_02c82a34
    TEST EBX,EBX                        ; 0057af8b
    JL 0x0057b0c0                       ; 0057af8d
        ;   XREF to: 0057b0c0 (CONDITIONAL_JUMP)  ; LAB_0057b0c0
    MOV EAX,EBX                         ; 0057af93
    SHL EAX,0x4                         ; 0057af95
    MOV EDX,dword ptr [EAX + 0x6235e0]  ; 0057af98 | DAT_006235e0
    MOV dword ptr [0x02c82a1c],EDX      ; 0057af9e | DAT_02c82a1c
    MOV ESI,dword ptr [0x02c82a1c]      ; 0057afa4 | DAT_02c82a1c
    MOV EDX,dword ptr [EAX + 0x6235e4]  ; 0057afaa | DAT_006235e4
    MOV EAX,dword ptr [EAX + 0x6235e8]  ; 0057afb0 | DAT_006235e8
    MOV dword ptr [0x02c82a20],EDX      ; 0057afb6 | DAT_02c82a20
    MOV [0x02c82a24],EAX                ; 0057afbc | DAT_02c82a24
    CMP ESI,0x8                         ; 0057afc1
    SETZ AL                             ; 0057afc4
    MOV ECX,0x14                        ; 0057afc7
    AND EAX,0xff                        ; 0057afcc
    MOV EDX,dword ptr [0x02c82a24]      ; 0057afd1 | DAT_02c82a24
    MOV [0x02c82a28],EAX                ; 0057afd7 | DAT_02c82a28
    MOV EAX,EDX                         ; 0057afdc
    SAR EDX,0x1f                        ; 0057afde
    IDIV ECX                            ; 0057afe1
    MOV EDX,dword ptr [0x02c82a24]      ; 0057afe3 | DAT_02c82a24
    MOV [0x02c82a2c],EAX                ; 0057afe9 | DAT_02c82a2c
    ADD EDX,EDX                         ; 0057afee
    MOV ECX,EAX                         ; 0057aff0
    MOV EAX,EDX                         ; 0057aff2
    SAR EDX,0x1f                        ; 0057aff4
    IDIV ECX                            ; 0057aff7
    MOV [0x02c82a30],EAX                ; 0057aff9 | DAT_02c82a30
    CMP EAX,0x14                        ; 0057affe
    JLE 0x0057b00d                      ; 0057b001
        ;   XREF to: 0057b00d (CONDITIONAL_JUMP)  ; LAB_0057b00d
    MOV dword ptr [0x02c82a30],0x14     ; 0057b003 | DAT_02c82a30
    MOV ECX,dword ptr [0x02c82a30]      ; 0057b00d | DAT_02c82a30
        ;   Label: LAB_0057b00d
    MOV dword ptr [0x02c82a38],EDI      ; 0057b013 | DAT_02c82a38
    MOV dword ptr [0x02c82a34],EBP      ; 0057b019 | DAT_02c82a34
    XOR ESI,ESI                         ; 0057b01f
    TEST ECX,ECX                        ; 0057b021
    JLE 0x0057b062                      ; 0057b023
        ;   XREF to: 0057b062 (CONDITIONAL_JUMP)  ; LAB_0057b062
    XOR EBX,EBX                         ; 0057b025
    MOV EAX,[0x02c82a1c]                ; 0057b027 | DAT_02c82a1c
        ;   Label: LAB_0057b027
    MOV EDX,EAX                         ; 0057b02c
    SAR EDX,0x1f                        ; 0057b02e
    SHL EDX,0x3                         ; 0057b031
    SBB EAX,EDX                         ; 0057b034
    SAR EAX,0x3                         ; 0057b036
    IMUL EAX,dword ptr [0x02c82a2c]     ; 0057b039 | DAT_02c82a2c
    IMUL EAX,dword ptr [0x02c82a20]     ; 0057b040 | DAT_02c82a20
    PUSH EAX                            ; 0057b047
    PUSH 0x2002                         ; 0057b048
    CALL dword ptr CS:[0x5d05dc]        ; 0057b04d | PTR_GlobalAlloc_005d05dc
    MOV dword ptr [EBX + 0x2c8297c],EAX ; 0057b054
    TEST EAX,EAX                        ; 0057b05a
    JNZ 0x0057b0dd                      ; 0057b05c
        ;   XREF to: 0057b0dd (CONDITIONAL_JUMP)  ; LAB_0057b0dd
    CMP ESI,dword ptr [0x02c82a30]      ; 0057b062 | DAT_02c82a30
        ;   Label: LAB_0057b062
    JGE 0x0057b13a                      ; 0057b068
        ;   XREF to: 0057b13a (CONDITIONAL_JUMP)  ; LAB_0057b13a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0057b06e
        ;   Label: LAB_0057b06e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0057b072
    PUSH EDX                            ; 0057b076
    MOV EAX,dword ptr [EAX]             ; 0057b077
    CALL dword ptr [EAX]                ; 0057b079
    ADD ESP,0x4                         ; 0057b07b
    TEST EAX,EAX                        ; 0057b07e
    JZ 0x0057ae97                       ; 0057b080
        ;   XREF to: 0057ae97 (CONDITIONAL_JUMP)  ; LAB_0057ae97
    MOV EAX,dword ptr [ESP + 0x44]      ; 0057b086
    SHL EAX,0x4                         ; 0057b08a
    MOV EAX,dword ptr [EAX + 0x6235dc]  ; 0057b08d | DAT_006235dc
    MOV ECX,dword ptr [ESP + 0x40]      ; 0057b093
    NOT EAX                             ; 0057b097
    MOV EBP,dword ptr [0x02c82a34]      ; 0057b099 | DAT_02c82a34
    AND ECX,EAX                         ; 0057b09f
    MOV EDI,dword ptr [0x02c82a38]      ; 0057b0a1 | DAT_02c82a38
    MOV dword ptr [ESP + 0x40],ECX      ; 0057b0a7
    JMP 0x0057aeee                      ; 0057b0ab
        ;   XREF to: 0057aeee (UNCONDITIONAL_JUMP)  ; LAB_0057aeee
    XOR EAX,EAX                         ; 0057b0b0
        ;   Label: LAB_0057b0b0
    MOV EDI,dword ptr [0x02c82a38]      ; 0057b0b2 | DAT_02c82a38
    ADD ESP,0x48                        ; 0057b0b8
    POP EBP                             ; 0057b0bb
    POP EDI                             ; 0057b0bc
    POP ESI                             ; 0057b0bd
    POP EBX                             ; 0057b0be
    RET                                 ; 0057b0bf
    PUSH 0x5f585e                       ; 0057b0c0 | = "WavInDevice::setMode - Can't set any ..."
        ;   Label: LAB_0057b0c0
    CALL FUN_005773f0                   ; 0057b0c5
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 0057b0ca
    XOR EAX,EAX                         ; 0057b0cd
    MOV EDI,dword ptr [0x02c82a38]      ; 0057b0cf | DAT_02c82a38
    ADD ESP,0x48                        ; 0057b0d5
    POP EBP                             ; 0057b0d8
    POP EDI                             ; 0057b0d9
    POP ESI                             ; 0057b0da
    POP EBX                             ; 0057b0db
    RET                                 ; 0057b0dc
    PUSH EAX                            ; 0057b0dd
        ;   Label: LAB_0057b0dd
    CALL dword ptr CS:[0x5d05e4]        ; 0057b0de | PTR_GlobalLock_005d05e4
    MOV dword ptr [EBX + 0x2c829cc],EAX ; 0057b0e5 | DAT_02c829cc
    TEST EAX,EAX                        ; 0057b0eb
    JZ 0x0057b062                       ; 0057b0ed
        ;   XREF to: 0057b062 (CONDITIONAL_JUMP)  ; LAB_0057b062
    PUSH 0x20                           ; 0057b0f3
    PUSH 0x2002                         ; 0057b0f5
    CALL dword ptr CS:[0x5d05dc]        ; 0057b0fa | PTR_GlobalAlloc_005d05dc
    MOV dword ptr [EBX + 0x2c828dc],EAX ; 0057b101
    TEST EAX,EAX                        ; 0057b107
    JZ 0x0057b062                       ; 0057b109
        ;   XREF to: 0057b062 (CONDITIONAL_JUMP)  ; LAB_0057b062
    MOV EAX,dword ptr [EBX + 0x2c828dc] ; 0057b10f
    PUSH EAX                            ; 0057b115
    ADD EBX,0x4                         ; 0057b116
    INC ESI                             ; 0057b119
    CALL dword ptr CS:[0x5d05e4]        ; 0057b11a | PTR_GlobalLock_005d05e4
    MOV EDX,dword ptr [0x02c82a30]      ; 0057b121 | DAT_02c82a30
    MOV dword ptr [EBX + 0x2c82928],EAX ; 0057b127
    CMP ESI,EDX                         ; 0057b12d
    JL 0x0057b027                       ; 0057b12f
        ;   XREF to: 0057b027 (CONDITIONAL_JUMP)  ; LAB_0057b027
    JMP 0x0057b062                      ; 0057b135
        ;   XREF to: 0057b062 (UNCONDITIONAL_JUMP)  ; LAB_0057b062
    MOV EDX,0x1                         ; 0057b13a
        ;   Label: LAB_0057b13a
    MOV AX,[0x02c82a1c]                 ; 0057b13f | DAT_02c82a1c
    MOV word ptr [ESP + 0x30],DX        ; 0057b145
    MOV word ptr [ESP + 0x3e],AX        ; 0057b14a
    XOR EDX,EDX                         ; 0057b14f
    MOV AX,[0x02c82a20]                 ; 0057b151 | DAT_02c82a20
    MOV DX,word ptr [ESP + 0x3e]        ; 0057b157
    MOV word ptr [ESP + 0x32],AX        ; 0057b15c
    MOV EAX,EDX                         ; 0057b161
    SAR EDX,0x1f                        ; 0057b163
    SHL EDX,0x3                         ; 0057b166
    SBB EAX,EDX                         ; 0057b169
    SAR EAX,0x3                         ; 0057b16b
    XOR EDX,EDX                         ; 0057b16e
    MOV DX,word ptr [ESP + 0x32]        ; 0057b170
    IMUL EAX,EDX                        ; 0057b175
    MOV word ptr [ESP + 0x3c],AX        ; 0057b178
    MOV EAX,[0x02c82a24]                ; 0057b17d | DAT_02c82a24
    MOV dword ptr [ESP + 0x34],EAX      ; 0057b182
    XOR EAX,EAX                         ; 0057b186
    MOV EDX,dword ptr [ESP + 0x34]      ; 0057b188
    MOV AX,word ptr [ESP + 0x3c]        ; 0057b18c
    IMUL EDX,EAX                        ; 0057b191
    PUSH 0x0                            ; 0057b194
    PUSH 0x0                            ; 0057b196
    PUSH 0x0                            ; 0057b198
    LEA EAX,[ESP + 0x3c]                ; 0057b19a
    PUSH EAX                            ; 0057b19e
    MOV ESI,dword ptr [0x006235d4]      ; 0057b19f | DAT_006235d4
    PUSH ESI                            ; 0057b1a5
    PUSH 0x2c828d8                      ; 0057b1a6 | DAT_02c828d8
    MOV dword ptr [ESP + 0x50],EDX      ; 0057b1ab
    CALL dword ptr CS:[0x5d0468]        ; 0057b1af | PTR_waveInOpen_005d0468
    TEST EAX,EAX                        ; 0057b1b6
    JNZ 0x0057b06e                      ; 0057b1b8
        ;   XREF to: 0057b06e (CONDITIONAL_JUMP)  ; LAB_0057b06e
    MOV EAX,0x1                         ; 0057b1be
    MOV EDI,dword ptr [0x02c82a38]      ; 0057b1c3 | DAT_02c82a38
    ADD ESP,0x48                        ; 0057b1c9
    POP EBP                             ; 0057b1cc
    POP EDI                             ; 0057b1cd
    POP ESI                             ; 0057b1ce
    POP EBX                             ; 0057b1cf
    RET                                 ; 0057b1d0

