; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_load_FUN_005dbe00(CTextureList *this_ptr,char *filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x12c]:1  local_12c
; undefined1       Stack[-0x12b]:1  local_12b
; undefined1       Stack[-0x129]:1  local_129
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_load_FUN_004ef030 at 004ef310
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_00654eb8
;   TerminatedCString s_CTextureList_load_No_ext_00654ecc
;   TerminatedCString s_tex_00654ef4
;   undefined4 DAT_00654ef5
;   undefined4 DAT_00654ef6
;   undefined4 DAT_00654ef7
;   TerminatedCString s_rt_00654ef9
;   TerminatedCString s_data_00654efc
;   TerminatedCString s_core_texlist_cpp_00654f01
;   TerminatedCString s_CTextureList_load_Bad_fi_00654f15
;   TerminatedCString s_d_00654f38
;   TerminatedCString s_s_00654f3c
;   TerminatedCString s_core_texlist_cpp_00654f40
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbe00
        ;   Label: core_texlist.cpp_CTextureList_load_FUN_005dbe00
    PUSH ESI                            ; 005dbe01
    PUSH EDI                            ; 005dbe02
    PUSH EBP                            ; 005dbe03
    SUB ESP,0x11c                       ; 005dbe04
    MOV EBP,dword ptr [ESP + 0x130]     ; 005dbe0a
    MOV ESI,dword ptr [ESP + 0x134]     ; 005dbe11
    MOV EDI,ESP                         ; 005dbe18
    MOV DL,0x2e                         ; 005dbe1a
    PUSH EDI                            ; 005dbe1c
    MOV AL,byte ptr [ESI]               ; 005dbe1d
        ;   Label: LAB_005dbe1d
    MOV byte ptr [EDI],AL               ; 005dbe1f
    CMP AL,0x0                          ; 005dbe21
    JZ 0x005dbe35                       ; 005dbe23
        ;   XREF to: 005dbe35 (CONDITIONAL_JUMP)  ; LAB_005dbe35
    MOV AL,byte ptr [ESI + 0x1]         ; 005dbe25
    ADD ESI,0x2                         ; 005dbe28
    MOV byte ptr [EDI + 0x1],AL         ; 005dbe2b
    ADD EDI,0x2                         ; 005dbe2e
    CMP AL,0x0                          ; 005dbe31
    JNZ 0x005dbe1d                      ; 005dbe33
        ;   XREF to: 005dbe1d (CONDITIONAL_JUMP)  ; LAB_005dbe1d
    POP EDI                             ; 005dbe35
        ;   Label: LAB_005dbe35
    MOV ESI,ESP                         ; 005dbe36
    MOV AL,byte ptr [ESI]               ; 005dbe38
        ;   Label: LAB_005dbe38
    CMP AL,DL                           ; 005dbe3a
    JZ 0x005dbe50                       ; 005dbe3c
        ;   XREF to: 005dbe50 (CONDITIONAL_JUMP)  ; LAB_005dbe50
    CMP AL,0x0                          ; 005dbe3e
    JZ 0x005dbe4e                       ; 005dbe40
        ;   XREF to: 005dbe4e (CONDITIONAL_JUMP)  ; LAB_005dbe4e
    INC ESI                             ; 005dbe42
    MOV AL,byte ptr [ESI]               ; 005dbe43
    CMP AL,DL                           ; 005dbe45
    JZ 0x005dbe50                       ; 005dbe47
        ;   XREF to: 005dbe50 (CONDITIONAL_JUMP)  ; LAB_005dbe50
    INC ESI                             ; 005dbe49
    CMP AL,0x0                          ; 005dbe4a
    JNZ 0x005dbe38                      ; 005dbe4c
        ;   XREF to: 005dbe38 (CONDITIONAL_JUMP)  ; LAB_005dbe38
    SUB ESI,ESI                         ; 005dbe4e
        ;   Label: LAB_005dbe4e
    MOV EDI,ESI                         ; 005dbe50
        ;   Label: LAB_005dbe50
    TEST ESI,ESI                        ; 005dbe52
    JZ 0x005dbfd6                       ; 005dbe54
        ;   XREF to: 005dbfd6 (CONDITIONAL_JUMP)  ; LAB_005dbfd6
    MOV ESI,0x654ef4                    ; 005dbe5a | = ".tex"
        ;   Label: LAB_005dbe5a
    PUSH EDI                            ; 005dbe5f
    MOV AL,byte ptr [ESI]               ; 005dbe60 | = ".tex" | DAT_00654ef6
        ;   Label: LAB_005dbe60
    MOV byte ptr [EDI],AL               ; 005dbe62
    CMP AL,0x0                          ; 005dbe64
    JZ 0x005dbe78                       ; 005dbe66
        ;   XREF to: 005dbe78 (CONDITIONAL_JUMP)  ; LAB_005dbe78
    MOV AL,byte ptr [ESI + 0x1]         ; 005dbe68 | DAT_00654ef5 | DAT_00654ef7
    ADD ESI,0x2                         ; 005dbe6b
    MOV byte ptr [EDI + 0x1],AL         ; 005dbe6e
    ADD EDI,0x2                         ; 005dbe71
    CMP AL,0x0                          ; 005dbe74
    JNZ 0x005dbe60                      ; 005dbe76
        ;   XREF to: 005dbe60 (CONDITIONAL_JUMP)  ; LAB_005dbe60
    POP EDI                             ; 005dbe78
        ;   Label: LAB_005dbe78
    PUSH 0x654ef9                       ; 005dbe79 | = "rt"
    LEA EAX,[ESP + 0x4]                 ; 005dbe7e
    PUSH EAX                            ; 005dbe82
    PUSH 0x654efc                       ; 005dbe83 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005dbe88
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005dbe8d
    MOV dword ptr [ESP + 0x100],EAX     ; 005dbe90
    TEST EAX,EAX                        ; 005dbe97
    JNZ 0x005dbebe                      ; 005dbe99
        ;   XREF to: 005dbebe (CONDITIONAL_JUMP)  ; LAB_005dbebe
    MOV EBX,0x654f01                    ; 005dbe9b | = "..\\core\\texlist.cpp"
    MOV ESI,0x6a                        ; 005dbea0
    PUSH 0x654f15                       ; 005dbea5 | = "CTextureList::load - Bad filename!"
    MOV dword ptr [0x02f0ca48],EBX      ; 005dbeaa | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005dbeb0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dbeb6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005dbebb
    PUSH EBP                            ; 005dbebe
        ;   Label: LAB_005dbebe
    PUSH 0x654f38                       ; 005dbebf | = "%d\n"
    MOV EDI,dword ptr [ESP + 0x108]     ; 005dbec4
    PUSH EDI                            ; 005dbecb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005dbecc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005dbed1
    XOR EAX,EAX                         ; 005dbed4
    MOV EDX,dword ptr [EBP]             ; 005dbed6
    MOV dword ptr [ESP + 0x110],EAX     ; 005dbed9
    TEST EDX,EDX                        ; 005dbee0
    JLE 0x005dc05c                      ; 005dbee2
        ;   XREF to: 005dc05c (CONDITIONAL_JUMP)  ; LAB_005dc05c
    LEA EAX,[EBP + 0x4]                 ; 005dbee8
    XOR ECX,ECX                         ; 005dbeeb
    MOV dword ptr [ESP + 0x118],EAX     ; 005dbeed
    MOV dword ptr [ESP + 0x114],EBP     ; 005dbef4
    MOV dword ptr [ESP + 0x104],ECX     ; 005dbefb
    ADD EAX,0x8                         ; 005dbf02
    MOV dword ptr [ESP + 0x108],EBP     ; 005dbf05
    MOV dword ptr [ESP + 0x10c],EAX     ; 005dbf0c
    MOV EAX,ESP                         ; 005dbf13
        ;   Label: LAB_005dbf13
    PUSH EAX                            ; 005dbf15
    PUSH 0x654f3c                       ; 005dbf16 | = "%s\n"
    MOV EBX,dword ptr [ESP + 0x108]     ; 005dbf1b
    PUSH EBX                            ; 005dbf22
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005dbf23
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005dbf28
    MOV ESI,ESP                         ; 005dbf2b
    MOV DL,0x2c                         ; 005dbf2d
    MOV AL,byte ptr [ESI]               ; 005dbf2f
        ;   Label: LAB_005dbf2f
    CMP AL,DL                           ; 005dbf31
    JZ 0x005dbf47                       ; 005dbf33
        ;   XREF to: 005dbf47 (CONDITIONAL_JUMP)  ; LAB_005dbf47
    CMP AL,0x0                          ; 005dbf35
    JZ 0x005dbf45                       ; 005dbf37
        ;   XREF to: 005dbf45 (CONDITIONAL_JUMP)  ; LAB_005dbf45
    INC ESI                             ; 005dbf39
    MOV AL,byte ptr [ESI]               ; 005dbf3a
    CMP AL,DL                           ; 005dbf3c
    JZ 0x005dbf47                       ; 005dbf3e
        ;   XREF to: 005dbf47 (CONDITIONAL_JUMP)  ; LAB_005dbf47
    INC ESI                             ; 005dbf40
    CMP AL,0x0                          ; 005dbf41
    JNZ 0x005dbf2f                      ; 005dbf43
        ;   XREF to: 005dbf2f (CONDITIONAL_JUMP)  ; LAB_005dbf2f
    SUB ESI,ESI                         ; 005dbf45
        ;   Label: LAB_005dbf45
    TEST ESI,ESI                        ; 005dbf47
        ;   Label: LAB_005dbf47
    JZ 0x005dc0b5                       ; 005dbf49
        ;   XREF to: 005dc0b5 (CONDITIONAL_JUMP)  ; LAB_005dc0b5
    MOV byte ptr [ESI],0x0              ; 005dbf4f
    INC ESI                             ; 005dbf52
    PUSH ESI                            ; 005dbf53
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 005dbf54
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 005dbf59
    MOV ECX,dword ptr [ESP + 0x114]     ; 005dbf5c
    MOV dword ptr [ECX + 0x5dc4],EAX    ; 005dbf63
    MOV ESI,ESP                         ; 005dbf69
        ;   Label: LAB_005dbf69
    MOV EDI,dword ptr [ESP + 0x10c]     ; 005dbf6b
    PUSH EDI                            ; 005dbf72
    MOV AL,byte ptr [ESI]               ; 005dbf73
        ;   Label: LAB_005dbf73
    MOV byte ptr [EDI],AL               ; 005dbf75
    CMP AL,0x0                          ; 005dbf77
    JZ 0x005dbf8b                       ; 005dbf79
        ;   XREF to: 005dbf8b (CONDITIONAL_JUMP)  ; LAB_005dbf8b
    MOV AL,byte ptr [ESI + 0x1]         ; 005dbf7b
    ADD ESI,0x2                         ; 005dbf7e
    MOV byte ptr [EDI + 0x1],AL         ; 005dbf81
    ADD EDI,0x2                         ; 005dbf84
    CMP AL,0x0                          ; 005dbf87
    JNZ 0x005dbf73                      ; 005dbf89
        ;   XREF to: 005dbf73 (CONDITIONAL_JUMP)  ; LAB_005dbf73
    POP EDI                             ; 005dbf8b
        ;   Label: LAB_005dbf8b
    MOV EAX,dword ptr [ESP + 0x108]     ; 005dbf8c
    XOR EBX,EBX                         ; 005dbf93
    MOV ESI,dword ptr [ESP + 0x104]     ; 005dbf95
    MOV dword ptr [EAX + 0x8],0x0       ; 005dbf9c
    MOV EDI,dword ptr [ESP + 0x118]     ; 005dbfa3
        ;   Label: LAB_005dbfa3
    ADD EDI,ESI                         ; 005dbfaa
    ADD EDI,0x8                         ; 005dbfac
    SUB ECX,ECX                         ; 005dbfaf
    DEC ECX                             ; 005dbfb1
    XOR EAX,EAX                         ; 005dbfb2
    SCASB.REPNE ES:EDI                  ; 005dbfb4
    NOT ECX                             ; 005dbfb6
    DEC ECX                             ; 005dbfb8
    CMP EBX,ECX                         ; 005dbfb9
    JNC 0x005dbffe                      ; 005dbfbb
        ;   XREF to: 005dbffe (CONDITIONAL_JUMP)  ; LAB_005dbffe
    LEA EDI,[ESI + EBP*0x1]             ; 005dbfbd
    XOR EAX,EAX                         ; 005dbfc0
    MOV AL,byte ptr [EDI + EBX*0x1 + 0xc] ; 005dbfc2
    PUSH EAX                            ; 005dbfc6
    INC EBX                             ; 005dbfc7
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 005dbfc8
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 005dbfcd
    MOV byte ptr [EDI + EBX*0x1 + 0xb],AL ; 005dbfd0
    JMP 0x005dbfa3                      ; 005dbfd4
        ;   XREF to: 005dbfa3 (UNCONDITIONAL_JUMP)  ; LAB_005dbfa3
    MOV EDX,0x654eb8                    ; 005dbfd6 | = "..\\core\\texlist.cpp"
        ;   Label: LAB_005dbfd6
    MOV ECX,0x61                        ; 005dbfdb
    PUSH 0x654ecc                       ; 005dbfe0 | = "CTextureList::load - No extension found"
    MOV dword ptr [0x02f0ca48],EDX      ; 005dbfe5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005dbfeb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dbff1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005dbff6
    JMP 0x005dbe5a                      ; 005dbff9
        ;   XREF to: 005dbe5a (UNCONDITIONAL_JUMP)  ; LAB_005dbe5a
    MOV ECX,dword ptr [ESP + 0x114]     ; 005dbffe
        ;   Label: LAB_005dbffe
    MOV EBX,dword ptr [ESP + 0x104]     ; 005dc005
    MOV ESI,dword ptr [ESP + 0x108]     ; 005dc00c
    MOV EDI,dword ptr [ESP + 0x10c]     ; 005dc013
    MOV EAX,dword ptr [ESP + 0x110]     ; 005dc01a
    MOV EDX,dword ptr [EBP]             ; 005dc021
    ADD ECX,0x4                         ; 005dc024
    ADD EBX,0x18                        ; 005dc027
    ADD ESI,0x18                        ; 005dc02a
    ADD EDI,0x18                        ; 005dc02d
    INC EAX                             ; 005dc030
    MOV dword ptr [ESP + 0x114],ECX     ; 005dc031
    MOV dword ptr [ESP + 0x104],EBX     ; 005dc038
    MOV dword ptr [ESP + 0x108],ESI     ; 005dc03f
    MOV dword ptr [ESP + 0x10c],EDI     ; 005dc046
    MOV dword ptr [ESP + 0x110],EAX     ; 005dc04d
    CMP EAX,EDX                         ; 005dc054
    JL 0x005dbf13                       ; 005dc056
        ;   XREF to: 005dbf13 (CONDITIONAL_JUMP)  ; LAB_005dbf13
    MOV ESI,dword ptr [EBP]             ; 005dc05c
        ;   Label: LAB_005dc05c
    CMP ESI,0x3e8                       ; 005dc05f
    JGE 0x005dc090                      ; 005dc065
        ;   XREF to: 005dc090 (CONDITIONAL_JUMP)  ; LAB_005dc090
    LEA EAX,[ESI*0x4 + 0x0]             ; 005dc067
    ADD EAX,EBP                         ; 005dc06e
    ADD EAX,0x4                         ; 005dc070
        ;   Label: LAB_005dc070
    INC ESI                             ; 005dc073
    MOV dword ptr [EAX + 0x5dc0],0x0    ; 005dc074
    CMP ESI,0x3e8                       ; 005dc07e
    JL 0x005dc070                       ; 005dc084
        ;   XREF to: 005dc070 (CONDITIONAL_JUMP)  ; LAB_005dc070
    LEA EAX,[EAX]                       ; 005dc086
    LEA EDX,[EDX]                       ; 005dc08c
    PUSH 0x96                           ; 005dc090
        ;   Label: LAB_005dc090
    PUSH 0x654f40                       ; 005dc095 | = "..\\core\\texlist.cpp"
    MOV ESI,dword ptr [ESP + 0x108]     ; 005dc09a
    PUSH ESI                            ; 005dc0a1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005dc0a2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005dc0a7
    ADD ESP,0x11c                       ; 005dc0aa
    POP EBP                             ; 005dc0b0
    POP EDI                             ; 005dc0b1
    POP ESI                             ; 005dc0b2
    POP EBX                             ; 005dc0b3
    RET                                 ; 005dc0b4
    MOV EAX,dword ptr [ESP + 0x114]     ; 005dc0b5
        ;   Label: LAB_005dc0b5
    MOV dword ptr [EAX + 0x5dc4],ESI    ; 005dc0bc
    JMP 0x005dbf69                      ; 005dc0c2
        ;   XREF to: 005dbf69 (UNCONDITIONAL_JUMP)  ; LAB_005dbf69

