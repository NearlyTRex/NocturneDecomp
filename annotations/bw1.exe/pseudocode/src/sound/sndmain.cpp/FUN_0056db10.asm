; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_0056db10(int *param_1,int *param_2,int param_3)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0056e830 at 0056e9c8
;   sound_sndmain.cpp_FUN_00574410 at 0057453a
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00573378
;
; Referenced Globals:
;   TerminatedCString s_RIFF_ID_not_found_at_off_005f2a88
;   TerminatedCString s_WAV_file_is_invalid_s_005f2ab0
;   TerminatedCString s_WAVE_ID_not_found_at_off_005f2ac9
;   TerminatedCString s_data_chunk_preceeds_fmt_005f2af1
;   TerminatedCString s_Required_fmt_chunk_not_f_005f2b13
;   TerminatedCString s_File_contains_invalid_fm_005f2b32
;   TerminatedCString s_Invalid_fmt_chunk_tag_04_005f2b54
;   TerminatedCString s_Invalid_number_of_channe_005f2b72
;   TerminatedCString s_Invalid_bytes_sec_value_005f2ba3
;   TerminatedCString s_sound_sndmain_cpp_005f2bc7
;   TerminatedCString s_Hell_froze_005f2bdc
;   TerminatedCString s_No_data_chunk_found_005f2be7
;   TerminatedCString s_sound_sndmain_cpp_005f2bfd
;   TerminatedCString s_Hell_froze_005f2c12
;   undefined4 DAT_01d1d400
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056db10
        ;   Label: sound_sndmain.cpp_FUN_0056db10
    PUSH ESI                            ; 0056db11
    PUSH EDI                            ; 0056db12
    PUSH EBP                            ; 0056db13
    SUB ESP,0x78                        ; 0056db14
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0056db17
    MOV EDI,dword ptr [ESP + 0x90]      ; 0056db1e
    PUSH 0x0                            ; 0056db25
    MOV EDX,dword ptr [EDI]             ; 0056db27
    PUSH EDX                            ; 0056db29
    MOV EAX,dword ptr [ESI]             ; 0056db2a
    PUSH ESI                            ; 0056db2c
    CALL dword ptr [EAX + 0x14]         ; 0056db2d
    ADD ESP,0xc                         ; 0056db30
    TEST EAX,EAX                        ; 0056db33
    JNZ 0x0056db41                      ; 0056db35
        ;   XREF to: 0056db41 (CONDITIONAL_JUMP)  ; LAB_0056db41
    XOR EAX,EAX                         ; 0056db37
        ;   Label: LAB_0056db37
    ADD ESP,0x78                        ; 0056db39
    POP EBP                             ; 0056db3c
    POP EDI                             ; 0056db3d
    POP ESI                             ; 0056db3e
    POP EBX                             ; 0056db3f
    RET                                 ; 0056db40
    PUSH 0x8                            ; 0056db41
        ;   Label: LAB_0056db41
    LEA EDX,[ESP + 0x74]                ; 0056db43
    PUSH EDX                            ; 0056db47
    MOV EAX,dword ptr [ESI]             ; 0056db48
    PUSH ESI                            ; 0056db4a
    CALL dword ptr [EAX + 0x10]         ; 0056db4b
    ADD ESP,0xc                         ; 0056db4e
    CMP EAX,0x8                         ; 0056db51
    JNZ 0x0056db37                      ; 0056db54
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    CMP byte ptr [ESP + 0x70],0x52      ; 0056db56
    JZ 0x0056db7a                       ; 0056db5b
        ;   XREF to: 0056db7a (CONDITIONAL_JUMP)  ; LAB_0056db7a
    MOV EAX,0x5f2a88                    ; 0056db5d | = "\"RIFF\" ID not found at offset 00000..."
        ;   Label: LAB_0056db5d
    PUSH EAX                            ; 0056db62 | = "\"RIFF\" ID not found at offset 00000..." | s_WAVE_ID_not_found_at_off_005f2ac9 | s_data_chunk_preceeds_fmt_005f2af1
        ;   Label: LAB_0056db62
    PUSH 0x5f2ab0                       ; 0056db63 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056db68
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x8                         ; 0056db6d
    XOR EAX,EAX                         ; 0056db70
    ADD ESP,0x78                        ; 0056db72
    POP EBP                             ; 0056db75
    POP EDI                             ; 0056db76
    POP ESI                             ; 0056db77
    POP EBX                             ; 0056db78
    RET                                 ; 0056db79
    CMP byte ptr [ESP + 0x71],0x49      ; 0056db7a
        ;   Label: LAB_0056db7a
    JNZ 0x0056db5d                      ; 0056db7f
        ;   XREF to: 0056db5d (CONDITIONAL_JUMP)  ; LAB_0056db5d
    MOV DH,byte ptr [ESP + 0x72]        ; 0056db81
    CMP DH,0x46                         ; 0056db85
    JNZ 0x0056db5d                      ; 0056db88
        ;   XREF to: 0056db5d (CONDITIONAL_JUMP)  ; LAB_0056db5d
    CMP DH,byte ptr [ESP + 0x73]        ; 0056db8a
    JNZ 0x0056db5d                      ; 0056db8e
        ;   XREF to: 0056db5d (CONDITIONAL_JUMP)  ; LAB_0056db5d
    PUSH 0x4                            ; 0056db90
    LEA EDX,[ESP + 0x4]                 ; 0056db92
    PUSH EDX                            ; 0056db96
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0056db97
    MOV EAX,dword ptr [ESI]             ; 0056db9b
    PUSH ESI                            ; 0056db9d
    ADD EBP,0x8                         ; 0056db9e
    CALL dword ptr [EAX + 0x10]         ; 0056dba1
    ADD ESP,0xc                         ; 0056dba4
    CMP EAX,0x4                         ; 0056dba7
    JNZ 0x0056db37                      ; 0056dbaa
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    CMP byte ptr [ESP],0x57             ; 0056dbac
    JZ 0x0056dbb9                       ; 0056dbb0
        ;   XREF to: 0056dbb9 (CONDITIONAL_JUMP)  ; LAB_0056dbb9
    MOV EAX,0x5f2ac9                    ; 0056dbb2 | = "\"WAVE\" ID not found at offset 00000..."
        ;   Label: LAB_0056dbb2
    JMP 0x0056db62                      ; 0056dbb7
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    CMP byte ptr [ESP + 0x1],0x41       ; 0056dbb9
        ;   Label: LAB_0056dbb9
    JNZ 0x0056dbb2                      ; 0056dbbe
        ;   XREF to: 0056dbb2 (CONDITIONAL_JUMP)  ; LAB_0056dbb2
    CMP byte ptr [ESP + 0x2],0x56       ; 0056dbc0
    JNZ 0x0056dbb2                      ; 0056dbc5
        ;   XREF to: 0056dbb2 (CONDITIONAL_JUMP)  ; LAB_0056dbb2
    CMP byte ptr [ESP + 0x3],0x45       ; 0056dbc7
    JNZ 0x0056dbb2                      ; 0056dbcc
        ;   XREF to: 0056dbb2 (CONDITIONAL_JUMP)  ; LAB_0056dbb2
    MOV EBX,0xc                         ; 0056dbce
    MOV EAX,dword ptr [EDI]             ; 0056dbd3
        ;   Label: LAB_0056dbd3
    PUSH 0x0                            ; 0056dbd5
    ADD EAX,EBX                         ; 0056dbd7
    PUSH EAX                            ; 0056dbd9
    MOV EDX,dword ptr [ESI]             ; 0056dbda
    PUSH ESI                            ; 0056dbdc
    CALL dword ptr [EDX + 0x14]         ; 0056dbdd
    ADD ESP,0xc                         ; 0056dbe0
    TEST EAX,EAX                        ; 0056dbe3
    JZ 0x0056db37                       ; 0056dbe5
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    PUSH 0x8                            ; 0056dbeb
    LEA EDX,[ESP + 0x74]                ; 0056dbed
    PUSH EDX                            ; 0056dbf1
    MOV EAX,dword ptr [ESI]             ; 0056dbf2
    PUSH ESI                            ; 0056dbf4
    CALL dword ptr [EAX + 0x10]         ; 0056dbf5
    ADD ESP,0xc                         ; 0056dbf8
    CMP EAX,0x8                         ; 0056dbfb
    JNZ 0x0056db37                      ; 0056dbfe
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056dc04
    ADD EAX,0x8                         ; 0056dc08
    ADD EBX,EAX                         ; 0056dc0b
    CMP byte ptr [ESP + 0x70],0x64      ; 0056dc0d
    JNZ 0x0056dc34                      ; 0056dc12
        ;   XREF to: 0056dc34 (CONDITIONAL_JUMP)  ; LAB_0056dc34
    MOV DL,byte ptr [ESP + 0x71]        ; 0056dc14
    CMP DL,0x61                         ; 0056dc18
    JNZ 0x0056dc34                      ; 0056dc1b
        ;   XREF to: 0056dc34 (CONDITIONAL_JUMP)  ; LAB_0056dc34
    CMP byte ptr [ESP + 0x72],0x74      ; 0056dc1d
    JNZ 0x0056dc34                      ; 0056dc22
        ;   XREF to: 0056dc34 (CONDITIONAL_JUMP)  ; LAB_0056dc34
    CMP DL,byte ptr [ESP + 0x73]        ; 0056dc24
    JNZ 0x0056dc34                      ; 0056dc28
        ;   XREF to: 0056dc34 (CONDITIONAL_JUMP)  ; LAB_0056dc34
    MOV EAX,0x5f2af1                    ; 0056dc2a | = "\"data\" chunk preceeds \"fmt\" chunk"
    JMP 0x0056db62                      ; 0056dc2f
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    CMP byte ptr [ESP + 0x70],0x66      ; 0056dc34
        ;   Label: LAB_0056dc34
    JNZ 0x0056dc5a                      ; 0056dc39
        ;   XREF to: 0056dc5a (CONDITIONAL_JUMP)  ; LAB_0056dc5a
    CMP byte ptr [ESP + 0x71],0x6d      ; 0056dc3b
    JNZ 0x0056dc5a                      ; 0056dc40
        ;   XREF to: 0056dc5a (CONDITIONAL_JUMP)  ; LAB_0056dc5a
    CMP byte ptr [ESP + 0x72],0x74      ; 0056dc42
    JNZ 0x0056dc5a                      ; 0056dc47
        ;   XREF to: 0056dc5a (CONDITIONAL_JUMP)  ; LAB_0056dc5a
    CMP dword ptr [ESP + 0x74],0xa      ; 0056dc49
    JNC 0x0056dc6c                      ; 0056dc4e
        ;   XREF to: 0056dc6c (CONDITIONAL_JUMP)  ; LAB_0056dc6c
    MOV EAX,0x5f2b32                    ; 0056dc50 | = "File contains invalid \"fmt\" chunk"
    JMP 0x0056db62                      ; 0056dc55
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    CMP EBX,EBP                         ; 0056dc5a
        ;   Label: LAB_0056dc5a
    JLE 0x0056dbd3                      ; 0056dc5c
        ;   XREF to: 0056dbd3 (CONDITIONAL_JUMP)  ; LAB_0056dbd3
    MOV EAX,0x5f2b13                    ; 0056dc62 | = "Required \"fmt\" chunk not found"
    JMP 0x0056db62                      ; 0056dc67
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    PUSH 0xa                            ; 0056dc6c
        ;   Label: LAB_0056dc6c
    LEA EAX,[ESP + 0x68]                ; 0056dc6e
    PUSH EAX                            ; 0056dc72
    MOV EDX,dword ptr [ESI]             ; 0056dc73
    PUSH ESI                            ; 0056dc75
    CALL dword ptr [EDX + 0x10]         ; 0056dc76
    ADD ESP,0xc                         ; 0056dc79
    CMP EAX,0xa                         ; 0056dc7c
    JNZ 0x0056db37                      ; 0056dc7f
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    MOV EDX,dword ptr [ESP + 0x64]      ; 0056dc85
    CMP DX,0x1                          ; 0056dc89
    JNZ 0x0056ddfa                      ; 0056dc8d
        ;   XREF to: 0056ddfa (CONDITIONAL_JUMP)  ; LAB_0056ddfa
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056dc93
    MOV dword ptr [EAX + 0x100],0x0     ; 0056dc9a
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056dca4
        ;   Label: LAB_0056dca4
    MOV dword ptr [EAX + 0x104],0x0     ; 0056dcab
    XOR EAX,EAX                         ; 0056dcb5
    MOV AX,word ptr [ESP + 0x66]        ; 0056dcb7
    CMP EAX,0x1                         ; 0056dcbc
    JL 0x0056de37                       ; 0056dcbf
        ;   XREF to: 0056de37 (CONDITIONAL_JUMP)  ; LAB_0056de37
    CMP EAX,0x2                         ; 0056dcc5
    JG 0x0056de37                       ; 0056dcc8
        ;   XREF to: 0056de37 (CONDITIONAL_JUMP)  ; LAB_0056de37
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056dcce
    MOV EAX,dword ptr [EAX + 0x100]     ; 0056dcd5
    TEST EAX,EAX                        ; 0056dcdb
    JBE 0x0056de5a                      ; 0056dcdd
        ;   XREF to: 0056de5a (CONDITIONAL_JUMP)  ; LAB_0056de5a
    CMP EAX,0x2                         ; 0056dce3
    JNZ 0x0056dec1                      ; 0056dce6
        ;   XREF to: 0056dec1 (CONDITIONAL_JUMP)  ; LAB_0056dec1
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056dcec
    MOV dword ptr [EAX + 0x104],0x4     ; 0056dcf3
    MOV EDX,dword ptr [EDI]             ; 0056dcfd
        ;   Label: LAB_0056dcfd
    PUSH 0x0                            ; 0056dcff
    ADD EDX,EBX                         ; 0056dd01
    PUSH EDX                            ; 0056dd03
    MOV EAX,dword ptr [ESI]             ; 0056dd04
    PUSH ESI                            ; 0056dd06
    CALL dword ptr [EAX + 0x14]         ; 0056dd07
    ADD ESP,0xc                         ; 0056dd0a
    TEST EAX,EAX                        ; 0056dd0d
    JZ 0x0056db37                       ; 0056dd0f
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    PUSH 0x8                            ; 0056dd15
    LEA EDX,[ESP + 0x74]                ; 0056dd17
    PUSH EDX                            ; 0056dd1b
    MOV EAX,dword ptr [ESI]             ; 0056dd1c
    PUSH ESI                            ; 0056dd1e
    CALL dword ptr [EAX + 0x10]         ; 0056dd1f
    ADD ESP,0xc                         ; 0056dd22
    CMP EAX,0x8                         ; 0056dd25
    JNZ 0x0056db37                      ; 0056dd28
        ;   XREF to: 0056db37 (CONDITIONAL_JUMP)  ; LAB_0056db37
    MOV DL,byte ptr [ESP + 0x70]        ; 0056dd2e
    ADD EBX,EAX                         ; 0056dd32
    CMP DL,0x64                         ; 0056dd34
    JNZ 0x0056dee8                      ; 0056dd37
        ;   XREF to: 0056dee8 (CONDITIONAL_JUMP)  ; LAB_0056dee8
    MOV DH,byte ptr [ESP + 0x71]        ; 0056dd3d
    CMP DH,0x61                         ; 0056dd41
    JNZ 0x0056dee8                      ; 0056dd44
        ;   XREF to: 0056dee8 (CONDITIONAL_JUMP)  ; LAB_0056dee8
    CMP byte ptr [ESP + 0x72],0x74      ; 0056dd4a
    JNZ 0x0056dee8                      ; 0056dd4f
        ;   XREF to: 0056dee8 (CONDITIONAL_JUMP)  ; LAB_0056dee8
    CMP DH,byte ptr [ESP + 0x73]        ; 0056dd55
    JNZ 0x0056dee8                      ; 0056dd59
        ;   XREF to: 0056dee8 (CONDITIONAL_JUMP)  ; LAB_0056dee8
    MOV ESI,dword ptr [EDI]             ; 0056dd5f
    ADD ESI,EBX                         ; 0056dd61
    XOR EAX,EAX                         ; 0056dd63
    MOV dword ptr [EDI],ESI             ; 0056dd65
    MOV EDX,dword ptr [ESP + 0x94]      ; 0056dd67
    MOV AX,word ptr [ESP + 0x66]        ; 0056dd6e
    MOV dword ptr [EDX + 0x108],EAX     ; 0056dd73
    MOV EAX,dword ptr [EDX + 0x100]     ; 0056dd79
    TEST EAX,EAX                        ; 0056dd7f
    JBE 0x0056ddab                      ; 0056dd81
        ;   XREF to: 0056ddab (CONDITIONAL_JUMP)  ; LAB_0056ddab
    CMP EAX,0x2                         ; 0056dd83
    JZ 0x0056ddab                       ; 0056dd86
        ;   XREF to: 0056ddab (CONDITIONAL_JUMP)  ; LAB_0056ddab
    MOV EDI,0x5f2bfd                    ; 0056dd88 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x236                       ; 0056dd8d
    PUSH 0x5f2c12                       ; 0056dd92 | = "Hell froze"
    MOV dword ptr [0x01d1d400],EDI      ; 0056dd97 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0056dd9d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056dda3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056dda8
    MOV EDX,dword ptr [ESP + 0x94]      ; 0056ddab
        ;   Label: LAB_0056ddab
    MOV EBX,dword ptr [ESP + 0x94]      ; 0056ddb2
    MOV ECX,dword ptr [EDX + 0x108]     ; 0056ddb9
    MOV EBX,dword ptr [EBX + 0x104]     ; 0056ddbf
    IMUL EBX,ECX                        ; 0056ddc5
    MOV EAX,dword ptr [ESP + 0x74]      ; 0056ddc8
    SHL EAX,0x3                         ; 0056ddcc
    XOR EDX,EDX                         ; 0056ddcf
    DIV EBX                             ; 0056ddd1
    MOV EDX,dword ptr [ESP + 0x94]      ; 0056ddd3
    MOV dword ptr [EDX + 0x110],EAX     ; 0056ddda
    XOR EAX,EAX                         ; 0056dde0
    MOV AX,word ptr [ESP + 0x68]        ; 0056dde2
    MOV dword ptr [EDX + 0x10c],EAX     ; 0056dde7
    MOV EAX,0x1                         ; 0056dded
    ADD ESP,0x78                        ; 0056ddf2
    POP EBP                             ; 0056ddf5
    POP EDI                             ; 0056ddf6
    POP ESI                             ; 0056ddf7
    POP EBX                             ; 0056ddf8
    RET                                 ; 0056ddf9
    CMP DX,0x20                         ; 0056ddfa
        ;   Label: LAB_0056ddfa
    JNZ 0x0056de16                      ; 0056ddfe
        ;   XREF to: 0056de16 (CONDITIONAL_JUMP)  ; LAB_0056de16
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056de00
    MOV dword ptr [EAX + 0x100],0x2     ; 0056de07
    JMP 0x0056dca4                      ; 0056de11
        ;   XREF to: 0056dca4 (UNCONDITIONAL_JUMP)  ; LAB_0056dca4
    XOR EAX,EAX                         ; 0056de16
        ;   Label: LAB_0056de16
    MOV AX,DX                           ; 0056de18
    PUSH EAX                            ; 0056de1b
    PUSH 0x5f2b54                       ; 0056de1c | = "Invalid \"fmt\" chunk tag: %04X"
    LEA EAX,[ESP + 0x8]                 ; 0056de21
    PUSH EAX                            ; 0056de25
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0056de26
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 0056de2b
    ADD ESP,0xc                         ; 0056de2f
    JMP 0x0056db62                      ; 0056de32
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    XOR EAX,EAX                         ; 0056de37
        ;   Label: LAB_0056de37
    MOV AX,word ptr [ESP + 0x66]        ; 0056de39
    PUSH EAX                            ; 0056de3e
    PUSH 0x5f2b72                       ; 0056de3f | = "Invalid number of channels: %u  (must..."
    LEA EAX,[ESP + 0x8]                 ; 0056de44
    PUSH EAX                            ; 0056de48
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0056de49
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 0056de4e
    ADD ESP,0xc                         ; 0056de52
    JMP 0x0056db62                      ; 0056de55
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    MOV EAX,dword ptr [ESP + 0x66]      ; 0056de5a
        ;   Label: LAB_0056de5a
    IMUL EAX,dword ptr [ESP + 0x68]     ; 0056de5e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0056de63
    CMP AX,CX                           ; 0056de67
    JZ 0x0056de89                       ; 0056de6a
        ;   XREF to: 0056de89 (CONDITIONAL_JUMP)  ; LAB_0056de89
    ADD EAX,EAX                         ; 0056de6c
    CMP AX,CX                           ; 0056de6e
    JNZ 0x0056de9f                      ; 0056de71
        ;   XREF to: 0056de9f (CONDITIONAL_JUMP)  ; LAB_0056de9f
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056de73
    MOV dword ptr [EAX + 0x104],0x10    ; 0056de7a
    JMP 0x0056dcfd                      ; 0056de84
        ;   XREF to: 0056dcfd (UNCONDITIONAL_JUMP)  ; LAB_0056dcfd
    MOV EAX,dword ptr [ESP + 0x94]      ; 0056de89
        ;   Label: LAB_0056de89
    MOV dword ptr [EAX + 0x104],0x8     ; 0056de90
    JMP 0x0056dcfd                      ; 0056de9a
        ;   XREF to: 0056dcfd (UNCONDITIONAL_JUMP)  ; LAB_0056dcfd
    XOR EAX,EAX                         ; 0056de9f
        ;   Label: LAB_0056de9f
    MOV AX,CX                           ; 0056dea1
    PUSH EAX                            ; 0056dea4
    PUSH EAX                            ; 0056dea5
    PUSH 0x5f2ba3                       ; 0056dea6 | = "Invalid bytes/sec value: %u (%04Xh)"
    LEA EAX,[ESP + 0xc]                 ; 0056deab
    PUSH EAX                            ; 0056deaf
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0056deb0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    LEA EAX,[ESP + 0x10]                ; 0056deb5
    ADD ESP,0x10                        ; 0056deb9
    JMP 0x0056db62                      ; 0056debc
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62
    MOV EAX,0x5f2bc7                    ; 0056dec1 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0056dec1
    MOV EDX,0x211                       ; 0056dec6
    PUSH 0x5f2bdc                       ; 0056decb | = "Hell froze"
    MOV [0x01d1d400],EAX                ; 0056ded0 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0056ded5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0056dedb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0056dee0
    JMP 0x0056dcfd                      ; 0056dee3
        ;   XREF to: 0056dcfd (UNCONDITIONAL_JUMP)  ; LAB_0056dcfd
    ADD EBX,dword ptr [ESP + 0x74]      ; 0056dee8
        ;   Label: LAB_0056dee8
    CMP EBX,EBP                         ; 0056deec
    JLE 0x0056dcfd                      ; 0056deee
        ;   XREF to: 0056dcfd (CONDITIONAL_JUMP)  ; LAB_0056dcfd
    MOV EAX,0x5f2be7                    ; 0056def4 | = "No \"data\" chunk found"
    JMP 0x0056db62                      ; 0056def9
        ;   XREF to: 0056db62 (UNCONDITIONAL_JUMP)  ; LAB_0056db62

