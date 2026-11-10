; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00551000(int *param_1,int *param_2,int param_3)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_00551d20 at 00551eb8
;   sound_sndmain.cpp_FUN_00552350 at 0055260a
;   sound_sndmain.cpp_FUN_00557570 at 0055769a
;
; Referenced Globals:
;   TerminatedCString s_RIFF_ID_not_found_at_off_005d2372
;   TerminatedCString s_WAV_file_is_invalid_s_005d239a
;   TerminatedCString s_WAVE_ID_not_found_at_off_005d23b3
;   TerminatedCString s_data_chunk_preceeds_fmt_005d23db
;   TerminatedCString s_Required_fmt_chunk_not_f_005d23fd
;   TerminatedCString s_File_contains_invalid_fm_005d241c
;   TerminatedCString s_Invalid_fmt_chunk_tag_04_005d243e
;   TerminatedCString s_Invalid_number_of_channe_005d245c
;   TerminatedCString s_Invalid_bytes_sec_value_005d248d
;   TerminatedCString s_sound_sndmain_cpp_005d24b1
;   TerminatedCString s_Hell_froze_005d24c6
;   TerminatedCString s_No_data_chunk_found_005d24d1
;   TerminatedCString s_sound_sndmain_cpp_005d24e7
;   TerminatedCString s_Hell_froze_005d24fc
;   undefined4 DAT_01d71de0
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551000
        ;   Label: sound_sndmain.cpp_FUN_00551000
    PUSH ESI                            ; 00551001
    PUSH EDI                            ; 00551002
    PUSH EBP                            ; 00551003
    SUB ESP,0x78                        ; 00551004
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00551007
    MOV EDI,dword ptr [ESP + 0x90]      ; 0055100e
    PUSH 0x0                            ; 00551015
    MOV EDX,dword ptr [EDI]             ; 00551017
    PUSH EDX                            ; 00551019
    MOV EAX,dword ptr [ESI]             ; 0055101a
    PUSH ESI                            ; 0055101c
    CALL dword ptr [EAX + 0x14]         ; 0055101d
    ADD ESP,0xc                         ; 00551020
    TEST EAX,EAX                        ; 00551023
    JNZ 0x00551031                      ; 00551025
        ;   XREF to: 00551031 (CONDITIONAL_JUMP)  ; LAB_00551031
    XOR EAX,EAX                         ; 00551027
        ;   Label: LAB_00551027
    ADD ESP,0x78                        ; 00551029
    POP EBP                             ; 0055102c
    POP EDI                             ; 0055102d
    POP ESI                             ; 0055102e
    POP EBX                             ; 0055102f
    RET                                 ; 00551030
    PUSH 0x8                            ; 00551031
        ;   Label: LAB_00551031
    LEA EDX,[ESP + 0x74]                ; 00551033
    PUSH EDX                            ; 00551037
    MOV EAX,dword ptr [ESI]             ; 00551038
    PUSH ESI                            ; 0055103a
    CALL dword ptr [EAX + 0x10]         ; 0055103b
    ADD ESP,0xc                         ; 0055103e
    CMP EAX,0x8                         ; 00551041
    JNZ 0x00551027                      ; 00551044
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    CMP byte ptr [ESP + 0x70],0x52      ; 00551046
    JZ 0x0055106a                       ; 0055104b
        ;   XREF to: 0055106a (CONDITIONAL_JUMP)  ; LAB_0055106a
    MOV EAX,0x5d2372                    ; 0055104d | = "\"RIFF\" ID not found at offset 00000..."
        ;   Label: LAB_0055104d
    PUSH EAX                            ; 00551052 | = "\"RIFF\" ID not found at offset 00000..." | s_WAVE_ID_not_found_at_off_005d23b3 | s_data_chunk_preceeds_fmt_005d23db
        ;   Label: LAB_00551052
    PUSH 0x5d239a                       ; 00551053 | = "WAV file is invalid: %s\n"
    CALL sound_sndmain.cpp_FUN_0055a560 ; 00551058
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x8                         ; 0055105d
    XOR EAX,EAX                         ; 00551060
    ADD ESP,0x78                        ; 00551062
    POP EBP                             ; 00551065
    POP EDI                             ; 00551066
    POP ESI                             ; 00551067
    POP EBX                             ; 00551068
    RET                                 ; 00551069
    CMP byte ptr [ESP + 0x71],0x49      ; 0055106a
        ;   Label: LAB_0055106a
    JNZ 0x0055104d                      ; 0055106f
        ;   XREF to: 0055104d (CONDITIONAL_JUMP)  ; LAB_0055104d
    MOV DH,byte ptr [ESP + 0x72]        ; 00551071
    CMP DH,0x46                         ; 00551075
    JNZ 0x0055104d                      ; 00551078
        ;   XREF to: 0055104d (CONDITIONAL_JUMP)  ; LAB_0055104d
    CMP DH,byte ptr [ESP + 0x73]        ; 0055107a
    JNZ 0x0055104d                      ; 0055107e
        ;   XREF to: 0055104d (CONDITIONAL_JUMP)  ; LAB_0055104d
    PUSH 0x4                            ; 00551080
    LEA EDX,[ESP + 0x4]                 ; 00551082
    PUSH EDX                            ; 00551086
    MOV EBP,dword ptr [ESP + 0x7c]      ; 00551087
    MOV EAX,dword ptr [ESI]             ; 0055108b
    PUSH ESI                            ; 0055108d
    ADD EBP,0x8                         ; 0055108e
    CALL dword ptr [EAX + 0x10]         ; 00551091
    ADD ESP,0xc                         ; 00551094
    CMP EAX,0x4                         ; 00551097
    JNZ 0x00551027                      ; 0055109a
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    CMP byte ptr [ESP],0x57             ; 0055109c
    JZ 0x005510a9                       ; 005510a0
        ;   XREF to: 005510a9 (CONDITIONAL_JUMP)  ; LAB_005510a9
    MOV EAX,0x5d23b3                    ; 005510a2 | = "\"WAVE\" ID not found at offset 00000..."
        ;   Label: LAB_005510a2
    JMP 0x00551052                      ; 005510a7
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    CMP byte ptr [ESP + 0x1],0x41       ; 005510a9
        ;   Label: LAB_005510a9
    JNZ 0x005510a2                      ; 005510ae
        ;   XREF to: 005510a2 (CONDITIONAL_JUMP)  ; LAB_005510a2
    CMP byte ptr [ESP + 0x2],0x56       ; 005510b0
    JNZ 0x005510a2                      ; 005510b5
        ;   XREF to: 005510a2 (CONDITIONAL_JUMP)  ; LAB_005510a2
    CMP byte ptr [ESP + 0x3],0x45       ; 005510b7
    JNZ 0x005510a2                      ; 005510bc
        ;   XREF to: 005510a2 (CONDITIONAL_JUMP)  ; LAB_005510a2
    MOV EBX,0xc                         ; 005510be
    MOV EAX,dword ptr [EDI]             ; 005510c3
        ;   Label: LAB_005510c3
    PUSH 0x0                            ; 005510c5
    ADD EAX,EBX                         ; 005510c7
    PUSH EAX                            ; 005510c9
    MOV EDX,dword ptr [ESI]             ; 005510ca
    PUSH ESI                            ; 005510cc
    CALL dword ptr [EDX + 0x14]         ; 005510cd
    ADD ESP,0xc                         ; 005510d0
    TEST EAX,EAX                        ; 005510d3
    JZ 0x00551027                       ; 005510d5
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    PUSH 0x8                            ; 005510db
    LEA EDX,[ESP + 0x74]                ; 005510dd
    PUSH EDX                            ; 005510e1
    MOV EAX,dword ptr [ESI]             ; 005510e2
    PUSH ESI                            ; 005510e4
    CALL dword ptr [EAX + 0x10]         ; 005510e5
    ADD ESP,0xc                         ; 005510e8
    CMP EAX,0x8                         ; 005510eb
    JNZ 0x00551027                      ; 005510ee
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    MOV EAX,dword ptr [ESP + 0x74]      ; 005510f4
    ADD EAX,0x8                         ; 005510f8
    ADD EBX,EAX                         ; 005510fb
    CMP byte ptr [ESP + 0x70],0x64      ; 005510fd
    JNZ 0x00551124                      ; 00551102
        ;   XREF to: 00551124 (CONDITIONAL_JUMP)  ; LAB_00551124
    MOV DL,byte ptr [ESP + 0x71]        ; 00551104
    CMP DL,0x61                         ; 00551108
    JNZ 0x00551124                      ; 0055110b
        ;   XREF to: 00551124 (CONDITIONAL_JUMP)  ; LAB_00551124
    CMP byte ptr [ESP + 0x72],0x74      ; 0055110d
    JNZ 0x00551124                      ; 00551112
        ;   XREF to: 00551124 (CONDITIONAL_JUMP)  ; LAB_00551124
    CMP DL,byte ptr [ESP + 0x73]        ; 00551114
    JNZ 0x00551124                      ; 00551118
        ;   XREF to: 00551124 (CONDITIONAL_JUMP)  ; LAB_00551124
    MOV EAX,0x5d23db                    ; 0055111a | = "\"data\" chunk preceeds \"fmt\" chunk"
    JMP 0x00551052                      ; 0055111f
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    CMP byte ptr [ESP + 0x70],0x66      ; 00551124
        ;   Label: LAB_00551124
    JNZ 0x0055114a                      ; 00551129
        ;   XREF to: 0055114a (CONDITIONAL_JUMP)  ; LAB_0055114a
    CMP byte ptr [ESP + 0x71],0x6d      ; 0055112b
    JNZ 0x0055114a                      ; 00551130
        ;   XREF to: 0055114a (CONDITIONAL_JUMP)  ; LAB_0055114a
    CMP byte ptr [ESP + 0x72],0x74      ; 00551132
    JNZ 0x0055114a                      ; 00551137
        ;   XREF to: 0055114a (CONDITIONAL_JUMP)  ; LAB_0055114a
    CMP dword ptr [ESP + 0x74],0xa      ; 00551139
    JNC 0x0055115c                      ; 0055113e
        ;   XREF to: 0055115c (CONDITIONAL_JUMP)  ; LAB_0055115c
    MOV EAX,0x5d241c                    ; 00551140 | = "File contains invalid \"fmt\" chunk"
    JMP 0x00551052                      ; 00551145
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    CMP EBX,EBP                         ; 0055114a
        ;   Label: LAB_0055114a
    JLE 0x005510c3                      ; 0055114c
        ;   XREF to: 005510c3 (CONDITIONAL_JUMP)  ; LAB_005510c3
    MOV EAX,0x5d23fd                    ; 00551152 | = "Required \"fmt\" chunk not found"
    JMP 0x00551052                      ; 00551157
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    PUSH 0xa                            ; 0055115c
        ;   Label: LAB_0055115c
    LEA EAX,[ESP + 0x68]                ; 0055115e
    PUSH EAX                            ; 00551162
    MOV EDX,dword ptr [ESI]             ; 00551163
    PUSH ESI                            ; 00551165
    CALL dword ptr [EDX + 0x10]         ; 00551166
    ADD ESP,0xc                         ; 00551169
    CMP EAX,0xa                         ; 0055116c
    JNZ 0x00551027                      ; 0055116f
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    MOV EDX,dword ptr [ESP + 0x64]      ; 00551175
    CMP DX,0x1                          ; 00551179
    JNZ 0x005512ea                      ; 0055117d
        ;   XREF to: 005512ea (CONDITIONAL_JUMP)  ; LAB_005512ea
    MOV EAX,dword ptr [ESP + 0x94]      ; 00551183
    MOV dword ptr [EAX + 0x100],0x0     ; 0055118a
    MOV EAX,dword ptr [ESP + 0x94]      ; 00551194
        ;   Label: LAB_00551194
    MOV dword ptr [EAX + 0x104],0x0     ; 0055119b
    XOR EAX,EAX                         ; 005511a5
    MOV AX,word ptr [ESP + 0x66]        ; 005511a7
    CMP EAX,0x1                         ; 005511ac
    JL 0x00551327                       ; 005511af
        ;   XREF to: 00551327 (CONDITIONAL_JUMP)  ; LAB_00551327
    CMP EAX,0x2                         ; 005511b5
    JG 0x00551327                       ; 005511b8
        ;   XREF to: 00551327 (CONDITIONAL_JUMP)  ; LAB_00551327
    MOV EAX,dword ptr [ESP + 0x94]      ; 005511be
    MOV EAX,dword ptr [EAX + 0x100]     ; 005511c5
    TEST EAX,EAX                        ; 005511cb
    JBE 0x0055134a                      ; 005511cd
        ;   XREF to: 0055134a (CONDITIONAL_JUMP)  ; LAB_0055134a
    CMP EAX,0x2                         ; 005511d3
    JNZ 0x005513b1                      ; 005511d6
        ;   XREF to: 005513b1 (CONDITIONAL_JUMP)  ; LAB_005513b1
    MOV EAX,dword ptr [ESP + 0x94]      ; 005511dc
    MOV dword ptr [EAX + 0x104],0x4     ; 005511e3
    MOV EDX,dword ptr [EDI]             ; 005511ed
        ;   Label: LAB_005511ed
    PUSH 0x0                            ; 005511ef
    ADD EDX,EBX                         ; 005511f1
    PUSH EDX                            ; 005511f3
    MOV EAX,dword ptr [ESI]             ; 005511f4
    PUSH ESI                            ; 005511f6
    CALL dword ptr [EAX + 0x14]         ; 005511f7
    ADD ESP,0xc                         ; 005511fa
    TEST EAX,EAX                        ; 005511fd
    JZ 0x00551027                       ; 005511ff
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    PUSH 0x8                            ; 00551205
    LEA EDX,[ESP + 0x74]                ; 00551207
    PUSH EDX                            ; 0055120b
    MOV EAX,dword ptr [ESI]             ; 0055120c
    PUSH ESI                            ; 0055120e
    CALL dword ptr [EAX + 0x10]         ; 0055120f
    ADD ESP,0xc                         ; 00551212
    CMP EAX,0x8                         ; 00551215
    JNZ 0x00551027                      ; 00551218
        ;   XREF to: 00551027 (CONDITIONAL_JUMP)  ; LAB_00551027
    MOV DL,byte ptr [ESP + 0x70]        ; 0055121e
    ADD EBX,EAX                         ; 00551222
    CMP DL,0x64                         ; 00551224
    JNZ 0x005513d8                      ; 00551227
        ;   XREF to: 005513d8 (CONDITIONAL_JUMP)  ; LAB_005513d8
    MOV DH,byte ptr [ESP + 0x71]        ; 0055122d
    CMP DH,0x61                         ; 00551231
    JNZ 0x005513d8                      ; 00551234
        ;   XREF to: 005513d8 (CONDITIONAL_JUMP)  ; LAB_005513d8
    CMP byte ptr [ESP + 0x72],0x74      ; 0055123a
    JNZ 0x005513d8                      ; 0055123f
        ;   XREF to: 005513d8 (CONDITIONAL_JUMP)  ; LAB_005513d8
    CMP DH,byte ptr [ESP + 0x73]        ; 00551245
    JNZ 0x005513d8                      ; 00551249
        ;   XREF to: 005513d8 (CONDITIONAL_JUMP)  ; LAB_005513d8
    MOV ESI,dword ptr [EDI]             ; 0055124f
    ADD ESI,EBX                         ; 00551251
    XOR EAX,EAX                         ; 00551253
    MOV dword ptr [EDI],ESI             ; 00551255
    MOV EDX,dword ptr [ESP + 0x94]      ; 00551257
    MOV AX,word ptr [ESP + 0x66]        ; 0055125e
    MOV dword ptr [EDX + 0x108],EAX     ; 00551263
    MOV EAX,dword ptr [EDX + 0x100]     ; 00551269
    TEST EAX,EAX                        ; 0055126f
    JBE 0x0055129b                      ; 00551271
        ;   XREF to: 0055129b (CONDITIONAL_JUMP)  ; LAB_0055129b
    CMP EAX,0x2                         ; 00551273
    JZ 0x0055129b                       ; 00551276
        ;   XREF to: 0055129b (CONDITIONAL_JUMP)  ; LAB_0055129b
    MOV EDI,0x5d24e7                    ; 00551278 | = "..\\sound\\sndmain.cpp"
    MOV EBP,0x238                       ; 0055127d
    PUSH 0x5d24fc                       ; 00551282 | = "Hell froze"
    MOV dword ptr [0x01d71de0],EDI      ; 00551287 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0055128d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00551293
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00551298
    MOV EDX,dword ptr [ESP + 0x94]      ; 0055129b
        ;   Label: LAB_0055129b
    MOV EBX,dword ptr [ESP + 0x94]      ; 005512a2
    MOV ECX,dword ptr [EDX + 0x108]     ; 005512a9
    MOV EBX,dword ptr [EBX + 0x104]     ; 005512af
    IMUL EBX,ECX                        ; 005512b5
    MOV EAX,dword ptr [ESP + 0x74]      ; 005512b8
    SHL EAX,0x3                         ; 005512bc
    XOR EDX,EDX                         ; 005512bf
    DIV EBX                             ; 005512c1
    MOV EDX,dword ptr [ESP + 0x94]      ; 005512c3
    MOV dword ptr [EDX + 0x110],EAX     ; 005512ca
    XOR EAX,EAX                         ; 005512d0
    MOV AX,word ptr [ESP + 0x68]        ; 005512d2
    MOV dword ptr [EDX + 0x10c],EAX     ; 005512d7
    MOV EAX,0x1                         ; 005512dd
    ADD ESP,0x78                        ; 005512e2
    POP EBP                             ; 005512e5
    POP EDI                             ; 005512e6
    POP ESI                             ; 005512e7
    POP EBX                             ; 005512e8
    RET                                 ; 005512e9
    CMP DX,0x20                         ; 005512ea
        ;   Label: LAB_005512ea
    JNZ 0x00551306                      ; 005512ee
        ;   XREF to: 00551306 (CONDITIONAL_JUMP)  ; LAB_00551306
    MOV EAX,dword ptr [ESP + 0x94]      ; 005512f0
    MOV dword ptr [EAX + 0x100],0x2     ; 005512f7
    JMP 0x00551194                      ; 00551301
        ;   XREF to: 00551194 (UNCONDITIONAL_JUMP)  ; LAB_00551194
    XOR EAX,EAX                         ; 00551306
        ;   Label: LAB_00551306
    MOV AX,DX                           ; 00551308
    PUSH EAX                            ; 0055130b
    PUSH 0x5d243e                       ; 0055130c | = "Invalid \"fmt\" chunk tag: %04X"
    LEA EAX,[ESP + 0x8]                 ; 00551311
    PUSH EAX                            ; 00551315
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00551316
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 0055131b
    ADD ESP,0xc                         ; 0055131f
    JMP 0x00551052                      ; 00551322
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    XOR EAX,EAX                         ; 00551327
        ;   Label: LAB_00551327
    MOV AX,word ptr [ESP + 0x66]        ; 00551329
    PUSH EAX                            ; 0055132e
    PUSH 0x5d245c                       ; 0055132f | = "Invalid number of channels: %u  (must..."
    LEA EAX,[ESP + 0x8]                 ; 00551334
    PUSH EAX                            ; 00551338
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00551339
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    LEA EAX,[ESP + 0xc]                 ; 0055133e
    ADD ESP,0xc                         ; 00551342
    JMP 0x00551052                      ; 00551345
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    MOV EAX,dword ptr [ESP + 0x66]      ; 0055134a
        ;   Label: LAB_0055134a
    IMUL EAX,dword ptr [ESP + 0x68]     ; 0055134e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00551353
    CMP AX,CX                           ; 00551357
    JZ 0x00551379                       ; 0055135a
        ;   XREF to: 00551379 (CONDITIONAL_JUMP)  ; LAB_00551379
    ADD EAX,EAX                         ; 0055135c
    CMP AX,CX                           ; 0055135e
    JNZ 0x0055138f                      ; 00551361
        ;   XREF to: 0055138f (CONDITIONAL_JUMP)  ; LAB_0055138f
    MOV EAX,dword ptr [ESP + 0x94]      ; 00551363
    MOV dword ptr [EAX + 0x104],0x10    ; 0055136a
    JMP 0x005511ed                      ; 00551374
        ;   XREF to: 005511ed (UNCONDITIONAL_JUMP)  ; LAB_005511ed
    MOV EAX,dword ptr [ESP + 0x94]      ; 00551379
        ;   Label: LAB_00551379
    MOV dword ptr [EAX + 0x104],0x8     ; 00551380
    JMP 0x005511ed                      ; 0055138a
        ;   XREF to: 005511ed (UNCONDITIONAL_JUMP)  ; LAB_005511ed
    XOR EAX,EAX                         ; 0055138f
        ;   Label: LAB_0055138f
    MOV AX,CX                           ; 00551391
    PUSH EAX                            ; 00551394
    PUSH EAX                            ; 00551395
    PUSH 0x5d248d                       ; 00551396 | = "Invalid bytes/sec value: %u (%04Xh)"
    LEA EAX,[ESP + 0xc]                 ; 0055139b
    PUSH EAX                            ; 0055139f
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005513a0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    LEA EAX,[ESP + 0x10]                ; 005513a5
    ADD ESP,0x10                        ; 005513a9
    JMP 0x00551052                      ; 005513ac
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052
    MOV EAX,0x5d24b1                    ; 005513b1 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005513b1
    MOV EDX,0x213                       ; 005513b6
    PUSH 0x5d24c6                       ; 005513bb | = "Hell froze"
    MOV [0x01d71de0],EAX                ; 005513c0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 005513c5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005513cb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005513d0
    JMP 0x005511ed                      ; 005513d3
        ;   XREF to: 005511ed (UNCONDITIONAL_JUMP)  ; LAB_005511ed
    ADD EBX,dword ptr [ESP + 0x74]      ; 005513d8
        ;   Label: LAB_005513d8
    CMP EBX,EBP                         ; 005513dc
    JLE 0x005511ed                      ; 005513de
        ;   XREF to: 005511ed (CONDITIONAL_JUMP)  ; LAB_005511ed
    MOV EAX,0x5d24d1                    ; 005513e4 | = "No \"data\" chunk found"
    JMP 0x00551052                      ; 005513e9
        ;   XREF to: 00551052 (UNCONDITIONAL_JUMP)  ; LAB_00551052

