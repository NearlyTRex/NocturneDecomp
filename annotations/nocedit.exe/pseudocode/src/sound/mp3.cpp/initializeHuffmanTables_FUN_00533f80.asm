; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
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
;   TerminatedCString s_sound_mp3_cpp_0063b00c
;   TerminatedCString s_decoder_table_read_error_0063b01d
;   SHuffmanTableSource[34] g_HuffmanTableSources
;   undefined4 DAT_00680174
;   undefined4 DAT_00680178
;   ... and 21 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00533f80
        ;   Label: sound_mp3.cpp_initializeHuffmanTables_FUN_00533f80
    SUB ESP,0xc                         ; 00533f81
    MOV EDX,dword ptr [0x02f45980]      ; 00533f84 | int g_HuffmanTablesInitialized
    TEST EDX,EDX                        ; 00533f8a
    JNZ 0x00534117                      ; 00533f8c | LAB_00534117
        ;   XREF to: 00534117 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00533f92
    PUSH ESI                            ; 00533f93
    PUSH EBX                            ; 00533f94
    MOV ECX,0x2f68288                   ; 00533f95 | SHuffmanTable[34] g_HuffmanTables
    MOV dword ptr [ESP + 0x14],EDX      ; 00533f9a
    XOR EBX,EBX                         ; 00533f9e
    XOR EBP,EBP                         ; 00533fa0
    MOV dword ptr [ESP + 0x10],ECX      ; 00533fa2 | SHuffmanTable[34] g_HuffmanTables
    PUSH EBP                            ; 00533fa6
        ;   Label: LAB_00533fa6
    PUSH 0x63af26                       ; 00533fa7 | = "%d" | s_d_0063af26 = %d
    MOV EDI,dword ptr [ESP + 0x18]      ; 00533fac
    PUSH EDI                            ; 00533fb0 | SHuffmanTable[34] g_HuffmanTables
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00533fb1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00533fb6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533fb9
    MOV EAX,dword ptr [EAX + 0x680170]  ; 00533fbd | SHuffmanTableSource[34] g_HuffmanTableSources
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 00533fc3 | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533fc9
    MOV EAX,dword ptr [EAX + 0x680174]  ; 00533fcd | DAT_00680174
    MOV dword ptr [EBX + 0x2f6828c],EAX ; 00533fd3 | DAT_02f6828c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533fd9
    MOV EAX,dword ptr [EAX + 0x680178]  ; 00533fdd | DAT_00680178
    MOV dword ptr [EBX + 0x2f68290],EAX ; 00533fe3 | DAT_02f68290
    MOV EAX,dword ptr [ESP + 0x14]      ; 00533fe9
    MOV EAX,dword ptr [EAX + 0x68017c]  ; 00533fed | DAT_0068017c
    MOV dword ptr [EBX + 0x2f68294],EAX ; 00533ff3 | DAT_02f68294
    MOV EAX,0x1                         ; 00533ff9
    MOV CL,byte ptr [EBX + 0x2f68294]   ; 00533ffe | DAT_02f68294
    SHL EAX,CL                          ; 00534004
    DEC EAX                             ; 00534006
    MOV dword ptr [EBX + 0x2f68298],EAX ; 00534007 | DAT_02f68298
    LEA EAX,[ESP + 0xc]                 ; 0053400d
    PUSH EAX                            ; 00534011
    PUSH 0x63af29                       ; 00534012 | = "%u" | s_u_0063af29 = %u
    PUSH EDI                            ; 00534017 | SHuffmanTable[34] g_HuffmanTables
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00534018 | int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053401d
    CMP EBP,dword ptr [ESP + 0xc]       ; 00534020
    JNZ 0x0053411c                      ; 00534024 | LAB_0053411c
        ;   XREF to: 0053411c (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053402a
        ;   Label: LAB_0053402a
    MOV EAX,dword ptr [EAX + 0x680180]  ; 0053402e | DAT_00680180
    TEST EAX,EAX                        ; 00534034
    JL 0x00534161                       ; 00534036 | LAB_00534161
        ;   XREF to: 00534161 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 0053403c | DAT_02f6829c
    IMUL EDX,EAX,0x828                  ; 00534042
    MOV ESI,0x2f68288                   ; 00534048 | SHuffmanTable[34] g_HuffmanTables
    MOV EDI,0x2f68288                   ; 0053404d | SHuffmanTable[34] g_HuffmanTables
    MOV ECX,0x802                       ; 00534052
    ADD EDI,EBX                         ; 00534057
    ADD ESI,EDX                         ; 00534059
    ADD EDI,0x20                        ; 0053405b
    ADD ESI,0x20                        ; 0053405e
    PUSH EDI                            ; 00534061 | DAT_02f682a8
    MOV EAX,ECX                         ; 00534062
    SHR ECX,0x2                         ; 00534064
    MOVSD.REP ES:EDI,ESI                ; 00534067 | DAT_02f682ac | DAT_02f682a8
    MOV CL,AL                           ; 00534069
    AND CL,0x3                          ; 0053406b
    MOVSB.REP ES:EDI,ESI                ; 0053406e | DAT_02f682ad | DAT_02f682ac
    POP EDI                             ; 00534070
    MOV EAX,dword ptr [EDX + 0x2f68aac] ; 00534071 | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f68aac],EAX ; 00534077 | g_HuffmanTables[0].table_size
    MOV EAX,dword ptr [EBX + 0x2f6828c] ; 0053407d | DAT_02f6828c
    CMP EAX,dword ptr [EDX + 0x2f6828c] ; 00534083 | DAT_02f6828c
    JZ 0x0053414a                       ; 00534089 | LAB_0053414a
        ;   XREF to: 0053414a (CONDITIONAL_JUMP)
    PUSH 0x2f68188                      ; 0053408f | char[256] g_CurrentMp3Filename
        ;   Label: LAB_0053408f
    PUSH EBP                            ; 00534094
    MOV EDI,0x63af5e                    ; 00534095 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063af5e = ..\sound\mp3.cpp
    MOV EAX,0xd7d                       ; 0053409a
    PUSH 0x63af6f                       ; 0053409f | = "wrong table %u reference.  File: %s" | s_wrong_table_u_reference__0063af6f = wrong table %u reference.  File: %s
    MOV dword ptr [0x02f0ca48],EDI      ; 005340a4 | char * g_CurrentFilename
        ;   Label: LAB_005340a4
    MOV [0x02f0ca4c],EAX                ; 005340aa | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005340af | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005340b4
    MOV ESI,dword ptr [ESP + 0x14]      ; 005340b7
        ;   Label: LAB_005340b7
    MOV ECX,dword ptr [ESP + 0x10]      ; 005340bb
    ADD EBX,0x828                       ; 005340bf
    INC EBP                             ; 005340c5
    ADD ESI,0x18                        ; 005340c6
    ADD ECX,0x828                       ; 005340c9
    MOV dword ptr [ESP + 0x14],ESI      ; 005340cf
    MOV dword ptr [ESP + 0x10],ECX      ; 005340d3 | DAT_02f68ab0
    CMP EBP,0x22                        ; 005340d7
    JL 0x00533fa6                       ; 005340da | LAB_00533fa6
        ;   XREF to: 00533fa6 (CONDITIONAL_JUMP)
    JZ 0x0053410a                       ; 005340e0 | LAB_0053410a
        ;   XREF to: 0053410a (CONDITIONAL_JUMP)
    PUSH 0x2f68188                      ; 005340e2 | char[256] g_CurrentMp3Filename
    MOV EDI,0x63b00c                    ; 005340e7 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063b00c = ..\sound\mp3.cpp
    MOV EBP,0xda8                       ; 005340ec
    PUSH 0x63b01d                       ; 005340f1 | = "decoder table read error.  File: %s" | s_decoder_table_read_error_0063b01d = decoder table read error.  File: %s
    MOV dword ptr [0x02f0ca48],EDI      ; 005340f6 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005340fc | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00534102 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00534107
    MOV dword ptr [0x02f45980],0x1      ; 0053410a | int g_HuffmanTablesInitialized
        ;   Label: LAB_0053410a
    POP EBX                             ; 00534114
    POP ESI                             ; 00534115
    POP EDI                             ; 00534116
    ADD ESP,0xc                         ; 00534117
        ;   Label: LAB_00534117
    POP EBP                             ; 0053411a
    RET                                 ; 0053411b
    PUSH 0x2f68188                      ; 0053411c | char[256] g_CurrentMp3Filename
        ;   Label: LAB_0053411c
    PUSH EBP                            ; 00534121
    MOV ECX,0x63af2c                    ; 00534122 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063af2c = ..\sound\mp3.cpp
    MOV ESI,0xd72                       ; 00534127
    PUSH 0x63af3d                       ; 0053412c | = "wrong table number %u.  File: %s" | s_wrong_table_number_u_Fil_0063af3d = wrong table number %u.  File: %s
    MOV dword ptr [0x02f0ca48],ECX      ; 00534131 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00534137 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0053413d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00534142
    JMP 0x0053402a                      ; 00534145 | LAB_0053402a
        ;   XREF to: 0053402a (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x2f68290] ; 0053414a | DAT_02f68290
        ;   Label: LAB_0053414a
    CMP ESI,dword ptr [EBX + 0x2f68290] ; 00534150 | DAT_02f68290
    JNZ 0x0053408f                      ; 00534156 | LAB_0053408f
        ;   XREF to: 0053408f (CONDITIONAL_JUMP)
    JMP 0x005340b7                      ; 0053415c | LAB_005340b7
        ;   XREF to: 005340b7 (UNCONDITIONAL_JUMP)
    CMP EAX,-0x1                        ; 00534161
        ;   Label: LAB_00534161
    JNZ 0x005341f0                      ; 00534164 | LAB_005341f0
        ;   XREF to: 005341f0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x2f68aac] ; 0053416a | g_HuffmanTables[0].table_size
    MOV dword ptr [EBX + 0x2f6829c],EAX ; 00534170 | DAT_02f6829c
    CMP ECX,0x401                       ; 00534176
    JNC 0x005341c6                      ; 0053417c | LAB_005341c6
        ;   XREF to: 005341c6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053417e
        ;   Label: LAB_0053417e
    MOV EDI,EBX                         ; 00534182
    MOV ECX,EBX                         ; 00534184
    MOV EDX,dword ptr [EBX + 0x2f68aac] ; 00534186 | g_HuffmanTables[0].table_size
    XOR ESI,ESI                         ; 0053418c
    MOV EAX,dword ptr [EAX + 0x680184]  ; 0053418e | DAT_00680184
    TEST EDX,EDX                        ; 00534194
    JBE 0x005340b7                      ; 00534196 | LAB_005340b7
        ;   XREF to: 005340b7 (CONDITIONAL_JUMP)
    MOV EDX,EAX                         ; 0053419c
        ;   Label: LAB_0053419c
    MOV DL,byte ptr [EDX]               ; 0053419e
    INC EAX                             ; 005341a0
    MOV byte ptr [ECX + 0x2f682a8],DL   ; 005341a1 | DAT_02f682a8
    MOV EDX,EAX                         ; 005341a7
    ADD ECX,0x2                         ; 005341a9
    MOV DL,byte ptr [EDX]               ; 005341ac
    MOV byte ptr [ECX + 0x2f682a7],DL   ; 005341ae | DAT_02f682a8+1
    INC ESI                             ; 005341b4
    MOV EDX,dword ptr [EDI + 0x2f68aac] ; 005341b5 | g_HuffmanTables[0].table_size
    INC EAX                             ; 005341bb
    CMP ESI,EDX                         ; 005341bc
    JNC 0x005340b7                      ; 005341be | LAB_005340b7
        ;   XREF to: 005340b7 (CONDITIONAL_JUMP)
    JMP 0x0053419c                      ; 005341c4 | LAB_0053419c
        ;   XREF to: 0053419c (UNCONDITIONAL_JUMP)
    PUSH 0x2f68188                      ; 005341c6 | char[256] g_CurrentMp3Filename
        ;   Label: LAB_005341c6
    MOV ESI,0x63af93                    ; 005341cb | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063af93 = ..\sound\mp3.cpp
    MOV EDI,0xd85                       ; 005341d0
    PUSH 0x63afa4                       ; 005341d5 | = "MP3 Huffman tree overflow!  File: %s" | s_MP3_Huffman_tree_overflo_0063afa4 = MP3 Huffman tree overflow!  File: %s
    MOV dword ptr [0x02f0ca48],ESI      ; 005341da | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005341e0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005341e6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005341eb
    JMP 0x0053417e                      ; 005341ee | LAB_0053417e
        ;   XREF to: 0053417e (UNCONDITIONAL_JUMP)
    PUSH 0x2f68188                      ; 005341f0 | char[256] g_CurrentMp3Filename
        ;   Label: LAB_005341f0
    PUSH EBP                            ; 005341f5
    MOV EDI,0x63afc9                    ; 005341f6 | = "..\\sound\\mp3.cpp" | s_sound_mp3_cpp_0063afc9 = ..\sound\mp3.cpp
    MOV EAX,0xd94                       ; 005341fb
    PUSH 0x63afda                       ; 00534200 | = "huffman decodertable error at table %..." | s_huffman_decodertable_err_0063afda = huffman decodertable error at table %d.  File: %s
    JMP 0x005340a4                      ; 00534205 | LAB_005340a4
        ;   XREF to: 005340a4 (UNCONDITIONAL_JUMP)

