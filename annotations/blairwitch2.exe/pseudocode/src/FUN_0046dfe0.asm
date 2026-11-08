; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046dfe0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_drone_die_wav_005d18d4
;   TerminatedCString s_drone_hurt_wav_005d18e3
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00488890
;   FUN_005035c0
;   FUN_00503620
;   FUN_00550b70
;   FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dfe0
        ;   Label: FUN_0046dfe0
    PUSH ESI                            ; 0046dfe1
    PUSH EDI                            ; 0046dfe2
    PUSH EBP                            ; 0046dfe3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046dfe4
    MOV EDX,dword ptr [EBX + 0x10b0c]   ; 0046dfe8
    PUSH EDX                            ; 0046dfee
    CALL FUN_00551050                   ; 0046dfef
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0046dff4
    MOV ECX,dword ptr [EBX + 0x10b08]   ; 0046dff7
    PUSH ECX                            ; 0046dffd
    CALL FUN_00551050                   ; 0046dffe
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0046e003
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046e006
    FLD float ptr [EAX + 0x4]           ; 0046e00a
    FSUBR float ptr [EBX + 0x25a8]      ; 0046e00d
    FST float ptr [EBX + 0x25a8]        ; 0046e013
    FLDZ                                ; 0046e019
    FCOMPP                              ; 0046e01b
    FNSTSW AX                           ; 0046e01d
    SAHF                                ; 0046e01f
    JC 0x0046e0a2                       ; 0046e020
        ;   XREF to: 0046e0a2 (CONDITIONAL_JUMP)  ; LAB_0046e0a2
    LEA ESI,[EBX + 0x2b4]               ; 0046e026
    PUSH ESI                            ; 0046e02c
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0046e02d
    CALL FUN_005035c0                   ; 0046e037
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046e03c
    ADD ESP,0x4                         ; 0046e03f
    CMP EAX,0x8                         ; 0046e042
    JZ 0x0046e059                       ; 0046e045
        ;   XREF to: 0046e059 (CONDITIONAL_JUMP)  ; LAB_0046e059
    CMP EAX,0x7                         ; 0046e047
    JZ 0x0046e059                       ; 0046e04a
        ;   XREF to: 0046e059 (CONDITIONAL_JUMP)  ; LAB_0046e059
    PUSH 0x1                            ; 0046e04c
    PUSH 0x7                            ; 0046e04e
    PUSH ESI                            ; 0046e050
    CALL FUN_00503620                   ; 0046e051
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046e056
    MOV EBP,dword ptr [EBX + 0x10b04]   ; 0046e059
        ;   Label: LAB_0046e059
    PUSH EBP                            ; 0046e05f
    CALL FUN_00551050                   ; 0046e060
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0046e065
    MOV EAX,dword ptr [EBX + 0x10b08]   ; 0046e068
    PUSH EAX                            ; 0046e06e
    CALL FUN_00551050                   ; 0046e06f
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0046e074
    PUSH 0x5d18d4                       ; 0046e077 | = "drone-die?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046e07c
    PUSH EBX                            ; 0046e082
    CALL dword ptr [EAX + 0x34]         ; 0046e083
    ADD ESP,0x8                         ; 0046e086
    MOV dword ptr [EBX + 0x10b04],EAX   ; 0046e089
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046e08f
        ;   Label: LAB_0046e08f
    PUSH EDX                            ; 0046e093
    PUSH EBX                            ; 0046e094
    CALL FUN_00488890                   ; 0046e095
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 0046e09a
    POP EBP                             ; 0046e09d
    POP EDI                             ; 0046e09e
    POP ESI                             ; 0046e09f
    POP EBX                             ; 0046e0a0
    RET                                 ; 0046e0a1
    MOV ESI,dword ptr [EBX + 0x10b08]   ; 0046e0a2
        ;   Label: LAB_0046e0a2
    PUSH ESI                            ; 0046e0a8
    CALL FUN_00551050                   ; 0046e0a9
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 0046e0ae
    MOV EDI,dword ptr [EBX + 0x10b04]   ; 0046e0b1
    PUSH EDI                            ; 0046e0b7
    CALL FUN_00550b70                   ; 0046e0b8
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00550b70()
    ADD ESP,0x4                         ; 0046e0bd
    TEST EAX,EAX                        ; 0046e0c0
    JZ 0x0046e12b                       ; 0046e0c2
        ;   XREF to: 0046e12b (CONDITIONAL_JUMP)  ; LAB_0046e12b
    PUSH 0x2                            ; 0046e0c4
        ;   Label: LAB_0046e0c4
    PUSH 0x0                            ; 0046e0c6
    CALL FUN_0040cfc0                   ; 0046e0c8
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 0046e0cd
    MOV ESI,EAX                         ; 0046e0d0
    TEST EAX,EAX                        ; 0046e0d2
    JNZ 0x0046e0e9                      ; 0046e0d4
        ;   XREF to: 0046e0e9 (CONDITIONAL_JUMP)  ; LAB_0046e0e9
    PUSH 0x1                            ; 0046e0d6
    PUSH 0x3                            ; 0046e0d8
    LEA EAX,[EBX + 0x2b4]               ; 0046e0da
    PUSH EAX                            ; 0046e0e0
    CALL FUN_00503620                   ; 0046e0e1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046e0e6
    CMP ESI,0x1                         ; 0046e0e9
        ;   Label: LAB_0046e0e9
    JNZ 0x0046e100                      ; 0046e0ec
        ;   XREF to: 0046e100 (CONDITIONAL_JUMP)  ; LAB_0046e100
    PUSH ESI                            ; 0046e0ee
    PUSH 0x4                            ; 0046e0ef
    LEA EAX,[EBX + 0x2b4]               ; 0046e0f1
    PUSH EAX                            ; 0046e0f7
    CALL FUN_00503620                   ; 0046e0f8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046e0fd
    CMP ESI,0x2                         ; 0046e100
        ;   Label: LAB_0046e100
    JNZ 0x0046e08f                      ; 0046e103
        ;   XREF to: 0046e08f (CONDITIONAL_JUMP)  ; LAB_0046e08f
    PUSH 0x1                            ; 0046e105
    PUSH 0x5                            ; 0046e107
    LEA EAX,[EBX + 0x2b4]               ; 0046e109
    PUSH EAX                            ; 0046e10f
    CALL FUN_00503620                   ; 0046e110
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046e115
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046e118
    PUSH EDX                            ; 0046e11c
    PUSH EBX                            ; 0046e11d
    CALL FUN_00488890                   ; 0046e11e
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 0046e123
    POP EBP                             ; 0046e126
    POP EDI                             ; 0046e127
    POP ESI                             ; 0046e128
    POP EBX                             ; 0046e129
    RET                                 ; 0046e12a
    PUSH 0x5d18e3                       ; 0046e12b | = "drone-hurt?.wav"
        ;   Label: LAB_0046e12b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046e130
    PUSH EBX                            ; 0046e136
    CALL dword ptr [EAX + 0x34]         ; 0046e137
    ADD ESP,0x8                         ; 0046e13a
    MOV dword ptr [EBX + 0x10b04],EAX   ; 0046e13d
    JMP 0x0046e0c4                      ; 0046e143
        ;   XREF to: 0046e0c4 (UNCONDITIONAL_JUMP)  ; LAB_0046e0c4

