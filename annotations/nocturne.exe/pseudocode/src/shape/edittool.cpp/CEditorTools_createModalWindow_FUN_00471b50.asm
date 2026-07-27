; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_createModalWindow_FUN_00471b50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte param_7)
;
; Local Variables:
; undefined4       Stack[-0x12e8]:4  local_12e8
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_00471a80 at 00471b24
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e4fa
;   TerminatedCString s_gEdFont_must_be_set_by_t_0057e510
;   TerminatedCString s_shape_edittool_cpp_0057e8e2
;   TerminatedCString s_Can_t_open_another_windo_0057e8f8
;   TerminatedCString s_s_0057e913
;   TerminatedCString s_shape_edittool_cpp_0057e917
;   TerminatedCString s_out_of_memory_to_open_ed_0057e92d
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bd2fa0
;   ... and 14 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_setupViewportAndClipping_FUN_00401e30
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60
;   engine_font.cpp_CBitFont_wrapText_FUN_00492f30
;   engine_special.cpp_FUN_00532320
;   engine_special.cpp_lockFrame_FUN_005322e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00471b50
        ;   Label: shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50
    PUSH ESI                            ; 00471b51
    PUSH EDI                            ; 00471b52
    PUSH EBP                            ; 00471b53
    SUB ESP,0x12d8                      ; 00471b54
    MOV ESI,dword ptr [ESP + 0x1300]    ; 00471b5a
    CMP dword ptr [0x01bcd070],0x0      ; 00471b61 | DAT_01bcd070
    JZ 0x00472058                       ; 00471b68
        ;   XREF to: 00472058 (CONDITIONAL_JUMP)  ; LAB_00472058
    MOV EAX,[0x01bcd070]                ; 00471b6e | DAT_01bcd070
        ;   Label: LAB_00471b6e
    PUSH 0x6a                           ; 00471b73
    MOV EDX,dword ptr [EAX + 0x3168]    ; 00471b75
    PUSH EAX                            ; 00471b7b
    MOV dword ptr [0x01bcd9b8],EDX      ; 00471b7c | DAT_01bcd9b8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00471b82
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0()
    MOV EDI,dword ptr [0x01bcd07c]      ; 00471b87 | DAT_01bcd07c
    ADD ESP,0x8                         ; 00471b8d
    MOV [0x01bcd9bc],EAX                ; 00471b90 | DAT_01bcd9bc
    CMP EDI,0x5                         ; 00471b95
    JL 0x00471bbc                       ; 00471b98
        ;   XREF to: 00471bbc (CONDITIONAL_JUMP)  ; LAB_00471bbc
    MOV EBP,0x57e8e2                    ; 00471b9a | = "..\\shape\\edittool.cpp"
    MOV EAX,0x674                       ; 00471b9f
    PUSH 0x57e8f8                       ; 00471ba4 | = "Can't open another window!"
    MOV dword ptr [0x01cc4800],EBP      ; 00471ba9 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00471baf | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00471bb4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00471bb9
    MOV EDX,dword ptr [0x01bcd07c]      ; 00471bbc | DAT_01bcd07c
        ;   Label: LAB_00471bbc
    MOV EAX,EDX                         ; 00471bc2
    SHL EAX,0x4                         ; 00471bc4
    SUB EAX,EDX                         ; 00471bc7
    SHL EAX,0x2                         ; 00471bc9
    SUB EAX,EDX                         ; 00471bcc
    MOV EDX,0x1bcd080                   ; 00471bce
    SHL EAX,0x3                         ; 00471bd3
    ADD EDX,EAX                         ; 00471bd6
    MOV EAX,[0x005b761c]                ; 00471bd8 | DAT_005b761c
    MOV dword ptr [ESP + 0x12cc],EDX    ; 00471bdd
    MOV EDX,EAX                         ; 00471be4
    SAR EDX,0x1f                        ; 00471be6
    SHL EDX,0x7                         ; 00471be9
    SBB EAX,EDX                         ; 00471bec
    SAR EAX,0x7                         ; 00471bee
    MOV dword ptr [ESP + 0x12c8],EAX    ; 00471bf1
    MOV EAX,[0x005b7620]                ; 00471bf8 | DAT_005b7620
    MOV EDX,EAX                         ; 00471bfd
    MOV EBX,0x60                        ; 00471bff
    SAR EDX,0x1f                        ; 00471c04
    IDIV EBX                            ; 00471c07
    MOV ECX,dword ptr [ESP + 0x12f0]    ; 00471c09
    MOV EDI,dword ptr [ESP + 0x12f8]    ; 00471c10
    MOV EBP,dword ptr [ESP + 0x12fc]    ; 00471c17
    MOV EBX,dword ptr [ESP + 0x12f4]    ; 00471c1e
    MOV EDX,dword ptr [0x01bcd07c]      ; 00471c25 | DAT_01bcd07c
    MOV dword ptr [ESP + 0x12c4],EAX    ; 00471c2b
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00471c32
    INC EDX                             ; 00471c39
    SUB ECX,EAX                         ; 00471c3a
    MOV EAX,dword ptr [ESP + 0x12c4]    ; 00471c3c
    MOV dword ptr [0x01bcd07c],EDX      ; 00471c43 | DAT_01bcd07c
    SUB EBX,EAX                         ; 00471c49
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00471c4b
    MOV dword ptr [ESP + 0x12f0],ECX    ; 00471c52
    ADD EDI,EAX                         ; 00471c59
    MOV EAX,dword ptr [ESP + 0x12c4]    ; 00471c5b
    MOV dword ptr [ESP + 0x12f4],EBX    ; 00471c62
    ADD EBP,EAX                         ; 00471c69
    MOV dword ptr [ESP + 0x12f8],EDI    ; 00471c6b
    MOV dword ptr [ESP + 0x12fc],EBP    ; 00471c72
    TEST ECX,ECX                        ; 00471c79
    JL 0x00472080                       ; 00471c7b
        ;   XREF to: 00472080 (CONDITIONAL_JUMP)  ; LAB_00472080
    MOV EAX,dword ptr [ESP + 0x12f8]    ; 00471c81
        ;   Label: LAB_00471c81
    MOV ECX,dword ptr [0x005b761c]      ; 00471c88 | DAT_005b761c
    CMP EAX,ECX                         ; 00471c8e
    JLE 0x00471c99                      ; 00471c90
        ;   XREF to: 00471c99 (CONDITIONAL_JUMP)  ; LAB_00471c99
    MOV dword ptr [ESP + 0x12f8],ECX    ; 00471c92
    XOR EBX,EBX                         ; 00471c99
        ;   Label: LAB_00471c99
    MOV EAX,dword ptr [ESP + 0x12cc]    ; 00471c9b
    MOV dword ptr [ESP + 0x12c0],EBX    ; 00471ca2
    MOV byte ptr [EAX + 0x38],0x0       ; 00471ca9
    TEST ESI,ESI                        ; 00471cad
    JZ 0x00471d79                       ; 00471caf
        ;   XREF to: 00471d79 (CONDITIONAL_JUMP)  ; LAB_00471d79
    MOV EDX,dword ptr [ESP + 0x12f8]    ; 00471cb5
    MOV EDI,dword ptr [ESP + 0x12f0]    ; 00471cbc
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00471cc3
    SUB EDX,EDI                         ; 00471cca
    ADD EAX,EAX                         ; 00471ccc
    SUB EDX,EAX                         ; 00471cce
    PUSH EDX                            ; 00471cd0
    PUSH 0xc8                           ; 00471cd1
    PUSH 0x14                           ; 00471cd6
    PUSH 0x1bcc0d0                      ; 00471cd8
    PUSH ESI                            ; 00471cdd
    MOV EBP,dword ptr [0x01bcd070]      ; 00471cde | DAT_01bcd070
    PUSH EBP                            ; 00471ce4
    CALL engine_font.cpp_CBitFont_wrapText_FUN_00492f30 ; 00471ce5
        ;   XREF to: 00492f30 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_wrapText_FUN_00492f30()
    ADD ESP,0x18                        ; 00471cea
    XOR ESI,ESI                         ; 00471ced
    MOV EBX,dword ptr [ESP + 0x12cc]    ; 00471cef
    MOV EDI,EAX                         ; 00471cf6
    ADD EBX,0x38                        ; 00471cf8
    TEST EAX,EAX                        ; 00471cfb
    JLE 0x00471d20                      ; 00471cfd
        ;   XREF to: 00471d20 (CONDITIONAL_JUMP)  ; LAB_00471d20
    MOV EBP,0x1bcc0d0                   ; 00471cff
    PUSH EBP                            ; 00471d04
        ;   Label: LAB_00471d04
    PUSH 0x57e913                       ; 00471d05 | = "%s\n"
    PUSH EBX                            ; 00471d0a
    INC ESI                             ; 00471d0b
    ADD EBP,0xc8                        ; 00471d0c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00471d12
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00471d17
    ADD EBX,EAX                         ; 00471d1a
    CMP ESI,EDI                         ; 00471d1c
    JL 0x00471d04                       ; 00471d1e
        ;   XREF to: 00471d04 (CONDITIONAL_JUMP)  ; LAB_00471d04
    TEST EDI,EDI                        ; 00471d20
        ;   Label: LAB_00471d20
    JLE 0x00471d79                      ; 00471d22
        ;   XREF to: 00471d79 (CONDITIONAL_JUMP)  ; LAB_00471d79
    MOV EAX,dword ptr [ESP + 0x12cc]    ; 00471d24
    ADD EAX,0x38                        ; 00471d2b
    PUSH EAX                            ; 00471d2e
    MOV EAX,[0x01bcd070]                ; 00471d2f | DAT_01bcd070
    DEC EBX                             ; 00471d34
    PUSH EAX                            ; 00471d35
    MOV byte ptr [EBX],0x0              ; 00471d36
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60 ; 00471d39
        ;   XREF to: 00492e60 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_CBitFont_getTextHeight_FUN_00492e60()
    MOV EDX,dword ptr [0x01bcd9bc]      ; 00471d3e | DAT_01bcd9bc
    ADD ESP,0x8                         ; 00471d44
    ADD EDX,EAX                         ; 00471d47
    MOV dword ptr [ESP + 0x12c0],EDX    ; 00471d49
    MOV EAX,EDX                         ; 00471d50
    SAR EDX,0x1f                        ; 00471d52
    SUB EAX,EDX                         ; 00471d55
    SAR EAX,0x1                         ; 00471d57
    MOV ECX,dword ptr [ESP + 0x12fc]    ; 00471d59
    MOV EDX,dword ptr [ESP + 0x12f4]    ; 00471d60
    ADD ECX,EAX                         ; 00471d67
    SUB EDX,EAX                         ; 00471d69
    MOV dword ptr [ESP + 0x12fc],ECX    ; 00471d6b
    MOV dword ptr [ESP + 0x12f4],EDX    ; 00471d72
    CMP dword ptr [ESP + 0x12f4],0x0    ; 00471d79
        ;   Label: LAB_00471d79
    JL 0x0047208e                       ; 00471d81
        ;   XREF to: 0047208e (CONDITIONAL_JUMP)  ; LAB_0047208e
    MOV EAX,dword ptr [ESP + 0x12fc]    ; 00471d87
        ;   Label: LAB_00471d87
    MOV EDI,dword ptr [0x005b7620]      ; 00471d8e | DAT_005b7620
    CMP EAX,EDI                         ; 00471d94
    JLE 0x00471d9f                      ; 00471d96
        ;   XREF to: 00471d9f (CONDITIONAL_JUMP)  ; LAB_00471d9f
    MOV dword ptr [ESP + 0x12fc],EDI    ; 00471d98
    TEST byte ptr [ESP + 0x1304],0x1    ; 00471d9f
        ;   Label: LAB_00471d9f
    JNZ 0x0047209c                      ; 00471da7
        ;   XREF to: 0047209c (CONDITIONAL_JUMP)  ; LAB_0047209c
    CMP dword ptr [0x01c02594],0x0      ; 00471dad | DAT_01c02594
    JZ 0x00471e45                       ; 00471db4
        ;   XREF to: 00471e45 (CONDITIONAL_JUMP)  ; LAB_00471e45
    CMP dword ptr [0x005b7620],0x0      ; 00471dba | DAT_005b7620
    JLE 0x00471de0                      ; 00471dc1
        ;   XREF to: 00471de0 (CONDITIONAL_JUMP)  ; LAB_00471de0
    MOV EBX,dword ptr [0x005b7620]      ; 00471dc3 | DAT_005b7620
    XOR EAX,EAX                         ; 00471dc9
    SHL EBX,0x2                         ; 00471dcb
    ADD EAX,0x4                         ; 00471dce
        ;   Label: LAB_00471dce
    MOV EDX,dword ptr [EAX + 0x1bd2f9c] ; 00471dd1 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00471dd7
    CMP EAX,EBX                         ; 00471ddb
    JL 0x00471dce                       ; 00471ddd
        ;   XREF to: 00471dce (CONDITIONAL_JUMP)  ; LAB_00471dce
    NOP                                 ; 00471ddf
    CALL engine_special.cpp_lockFrame_FUN_005322e0 ; 00471de0
        ;   XREF to: 005322e0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_lockFrame_FUN_005322e0()
        ;   Label: LAB_00471de0
    MOV EDX,dword ptr [0x005b761c]      ; 00471de5 | DAT_005b761c
    MOV ECX,dword ptr [0x005b7624]      ; 00471deb | DAT_005b7624
    IMUL EDX,ECX                        ; 00471df1
    MOV EAX,EDX                         ; 00471df4
    SAR EDX,0x1f                        ; 00471df6
    SHL EDX,0x3                         ; 00471df9
    SBB EAX,EDX                         ; 00471dfc
    SAR EAX,0x3                         ; 00471dfe
    MOV ESI,dword ptr [0x005b7620]      ; 00471e01 | DAT_005b7620
    XOR EBX,EBX                         ; 00471e07
    MOV EBP,EAX                         ; 00471e09
    TEST ESI,ESI                        ; 00471e0b
    JLE 0x00471e40                      ; 00471e0d
        ;   XREF to: 00471e40 (CONDITIONAL_JUMP)  ; LAB_00471e40
    XOR EDX,EDX                         ; 00471e0f
    MOV ECX,EBP                         ; 00471e11
        ;   Label: LAB_00471e11
    MOV ESI,dword ptr [EDX + 0x1bd2fa0] ; 00471e13 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV EDI,dword ptr [ESP + EDX*0x1]   ; 00471e19
    PUSH EDI                            ; 00471e1c
    MOV EAX,ECX                         ; 00471e1d
    SHR ECX,0x2                         ; 00471e1f
    MOVSD.REP ES:EDI,ESI                ; 00471e22
    MOV CL,AL                           ; 00471e24
    AND CL,0x3                          ; 00471e26
    MOVSB.REP ES:EDI,ESI                ; 00471e29
    POP EDI                             ; 00471e2b
    INC EBX                             ; 00471e2c
    MOV EDI,dword ptr [0x005b7620]      ; 00471e2d | DAT_005b7620
    ADD EDX,0x4                         ; 00471e33
    CMP EBX,EDI                         ; 00471e36
    JL 0x00471e11                       ; 00471e38
        ;   XREF to: 00471e11 (CONDITIONAL_JUMP)  ; LAB_00471e11
    LEA EAX,[EAX]                       ; 00471e3a
    CALL engine_special.cpp_FUN_00532320 ; 00471e40
        ;   XREF to: 00532320 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00532320()
        ;   Label: LAB_00471e40
    MOV EDX,dword ptr [ESP + 0x12f8]    ; 00471e45
        ;   Label: LAB_00471e45
    MOV EBP,dword ptr [ESP + 0x12f0]    ; 00471e4c
    MOV ECX,dword ptr [0x005b7624]      ; 00471e53 | DAT_005b7624
    SUB EDX,EBP                         ; 00471e59
    IMUL EDX,ECX                        ; 00471e5b
    MOV EBX,dword ptr [ESP + 0x12fc]    ; 00471e5e
    SUB EBX,dword ptr [ESP + 0x12f4]    ; 00471e65
    MOV EAX,EDX                         ; 00471e6c
    SAR EDX,0x1f                        ; 00471e6e
    SHL EDX,0x3                         ; 00471e71
    SBB EAX,EDX                         ; 00471e74
    SAR EAX,0x3                         ; 00471e76
    IMUL EBX,EAX                        ; 00471e79
    PUSH EBX                            ; 00471e7c
    MOV dword ptr [ESP + 0x12d8],EAX    ; 00471e7d
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00471e84
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 00471e89
    MOV EDX,dword ptr [ESP + 0x12cc]    ; 00471e8c
    MOV dword ptr [EDX + 0x1c8],EAX     ; 00471e93
    TEST EAX,EAX                        ; 00471e99
    JNZ 0x00471ebf                      ; 00471e9b
        ;   XREF to: 00471ebf (CONDITIONAL_JUMP)  ; LAB_00471ebf
    MOV EBP,0x57e917                    ; 00471e9d | = "..\\shape\\edittool.cpp"
    MOV EAX,0x6c4                       ; 00471ea2
    PUSH 0x57e92d                       ; 00471ea7 | = "out of memory to open editor window."
    MOV dword ptr [0x01cc4800],EBP      ; 00471eac | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00471eb2 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00471eb7
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00471ebc
    MOV EBP,dword ptr [ESP + 0x12cc]    ; 00471ebf
        ;   Label: LAB_00471ebf
    MOV EAX,dword ptr [ESP + 0x12f4]    ; 00471ec6
    MOV EDX,dword ptr [ESP + 0x12fc]    ; 00471ecd
    MOV EBP,dword ptr [EBP + 0x1c8]     ; 00471ed4
    CMP EAX,EDX                         ; 00471eda
    JGE 0x00471f50                      ; 00471edc
        ;   XREF to: 00471f50 (CONDITIONAL_JUMP)  ; LAB_00471f50
    LEA EBX,[EAX*0x4 + 0x0]             ; 00471ede
    LEA EAX,[EDX*0x4 + 0x0]             ; 00471ee5
    MOV dword ptr [ESP + 0x12d0],EAX    ; 00471eec
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 00471ef3
        ;   Label: LAB_00471ef3
    MOV ECX,dword ptr [0x005b7624]      ; 00471efa | DAT_005b7624
    IMUL EDX,ECX                        ; 00471f00
    MOV EAX,EDX                         ; 00471f03
    SAR EDX,0x1f                        ; 00471f05
    SHL EDX,0x3                         ; 00471f08
    SBB EAX,EDX                         ; 00471f0b
    SAR EAX,0x3                         ; 00471f0d
    MOV EDI,EBP                         ; 00471f10
    MOV ESI,dword ptr [EBX + 0x1bd2fa0] ; 00471f12 | DAT_01bd2fa0 | DAT_01bd2fa4
    MOV ECX,dword ptr [ESP + 0x12d4]    ; 00471f18
    ADD ESI,EAX                         ; 00471f1f
    ADD EBX,0x4                         ; 00471f21
    PUSH EDI                            ; 00471f24
    MOV EAX,ECX                         ; 00471f25
    SHR ECX,0x2                         ; 00471f27
    MOVSD.REP ES:EDI,ESI                ; 00471f2a
    MOV CL,AL                           ; 00471f2c
    AND CL,0x3                          ; 00471f2e
    MOVSB.REP ES:EDI,ESI                ; 00471f31
    POP EDI                             ; 00471f33
    MOV ESI,dword ptr [ESP + 0x12d4]    ; 00471f34
    MOV EDI,dword ptr [ESP + 0x12d0]    ; 00471f3b
    ADD EBP,ESI                         ; 00471f42
    CMP EBX,EDI                         ; 00471f44
    JL 0x00471ef3                       ; 00471f46
        ;   XREF to: 00471ef3 (CONDITIONAL_JUMP)  ; LAB_00471ef3
    LEA EAX,[EAX]                       ; 00471f48
    MOV EDX,EDX                         ; 00471f4e
    MOV EDX,dword ptr [ESP + 0x12cc]    ; 00471f50
        ;   Label: LAB_00471f50
    MOV EAX,[0x01c00c58]                ; 00471f57 | DAT_01c00c58
    MOV dword ptr [EDX + 0x10],EAX      ; 00471f5c
    MOV EAX,[0x01c00c5c]                ; 00471f5f | DAT_01c00c5c
    MOV dword ptr [EDX + 0x14],EAX      ; 00471f64
    MOV EAX,[0x01c00c60]                ; 00471f67 | DAT_01c00c60
    MOV dword ptr [EDX + 0x18],EAX      ; 00471f6c
    MOV EAX,[0x01c00c64]                ; 00471f6f | DAT_01c00c64
    MOV dword ptr [EDX + 0x1c],EAX      ; 00471f74
    MOV EAX,[0x01c00c48]                ; 00471f77 | DAT_01c00c48
    MOV dword ptr [EDX + 0x20],EAX      ; 00471f7c
    MOV EAX,[0x01c00c4c]                ; 00471f7f | DAT_01c00c4c
    MOV dword ptr [EDX + 0x24],EAX      ; 00471f84
    MOV EAX,[0x01c00c50]                ; 00471f87 | DAT_01c00c50
    MOV dword ptr [EDX + 0x28],EAX      ; 00471f8c
    MOV EAX,[0x01c00c54]                ; 00471f8f | DAT_01c00c54
    MOV dword ptr [EDX + 0x2c],EAX      ; 00471f94
    MOV EAX,[0x01c00c68]                ; 00471f97 | DAT_01c00c68
    MOV dword ptr [EDX + 0x30],EAX      ; 00471f9c
    MOV EAX,[0x01c00c6c]                ; 00471f9f | DAT_01c00c6c
    MOV dword ptr [EDX + 0x34],EAX      ; 00471fa4
    MOV EAX,dword ptr [ESP + 0x12f0]    ; 00471fa7
    MOV dword ptr [EDX],EAX             ; 00471fae
    MOV EAX,dword ptr [ESP + 0x12f4]    ; 00471fb0
    MOV dword ptr [EDX + 0x4],EAX       ; 00471fb7
    MOV EAX,dword ptr [ESP + 0x12f8]    ; 00471fba
    MOV dword ptr [EDX + 0x8],EAX       ; 00471fc1
    MOV EAX,dword ptr [ESP + 0x12fc]    ; 00471fc4
    MOV EBP,dword ptr [ESP + 0x12f0]    ; 00471fcb
    MOV dword ptr [EDX + 0xc],EAX       ; 00471fd2
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00471fd5
    MOV EDX,dword ptr [ESP + 0x12f4]    ; 00471fdc
    ADD EBP,EAX                         ; 00471fe3
    MOV EAX,dword ptr [ESP + 0x12c4]    ; 00471fe5
    MOV ECX,dword ptr [ESP + 0x12f8]    ; 00471fec
    ADD EDX,EAX                         ; 00471ff3
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 00471ff5
    MOV EBX,dword ptr [ESP + 0x12fc]    ; 00471ffc
    SUB ECX,EAX                         ; 00472003
    MOV EAX,dword ptr [ESP + 0x12c4]    ; 00472005
    MOV dword ptr [ESP + 0x12f4],EDX    ; 0047200c
    SUB EBX,EAX                         ; 00472013
    MOV EAX,dword ptr [ESP + 0x12c0]    ; 00472015
    MOV dword ptr [ESP + 0x12fc],EBX    ; 0047201c
    LEA ESI,[EDX + EAX*0x1]             ; 00472023
    LEA EAX,[EBX + -0x1]                ; 00472026
    PUSH EAX                            ; 00472029
    MOV dword ptr [ESP + 0x12fc],ECX    ; 0047202a
    LEA EAX,[ECX + -0x1]                ; 00472031
    PUSH EAX                            ; 00472034
    PUSH ESI                            ; 00472035
    PUSH EBP                            ; 00472036
    MOV dword ptr [ESP + 0x1300],EBP    ; 00472037
    MOV dword ptr [ESP + 0x1304],ESI    ; 0047203e
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401e30 ; 00472045
        ;   XREF to: 00401e30 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_setupViewportAndClipping_FUN_00401e30()
    ADD ESP,0x10                        ; 0047204a
    ADD ESP,0x12d8                      ; 0047204d
    POP EBP                             ; 00472053
    POP EDI                             ; 00472054
    POP ESI                             ; 00472055
    POP EBX                             ; 00472056
    RET                                 ; 00472057
    MOV ECX,0x57e4fa                    ; 00472058 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00472058
    MOV EBX,0x8b                        ; 0047205d
    PUSH 0x57e510                       ; 00472062 | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00472067 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0047206d | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00472073
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00472078
    JMP 0x00471b6e                      ; 0047207b
        ;   XREF to: 00471b6e (UNCONDITIONAL_JUMP)  ; LAB_00471b6e
    XOR EDX,EDX                         ; 00472080
        ;   Label: LAB_00472080
    MOV dword ptr [ESP + 0x12f0],EDX    ; 00472082
    JMP 0x00471c81                      ; 00472089
        ;   XREF to: 00471c81 (UNCONDITIONAL_JUMP)  ; LAB_00471c81
    XOR ESI,ESI                         ; 0047208e
        ;   Label: LAB_0047208e
    MOV dword ptr [ESP + 0x12f4],ESI    ; 00472090
    JMP 0x00471d87                      ; 00472097
        ;   XREF to: 00471d87 (UNCONDITIONAL_JUMP)  ; LAB_00471d87
    MOV EAX,dword ptr [ESP + 0x12cc]    ; 0047209c
        ;   Label: LAB_0047209c
    MOV dword ptr [EAX + 0x1c8],0x0     ; 004720a3
    JMP 0x00471f50                      ; 004720ad
        ;   XREF to: 00471f50 (UNCONDITIONAL_JUMP)  ; LAB_00471f50

