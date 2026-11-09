; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_FUN_00445a2e(undefined4 *param_1,float *param_2,float *param_3)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_004459cc = 00446016
;   undefined1* PTR_caseD_3_004459d4 = 00445cbc
;   undefined1* PTR_caseD_1_004459dc = 004460ca
;   undefined1* PTR_caseD_3_004459e4 = 00445d5e
;   undefined1* PTR_caseD_1_004459ec = 00446178
;   undefined1* PTR_caseD_3_004459f4 = 00445e01
;   undefined1* PTR_caseD_1_004459fc = 0044622c
;   undefined1* PTR_caseD_3_00445a04 = 00445ea4
;   undefined1* PTR_caseD_1_00445a0c = 004462dc
;   undefined1* PTR_caseD_3_00445a14 = 00445f4a
;   undefined1* PTR_caseD_1_00445a1c = 0044638c
;   undefined1* PTR_caseD_3_00445a24 = 00445ff0
;   undefined4 DAT_0151084c
;   undefined4 DAT_01510850
;   undefined4 DAT_01510854
;   ... and 47 more
;
; Called Functions:
;   core_dcube.cpp_clipEdgeToPlane_FUN_00443db0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00445a2e
        ;   Label: core_dcube.cpp_FUN_00445a2e
    PUSH EBX                            ; 00445a30
    PUSH ESI                            ; 00445a31
    PUSH EDI                            ; 00445a32
    PUSH EBP                            ; 00445a33
    MOV EBP,ESP                         ; 00445a34
    SUB ESP,0x1c                        ; 00445a36
    AND ESP,0xfffffff8                  ; 00445a39
    MOV dword ptr [0x0151084c],0x3      ; 00445a3c | DAT_0151084c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445a46
    MOV EDX,dword ptr [EDX]             ; 00445a49
    CMP EDX,0x1510850                   ; 00445a4b
    JNZ 0x00445be3                      ; 00445a51
        ;   XREF to: 00445be3 (CONDITIONAL_JUMP)  ; LAB_00445be3
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445a57
        ;   Label: LAB_00445a57
    MOV EDX,dword ptr [EDX + 0x4]       ; 00445a5a
    CMP EDX,0x151085c                   ; 00445a5d
    JZ 0x00445a7e                       ; 00445a63
        ;   XREF to: 00445a7e (CONDITIONAL_JUMP)  ; LAB_00445a7e
    FLD float ptr [EDX]                 ; 00445a65
    FLD float ptr [EDX + 0x8]           ; 00445a67
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445a6a
    MOV [0x01510860],EAX                ; 00445a6d | DAT_01510860
    FSTP float ptr [0x01510864]         ; 00445a72 | DAT_01510864
    FSTP float ptr [0x0151085c]         ; 00445a78 | DAT_0151085c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445a7e
        ;   Label: LAB_00445a7e
    MOV EDX,dword ptr [EDX + 0x8]       ; 00445a81
    CMP EDX,0x1510868                   ; 00445a84
    JZ 0x00445aa5                       ; 00445a8a
        ;   XREF to: 00445aa5 (CONDITIONAL_JUMP)  ; LAB_00445aa5
    FLD float ptr [EDX]                 ; 00445a8c
    FLD float ptr [EDX + 0x8]           ; 00445a8e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445a91
    MOV [0x0151086c],EAX                ; 00445a94 | DAT_0151086c
    FSTP float ptr [0x01510870]         ; 00445a99 | DAT_01510870
    FSTP float ptr [0x01510868]         ; 00445a9f | DAT_01510868
    MOV EDI,0xffffffff                  ; 00445aa5
        ;   Label: LAB_00445aa5
    MOV ESI,dword ptr [0x0151084c]      ; 00445aaa | DAT_0151084c
    XOR ECX,ECX                         ; 00445ab0
    XOR EBX,EBX                         ; 00445ab2
    MOV dword ptr [ESP + 0x10],ECX      ; 00445ab4
    TEST ESI,ESI                        ; 00445ab8
    JLE 0x00445b4b                      ; 00445aba
        ;   XREF to: 00445b4b (CONDITIONAL_JUMP)  ; LAB_00445b4b
    MOV ESI,0x1510850                   ; 00445ac0
    FLD float ptr [ESI]                 ; 00445ac5
        ;   Label: LAB_00445ac5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00445ac7
    MOV ECX,ESI                         ; 00445aca
    XOR EDX,EDX                         ; 00445acc
    FCOMP float ptr [EAX]               ; 00445ace
    FNSTSW AX                           ; 00445ad0
    SAHF                                ; 00445ad2
    JBE 0x00445ada                      ; 00445ad3
        ;   XREF to: 00445ada (CONDITIONAL_JUMP)  ; LAB_00445ada
    MOV EDX,0x1                         ; 00445ad5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00445ada
        ;   Label: LAB_00445ada
    FLD float ptr [ECX + 0x4]           ; 00445add
    FCOMP float ptr [EAX + 0x4]         ; 00445ae0
    FNSTSW AX                           ; 00445ae3
    SAHF                                ; 00445ae5
    JBE 0x00445aeb                      ; 00445ae6
        ;   XREF to: 00445aeb (CONDITIONAL_JUMP)  ; LAB_00445aeb
    OR DL,0x2                           ; 00445ae8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00445aeb
        ;   Label: LAB_00445aeb
    FLD float ptr [ECX + 0x8]           ; 00445aee
    FCOMP float ptr [EAX + 0x8]         ; 00445af1
    FNSTSW AX                           ; 00445af4
    SAHF                                ; 00445af6
    JBE 0x00445afc                      ; 00445af7
        ;   XREF to: 00445afc (CONDITIONAL_JUMP)  ; LAB_00445afc
    OR DL,0x4                           ; 00445af9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445afc
        ;   Label: LAB_00445afc
    FLD float ptr [ECX]                 ; 00445aff
    FCOMP float ptr [EAX]               ; 00445b01
    FNSTSW AX                           ; 00445b03
    SAHF                                ; 00445b05
    JNC 0x00445b0b                      ; 00445b06
        ;   XREF to: 00445b0b (CONDITIONAL_JUMP)  ; LAB_00445b0b
    OR DL,0x8                           ; 00445b08
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445b0b
        ;   Label: LAB_00445b0b
    FLD float ptr [ECX + 0x4]           ; 00445b0e
    FCOMP float ptr [EAX + 0x4]         ; 00445b11
    FNSTSW AX                           ; 00445b14
    SAHF                                ; 00445b16
    JNC 0x00445b1c                      ; 00445b17
        ;   XREF to: 00445b1c (CONDITIONAL_JUMP)  ; LAB_00445b1c
    OR DL,0x10                          ; 00445b19
    MOV EAX,dword ptr [EBP + 0x18]      ; 00445b1c
        ;   Label: LAB_00445b1c
    FLD float ptr [ECX + 0x8]           ; 00445b1f
    FCOMP float ptr [EAX + 0x8]         ; 00445b22
    FNSTSW AX                           ; 00445b25
    SAHF                                ; 00445b27
    JNC 0x00445b2d                      ; 00445b28
        ;   XREF to: 00445b2d (CONDITIONAL_JUMP)  ; LAB_00445b2d
    OR DL,0x20                          ; 00445b2a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00445b2d
        ;   Label: LAB_00445b2d
    ADD ESI,0xc                         ; 00445b31
    INC EBX                             ; 00445b34
    AND EDI,EDX                         ; 00445b35
    OR EAX,EDX                          ; 00445b37
    MOV EDX,dword ptr [0x0151084c]      ; 00445b39 | DAT_0151084c
    MOV dword ptr [ESP + 0x10],EAX      ; 00445b3f
    CMP EBX,EDX                         ; 00445b43
    JL 0x00445ac5                       ; 00445b45
        ;   XREF to: 00445ac5 (CONDITIONAL_JUMP)  ; LAB_00445ac5
    CMP dword ptr [ESP + 0x10],0x0      ; 00445b4b
        ;   Label: LAB_00445b4b
    JNZ 0x00445c01                      ; 00445b50
        ;   XREF to: 00445c01 (CONDITIONAL_JUMP)  ; LAB_00445c01
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445b56
    MOV ESI,0x3                         ; 00445b59
    MOV EDX,dword ptr [EDX]             ; 00445b5e
    MOV dword ptr [0x01510ce4],ESI      ; 00445b60 | DAT_01510ce4
    CMP EDX,0x1510ce8                   ; 00445b66
    JZ 0x00445b87                       ; 00445b6c
        ;   XREF to: 00445b87 (CONDITIONAL_JUMP)  ; LAB_00445b87
    FLD float ptr [EDX]                 ; 00445b6e
    FLD float ptr [EDX + 0x8]           ; 00445b70
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445b73
    MOV [0x01510cec],EAX                ; 00445b76 | DAT_01510cec
    FSTP float ptr [0x01510cf0]         ; 00445b7b | DAT_01510cf0
    FSTP float ptr [0x01510ce8]         ; 00445b81 | DAT_01510ce8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445b87
        ;   Label: LAB_00445b87
    MOV EDX,dword ptr [EDX + 0x4]       ; 00445b8a
    CMP EDX,0x1510cf4                   ; 00445b8d
    JZ 0x00445bae                       ; 00445b93
        ;   XREF to: 00445bae (CONDITIONAL_JUMP)  ; LAB_00445bae
    FLD float ptr [EDX]                 ; 00445b95
    FLD float ptr [EDX + 0x8]           ; 00445b97
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445b9a
    MOV [0x01510cf8],EAX                ; 00445b9d | DAT_01510cf8
    FSTP float ptr [0x01510cfc]         ; 00445ba2 | DAT_01510cfc
    FSTP float ptr [0x01510cf4]         ; 00445ba8 | DAT_01510cf4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00445bae
        ;   Label: LAB_00445bae
    MOV EDX,dword ptr [EDX + 0x8]       ; 00445bb1
    CMP EDX,0x1510d00                   ; 00445bb4
    JZ 0x00445bd5                       ; 00445bba
        ;   XREF to: 00445bd5 (CONDITIONAL_JUMP)  ; LAB_00445bd5
    FLD float ptr [EDX]                 ; 00445bbc
    FLD float ptr [EDX + 0x8]           ; 00445bbe
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445bc1
    MOV [0x01510d04],EAX                ; 00445bc4 | DAT_01510d04
    FSTP float ptr [0x01510d08]         ; 00445bc9 | DAT_01510d08
    FSTP float ptr [0x01510d00]         ; 00445bcf | DAT_01510d00
    MOV ECX,0x1                         ; 00445bd5
        ;   Label: LAB_00445bd5
    MOV EAX,ECX                         ; 00445bda
    MOV ESP,EBP                         ; 00445bdc
    POP EBP                             ; 00445bde
    POP EDI                             ; 00445bdf
    POP ESI                             ; 00445be0
    POP EBX                             ; 00445be1
    RET                                 ; 00445be2
    FLD float ptr [EDX]                 ; 00445be3
        ;   Label: LAB_00445be3
    FLD float ptr [EDX + 0x8]           ; 00445be5
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445be8
    MOV [0x01510854],EAX                ; 00445beb | DAT_01510854
    FSTP float ptr [0x01510858]         ; 00445bf0 | DAT_01510858
    FSTP float ptr [0x01510850]         ; 00445bf6 | DAT_01510850
    JMP 0x00445a57                      ; 00445bfc
        ;   XREF to: 00445a57 (UNCONDITIONAL_JUMP)  ; LAB_00445a57
    TEST EDI,EDI                        ; 00445c01
        ;   Label: LAB_00445c01
    JNZ 0x0044600b                      ; 00445c03
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00445c09
    MOV EBX,dword ptr [0x0151084c]      ; 00445c0c | DAT_0151084c
    MOV dword ptr [0x015109d4],EDI      ; 00445c12 | DAT_015109d4
    MOV dword ptr [0x01510a98],EDI      ; 00445c18 | DAT_01510a98
    MOV dword ptr [0x01510b5c],EDI      ; 00445c1e | DAT_01510b5c
    MOV dword ptr [0x01510c20],EDI      ; 00445c24 | DAT_01510c20
    MOV dword ptr [0x01510ce4],EDI      ; 00445c2a | DAT_01510ce4
    MOV dword ptr [0x01510910],EDI      ; 00445c30 | DAT_01510910
    MOV EDX,dword ptr [EDX + 0x4]       ; 00445c36
    XOR ESI,ESI                         ; 00445c39
    MOV dword ptr [ESP + 0x14],EDX      ; 00445c3b
    TEST EBX,EBX                        ; 00445c3f
    JLE 0x00445cca                      ; 00445c41
        ;   XREF to: 00445cca (CONDITIONAL_JUMP)  ; LAB_00445cca
    MOV EBX,0x1510850                   ; 00445c47
    MOV EDI,dword ptr [0x0151084c]      ; 00445c4c | DAT_0151084c
        ;   Label: LAB_00445c4c
    LEA ECX,[ESI + 0x1]                 ; 00445c52
    CMP ECX,EDI                         ; 00445c55
    JNZ 0x00445c5b                      ; 00445c57
        ;   XREF to: 00445c5b (CONDITIONAL_JUMP)  ; LAB_00445c5b
    XOR ECX,EDI                         ; 00445c59
    IMUL ECX,ECX,0xc                    ; 00445c5b
        ;   Label: LAB_00445c5b
    FLD float ptr [EBX + 0x4]           ; 00445c5e
    MOV EDI,0x1510850                   ; 00445c61
    MOV EDX,EBX                         ; 00445c66
    ADD EDI,ECX                         ; 00445c68
    XOR ECX,ECX                         ; 00445c6a
    FCOMP float ptr [ESP + 0x14]        ; 00445c6c
    FNSTSW AX                           ; 00445c70
    SAHF                                ; 00445c72
    JBE 0x00445c7a                      ; 00445c73
        ;   XREF to: 00445c7a (CONDITIONAL_JUMP)  ; LAB_00445c7a
    MOV ECX,0x1                         ; 00445c75
    FLD float ptr [EDI + 0x4]           ; 00445c7a
        ;   Label: LAB_00445c7a
    FCOMP float ptr [ESP + 0x14]        ; 00445c7d
    FNSTSW AX                           ; 00445c81
    SAHF                                ; 00445c83
    JBE 0x00445c89                      ; 00445c84
        ;   XREF to: 00445c89 (CONDITIONAL_JUMP)  ; LAB_00445c89
    OR CL,0x2                           ; 00445c86
    CMP ECX,0x3                         ; 00445c89
        ;   Label: LAB_00445c89
    JA 0x00445cbc                       ; 00445c8c
        ;   XREF to: 00445cbc (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4459c8]  ; 00445c8e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01510910],0xc ; 00445c95 | DAT_01510910
        ;   Label: caseD_0
    ADD ECX,0x1510914                   ; 00445c9c
    CMP ECX,EDX                         ; 00445ca2
    JZ 0x00445cb6                       ; 00445ca4
        ;   XREF to: 00445cb6 (CONDITIONAL_JUMP)  ; LAB_00445cb6
    MOV EAX,dword ptr [EDX]             ; 00445ca6
    MOV dword ptr [ECX],EAX             ; 00445ca8 | DAT_01510914
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445caa
    MOV dword ptr [ECX + 0x4],EAX       ; 00445cad | DAT_01510918
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445cb0
    MOV dword ptr [ECX + 0x8],EAX       ; 00445cb3 | DAT_0151091c
    INC dword ptr [0x01510910]          ; 00445cb6 | DAT_01510910
        ;   Label: LAB_00445cb6
    MOV EDI,dword ptr [0x0151084c]      ; 00445cbc | DAT_0151084c
        ;   Label: caseD_3
    INC ESI                             ; 00445cc2
    ADD EBX,0xc                         ; 00445cc3
    CMP ESI,EDI                         ; 00445cc6
    JL 0x00445c4c                       ; 00445cc8
        ;   XREF to: 00445c4c (CONDITIONAL_JUMP)  ; LAB_00445c4c
    MOV EAX,[0x01510910]                ; 00445cca | DAT_01510910
        ;   Label: LAB_00445cca
    CMP EAX,0x3                         ; 00445ccf
    JL 0x0044600b                       ; 00445cd2
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00445cd8
    MOV EDX,dword ptr [EDX + 0x4]       ; 00445cdb
    XOR ESI,ESI                         ; 00445cde
    MOV dword ptr [ESP],EDX             ; 00445ce0
    TEST EAX,EAX                        ; 00445ce3
    JLE 0x00445d6c                      ; 00445ce5
        ;   XREF to: 00445d6c (CONDITIONAL_JUMP)  ; LAB_00445d6c
    MOV EBX,0x1510914                   ; 00445ceb
    MOV EDI,dword ptr [0x01510910]      ; 00445cf0 | DAT_01510910
        ;   Label: LAB_00445cf0
    LEA ECX,[ESI + 0x1]                 ; 00445cf6
    CMP ECX,EDI                         ; 00445cf9
    JNZ 0x00445cff                      ; 00445cfb
        ;   XREF to: 00445cff (CONDITIONAL_JUMP)  ; LAB_00445cff
    XOR ECX,EDI                         ; 00445cfd
    IMUL ECX,ECX,0xc                    ; 00445cff
        ;   Label: LAB_00445cff
    FLD float ptr [EBX + 0x4]           ; 00445d02 | DAT_01510918 | DAT_01510924
    MOV EDI,0x1510914                   ; 00445d05
    MOV EDX,EBX                         ; 00445d0a
    ADD EDI,ECX                         ; 00445d0c
    XOR ECX,ECX                         ; 00445d0e
    FCOMP float ptr [ESP]               ; 00445d10
    FNSTSW AX                           ; 00445d13
    SAHF                                ; 00445d15
    JNC 0x00445d1d                      ; 00445d16
        ;   XREF to: 00445d1d (CONDITIONAL_JUMP)  ; LAB_00445d1d
    MOV ECX,0x1                         ; 00445d18
    FLD float ptr [EDI + 0x4]           ; 00445d1d | DAT_01510918 | DAT_01510930
        ;   Label: LAB_00445d1d
    FCOMP float ptr [ESP]               ; 00445d20
    FNSTSW AX                           ; 00445d23
    SAHF                                ; 00445d25
    JNC 0x00445d2b                      ; 00445d26
        ;   XREF to: 00445d2b (CONDITIONAL_JUMP)  ; LAB_00445d2b
    OR CL,0x2                           ; 00445d28
    CMP ECX,0x3                         ; 00445d2b
        ;   Label: LAB_00445d2b
    JA 0x00445d5e                       ; 00445d2e
        ;   XREF to: 00445d5e (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4459d8]  ; 00445d30 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x015109d4],0xc ; 00445d37 | DAT_015109d4
        ;   Label: caseD_0
    ADD ECX,0x15109d8                   ; 00445d3e
    CMP ECX,EDX                         ; 00445d44
    JZ 0x00445d58                       ; 00445d46
        ;   XREF to: 00445d58 (CONDITIONAL_JUMP)  ; LAB_00445d58
    MOV EAX,dword ptr [EDX]             ; 00445d48 | DAT_01510914
    MOV dword ptr [ECX],EAX             ; 00445d4a | DAT_015109d8
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445d4c | DAT_01510918
    MOV dword ptr [ECX + 0x4],EAX       ; 00445d4f | DAT_015109dc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445d52 | DAT_0151091c
    MOV dword ptr [ECX + 0x8],EAX       ; 00445d55 | DAT_015109e0
    INC dword ptr [0x015109d4]          ; 00445d58 | DAT_015109d4
        ;   Label: LAB_00445d58
    MOV EDX,dword ptr [0x01510910]      ; 00445d5e | DAT_01510910
        ;   Label: caseD_3
    INC ESI                             ; 00445d64
    ADD EBX,0xc                         ; 00445d65
    CMP ESI,EDX                         ; 00445d68
    JL 0x00445cf0                       ; 00445d6a
        ;   XREF to: 00445cf0 (CONDITIONAL_JUMP)  ; LAB_00445cf0
    MOV ECX,dword ptr [0x015109d4]      ; 00445d6c | DAT_015109d4
        ;   Label: LAB_00445d6c
    CMP ECX,0x3                         ; 00445d72
    JL 0x0044600b                       ; 00445d75
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00445d7b
    MOV EDX,dword ptr [EDX]             ; 00445d7e
    XOR EBX,EBX                         ; 00445d80
    MOV dword ptr [ESP + 0x18],EDX      ; 00445d82
    TEST ECX,ECX                        ; 00445d86
    JLE 0x00445e0f                      ; 00445d88
        ;   XREF to: 00445e0f (CONDITIONAL_JUMP)  ; LAB_00445e0f
    MOV ESI,0x15109d8                   ; 00445d8e
    MOV EDI,dword ptr [0x015109d4]      ; 00445d93 | DAT_015109d4
        ;   Label: LAB_00445d93
    LEA ECX,[EBX + 0x1]                 ; 00445d99
    CMP ECX,EDI                         ; 00445d9c
    JNZ 0x00445da2                      ; 00445d9e
        ;   XREF to: 00445da2 (CONDITIONAL_JUMP)  ; LAB_00445da2
    XOR ECX,EDI                         ; 00445da0
    IMUL ECX,ECX,0xc                    ; 00445da2
        ;   Label: LAB_00445da2
    FLD float ptr [ESI]                 ; 00445da5 | DAT_015109d8 | DAT_015109e4
    MOV EDI,0x15109d8                   ; 00445da7
    MOV EDX,ESI                         ; 00445dac
    ADD EDI,ECX                         ; 00445dae
    XOR ECX,ECX                         ; 00445db0
    FCOMP float ptr [ESP + 0x18]        ; 00445db2
    FNSTSW AX                           ; 00445db6
    SAHF                                ; 00445db8
    JBE 0x00445dc0                      ; 00445db9
        ;   XREF to: 00445dc0 (CONDITIONAL_JUMP)  ; LAB_00445dc0
    MOV ECX,0x1                         ; 00445dbb
    FLD float ptr [EDI]                 ; 00445dc0 | DAT_015109d8 | DAT_015109f0
        ;   Label: LAB_00445dc0
    FCOMP float ptr [ESP + 0x18]        ; 00445dc2
    FNSTSW AX                           ; 00445dc6
    SAHF                                ; 00445dc8
    JBE 0x00445dce                      ; 00445dc9
        ;   XREF to: 00445dce (CONDITIONAL_JUMP)  ; LAB_00445dce
    OR CL,0x2                           ; 00445dcb
    CMP ECX,0x3                         ; 00445dce
        ;   Label: LAB_00445dce
    JA 0x00445e01                       ; 00445dd1
        ;   XREF to: 00445e01 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4459e8]  ; 00445dd3 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01510a98],0xc ; 00445dda | DAT_01510a98
        ;   Label: caseD_0
    ADD ECX,0x1510a9c                   ; 00445de1
    CMP ECX,EDX                         ; 00445de7
    JZ 0x00445dfb                       ; 00445de9
        ;   XREF to: 00445dfb (CONDITIONAL_JUMP)  ; LAB_00445dfb
    MOV EAX,dword ptr [EDX]             ; 00445deb | DAT_015109d8
    MOV dword ptr [ECX],EAX             ; 00445ded | DAT_01510a9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445def | DAT_015109dc
    MOV dword ptr [ECX + 0x4],EAX       ; 00445df2 | DAT_01510aa0
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445df5 | DAT_015109e0
    MOV dword ptr [ECX + 0x8],EAX       ; 00445df8 | DAT_01510aa4
    INC dword ptr [0x01510a98]          ; 00445dfb | DAT_01510a98
        ;   Label: LAB_00445dfb
    MOV EDX,dword ptr [0x015109d4]      ; 00445e01 | DAT_015109d4
        ;   Label: caseD_3
    INC EBX                             ; 00445e07
    ADD ESI,0xc                         ; 00445e08
    CMP EBX,EDX                         ; 00445e0b
    JL 0x00445d93                       ; 00445e0d
        ;   XREF to: 00445d93 (CONDITIONAL_JUMP)  ; LAB_00445d93
    MOV ECX,dword ptr [0x01510a98]      ; 00445e0f | DAT_01510a98
        ;   Label: LAB_00445e0f
    CMP ECX,0x3                         ; 00445e15
    JL 0x0044600b                       ; 00445e18
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00445e1e
    MOV EDX,dword ptr [EDX]             ; 00445e21
    XOR EBX,EBX                         ; 00445e23
    MOV dword ptr [ESP + 0x4],EDX       ; 00445e25
    TEST ECX,ECX                        ; 00445e29
    JLE 0x00445eb2                      ; 00445e2b
        ;   XREF to: 00445eb2 (CONDITIONAL_JUMP)  ; LAB_00445eb2
    MOV ESI,0x1510a9c                   ; 00445e31
    MOV EDI,dword ptr [0x01510a98]      ; 00445e36 | DAT_01510a98
        ;   Label: LAB_00445e36
    LEA ECX,[EBX + 0x1]                 ; 00445e3c
    CMP ECX,EDI                         ; 00445e3f
    JNZ 0x00445e45                      ; 00445e41
        ;   XREF to: 00445e45 (CONDITIONAL_JUMP)  ; LAB_00445e45
    XOR ECX,EDI                         ; 00445e43
    IMUL ECX,ECX,0xc                    ; 00445e45
        ;   Label: LAB_00445e45
    FLD float ptr [ESI]                 ; 00445e48 | DAT_01510a9c | DAT_01510aa8
    MOV EDI,0x1510a9c                   ; 00445e4a
    MOV EDX,ESI                         ; 00445e4f
    ADD EDI,ECX                         ; 00445e51
    XOR ECX,ECX                         ; 00445e53
    FCOMP float ptr [ESP + 0x4]         ; 00445e55
    FNSTSW AX                           ; 00445e59
    SAHF                                ; 00445e5b
    JNC 0x00445e63                      ; 00445e5c
        ;   XREF to: 00445e63 (CONDITIONAL_JUMP)  ; LAB_00445e63
    MOV ECX,0x1                         ; 00445e5e
    FLD float ptr [EDI]                 ; 00445e63 | DAT_01510a9c | DAT_01510ab4
        ;   Label: LAB_00445e63
    FCOMP float ptr [ESP + 0x4]         ; 00445e65
    FNSTSW AX                           ; 00445e69
    SAHF                                ; 00445e6b
    JNC 0x00445e71                      ; 00445e6c
        ;   XREF to: 00445e71 (CONDITIONAL_JUMP)  ; LAB_00445e71
    OR CL,0x2                           ; 00445e6e
    CMP ECX,0x3                         ; 00445e71
        ;   Label: LAB_00445e71
    JA 0x00445ea4                       ; 00445e74
        ;   XREF to: 00445ea4 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4459f8]  ; 00445e76 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01510b5c],0xc ; 00445e7d | DAT_01510b5c
        ;   Label: caseD_0
    ADD ECX,0x1510b60                   ; 00445e84
    CMP ECX,EDX                         ; 00445e8a
    JZ 0x00445e9e                       ; 00445e8c
        ;   XREF to: 00445e9e (CONDITIONAL_JUMP)  ; LAB_00445e9e
    MOV EAX,dword ptr [EDX]             ; 00445e8e | DAT_01510a9c
    MOV dword ptr [ECX],EAX             ; 00445e90 | DAT_01510b60
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445e92 | DAT_01510aa0
    MOV dword ptr [ECX + 0x4],EAX       ; 00445e95 | DAT_01510b64
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445e98 | DAT_01510aa4
    MOV dword ptr [ECX + 0x8],EAX       ; 00445e9b | DAT_01510b68
    INC dword ptr [0x01510b5c]          ; 00445e9e | DAT_01510b5c
        ;   Label: LAB_00445e9e
    MOV EDX,dword ptr [0x01510a98]      ; 00445ea4 | DAT_01510a98
        ;   Label: caseD_3
    INC EBX                             ; 00445eaa
    ADD ESI,0xc                         ; 00445eab
    CMP EBX,EDX                         ; 00445eae
    JL 0x00445e36                       ; 00445eb0
        ;   XREF to: 00445e36 (CONDITIONAL_JUMP)  ; LAB_00445e36
    MOV ECX,dword ptr [0x01510b5c]      ; 00445eb2 | DAT_01510b5c
        ;   Label: LAB_00445eb2
    CMP ECX,0x3                         ; 00445eb8
    JL 0x0044600b                       ; 00445ebb
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x18]      ; 00445ec1
    MOV EDX,dword ptr [EDX + 0x8]       ; 00445ec4
    XOR EBX,EBX                         ; 00445ec7
    MOV dword ptr [ESP + 0x8],EDX       ; 00445ec9
    TEST ECX,ECX                        ; 00445ecd
    JLE 0x00445f58                      ; 00445ecf
        ;   XREF to: 00445f58 (CONDITIONAL_JUMP)  ; LAB_00445f58
    MOV ESI,0x1510b60                   ; 00445ed5
    MOV EDI,dword ptr [0x01510b5c]      ; 00445eda | DAT_01510b5c
        ;   Label: LAB_00445eda
    LEA ECX,[EBX + 0x1]                 ; 00445ee0
    CMP ECX,EDI                         ; 00445ee3
    JNZ 0x00445ee9                      ; 00445ee5
        ;   XREF to: 00445ee9 (CONDITIONAL_JUMP)  ; LAB_00445ee9
    XOR ECX,EDI                         ; 00445ee7
    IMUL ECX,ECX,0xc                    ; 00445ee9
        ;   Label: LAB_00445ee9
    FLD float ptr [ESI + 0x8]           ; 00445eec | DAT_01510b68 | DAT_01510b74
    MOV EDI,0x1510b60                   ; 00445eef
    MOV EDX,ESI                         ; 00445ef4
    ADD EDI,ECX                         ; 00445ef6
    XOR ECX,ECX                         ; 00445ef8
    FCOMP float ptr [ESP + 0x8]         ; 00445efa
    FNSTSW AX                           ; 00445efe
    SAHF                                ; 00445f00
    JNC 0x00445f08                      ; 00445f01
        ;   XREF to: 00445f08 (CONDITIONAL_JUMP)  ; LAB_00445f08
    MOV ECX,0x1                         ; 00445f03
    FLD float ptr [EDI + 0x8]           ; 00445f08 | DAT_01510b68 | DAT_01510b80
        ;   Label: LAB_00445f08
    FCOMP float ptr [ESP + 0x8]         ; 00445f0b
    FNSTSW AX                           ; 00445f0f
    SAHF                                ; 00445f11
    JNC 0x00445f17                      ; 00445f12
        ;   XREF to: 00445f17 (CONDITIONAL_JUMP)  ; LAB_00445f17
    OR CL,0x2                           ; 00445f14
    CMP ECX,0x3                         ; 00445f17
        ;   Label: LAB_00445f17
    JA 0x00445f4a                       ; 00445f1a
        ;   XREF to: 00445f4a (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x445a08]  ; 00445f1c | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01510c20],0xc ; 00445f23 | DAT_01510c20
        ;   Label: caseD_0
    ADD ECX,0x1510c24                   ; 00445f2a
    CMP ECX,EDX                         ; 00445f30
    JZ 0x00445f44                       ; 00445f32
        ;   XREF to: 00445f44 (CONDITIONAL_JUMP)  ; LAB_00445f44
    MOV EAX,dword ptr [EDX]             ; 00445f34 | DAT_01510b60
    MOV dword ptr [ECX],EAX             ; 00445f36 | DAT_01510c24
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445f38 | DAT_01510b64
    MOV dword ptr [ECX + 0x4],EAX       ; 00445f3b | DAT_01510c28
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445f3e | DAT_01510b68
    MOV dword ptr [ECX + 0x8],EAX       ; 00445f41 | DAT_01510c2c
    INC dword ptr [0x01510c20]          ; 00445f44 | DAT_01510c20
        ;   Label: LAB_00445f44
    MOV EDX,dword ptr [0x01510b5c]      ; 00445f4a | DAT_01510b5c
        ;   Label: caseD_3
    INC EBX                             ; 00445f50
    ADD ESI,0xc                         ; 00445f51
    CMP EBX,EDX                         ; 00445f54
    JL 0x00445eda                       ; 00445f56
        ;   XREF to: 00445eda (CONDITIONAL_JUMP)  ; LAB_00445eda
    MOV ECX,dword ptr [0x01510c20]      ; 00445f58 | DAT_01510c20
        ;   Label: LAB_00445f58
    CMP ECX,0x3                         ; 00445f5e
    JL 0x0044600b                       ; 00445f61
        ;   XREF to: 0044600b (CONDITIONAL_JUMP)  ; LAB_0044600b
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00445f67
    MOV EDX,dword ptr [EDX + 0x8]       ; 00445f6a
    XOR ESI,ESI                         ; 00445f6d
    MOV dword ptr [ESP + 0xc],EDX       ; 00445f6f
    TEST ECX,ECX                        ; 00445f73
    JLE 0x00445ffe                      ; 00445f75
        ;   XREF to: 00445ffe (CONDITIONAL_JUMP)  ; LAB_00445ffe
    MOV EBX,0x1510c24                   ; 00445f7b
    MOV EDI,dword ptr [0x01510c20]      ; 00445f80 | DAT_01510c20
        ;   Label: LAB_00445f80
    LEA ECX,[ESI + 0x1]                 ; 00445f86
    CMP ECX,EDI                         ; 00445f89
    JNZ 0x00445f8f                      ; 00445f8b
        ;   XREF to: 00445f8f (CONDITIONAL_JUMP)  ; LAB_00445f8f
    XOR ECX,EDI                         ; 00445f8d
    IMUL ECX,ECX,0xc                    ; 00445f8f
        ;   Label: LAB_00445f8f
    FLD float ptr [EBX + 0x8]           ; 00445f92 | DAT_01510c2c | DAT_01510c38
    MOV EDI,0x1510c24                   ; 00445f95
    MOV EDX,EBX                         ; 00445f9a
    ADD EDI,ECX                         ; 00445f9c
    XOR ECX,ECX                         ; 00445f9e
    FCOMP float ptr [ESP + 0xc]         ; 00445fa0
    FNSTSW AX                           ; 00445fa4
    SAHF                                ; 00445fa6
    JBE 0x00445fae                      ; 00445fa7
        ;   XREF to: 00445fae (CONDITIONAL_JUMP)  ; LAB_00445fae
    MOV ECX,0x1                         ; 00445fa9
    FLD float ptr [EDI + 0x8]           ; 00445fae | DAT_01510c2c | DAT_01510c44
        ;   Label: LAB_00445fae
    FCOMP float ptr [ESP + 0xc]         ; 00445fb1
    FNSTSW AX                           ; 00445fb5
    SAHF                                ; 00445fb7
    JBE 0x00445fbd                      ; 00445fb8
        ;   XREF to: 00445fbd (CONDITIONAL_JUMP)  ; LAB_00445fbd
    OR CL,0x2                           ; 00445fba
    CMP ECX,0x3                         ; 00445fbd
        ;   Label: LAB_00445fbd
    JA 0x00445ff0                       ; 00445fc0
        ;   XREF to: 00445ff0 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x445a18]  ; 00445fc2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,dword ptr [0x01510ce4],0xc ; 00445fc9 | DAT_01510ce4
        ;   Label: caseD_0
    ADD ECX,0x1510ce8                   ; 00445fd0
    CMP ECX,EDX                         ; 00445fd6
    JZ 0x00445fea                       ; 00445fd8
        ;   XREF to: 00445fea (CONDITIONAL_JUMP)  ; LAB_00445fea
    MOV EAX,dword ptr [EDX]             ; 00445fda | DAT_01510c24
    MOV dword ptr [ECX],EAX             ; 00445fdc
    MOV EAX,dword ptr [EDX + 0x4]       ; 00445fde | DAT_01510c28
    MOV dword ptr [ECX + 0x4],EAX       ; 00445fe1
    MOV EAX,dword ptr [EDX + 0x8]       ; 00445fe4 | DAT_01510c2c
    MOV dword ptr [ECX + 0x8],EAX       ; 00445fe7
    INC dword ptr [0x01510ce4]          ; 00445fea | DAT_01510ce4
        ;   Label: LAB_00445fea
    MOV EDX,dword ptr [0x01510c20]      ; 00445ff0 | DAT_01510c20
        ;   Label: caseD_3
    INC ESI                             ; 00445ff6
    ADD EBX,0xc                         ; 00445ff7
    CMP ESI,EDX                         ; 00445ffa
    JL 0x00445f80                       ; 00445ffc
        ;   XREF to: 00445f80 (CONDITIONAL_JUMP)  ; LAB_00445f80
    CMP dword ptr [0x01510ce4],0x3      ; 00445ffe | DAT_01510ce4
        ;   Label: LAB_00445ffe
    JGE 0x00445bd5                      ; 00446005
        ;   XREF to: 00445bd5 (CONDITIONAL_JUMP)  ; LAB_00445bd5
    XOR ECX,ECX                         ; 0044600b
        ;   Label: LAB_0044600b
    MOV EAX,ECX                         ; 0044600d
    MOV ESP,EBP                         ; 0044600f
    POP EBP                             ; 00446011
    POP EDI                             ; 00446012
    POP ESI                             ; 00446013
    POP EBX                             ; 00446014
    RET                                 ; 00446015
    IMUL ECX,dword ptr [0x01510910],0xc ; 00446016 | DAT_01510910
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x14]          ; 0044601d
    SUB ESP,0x8                         ; 00446021
    FCHS                                ; 00446024
    FSTP double ptr [ESP]               ; 00446026
    PUSH 0x0                            ; 00446029
    PUSH 0x0                            ; 0044602b
    PUSH 0x3ff00000                     ; 0044602d
    PUSH 0x0                            ; 00446032
    PUSH 0x0                            ; 00446034
    PUSH 0x0                            ; 00446036
    ADD ECX,0x1510914                   ; 00446038
    PUSH ECX                            ; 0044603e
    PUSH EDX                            ; 0044603f
    PUSH EDI                            ; 00446040
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446041
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510910]      ; 00446046 | DAT_01510910
    INC EDX                             ; 0044604c
    ADD ESP,0x2c                        ; 0044604d
    MOV dword ptr [0x01510910],EDX      ; 00446050 | DAT_01510910
    JMP 0x00445cbc                      ; 00446056
        ;   XREF to: 00445cbc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510910],0xc ; 0044605b | DAT_01510910
        ;   Label: caseD_2
    ADD ECX,0x1510914                   ; 00446062
    CMP ECX,EDX                         ; 00446068
    JZ 0x0044607c                       ; 0044606a
        ;   XREF to: 0044607c (CONDITIONAL_JUMP)  ; LAB_0044607c
    MOV EAX,dword ptr [EDX]             ; 0044606c
    MOV dword ptr [ECX],EAX             ; 0044606e | DAT_01510914
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446070
    MOV dword ptr [ECX + 0x4],EAX       ; 00446073 | DAT_01510918
    MOV EAX,dword ptr [EDX + 0x8]       ; 00446076
    MOV dword ptr [ECX + 0x8],EAX       ; 00446079 | DAT_0151091c
    MOV ECX,dword ptr [0x01510910]      ; 0044607c | DAT_01510910
        ;   Label: LAB_0044607c
    INC ECX                             ; 00446082
    MOV dword ptr [0x01510910],ECX      ; 00446083 | DAT_01510910
    IMUL ECX,ECX,0xc                    ; 00446089
    FLD float ptr [ESP + 0x14]          ; 0044608c
    SUB ESP,0x8                         ; 00446090
    FCHS                                ; 00446093
    FSTP double ptr [ESP]               ; 00446095
    PUSH 0x0                            ; 00446098
    PUSH 0x0                            ; 0044609a
    PUSH 0x3ff00000                     ; 0044609c
    PUSH 0x0                            ; 004460a1
    PUSH 0x0                            ; 004460a3
    PUSH 0x0                            ; 004460a5
    ADD ECX,0x1510914                   ; 004460a7
    PUSH ECX                            ; 004460ad
    PUSH EDI                            ; 004460ae
    PUSH EDX                            ; 004460af
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004460b0
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510910]      ; 004460b5 | DAT_01510910
    INC EDX                             ; 004460bb
    ADD ESP,0x2c                        ; 004460bc
    MOV dword ptr [0x01510910],EDX      ; 004460bf | DAT_01510910
    JMP 0x00445cbc                      ; 004460c5
        ;   XREF to: 00445cbc (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x015109d4],0xc ; 004460ca | DAT_015109d4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 004460d1
    SUB ESP,0x8                         ; 004460d4
    FSTP double ptr [ESP]               ; 004460d7
    PUSH 0x0                            ; 004460da
    PUSH 0x0                            ; 004460dc
    PUSH 0xbff00000                     ; 004460de
    PUSH 0x0                            ; 004460e3
    PUSH 0x0                            ; 004460e5
    PUSH 0x0                            ; 004460e7
    ADD ECX,0x15109d8                   ; 004460e9
    PUSH ECX                            ; 004460ef
    PUSH EDX                            ; 004460f0 | DAT_01510914
    PUSH EDI                            ; 004460f1
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004460f2
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x015109d4]      ; 004460f7 | DAT_015109d4
    INC EDX                             ; 004460fd
    ADD ESP,0x2c                        ; 004460fe
    MOV dword ptr [0x015109d4],EDX      ; 00446101 | DAT_015109d4
    JMP 0x00445d5e                      ; 00446107
        ;   XREF to: 00445d5e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x015109d4],0xc ; 0044610c | DAT_015109d4
        ;   Label: caseD_2
    ADD ECX,0x15109d8                   ; 00446113
    CMP ECX,EDX                         ; 00446119
    JZ 0x0044612d                       ; 0044611b
        ;   XREF to: 0044612d (CONDITIONAL_JUMP)  ; LAB_0044612d
    MOV EAX,dword ptr [EDX]             ; 0044611d | DAT_01510914
    MOV dword ptr [ECX],EAX             ; 0044611f | DAT_015109d8
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446121 | DAT_01510918
    MOV dword ptr [ECX + 0x4],EAX       ; 00446124 | DAT_015109dc
    MOV EAX,dword ptr [EDX + 0x8]       ; 00446127 | DAT_0151091c
    MOV dword ptr [ECX + 0x8],EAX       ; 0044612a | DAT_015109e0
    MOV ECX,dword ptr [0x015109d4]      ; 0044612d | DAT_015109d4
        ;   Label: LAB_0044612d
    INC ECX                             ; 00446133
    MOV dword ptr [0x015109d4],ECX      ; 00446134 | DAT_015109d4
    IMUL ECX,ECX,0xc                    ; 0044613a
    FLD float ptr [ESP]                 ; 0044613d
    SUB ESP,0x8                         ; 00446140
    FSTP double ptr [ESP]               ; 00446143
    PUSH 0x0                            ; 00446146
    PUSH 0x0                            ; 00446148
    PUSH 0xbff00000                     ; 0044614a
    PUSH 0x0                            ; 0044614f
    PUSH 0x0                            ; 00446151
    PUSH 0x0                            ; 00446153
    ADD ECX,0x15109d8                   ; 00446155
    PUSH ECX                            ; 0044615b
    PUSH EDI                            ; 0044615c
    PUSH EDX                            ; 0044615d | DAT_01510914
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 0044615e
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x015109d4]      ; 00446163 | DAT_015109d4
    INC EDX                             ; 00446169
    ADD ESP,0x2c                        ; 0044616a
    MOV dword ptr [0x015109d4],EDX      ; 0044616d | DAT_015109d4
    JMP 0x00445d5e                      ; 00446173
        ;   XREF to: 00445d5e (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510a98],0xc ; 00446178 | DAT_01510a98
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x18]          ; 0044617f
    SUB ESP,0x8                         ; 00446183
    FCHS                                ; 00446186
    FSTP double ptr [ESP]               ; 00446188
    PUSH 0x0                            ; 0044618b
    PUSH 0x0                            ; 0044618d
    PUSH 0x0                            ; 0044618f
    PUSH 0x0                            ; 00446191
    PUSH 0x3ff00000                     ; 00446193
    PUSH 0x0                            ; 00446198
    ADD ECX,0x1510a9c                   ; 0044619a
    PUSH ECX                            ; 004461a0
    PUSH EDX                            ; 004461a1 | DAT_015109d8
    PUSH EDI                            ; 004461a2
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004461a3
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510a98]      ; 004461a8 | DAT_01510a98
    INC EDX                             ; 004461ae
    ADD ESP,0x2c                        ; 004461af
    MOV dword ptr [0x01510a98],EDX      ; 004461b2 | DAT_01510a98
    JMP 0x00445e01                      ; 004461b8
        ;   XREF to: 00445e01 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510a98],0xc ; 004461bd | DAT_01510a98
        ;   Label: caseD_2
    ADD ECX,0x1510a9c                   ; 004461c4
    CMP ECX,EDX                         ; 004461ca
    JZ 0x004461de                       ; 004461cc
        ;   XREF to: 004461de (CONDITIONAL_JUMP)  ; LAB_004461de
    MOV EAX,dword ptr [EDX]             ; 004461ce | DAT_015109d8
    MOV dword ptr [ECX],EAX             ; 004461d0 | DAT_01510a9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 004461d2 | DAT_015109dc
    MOV dword ptr [ECX + 0x4],EAX       ; 004461d5 | DAT_01510aa0
    MOV EAX,dword ptr [EDX + 0x8]       ; 004461d8 | DAT_015109e0
    MOV dword ptr [ECX + 0x8],EAX       ; 004461db | DAT_01510aa4
    MOV ECX,dword ptr [0x01510a98]      ; 004461de | DAT_01510a98
        ;   Label: LAB_004461de
    INC ECX                             ; 004461e4
    MOV dword ptr [0x01510a98],ECX      ; 004461e5 | DAT_01510a98
    IMUL ECX,ECX,0xc                    ; 004461eb
    FLD float ptr [ESP + 0x18]          ; 004461ee
    SUB ESP,0x8                         ; 004461f2
    FCHS                                ; 004461f5
    FSTP double ptr [ESP]               ; 004461f7
    PUSH 0x0                            ; 004461fa
    PUSH 0x0                            ; 004461fc
    PUSH 0x0                            ; 004461fe
    PUSH 0x0                            ; 00446200
    PUSH 0x3ff00000                     ; 00446202
    PUSH 0x0                            ; 00446207
    ADD ECX,0x1510a9c                   ; 00446209
    PUSH ECX                            ; 0044620f
    PUSH EDI                            ; 00446210
    PUSH EDX                            ; 00446211 | DAT_015109d8
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446212
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510a98]      ; 00446217 | DAT_01510a98
    INC EDX                             ; 0044621d
    ADD ESP,0x2c                        ; 0044621e
    MOV dword ptr [0x01510a98],EDX      ; 00446221 | DAT_01510a98
    JMP 0x00445e01                      ; 00446227
        ;   XREF to: 00445e01 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510b5c],0xc ; 0044622c | DAT_01510b5c
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x4]           ; 00446233
    SUB ESP,0x8                         ; 00446237
    FSTP double ptr [ESP]               ; 0044623a
    PUSH 0x0                            ; 0044623d
    PUSH 0x0                            ; 0044623f
    PUSH 0x0                            ; 00446241
    PUSH 0x0                            ; 00446243
    PUSH 0xbff00000                     ; 00446245
    PUSH 0x0                            ; 0044624a
    ADD ECX,0x1510b60                   ; 0044624c
    PUSH ECX                            ; 00446252
    PUSH EDX                            ; 00446253 | DAT_01510a9c
    PUSH EDI                            ; 00446254
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446255
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510b5c]      ; 0044625a | DAT_01510b5c
    INC EDX                             ; 00446260
    ADD ESP,0x2c                        ; 00446261
    MOV dword ptr [0x01510b5c],EDX      ; 00446264 | DAT_01510b5c
    JMP 0x00445ea4                      ; 0044626a
        ;   XREF to: 00445ea4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510b5c],0xc ; 0044626f | DAT_01510b5c
        ;   Label: caseD_2
    ADD ECX,0x1510b60                   ; 00446276
    CMP ECX,EDX                         ; 0044627c
    JZ 0x00446290                       ; 0044627e
        ;   XREF to: 00446290 (CONDITIONAL_JUMP)  ; LAB_00446290
    MOV EAX,dword ptr [EDX]             ; 00446280 | DAT_01510a9c
    MOV dword ptr [ECX],EAX             ; 00446282 | DAT_01510b60
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446284 | DAT_01510aa0
    MOV dword ptr [ECX + 0x4],EAX       ; 00446287 | DAT_01510b64
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044628a | DAT_01510aa4
    MOV dword ptr [ECX + 0x8],EAX       ; 0044628d | DAT_01510b68
    MOV ECX,dword ptr [0x01510b5c]      ; 00446290 | DAT_01510b5c
        ;   Label: LAB_00446290
    INC ECX                             ; 00446296
    MOV dword ptr [0x01510b5c],ECX      ; 00446297 | DAT_01510b5c
    IMUL ECX,ECX,0xc                    ; 0044629d
    FLD float ptr [ESP + 0x4]           ; 004462a0
    SUB ESP,0x8                         ; 004462a4
    FSTP double ptr [ESP]               ; 004462a7
    PUSH 0x0                            ; 004462aa
    PUSH 0x0                            ; 004462ac
    PUSH 0x0                            ; 004462ae
    PUSH 0x0                            ; 004462b0
    PUSH 0xbff00000                     ; 004462b2
    PUSH 0x0                            ; 004462b7
    ADD ECX,0x1510b60                   ; 004462b9
    PUSH ECX                            ; 004462bf
    PUSH EDI                            ; 004462c0
    PUSH EDX                            ; 004462c1 | DAT_01510a9c
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004462c2
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510b5c]      ; 004462c7 | DAT_01510b5c
    INC EDX                             ; 004462cd
    ADD ESP,0x2c                        ; 004462ce
    MOV dword ptr [0x01510b5c],EDX      ; 004462d1 | DAT_01510b5c
    JMP 0x00445ea4                      ; 004462d7
        ;   XREF to: 00445ea4 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510c20],0xc ; 004462dc | DAT_01510c20
        ;   Label: caseD_1
    FLD float ptr [ESP + 0x8]           ; 004462e3
    SUB ESP,0x8                         ; 004462e7
    FSTP double ptr [ESP]               ; 004462ea
    PUSH 0xbff00000                     ; 004462ed
    PUSH 0x0                            ; 004462f2
    PUSH 0x0                            ; 004462f4
    PUSH 0x0                            ; 004462f6
    PUSH 0x0                            ; 004462f8
    PUSH 0x0                            ; 004462fa
    ADD ECX,0x1510c24                   ; 004462fc
    PUSH ECX                            ; 00446302
    PUSH EDX                            ; 00446303 | DAT_01510b60
    PUSH EDI                            ; 00446304
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446305
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510c20]      ; 0044630a | DAT_01510c20
    INC EDX                             ; 00446310
    ADD ESP,0x2c                        ; 00446311
    MOV dword ptr [0x01510c20],EDX      ; 00446314 | DAT_01510c20
    JMP 0x00445f4a                      ; 0044631a
        ;   XREF to: 00445f4a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510c20],0xc ; 0044631f | DAT_01510c20
        ;   Label: caseD_2
    ADD ECX,0x1510c24                   ; 00446326
    CMP ECX,EDX                         ; 0044632c
    JZ 0x00446340                       ; 0044632e
        ;   XREF to: 00446340 (CONDITIONAL_JUMP)  ; LAB_00446340
    MOV EAX,dword ptr [EDX]             ; 00446330 | DAT_01510b60
    MOV dword ptr [ECX],EAX             ; 00446332 | DAT_01510c24
    MOV EAX,dword ptr [EDX + 0x4]       ; 00446334 | DAT_01510b64
    MOV dword ptr [ECX + 0x4],EAX       ; 00446337 | DAT_01510c28
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044633a | DAT_01510b68
    MOV dword ptr [ECX + 0x8],EAX       ; 0044633d | DAT_01510c2c
    MOV ECX,dword ptr [0x01510c20]      ; 00446340 | DAT_01510c20
        ;   Label: LAB_00446340
    INC ECX                             ; 00446346
    MOV dword ptr [0x01510c20],ECX      ; 00446347 | DAT_01510c20
    IMUL ECX,ECX,0xc                    ; 0044634d
    FLD float ptr [ESP + 0x8]           ; 00446350
    SUB ESP,0x8                         ; 00446354
    FSTP double ptr [ESP]               ; 00446357
    PUSH 0xbff00000                     ; 0044635a
    PUSH 0x0                            ; 0044635f
    PUSH 0x0                            ; 00446361
    PUSH 0x0                            ; 00446363
    PUSH 0x0                            ; 00446365
    PUSH 0x0                            ; 00446367
    ADD ECX,0x1510c24                   ; 00446369
    PUSH ECX                            ; 0044636f
    PUSH EDI                            ; 00446370
    PUSH EDX                            ; 00446371 | DAT_01510b60
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446372
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510c20]      ; 00446377 | DAT_01510c20
    INC EDX                             ; 0044637d
    ADD ESP,0x2c                        ; 0044637e
    MOV dword ptr [0x01510c20],EDX      ; 00446381 | DAT_01510c20
    JMP 0x00445f4a                      ; 00446387
        ;   XREF to: 00445f4a (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510ce4],0xc ; 0044638c | DAT_01510ce4
        ;   Label: caseD_1
    FLD float ptr [ESP + 0xc]           ; 00446393
    SUB ESP,0x8                         ; 00446397
    FSTP double ptr [ESP]               ; 0044639a
    PUSH 0xbff00000                     ; 0044639d
    PUSH 0x0                            ; 004463a2
    PUSH 0x0                            ; 004463a4
    PUSH 0x0                            ; 004463a6
    PUSH 0x0                            ; 004463a8
    PUSH 0x0                            ; 004463aa
    ADD ECX,0x1510ce8                   ; 004463ac
    PUSH ECX                            ; 004463b2
    PUSH EDX                            ; 004463b3 | DAT_01510c24
    PUSH EDI                            ; 004463b4
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 004463b5
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510ce4]      ; 004463ba | DAT_01510ce4
    INC EDX                             ; 004463c0
    ADD ESP,0x2c                        ; 004463c1
    MOV dword ptr [0x01510ce4],EDX      ; 004463c4 | DAT_01510ce4
    JMP 0x00445ff0                      ; 004463ca
        ;   XREF to: 00445ff0 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL ECX,dword ptr [0x01510ce4],0xc ; 004463cf | DAT_01510ce4
        ;   Label: caseD_2
    ADD ECX,0x1510ce8                   ; 004463d6
    CMP ECX,EDX                         ; 004463dc
    JZ 0x004463f0                       ; 004463de
        ;   XREF to: 004463f0 (CONDITIONAL_JUMP)  ; LAB_004463f0
    MOV EAX,dword ptr [EDX]             ; 004463e0 | DAT_01510c24
    MOV dword ptr [ECX],EAX             ; 004463e2
    MOV EAX,dword ptr [EDX + 0x4]       ; 004463e4 | DAT_01510c28
    MOV dword ptr [ECX + 0x4],EAX       ; 004463e7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004463ea | DAT_01510c2c
    MOV dword ptr [ECX + 0x8],EAX       ; 004463ed
    MOV ECX,dword ptr [0x01510ce4]      ; 004463f0 | DAT_01510ce4
        ;   Label: LAB_004463f0
    INC ECX                             ; 004463f6
    MOV dword ptr [0x01510ce4],ECX      ; 004463f7 | DAT_01510ce4
    IMUL ECX,ECX,0xc                    ; 004463fd
    FLD float ptr [ESP + 0xc]           ; 00446400
    SUB ESP,0x8                         ; 00446404
    FSTP double ptr [ESP]               ; 00446407
    PUSH 0xbff00000                     ; 0044640a
    PUSH 0x0                            ; 0044640f
    PUSH 0x0                            ; 00446411
    PUSH 0x0                            ; 00446413
    PUSH 0x0                            ; 00446415
    PUSH 0x0                            ; 00446417
    ADD ECX,0x1510ce8                   ; 00446419
    PUSH ECX                            ; 0044641f
    PUSH EDI                            ; 00446420
    PUSH EDX                            ; 00446421 | DAT_01510c24
    CALL core_dcube.cpp_clipEdgeToPlane_FUN_00443db0 ; 00446422
        ;   XREF to: 00443db0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_clipEdgeToPlane_FUN_00443db0()
    MOV EDX,dword ptr [0x01510ce4]      ; 00446427 | DAT_01510ce4
    INC EDX                             ; 0044642d
    ADD ESP,0x2c                        ; 0044642e
    MOV dword ptr [0x01510ce4],EDX      ; 00446431 | DAT_01510ce4
    JMP 0x00445ff0                      ; 00446437
        ;   XREF to: 00445ff0 (UNCONDITIONAL_JUMP)  ; caseD_3

