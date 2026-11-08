; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005519e0(undefined4 *param_1)
;
; Local Variables:
; undefined1       Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x13b]:1  local_13b
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0055af90 at 0055afc5
;
; Referenced Globals:
;   TerminatedCString s_sound_005e8f25
;   undefined4 DAT_005e8f2b
;   TerminatedCString s_sound_005e8f2f
;   undefined4 DAT_005e8f35
;   TerminatedCString s_sound_sndmain_cpp_005e8f39
;   TerminatedCString s_Unknown_sample_file_form_005e8f4e
;   TerminatedCString s_sound_sndmain_cpp_005e8f77
;   TerminatedCString s_getSampleInfo_can_t_dete_005e8f8c
;   undefined4 DAT_0061bc84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_026349b8
;   undefined4 DAT_026349bc
;   undefined4 DAT_0263cee8
;
; Called Functions:
;   FUN_00460aa0
;   FUN_00461070
;   FUN_004e4500
;   FUN_00509c70
;   FUN_00509cd0
;   FUN_00509f30
;   FUN_0054b4a0
;   FUN_0054bac0
;   FUN_00551440
;   FUN_005532f0
;   FUN_0057cd50
;   FUN_0057cec0
;   FUN_0057d110
;   FUN_0057d180
;   FUN_0057d390
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005519e0
        ;   Label: FUN_005519e0
    PUSH ESI                            ; 005519e1
    PUSH EDI                            ; 005519e2
    PUSH EBP                            ; 005519e3
    SUB ESP,0x12c                       ; 005519e4
    MOV EBP,dword ptr [ESP + 0x140]     ; 005519ea
    CALL FUN_005532f0                   ; 005519f1
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005532f0()
    XOR ESI,ESI                         ; 005519f6
    CMP dword ptr [ESI + 0x2641a34],0x1 ; 005519f8
        ;   Label: LAB_005519f8
    JGE 0x00551a35                      ; 005519ff
        ;   XREF to: 00551a35 (CONDITIONAL_JUMP)  ; LAB_00551a35
    ADD ESI,0x1ac                       ; 00551a01
        ;   Label: LAB_00551a01
    CMP ESI,0x6b00                      ; 00551a07
    JL 0x005519f8                       ; 00551a0d
        ;   XREF to: 005519f8 (CONDITIONAL_JUMP)  ; LAB_005519f8
    CALL FUN_00551440                   ; 00551a0f
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    PUSH EBP                            ; 00551a14
    PUSH 0x5e8f25                       ; 00551a15 | = "sound"
    CALL FUN_00460aa0                   ; 00551a1a
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0x8                         ; 00551a1f
    TEST EAX,EAX                        ; 00551a22
    JG 0x00551a61                       ; 00551a24
        ;   XREF to: 00551a61 (CONDITIONAL_JUMP)  ; LAB_00551a61
    XOR EBP,EBP                         ; 00551a26
    MOV EAX,EBP                         ; 00551a28
        ;   Label: LAB_00551a28
    ADD ESP,0x12c                       ; 00551a2a
    POP EBP                             ; 00551a30
    POP EDI                             ; 00551a31
    POP ESI                             ; 00551a32
    POP EBX                             ; 00551a33
    RET                                 ; 00551a34
    MOV EBX,0x2641924                   ; 00551a35
        ;   Label: LAB_00551a35
    PUSH EBP                            ; 00551a3a
    ADD EBX,ESI                         ; 00551a3b
    PUSH EBX                            ; 00551a3d
    CALL FUN_005b8130                   ; 00551a3e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00551a43
    TEST EAX,EAX                        ; 00551a46
    JNZ 0x00551a01                      ; 00551a48
        ;   XREF to: 00551a01 (CONDITIONAL_JUMP)  ; LAB_00551a01
    MOV ECX,0x54                        ; 00551a4a
    MOV EDI,EBP                         ; 00551a4f
    MOV ESI,EBX                         ; 00551a51
    MOV EBP,0x1                         ; 00551a53
    MOVSD.REP ES:EDI,ESI                ; 00551a58
    CALL FUN_00551440                   ; 00551a5a
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    JMP 0x00551a28                      ; 00551a5f
        ;   XREF to: 00551a28 (UNCONDITIONAL_JUMP)  ; LAB_00551a28
    MOV EAX,ESP                         ; 00551a61
        ;   Label: LAB_00551a61
    PUSH EAX                            ; 00551a63
    PUSH 0x0                            ; 00551a64
    PUSH 0x0                            ; 00551a66
    PUSH 0x0                            ; 00551a68
    PUSH EBP                            ; 00551a6a
    CALL FUN_00461070                   ; 00551a6b
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; undefined FUN_00461070()
    ADD ESP,0x14                        ; 00551a70
    CMP byte ptr [ESP],0x2e             ; 00551a73
    JNZ 0x00551a98                      ; 00551a77
        ;   XREF to: 00551a98 (CONDITIONAL_JUMP)  ; LAB_00551a98
    MOV EDI,ESP                         ; 00551a79
    SUB ECX,ECX                         ; 00551a7b
    DEC ECX                             ; 00551a7d
    XOR EAX,EAX                         ; 00551a7e
    SCASB.REPNE ES:EDI                  ; 00551a80
    NOT ECX                             ; 00551a82
    DEC ECX                             ; 00551a84
    PUSH ECX                            ; 00551a85
    LEA EAX,[ESP + 0x5]                 ; 00551a86
    PUSH EAX                            ; 00551a8a
    LEA EAX,[ESP + 0x8]                 ; 00551a8b
    PUSH EAX                            ; 00551a8f
    CALL FUN_005ba1f0                   ; 00551a90
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 00551a95
    PUSH 0x5e8f2b                       ; 00551a98 | DAT_005e8f2b
        ;   Label: LAB_00551a98
    LEA EAX,[ESP + 0x4]                 ; 00551a9d
    PUSH EAX                            ; 00551aa1
    CALL FUN_005b8130                   ; 00551aa2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00551aa7
    TEST EAX,EAX                        ; 00551aaa
    JNZ 0x00551b7f                      ; 00551aac
        ;   XREF to: 00551b7f (CONDITIONAL_JUMP)  ; LAB_00551b7f
    LEA EAX,[ESP + 0x100]               ; 00551ab2
    PUSH EAX                            ; 00551ab9
    CALL FUN_0057cd50                   ; 00551aba
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cd50()
    ADD ESP,0x4                         ; 00551abf
    PUSH EBP                            ; 00551ac2
    PUSH 0x5e8f2f                       ; 00551ac3 | = "sound"
    LEA EAX,[ESP + 0x108]               ; 00551ac8
    PUSH EAX                            ; 00551acf
    CALL FUN_0057d390                   ; 00551ad0
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d390()
    ADD ESP,0xc                         ; 00551ad5
    TEST EAX,EAX                        ; 00551ad8
    JZ 0x00551b5f                       ; 00551ada
        ;   XREF to: 00551b5f (CONDITIONAL_JUMP)  ; LAB_00551b5f
    LEA EAX,[ESP + 0x100]               ; 00551ae0
    PUSH EAX                            ; 00551ae7
    CALL FUN_0057d110                   ; 00551ae8
        ;   XREF to: 0057d110 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d110()
    ADD ESP,0x4                         ; 00551aed
    PUSH EBP                            ; 00551af0
    MOV dword ptr [ESP + 0x12c],EAX     ; 00551af1
    LEA EAX,[ESP + 0x12c]               ; 00551af8
    PUSH EAX                            ; 00551aff
    LEA EAX,[ESP + 0x108]               ; 00551b00
    PUSH EAX                            ; 00551b07
    CALL FUN_0054b4a0                   ; 00551b08
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054b4a0()
    ADD ESP,0xc                         ; 00551b0d
    TEST EAX,EAX                        ; 00551b10
    JZ 0x00551b5f                       ; 00551b12
        ;   XREF to: 00551b5f (CONDITIONAL_JUMP)  ; LAB_00551b5f
    LEA EAX,[ESP + 0x100]               ; 00551b14
    PUSH EAX                            ; 00551b1b
    CALL FUN_0057d180                   ; 00551b1c
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d180()
    ADD ESP,0x4                         ; 00551b21
    PUSH 0x0                            ; 00551b24
    LEA EAX,[ESP + 0x104]               ; 00551b26
    PUSH EAX                            ; 00551b2d
    CALL FUN_0057cec0                   ; 00551b2e
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cec0()
    ADD ESP,0x8                         ; 00551b33
        ;   Label: LAB_00551b33
    PUSH EBP                            ; 00551b36
        ;   Label: LAB_00551b36
    CALL FUN_0054bac0                   ; 00551b37
        ;   XREF to: 0054bac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bac0()
    MOV ESI,dword ptr [EBP + 0x110]     ; 00551b3c
    ADD ESP,0x4                         ; 00551b42
    TEST ESI,ESI                        ; 00551b45
    JLE 0x00551c39                      ; 00551b47
        ;   XREF to: 00551c39 (CONDITIONAL_JUMP)  ; LAB_00551c39
    MOV EBP,0x1                         ; 00551b4d
    MOV EAX,EBP                         ; 00551b52
    ADD ESP,0x12c                       ; 00551b54
    POP EBP                             ; 00551b5a
    POP EDI                             ; 00551b5b
    POP ESI                             ; 00551b5c
    POP EBX                             ; 00551b5d
    RET                                 ; 00551b5e
    XOR EBP,EBP                         ; 00551b5f
        ;   Label: LAB_00551b5f
    PUSH EBP                            ; 00551b61
    LEA EAX,[ESP + 0x104]               ; 00551b62
    PUSH EAX                            ; 00551b69
    CALL FUN_0057cec0                   ; 00551b6a
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cec0()
    ADD ESP,0x8                         ; 00551b6f
    MOV EAX,EBP                         ; 00551b72
    ADD ESP,0x12c                       ; 00551b74
    POP EBP                             ; 00551b7a
    POP EDI                             ; 00551b7b
    POP ESI                             ; 00551b7c
    POP EBX                             ; 00551b7d
    RET                                 ; 00551b7e
    PUSH 0x5e8f35                       ; 00551b7f | DAT_005e8f35
        ;   Label: LAB_00551b7f
    LEA EAX,[ESP + 0x4]                 ; 00551b84
    PUSH EAX                            ; 00551b88
    CALL FUN_005b8130                   ; 00551b89
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00551b8e
    TEST EAX,EAX                        ; 00551b91
    JNZ 0x00551c13                      ; 00551b93
        ;   XREF to: 00551c13 (CONDITIONAL_JUMP)  ; LAB_00551c13
    MOV DL,byte ptr [0x0263cee8]        ; 00551b99 | DAT_0263cee8
    TEST DL,0x1                         ; 00551b9f
    JNZ 0x00551bc9                      ; 00551ba2
        ;   XREF to: 00551bc9 (CONDITIONAL_JUMP)  ; LAB_00551bc9
    MOV DH,DL                           ; 00551ba4
    OR DH,0x1                           ; 00551ba6
    PUSH 0x26348b8                      ; 00551ba9
    MOV byte ptr [0x0263cee8],DH        ; 00551bae | DAT_0263cee8
    CALL FUN_00509c70                   ; 00551bb4
        ;   XREF to: 00509c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00509c70()
    ADD ESP,0x4                         ; 00551bb9
    PUSH 0x61bc84                       ; 00551bbc | DAT_0061bc84
    CALL FUN_005b8d8c                   ; 00551bc1
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined FUN_005b8d8c()
    ADD ESP,0x4                         ; 00551bc6
    PUSH EBP                            ; 00551bc9
        ;   Label: LAB_00551bc9
    PUSH 0x26348b8                      ; 00551bca
    CALL FUN_00509cd0                   ; 00551bcf
        ;   XREF to: 00509cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00509cd0()
    MOV dword ptr [EBP + 0x104],0x10    ; 00551bd4
    MOV EAX,[0x026349bc]                ; 00551bde | DAT_026349bc
    MOV dword ptr [EBP + 0x108],EAX     ; 00551be3
    ADD ESP,0x8                         ; 00551be9
    MOV EAX,[0x026349b8]                ; 00551bec | DAT_026349b8
    MOV dword ptr [EBP + 0x110],0xffffffff ; 00551bf1
    PUSH 0x26348b8                      ; 00551bfb
    MOV dword ptr [EBP + 0x10c],EAX     ; 00551c00
    CALL FUN_00509f30                   ; 00551c06
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509f30()
    ADD ESP,0x4                         ; 00551c0b
    JMP 0x00551b36                      ; 00551c0e
        ;   XREF to: 00551b36 (UNCONDITIONAL_JUMP)  ; LAB_00551b36
    PUSH EBP                            ; 00551c13
        ;   Label: LAB_00551c13
    MOV ECX,0x5e8f39                    ; 00551c14 | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x12c9                      ; 00551c19
    PUSH 0x5e8f4e                       ; 00551c1e | = "Unknown sample file format extension: %s"
    MOV dword ptr [0x01d046a0],ECX      ; 00551c23 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00551c29 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00551c2f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    JMP 0x00551b33                      ; 00551c34
        ;   XREF to: 00551b33 (UNCONDITIONAL_JUMP)  ; LAB_00551b33
    PUSH EBP                            ; 00551c39
        ;   Label: LAB_00551c39
    MOV EDI,0x5e8f77                    ; 00551c3a | = "..\\sound\\sndmain.cpp"
    MOV EAX,0x12d4                      ; 00551c3f
    PUSH 0x5e8f8c                       ; 00551c44 | = "getSampleInfo - can't determine lengt..."
    MOV dword ptr [0x01d046a0],EDI      ; 00551c49 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00551c4f | DAT_01d046a4
    CALL FUN_004e4500                   ; 00551c54
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00551c59
    MOV EBP,0x1                         ; 00551c5c
    MOV EAX,EBP                         ; 00551c61
    ADD ESP,0x12c                       ; 00551c63
    POP EBP                             ; 00551c69
    POP EDI                             ; 00551c6a
    POP ESI                             ; 00551c6b
    POP EBX                             ; 00551c6c
    RET                                 ; 00551c6d

