; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e78b0(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_d_0058b77c
;   TerminatedCString s_u_0058b77f
;   TerminatedCString s_sound_mp3_cpp_0058b782
;   TerminatedCString s_wrong_table_number_u_Fil_0058b793
;   TerminatedCString s_sound_mp3_cpp_0058b7b4
;   TerminatedCString s_wrong_table_u_reference_0058b7c5
;   TerminatedCString s_sound_mp3_cpp_0058b7e9
;   TerminatedCString s_MP3_Huffman_tree_overflo_0058b7fa
;   TerminatedCString s_sound_mp3_cpp_0058b81f
;   TerminatedCString s_huffman_decodertable_err_0058b830
;   undefined4 DAT_005bdba0
;   undefined4 DAT_005bdba4
;   undefined4 DAT_005bdba8
;   undefined4 DAT_005bdbac
;   undefined4 DAT_005bdbb0
;   ... and 5 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e78b0
        ;   Label: FUN_004e78b0
    PUSH ESI                            ; 004e78b1
    PUSH EDI                            ; 004e78b2
    PUSH EBP                            ; 004e78b3
    SUB ESP,0xc                         ; 004e78b4
    MOV EDX,0x1cd8c28                   ; 004e78b7
    XOR EBP,EBP                         ; 004e78bc
    XOR EBX,EBX                         ; 004e78be
    MOV dword ptr [ESP + 0x4],EDX       ; 004e78c0
    MOV dword ptr [ESP + 0x8],EBP       ; 004e78c4
    PUSH EBP                            ; 004e78c8
        ;   Label: LAB_004e78c8
    PUSH 0x58b77c                       ; 004e78c9 | = "%d"
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e78ce
    PUSH ESI                            ; 004e78d2
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004e78d3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004e78d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e78db
    MOV EAX,dword ptr [EAX + 0x5bdba0]  ; 004e78df | DAT_005bdba0
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e78e5 | DAT_01cd944c
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e78eb
    MOV EAX,dword ptr [EAX + 0x5bdba4]  ; 004e78ef | DAT_005bdba4
    MOV dword ptr [EBX + 0x1cd8c2c],EAX ; 004e78f5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e78fb
    MOV EAX,dword ptr [EAX + 0x5bdba8]  ; 004e78ff | DAT_005bdba8
    MOV dword ptr [EBX + 0x1cd8c30],EAX ; 004e7905
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e790b
    MOV EAX,dword ptr [EAX + 0x5bdbac]  ; 004e790f | DAT_005bdbac
    MOV dword ptr [EBX + 0x1cd8c34],EAX ; 004e7915
    MOV EAX,0x1                         ; 004e791b
    MOV CL,byte ptr [EBX + 0x1cd8c34]   ; 004e7920
    SHL EAX,CL                          ; 004e7926
    DEC EAX                             ; 004e7928
    MOV dword ptr [EBX + 0x1cd8c38],EAX ; 004e7929
    MOV EAX,ESP                         ; 004e792f
    PUSH EAX                            ; 004e7931
    PUSH 0x58b77f                       ; 004e7932 | = "%u"
    PUSH ESI                            ; 004e7937
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 004e7938
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sscanf_FUN_00566b5c()
    ADD ESP,0xc                         ; 004e793d
    CMP EBP,dword ptr [ESP]             ; 004e7940
    JNZ 0x004e7a09                      ; 004e7943
        ;   XREF to: 004e7a09 (CONDITIONAL_JUMP)  ; LAB_004e7a09
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7949
        ;   Label: LAB_004e7949
    MOV EAX,dword ptr [EAX + 0x5bdbb0]  ; 004e794d | DAT_005bdbb0
    TEST EAX,EAX                        ; 004e7953
    JL 0x004e7a4b                       ; 004e7955
        ;   XREF to: 004e7a4b (CONDITIONAL_JUMP)  ; LAB_004e7a4b
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e795b
    IMUL EDX,EAX,0x828                  ; 004e7961
    MOV ESI,0x1cd8c28                   ; 004e7967
    MOV EDI,0x1cd8c28                   ; 004e796c
    MOV ECX,0x802                       ; 004e7971
    ADD EDI,EBX                         ; 004e7976
    ADD ESI,EDX                         ; 004e7978
    ADD EDI,0x20                        ; 004e797a
    ADD ESI,0x20                        ; 004e797d
    PUSH EDI                            ; 004e7980
    MOV EAX,ECX                         ; 004e7981
    SHR ECX,0x2                         ; 004e7983
    MOVSD.REP ES:EDI,ESI                ; 004e7986
    MOV CL,AL                           ; 004e7988
    AND CL,0x3                          ; 004e798a
    MOVSB.REP ES:EDI,ESI                ; 004e798d
    POP EDI                             ; 004e798f
    MOV EAX,dword ptr [EDX + 0x1cd944c] ; 004e7990 | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd944c],EAX ; 004e7996 | DAT_01cd944c
    MOV EAX,dword ptr [EBX + 0x1cd8c2c] ; 004e799c
    CMP EAX,dword ptr [EDX + 0x1cd8c2c] ; 004e79a2
    JZ 0x004e7a37                       ; 004e79a8
        ;   XREF to: 004e7a37 (CONDITIONAL_JUMP)  ; LAB_004e7a37
    PUSH 0x1cd8b28                      ; 004e79ae | DAT_01cd8b28
        ;   Label: LAB_004e79ae
    PUSH EBP                            ; 004e79b3
    MOV EDI,0x58b7b4                    ; 004e79b4 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd76                       ; 004e79b9
    PUSH 0x58b7c5                       ; 004e79be | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x01cc4800],EDI      ; 004e79c3 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004e79c9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e79ce
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
        ;   Label: LAB_004e79ce
    ADD ESP,0xc                         ; 004e79d3
    MOV ESI,dword ptr [ESP + 0x8]       ; 004e79d6
        ;   Label: LAB_004e79d6
    MOV ECX,dword ptr [ESP + 0x4]       ; 004e79da
    ADD EBX,0x828                       ; 004e79de
    INC EBP                             ; 004e79e4
    ADD ESI,0x18                        ; 004e79e5
    ADD ECX,0x828                       ; 004e79e8
    MOV dword ptr [ESP + 0x8],ESI       ; 004e79ee
    MOV dword ptr [ESP + 0x4],ECX       ; 004e79f2
    CMP EBP,0x22                        ; 004e79f6
    JL 0x004e78c8                       ; 004e79f9
        ;   XREF to: 004e78c8 (CONDITIONAL_JUMP)  ; LAB_004e78c8
    MOV EAX,EBP                         ; 004e79ff
    ADD ESP,0xc                         ; 004e7a01
    POP EBP                             ; 004e7a04
    POP EDI                             ; 004e7a05
    POP ESI                             ; 004e7a06
    POP EBX                             ; 004e7a07
    RET                                 ; 004e7a08
    PUSH 0x1cd8b28                      ; 004e7a09 | DAT_01cd8b28
        ;   Label: LAB_004e7a09
    PUSH EBP                            ; 004e7a0e
    MOV EDX,0x58b782                    ; 004e7a0f | = "..\\sound\\mp3.cpp"
    MOV ECX,0xd6b                       ; 004e7a14
    PUSH 0x58b793                       ; 004e7a19 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x01cc4800],EDX      ; 004e7a1e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e7a24 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e7a2a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 004e7a2f
    JMP 0x004e7949                      ; 004e7a32
        ;   XREF to: 004e7949 (UNCONDITIONAL_JUMP)  ; LAB_004e7949
    MOV ESI,dword ptr [EDX + 0x1cd8c30] ; 004e7a37
        ;   Label: LAB_004e7a37
    CMP ESI,dword ptr [EBX + 0x1cd8c30] ; 004e7a3d
    JNZ 0x004e79ae                      ; 004e7a43
        ;   XREF to: 004e79ae (CONDITIONAL_JUMP)  ; LAB_004e79ae
    JMP 0x004e79d6                      ; 004e7a49
        ;   XREF to: 004e79d6 (UNCONDITIONAL_JUMP)  ; LAB_004e79d6
    CMP EAX,-0x1                        ; 004e7a4b
        ;   Label: LAB_004e7a4b
    JNZ 0x004e7ada                      ; 004e7a4e
        ;   XREF to: 004e7ada (CONDITIONAL_JUMP)  ; LAB_004e7ada
    MOV EDX,dword ptr [EBX + 0x1cd944c] ; 004e7a54 | DAT_01cd944c
    MOV dword ptr [EBX + 0x1cd8c3c],EAX ; 004e7a5a
    CMP EDX,0x401                       ; 004e7a60
    JNC 0x004e7ab0                      ; 004e7a66
        ;   XREF to: 004e7ab0 (CONDITIONAL_JUMP)  ; LAB_004e7ab0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7a68
        ;   Label: LAB_004e7a68
    MOV EDI,EBX                         ; 004e7a6c
    MOV ECX,EBX                         ; 004e7a6e
    MOV EDX,dword ptr [EBX + 0x1cd944c] ; 004e7a70 | DAT_01cd944c
    XOR ESI,ESI                         ; 004e7a76
    MOV EAX,dword ptr [EAX + 0x5bdbb4]  ; 004e7a78 | DAT_005bdbb4
    TEST EDX,EDX                        ; 004e7a7e
    JBE 0x004e79d6                      ; 004e7a80
        ;   XREF to: 004e79d6 (CONDITIONAL_JUMP)  ; LAB_004e79d6
    MOV EDX,EAX                         ; 004e7a86
        ;   Label: LAB_004e7a86
    MOV DL,byte ptr [EDX]               ; 004e7a88
    INC EAX                             ; 004e7a8a
    MOV byte ptr [ECX + 0x1cd8c48],DL   ; 004e7a8b
    MOV EDX,EAX                         ; 004e7a91
    ADD ECX,0x2                         ; 004e7a93
    MOV DL,byte ptr [EDX]               ; 004e7a96
    MOV byte ptr [ECX + 0x1cd8c47],DL   ; 004e7a98
    INC ESI                             ; 004e7a9e
    MOV EDX,dword ptr [EDI + 0x1cd944c] ; 004e7a9f | DAT_01cd944c
    INC EAX                             ; 004e7aa5
    CMP ESI,EDX                         ; 004e7aa6
    JNC 0x004e79d6                      ; 004e7aa8
        ;   XREF to: 004e79d6 (CONDITIONAL_JUMP)  ; LAB_004e79d6
    JMP 0x004e7a86                      ; 004e7aae
        ;   XREF to: 004e7a86 (UNCONDITIONAL_JUMP)  ; LAB_004e7a86
    PUSH 0x1cd8b28                      ; 004e7ab0 | DAT_01cd8b28
        ;   Label: LAB_004e7ab0
    MOV ECX,0x58b7e9                    ; 004e7ab5 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xd7e                       ; 004e7aba
    PUSH 0x58b7fa                       ; 004e7abf | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e7ac4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e7aca | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e7ad0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e7ad5
    JMP 0x004e7a68                      ; 004e7ad8
        ;   XREF to: 004e7a68 (UNCONDITIONAL_JUMP)  ; LAB_004e7a68
    PUSH 0x1cd8b28                      ; 004e7ada | DAT_01cd8b28
        ;   Label: LAB_004e7ada
    PUSH EBP                            ; 004e7adf
    MOV ESI,0x58b81f                    ; 004e7ae0 | = "..\\sound\\mp3.cpp"
    MOV EDI,0xd8d                       ; 004e7ae5
    PUSH 0x58b830                       ; 004e7aea | = "huffman decodertable error at table %..."
    MOV dword ptr [0x01cc4800],ESI      ; 004e7aef | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e7af5 | DAT_01cc4804
    JMP 0x004e79ce                      ; 004e7afb
        ;   XREF to: 004e79ce (UNCONDITIONAL_JUMP)  ; LAB_004e79ce

