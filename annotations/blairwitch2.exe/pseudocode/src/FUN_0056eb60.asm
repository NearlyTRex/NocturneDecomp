; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056eb60(int param_1)
;
;
; XREF[1]:
;   FUN_00563060 at 00563c13
;
; Referenced Globals:
;   undefined4 s_Bip01_L_Forearm_005ebe54+1
;   TerminatedCString s_Bip01_L_Forearm_005ebe65
;   TerminatedCString s_Bip01_L_Forearm_005ebe75
;   TerminatedCString s_Bip01_L_Forearm_005ebe85
;   TerminatedCString s_Bip01_L_Forearm_005ebe95
;   TerminatedCString s_Bip01_L_Forearm_005ebea5
;   TerminatedCString s_Bip01_R_Forearm_005ebeb5
;   TerminatedCString s_Bip01_R_Forearm_005ebec5
;   TerminatedCString s_Bip01_R_Forearm_005ebed5
;   TerminatedCString s_Bip01_R_Forearm_005ebee5
;   TerminatedCString s_Bip01_R_Forearm_005ebef5
;   TerminatedCString s_Bip01_R_Forearm_005ebf05
;   TerminatedCString s_Bip01_L_Forearm_005ebf15
;   TerminatedCString s_Bip01_L_Forearm_005ebf25
;   undefined4 DAT_005ebf35
;   ... and 5 more
;
; Called Functions:
;   FUN_005035c0
;   FUN_005b18e0
;   FUN_005b1980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056eb60
        ;   Label: FUN_0056eb60
    PUSH ESI                            ; 0056eb61
    PUSH EDI                            ; 0056eb62
    PUSH EBP                            ; 0056eb63
    MOV EBP,ESP                         ; 0056eb64
    SUB ESP,0x20                        ; 0056eb66
    AND ESP,0xfffffff8                  ; 0056eb69
    MOV ESI,dword ptr [EBP + 0x14]      ; 0056eb6c
    CMP dword ptr [ESI + 0x2d0c],0x1    ; 0056eb6f
    JGE 0x0056eb7f                      ; 0056eb76
        ;   XREF to: 0056eb7f (CONDITIONAL_JUMP)  ; LAB_0056eb7f
    MOV ESP,EBP                         ; 0056eb78
        ;   Label: LAB_0056eb78
    POP EBP                             ; 0056eb7a
    POP EDI                             ; 0056eb7b
    POP ESI                             ; 0056eb7c
    POP EBX                             ; 0056eb7d
    RET                                 ; 0056eb7e
    PUSH ESI                            ; 0056eb7f
        ;   Label: LAB_0056eb7f
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0056eb80
    XOR EDI,EDI                         ; 0056eb86
    CALL dword ptr [EAX + 0x114]        ; 0056eb88
    ADD ESP,0x4                         ; 0056eb8e
    XOR EDX,EDX                         ; 0056eb91
    CMP EAX,0x2                         ; 0056eb93
    JGE 0x0056eca4                      ; 0056eb96
        ;   XREF to: 0056eca4 (CONDITIONAL_JUMP)  ; LAB_0056eca4
    CMP dword ptr [ESI + 0x2d04],0x0    ; 0056eb9c
    JNZ 0x0056ebbb                      ; 0056eba3
        ;   XREF to: 0056ebbb (CONDITIONAL_JUMP)  ; LAB_0056ebbb
    FLD float ptr [ESI + 0x2d08]        ; 0056eba5
    FCOMP double ptr [0x005ebf35]       ; 0056ebab | DAT_005ebf35
    FNSTSW AX                           ; 0056ebb1
    SAHF                                ; 0056ebb3
    JBE 0x0056ebbb                      ; 0056ebb4
        ;   XREF to: 0056ebbb (CONDITIONAL_JUMP)  ; LAB_0056ebbb
    MOV EDX,0x1                         ; 0056ebb6
    MOV EBX,dword ptr [ESI + 0x2d04]    ; 0056ebbb
        ;   Label: LAB_0056ebbb
    CMP EBX,0x1                         ; 0056ebc1
    JNZ 0x0056ebd9                      ; 0056ebc4
        ;   XREF to: 0056ebd9 (CONDITIONAL_JUMP)  ; LAB_0056ebd9
    FLD float ptr [ESI + 0x2d08]        ; 0056ebc6
    FCOMP double ptr [0x005ebf3d]       ; 0056ebcc | DAT_005ebf3d
    FNSTSW AX                           ; 0056ebd2
    SAHF                                ; 0056ebd4
    JNC 0x0056ebd9                      ; 0056ebd5
        ;   XREF to: 0056ebd9 (CONDITIONAL_JUMP)  ; LAB_0056ebd9
    MOV EDX,EBX                         ; 0056ebd7
    CMP dword ptr [ESI + 0x2d04],0x2    ; 0056ebd9
        ;   Label: LAB_0056ebd9
    JNZ 0x0056ebf8                      ; 0056ebe0
        ;   XREF to: 0056ebf8 (CONDITIONAL_JUMP)  ; LAB_0056ebf8
    FLD float ptr [ESI + 0x2d08]        ; 0056ebe2
    FCOMP double ptr [0x005ebf45]       ; 0056ebe8 | DAT_005ebf45
    FNSTSW AX                           ; 0056ebee
    SAHF                                ; 0056ebf0
    JBE 0x0056ebf8                      ; 0056ebf1
        ;   XREF to: 0056ebf8 (CONDITIONAL_JUMP)  ; LAB_0056ebf8
    MOV EDI,0x1                         ; 0056ebf3
    CMP dword ptr [ESI + 0x2d04],0x3    ; 0056ebf8
        ;   Label: LAB_0056ebf8
    JNZ 0x0056ec17                      ; 0056ebff
        ;   XREF to: 0056ec17 (CONDITIONAL_JUMP)  ; LAB_0056ec17
    FLD float ptr [ESI + 0x2d08]        ; 0056ec01
    FCOMP double ptr [0x005ebf45]       ; 0056ec07 | DAT_005ebf45
    FNSTSW AX                           ; 0056ec0d
    SAHF                                ; 0056ec0f
    JNC 0x0056ec17                      ; 0056ec10
        ;   XREF to: 0056ec17 (CONDITIONAL_JUMP)  ; LAB_0056ec17
    MOV EDI,0x1                         ; 0056ec12
    CMP dword ptr [ESI + 0x2d04],0x4    ; 0056ec17
        ;   Label: LAB_0056ec17
    JNZ 0x0056ec36                      ; 0056ec1e
        ;   XREF to: 0056ec36 (CONDITIONAL_JUMP)  ; LAB_0056ec36
    FLD float ptr [ESI + 0x2d08]        ; 0056ec20
    FCOMP double ptr [0x005ebf4d]       ; 0056ec26 | DAT_005ebf4d
    FNSTSW AX                           ; 0056ec2c
    SAHF                                ; 0056ec2e
    JNC 0x0056ec36                      ; 0056ec2f
        ;   XREF to: 0056ec36 (CONDITIONAL_JUMP)  ; LAB_0056ec36
    MOV EDI,0x1                         ; 0056ec31
    CMP dword ptr [ESI + 0x2d04],0x5    ; 0056ec36
        ;   Label: LAB_0056ec36
    JNZ 0x0056ec55                      ; 0056ec3d
        ;   XREF to: 0056ec55 (CONDITIONAL_JUMP)  ; LAB_0056ec55
    FLD float ptr [ESI + 0x2d08]        ; 0056ec3f
    FCOMP double ptr [0x005ebf55]       ; 0056ec45 | DAT_005ebf55
    FNSTSW AX                           ; 0056ec4b
    SAHF                                ; 0056ec4d
    JBE 0x0056ec55                      ; 0056ec4e
        ;   XREF to: 0056ec55 (CONDITIONAL_JUMP)  ; LAB_0056ec55
    MOV EDI,0x1                         ; 0056ec50
    CMP dword ptr [ESI + 0x2d04],0x9    ; 0056ec55
        ;   Label: LAB_0056ec55
    JNZ 0x0056ec74                      ; 0056ec5c
        ;   XREF to: 0056ec74 (CONDITIONAL_JUMP)  ; LAB_0056ec74
    FLD float ptr [ESI + 0x2d08]        ; 0056ec5e
    FCOMP double ptr [0x005ebf4d]       ; 0056ec64 | DAT_005ebf4d
    FNSTSW AX                           ; 0056ec6a
    SAHF                                ; 0056ec6c
    JNC 0x0056ec74                      ; 0056ec6d
        ;   XREF to: 0056ec74 (CONDITIONAL_JUMP)  ; LAB_0056ec74
    MOV EDI,0x1                         ; 0056ec6f
    CMP dword ptr [ESI + 0x2d04],0xf    ; 0056ec74
        ;   Label: LAB_0056ec74
    JNZ 0x0056eca4                      ; 0056ec7b
        ;   XREF to: 0056eca4 (CONDITIONAL_JUMP)  ; LAB_0056eca4
    FLD float ptr [ESI + 0x2d08]        ; 0056ec7d
    FST double ptr [ESP]                ; 0056ec83
    FCOMP double ptr [0x005ebf3d]       ; 0056ec86 | DAT_005ebf3d
    FNSTSW AX                           ; 0056ec8c
    SAHF                                ; 0056ec8e
    JBE 0x0056eca4                      ; 0056ec8f
        ;   XREF to: 0056eca4 (CONDITIONAL_JUMP)  ; LAB_0056eca4
    FLD double ptr [ESP]                ; 0056ec91
    FCOMP double ptr [0x005ebf5d]       ; 0056ec94 | DAT_005ebf5d
    FNSTSW AX                           ; 0056ec9a
    SAHF                                ; 0056ec9c
    JNC 0x0056eca4                      ; 0056ec9d
        ;   XREF to: 0056eca4 (CONDITIONAL_JUMP)  ; LAB_0056eca4
    MOV EDI,0x1                         ; 0056ec9f
    MOV EBX,dword ptr [ESI + 0x2ea0]    ; 0056eca4
        ;   Label: LAB_0056eca4
    TEST EDX,EDX                        ; 0056ecaa
    JZ 0x0056eded                       ; 0056ecac
        ;   XREF to: 0056eded (CONDITIONAL_JUMP)  ; LAB_0056eded
    PUSH 0x32                           ; 0056ecb2
    PUSH 0x5ebe55                       ; 0056ecb4 | s_Bip01_L_Forearm_005ebe54+1
    PUSH EBX                            ; 0056ecb9
    CALL FUN_005b18e0                   ; 0056ecba
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ecbf
    PUSH 0x33                           ; 0056ecc2
    PUSH 0x5ebe65                       ; 0056ecc4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ecc9
    CALL FUN_005b18e0                   ; 0056ecca
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056eccf
    PUSH 0x34                           ; 0056ecd2
    PUSH 0x5ebe75                       ; 0056ecd4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ecd9
    CALL FUN_005b18e0                   ; 0056ecda
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ecdf
    PUSH 0x35                           ; 0056ece2
    PUSH 0x5ebe85                       ; 0056ece4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ece9
    CALL FUN_005b18e0                   ; 0056ecea
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ecef
    PUSH 0x36                           ; 0056ecf2
    PUSH 0x5ebe95                       ; 0056ecf4 | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ecf9
    CALL FUN_005b18e0                   ; 0056ecfa
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ecff
    PUSH 0x37                           ; 0056ed02
    PUSH 0x5ebea5                       ; 0056ed04 | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ed09
    CALL FUN_005b18e0                   ; 0056ed0a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed0f
    PUSH 0x20                           ; 0056ed12
    PUSH 0x5ebeb5                       ; 0056ed14 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed19
    CALL FUN_005b18e0                   ; 0056ed1a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed1f
    PUSH 0x21                           ; 0056ed22
    PUSH 0x5ebec5                       ; 0056ed24 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed29
    CALL FUN_005b18e0                   ; 0056ed2a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed2f
    PUSH 0x22                           ; 0056ed32
    PUSH 0x5ebed5                       ; 0056ed34 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed39
    CALL FUN_005b18e0                   ; 0056ed3a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed3f
    PUSH 0x23                           ; 0056ed42
    PUSH 0x5ebee5                       ; 0056ed44 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed49
    CALL FUN_005b18e0                   ; 0056ed4a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed4f
    PUSH 0x24                           ; 0056ed52
    PUSH 0x5ebef5                       ; 0056ed54 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed59
    CALL FUN_005b18e0                   ; 0056ed5a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed5f
    PUSH 0x25                           ; 0056ed62
    PUSH 0x5ebf05                       ; 0056ed64 | = "Bip01 R Forearm"
    PUSH EBX                            ; 0056ed69
    CALL FUN_005b18e0                   ; 0056ed6a
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed6f
    TEST EDI,EDI                        ; 0056ed72
        ;   Label: LAB_0056ed72
    JZ 0x0056ee76                       ; 0056ed74
        ;   XREF to: 0056ee76 (CONDITIONAL_JUMP)  ; LAB_0056ee76
    PUSH 0x2f                           ; 0056ed7a
    PUSH 0x5ebf15                       ; 0056ed7c | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ed81
    CALL FUN_005b18e0                   ; 0056ed82
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed87
    PUSH 0x32                           ; 0056ed8a
    PUSH 0x5ebf25                       ; 0056ed8c | = "Bip01 L Forearm"
    PUSH EBX                            ; 0056ed91
    CALL FUN_005b18e0                   ; 0056ed92
        ;   XREF to: 005b18e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b18e0()
    ADD ESP,0xc                         ; 0056ed97
    ADD ESI,0x2b4                       ; 0056ed9a
        ;   Label: LAB_0056ed9a
    PUSH ESI                            ; 0056eda0
    ADD EBX,0x3ab24                     ; 0056eda1
    CALL FUN_005035c0                   ; 0056eda7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056edac
    ADD ESP,0x4                         ; 0056edaf
    CMP EAX,0x2a                        ; 0056edb2
    JNZ 0x0056ee91                      ; 0056edb5
        ;   XREF to: 0056ee91 (CONDITIONAL_JUMP)  ; LAB_0056ee91
    MOV ESI,0xc1a00000                  ; 0056edbb
    XOR EDX,EDX                         ; 0056edc0
    LEA EAX,[ESP + 0x8]                 ; 0056edc2
    MOV dword ptr [ESP + 0xc],EDX       ; 0056edc6
    MOV dword ptr [ESP + 0x10],ESI      ; 0056edca
    MOV dword ptr [ESP + 0x8],EDX       ; 0056edce
    CMP EBX,EAX                         ; 0056edd2
    JZ 0x0056eb78                       ; 0056edd4
        ;   XREF to: 0056eb78 (CONDITIONAL_JUMP)  ; LAB_0056eb78
    MOV dword ptr [EBX + 0x4],EDX       ; 0056edda
    MOV dword ptr [EBX],EDX             ; 0056eddd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056eddf
    MOV dword ptr [EBX + 0x8],EAX       ; 0056ede3
    MOV ESP,EBP                         ; 0056ede6
    POP EBP                             ; 0056ede8
    POP EDI                             ; 0056ede9
    POP ESI                             ; 0056edea
    POP EBX                             ; 0056edeb
    RET                                 ; 0056edec
    PUSH 0x32                           ; 0056eded
        ;   Label: LAB_0056eded
    PUSH EBX                            ; 0056edef
    CALL FUN_005b1980                   ; 0056edf0
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056edf5
    PUSH 0x33                           ; 0056edf8
    PUSH EBX                            ; 0056edfa
    CALL FUN_005b1980                   ; 0056edfb
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee00
    PUSH 0x34                           ; 0056ee03
    PUSH EBX                            ; 0056ee05
    CALL FUN_005b1980                   ; 0056ee06
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee0b
    PUSH 0x35                           ; 0056ee0e
    PUSH EBX                            ; 0056ee10
    CALL FUN_005b1980                   ; 0056ee11
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee16
    PUSH 0x36                           ; 0056ee19
    PUSH EBX                            ; 0056ee1b
    CALL FUN_005b1980                   ; 0056ee1c
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee21
    PUSH 0x37                           ; 0056ee24
    PUSH EBX                            ; 0056ee26
    CALL FUN_005b1980                   ; 0056ee27
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee2c
    PUSH 0x20                           ; 0056ee2f
    PUSH EBX                            ; 0056ee31
    CALL FUN_005b1980                   ; 0056ee32
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee37
    PUSH 0x21                           ; 0056ee3a
    PUSH EBX                            ; 0056ee3c
    CALL FUN_005b1980                   ; 0056ee3d
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee42
    PUSH 0x22                           ; 0056ee45
    PUSH EBX                            ; 0056ee47
    CALL FUN_005b1980                   ; 0056ee48
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee4d
    PUSH 0x23                           ; 0056ee50
    PUSH EBX                            ; 0056ee52
    CALL FUN_005b1980                   ; 0056ee53
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee58
    PUSH 0x24                           ; 0056ee5b
    PUSH EBX                            ; 0056ee5d
    CALL FUN_005b1980                   ; 0056ee5e
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee63
    PUSH 0x25                           ; 0056ee66
    PUSH EBX                            ; 0056ee68
    CALL FUN_005b1980                   ; 0056ee69
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee6e
    JMP 0x0056ed72                      ; 0056ee71
        ;   XREF to: 0056ed72 (UNCONDITIONAL_JUMP)  ; LAB_0056ed72
    PUSH 0x2f                           ; 0056ee76
        ;   Label: LAB_0056ee76
    PUSH EBX                            ; 0056ee78
    CALL FUN_005b1980                   ; 0056ee79
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee7e
    PUSH 0x32                           ; 0056ee81
    PUSH EBX                            ; 0056ee83
    CALL FUN_005b1980                   ; 0056ee84
        ;   XREF to: 005b1980 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1980()
    ADD ESP,0x8                         ; 0056ee89
    JMP 0x0056ed9a                      ; 0056ee8c
        ;   XREF to: 0056ed9a (UNCONDITIONAL_JUMP)  ; LAB_0056ed9a
    CMP EAX,0x2b                        ; 0056ee91
        ;   Label: LAB_0056ee91
    JNZ 0x0056eb78                      ; 0056ee94
        ;   XREF to: 0056eb78 (CONDITIONAL_JUMP)  ; LAB_0056eb78
    XOR ESI,ESI                         ; 0056ee9a
    MOV EAX,0x41a00000                  ; 0056ee9c
    MOV dword ptr [ESP + 0x18],ESI      ; 0056eea1
    MOV dword ptr [ESP + 0x1c],EAX      ; 0056eea5
    LEA EAX,[ESP + 0x14]                ; 0056eea9
    MOV dword ptr [ESP + 0x14],ESI      ; 0056eead
    CMP EBX,EAX                         ; 0056eeb1
    JZ 0x0056eb78                       ; 0056eeb3
        ;   XREF to: 0056eb78 (CONDITIONAL_JUMP)  ; LAB_0056eb78
    MOV dword ptr [EBX + 0x4],ESI       ; 0056eeb9
    MOV dword ptr [EBX],ESI             ; 0056eebc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0056eebe
    MOV dword ptr [EBX + 0x8],EAX       ; 0056eec2
    MOV ESP,EBP                         ; 0056eec5
    POP EBP                             ; 0056eec7
    POP EDI                             ; 0056eec8
    POP ESI                             ; 0056eec9
    POP EBX                             ; 0056eeca
    RET                                 ; 0056eecb

