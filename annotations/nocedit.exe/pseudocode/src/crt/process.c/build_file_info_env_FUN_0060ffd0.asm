; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_process_c_build_file_info_env_FUN_0060ffd0(void)
;
; Local Variables:
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x43]:1  local_43
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x27]:1  local_27
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f3d0
;
; Referenced Globals:
;   TerminatedCString s_C_FILE_INFO_00659790
;   undefined4 s__FILE_INFO=_00659791
;   undefined4 s_LE_INFO=_00659794
;   undefined4 s_NFO=_00659798
;   undefined4 s__0065979c
;   char g_ColonChar = :
;   undefined1 DAT_006597a1
;   undefined1 DAT_006597a2
;   undefined1 DAT_006597a3
;   char g_AsteriskChar = *
;   undefined1 DAT_006597a5
;   undefined1 DAT_006597a6
;   undefined1 DAT_006597a7
;   uint g_MaxHandleCount = 0x14
;
; Called Functions:
;   crt_io.c_get_handle_FUN_006109f0
;   crt_io.c_getFileTypeFlags_FUN_006088b0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_stdio.c_IntegerToString_FUN_00607d18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060ffd0
        ;   Label: crt_process.c_build_file_info_env_FUN_0060ffd0
    PUSH ESI                            ; 0060ffd1
    PUSH EDI                            ; 0060ffd2
    PUSH ES                             ; 0060ffd3
    PUSH EBP                            ; 0060ffd4
    SUB ESP,0x30                        ; 0060ffd5
    MOV ESI,dword ptr [0x00685214]      ; 0060ffd8 | g_MaxHandleCount
    LEA EBX,[ESI*0x8 + 0x0]             ; 0060ffde
    SUB EBX,ESI                         ; 0060ffe5
    SHL EBX,0x2                         ; 0060ffe7
    MOV EDI,0x659790                    ; 0060ffea | = "C_FILE_INFO="
    SUB EBX,ESI                         ; 0060ffef
    PUSH ES                             ; 0060fff1
    MOV AX,DS                           ; 0060fff2
    MOV ES,AX                           ; 0060fff4
    SUB ECX,ECX                         ; 0060fff6
    DEC ECX                             ; 0060fff8
    XOR EAX,EAX                         ; 0060fff9
    SCASB.REPNE ES:EDI                  ; 0060fffb | = "C_FILE_INFO=" | s__FILE_INFO=_00659791
    NOT ECX                             ; 0060fffd
    DEC ECX                             ; 0060ffff
    POP ES                              ; 00610000
    ADD EBX,ECX                         ; 00610001
    INC EBX                             ; 00610003
    PUSH EBX                            ; 00610004
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00610005
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0061000a
    MOV EDI,EAX                         ; 0061000d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0061000f
    TEST EAX,EAX                        ; 00610013
    JNZ 0x0061001e                      ; 00610015
        ;   XREF to: 0061001e (CONDITIONAL_JUMP)  ; LAB_0061001e
    XOR ESI,ESI                         ; 00610017
    JMP 0x006101e3                      ; 00610019
        ;   XREF to: 006101e3 (UNCONDITIONAL_JUMP)  ; LAB_006101e3
    MOV AX,DS                           ; 0061001e
        ;   Label: LAB_0061001e
    MOV ES,AX                           ; 00610020
    MOV ESI,0x659790                    ; 00610022 | = "C_FILE_INFO="
    XOR EBX,EBX                         ; 00610027
    MOV EDX,dword ptr [0x00685214]      ; 00610029 | g_MaxHandleCount
    MOVSD ES:EDI,ESI                    ; 0061002f | = "C_FILE_INFO="
    MOVSD ES:EDI,ESI                    ; 00610030 | s_LE_INFO=_00659794
    MOVSD ES:EDI,ESI                    ; 00610031 | s_NFO=_00659798
    MOVSB ES:EDI,ESI                    ; 00610032 | s__0065979c
    TEST EDX,EDX                        ; 00610033
    JBE 0x006101df                      ; 00610035
        ;   XREF to: 006101df (CONDITIONAL_JUMP)  ; LAB_006101df
    PUSH EBX                            ; 0061003b
        ;   Label: LAB_0061003b
    CALL crt_io.c_getFileTypeFlags_FUN_006088b0 ; 0061003c
        ;   XREF to: 006088b0 (UNCONDITIONAL_CALL)  ; uint crt_io.c_getFileTypeFlags_FUN_006088b0(int file_handle_index)
    MOV EBP,EAX                         ; 00610041
    ADD ESP,0x4                         ; 00610043
    TEST EBP,0x4000                     ; 00610046
    JZ 0x006101d0                       ; 0061004c
        ;   XREF to: 006101d0 (CONDITIONAL_JUMP)  ; LAB_006101d0
    PUSH EBX                            ; 00610052
    CALL crt_io.c_get_handle_FUN_006109f0 ; 00610053
        ;   XREF to: 006109f0 (UNCONDITIONAL_CALL)  ; undefined crt_io.c_get_handle_FUN_006109f0(int fd)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00610058
    ADD ESP,0x4                         ; 0061005c
    PUSH 0x10                           ; 0061005f
    LEA ESI,[ESP + 0x20]                ; 00610061
    PUSH ESI                            ; 00610065
    XOR AH,AH                           ; 00610066
    PUSH EBX                            ; 00610068
    MOV byte ptr [ESP + 0xc],AH         ; 00610069
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 0061006d
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 00610072
    MOV EDI,ESP                         ; 00610075
    LEA ESI,[ESP + 0x1c]                ; 00610077
    PUSH ES                             ; 0061007b
    PUSH DS                             ; 0061007c
    POP ES                              ; 0061007d
    PUSH EDI                            ; 0061007e
    SUB ECX,ECX                         ; 0061007f
    DEC ECX                             ; 00610081
    MOV AL,0x0                          ; 00610082
    SCASB.REPNE ES:EDI                  ; 00610084
    DEC EDI                             ; 00610086
    MOV AL,byte ptr [ESI]               ; 00610087
        ;   Label: LAB_00610087
    MOV byte ptr [EDI],AL               ; 00610089
    CMP AL,0x0                          ; 0061008b
    JZ 0x0061009f                       ; 0061008d
        ;   XREF to: 0061009f (CONDITIONAL_JUMP)  ; LAB_0061009f
    MOV AL,byte ptr [ESI + 0x1]         ; 0061008f
    ADD ESI,0x2                         ; 00610092
    MOV byte ptr [EDI + 0x1],AL         ; 00610095
    ADD EDI,0x2                         ; 00610098
    CMP AL,0x0                          ; 0061009b
    JNZ 0x00610087                      ; 0061009d
        ;   XREF to: 00610087 (CONDITIONAL_JUMP)  ; LAB_00610087
    POP EDI                             ; 0061009f
        ;   Label: LAB_0061009f
    POP ES                              ; 006100a0
    MOV ESI,0x6597a0                    ; 006100a1 | g_ColonChar
    MOV EDI,ESP                         ; 006100a6
    PUSH ES                             ; 006100a8
    PUSH DS                             ; 006100a9
    POP ES                              ; 006100aa
    PUSH EDI                            ; 006100ab
    SUB ECX,ECX                         ; 006100ac
    DEC ECX                             ; 006100ae
    MOV AL,0x0                          ; 006100af
    SCASB.REPNE ES:EDI                  ; 006100b1
    DEC EDI                             ; 006100b3
    MOV AL,byte ptr [ESI]               ; 006100b4 | g_ColonChar | DAT_006597a2
        ;   Label: LAB_006100b4
    MOV byte ptr [EDI],AL               ; 006100b6
    CMP AL,0x0                          ; 006100b8
    JZ 0x006100cc                       ; 006100ba
        ;   XREF to: 006100cc (CONDITIONAL_JUMP)  ; LAB_006100cc
    MOV AL,byte ptr [ESI + 0x1]         ; 006100bc | DAT_006597a1 | DAT_006597a3
    ADD ESI,0x2                         ; 006100bf
    MOV byte ptr [EDI + 0x1],AL         ; 006100c2
    ADD EDI,0x2                         ; 006100c5
    CMP AL,0x0                          ; 006100c8
    JNZ 0x006100b4                      ; 006100ca
        ;   XREF to: 006100b4 (CONDITIONAL_JUMP)  ; LAB_006100b4
    POP EDI                             ; 006100cc
        ;   Label: LAB_006100cc
    POP ES                              ; 006100cd
    PUSH 0x10                           ; 006100ce
    LEA ESI,[ESP + 0x20]                ; 006100d0
    PUSH ESI                            ; 006100d4
    MOV ESI,dword ptr [ESP + 0x30]      ; 006100d5
    PUSH ESI                            ; 006100d9
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 006100da
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 006100df
    MOV EDI,ESP                         ; 006100e2
    LEA ESI,[ESP + 0x1c]                ; 006100e4
    PUSH ES                             ; 006100e8
    PUSH DS                             ; 006100e9
    POP ES                              ; 006100ea
    PUSH EDI                            ; 006100eb
    SUB ECX,ECX                         ; 006100ec
    DEC ECX                             ; 006100ee
    MOV AL,0x0                          ; 006100ef
    SCASB.REPNE ES:EDI                  ; 006100f1
    DEC EDI                             ; 006100f3
    MOV AL,byte ptr [ESI]               ; 006100f4
        ;   Label: LAB_006100f4
    MOV byte ptr [EDI],AL               ; 006100f6
    CMP AL,0x0                          ; 006100f8
    JZ 0x0061010c                       ; 006100fa
        ;   XREF to: 0061010c (CONDITIONAL_JUMP)  ; LAB_0061010c
    MOV AL,byte ptr [ESI + 0x1]         ; 006100fc
    ADD ESI,0x2                         ; 006100ff
    MOV byte ptr [EDI + 0x1],AL         ; 00610102
    ADD EDI,0x2                         ; 00610105
    CMP AL,0x0                          ; 00610108
    JNZ 0x006100f4                      ; 0061010a
        ;   XREF to: 006100f4 (CONDITIONAL_JUMP)  ; LAB_006100f4
    POP EDI                             ; 0061010c
        ;   Label: LAB_0061010c
    POP ES                              ; 0061010d
    MOV ESI,0x6597a0                    ; 0061010e | g_ColonChar
    MOV EDI,ESP                         ; 00610113
    PUSH ES                             ; 00610115
    PUSH DS                             ; 00610116
    POP ES                              ; 00610117
    PUSH EDI                            ; 00610118
    SUB ECX,ECX                         ; 00610119
    DEC ECX                             ; 0061011b
    MOV AL,0x0                          ; 0061011c
    SCASB.REPNE ES:EDI                  ; 0061011e
    DEC EDI                             ; 00610120
    MOV AL,byte ptr [ESI]               ; 00610121 | g_ColonChar | DAT_006597a2
        ;   Label: LAB_00610121
    MOV byte ptr [EDI],AL               ; 00610123
    CMP AL,0x0                          ; 00610125
    JZ 0x00610139                       ; 00610127
        ;   XREF to: 00610139 (CONDITIONAL_JUMP)  ; LAB_00610139
    MOV AL,byte ptr [ESI + 0x1]         ; 00610129 | DAT_006597a1 | DAT_006597a3
    ADD ESI,0x2                         ; 0061012c
    MOV byte ptr [EDI + 0x1],AL         ; 0061012f
    ADD EDI,0x2                         ; 00610132
    CMP AL,0x0                          ; 00610135
    JNZ 0x00610121                      ; 00610137
        ;   XREF to: 00610121 (CONDITIONAL_JUMP)  ; LAB_00610121
    POP EDI                             ; 00610139
        ;   Label: LAB_00610139
    POP ES                              ; 0061013a
    PUSH 0x10                           ; 0061013b
    LEA ESI,[ESP + 0x20]                ; 0061013d
    PUSH ESI                            ; 00610141
    PUSH EBP                            ; 00610142
    CALL crt_stdio.c_IntegerToString_FUN_00607d18 ; 00610143
        ;   XREF to: 00607d18 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_IntegerToString_FUN_00607d18(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 00610148
    MOV EDI,ESP                         ; 0061014b
    LEA ESI,[ESP + 0x1c]                ; 0061014d
    PUSH ES                             ; 00610151
    PUSH DS                             ; 00610152
    POP ES                              ; 00610153
    PUSH EDI                            ; 00610154
    SUB ECX,ECX                         ; 00610155
    DEC ECX                             ; 00610157
    MOV AL,0x0                          ; 00610158
    SCASB.REPNE ES:EDI                  ; 0061015a
    DEC EDI                             ; 0061015c
    MOV AL,byte ptr [ESI]               ; 0061015d
        ;   Label: LAB_0061015d
    MOV byte ptr [EDI],AL               ; 0061015f
    CMP AL,0x0                          ; 00610161
    JZ 0x00610175                       ; 00610163
        ;   XREF to: 00610175 (CONDITIONAL_JUMP)  ; LAB_00610175
    MOV AL,byte ptr [ESI + 0x1]         ; 00610165
    ADD ESI,0x2                         ; 00610168
    MOV byte ptr [EDI + 0x1],AL         ; 0061016b
    ADD EDI,0x2                         ; 0061016e
    CMP AL,0x0                          ; 00610171
    JNZ 0x0061015d                      ; 00610173
        ;   XREF to: 0061015d (CONDITIONAL_JUMP)  ; LAB_0061015d
    POP EDI                             ; 00610175
        ;   Label: LAB_00610175
    POP ES                              ; 00610176
    MOV ESI,0x6597a4                    ; 00610177 | g_AsteriskChar
    MOV EDI,ESP                         ; 0061017c
    PUSH ES                             ; 0061017e
    PUSH DS                             ; 0061017f
    POP ES                              ; 00610180
    PUSH EDI                            ; 00610181
    SUB ECX,ECX                         ; 00610182
    DEC ECX                             ; 00610184
    MOV AL,0x0                          ; 00610185
    SCASB.REPNE ES:EDI                  ; 00610187
    DEC EDI                             ; 00610189
    MOV AL,byte ptr [ESI]               ; 0061018a | g_AsteriskChar | DAT_006597a6
        ;   Label: LAB_0061018a
    MOV byte ptr [EDI],AL               ; 0061018c
    CMP AL,0x0                          ; 0061018e
    JZ 0x006101a2                       ; 00610190
        ;   XREF to: 006101a2 (CONDITIONAL_JUMP)  ; LAB_006101a2
    MOV AL,byte ptr [ESI + 0x1]         ; 00610192 | DAT_006597a5 | DAT_006597a7
    ADD ESI,0x2                         ; 00610195
    MOV byte ptr [EDI + 0x1],AL         ; 00610198
    ADD EDI,0x2                         ; 0061019b
    CMP AL,0x0                          ; 0061019e
    JNZ 0x0061018a                      ; 006101a0
        ;   XREF to: 0061018a (CONDITIONAL_JUMP)  ; LAB_0061018a
    POP EDI                             ; 006101a2
        ;   Label: LAB_006101a2
    POP ES                              ; 006101a3
    MOV ESI,ESP                         ; 006101a4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 006101a6
    PUSH ES                             ; 006101aa
    PUSH DS                             ; 006101ab
    POP ES                              ; 006101ac
    PUSH EDI                            ; 006101ad
    SUB ECX,ECX                         ; 006101ae
    DEC ECX                             ; 006101b0
    MOV AL,0x0                          ; 006101b1
    SCASB.REPNE ES:EDI                  ; 006101b3
    DEC EDI                             ; 006101b5
    MOV AL,byte ptr [ESI]               ; 006101b6
        ;   Label: LAB_006101b6
    MOV byte ptr [EDI],AL               ; 006101b8
    CMP AL,0x0                          ; 006101ba
    JZ 0x006101ce                       ; 006101bc
        ;   XREF to: 006101ce (CONDITIONAL_JUMP)  ; LAB_006101ce
    MOV AL,byte ptr [ESI + 0x1]         ; 006101be
    ADD ESI,0x2                         ; 006101c1
    MOV byte ptr [EDI + 0x1],AL         ; 006101c4
    ADD EDI,0x2                         ; 006101c7
    CMP AL,0x0                          ; 006101ca
    JNZ 0x006101b6                      ; 006101cc
        ;   XREF to: 006101b6 (CONDITIONAL_JUMP)  ; LAB_006101b6
    POP EDI                             ; 006101ce
        ;   Label: LAB_006101ce
    POP ES                              ; 006101cf
    MOV ECX,dword ptr [0x00685214]      ; 006101d0 | g_MaxHandleCount
        ;   Label: LAB_006101d0
    INC EBX                             ; 006101d6
    CMP EBX,ECX                         ; 006101d7
    JC 0x0061003b                       ; 006101d9
        ;   XREF to: 0061003b (CONDITIONAL_JUMP)  ; LAB_0061003b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 006101df
        ;   Label: LAB_006101df
    MOV EAX,ESI                         ; 006101e3
        ;   Label: LAB_006101e3
    ADD ESP,0x30                        ; 006101e5
    POP EBP                             ; 006101e8
    POP ES                              ; 006101e9
    POP EDI                             ; 006101ea
    POP ESI                             ; 006101eb
    POP EBX                             ; 006101ec
    RET                                 ; 006101ed

