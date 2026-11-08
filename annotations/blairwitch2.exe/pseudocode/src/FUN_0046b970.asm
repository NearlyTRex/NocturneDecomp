; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b970(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0041f620 at 0041f74d
;   FUN_00542410 at 00542459
;
; Referenced Globals:
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   FUN_00401310
;   FUN_00430650
;   FUN_00430750
;   FUN_00430850
;   FUN_00430950
;   FUN_004e8f50
;   FUN_0051c720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b970
        ;   Label: FUN_0046b970
    PUSH ESI                            ; 0046b971
    PUSH EDI                            ; 0046b972
    PUSH EBP                            ; 0046b973
    SUB ESP,0x90                        ; 0046b974
    MOV EBP,dword ptr [ESP + 0xa4]      ; 0046b97a
    MOV EAX,[0x0070ca5c]                ; 0046b981 | DAT_0070ca5c
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0046b986
    MOV [0x01c35e60],EAX                ; 0046b98d | DAT_01c35e60
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046b992
    MOV ECX,0xc                         ; 0046b999
    SUB EAX,EBX                         ; 0046b99e
    MOV ESI,dword ptr [EBP]             ; 0046b9a0
    SHL EAX,0x4                         ; 0046b9a3
    LEA EDI,[ESP + 0x60]                ; 0046b9a6
    ADD ESI,EAX                         ; 0046b9aa
    MOV EBX,dword ptr [ESP + 0xac]      ; 0046b9ac
    MOVSD.REP ES:EDI,ESI                ; 0046b9b3
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046b9b5
    MOV ECX,0xc                         ; 0046b9bc
    SUB EAX,EBX                         ; 0046b9c1
    MOV ESI,dword ptr [EBP]             ; 0046b9c3
    SHL EAX,0x4                         ; 0046b9c6
    MOV EDI,ESP                         ; 0046b9c9
    ADD ESI,EAX                         ; 0046b9cb
    MOVSD.REP ES:EDI,ESI                ; 0046b9cd
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046b9cf
    AND EAX,dword ptr [ESP + 0x10]      ; 0046b9d3
    TEST EAX,0x80000000                 ; 0046b9d7
    JNZ 0x0046bbce                      ; 0046b9dc
        ;   XREF to: 0046bbce (CONDITIONAL_JUMP)  ; LAB_0046bbce
    XOR EBX,EBX                         ; 0046b9e2
        ;   Label: LAB_0046b9e2
    MOV EAX,dword ptr [ESP]             ; 0046b9e4
        ;   Label: LAB_0046b9e4
    CMP EAX,dword ptr [ESP + 0x8]       ; 0046b9e7
    JLE 0x0046ba13                      ; 0046b9eb
        ;   XREF to: 0046ba13 (CONDITIONAL_JUMP)  ; LAB_0046ba13
    LEA EAX,[ESP + 0x30]                ; 0046b9ed
    PUSH EAX                            ; 0046b9f1
    LEA EAX,[ESP + 0x4]                 ; 0046b9f2
    PUSH EAX                            ; 0046b9f6
    LEA EAX,[ESP + 0x68]                ; 0046b9f7
    PUSH EAX                            ; 0046b9fb
    LEA EDI,[ESP + 0xc]                 ; 0046b9fc
    LEA ESI,[ESP + 0x3c]                ; 0046ba00
    CALL FUN_00430650                   ; 0046ba04
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 0046ba09
    ADD ESP,0xc                         ; 0046ba0e
    MOVSD.REP ES:EDI,ESI                ; 0046ba11
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046ba13
        ;   Label: LAB_0046ba13
    MOV ESI,dword ptr [ESP]             ; 0046ba17
    NEG EAX                             ; 0046ba1a
    CMP EAX,ESI                         ; 0046ba1c
    JLE 0x0046ba46                      ; 0046ba1e
        ;   XREF to: 0046ba46 (CONDITIONAL_JUMP)  ; LAB_0046ba46
    LEA EAX,[ESP + 0x30]                ; 0046ba20
    PUSH EAX                            ; 0046ba24
    LEA EAX,[ESP + 0x4]                 ; 0046ba25
    PUSH EAX                            ; 0046ba29
    LEA EAX,[ESP + 0x68]                ; 0046ba2a
    PUSH EAX                            ; 0046ba2e
    LEA EDI,[ESP + 0xc]                 ; 0046ba2f
    LEA ESI,[ESP + 0x3c]                ; 0046ba33
    CALL FUN_00430750                   ; 0046ba37
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 0046ba3c
    ADD ESP,0xc                         ; 0046ba41
    MOVSD.REP ES:EDI,ESI                ; 0046ba44
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046ba46
        ;   Label: LAB_0046ba46
    CMP EAX,dword ptr [ESP + 0x8]       ; 0046ba4a
    JLE 0x0046ba76                      ; 0046ba4e
        ;   XREF to: 0046ba76 (CONDITIONAL_JUMP)  ; LAB_0046ba76
    LEA EAX,[ESP + 0x30]                ; 0046ba50
    PUSH EAX                            ; 0046ba54
    LEA EAX,[ESP + 0x4]                 ; 0046ba55
    PUSH EAX                            ; 0046ba59
    LEA EAX,[ESP + 0x68]                ; 0046ba5a
    PUSH EAX                            ; 0046ba5e
    LEA EDI,[ESP + 0xc]                 ; 0046ba5f
    LEA ESI,[ESP + 0x3c]                ; 0046ba63
    CALL FUN_00430850                   ; 0046ba67
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 0046ba6c
    ADD ESP,0xc                         ; 0046ba71
    MOVSD.REP ES:EDI,ESI                ; 0046ba74
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046ba76
        ;   Label: LAB_0046ba76
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046ba7a
    NEG EAX                             ; 0046ba7e
    CMP EAX,EDX                         ; 0046ba80
    JLE 0x0046baaa                      ; 0046ba82
        ;   XREF to: 0046baaa (CONDITIONAL_JUMP)  ; LAB_0046baaa
    LEA EAX,[ESP + 0x30]                ; 0046ba84
    PUSH EAX                            ; 0046ba88
    LEA EAX,[ESP + 0x4]                 ; 0046ba89
    PUSH EAX                            ; 0046ba8d
    LEA EAX,[ESP + 0x68]                ; 0046ba8e
    PUSH EAX                            ; 0046ba92
    LEA EDI,[ESP + 0xc]                 ; 0046ba93
    LEA ESI,[ESP + 0x3c]                ; 0046ba97
    CALL FUN_00430950                   ; 0046ba9b
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 0046baa0
    ADD ESP,0xc                         ; 0046baa5
    MOVSD.REP ES:EDI,ESI                ; 0046baa8
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046baaa
        ;   Label: LAB_0046baaa
    CMP EAX,dword ptr [ESP + 0x68]      ; 0046baae
    JLE 0x0046bada                      ; 0046bab2
        ;   XREF to: 0046bada (CONDITIONAL_JUMP)  ; LAB_0046bada
    LEA EAX,[ESP + 0x30]                ; 0046bab4
    PUSH EAX                            ; 0046bab8
    LEA EAX,[ESP + 0x64]                ; 0046bab9
    PUSH EAX                            ; 0046babd
    LEA EAX,[ESP + 0x8]                 ; 0046babe
    PUSH EAX                            ; 0046bac2
    LEA EDI,[ESP + 0x6c]                ; 0046bac3
    LEA ESI,[ESP + 0x3c]                ; 0046bac7
    CALL FUN_00430650                   ; 0046bacb
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 0046bad0
    ADD ESP,0xc                         ; 0046bad5
    MOVSD.REP ES:EDI,ESI                ; 0046bad8
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046bada
        ;   Label: LAB_0046bada
    MOV ESI,dword ptr [ESP + 0x60]      ; 0046bade
    NEG EAX                             ; 0046bae2
    CMP EAX,ESI                         ; 0046bae4
    JLE 0x0046bb0e                      ; 0046bae6
        ;   XREF to: 0046bb0e (CONDITIONAL_JUMP)  ; LAB_0046bb0e
    LEA EAX,[ESP + 0x30]                ; 0046bae8
    PUSH EAX                            ; 0046baec
    LEA EAX,[ESP + 0x64]                ; 0046baed
    PUSH EAX                            ; 0046baf1
    LEA EAX,[ESP + 0x8]                 ; 0046baf2
    PUSH EAX                            ; 0046baf6
    LEA EDI,[ESP + 0x6c]                ; 0046baf7
    LEA ESI,[ESP + 0x3c]                ; 0046bafb
    CALL FUN_00430750                   ; 0046baff
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 0046bb04
    ADD ESP,0xc                         ; 0046bb09
    MOVSD.REP ES:EDI,ESI                ; 0046bb0c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046bb0e
        ;   Label: LAB_0046bb0e
    CMP EAX,dword ptr [ESP + 0x68]      ; 0046bb12
    JLE 0x0046bb3e                      ; 0046bb16
        ;   XREF to: 0046bb3e (CONDITIONAL_JUMP)  ; LAB_0046bb3e
    LEA EAX,[ESP + 0x30]                ; 0046bb18
    PUSH EAX                            ; 0046bb1c
    LEA EAX,[ESP + 0x64]                ; 0046bb1d
    PUSH EAX                            ; 0046bb21
    LEA EAX,[ESP + 0x8]                 ; 0046bb22
    PUSH EAX                            ; 0046bb26
    LEA EDI,[ESP + 0x6c]                ; 0046bb27
    LEA ESI,[ESP + 0x3c]                ; 0046bb2b
    CALL FUN_00430850                   ; 0046bb2f
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 0046bb34
    ADD ESP,0xc                         ; 0046bb39
    MOVSD.REP ES:EDI,ESI                ; 0046bb3c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046bb3e
        ;   Label: LAB_0046bb3e
    MOV EDX,dword ptr [ESP + 0x64]      ; 0046bb42
    NEG EAX                             ; 0046bb46
    CMP EAX,EDX                         ; 0046bb48
    JLE 0x0046bb72                      ; 0046bb4a
        ;   XREF to: 0046bb72 (CONDITIONAL_JUMP)  ; LAB_0046bb72
    LEA EAX,[ESP + 0x30]                ; 0046bb4c
    PUSH EAX                            ; 0046bb50
    LEA EAX,[ESP + 0x64]                ; 0046bb51
    PUSH EAX                            ; 0046bb55
    LEA EAX,[ESP + 0x8]                 ; 0046bb56
    PUSH EAX                            ; 0046bb5a
    LEA EDI,[ESP + 0x6c]                ; 0046bb5b
    LEA ESI,[ESP + 0x3c]                ; 0046bb5f
    CALL FUN_00430950                   ; 0046bb63
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 0046bb68
    ADD ESP,0xc                         ; 0046bb6d
    MOVSD.REP ES:EDI,ESI                ; 0046bb70
    INC EBX                             ; 0046bb72
        ;   Label: LAB_0046bb72
    CMP EBX,0x2                         ; 0046bb73
    JL 0x0046b9e4                       ; 0046bb76
        ;   XREF to: 0046b9e4 (CONDITIONAL_JUMP)  ; LAB_0046b9e4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0046bb7c
    MOV ECX,dword ptr [ESP + 0x68]      ; 0046bb80
    CMP EAX,ECX                         ; 0046bb84
    JG 0x0046bbc3                       ; 0046bb86
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    MOV EBX,ECX                         ; 0046bb88
    NEG EBX                             ; 0046bb8a
    CMP EBX,EAX                         ; 0046bb8c
    JG 0x0046bbc3                       ; 0046bb8e
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046bb90
    CMP EAX,ECX                         ; 0046bb94
    JG 0x0046bbc3                       ; 0046bb96
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    CMP EBX,EAX                         ; 0046bb98
    JG 0x0046bbc3                       ; 0046bb9a
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    MOV EAX,dword ptr [ESP]             ; 0046bb9c
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046bb9f
    CMP EAX,EDX                         ; 0046bba3
    JG 0x0046bbc3                       ; 0046bba5
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    MOV EBX,EDX                         ; 0046bba7
    NEG EBX                             ; 0046bba9
    CMP EBX,EAX                         ; 0046bbab
    JG 0x0046bbc3                       ; 0046bbad
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046bbaf
    CMP EAX,EDX                         ; 0046bbb3
    JG 0x0046bbc3                       ; 0046bbb5
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    CMP EBX,EAX                         ; 0046bbb7
    JG 0x0046bbc3                       ; 0046bbb9
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    TEST ECX,ECX                        ; 0046bbbb
    JLE 0x0046bbc3                      ; 0046bbbd
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    TEST EDX,EDX                        ; 0046bbbf
    JG 0x0046bbd7                       ; 0046bbc1
        ;   XREF to: 0046bbd7 (CONDITIONAL_JUMP)  ; LAB_0046bbd7
    ADD ESP,0x90                        ; 0046bbc3
        ;   Label: LAB_0046bbc3
    POP EBP                             ; 0046bbc9
    POP EDI                             ; 0046bbca
    POP ESI                             ; 0046bbcb
    POP EBX                             ; 0046bbcc
    RET                                 ; 0046bbcd
    TEST AL,0xff                        ; 0046bbce
        ;   Label: LAB_0046bbce
    JNZ 0x0046bbc3                      ; 0046bbd0
        ;   XREF to: 0046bbc3 (CONDITIONAL_JUMP)  ; LAB_0046bbc3
    JMP 0x0046b9e2                      ; 0046bbd2
        ;   XREF to: 0046b9e2 (UNCONDITIONAL_JUMP)  ; LAB_0046b9e2
    MOV ECX,0xc                         ; 0046bbd7
        ;   Label: LAB_0046bbd7
    MOV EDI,dword ptr [EBP]             ; 0046bbdc
    LEA ESI,[ESP + 0x60]                ; 0046bbdf
    ADD EDI,0xea5a0                     ; 0046bbe3
    MOVSD.REP ES:EDI,ESI                ; 0046bbe9
    MOV ECX,0xc                         ; 0046bbeb
    MOV EDI,dword ptr [EBP]             ; 0046bbf0
    MOV ESI,ESP                         ; 0046bbf3
    ADD EDI,0xea5d0                     ; 0046bbf5
    PUSH 0x4e1e                         ; 0046bbfb
    MOVSD.REP ES:EDI,ESI                ; 0046bc00
    CALL FUN_004e8f50                   ; 0046bc02
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    ADD ESP,0x4                         ; 0046bc07
    PUSH 0x4e1f                         ; 0046bc0a
    CALL FUN_004e8f50                   ; 0046bc0f
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    ADD ESP,0x4                         ; 0046bc14
    MOV EAX,dword ptr [EBP]             ; 0046bc17
    PUSH 0x2                            ; 0046bc1a
    ADD EAX,0xea5a0                     ; 0046bc1c
    PUSH EAX                            ; 0046bc21
    CALL FUN_0051c720                   ; 0046bc22
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c720()
    MOV EBX,dword ptr [EBP]             ; 0046bc27
    LEA EAX,[EBX + 0xea5d0]             ; 0046bc2a
    ADD ESP,0x8                         ; 0046bc30
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046bc33
    MOV ESI,dword ptr [EAX + 0x14]      ; 0046bc36
    PUSH ECX                            ; 0046bc39
    SAR ESI,0x10                        ; 0046bc3a
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046bc3d
    PUSH ESI                            ; 0046bc40
    SAR EAX,0x10                        ; 0046bc41
    PUSH EAX                            ; 0046bc44
    LEA EAX,[EBX + 0xea5a0]             ; 0046bc45
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046bc4b
    PUSH EBX                            ; 0046bc4e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0046bc4f
    SAR EBX,0x10                        ; 0046bc52
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046bc55
    PUSH EBX                            ; 0046bc58
    SAR EAX,0x10                        ; 0046bc59
    PUSH EAX                            ; 0046bc5c
    CALL FUN_00401310                   ; 0046bc5d
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; undefined FUN_00401310()
    ADD ESP,0x18                        ; 0046bc62
    ADD ESP,0x90                        ; 0046bc65
    POP EBP                             ; 0046bc6b
    POP EDI                             ; 0046bc6c
    POP ESI                             ; 0046bc6d
    POP EBX                             ; 0046bc6e
    RET                                 ; 0046bc6f

