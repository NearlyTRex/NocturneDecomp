; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_mp3_cpp_initializeHuffmanTables_FUN_00533d30(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_d_0063af26
;   TerminatedCString s_u_0063af29
;   TerminatedCString s_sound_mp3_cpp_0063af2c
;   TerminatedCString s_wrong_table_number_u_Fil_0063af3d
;   TerminatedCString s_sound_mp3_cpp_0063af5e
;   TerminatedCString s_wrong_table_u_reference__0063af6f
;   TerminatedCString s_sound_mp3_cpp_0063af93
;   TerminatedCString s_MP3_Huffman_tree_overflo_0063afa4
;   TerminatedCString s_sound_mp3_cpp_0063afc9
;   TerminatedCString s_huffman_decodertable_err_0063afda
;   SHuffmanTableSource[34] g_HuffmanTableSources
;   undefined4 DAT_00680174
;   undefined4 DAT_00680178
;   undefined4 DAT_0068017c
;   undefined4 DAT_00680180
;   ... and 18 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533d30
        ;   Label: sound_mp3.cpp_initializeHuffmanTables_FUN_00533d30
    PUSH ESI                            ; 00533d31
    PUSH EDI                            ; 00533d32
    PUSH EBP                            ; 00533d33
    SUB ESP,0xc                         ; 00533d34
    MOV EDX,0x2f68288                   ; 00533d37 | g_HuffmanTables
    XOR EBP,EBP                         ; 00533d3c
    XOR EBX,EBX                         ; 00533d3e
    MOV dword ptr [ESP + 0x4],EDX       ; 00533d40 | g_HuffmanTables
    MOV dword ptr [ESP + 0x8],EBP       ; 00533d44
    PUSH EBP                            ; 00533d48
        ;   Label: LAB_00533d48
    PUSH 0x63af26                       ; 00533d49 | = "%d"
    MOV ESI,dword ptr [ESP + 0xc]       ; 00533d4e
    PUSH ESI                            ; 00533d52 | g_HuffmanTables | DAT_02f68ab0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00533d53
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00533d58
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533d5b
    MOV EAX,dword ptr [EAX + 0x680170]  ; 00533d5f | g_HuffmanTableSources
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 00533d65 | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533d6b
    MOV EAX,dword ptr [EAX + 0x680174]  ; 00533d6f | DAT_00680174
    MOV dword ptr [EBX + 0x2f6828c],EAX ; 00533d75 | DAT_02f6828c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533d7b
    MOV EAX,dword ptr [EAX + 0x680178]  ; 00533d7f | DAT_00680178
    MOV dword ptr [EBX + 0x2f68290],EAX ; 00533d85 | DAT_02f68290
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533d8b
    MOV EAX,dword ptr [EAX + 0x68017c]  ; 00533d8f | DAT_0068017c
    MOV dword ptr [EBX + 0x2f68294],EAX ; 00533d95 | DAT_02f68294
    MOV EAX,0x1                         ; 00533d9b
    MOV CL,byte ptr [EBX + 0x2f68294]   ; 00533da0 | DAT_02f68294
    SHL EAX,CL                          ; 00533da6
    DEC EAX                             ; 00533da8
    MOV dword ptr [EBX + 0x2f68298],EAX ; 00533da9 | DAT_02f68298
    MOV EAX,ESP                         ; 00533daf
    PUSH EAX                            ; 00533db1
    PUSH 0x63af29                       ; 00533db2 | = "%u"
    PUSH ESI                            ; 00533db7 | g_HuffmanTables
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00533db8
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 00533dbd
    CMP EBP,dword ptr [ESP]             ; 00533dc0
    JNZ 0x00533e89                      ; 00533dc3
        ;   XREF to: 00533e89 (CONDITIONAL_JUMP)  ; LAB_00533e89
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533dc9
        ;   Label: LAB_00533dc9
    MOV EAX,dword ptr [EAX + 0x680180]  ; 00533dcd | DAT_00680180
    TEST EAX,EAX                        ; 00533dd3
    JL 0x00533ecb                       ; 00533dd5
        ;   XREF to: 00533ecb (CONDITIONAL_JUMP)  ; LAB_00533ecb
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 00533ddb | DAT_02f6829c
    IMUL EDX,EAX,0x828                  ; 00533de1
    MOV ESI,0x2f68288                   ; 00533de7 | g_HuffmanTables
    MOV EDI,0x2f68288                   ; 00533dec | g_HuffmanTables
    MOV ECX,0x802                       ; 00533df1
    ADD EDI,EBX                         ; 00533df6
    ADD ESI,EDX                         ; 00533df8
    ADD EDI,0x20                        ; 00533dfa
    ADD ESI,0x20                        ; 00533dfd
    PUSH EDI                            ; 00533e00 | DAT_02f682a8
    MOV EAX,ECX                         ; 00533e01
    SHR ECX,0x2                         ; 00533e03
    MOVSD.REP ES:EDI,ESI                ; 00533e06 | DAT_02f682a8 | DAT_02f682ac
    MOV CL,AL                           ; 00533e08
    AND CL,0x3                          ; 00533e0a
    MOVSB.REP ES:EDI,ESI                ; 00533e0d | DAT_02f682ac | DAT_02f682ad
    POP EDI                             ; 00533e0f
    MOV EAX,dword ptr [EDX + 0x2f68aac] ; 00533e10 | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 00533e16 | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [EBX + 0x2f6828c] ; 00533e1c | DAT_02f6828c
    CMP EAX,dword ptr [EDX + 0x2f6828c] ; 00533e22 | DAT_02f6828c
    JZ 0x00533eb7                       ; 00533e28
        ;   XREF to: 00533eb7 (CONDITIONAL_JUMP)  ; LAB_00533eb7
    PUSH 0x2f68188                      ; 00533e2e | g_CurrentMp3Filename
        ;   Label: LAB_00533e2e
    PUSH EBP                            ; 00533e33
    MOV EDI,0x63af5e                    ; 00533e34 | = "..\\sound\\mp3.cpp"
    MOV EAX,0xd7d                       ; 00533e39
    PUSH 0x63af6f                       ; 00533e3e | = "wrong table %u reference.  File: %s"
    MOV dword ptr [0x02f0ca48],EDI      ; 00533e43 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00533e49 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00533e4e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   Label: LAB_00533e4e
    ADD ESP,0xc                         ; 00533e53
    MOV ESI,dword ptr [ESP + 0x8]       ; 00533e56
        ;   Label: LAB_00533e56
    MOV ECX,dword ptr [ESP + 0x4]       ; 00533e5a
    ADD EBX,0x828                       ; 00533e5e
    INC EBP                             ; 00533e64
    ADD ESI,0x18                        ; 00533e65
    ADD ECX,0x828                       ; 00533e68
    MOV dword ptr [ESP + 0x8],ESI       ; 00533e6e
    MOV dword ptr [ESP + 0x4],ECX       ; 00533e72 | DAT_02f68ab0
    CMP EBP,0x22                        ; 00533e76
    JL 0x00533d48                       ; 00533e79
        ;   XREF to: 00533d48 (CONDITIONAL_JUMP)  ; LAB_00533d48
    MOV EAX,EBP                         ; 00533e7f
    ADD ESP,0xc                         ; 00533e81
    POP EBP                             ; 00533e84
    POP EDI                             ; 00533e85
    POP ESI                             ; 00533e86
    POP EBX                             ; 00533e87
    RET                                 ; 00533e88
    PUSH 0x2f68188                      ; 00533e89 | g_CurrentMp3Filename
        ;   Label: LAB_00533e89
    PUSH EBP                            ; 00533e8e
    MOV EDX,0x63af2c                    ; 00533e8f | = "..\\sound\\mp3.cpp"
    MOV ECX,0xd72                       ; 00533e94
    PUSH 0x63af3d                       ; 00533e99 | = "wrong table number %u.  File: %s"
    MOV dword ptr [0x02f0ca48],EDX      ; 00533e9e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00533ea4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00533eaa
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00533eaf
    JMP 0x00533dc9                      ; 00533eb2
        ;   XREF to: 00533dc9 (UNCONDITIONAL_JUMP)  ; LAB_00533dc9
    MOV ESI,dword ptr [EDX + 0x2f68290] ; 00533eb7 | DAT_02f68290
        ;   Label: LAB_00533eb7
    CMP ESI,dword ptr [EBX + 0x2f68290] ; 00533ebd | DAT_02f68290
    JNZ 0x00533e2e                      ; 00533ec3
        ;   XREF to: 00533e2e (CONDITIONAL_JUMP)  ; LAB_00533e2e
    JMP 0x00533e56                      ; 00533ec9
        ;   XREF to: 00533e56 (UNCONDITIONAL_JUMP)  ; LAB_00533e56
    CMP EAX,-0x1                        ; 00533ecb
        ;   Label: LAB_00533ecb
    JNZ 0x00533f5a                      ; 00533ece
        ;   XREF to: 00533f5a (CONDITIONAL_JUMP)  ; LAB_00533f5a
    MOV EDX,dword ptr [EBX + 0x2f68aac] ; 00533ed4 | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 00533eda | DAT_02f6829c
    CMP EDX,0x401                       ; 00533ee0
    JNC 0x00533f30                      ; 00533ee6
        ;   XREF to: 00533f30 (CONDITIONAL_JUMP)  ; LAB_00533f30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00533ee8
        ;   Label: LAB_00533ee8
    MOV EDI,EBX                         ; 00533eec
    MOV ECX,EBX                         ; 00533eee
    MOV EDX,dword ptr [EBX + 0x2f68aac] ; 00533ef0 | g_HuffmanTables[0].table_size
    XOR ESI,ESI                         ; 00533ef6
    MOV EAX,dword ptr [EAX + 0x680184]  ; 00533ef8 | DAT_00680184
    TEST EDX,EDX                        ; 00533efe
    JBE 0x00533e56                      ; 00533f00
        ;   XREF to: 00533e56 (CONDITIONAL_JUMP)  ; LAB_00533e56
    MOV EDX,EAX                         ; 00533f06
        ;   Label: LAB_00533f06
    MOV DL,byte ptr [EDX]               ; 00533f08
    INC EAX                             ; 00533f0a
    MOV byte ptr [ECX + 0x2f682a8],DL   ; 00533f0b | DAT_02f682a8 | DAT_02f682a8+2
    MOV EDX,EAX                         ; 00533f11
    ADD ECX,0x2                         ; 00533f13
    MOV DL,byte ptr [EDX]               ; 00533f16
    MOV byte ptr [ECX + 0x2f682a7],DL   ; 00533f18 | DAT_02f682a8+1 | DAT_02f682a8+3
    INC ESI                             ; 00533f1e
    MOV EDX,dword ptr [EDI + 0x2f68aac] ; 00533f1f | g_HuffmanTables[0].table_size
    INC EAX                             ; 00533f25
    CMP ESI,EDX                         ; 00533f26
    JNC 0x00533e56                      ; 00533f28
        ;   XREF to: 00533e56 (CONDITIONAL_JUMP)  ; LAB_00533e56
    JMP 0x00533f06                      ; 00533f2e
        ;   XREF to: 00533f06 (UNCONDITIONAL_JUMP)  ; LAB_00533f06
    PUSH 0x2f68188                      ; 00533f30 | g_CurrentMp3Filename
        ;   Label: LAB_00533f30
    MOV ECX,0x63af93                    ; 00533f35 | = "..\\sound\\mp3.cpp"
    MOV ESI,0xd85                       ; 00533f3a
    PUSH 0x63afa4                       ; 00533f3f | = "MP3 Huffman tree overflow!  File: %s"
    MOV dword ptr [0x02f0ca48],ECX      ; 00533f44 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00533f4a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00533f50
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00533f55
    JMP 0x00533ee8                      ; 00533f58
        ;   XREF to: 00533ee8 (UNCONDITIONAL_JUMP)  ; LAB_00533ee8
    PUSH 0x2f68188                      ; 00533f5a | g_CurrentMp3Filename
        ;   Label: LAB_00533f5a
    PUSH EBP                            ; 00533f5f
    MOV ESI,0x63afc9                    ; 00533f60 | = "..\\sound\\mp3.cpp"
    MOV EDI,0xd94                       ; 00533f65
    PUSH 0x63afda                       ; 00533f6a | = "huffman decodertable error at table %..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00533f6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00533f75 | g_CurrentLineNumber
    JMP 0x00533e4e                      ; 00533f7b
        ;   XREF to: 00533e4e (UNCONDITIONAL_JUMP)  ; LAB_00533e4e

