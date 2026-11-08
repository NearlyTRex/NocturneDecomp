; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054b4a0(int *param_1,int *param_2,int param_3)
;
;
; XREF[3]:
;   FUN_0054c1c0 at 0054c356
;   FUN_0054c7f0 at 0054caa8
;   FUN_005519e0 at 00551b08
;
; Referenced Globals:
;   TerminatedCString s_RIFF_ID_not_found_at_off_005e788e
;   TerminatedCString s_WAV_file_is_invalid_s_005e78b6
;   TerminatedCString s_WAVE_ID_not_found_at_off_005e78cf
;   TerminatedCString s_data_chunk_preceeds_fmt_005e78f7
;   TerminatedCString s_Required_fmt_chunk_not_f_005e7919
;   TerminatedCString s_File_contains_invalid_fm_005e7938
;   TerminatedCString s_Invalid_fmt_chunk_tag_04_005e795a
;   TerminatedCString s_Invalid_number_of_channe_005e7978
;   TerminatedCString s_Invalid_bytes_sec_value_005e79a9
;   TerminatedCString s_sound_sndmain_cpp_005e79cd
;   TerminatedCString s_Hell_froze_005e79e2
;   TerminatedCString s_No_data_chunk_found_005e79ed
;   TerminatedCString s_sound_sndmain_cpp_005e7a03
;   TerminatedCString s_Hell_froze_005e7a18
;   undefined4 DAT_01d046a0
;   ... and 1 more
;
; Called Functions:
;   FUN_004e4500
;   FUN_005549c0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b4a0
        ;   Label: FUN_0054b4a0
    PUSH ESI                            ; 0054b4a1
    PUSH EDI                            ; 0054b4a2
    PUSH EBP                            ; 0054b4a3
    SUB ESP,0x78                        ; 0054b4a4
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0054b4a7
    MOV EDI,dword ptr [ESP + 0x90]      ; 0054b4ae
    PUSH 0x0                            ; 0054b4b5
    MOV EDX,dword ptr [EDI]             ; 0054b4b7
    PUSH EDX                            ; 0054b4b9
    MOV EAX,dword ptr [ESI]             ; 0054b4ba
    PUSH ESI                            ; 0054b4bc
    CALL dword ptr [EAX + 0x14]         ; 0054b4bd
    ADD ESP,0xc                         ; 0054b4c0
    TEST EAX,EAX                        ; 0054b4c3
    JNZ 0x0054b4d1                      ; 0054b4c5
        ;   XREF to: 0054b4d1 (CONDITIONAL_JUMP)  ; LAB_0054b4d1
    XOR EAX,EAX                         ; 0054b4c7
        ;   Label: LAB_0054b4c7
    ADD ESP,0x78                        ; 0054b4c9
    POP EBP                             ; 0054b4cc
    POP EDI                             ; 0054b4cd
    POP ESI                             ; 0054b4ce
    POP EBX                             ; 0054b4cf
    RET                                 ; 0054b4d0
    PUSH 0x8                            ; 0054b4d1
        ;   Label: LAB_0054b4d1
    LEA EDX,[ESP + 0x74]                ; 0054b4d3
    PUSH EDX                            ; 0054b4d7
    MOV EAX,dword ptr [ESI]             ; 0054b4d8
    PUSH ESI                            ; 0054b4da
    CALL dword ptr [EAX + 0x10]         ; 0054b4db
    ADD ESP,0xc                         ; 0054b4de
    CMP EAX,0x8                         ; 0054b4e1
    JNZ 0x0054b4c7                      ; 0054b4e4
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    CMP byte ptr [ESP + 0x70],0x52      ; 0054b4e6
    JZ 0x0054b50a                       ; 0054b4eb
        ;   XREF to: 0054b50a (CONDITIONAL_JUMP)  ; LAB_0054b50a
    MOV EAX,0x5e788e                    ; 0054b4ed | = "\"RIFF\" ID not found at offset 00000..."
        ;   Label: LAB_0054b4ed
    PUSH EAX                            ; 0054b4f2 | = "\"RIFF\" ID not found at offset 00000..." | s_WAVE_ID_not_found_at_off_005e78cf | s_data_chunk_preceeds_fmt_005e78f7
        ;   Label: LAB_0054b4f2
    PUSH 0x5e78b6                       ; 0054b4f3 | = "WAV file is invalid: %s\n"
    CALL FUN_005549c0                   ; 0054b4f8
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x8                         ; 0054b4fd
    XOR EAX,EAX                         ; 0054b500
    ADD ESP,0x78                        ; 0054b502
    POP EBP                             ; 0054b505
    POP EDI                             ; 0054b506
    POP ESI                             ; 0054b507
    POP EBX                             ; 0054b508
    RET                                 ; 0054b509
    CMP byte ptr [ESP + 0x71],0x49      ; 0054b50a
        ;   Label: LAB_0054b50a
    JNZ 0x0054b4ed                      ; 0054b50f
        ;   XREF to: 0054b4ed (CONDITIONAL_JUMP)  ; LAB_0054b4ed
    MOV DH,byte ptr [ESP + 0x72]        ; 0054b511
    CMP DH,0x46                         ; 0054b515
    JNZ 0x0054b4ed                      ; 0054b518
        ;   XREF to: 0054b4ed (CONDITIONAL_JUMP)  ; LAB_0054b4ed
    CMP DH,byte ptr [ESP + 0x73]        ; 0054b51a
    JNZ 0x0054b4ed                      ; 0054b51e
        ;   XREF to: 0054b4ed (CONDITIONAL_JUMP)  ; LAB_0054b4ed
    PUSH 0x4                            ; 0054b520
    LEA EDX,[ESP + 0x4]                 ; 0054b522
    PUSH EDX                            ; 0054b526
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0054b527
    MOV EAX,dword ptr [ESI]             ; 0054b52b
    PUSH ESI                            ; 0054b52d
    ADD EBP,0x8                         ; 0054b52e
    CALL dword ptr [EAX + 0x10]         ; 0054b531
    ADD ESP,0xc                         ; 0054b534
    CMP EAX,0x4                         ; 0054b537
    JNZ 0x0054b4c7                      ; 0054b53a
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    CMP byte ptr [ESP],0x57             ; 0054b53c
    JZ 0x0054b549                       ; 0054b540
        ;   XREF to: 0054b549 (CONDITIONAL_JUMP)  ; LAB_0054b549
    MOV EAX,0x5e78cf                    ; 0054b542 | = "\"WAVE\" ID not found at offset 00000..."
        ;   Label: LAB_0054b542
    JMP 0x0054b4f2                      ; 0054b547
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    CMP byte ptr [ESP + 0x1],0x41       ; 0054b549
        ;   Label: LAB_0054b549
    JNZ 0x0054b542                      ; 0054b54e
        ;   XREF to: 0054b542 (CONDITIONAL_JUMP)  ; LAB_0054b542
    CMP byte ptr [ESP + 0x2],0x56       ; 0054b550
    JNZ 0x0054b542                      ; 0054b555
        ;   XREF to: 0054b542 (CONDITIONAL_JUMP)  ; LAB_0054b542
    CMP byte ptr [ESP + 0x3],0x45       ; 0054b557
    JNZ 0x0054b542                      ; 0054b55c
        ;   XREF to: 0054b542 (CONDITIONAL_JUMP)  ; LAB_0054b542
    MOV EBX,0xc                         ; 0054b55e
    MOV EAX,dword ptr [EDI]             ; 0054b563
        ;   Label: LAB_0054b563
    PUSH 0x0                            ; 0054b565
    ADD EAX,EBX                         ; 0054b567
    PUSH EAX                            ; 0054b569
    MOV EDX,dword ptr [ESI]             ; 0054b56a
    PUSH ESI                            ; 0054b56c
    CALL dword ptr [EDX + 0x14]         ; 0054b56d
    ADD ESP,0xc                         ; 0054b570
    TEST EAX,EAX                        ; 0054b573
    JZ 0x0054b4c7                       ; 0054b575
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    PUSH 0x8                            ; 0054b57b
    LEA EDX,[ESP + 0x74]                ; 0054b57d
    PUSH EDX                            ; 0054b581
    MOV EAX,dword ptr [ESI]             ; 0054b582
    PUSH ESI                            ; 0054b584
    CALL dword ptr [EAX + 0x10]         ; 0054b585
    ADD ESP,0xc                         ; 0054b588
    CMP EAX,0x8                         ; 0054b58b
    JNZ 0x0054b4c7                      ; 0054b58e
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054b594
    ADD EAX,0x8                         ; 0054b598
    ADD EBX,EAX                         ; 0054b59b
    CMP byte ptr [ESP + 0x70],0x64      ; 0054b59d
    JNZ 0x0054b5c4                      ; 0054b5a2
        ;   XREF to: 0054b5c4 (CONDITIONAL_JUMP)  ; LAB_0054b5c4
    MOV DL,byte ptr [ESP + 0x71]        ; 0054b5a4
    CMP DL,0x61                         ; 0054b5a8
    JNZ 0x0054b5c4                      ; 0054b5ab
        ;   XREF to: 0054b5c4 (CONDITIONAL_JUMP)  ; LAB_0054b5c4
    CMP byte ptr [ESP + 0x72],0x74      ; 0054b5ad
    JNZ 0x0054b5c4                      ; 0054b5b2
        ;   XREF to: 0054b5c4 (CONDITIONAL_JUMP)  ; LAB_0054b5c4
    CMP DL,byte ptr [ESP + 0x73]        ; 0054b5b4
    JNZ 0x0054b5c4                      ; 0054b5b8
        ;   XREF to: 0054b5c4 (CONDITIONAL_JUMP)  ; LAB_0054b5c4
    MOV EAX,0x5e78f7                    ; 0054b5ba | = "\"data\" chunk preceeds \"fmt\" chunk"
    JMP 0x0054b4f2                      ; 0054b5bf
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    CMP byte ptr [ESP + 0x70],0x66      ; 0054b5c4
        ;   Label: LAB_0054b5c4
    JNZ 0x0054b5ea                      ; 0054b5c9
        ;   XREF to: 0054b5ea (CONDITIONAL_JUMP)  ; LAB_0054b5ea
    CMP byte ptr [ESP + 0x71],0x6d      ; 0054b5cb
    JNZ 0x0054b5ea                      ; 0054b5d0
        ;   XREF to: 0054b5ea (CONDITIONAL_JUMP)  ; LAB_0054b5ea
    CMP byte ptr [ESP + 0x72],0x74      ; 0054b5d2
    JNZ 0x0054b5ea                      ; 0054b5d7
        ;   XREF to: 0054b5ea (CONDITIONAL_JUMP)  ; LAB_0054b5ea
    CMP dword ptr [ESP + 0x74],0xa      ; 0054b5d9
    JNC 0x0054b5fc                      ; 0054b5de
        ;   XREF to: 0054b5fc (CONDITIONAL_JUMP)  ; LAB_0054b5fc
    MOV EAX,0x5e7938                    ; 0054b5e0 | = "File contains invalid \"fmt\" chunk"
    JMP 0x0054b4f2                      ; 0054b5e5
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    CMP EBX,EBP                         ; 0054b5ea
        ;   Label: LAB_0054b5ea
    JLE 0x0054b563                      ; 0054b5ec
        ;   XREF to: 0054b563 (CONDITIONAL_JUMP)  ; LAB_0054b563
    MOV EAX,0x5e7919                    ; 0054b5f2 | = "Required \"fmt\" chunk not found"
    JMP 0x0054b4f2                      ; 0054b5f7
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    PUSH 0xa                            ; 0054b5fc
        ;   Label: LAB_0054b5fc
    LEA EAX,[ESP + 0x68]                ; 0054b5fe
    PUSH EAX                            ; 0054b602
    MOV EDX,dword ptr [ESI]             ; 0054b603
    PUSH ESI                            ; 0054b605
    CALL dword ptr [EDX + 0x10]         ; 0054b606
    ADD ESP,0xc                         ; 0054b609
    CMP EAX,0xa                         ; 0054b60c
    JNZ 0x0054b4c7                      ; 0054b60f
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    MOV EDX,dword ptr [ESP + 0x64]      ; 0054b615
    CMP DX,0x1                          ; 0054b619
    JNZ 0x0054b78a                      ; 0054b61d
        ;   XREF to: 0054b78a (CONDITIONAL_JUMP)  ; LAB_0054b78a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b623
    MOV dword ptr [EAX + 0x100],0x0     ; 0054b62a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b634
        ;   Label: LAB_0054b634
    MOV dword ptr [EAX + 0x104],0x0     ; 0054b63b
    XOR EAX,EAX                         ; 0054b645
    MOV AX,word ptr [ESP + 0x66]        ; 0054b647
    CMP EAX,0x1                         ; 0054b64c
    JL 0x0054b7c7                       ; 0054b64f
        ;   XREF to: 0054b7c7 (CONDITIONAL_JUMP)  ; LAB_0054b7c7
    CMP EAX,0x2                         ; 0054b655
    JG 0x0054b7c7                       ; 0054b658
        ;   XREF to: 0054b7c7 (CONDITIONAL_JUMP)  ; LAB_0054b7c7
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b65e
    MOV EAX,dword ptr [EAX + 0x100]     ; 0054b665
    TEST EAX,EAX                        ; 0054b66b
    JBE 0x0054b7ea                      ; 0054b66d
        ;   XREF to: 0054b7ea (CONDITIONAL_JUMP)  ; LAB_0054b7ea
    CMP EAX,0x2                         ; 0054b673
    JNZ 0x0054b851                      ; 0054b676
        ;   XREF to: 0054b851 (CONDITIONAL_JUMP)  ; LAB_0054b851
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b67c
    MOV dword ptr [EAX + 0x104],0x4     ; 0054b683
    MOV EDX,dword ptr [EDI]             ; 0054b68d
        ;   Label: LAB_0054b68d
    PUSH 0x0                            ; 0054b68f
    ADD EDX,EBX                         ; 0054b691
    PUSH EDX                            ; 0054b693
    MOV EAX,dword ptr [ESI]             ; 0054b694
    PUSH ESI                            ; 0054b696
    CALL dword ptr [EAX + 0x14]         ; 0054b697
    ADD ESP,0xc                         ; 0054b69a
    TEST EAX,EAX                        ; 0054b69d
    JZ 0x0054b4c7                       ; 0054b69f
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    PUSH 0x8                            ; 0054b6a5
    LEA EDX,[ESP + 0x74]                ; 0054b6a7
    PUSH EDX                            ; 0054b6ab
    MOV EAX,dword ptr [ESI]             ; 0054b6ac
    PUSH ESI                            ; 0054b6ae
    CALL dword ptr [EAX + 0x10]         ; 0054b6af
    ADD ESP,0xc                         ; 0054b6b2
    CMP EAX,0x8                         ; 0054b6b5
    JNZ 0x0054b4c7                      ; 0054b6b8
        ;   XREF to: 0054b4c7 (CONDITIONAL_JUMP)  ; LAB_0054b4c7
    MOV DL,byte ptr [ESP + 0x70]        ; 0054b6be
    ADD EBX,EAX                         ; 0054b6c2
    CMP DL,0x64                         ; 0054b6c4
    JNZ 0x0054b878                      ; 0054b6c7
        ;   XREF to: 0054b878 (CONDITIONAL_JUMP)  ; LAB_0054b878
    MOV DH,byte ptr [ESP + 0x71]        ; 0054b6cd
    CMP DH,0x61                         ; 0054b6d1
    JNZ 0x0054b878                      ; 0054b6d4
        ;   XREF to: 0054b878 (CONDITIONAL_JUMP)  ; LAB_0054b878
    CMP byte ptr [ESP + 0x72],0x74      ; 0054b6da
    JNZ 0x0054b878                      ; 0054b6df
        ;   XREF to: 0054b878 (CONDITIONAL_JUMP)  ; LAB_0054b878
    CMP DH,byte ptr [ESP + 0x73]        ; 0054b6e5
    JNZ 0x0054b878                      ; 0054b6e9
        ;   XREF to: 0054b878 (CONDITIONAL_JUMP)  ; LAB_0054b878
    MOV ESI,dword ptr [EDI]             ; 0054b6ef
    ADD ESI,EBX                         ; 0054b6f1
    XOR EAX,EAX                         ; 0054b6f3
    MOV dword ptr [EDI],ESI             ; 0054b6f5
    MOV EDX,dword ptr [ESP + 0x94]      ; 0054b6f7
    MOV AX,word ptr [ESP + 0x66]        ; 0054b6fe
    MOV dword ptr [EDX + 0x108],EAX     ; 0054b703
    MOV EAX,dword ptr [EDX + 0x100]     ; 0054b709
    TEST EAX,EAX                        ; 0054b70f
    JBE 0x0054b73b                      ; 0054b711
        ;   XREF to: 0054b73b (CONDITIONAL_JUMP)  ; LAB_0054b73b
    CMP EAX,0x2                         ; 0054b713
    JZ 0x0054b73b                       ; 0054b716
        ;   XREF to: 0054b73b (CONDITIONAL_JUMP)  ; LAB_0054b73b
    MOV EDI,0x5e7a03                    ; 0054b718 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x236                       ; 0054b71d
    PUSH 0x5e7a18                       ; 0054b722 | = "Hell froze"
    MOV dword ptr [0x01d046a0],EDI      ; 0054b727 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054b72d | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054b733
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054b738
    MOV EDX,dword ptr [ESP + 0x94]      ; 0054b73b
        ;   Label: LAB_0054b73b
    MOV EBX,dword ptr [ESP + 0x94]      ; 0054b742
    MOV ECX,dword ptr [EDX + 0x108]     ; 0054b749
    MOV EBX,dword ptr [EBX + 0x104]     ; 0054b74f
    IMUL EBX,ECX                        ; 0054b755
    MOV EAX,dword ptr [ESP + 0x74]      ; 0054b758
    SHL EAX,0x3                         ; 0054b75c
    XOR EDX,EDX                         ; 0054b75f
    DIV EBX                             ; 0054b761
    MOV EDX,dword ptr [ESP + 0x94]      ; 0054b763
    MOV dword ptr [EDX + 0x110],EAX     ; 0054b76a
    XOR EAX,EAX                         ; 0054b770
    MOV AX,word ptr [ESP + 0x68]        ; 0054b772
    MOV dword ptr [EDX + 0x10c],EAX     ; 0054b777
    MOV EAX,0x1                         ; 0054b77d
    ADD ESP,0x78                        ; 0054b782
    POP EBP                             ; 0054b785
    POP EDI                             ; 0054b786
    POP ESI                             ; 0054b787
    POP EBX                             ; 0054b788
    RET                                 ; 0054b789
    CMP DX,0x20                         ; 0054b78a
        ;   Label: LAB_0054b78a
    JNZ 0x0054b7a6                      ; 0054b78e
        ;   XREF to: 0054b7a6 (CONDITIONAL_JUMP)  ; LAB_0054b7a6
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b790
    MOV dword ptr [EAX + 0x100],0x2     ; 0054b797
    JMP 0x0054b634                      ; 0054b7a1
        ;   XREF to: 0054b634 (UNCONDITIONAL_JUMP)  ; LAB_0054b634
    XOR EAX,EAX                         ; 0054b7a6
        ;   Label: LAB_0054b7a6
    MOV AX,DX                           ; 0054b7a8
    PUSH EAX                            ; 0054b7ab
    PUSH 0x5e795a                       ; 0054b7ac | = "Invalid \"fmt\" chunk tag: %04X"
    LEA EAX,[ESP + 0x8]                 ; 0054b7b1
    PUSH EAX                            ; 0054b7b5
    CALL FUN_005b7790                   ; 0054b7b6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    LEA EAX,[ESP + 0xc]                 ; 0054b7bb
    ADD ESP,0xc                         ; 0054b7bf
    JMP 0x0054b4f2                      ; 0054b7c2
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    XOR EAX,EAX                         ; 0054b7c7
        ;   Label: LAB_0054b7c7
    MOV AX,word ptr [ESP + 0x66]        ; 0054b7c9
    PUSH EAX                            ; 0054b7ce
    PUSH 0x5e7978                       ; 0054b7cf | = "Invalid number of channels: %u  (must..."
    LEA EAX,[ESP + 0x8]                 ; 0054b7d4
    PUSH EAX                            ; 0054b7d8
    CALL FUN_005b7790                   ; 0054b7d9
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    LEA EAX,[ESP + 0xc]                 ; 0054b7de
    ADD ESP,0xc                         ; 0054b7e2
    JMP 0x0054b4f2                      ; 0054b7e5
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    MOV EAX,dword ptr [ESP + 0x66]      ; 0054b7ea
        ;   Label: LAB_0054b7ea
    IMUL EAX,dword ptr [ESP + 0x68]     ; 0054b7ee
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0054b7f3
    CMP AX,CX                           ; 0054b7f7
    JZ 0x0054b819                       ; 0054b7fa
        ;   XREF to: 0054b819 (CONDITIONAL_JUMP)  ; LAB_0054b819
    ADD EAX,EAX                         ; 0054b7fc
    CMP AX,CX                           ; 0054b7fe
    JNZ 0x0054b82f                      ; 0054b801
        ;   XREF to: 0054b82f (CONDITIONAL_JUMP)  ; LAB_0054b82f
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b803
    MOV dword ptr [EAX + 0x104],0x10    ; 0054b80a
    JMP 0x0054b68d                      ; 0054b814
        ;   XREF to: 0054b68d (UNCONDITIONAL_JUMP)  ; LAB_0054b68d
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054b819
        ;   Label: LAB_0054b819
    MOV dword ptr [EAX + 0x104],0x8     ; 0054b820
    JMP 0x0054b68d                      ; 0054b82a
        ;   XREF to: 0054b68d (UNCONDITIONAL_JUMP)  ; LAB_0054b68d
    XOR EAX,EAX                         ; 0054b82f
        ;   Label: LAB_0054b82f
    MOV AX,CX                           ; 0054b831
    PUSH EAX                            ; 0054b834
    PUSH EAX                            ; 0054b835
    PUSH 0x5e79a9                       ; 0054b836 | = "Invalid bytes/sec value: %u (%04Xh)"
    LEA EAX,[ESP + 0xc]                 ; 0054b83b
    PUSH EAX                            ; 0054b83f
    CALL FUN_005b7790                   ; 0054b840
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    LEA EAX,[ESP + 0x10]                ; 0054b845
    ADD ESP,0x10                        ; 0054b849
    JMP 0x0054b4f2                      ; 0054b84c
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2
    MOV EAX,0x5e79cd                    ; 0054b851 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0054b851
    MOV EDX,0x211                       ; 0054b856
    PUSH 0x5e79e2                       ; 0054b85b | = "Hell froze"
    MOV [0x01d046a0],EAX                ; 0054b860 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0054b865 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0054b86b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0054b870
    JMP 0x0054b68d                      ; 0054b873
        ;   XREF to: 0054b68d (UNCONDITIONAL_JUMP)  ; LAB_0054b68d
    ADD EBX,dword ptr [ESP + 0x74]      ; 0054b878
        ;   Label: LAB_0054b878
    CMP EBX,EBP                         ; 0054b87c
    JLE 0x0054b68d                      ; 0054b87e
        ;   XREF to: 0054b68d (CONDITIONAL_JUMP)  ; LAB_0054b68d
    MOV EAX,0x5e79ed                    ; 0054b884 | = "No \"data\" chunk found"
    JMP 0x0054b4f2                      ; 0054b889
        ;   XREF to: 0054b4f2 (UNCONDITIONAL_JUMP)  ; LAB_0054b4f2

