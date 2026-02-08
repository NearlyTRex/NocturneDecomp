; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_cramTextureList_FUN_0046bb80(SCramConfig *cram_config)
;
; Parameters:
; SCramConfig *    Stack[0x4]:4   cram_config
; Local Variables:
; undefined8       Stack[-0xb60]:8  local_b60
; undefined1       Stack[-0xb58]:1  local_b58
; undefined4       Stack[-0xa54]:4  local_a54
; undefined4       Stack[-0xa50]:4  local_a50
; undefined4       Stack[-0xa4c]:4  local_a4c
; undefined4       Stack[-0xa48]:4  local_a48
; undefined4       Stack[-0xa44]:4  local_a44
; undefined4       Stack[-0xa40]:4  local_a40
; undefined4       Stack[-0xa3c]:4  local_a3c
; undefined4       Stack[-0xa38]:4  local_a38
; undefined4       Stack[-0xa34]:4  local_a34
; undefined4       Stack[-0xa30]:4  local_a30
; undefined4       Stack[-0xa2c]:4  local_a2c
; undefined4       Stack[-0xa28]:4  local_a28
; undefined1       Stack[-0xa24]:1  local_a24
; undefined1       Stack[-0xa23]:1  local_a23
; undefined4       Stack[-0x9d4]:4  local_9d4
; undefined1       Stack[-0x9d0]:1  local_9d0
; undefined4       Stack[-0x980]:4  local_980
; undefined1       Stack[-0x97c]:1  local_97c
; undefined4       Stack[-0x850]:4  local_850
; undefined1       Stack[-0x84c]:1  local_84c
; undefined1       Stack[-0x460]:1  local_460
; undefined1       Stack[-0x45f]:1  local_45f
; undefined1       Stack[-0x45d]:1  local_45d
; undefined1       Stack[-0x35c]:1  local_35c
; undefined1       Stack[-0x35b]:1  local_35b
; undefined1       Stack[-0x359]:1  local_359
; undefined1       Stack[-0x258]:1  local_258
; undefined1       Stack[-0x257]:1  local_257
; undefined1       Stack[-0x255]:1  local_255
; undefined1       Stack[-0x154]:1  local_154
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 at 0047a5bc
;   core_skeledit.cpp_FUN_0058de70 at 0058e093
;   shape_design.c_tileTextureMaps_FUN_0046a180 at 0046a498
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061d470
;   TerminatedCString s_Can_t_cramTextureList_be_0061d482
;   TerminatedCString s_rb_0061d4b1
;   TerminatedCString s_art_0061d4b4
;   TerminatedCString s_shape_design_c_0061d4b8
;   TerminatedCString s_rb_0061d4ca
;   TerminatedCString s_Can_t_open_s_0061d4cd
;   TerminatedCString s_shape_design_c_0061d4db
;   TerminatedCString s_Unable_to_read_file_s_0061d4ed
;   TerminatedCString s_shape_design_c_0061d507
;   TerminatedCString s_shape_design_c_0061d519
;   TerminatedCString s_Unable_to_read_file_s_0061d52b
;   TerminatedCString s_shape_design_c_0061d545
;   TerminatedCString s_shape_design_c_0061d557
;   TerminatedCString s_Unable_to_read_file_s_0061d569
;   ... and 157 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_fwrite_FUN_005fdc00
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   crt_string.c_strupr_FUN_00600770
;   crt_system.c_sleep_FUN_00600790
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   ... and 19 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bb80
        ;   Label: shape_design.c_cramTextureList_FUN_0046bb80
    PUSH ESI                            ; 0046bb81
    PUSH EDI                            ; 0046bb82
    PUSH EBP                            ; 0046bb83
    MOV EBP,ESP                         ; 0046bb84
    SUB ESP,0xb48                       ; 0046bb86
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046bb8c
    MOV dword ptr [EBP + -0x18],0x0     ; 0046bb93
    MOV dword ptr [EBP + -0x14],0x0     ; 0046bb9a
    MOV dword ptr [EBP + -0x10],0x0     ; 0046bba1
    CMP dword ptr [0x01e8d260],0x1      ; 0046bba8 | g_TextureProcessedCount
    JGE 0x0046bbd3                      ; 0046bbaf
        ;   XREF to: 0046bbd3 (CONDITIONAL_JUMP)  ; LAB_0046bbd3
    MOV dword ptr [0x02f0ca48],0x61d470 ; 0046bbb1 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x28ed   ; 0046bbbb | g_CurrentLineNumber
    MOV EAX,0x61d482                    ; 0046bbc5 | = "Can't cramTextureList because empty c..."
    PUSH EAX                            ; 0046bbca | = "Can't cramTextureList because empty c..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046bbcb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046bbd0
    MOV dword ptr [EBP + -0x4c],0x0     ; 0046bbd3
        ;   Label: LAB_0046bbd3
    JMP 0x0046bbe2                      ; 0046bbda
        ;   XREF to: 0046bbe2 (UNCONDITIONAL_JUMP)  ; LAB_0046bbe2
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046bbdc
        ;   Label: LAB_0046bbdc
    INC dword ptr [EBP + -0x4c]         ; 0046bbdf
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046bbe2
        ;   Label: LAB_0046bbe2
    CMP EAX,dword ptr [0x01e8d260]      ; 0046bbe5 | g_TextureProcessedCount
    JGE 0x0046c165                      ; 0046bbeb
        ;   XREF to: 0046c165 (CONDITIONAL_JUMP)  ; LAB_0046c165
    CMP dword ptr [0x01eb1484],0x0      ; 0046bbf1 | g_TextureManagerMode
    JZ 0x0046bc25                       ; 0046bbf8
        ;   XREF to: 0046bc25 (CONDITIONAL_JUMP)  ; LAB_0046bc25
    MOV EAX,0x61d4b1                    ; 0046bbfa | = "rb"
    PUSH EAX                            ; 0046bbff | = "rb"
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bc00
    MOV EDX,0x1e8d264                   ; 0046bc07 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bc0c
    PUSH EAX                            ; 0046bc0e
    MOV EAX,0x61d4b4                    ; 0046bc0f | = "art"
    PUSH EAX                            ; 0046bc14 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046bc15
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046bc1a
    MOV dword ptr [EBP + 0xfffff7c0],EAX ; 0046bc1d
    JMP 0x0046bc55                      ; 0046bc23
        ;   XREF to: 0046bc55 (UNCONDITIONAL_JUMP)  ; LAB_0046bc55
    PUSH 0x28f8                         ; 0046bc25
        ;   Label: LAB_0046bc25
    MOV EAX,0x61d4b8                    ; 0046bc2a | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046bc2f | = "..\\shape\\design.c"
    MOV EAX,0x61d4ca                    ; 0046bc30 | = "rb"
    PUSH EAX                            ; 0046bc35 | = "rb"
    PUSH 0x0                            ; 0046bc36
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bc38
    MOV EAX,0x1e8d264                   ; 0046bc3f | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bc44
    PUSH EAX                            ; 0046bc46
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0046bc47
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0046bc4c
    MOV dword ptr [EBP + 0xfffff7c0],EAX ; 0046bc4f
    CMP dword ptr [EBP + 0xfffff7c0],0x0 ; 0046bc55
        ;   Label: LAB_0046bc55
    JNZ 0x0046bca5                      ; 0046bc5c
        ;   XREF to: 0046bca5 (CONDITIONAL_JUMP)  ; LAB_0046bca5
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bc5e
    MOV EDX,0x1e8d264                   ; 0046bc65 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bc6a
    PUSH EAX                            ; 0046bc6c
    MOV EAX,0x61d4cd                    ; 0046bc6d | = "Can't open %s"
    PUSH EAX                            ; 0046bc72 | = "Can't open %s"
    LEA EAX,[EBP + 0xfffff694]          ; 0046bc73
    PUSH EAX                            ; 0046bc79
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046bc7a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046bc7f
    MOV dword ptr [0x02f0ca48],0x61d4db ; 0046bc82 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x28fd   ; 0046bc8c | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffff694]          ; 0046bc96
    PUSH EAX                            ; 0046bc9c
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046bc9d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046bca2
    PUSH 0x0                            ; 0046bca5
        ;   Label: LAB_0046bca5
    PUSH 0xc                            ; 0046bca7
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bca9
    PUSH EAX                            ; 0046bcaf
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0046bcb0
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0046bcb5
    MOV dword ptr [EBP + -0x64],0x0     ; 0046bcb8
    MOV dword ptr [EBP + -0x50],0x0     ; 0046bcbf
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bcc6
    PUSH EAX                            ; 0046bccc
    PUSH 0x1                            ; 0046bccd
    PUSH 0x2                            ; 0046bccf
    LEA EAX,[EBP + -0x64]               ; 0046bcd1
    PUSH EAX                            ; 0046bcd4
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0046bcd5
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046bcda
    CMP EAX,0x1                         ; 0046bcdd
    JZ 0x0046bd43                       ; 0046bce0
        ;   XREF to: 0046bd43 (CONDITIONAL_JUMP)  ; LAB_0046bd43
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bce2
    MOV EDX,0x1e8d264                   ; 0046bce9 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bcee
    PUSH EAX                            ; 0046bcf0
    MOV EAX,0x61d4ed                    ; 0046bcf1 | = "Unable to read file (%s)."
    PUSH EAX                            ; 0046bcf6 | = "Unable to read file (%s)."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bcf7
    PUSH EAX                            ; 0046bcfd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046bcfe
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046bd03
    PUSH 0x2905                         ; 0046bd06
    MOV EAX,0x61d507                    ; 0046bd0b | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046bd10 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bd11
    PUSH EAX                            ; 0046bd17
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046bd18
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046bd1d
    MOV dword ptr [0x02f0ca48],0x61d519 ; 0046bd20 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2906   ; 0046bd2a | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bd34
    PUSH EAX                            ; 0046bd3a
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046bd3b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046bd40
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bd43
        ;   Label: LAB_0046bd43
    PUSH EAX                            ; 0046bd49
    PUSH 0x1                            ; 0046bd4a
    PUSH 0x2                            ; 0046bd4c
    LEA EAX,[EBP + -0x50]               ; 0046bd4e
    PUSH EAX                            ; 0046bd51
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0046bd52
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046bd57
    CMP EAX,0x1                         ; 0046bd5a
    JZ 0x0046bdc0                       ; 0046bd5d
        ;   XREF to: 0046bdc0 (CONDITIONAL_JUMP)  ; LAB_0046bdc0
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bd5f
    MOV EDX,0x1e8d264                   ; 0046bd66 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bd6b
    PUSH EAX                            ; 0046bd6d
    MOV EAX,0x61d52b                    ; 0046bd6e | = "Unable to read file (%s)."
    PUSH EAX                            ; 0046bd73 | = "Unable to read file (%s)."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bd74
    PUSH EAX                            ; 0046bd7a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046bd7b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046bd80
    PUSH 0x290a                         ; 0046bd83
    MOV EAX,0x61d545                    ; 0046bd88 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046bd8d | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bd8e
    PUSH EAX                            ; 0046bd94
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046bd95
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046bd9a
    MOV dword ptr [0x02f0ca48],0x61d557 ; 0046bd9d | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x290b   ; 0046bda7 | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bdb1
    PUSH EAX                            ; 0046bdb7
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046bdb8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046bdbd
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bdc0
        ;   Label: LAB_0046bdc0
    PUSH EAX                            ; 0046bdc6
    PUSH 0x1                            ; 0046bdc7
    PUSH 0x1                            ; 0046bdc9
    LEA EAX,[EBP + 0xfffff7c4]          ; 0046bdcb
    PUSH EAX                            ; 0046bdd1
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0046bdd2
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046bdd7
    CMP EAX,0x1                         ; 0046bdda
    JZ 0x0046be40                       ; 0046bddd
        ;   XREF to: 0046be40 (CONDITIONAL_JUMP)  ; LAB_0046be40
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bddf
    MOV EDX,0x1e8d264                   ; 0046bde6 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046bdeb
    PUSH EAX                            ; 0046bded
    MOV EAX,0x61d569                    ; 0046bdee | = "Unable to read file (%s)."
    PUSH EAX                            ; 0046bdf3 | = "Unable to read file (%s)."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bdf4
    PUSH EAX                            ; 0046bdfa
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046bdfb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046be00
    PUSH 0x2912                         ; 0046be03
    MOV EAX,0x61d583                    ; 0046be08 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046be0d | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046be0e
    PUSH EAX                            ; 0046be14
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046be15
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046be1a
    MOV dword ptr [0x02f0ca48],0x61d595 ; 0046be1d | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2913   ; 0046be27 | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffebc]          ; 0046be31
    PUSH EAX                            ; 0046be37
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046be38
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046be3d
    XOR EAX,EAX                         ; 0046be40
        ;   Label: LAB_0046be40
    MOV AL,byte ptr [EBP + 0xfffff7c4]  ; 0046be42
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046be48
    SHL EDX,0x2                         ; 0046be4b
    MOV dword ptr [EDX + EBP*0x1 + 0xfffff7c8],EAX ; 0046be4e
    CMP byte ptr [EBP + 0xfffff7c4],0x18 ; 0046be55
    JZ 0x0046be67                       ; 0046be5c
        ;   XREF to: 0046be67 (CONDITIONAL_JUMP)  ; LAB_0046be67
    CMP byte ptr [EBP + 0xfffff7c4],0x20 ; 0046be5e
    JNZ 0x0046be6c                      ; 0046be65
        ;   XREF to: 0046be6c (CONDITIONAL_JUMP)  ; LAB_0046be6c
    JMP 0x0046bf08                      ; 0046be67
        ;   XREF to: 0046bf08 (UNCONDITIONAL_JUMP)  ; LAB_0046bf08
        ;   Label: LAB_0046be67
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046be6c
        ;   Label: LAB_0046be6c
    MOV EDX,0x1e8d264                   ; 0046be73 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046be78
    PUSH EAX                            ; 0046be7a
    MOV EAX,0x61d5a7                    ; 0046be7b | = "ERROR: Not a 24- or 32-bit targa file..."
    PUSH EAX                            ; 0046be80 | = "ERROR: Not a 24- or 32-bit targa file..."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046be81
    PUSH EAX                            ; 0046be87
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046be88
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046be8d
    CMP dword ptr [EBP + 0x14],0x0      ; 0046be90
    JZ 0x0046bebb                       ; 0046be94
        ;   XREF to: 0046bebb (CONDITIONAL_JUMP)  ; LAB_0046bebb
    MOV dword ptr [0x02f0ca48],0x61d5d2 ; 0046be96 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2919   ; 0046bea0 | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffebc]          ; 0046beaa
    PUSH EAX                            ; 0046beb0
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046beb1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046beb6
    JMP 0x0046bf08                      ; 0046beb9
        ;   XREF to: 0046bf08 (UNCONDITIONAL_JUMP)  ; LAB_0046bf08
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046bebb
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046bebb
    PUSH 0x0                            ; 0046bec0
    PUSH 0x0                            ; 0046bec2
    LEA EAX,[EBP + 0xfffffebc]          ; 0046bec4
    PUSH EAX                            ; 0046beca
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046becb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046bed0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046bed3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046bed8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    PUSH 0x291f                         ; 0046bedd
    MOV EAX,0x61d5e4                    ; 0046bee2 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046bee7 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bee8
    PUSH EAX                            ; 0046beee
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046beef
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046bef4
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046bef7
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046befc
    JMP 0x0046dfa8                      ; 0046bf03
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    PUSH 0x2925                         ; 0046bf08
        ;   Label: LAB_0046bf08
    MOV EAX,0x61d5f6                    ; 0046bf0d | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046bf12 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff7c0] ; 0046bf13
    PUSH EAX                            ; 0046bf19
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046bf1a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046bf1f
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bf22
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046bf29
    MOV dword ptr [EDX + 0x1e8d464],EAX ; 0046bf2c | DAT_01e8d464
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bf32
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046bf39
    MOV dword ptr [EDX + 0x1e8d468],EAX ; 0046bf3c | DAT_01e8d468
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bf42
    MOV EAX,dword ptr [EAX + 0x1e8d4a4] ; 0046bf49 | DAT_01e8d4a4
    XOR AX,AX                           ; 0046bf4f
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bf52
    MOV dword ptr [EDX + 0x1e8d4a4],EAX ; 0046bf59 | DAT_01e8d4a4
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bf5f
    MOV EAX,dword ptr [EAX + 0x1e8d4a8] ; 0046bf66 | DAT_01e8d4a8
    XOR AX,AX                           ; 0046bf6c
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bf6f
    MOV dword ptr [EDX + 0x1e8d4a8],EAX ; 0046bf76 | DAT_01e8d4a8
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bf7c
    MOV EAX,dword ptr [EAX + 0x1e8d4ac] ; 0046bf83 | DAT_01e8d4ac
    ADD EAX,0xffff                      ; 0046bf89
    XOR AX,AX                           ; 0046bf8e
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bf91
    MOV dword ptr [EDX + 0x1e8d4ac],EAX ; 0046bf98 | DAT_01e8d4ac
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bf9e
    MOV EAX,dword ptr [EAX + 0x1e8d4b0] ; 0046bfa5 | DAT_01e8d4b0
    ADD EAX,0xffff                      ; 0046bfab
    XOR AX,AX                           ; 0046bfb0
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bfb3
    MOV dword ptr [EDX + 0x1e8d4b0],EAX ; 0046bfba | DAT_01e8d4b0
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bfc0
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bfc7
    MOV EAX,dword ptr [EAX + 0x1e8d4ac] ; 0046bfce | DAT_01e8d4ac
    CMP EAX,dword ptr [EDX + 0x1e8d4a4] ; 0046bfd4 | DAT_01e8d4a4
    JG 0x0046bffb                       ; 0046bfda
        ;   XREF to: 0046bffb (CONDITIONAL_JUMP)  ; LAB_0046bffb
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bfdc
    MOV EAX,dword ptr [EAX + 0x1e8d4a4] ; 0046bfe3 | DAT_01e8d4a4
    ADD EAX,0x10000                     ; 0046bfe9
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046bfee
    MOV dword ptr [EDX + 0x1e8d4ac],EAX ; 0046bff5 | DAT_01e8d4ac
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046bffb
        ;   Label: LAB_0046bffb
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c002
    MOV EAX,dword ptr [EAX + 0x1e8d4b0] ; 0046c009 | DAT_01e8d4b0
    CMP EAX,dword ptr [EDX + 0x1e8d4a8] ; 0046c00f | DAT_01e8d4a8
    JG 0x0046c036                       ; 0046c015
        ;   XREF to: 0046c036 (CONDITIONAL_JUMP)  ; LAB_0046c036
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c017
    MOV EAX,dword ptr [EAX + 0x1e8d4a8] ; 0046c01e | DAT_01e8d4a8
    ADD EAX,0x10000                     ; 0046c024
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c029
    MOV dword ptr [EDX + 0x1e8d4b0],EAX ; 0046c030 | DAT_01e8d4b0
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c036
        ;   Label: LAB_0046c036
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c03d
    MOV EAX,dword ptr [EAX + 0x1e8d4ac] ; 0046c044 | DAT_01e8d4ac
    SUB EAX,dword ptr [EDX + 0x1e8d4a4] ; 0046c04a | DAT_01e8d4a4
    MOV dword ptr [EBP + 0xfffff690],EAX ; 0046c050
    FILD dword ptr [EBP + 0xfffff690]   ; 0046c056
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c05c
    FILD dword ptr [EAX + 0x1e8d464]    ; 0046c063 | DAT_01e8d464
    FMULP                               ; 0046c069
    FMUL double ptr [0x0061d60e]        ; 0046c06b | g_UVCoordinateNormalizationFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046c071
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffff690]  ; 0046c076
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c07c
    MOV EAX,dword ptr [EBP + 0xfffff690] ; 0046c083
    MOV dword ptr [EDX + 0x1e8d46c],EAX ; 0046c089 | DAT_01e8d46c
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c08f
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c096
    MOV EAX,dword ptr [EAX + 0x1e8d4b0] ; 0046c09d | DAT_01e8d4b0
    SUB EAX,dword ptr [EDX + 0x1e8d4a8] ; 0046c0a3 | DAT_01e8d4a8
    MOV dword ptr [EBP + 0xfffff690],EAX ; 0046c0a9
    FILD dword ptr [EBP + 0xfffff690]   ; 0046c0af
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c0b5
    FILD dword ptr [EAX + 0x1e8d468]    ; 0046c0bc | DAT_01e8d468
    FMULP                               ; 0046c0c2
    FMUL double ptr [0x0061d60e]        ; 0046c0c4 | g_UVCoordinateNormalizationFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046c0ca
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + 0xfffff690]  ; 0046c0cf
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c0d5
    MOV EAX,dword ptr [EBP + 0xfffff690] ; 0046c0dc
    MOV dword ptr [EDX + 0x1e8d470],EAX ; 0046c0e2 | DAT_01e8d470
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c0e8
    CMP dword ptr [EAX + 0x1e8d46c],0x1 ; 0046c0ef | DAT_01e8d46c
    JGE 0x0046c109                      ; 0046c0f6
        ;   XREF to: 0046c109 (CONDITIONAL_JUMP)  ; LAB_0046c109
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c0f8
    MOV dword ptr [EAX + 0x1e8d46c],0x1 ; 0046c0ff | DAT_01e8d46c
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c109
        ;   Label: LAB_0046c109
    CMP dword ptr [EAX + 0x1e8d470],0x1 ; 0046c110 | DAT_01e8d470
    JGE 0x0046c12a                      ; 0046c117
        ;   XREF to: 0046c12a (CONDITIONAL_JUMP)  ; LAB_0046c12a
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c119
    MOV dword ptr [EAX + 0x1e8d470],0x1 ; 0046c120 | DAT_01e8d470
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c12a
        ;   Label: LAB_0046c12a
    MOV dword ptr [EAX + 0x1e8d49c],0x0 ; 0046c131 | DAT_01e8d49c
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046c13b
    IMUL EAX,dword ptr [EBP + -0x50]    ; 0046c13e
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c142
    MOV dword ptr [EDX + 0x1e8d4a0],EAX ; 0046c149 | DAT_01e8d4a0
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046c14f
    MOV dword ptr [EAX + 0x1e8d478],0x0 ; 0046c156 | DAT_01e8d478
    JMP 0x0046bbdc                      ; 0046c160
        ;   XREF to: 0046bbdc (UNCONDITIONAL_JUMP)  ; LAB_0046bbdc
    CMP dword ptr [EBP + 0x14],0x0      ; 0046c165
        ;   Label: LAB_0046c165
    JZ 0x0046c1cc                       ; 0046c169
        ;   XREF to: 0046c1cc (CONDITIONAL_JUMP)  ; LAB_0046c1cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c16b
    MOV EAX,dword ptr [EAX + 0x50]      ; 0046c16e
    MOV [0x01eb1760],EAX                ; 0046c171 | g_TextureAtlasDimension
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c176
    MOV EAX,dword ptr [EAX + 0x50]      ; 0046c179
    MOV dword ptr [EBP + -0x58],EAX     ; 0046c17c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c17f
    MOV EAX,dword ptr [EAX + 0x54]      ; 0046c182
    MOV dword ptr [EBP + -0x54],EAX     ; 0046c185
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c188
    MOV EAX,dword ptr [EAX + 0x58]      ; 0046c18b
    MOV dword ptr [EBP + -0xc],EAX      ; 0046c18e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c191
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0046c194
    MOV dword ptr [EBP + -0x8],EAX      ; 0046c197
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c19a
    MOV EAX,dword ptr [EAX + 0x60]      ; 0046c19d
    MOV dword ptr [EBP + -0x48],EAX     ; 0046c1a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c1a3
    MOV EAX,dword ptr [EAX + 0x64]      ; 0046c1a6
    MOV dword ptr [EBP + -0x44],EAX     ; 0046c1a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c1ac
    MOV EAX,dword ptr [EAX + 0x68]      ; 0046c1af
    MOV dword ptr [EBP + -0x40],EAX     ; 0046c1b2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c1b5
    MOV EAX,dword ptr [EAX + 0x6c]      ; 0046c1b8
    MOV dword ptr [EBP + -0x3c],EAX     ; 0046c1bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046c1be
    MOV EAX,dword ptr [EAX + 0x70]      ; 0046c1c1
    MOV dword ptr [EBP + -0x38],EAX     ; 0046c1c4
    JMP 0x0046c5b7                      ; 0046c1c7
        ;   XREF to: 0046c5b7 (UNCONDITIONAL_JUMP)  ; LAB_0046c5b7
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c1cc
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046c1cc
    MOV dword ptr [EBP + -0x4c],0x0     ; 0046c1d1
    MOV ECX,0x61d616                    ; 0046c1d8 | = "Enter number of maps [1] : "
        ;   Label: LAB_0046c1d8
    PUSH ECX                            ; 0046c1dd | = "Enter number of maps [1] : "
    IMUL ECX,dword ptr [EBP + -0x4c],0xb ; 0046c1de
    PUSH ECX                            ; 0046c1e2
    PUSH 0x0                            ; 0046c1e3
    PUSH 0x4f                           ; 0046c1e5
    LEA ECX,[EBP + 0xfffffebc]          ; 0046c1e7
    PUSH ECX                            ; 0046c1ed
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c1ee
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c1f3
    MOV dword ptr [EBP + -0x48],0x1     ; 0046c1f6
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c1fd
    SUB ECX,ECX                         ; 0046c203
    DEC ECX                             ; 0046c205
    XOR EAX,EAX                         ; 0046c206
    SCASB.REPNE ES:EDI                  ; 0046c208
    NOT ECX                             ; 0046c20a
    DEC ECX                             ; 0046c20c
    TEST ECX,ECX                        ; 0046c20d
    JZ 0x0046c223                       ; 0046c20f
        ;   XREF to: 0046c223 (CONDITIONAL_JUMP)  ; LAB_0046c223
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c211
    PUSH EAX                            ; 0046c217
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c218
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c21d
    MOV dword ptr [EBP + -0x48],EAX     ; 0046c220
    CMP dword ptr [EBP + -0x48],0x9     ; 0046c223
        ;   Label: LAB_0046c223
    JLE 0x0046c25e                      ; 0046c227
        ;   XREF to: 0046c25e (CONDITIONAL_JUMP)  ; LAB_0046c25e
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c229
    ADD EAX,0x2                         ; 0046c22c
    IMUL EAX,EAX,0xb                    ; 0046c22f
    PUSH EAX                            ; 0046c232
    PUSH 0x0                            ; 0046c233
    MOV EAX,0x61d632                    ; 0046c235 | = "Naming convention not established!!  ..."
    PUSH EAX                            ; 0046c23a | = "Naming convention not established!!  ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c23b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c240
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c243
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c248
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046c24d
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046c252
    JMP 0x0046dfa8                      ; 0046c259
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    CMP dword ptr [EBP + -0x48],0x1     ; 0046c25e
        ;   Label: LAB_0046c25e
    JL 0x0046c266                       ; 0046c262
        ;   XREF to: 0046c266 (CONDITIONAL_JUMP)  ; LAB_0046c266
    JMP 0x0046c2ae                      ; 0046c264
        ;   XREF to: 0046c2ae (UNCONDITIONAL_JUMP)  ; LAB_0046c2ae
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c266
        ;   Label: LAB_0046c266
    ADD EAX,0x2                         ; 0046c269
    IMUL EAX,EAX,0xb                    ; 0046c26c
    PUSH EAX                            ; 0046c26f
    PUSH 0x0                            ; 0046c270
    MOV EAX,0x61d667                    ; 0046c272 | = "Number of maps must be a positive num..."
    PUSH EAX                            ; 0046c277 | = "Number of maps must be a positive num..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c278
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c27d
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c280
    ADD EAX,0x4                         ; 0046c283
    IMUL EAX,EAX,0xb                    ; 0046c286
    PUSH EAX                            ; 0046c289
    PUSH 0x0                            ; 0046c28a
    MOV EAX,0x61d691                    ; 0046c28c | = "Hit a key..."
    PUSH EAX                            ; 0046c291 | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c292
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c297
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c29a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c29f
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c2a4
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    JMP 0x0046c1d8                      ; 0046c2a9
        ;   XREF to: 0046c1d8 (UNCONDITIONAL_JUMP)  ; LAB_0046c1d8
    MOV ECX,0x61d69e                    ; 0046c2ae | = "Enter padding size [5] : "
        ;   Label: LAB_0046c2ae
    PUSH ECX                            ; 0046c2b3 | = "Enter padding size [5] : "
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c2b4
    IMUL ECX,dword ptr [EBP + -0x4c],0xb ; 0046c2b8
    PUSH ECX                            ; 0046c2bc
    PUSH 0x0                            ; 0046c2bd
    PUSH 0x14                           ; 0046c2bf
    LEA ECX,[EBP + 0xfffffebc]          ; 0046c2c1
    PUSH ECX                            ; 0046c2c7
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c2c8
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c2cd
    MOV dword ptr [EBP + -0x54],0x5     ; 0046c2d0
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c2d7
    SUB ECX,ECX                         ; 0046c2dd
    DEC ECX                             ; 0046c2df
    XOR EAX,EAX                         ; 0046c2e0
    SCASB.REPNE ES:EDI                  ; 0046c2e2
    NOT ECX                             ; 0046c2e4
    DEC ECX                             ; 0046c2e6
    TEST ECX,ECX                        ; 0046c2e7
    JZ 0x0046c2fd                       ; 0046c2e9
        ;   XREF to: 0046c2fd (CONDITIONAL_JUMP)  ; LAB_0046c2fd
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c2eb
    PUSH EAX                            ; 0046c2f1
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c2f2
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c2f7
    MOV dword ptr [EBP + -0x54],EAX     ; 0046c2fa
    MOV EAX,0x61d6b8                    ; 0046c2fd | = "Fill gaps? [y] : "
        ;   Label: LAB_0046c2fd
    PUSH EAX                            ; 0046c302 | = "Fill gaps? [y] : "
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c303
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046c307
    PUSH EAX                            ; 0046c30b
    PUSH 0x0                            ; 0046c30c
    PUSH 0x14                           ; 0046c30e
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c310
    PUSH EAX                            ; 0046c316
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c317
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c31c
    CMP byte ptr [EBP + 0xfffffebc],0x0 ; 0046c31f
    JZ 0x0046c33e                       ; 0046c326
        ;   XREF to: 0046c33e (CONDITIONAL_JUMP)  ; LAB_0046c33e
    XOR EAX,EAX                         ; 0046c328
    MOV AL,byte ptr [EBP + 0xfffffebc]  ; 0046c32a
    PUSH EAX                            ; 0046c330
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0046c331
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046c336
    CMP EAX,0x59                        ; 0046c339
    JNZ 0x0046c347                      ; 0046c33c
        ;   XREF to: 0046c347 (CONDITIONAL_JUMP)  ; LAB_0046c347
    MOV dword ptr [EBP + -0x44],0x1     ; 0046c33e
        ;   Label: LAB_0046c33e
    JMP 0x0046c34e                      ; 0046c345
        ;   XREF to: 0046c34e (UNCONDITIONAL_JUMP)  ; LAB_0046c34e
    MOV dword ptr [EBP + -0x44],0x0     ; 0046c347
        ;   Label: LAB_0046c347
    MOV ECX,0x61d6ca                    ; 0046c34e | = "Enter output texture map width [256] : "
        ;   Label: LAB_0046c34e
    PUSH ECX                            ; 0046c353 | = "Enter output texture map width [256] : "
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c354
    IMUL ECX,dword ptr [EBP + -0x4c],0xb ; 0046c358
    PUSH ECX                            ; 0046c35c
    PUSH 0x0                            ; 0046c35d
    PUSH 0x4f                           ; 0046c35f
    LEA ECX,[EBP + 0xfffffebc]          ; 0046c361
    PUSH ECX                            ; 0046c367
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c368
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c36d
    MOV dword ptr [0x01eb1760],0x100    ; 0046c370 | g_TextureAtlasDimension
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c37a
    SUB ECX,ECX                         ; 0046c380
    DEC ECX                             ; 0046c382
    XOR EAX,EAX                         ; 0046c383
    SCASB.REPNE ES:EDI                  ; 0046c385
    NOT ECX                             ; 0046c387
    DEC ECX                             ; 0046c389
    TEST ECX,ECX                        ; 0046c38a
    JZ 0x0046c3a2                       ; 0046c38c
        ;   XREF to: 0046c3a2 (CONDITIONAL_JUMP)  ; LAB_0046c3a2
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c38e
    PUSH EAX                            ; 0046c394
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c395
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c39a
    MOV [0x01eb1760],EAX                ; 0046c39d | g_TextureAtlasDimension
    CMP dword ptr [0x01eb1760],0x200    ; 0046c3a2 | g_TextureAtlasDimension
        ;   Label: LAB_0046c3a2
    JZ 0x0046c3ba                       ; 0046c3ac
        ;   XREF to: 0046c3ba (CONDITIONAL_JUMP)  ; LAB_0046c3ba
    CMP dword ptr [0x01eb1760],0x100    ; 0046c3ae | g_TextureAtlasDimension
    JNZ 0x0046c3bc                      ; 0046c3b8
        ;   XREF to: 0046c3bc (CONDITIONAL_JUMP)  ; LAB_0046c3bc
    JMP 0x0046c3c8                      ; 0046c3ba
        ;   XREF to: 0046c3c8 (UNCONDITIONAL_JUMP)  ; LAB_0046c3c8
        ;   Label: LAB_0046c3ba
    CMP dword ptr [0x01eb1760],0x80     ; 0046c3bc | g_TextureAtlasDimension
        ;   Label: LAB_0046c3bc
    JNZ 0x0046c3ca                      ; 0046c3c6
        ;   XREF to: 0046c3ca (CONDITIONAL_JUMP)  ; LAB_0046c3ca
    JMP 0x0046c3d3                      ; 0046c3c8
        ;   XREF to: 0046c3d3 (UNCONDITIONAL_JUMP)  ; LAB_0046c3d3
        ;   Label: LAB_0046c3c8
    CMP dword ptr [0x01eb1760],0x40     ; 0046c3ca | g_TextureAtlasDimension
        ;   Label: LAB_0046c3ca
    JNZ 0x0046c3d5                      ; 0046c3d1
        ;   XREF to: 0046c3d5 (CONDITIONAL_JUMP)  ; LAB_0046c3d5
    JMP 0x0046c3de                      ; 0046c3d3
        ;   XREF to: 0046c3de (UNCONDITIONAL_JUMP)  ; LAB_0046c3de
        ;   Label: LAB_0046c3d3
    CMP dword ptr [0x01eb1760],0x20     ; 0046c3d5 | g_TextureAtlasDimension
        ;   Label: LAB_0046c3d5
    JNZ 0x0046c3e0                      ; 0046c3dc
        ;   XREF to: 0046c3e0 (CONDITIONAL_JUMP)  ; LAB_0046c3e0
    JMP 0x0046c428                      ; 0046c3de
        ;   XREF to: 0046c428 (UNCONDITIONAL_JUMP)  ; LAB_0046c428
        ;   Label: LAB_0046c3de
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c3e0
        ;   Label: LAB_0046c3e0
    ADD EAX,0x2                         ; 0046c3e3
    IMUL EAX,EAX,0xb                    ; 0046c3e6
    PUSH EAX                            ; 0046c3e9
    PUSH 0x0                            ; 0046c3ea
    MOV EAX,0x61d6f2                    ; 0046c3ec | = "Texture map width must be 512, 256, 1..."
    PUSH EAX                            ; 0046c3f1 | = "Texture map width must be 512, 256, 1..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c3f2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c3f7
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c3fa
    ADD EAX,0x4                         ; 0046c3fd
    IMUL EAX,EAX,0xb                    ; 0046c400
    PUSH EAX                            ; 0046c403
    PUSH 0x0                            ; 0046c404
    MOV EAX,0x61d726                    ; 0046c406 | = "Hit a key..."
    PUSH EAX                            ; 0046c40b | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c40c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c411
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c414
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c419
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c41e
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    JMP 0x0046c34e                      ; 0046c423
        ;   XREF to: 0046c34e (UNCONDITIONAL_JUMP)  ; LAB_0046c34e
    PUSH dword ptr [0x01eb1760]         ; 0046c428 | g_TextureAtlasDimension
        ;   Label: LAB_0046c428
    MOV EAX,0x61d733                    ; 0046c42e | = "Enter passed texture map width [%d] : "
    PUSH EAX                            ; 0046c433 | = "Enter passed texture map width [%d] : "
    LEA EAX,[EBP + 0xfffff640]          ; 0046c434
    PUSH EAX                            ; 0046c43a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c43b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046c440
    LEA EAX,[EBP + 0xfffff640]          ; 0046c443
    PUSH EAX                            ; 0046c449
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c44a
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046c44e
    PUSH EAX                            ; 0046c452
    PUSH 0x0                            ; 0046c453
    PUSH 0x4f                           ; 0046c455
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c457
    PUSH EAX                            ; 0046c45d
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c45e
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c463
    MOV EAX,[0x01eb1760]                ; 0046c466 | g_TextureAtlasDimension
    MOV dword ptr [EBP + -0x58],EAX     ; 0046c46b
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c46e
    SUB ECX,ECX                         ; 0046c474
    DEC ECX                             ; 0046c476
    XOR EAX,EAX                         ; 0046c477
    SCASB.REPNE ES:EDI                  ; 0046c479
    NOT ECX                             ; 0046c47b
    DEC ECX                             ; 0046c47d
    TEST ECX,ECX                        ; 0046c47e
    JZ 0x0046c494                       ; 0046c480
        ;   XREF to: 0046c494 (CONDITIONAL_JUMP)  ; LAB_0046c494
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c482
    PUSH EAX                            ; 0046c488
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c489
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c48e
    MOV dword ptr [EBP + -0x58],EAX     ; 0046c491
    CMP dword ptr [EBP + -0x58],0x200   ; 0046c494
        ;   Label: LAB_0046c494
    JZ 0x0046c4a6                       ; 0046c49b
        ;   XREF to: 0046c4a6 (CONDITIONAL_JUMP)  ; LAB_0046c4a6
    CMP dword ptr [EBP + -0x58],0x100   ; 0046c49d
    JNZ 0x0046c4a8                      ; 0046c4a4
        ;   XREF to: 0046c4a8 (CONDITIONAL_JUMP)  ; LAB_0046c4a8
    JMP 0x0046c4b1                      ; 0046c4a6
        ;   XREF to: 0046c4b1 (UNCONDITIONAL_JUMP)  ; LAB_0046c4b1
        ;   Label: LAB_0046c4a6
    CMP dword ptr [EBP + -0x58],0x80    ; 0046c4a8
        ;   Label: LAB_0046c4a8
    JNZ 0x0046c4b3                      ; 0046c4af
        ;   XREF to: 0046c4b3 (CONDITIONAL_JUMP)  ; LAB_0046c4b3
    JMP 0x0046c4b9                      ; 0046c4b1
        ;   XREF to: 0046c4b9 (UNCONDITIONAL_JUMP)  ; LAB_0046c4b9
        ;   Label: LAB_0046c4b1
    CMP dword ptr [EBP + -0x58],0x40    ; 0046c4b3
        ;   Label: LAB_0046c4b3
    JNZ 0x0046c4bb                      ; 0046c4b7
        ;   XREF to: 0046c4bb (CONDITIONAL_JUMP)  ; LAB_0046c4bb
    JMP 0x0046c4c1                      ; 0046c4b9
        ;   XREF to: 0046c4c1 (UNCONDITIONAL_JUMP)  ; LAB_0046c4c1
        ;   Label: LAB_0046c4b9
    CMP dword ptr [EBP + -0x58],0x20    ; 0046c4bb
        ;   Label: LAB_0046c4bb
    JNZ 0x0046c4c3                      ; 0046c4bf
        ;   XREF to: 0046c4c3 (CONDITIONAL_JUMP)  ; LAB_0046c4c3
    JMP 0x0046c50b                      ; 0046c4c1
        ;   XREF to: 0046c50b (UNCONDITIONAL_JUMP)  ; LAB_0046c50b
        ;   Label: LAB_0046c4c1
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c4c3
        ;   Label: LAB_0046c4c3
    ADD EAX,0x2                         ; 0046c4c6
    IMUL EAX,EAX,0xb                    ; 0046c4c9
    PUSH EAX                            ; 0046c4cc
    PUSH 0x0                            ; 0046c4cd
    MOV EAX,0x61d75a                    ; 0046c4cf | = "Passed texture map width must be 512,..."
    PUSH EAX                            ; 0046c4d4 | = "Passed texture map width must be 512,..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c4d5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c4da
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c4dd
    ADD EAX,0x4                         ; 0046c4e0
    IMUL EAX,EAX,0xb                    ; 0046c4e3
    PUSH EAX                            ; 0046c4e6
    PUSH 0x0                            ; 0046c4e7
    MOV EAX,0x61d795                    ; 0046c4e9 | = "Hit a key..."
    PUSH EAX                            ; 0046c4ee | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c4ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c4f4
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c4f7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c4fc
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c501
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    JMP 0x0046c428                      ; 0046c506
        ;   XREF to: 0046c428 (UNCONDITIONAL_JUMP)  ; LAB_0046c428
    MOV ECX,0x61d7a2                    ; 0046c50b | = "Enter acceptable coverage [99] : "
        ;   Label: LAB_0046c50b
    PUSH ECX                            ; 0046c510 | = "Enter acceptable coverage [99] : "
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c511
    IMUL ECX,dword ptr [EBP + -0x4c],0xb ; 0046c515
    PUSH ECX                            ; 0046c519
    PUSH 0x0                            ; 0046c51a
    PUSH 0x14                           ; 0046c51c
    LEA ECX,[EBP + 0xfffffebc]          ; 0046c51e
    PUSH ECX                            ; 0046c524
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c525
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c52a
    MOV dword ptr [EBP + -0xc],0x63     ; 0046c52d
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c534
    SUB ECX,ECX                         ; 0046c53a
    DEC ECX                             ; 0046c53c
    XOR EAX,EAX                         ; 0046c53d
    SCASB.REPNE ES:EDI                  ; 0046c53f
    NOT ECX                             ; 0046c541
    DEC ECX                             ; 0046c543
    TEST ECX,ECX                        ; 0046c544
    JZ 0x0046c55a                       ; 0046c546
        ;   XREF to: 0046c55a (CONDITIONAL_JUMP)  ; LAB_0046c55a
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c548
    PUSH EAX                            ; 0046c54e
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c54f
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c554
    MOV dword ptr [EBP + -0xc],EAX      ; 0046c557
    MOV ECX,0x61d7c4                    ; 0046c55a | = "Enter acceptable size [1] : "
        ;   Label: LAB_0046c55a
    PUSH ECX                            ; 0046c55f | = "Enter acceptable size [1] : "
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046c560
    IMUL ECX,dword ptr [EBP + -0x4c],0xb ; 0046c564
    PUSH ECX                            ; 0046c568
    PUSH 0x0                            ; 0046c569
    PUSH 0x14                           ; 0046c56b
    LEA ECX,[EBP + 0xfffffebc]          ; 0046c56d
    PUSH ECX                            ; 0046c573
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c574
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c579
    MOV dword ptr [EBP + -0x8],0x1      ; 0046c57c
    LEA EDI,[EBP + 0xfffffebc]          ; 0046c583
    SUB ECX,ECX                         ; 0046c589
    DEC ECX                             ; 0046c58b
    XOR EAX,EAX                         ; 0046c58c
    SCASB.REPNE ES:EDI                  ; 0046c58e
    NOT ECX                             ; 0046c590
    DEC ECX                             ; 0046c592
    TEST ECX,ECX                        ; 0046c593
    JZ 0x0046c5a9                       ; 0046c595
        ;   XREF to: 0046c5a9 (CONDITIONAL_JUMP)  ; LAB_0046c5a9
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c597
    PUSH EAX                            ; 0046c59d
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0046c59e
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0046c5a3
    MOV dword ptr [EBP + -0x8],EAX      ; 0046c5a6
    MOV dword ptr [EBP + -0x40],0x1     ; 0046c5a9
        ;   Label: LAB_0046c5a9
    MOV dword ptr [EBP + -0x38],0x0     ; 0046c5b0
    CMP dword ptr [EBP + -0x48],0x9     ; 0046c5b7
        ;   Label: LAB_0046c5b7
    JLE 0x0046c61d                      ; 0046c5bb
        ;   XREF to: 0046c61d (CONDITIONAL_JUMP)  ; LAB_0046c61d
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c5bd
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x9                            ; 0046c5c2
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046c5c4
    PUSH EAX                            ; 0046c5c7
    MOV EAX,0x61d7e1                    ; 0046c5c8 | = "Too many maps (%d > %d)."
    PUSH EAX                            ; 0046c5cd | = "Too many maps (%d > %d)."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c5ce
    PUSH EAX                            ; 0046c5d4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c5d5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046c5da
    PUSH 0x0                            ; 0046c5dd
    PUSH 0x0                            ; 0046c5df
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c5e1
    PUSH EAX                            ; 0046c5e7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c5e8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c5ed
    PUSH 0x16                           ; 0046c5f0
    PUSH 0x0                            ; 0046c5f2
    MOV EAX,0x61d7fa                    ; 0046c5f4 | = "Naming convention not established!!  ..."
    PUSH EAX                            ; 0046c5f9 | = "Naming convention not established!!  ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c5fa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c5ff
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c602
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c607
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046c60c
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046c611
    JMP 0x0046dfa8                      ; 0046c618
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    CMP dword ptr [EBP + -0x48],0x1     ; 0046c61d
        ;   Label: LAB_0046c61d
    JGE 0x0046c66f                      ; 0046c621
        ;   XREF to: 0046c66f (CONDITIONAL_JUMP)  ; LAB_0046c66f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c623
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046c628
    PUSH EAX                            ; 0046c62b
    MOV EAX,0x61d82f                    ; 0046c62c | = "Number of maps must be a positive num..."
    PUSH EAX                            ; 0046c631 | = "Number of maps must be a positive num..."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c632
    PUSH EAX                            ; 0046c638
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c639
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046c63e
    PUSH 0x0                            ; 0046c641
    PUSH 0x0                            ; 0046c643
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c645
    PUSH EAX                            ; 0046c64b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c64c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c651
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c654
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c659
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046c65e
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046c663
    JMP 0x0046dfa8                      ; 0046c66a
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    LEA EDI,[EBP + -0x7c]               ; 0046c66f
        ;   Label: LAB_0046c66f
    MOV ESI,0x66ef30                    ; 0046c672 | = "CramTex II"
    MOVSD ES:EDI,ESI                    ; 0046c677 | = "CramTex II"
    MOVSD ES:EDI,ESI                    ; 0046c678 | s_Tex_II_0066ef34
    MOVSW ES:EDI,ESI                    ; 0046c679 | s_II_0066ef38
    MOVSB ES:EDI,ESI                    ; 0046c67b | s__0066ef3a
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c67c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    LEA EAX,[EBP + -0x7c]               ; 0046c681
    PUSH EAX                            ; 0046c684
    MOV EAX,0x61d862                    ; 0046c685 | = "%s in progress..."
    PUSH EAX                            ; 0046c68a | = "%s in progress..."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c68b
    PUSH EAX                            ; 0046c691
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c692
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046c697
    PUSH 0x0                            ; 0046c69a
    PUSH 0x0                            ; 0046c69c
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c69e
    PUSH EAX                            ; 0046c6a4
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c6a5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c6aa
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c6ad
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0046c6b2
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046c6b7
    MOV EAX,dword ptr [EBP + -0x38]     ; 0046c6ba
    PUSH EAX                            ; 0046c6bd
    MOV EAX,dword ptr [EBP + -0x40]     ; 0046c6be
    PUSH EAX                            ; 0046c6c1
    MOV EAX,dword ptr [EBP + -0x44]     ; 0046c6c2
    PUSH EAX                            ; 0046c6c5
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046c6c6
    PUSH EAX                            ; 0046c6c9
    LEA EAX,[EBP + -0x50]               ; 0046c6ca
    PUSH EAX                            ; 0046c6cd
    LEA EAX,[EBP + -0x64]               ; 0046c6ce
    PUSH EAX                            ; 0046c6d1
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046c6d2
    PUSH EAX                            ; 0046c6d5
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046c6d6
    PUSH EAX                            ; 0046c6d9
    MOV EAX,dword ptr [EBP + -0x54]     ; 0046c6da
    PUSH EAX                            ; 0046c6dd
    MOV EAX,dword ptr [EBP + -0x58]     ; 0046c6de
    PUSH EAX                            ; 0046c6e1
    MOV EAX,0x1e8d264                   ; 0046c6e2 | g_TextureAtlasEntries
    PUSH EAX                            ; 0046c6e7 | g_TextureAtlasEntries
    PUSH dword ptr [0x01e8d260]         ; 0046c6e8 | g_TextureProcessedCount
    CALL shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 ; 0046c6ee
        ;   XREF to: 00444d90 (UNCONDITIONAL_CALL)  ; int shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90(uint texture_count, STextureAtlasEntry * texture_entries, int atlas_width, int atlas_height, ...)
    ADD ESP,0x30                        ; 0046c6f3
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 0046c6f6
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    MOV dword ptr [EBP + -0x28],EAX     ; 0046c6fb
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0046c6fe
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [EBP + -0x24],0x0     ; 0046c703
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c70a
        ;   Label: LAB_0046c70a
    CMP EAX,dword ptr [EBP + -0x48]     ; 0046c70d
    JGE 0x0046c7ac                      ; 0046c710
        ;   XREF to: 0046c7ac (CONDITIONAL_JUMP)  ; LAB_0046c7ac
    MOV dword ptr [EBP + 0xfffff63c],0x0 ; 0046c716
    MOV dword ptr [EBP + -0x60],0x0     ; 0046c720
    JMP 0x0046c72f                      ; 0046c727
        ;   XREF to: 0046c72f (UNCONDITIONAL_JUMP)  ; LAB_0046c72f
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046c729
        ;   Label: LAB_0046c729
    INC dword ptr [EBP + -0x60]         ; 0046c72c
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046c72f
        ;   Label: LAB_0046c72f
    CMP EAX,dword ptr [0x01e8d260]      ; 0046c732 | g_TextureProcessedCount
    JGE 0x0046c75a                      ; 0046c738
        ;   XREF to: 0046c75a (CONDITIONAL_JUMP)  ; LAB_0046c75a
    IMUL EDX,dword ptr [EBP + -0x60],0x250 ; 0046c73a
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c741
    CMP EAX,dword ptr [EDX + 0x1e8d474] ; 0046c744 | DAT_01e8d474
    JNZ 0x0046c758                      ; 0046c74a
        ;   XREF to: 0046c758 (CONDITIONAL_JUMP)  ; LAB_0046c758
    MOV dword ptr [EBP + 0xfffff63c],0x1 ; 0046c74c
    JMP 0x0046c75a                      ; 0046c756
        ;   XREF to: 0046c75a (UNCONDITIONAL_JUMP)  ; LAB_0046c75a
    JMP 0x0046c729                      ; 0046c758
        ;   XREF to: 0046c729 (UNCONDITIONAL_JUMP)  ; LAB_0046c729
        ;   Label: LAB_0046c758
    CMP dword ptr [EBP + 0xfffff63c],0x0 ; 0046c75a
        ;   Label: LAB_0046c75a
    JZ 0x0046c768                       ; 0046c761
        ;   XREF to: 0046c768 (CONDITIONAL_JUMP)  ; LAB_0046c768
    INC dword ptr [EBP + -0x24]         ; 0046c763
    JMP 0x0046c7a7                      ; 0046c766
        ;   XREF to: 0046c7a7 (UNCONDITIONAL_JUMP)  ; LAB_0046c7a7
    MOV dword ptr [EBP + -0x60],0x0     ; 0046c768
        ;   Label: LAB_0046c768
    JMP 0x0046c777                      ; 0046c76f
        ;   XREF to: 0046c777 (UNCONDITIONAL_JUMP)  ; LAB_0046c777
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046c771
        ;   Label: LAB_0046c771
    INC dword ptr [EBP + -0x60]         ; 0046c774
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046c777
        ;   Label: LAB_0046c777
    CMP EAX,dword ptr [0x01e8d260]      ; 0046c77a | g_TextureProcessedCount
    JGE 0x0046c7a3                      ; 0046c780
        ;   XREF to: 0046c7a3 (CONDITIONAL_JUMP)  ; LAB_0046c7a3
    IMUL EAX,dword ptr [EBP + -0x60],0x250 ; 0046c782
    MOV EAX,dword ptr [EAX + 0x1e8d474] ; 0046c789 | DAT_01e8d474
    CMP EAX,dword ptr [EBP + -0x24]     ; 0046c78f
    JLE 0x0046c7a1                      ; 0046c792
        ;   XREF to: 0046c7a1 (CONDITIONAL_JUMP)  ; LAB_0046c7a1
    IMUL EAX,dword ptr [EBP + -0x60],0x250 ; 0046c794
    DEC dword ptr [EAX + 0x1e8d474]     ; 0046c79b | DAT_01e8d474
    JMP 0x0046c771                      ; 0046c7a1
        ;   XREF to: 0046c771 (UNCONDITIONAL_JUMP)  ; LAB_0046c771
        ;   Label: LAB_0046c7a1
    ADD dword ptr [EBP + -0x48],-0x1    ; 0046c7a3
        ;   Label: LAB_0046c7a3
    JMP 0x0046c70a                      ; 0046c7a7
        ;   XREF to: 0046c70a (UNCONDITIONAL_JUMP)  ; LAB_0046c70a
        ;   Label: LAB_0046c7a7
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046c7ac
        ;   Label: LAB_0046c7ac
    CMP EAX,dword ptr [0x01eb1760]      ; 0046c7af | g_TextureAtlasDimension
    JGE 0x0046c7bf                      ; 0046c7b5
        ;   XREF to: 0046c7bf (CONDITIONAL_JUMP)  ; LAB_0046c7bf
    MOV EAX,[0x01eb1760]                ; 0046c7b7 | g_TextureAtlasDimension
    MOV dword ptr [EBP + -0x64],EAX     ; 0046c7bc
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046c7bf
        ;   Label: LAB_0046c7bf
    CMP EAX,dword ptr [0x01eb1760]      ; 0046c7c2 | g_TextureAtlasDimension
    JGE 0x0046c7d2                      ; 0046c7c8
        ;   XREF to: 0046c7d2 (CONDITIONAL_JUMP)  ; LAB_0046c7d2
    MOV EAX,[0x01eb1760]                ; 0046c7ca | g_TextureAtlasDimension
    MOV dword ptr [EBP + -0x50],EAX     ; 0046c7cf
    CMP dword ptr [EBP + 0x14],0x0      ; 0046c7d2
        ;   Label: LAB_0046c7d2
    JNZ 0x0046cd4b                      ; 0046c7d6
        ;   XREF to: 0046cd4b (CONDITIONAL_JUMP)  ; LAB_0046cd4b
    MOV dword ptr [EBP + -0x60],0x0     ; 0046c7dc
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046c7e3
    MOV dword ptr [EBP + -0x4c],EAX     ; 0046c7e6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046c7e9
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046c7e9
    MOV EDX,dword ptr [EBP + -0x28]     ; 0046c7ee
    SUB EDX,dword ptr [EBP + -0x2c]     ; 0046c7f1
    MOV ECX,0x120000                    ; 0046c7f4
    MOV EAX,EDX                         ; 0046c7f9
    SAR EDX,0x1f                        ; 0046c7fb
    IDIV ECX                            ; 0046c7fe
    PUSH EAX                            ; 0046c800
    LEA EAX,[EBP + -0x7c]               ; 0046c801
    PUSH EAX                            ; 0046c804
    MOV EAX,0x61d874                    ; 0046c805 | = "%s done.  (%ld seconds)"
    PUSH EAX                            ; 0046c80a | = "%s done.  (%ld seconds)"
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c80b
    PUSH EAX                            ; 0046c811
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c812
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046c817
    PUSH 0x0                            ; 0046c81a
    PUSH 0x0                            ; 0046c81c
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c81e
    PUSH EAX                            ; 0046c824
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c825
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c82a
    PUSH 0x16                           ; 0046c82d
    PUSH 0x0                            ; 0046c82f
    MOV EAX,0x61d88c                    ; 0046c831 | = "Minimum area"
    PUSH EAX                            ; 0046c836 | = "Minimum area"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c837
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c83c
    MOV dword ptr [EBP + -0x24],0x1     ; 0046c83f
    JMP 0x0046c84e                      ; 0046c846
        ;   XREF to: 0046c84e (UNCONDITIONAL_JUMP)  ; LAB_0046c84e
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c848
        ;   Label: LAB_0046c848
    INC dword ptr [EBP + -0x24]         ; 0046c84b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c84e
        ;   Label: LAB_0046c84e
    CMP EAX,dword ptr [EBP + -0x48]     ; 0046c851
    JG 0x0046c894                       ; 0046c854
        ;   XREF to: 0046c894 (CONDITIONAL_JUMP)  ; LAB_0046c894
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046c856
    PUSH EAX                            ; 0046c859
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046c85a
    PUSH EAX                            ; 0046c85d
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c85e
    PUSH EAX                            ; 0046c861
    MOV EAX,0x61d899                    ; 0046c862 | = "  map %d : %d x %d"
    PUSH EAX                            ; 0046c867 | = "  map %d : %d x %d"
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c868
    PUSH EAX                            ; 0046c86e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c86f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0046c874
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c877
    ADD EAX,0x2                         ; 0046c87a
    IMUL EAX,EAX,0xb                    ; 0046c87d
    PUSH EAX                            ; 0046c880
    PUSH 0x0                            ; 0046c881
    LEA EAX,[EBP + 0xfffffebc]          ; 0046c883
    PUSH EAX                            ; 0046c889
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c88a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c88f
    JMP 0x0046c848                      ; 0046c892
        ;   XREF to: 0046c848 (UNCONDITIONAL_JUMP)  ; LAB_0046c848
    CMP dword ptr [EBP + -0x60],0x0     ; 0046c894
        ;   Label: LAB_0046c894
    JNZ 0x0046c8c4                      ; 0046c898
        ;   XREF to: 0046c8c4 (CONDITIONAL_JUMP)  ; LAB_0046c8c4
    MOV EAX,0x61d8ac                    ; 0046c89a | = "Display texture information? [n] : "
    PUSH EAX                            ; 0046c89f | = "Display texture information? [n] : "
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c8a0
    ADD EAX,0x4                         ; 0046c8a3
    IMUL EAX,EAX,0xb                    ; 0046c8a6
    PUSH EAX                            ; 0046c8a9
    PUSH 0x0                            ; 0046c8aa
    PUSH 0x14                           ; 0046c8ac
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046c8ae
    PUSH EAX                            ; 0046c8b4
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046c8b5
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046c8ba
    MOV dword ptr [EBP + -0x60],0x1     ; 0046c8bd
    XOR EAX,EAX                         ; 0046c8c4
        ;   Label: LAB_0046c8c4
    MOV AL,byte ptr [EBP + 0xfffff5ec]  ; 0046c8c6
    PUSH EAX                            ; 0046c8cc
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0046c8cd
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046c8d2
    CMP EAX,0x59                        ; 0046c8d5
    JNZ 0x0046ca24                      ; 0046c8d8
        ;   XREF to: 0046ca24 (CONDITIONAL_JUMP)  ; LAB_0046ca24
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c8de
    ADD EAX,0x4                         ; 0046c8e1
    IMUL EAX,EAX,0xb                    ; 0046c8e4
    PUSH EAX                            ; 0046c8e7
    PUSH 0x0                            ; 0046c8e8
    MOV EAX,0x61d8d0                    ; 0046c8ea | = "Texture sizes:                       ..."
    PUSH EAX                            ; 0046c8ef | = "Texture sizes:                       ..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c8f0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c8f5
    MOV dword ptr [EBP + -0x30],0x0     ; 0046c8f8
    JMP 0x0046c90d                      ; 0046c8ff
        ;   XREF to: 0046c90d (UNCONDITIONAL_JUMP)  ; LAB_0046c90d
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c901
        ;   Label: LAB_0046c901
    INC dword ptr [EBP + -0x4c]         ; 0046c904
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046c907
    INC dword ptr [EBP + -0x30]         ; 0046c90a
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c90d
        ;   Label: LAB_0046c90d
    CMP EAX,dword ptr [0x01e8d260]      ; 0046c910 | g_TextureProcessedCount
    JGE 0x0046c9fd                      ; 0046c916
        ;   XREF to: 0046c9fd (CONDITIONAL_JUMP)  ; LAB_0046c9fd
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c91c
    MOV ECX,0x1e8d264                   ; 0046c923 | g_TextureAtlasEntries
    ADD EDX,ECX                         ; 0046c928
    PUSH EDX                            ; 0046c92a
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c92b
    MOV EDX,dword ptr [EDX + 0x1e8d474] ; 0046c932 | DAT_01e8d474
    INC EDX                             ; 0046c938
    PUSH EDX                            ; 0046c939
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c93a
    PUSH dword ptr [EDX + 0x1e8d478]    ; 0046c941 | DAT_01e8d478
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c947
    PUSH dword ptr [EDX + 0x1e8d480]    ; 0046c94e | DAT_01e8d480
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c954
    PUSH dword ptr [EDX + 0x1e8d47c]    ; 0046c95b | DAT_01e8d47c
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c961
    PUSH dword ptr [EDX + 0x1e8d488]    ; 0046c968 | DAT_01e8d488
    IMUL EDX,dword ptr [EBP + -0x4c],0x250 ; 0046c96e
    PUSH dword ptr [EDX + 0x1e8d484]    ; 0046c975 | DAT_01e8d484
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046c97b
    PUSH EDX                            ; 0046c97e
    MOV EDX,0x61d908                    ; 0046c97f | = "  %02d : %04d x %04d    xp: %04d  yp:..."
    PUSH EDX                            ; 0046c984 | = "  %02d : %04d x %04d    xp: %04d  yp:..."
    LEA EDX,[EBP + 0xfffffebc]          ; 0046c985
    PUSH EDX                            ; 0046c98b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046c98c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x28                        ; 0046c991
    MOV EDX,dword ptr [EBP + -0x24]     ; 0046c994
    ADD EDX,dword ptr [EBP + -0x30]     ; 0046c997
    ADD EDX,0x6                         ; 0046c99a
    IMUL EDX,EDX,0xb                    ; 0046c99d
    PUSH EDX                            ; 0046c9a0
    PUSH 0x0                            ; 0046c9a1
    LEA EDX,[EBP + 0xfffffebc]          ; 0046c9a3
    PUSH EDX                            ; 0046c9a9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c9aa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c9af
    MOV EDX,dword ptr [EBP + -0x30]     ; 0046c9b2
    INC EDX                             ; 0046c9b5
    MOV ECX,0x14                        ; 0046c9b6
    MOV EAX,EDX                         ; 0046c9bb
    SAR EDX,0x1f                        ; 0046c9bd
    IDIV ECX                            ; 0046c9c0
    TEST EDX,EDX                        ; 0046c9c2
    JNZ 0x0046c9f8                      ; 0046c9c4
        ;   XREF to: 0046c9f8 (CONDITIONAL_JUMP)  ; LAB_0046c9f8
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c9c6
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046c9c9
    ADD EAX,0x8                         ; 0046c9cc
    IMUL EAX,EAX,0xb                    ; 0046c9cf
    PUSH EAX                            ; 0046c9d2
    PUSH 0x0                            ; 0046c9d3
    MOV EAX,0x61d949                    ; 0046c9d5 | = "Hit a key to continue..."
    PUSH EAX                            ; 0046c9da | = "Hit a key to continue..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046c9db
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046c9e0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046c9e3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046c9e8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046c9ed
    INC dword ptr [EBP + -0x4c]         ; 0046c9f0
    JMP 0x0046c7e9                      ; 0046c9f3
        ;   XREF to: 0046c7e9 (UNCONDITIONAL_JUMP)  ; LAB_0046c7e9
    JMP 0x0046c901                      ; 0046c9f8
        ;   XREF to: 0046c901 (UNCONDITIONAL_JUMP)  ; LAB_0046c901
        ;   Label: LAB_0046c9f8
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046c9fd
        ;   Label: LAB_0046c9fd
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046ca00
    ADD EAX,0x7                         ; 0046ca03
    IMUL EAX,EAX,0xb                    ; 0046ca06
    PUSH EAX                            ; 0046ca09
    PUSH 0x0                            ; 0046ca0a
    MOV EAX,0x61d962                    ; 0046ca0c | = "Hit a key to continue..."
    PUSH EAX                            ; 0046ca11 | = "Hit a key to continue..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ca12
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ca17
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ca1a
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046ca1f
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046ca24
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046ca24
    MOV EDX,dword ptr [EBP + -0x28]     ; 0046ca29
    SUB EDX,dword ptr [EBP + -0x2c]     ; 0046ca2c
    MOV ECX,0x120000                    ; 0046ca2f
    MOV EAX,EDX                         ; 0046ca34
    SAR EDX,0x1f                        ; 0046ca36
    IDIV ECX                            ; 0046ca39
    PUSH EAX                            ; 0046ca3b
    LEA EAX,[EBP + -0x7c]               ; 0046ca3c
    PUSH EAX                            ; 0046ca3f
    MOV EAX,0x61d97b                    ; 0046ca40 | = "%s done.  (%ld seconds)"
    PUSH EAX                            ; 0046ca45 | = "%s done.  (%ld seconds)"
    LEA EAX,[EBP + 0xfffffebc]          ; 0046ca46
    PUSH EAX                            ; 0046ca4c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046ca4d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046ca52
    PUSH 0x0                            ; 0046ca55
    PUSH 0x0                            ; 0046ca57
    LEA EAX,[EBP + 0xfffffebc]          ; 0046ca59
    PUSH EAX                            ; 0046ca5f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ca60
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ca65
    MOV dword ptr [EBP + -0x4c],0x2     ; 0046ca68
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046ca6f
    PUSH EAX                            ; 0046ca73
    PUSH 0x0                            ; 0046ca74
    MOV EAX,0x61d993                    ; 0046ca76 | = "Minimum area"
    PUSH EAX                            ; 0046ca7b | = "Minimum area"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ca7c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ca81
    MOV dword ptr [EBP + -0x24],0x1     ; 0046ca84
    JMP 0x0046ca93                      ; 0046ca8b
        ;   XREF to: 0046ca93 (UNCONDITIONAL_JUMP)  ; LAB_0046ca93
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046ca8d
        ;   Label: LAB_0046ca8d
    INC dword ptr [EBP + -0x24]         ; 0046ca90
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046ca93
        ;   Label: LAB_0046ca93
    CMP EAX,dword ptr [EBP + -0x48]     ; 0046ca96
    JG 0x0046cad7                       ; 0046ca99
        ;   XREF to: 0046cad7 (CONDITIONAL_JUMP)  ; LAB_0046cad7
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046ca9b
    PUSH EAX                            ; 0046ca9e
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046ca9f
    PUSH EAX                            ; 0046caa2
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046caa3
    PUSH EAX                            ; 0046caa6
    MOV EAX,0x61d9a0                    ; 0046caa7 | = "  map %d : %d x %d"
    PUSH EAX                            ; 0046caac | = "  map %d : %d x %d"
    LEA EAX,[EBP + 0xfffffebc]          ; 0046caad
    PUSH EAX                            ; 0046cab3
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046cab4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0046cab9
    INC dword ptr [EBP + -0x4c]         ; 0046cabc
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046cabf
    PUSH EAX                            ; 0046cac3
    PUSH 0x0                            ; 0046cac4
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cac6
    PUSH EAX                            ; 0046cacc
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046cacd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046cad2
    JMP 0x0046ca8d                      ; 0046cad5
        ;   XREF to: 0046ca8d (UNCONDITIONAL_JUMP)  ; LAB_0046ca8d
    ADD dword ptr [EBP + -0x4c],0x2     ; 0046cad7
        ;   Label: LAB_0046cad7
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046cadb
    PUSH EAX                            ; 0046cadf
    PUSH 0x0                            ; 0046cae0
    MOV EAX,0x61d9b3                    ; 0046cae2 | = "Unused area (including padding)"
    PUSH EAX                            ; 0046cae7 | = "Unused area (including padding)"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046cae8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046caed
    MOV dword ptr [EBP + -0x24],0x1     ; 0046caf0
    JMP 0x0046caff                      ; 0046caf7
        ;   XREF to: 0046caff (UNCONDITIONAL_JUMP)  ; LAB_0046caff
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046caf9
        ;   Label: LAB_0046caf9
    INC dword ptr [EBP + -0x24]         ; 0046cafc
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046caff
        ;   Label: LAB_0046caff
    CMP EAX,dword ptr [EBP + -0x48]     ; 0046cb02
    JG 0x0046cbc9                       ; 0046cb05
        ;   XREF to: 0046cbc9 (CONDITIONAL_JUMP)  ; LAB_0046cbc9
    MOV dword ptr [EBP + 0xfffff5e8],0x0 ; 0046cb0b
    MOV dword ptr [EBP + -0x60],0x0     ; 0046cb15
    JMP 0x0046cb24                      ; 0046cb1c
        ;   XREF to: 0046cb24 (UNCONDITIONAL_JUMP)  ; LAB_0046cb24
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046cb1e
        ;   Label: LAB_0046cb1e
    INC dword ptr [EBP + -0x60]         ; 0046cb21
    MOV EAX,dword ptr [EBP + -0x60]     ; 0046cb24
        ;   Label: LAB_0046cb24
    CMP EAX,dword ptr [0x01e8d260]      ; 0046cb27 | g_TextureProcessedCount
    JGE 0x0046cb65                      ; 0046cb2d
        ;   XREF to: 0046cb65 (CONDITIONAL_JUMP)  ; LAB_0046cb65
    IMUL EAX,dword ptr [EBP + -0x60],0x250 ; 0046cb2f
    MOV EAX,dword ptr [EAX + 0x1e8d474] ; 0046cb36 | DAT_01e8d474
    INC EAX                             ; 0046cb3c
    CMP EAX,dword ptr [EBP + -0x24]     ; 0046cb3d
    JNZ 0x0046cb63                      ; 0046cb40
        ;   XREF to: 0046cb63 (CONDITIONAL_JUMP)  ; LAB_0046cb63
    IMUL EAX,dword ptr [EBP + -0x60],0x250 ; 0046cb42
    IMUL EDX,dword ptr [EBP + -0x60],0x250 ; 0046cb49
    MOV EAX,dword ptr [EAX + 0x1e8d484] ; 0046cb50 | DAT_01e8d484
    IMUL EAX,dword ptr [EDX + 0x1e8d488] ; 0046cb56 | DAT_01e8d488
    ADD dword ptr [EBP + 0xfffff5e8],EAX ; 0046cb5d
    JMP 0x0046cb1e                      ; 0046cb63
        ;   XREF to: 0046cb1e (UNCONDITIONAL_JUMP)  ; LAB_0046cb1e
        ;   Label: LAB_0046cb63
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046cb65
        ;   Label: LAB_0046cb65
    IMUL EAX,dword ptr [EBP + -0x50]    ; 0046cb68
    MOV dword ptr [EBP + 0xfffff690],EAX ; 0046cb6c
    FILD dword ptr [EBP + 0xfffff690]   ; 0046cb72
    FILD dword ptr [EBP + 0xfffff5e8]   ; 0046cb78
    FDIVRP                              ; 0046cb7e
    FMUL double ptr [0x0061d9ee]        ; 0046cb80 | DOUBLE_0061d9ee
    FSUBR double ptr [0x0061d9ee]       ; 0046cb86 | DOUBLE_0061d9ee
    SUB ESP,0x8                         ; 0046cb8c
    FSTP double ptr [ESP]               ; 0046cb8f
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046cb92
    PUSH EAX                            ; 0046cb95
    MOV EAX,0x61d9d3                    ; 0046cb96 | = "  map %d : %4.1lf%%"
    PUSH EAX                            ; 0046cb9b | = "  map %d : %4.1lf%%"
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cb9c
    PUSH EAX                            ; 0046cba2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046cba3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0046cba8
    INC dword ptr [EBP + -0x4c]         ; 0046cbab
    IMUL EAX,dword ptr [EBP + -0x4c],0xb ; 0046cbae
    PUSH EAX                            ; 0046cbb2
    PUSH 0x0                            ; 0046cbb3
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cbb5
    PUSH EAX                            ; 0046cbbb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046cbbc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046cbc1
    JMP 0x0046caf9                      ; 0046cbc4
        ;   XREF to: 0046caf9 (UNCONDITIONAL_JUMP)  ; LAB_0046caf9
    CMP dword ptr [EBP + -0x48],0x1     ; 0046cbc9
        ;   Label: LAB_0046cbc9
    JNZ 0x0046cbf6                      ; 0046cbcd
        ;   XREF to: 0046cbf6 (CONDITIONAL_JUMP)  ; LAB_0046cbf6
    MOV ESI,0x61d9f6                    ; 0046cbcf | = "Is this map acceptable? [y] : "
    LEA EDI,[EBP + 0xfffff5ec]          ; 0046cbd4
    PUSH EDI                            ; 0046cbda
    MOV AL,byte ptr [ESI]               ; 0046cbdb | = "Is this map acceptable? [y] : " | s_this_map_acceptable?_[y]_:_0061d9f8
        ;   Label: LAB_0046cbdb
    MOV byte ptr [EDI],AL               ; 0046cbdd
    CMP AL,0x0                          ; 0046cbdf
    JZ 0x0046cbf3                       ; 0046cbe1
        ;   XREF to: 0046cbf3 (CONDITIONAL_JUMP)  ; LAB_0046cbf3
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cbe3 | s_s_this_map_acceptable?_[y]_:_0061d9f7 | s_this_map_acceptable?_[y]_:_0061d9f9
    ADD ESI,0x2                         ; 0046cbe6
    MOV byte ptr [EDI + 0x1],AL         ; 0046cbe9
    ADD EDI,0x2                         ; 0046cbec
    CMP AL,0x0                          ; 0046cbef
    JNZ 0x0046cbdb                      ; 0046cbf1
        ;   XREF to: 0046cbdb (CONDITIONAL_JUMP)  ; LAB_0046cbdb
    POP EDI                             ; 0046cbf3
        ;   Label: LAB_0046cbf3
    JMP 0x0046cc1b                      ; 0046cbf4
        ;   XREF to: 0046cc1b (UNCONDITIONAL_JUMP)  ; LAB_0046cc1b
    MOV ESI,0x61da15                    ; 0046cbf6 | = "Are these maps acceptable? [y] : "
        ;   Label: LAB_0046cbf6
    LEA EDI,[EBP + 0xfffff5ec]          ; 0046cbfb
    PUSH EDI                            ; 0046cc01
    MOV AL,byte ptr [ESI]               ; 0046cc02 | = "Are these maps acceptable? [y] : " | s_e_these_maps_acceptable?_[y]_:_0061da17
        ;   Label: LAB_0046cc02
    MOV byte ptr [EDI],AL               ; 0046cc04
    CMP AL,0x0                          ; 0046cc06
    JZ 0x0046cc1a                       ; 0046cc08
        ;   XREF to: 0046cc1a (CONDITIONAL_JUMP)  ; LAB_0046cc1a
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cc0a | s_re_these_maps_acceptable?_[y]_:_0061da16 | s_these_maps_acceptable?_[y]_:_0061da18
    ADD ESI,0x2                         ; 0046cc0d
    MOV byte ptr [EDI + 0x1],AL         ; 0046cc10
    ADD EDI,0x2                         ; 0046cc13
    CMP AL,0x0                          ; 0046cc16
    JNZ 0x0046cc02                      ; 0046cc18
        ;   XREF to: 0046cc02 (CONDITIONAL_JUMP)  ; LAB_0046cc02
    POP EDI                             ; 0046cc1a
        ;   Label: LAB_0046cc1a
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046cc1b
        ;   Label: LAB_0046cc1b
    PUSH EAX                            ; 0046cc21
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046cc22
    ADD EAX,0x3                         ; 0046cc25
    IMUL EAX,EAX,0xb                    ; 0046cc28
    PUSH EAX                            ; 0046cc2b
    PUSH 0x0                            ; 0046cc2c
    PUSH 0x14                           ; 0046cc2e
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cc30
    PUSH EAX                            ; 0046cc36
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046cc37
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046cc3c
    CMP EAX,0x1b                        ; 0046cc3f
    JNZ 0x0046cc55                      ; 0046cc42
        ;   XREF to: 0046cc55 (CONDITIONAL_JUMP)  ; LAB_0046cc55
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046cc44
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046cc49
    JMP 0x0046dfa8                      ; 0046cc50
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    CMP byte ptr [EBP + 0xfffffebc],0x0 ; 0046cc55
        ;   Label: LAB_0046cc55
    JZ 0x0046cc74                       ; 0046cc5c
        ;   XREF to: 0046cc74 (CONDITIONAL_JUMP)  ; LAB_0046cc74
    XOR EAX,EAX                         ; 0046cc5e
    MOV AL,byte ptr [EBP + 0xfffffebc]  ; 0046cc60
    PUSH EAX                            ; 0046cc66
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0046cc67
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046cc6c
    CMP EAX,0x59                        ; 0046cc6f
    JNZ 0x0046cc76                      ; 0046cc72
        ;   XREF to: 0046cc76 (CONDITIONAL_JUMP)  ; LAB_0046cc76
    JMP 0x0046cce9                      ; 0046cc74
        ;   XREF to: 0046cce9 (UNCONDITIONAL_JUMP)  ; LAB_0046cce9
        ;   Label: LAB_0046cc74
    CMP dword ptr [EBP + -0x48],0x1     ; 0046cc76
        ;   Label: LAB_0046cc76
    JNZ 0x0046cc88                      ; 0046cc7a
        ;   XREF to: 0046cc88 (CONDITIONAL_JUMP)  ; LAB_0046cc88
    MOV dword ptr [EBP + 0xfffff5e4],0x1 ; 0046cc7c
    JMP 0x0046cc92                      ; 0046cc86
        ;   XREF to: 0046cc92 (UNCONDITIONAL_JUMP)  ; LAB_0046cc92
    MOV dword ptr [EBP + 0xfffff5e4],0x0 ; 0046cc88
        ;   Label: LAB_0046cc88
    MOV EAX,0x61da37                    ; 0046cc92 | = "s"
        ;   Label: LAB_0046cc92
    ADD EAX,dword ptr [EBP + 0xfffff5e4] ; 0046cc97
    PUSH EAX                            ; 0046cc9d | DAT_0061da38
    MOV EAX,0x61da39                    ; 0046cc9e | = "Map%s not created.  Hit a key..."
    PUSH EAX                            ; 0046cca3 | = "Map%s not created.  Hit a key..."
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046cca4
    PUSH EAX                            ; 0046ccaa
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046ccab
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046ccb0
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046ccb3
    ADD EAX,0x5                         ; 0046ccb6
    IMUL EAX,EAX,0xb                    ; 0046ccb9
    PUSH EAX                            ; 0046ccbc
    PUSH 0x0                            ; 0046ccbd
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046ccbf
    PUSH EAX                            ; 0046ccc5
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ccc6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046cccb
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ccce
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046ccd3
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046ccd8
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046ccdd
    JMP 0x0046dfa8                      ; 0046cce4
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    CMP dword ptr [EBP + -0x48],0x1     ; 0046cce9
        ;   Label: LAB_0046cce9
    JNZ 0x0046ccfb                      ; 0046cced
        ;   XREF to: 0046ccfb (CONDITIONAL_JUMP)  ; LAB_0046ccfb
    MOV dword ptr [EBP + 0xfffff5e0],0x1 ; 0046ccef
    JMP 0x0046cd05                      ; 0046ccf9
        ;   XREF to: 0046cd05 (UNCONDITIONAL_JUMP)  ; LAB_0046cd05
    MOV dword ptr [EBP + 0xfffff5e0],0x0 ; 0046ccfb
        ;   Label: LAB_0046ccfb
    MOV EAX,0x61da5a                    ; 0046cd05 | = "s"
        ;   Label: LAB_0046cd05
    ADD EAX,dword ptr [EBP + 0xfffff5e0] ; 0046cd0a
    PUSH EAX                            ; 0046cd10 | DAT_0061da5b
    MOV EAX,0x61da5c                    ; 0046cd11 | = "Map%s created.  Hit a key..."
    PUSH EAX                            ; 0046cd16 | = "Map%s created.  Hit a key..."
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046cd17
    PUSH EAX                            ; 0046cd1d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046cd1e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046cd23
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046cd26
    ADD EAX,0x5                         ; 0046cd29
    IMUL EAX,EAX,0xb                    ; 0046cd2c
    PUSH EAX                            ; 0046cd2f
    PUSH 0x0                            ; 0046cd30
    LEA EAX,[EBP + 0xfffff5ec]          ; 0046cd32
    PUSH EAX                            ; 0046cd38
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046cd39
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046cd3e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046cd41
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046cd46
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    CMP dword ptr [EBP + 0x14],0x0      ; 0046cd4b
        ;   Label: LAB_0046cd4b
    JZ 0x0046cd79                       ; 0046cd4f
        ;   XREF to: 0046cd79 (CONDITIONAL_JUMP)  ; LAB_0046cd79
    MOV ESI,dword ptr [EBP + 0x14]      ; 0046cd51
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046cd54
    PUSH EDI                            ; 0046cd5a
    MOV AL,byte ptr [ESI]               ; 0046cd5b
        ;   Label: LAB_0046cd5b
    MOV byte ptr [EDI],AL               ; 0046cd5d
    CMP AL,0x0                          ; 0046cd5f
    JZ 0x0046cd73                       ; 0046cd61
        ;   XREF to: 0046cd73 (CONDITIONAL_JUMP)  ; LAB_0046cd73
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cd63
    ADD ESI,0x2                         ; 0046cd66
    MOV byte ptr [EDI + 0x1],AL         ; 0046cd69
    ADD EDI,0x2                         ; 0046cd6c
    CMP AL,0x0                          ; 0046cd6f
    JNZ 0x0046cd5b                      ; 0046cd71
        ;   XREF to: 0046cd5b (CONDITIONAL_JUMP)  ; LAB_0046cd5b
    POP EDI                             ; 0046cd73
        ;   Label: LAB_0046cd73
    JMP 0x0046cede                      ; 0046cd74
        ;   XREF to: 0046cede (UNCONDITIONAL_JUMP)  ; LAB_0046cede
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046cd79
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046cd79
    MOV ESI,0x66eda8                    ; 0046cd7e | g_LoadedModelName
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046cd83
    PUSH EDI                            ; 0046cd89
    MOV AL,byte ptr [ESI]               ; 0046cd8a | g_LoadedModelName | s__0066edaa
        ;   Label: LAB_0046cd8a
    MOV byte ptr [EDI],AL               ; 0046cd8c
    CMP AL,0x0                          ; 0046cd8e
    JZ 0x0046cda2                       ; 0046cd90
        ;   XREF to: 0046cda2 (CONDITIONAL_JUMP)  ; LAB_0046cda2
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cd92 | s__0066eda9 | DAT_0066edab
    ADD ESI,0x2                         ; 0046cd95
    MOV byte ptr [EDI + 0x1],AL         ; 0046cd98
    ADD EDI,0x2                         ; 0046cd9b
    CMP AL,0x0                          ; 0046cd9e
    JNZ 0x0046cd8a                      ; 0046cda0
        ;   XREF to: 0046cd8a (CONDITIONAL_JUMP)  ; LAB_0046cd8a
    POP EDI                             ; 0046cda2
        ;   Label: LAB_0046cda2
    MOV EDX,0x2e                        ; 0046cda3
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046cda8
    MOV AL,byte ptr [ESI]               ; 0046cdae
        ;   Label: LAB_0046cdae
    CMP AL,DL                           ; 0046cdb0
    JZ 0x0046cdc6                       ; 0046cdb2
        ;   XREF to: 0046cdc6 (CONDITIONAL_JUMP)  ; LAB_0046cdc6
    CMP AL,0x0                          ; 0046cdb4
    JZ 0x0046cdc4                       ; 0046cdb6
        ;   XREF to: 0046cdc4 (CONDITIONAL_JUMP)  ; LAB_0046cdc4
    INC ESI                             ; 0046cdb8
    MOV AL,byte ptr [ESI]               ; 0046cdb9
    CMP AL,DL                           ; 0046cdbb
    JZ 0x0046cdc6                       ; 0046cdbd
        ;   XREF to: 0046cdc6 (CONDITIONAL_JUMP)  ; LAB_0046cdc6
    INC ESI                             ; 0046cdbf
    CMP AL,0x0                          ; 0046cdc0
    JNZ 0x0046cdae                      ; 0046cdc2
        ;   XREF to: 0046cdae (CONDITIONAL_JUMP)  ; LAB_0046cdae
    SUB ESI,ESI                         ; 0046cdc4
        ;   Label: LAB_0046cdc4
    MOV dword ptr [EBP + -0x5c],ESI     ; 0046cdc6
        ;   Label: LAB_0046cdc6
    CMP dword ptr [EBP + -0x5c],0x0     ; 0046cdc9
    JZ 0x0046cdd5                       ; 0046cdcd
        ;   XREF to: 0046cdd5 (CONDITIONAL_JUMP)  ; LAB_0046cdd5
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046cdcf
    MOV byte ptr [EAX],0x0              ; 0046cdd2
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046cdd5
        ;   Label: LAB_0046cdd5
    PUSH EAX                            ; 0046cddb
    MOV EAX,0x61da79                    ; 0046cddc | = "Enter output .RAW name [%s] : "
    PUSH EAX                            ; 0046cde1 | = "Enter output .RAW name [%s] : "
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cde2
    PUSH EAX                            ; 0046cde8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046cde9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046cdee
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cdf1
    PUSH EAX                            ; 0046cdf7
    PUSH 0x0                            ; 0046cdf8
    PUSH 0x0                            ; 0046cdfa
    PUSH 0x4f                           ; 0046cdfc
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046cdfe
    PUSH EAX                            ; 0046ce04
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046ce05
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046ce0a
    CMP EAX,0x1b                        ; 0046ce0d
    JNZ 0x0046ce23                      ; 0046ce10
        ;   XREF to: 0046ce23 (CONDITIONAL_JUMP)  ; LAB_0046ce23
    CALL shape_design.c_clearAllTextureNames_FUN_0046e6b0 ; 0046ce12
        ;   XREF to: 0046e6b0 (UNCONDITIONAL_CALL)  ; void shape_design.c_clearAllTextureNames_FUN_0046e6b0()
    MOV dword ptr [EBP + -0x68],0x0     ; 0046ce17
    JMP 0x0046dfa8                      ; 0046ce1e
        ;   XREF to: 0046dfa8 (UNCONDITIONAL_JUMP)  ; LAB_0046dfa8
    MOV EDX,0x2e                        ; 0046ce23
        ;   Label: LAB_0046ce23
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046ce28
    MOV AL,byte ptr [ESI]               ; 0046ce2e
        ;   Label: LAB_0046ce2e
    CMP AL,DL                           ; 0046ce30
    JZ 0x0046ce46                       ; 0046ce32
        ;   XREF to: 0046ce46 (CONDITIONAL_JUMP)  ; LAB_0046ce46
    CMP AL,0x0                          ; 0046ce34
    JZ 0x0046ce44                       ; 0046ce36
        ;   XREF to: 0046ce44 (CONDITIONAL_JUMP)  ; LAB_0046ce44
    INC ESI                             ; 0046ce38
    MOV AL,byte ptr [ESI]               ; 0046ce39
    CMP AL,DL                           ; 0046ce3b
    JZ 0x0046ce46                       ; 0046ce3d
        ;   XREF to: 0046ce46 (CONDITIONAL_JUMP)  ; LAB_0046ce46
    INC ESI                             ; 0046ce3f
    CMP AL,0x0                          ; 0046ce40
    JNZ 0x0046ce2e                      ; 0046ce42
        ;   XREF to: 0046ce2e (CONDITIONAL_JUMP)  ; LAB_0046ce2e
    SUB ESI,ESI                         ; 0046ce44
        ;   Label: LAB_0046ce44
    MOV dword ptr [EBP + -0x5c],ESI     ; 0046ce46
        ;   Label: LAB_0046ce46
    CMP dword ptr [EBP + -0x5c],0x0     ; 0046ce49
    JZ 0x0046ce55                       ; 0046ce4d
        ;   XREF to: 0046ce55 (CONDITIONAL_JUMP)  ; LAB_0046ce55
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046ce4f
    MOV byte ptr [EAX],0x0              ; 0046ce52
    CMP dword ptr [EBP + -0x48],0x1     ; 0046ce55
        ;   Label: LAB_0046ce55
    JZ 0x0046ce70                       ; 0046ce59
        ;   XREF to: 0046ce70 (CONDITIONAL_JUMP)  ; LAB_0046ce70
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046ce5b
    SUB ECX,ECX                         ; 0046ce61
    DEC ECX                             ; 0046ce63
    XOR EAX,EAX                         ; 0046ce64
    SCASB.REPNE ES:EDI                  ; 0046ce66
    NOT ECX                             ; 0046ce68
    DEC ECX                             ; 0046ce6a
    CMP ECX,0x7                         ; 0046ce6b
    JA 0x0046ce72                       ; 0046ce6e
        ;   XREF to: 0046ce72 (CONDITIONAL_JUMP)  ; LAB_0046ce72
    JMP 0x0046cea5                      ; 0046ce70
        ;   XREF to: 0046cea5 (UNCONDITIONAL_JUMP)  ; LAB_0046cea5
        ;   Label: LAB_0046ce70
    PUSH 0x16                           ; 0046ce72
        ;   Label: LAB_0046ce72
    PUSH 0x0                            ; 0046ce74
    MOV EAX,0x61da98                    ; 0046ce76 | = "File name must be no more than 7 char..."
    PUSH EAX                            ; 0046ce7b | = "File name must be no more than 7 char..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ce7c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ce81
    PUSH 0x2c                           ; 0046ce84
    PUSH 0x0                            ; 0046ce86
    MOV EAX,0x61dac5                    ; 0046ce88 | = "Hit a key..."
    PUSH EAX                            ; 0046ce8d | = "Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046ce8e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046ce93
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046ce96
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0046ce9b
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0046cd79                      ; 0046cea0
        ;   XREF to: 0046cd79 (UNCONDITIONAL_JUMP)  ; LAB_0046cd79
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046cea5
        ;   Label: LAB_0046cea5
    SUB ECX,ECX                         ; 0046ceab
    DEC ECX                             ; 0046cead
    XOR EAX,EAX                         ; 0046ceae
    SCASB.REPNE ES:EDI                  ; 0046ceb0
    NOT ECX                             ; 0046ceb2
    DEC ECX                             ; 0046ceb4
    TEST ECX,ECX                        ; 0046ceb5
    JNZ 0x0046cede                      ; 0046ceb7
        ;   XREF to: 0046cede (CONDITIONAL_JUMP)  ; LAB_0046cede
    MOV ESI,0x66eda8                    ; 0046ceb9 | g_LoadedModelName
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046cebe
    PUSH EDI                            ; 0046cec4
    MOV AL,byte ptr [ESI]               ; 0046cec5 | g_LoadedModelName | s__0066edaa
        ;   Label: LAB_0046cec5
    MOV byte ptr [EDI],AL               ; 0046cec7
    CMP AL,0x0                          ; 0046cec9
    JZ 0x0046cedd                       ; 0046cecb
        ;   XREF to: 0046cedd (CONDITIONAL_JUMP)  ; LAB_0046cedd
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cecd | s__0066eda9 | DAT_0066edab
    ADD ESI,0x2                         ; 0046ced0
    MOV byte ptr [EDI + 0x1],AL         ; 0046ced3
    ADD EDI,0x2                         ; 0046ced6
    CMP AL,0x0                          ; 0046ced9
    JNZ 0x0046cec5                      ; 0046cedb
        ;   XREF to: 0046cec5 (CONDITIONAL_JUMP)  ; LAB_0046cec5
    POP EDI                             ; 0046cedd
        ;   Label: LAB_0046cedd
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046cede
        ;   Label: LAB_0046cede
    MOV EDI,0x1eb1768                   ; 0046cee4 | g_CurrentModelFilename
    PUSH EDI                            ; 0046cee9 | g_CurrentModelFilename
    MOV AL,byte ptr [ESI]               ; 0046ceea
        ;   Label: LAB_0046ceea
    MOV byte ptr [EDI],AL               ; 0046ceec | g_CurrentModelFilename | DAT_01eb176a
    CMP AL,0x0                          ; 0046ceee
    JZ 0x0046cf02                       ; 0046cef0
        ;   XREF to: 0046cf02 (CONDITIONAL_JUMP)  ; LAB_0046cf02
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cef2
    ADD ESI,0x2                         ; 0046cef5
    MOV byte ptr [EDI + 0x1],AL         ; 0046cef8 | DAT_01eb1769 | DAT_01eb176b
    ADD EDI,0x2                         ; 0046cefb
    CMP AL,0x0                          ; 0046cefe
    JNZ 0x0046ceea                      ; 0046cf00
        ;   XREF to: 0046ceea (CONDITIONAL_JUMP)  ; LAB_0046ceea
    POP EDI                             ; 0046cf02
        ;   Label: LAB_0046cf02
    MOV EDX,0x1eb1768                   ; 0046cf03 | g_CurrentModelFilename
    PUSH EDX                            ; 0046cf08 | g_CurrentModelFilename
    CALL crt_string.c_strupr_FUN_00600770 ; 0046cf09
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_00600770(char * string)
    ADD ESP,0x4                         ; 0046cf0e
    MOV EDX,0x2e                        ; 0046cf11
    MOV ESI,0x1eb1768                   ; 0046cf16 | g_CurrentModelFilename
    MOV AL,byte ptr [ESI]               ; 0046cf1b | g_CurrentModelFilename | DAT_01eb176a
        ;   Label: LAB_0046cf1b
    CMP AL,DL                           ; 0046cf1d
    JZ 0x0046cf33                       ; 0046cf1f
        ;   XREF to: 0046cf33 (CONDITIONAL_JUMP)  ; LAB_0046cf33
    CMP AL,0x0                          ; 0046cf21
    JZ 0x0046cf31                       ; 0046cf23
        ;   XREF to: 0046cf31 (CONDITIONAL_JUMP)  ; LAB_0046cf31
    INC ESI                             ; 0046cf25
    MOV AL,byte ptr [ESI]               ; 0046cf26 | DAT_01eb1769 | DAT_01eb176b
    CMP AL,DL                           ; 0046cf28
    JZ 0x0046cf33                       ; 0046cf2a
        ;   XREF to: 0046cf33 (CONDITIONAL_JUMP)  ; LAB_0046cf33
    INC ESI                             ; 0046cf2c
    CMP AL,0x0                          ; 0046cf2d
    JNZ 0x0046cf1b                      ; 0046cf2f
        ;   XREF to: 0046cf1b (CONDITIONAL_JUMP)  ; LAB_0046cf1b
    SUB ESI,ESI                         ; 0046cf31
        ;   Label: LAB_0046cf31
    MOV dword ptr [EBP + -0x5c],ESI     ; 0046cf33 | g_CurrentModelFilename | DAT_01eb1769 | DAT_01eb176a
        ;   Label: LAB_0046cf33
    CMP dword ptr [EBP + -0x5c],0x0     ; 0046cf36
    JZ 0x0046cf42                       ; 0046cf3a
        ;   XREF to: 0046cf42 (CONDITIONAL_JUMP)  ; LAB_0046cf42
    MOV EAX,dword ptr [EBP + -0x5c]     ; 0046cf3c
    MOV byte ptr [EAX],0x0              ; 0046cf3f | DAT_01eb176a | DAT_01eb176b
    CMP dword ptr [EBP + 0x14],0x0      ; 0046cf42
        ;   Label: LAB_0046cf42
    JNZ 0x0046cf92                      ; 0046cf46
        ;   XREF to: 0046cf92 (CONDITIONAL_JUMP)  ; LAB_0046cf92
    MOV EAX,0x61dad2                    ; 0046cf48 | = "Paint around borders? [y] : "
    PUSH EAX                            ; 0046cf4d | = "Paint around borders? [y] : "
    PUSH 0x16                           ; 0046cf4e
    PUSH 0x0                            ; 0046cf50
    PUSH 0x14                           ; 0046cf52
    LEA EAX,[EBP + 0xfffffebc]          ; 0046cf54
    PUSH EAX                            ; 0046cf5a
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046cf5b
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046cf60
    CMP byte ptr [EBP + 0xfffffebc],0x0 ; 0046cf63
    JZ 0x0046cf82                       ; 0046cf6a
        ;   XREF to: 0046cf82 (CONDITIONAL_JUMP)  ; LAB_0046cf82
    XOR EAX,EAX                         ; 0046cf6c
    MOV AL,byte ptr [EBP + 0xfffffebc]  ; 0046cf6e
    PUSH EAX                            ; 0046cf74
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 0046cf75
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 0046cf7a
    CMP EAX,0x59                        ; 0046cf7d
    JNZ 0x0046cf8b                      ; 0046cf80
        ;   XREF to: 0046cf8b (CONDITIONAL_JUMP)  ; LAB_0046cf8b
    MOV dword ptr [EBP + -0x3c],0x1     ; 0046cf82
        ;   Label: LAB_0046cf82
    JMP 0x0046cf92                      ; 0046cf89
        ;   XREF to: 0046cf92 (UNCONDITIONAL_JUMP)  ; LAB_0046cf92
    MOV dword ptr [EBP + -0x3c],0x0     ; 0046cf8b
        ;   Label: LAB_0046cf8b
    MOV dword ptr [EBP + -0x4],0x0      ; 0046cf92
        ;   Label: LAB_0046cf92
    PUSH 0x2d0                          ; 0046cf99
    PUSH 0x0                            ; 0046cf9e
    MOV EAX,0x1eb1490                   ; 0046cfa0 | g_TextureNameArray
    PUSH EAX                            ; 0046cfa5 | g_TextureNameArray
    CALL crt_memory.c_memset_FUN_005fde40 ; 0046cfa6
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046cfab
    MOV dword ptr [EBP + -0x20],0x0     ; 0046cfae
    JMP 0x0046cfbd                      ; 0046cfb5
        ;   XREF to: 0046cfbd (UNCONDITIONAL_JUMP)  ; LAB_0046cfbd
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046cfb7
        ;   Label: LAB_0046cfb7
    INC dword ptr [EBP + -0x20]         ; 0046cfba
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046cfbd
        ;   Label: LAB_0046cfbd
    CMP EAX,dword ptr [EBP + -0x48]     ; 0046cfc0
    JGE 0x0046df94                      ; 0046cfc3
        ;   XREF to: 0046df94 (CONDITIONAL_JUMP)  ; LAB_0046df94
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046cfc9
    INC dword ptr [EBP + -0x4]          ; 0046cfcc
    MOV ESI,0x1eb1768                   ; 0046cfcf | g_CurrentModelFilename
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046cfd4
    PUSH EDI                            ; 0046cfda
    MOV AL,byte ptr [ESI]               ; 0046cfdb | g_CurrentModelFilename | DAT_01eb176a
        ;   Label: LAB_0046cfdb
    MOV byte ptr [EDI],AL               ; 0046cfdd
    CMP AL,0x0                          ; 0046cfdf
    JZ 0x0046cff3                       ; 0046cfe1
        ;   XREF to: 0046cff3 (CONDITIONAL_JUMP)  ; LAB_0046cff3
    MOV AL,byte ptr [ESI + 0x1]         ; 0046cfe3 | DAT_01eb1769 | DAT_01eb176b
    ADD ESI,0x2                         ; 0046cfe6
    MOV byte ptr [EDI + 0x1],AL         ; 0046cfe9
    ADD EDI,0x2                         ; 0046cfec
    CMP AL,0x0                          ; 0046cfef
    JNZ 0x0046cfdb                      ; 0046cff1
        ;   XREF to: 0046cfdb (CONDITIONAL_JUMP)  ; LAB_0046cfdb
    POP EDI                             ; 0046cff3
        ;   Label: LAB_0046cff3
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046cff4
    PUSH EAX                            ; 0046cff7
    CALL shape_design.c_calculateTextureQualityLevel_FUN_0046a930 ; 0046cff8
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; int shape_design.c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)
    ADD ESP,0x4                         ; 0046cffd
    MOV dword ptr [EBP + 0xfffff5dc],EAX ; 0046d000
    CMP dword ptr [EBP + -0x48],0x1     ; 0046d006
    JNZ 0x0046d082                      ; 0046d00a
        ;   XREF to: 0046d082 (CONDITIONAL_JUMP)  ; LAB_0046d082
    MOV EDI,0x1eb1768                   ; 0046d00c | g_CurrentModelFilename
    SUB ECX,ECX                         ; 0046d011
    DEC ECX                             ; 0046d013
    XOR EAX,EAX                         ; 0046d014
    SCASB.REPNE ES:EDI                  ; 0046d016 | g_CurrentModelFilename | DAT_01eb1769
    NOT ECX                             ; 0046d018
    DEC ECX                             ; 0046d01a
    CMP ECX,dword ptr [EBP + 0xfffff5dc] ; 0046d01b
    JA 0x0046d052                       ; 0046d021
        ;   XREF to: 0046d052 (CONDITIONAL_JUMP)  ; LAB_0046d052
    MOV ESI,0x61daef                    ; 0046d023 | = ".RAW"
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046d028
    PUSH EDI                            ; 0046d02e
    SUB ECX,ECX                         ; 0046d02f
    DEC ECX                             ; 0046d031
    MOV AL,0x0                          ; 0046d032
    SCASB.REPNE ES:EDI                  ; 0046d034
    DEC EDI                             ; 0046d036
    MOV AL,byte ptr [ESI]               ; 0046d037 | = ".RAW" | DAT_0061daf1
        ;   Label: LAB_0046d037
    MOV byte ptr [EDI],AL               ; 0046d039
    CMP AL,0x0                          ; 0046d03b
    JZ 0x0046d04f                       ; 0046d03d
        ;   XREF to: 0046d04f (CONDITIONAL_JUMP)  ; LAB_0046d04f
    MOV AL,byte ptr [ESI + 0x1]         ; 0046d03f | DAT_0061daf0 | DAT_0061daf2
    ADD ESI,0x2                         ; 0046d042
    MOV byte ptr [EDI + 0x1],AL         ; 0046d045
    ADD EDI,0x2                         ; 0046d048
    CMP AL,0x0                          ; 0046d04b
    JNZ 0x0046d037                      ; 0046d04d
        ;   XREF to: 0046d037 (CONDITIONAL_JUMP)  ; LAB_0046d037
    POP EDI                             ; 0046d04f
        ;   Label: LAB_0046d04f
    JMP 0x0046d07d                      ; 0046d050
        ;   XREF to: 0046d07d (UNCONDITIONAL_JUMP)  ; LAB_0046d07d
    MOV ESI,0x61daf4                    ; 0046d052 | = ".RAW"
        ;   Label: LAB_0046d052
    LEA EDI,[EBP + 0xfffffdb8]          ; 0046d057
    ADD EDI,dword ptr [EBP + 0xfffff5dc] ; 0046d05d
    PUSH EDI                            ; 0046d063
    MOV AL,byte ptr [ESI]               ; 0046d064 | = ".RAW" | DAT_0061daf6
        ;   Label: LAB_0046d064
    MOV byte ptr [EDI],AL               ; 0046d066
    CMP AL,0x0                          ; 0046d068
    JZ 0x0046d07c                       ; 0046d06a
        ;   XREF to: 0046d07c (CONDITIONAL_JUMP)  ; LAB_0046d07c
    MOV AL,byte ptr [ESI + 0x1]         ; 0046d06c | DAT_0061daf5 | DAT_0061daf7
    ADD ESI,0x2                         ; 0046d06f
    MOV byte ptr [EDI + 0x1],AL         ; 0046d072
    ADD EDI,0x2                         ; 0046d075
    CMP AL,0x0                          ; 0046d078
    JNZ 0x0046d064                      ; 0046d07a
        ;   XREF to: 0046d064 (CONDITIONAL_JUMP)  ; LAB_0046d064
    POP EDI                             ; 0046d07c
        ;   Label: LAB_0046d07c
    JMP 0x0046d114                      ; 0046d07d
        ;   XREF to: 0046d114 (UNCONDITIONAL_JUMP)  ; LAB_0046d114
        ;   Label: LAB_0046d07d
    MOV EDI,0x1eb1768                   ; 0046d082 | g_CurrentModelFilename
        ;   Label: LAB_0046d082
    SUB ECX,ECX                         ; 0046d087
    DEC ECX                             ; 0046d089
    XOR EAX,EAX                         ; 0046d08a
    SCASB.REPNE ES:EDI                  ; 0046d08c | g_CurrentModelFilename | DAT_01eb1769
    NOT ECX                             ; 0046d08e
    DEC ECX                             ; 0046d090
    MOV EDI,dword ptr [EBP + 0xfffff5dc] ; 0046d091
    DEC EDI                             ; 0046d097
    CMP ECX,EDI                         ; 0046d098
    JA 0x0046d0bd                       ; 0046d09a
        ;   XREF to: 0046d0bd (CONDITIONAL_JUMP)  ; LAB_0046d0bd
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046d09c
    PUSH EAX                            ; 0046d09f
    MOV EAX,0x1eb1768                   ; 0046d0a0 | g_CurrentModelFilename
    PUSH EAX                            ; 0046d0a5 | g_CurrentModelFilename
    MOV EAX,0x61daf9                    ; 0046d0a6 | = "%s_%X.RAW"
    PUSH EAX                            ; 0046d0ab | = "%s_%X.RAW"
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046d0ac
    PUSH EAX                            ; 0046d0b2
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046d0b3
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046d0b8
    JMP 0x0046d114                      ; 0046d0bb
        ;   XREF to: 0046d114 (UNCONDITIONAL_JUMP)  ; LAB_0046d114
    MOV EDI,0x1eb1768                   ; 0046d0bd | g_CurrentModelFilename
        ;   Label: LAB_0046d0bd
    SUB ECX,ECX                         ; 0046d0c2
    DEC ECX                             ; 0046d0c4
    XOR EAX,EAX                         ; 0046d0c5
    SCASB.REPNE ES:EDI                  ; 0046d0c7 | g_CurrentModelFilename | DAT_01eb1769
    NOT ECX                             ; 0046d0c9
    DEC ECX                             ; 0046d0cb
    CMP ECX,dword ptr [EBP + 0xfffff5dc] ; 0046d0cc
    JA 0x0046d0f5                       ; 0046d0d2
        ;   XREF to: 0046d0f5 (CONDITIONAL_JUMP)  ; LAB_0046d0f5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046d0d4
    PUSH EAX                            ; 0046d0d7
    MOV EAX,0x1eb1768                   ; 0046d0d8 | g_CurrentModelFilename
    PUSH EAX                            ; 0046d0dd | g_CurrentModelFilename
    MOV EAX,0x61db03                    ; 0046d0de | = "%s%X.RAW"
    PUSH EAX                            ; 0046d0e3 | = "%s%X.RAW"
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046d0e4
    PUSH EAX                            ; 0046d0ea
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046d0eb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046d0f0
    JMP 0x0046d114                      ; 0046d0f3
        ;   XREF to: 0046d114 (UNCONDITIONAL_JUMP)  ; LAB_0046d114
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046d0f5
        ;   Label: LAB_0046d0f5
    PUSH EAX                            ; 0046d0f8
    MOV EAX,0x61db0c                    ; 0046d0f9 | = "%X.RAW"
    PUSH EAX                            ; 0046d0fe | = "%X.RAW"
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046d0ff
    ADD EAX,dword ptr [EBP + 0xfffff5dc] ; 0046d105
    PUSH EAX                            ; 0046d10b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046d10c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046d111
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046d114
        ;   Label: LAB_0046d114
    IMUL EDI,dword ptr [EBP + -0x20],0x50 ; 0046d11a
    MOV EAX,0x1eb1490                   ; 0046d11e | g_TextureNameArray
    ADD EDI,EAX                         ; 0046d123
    PUSH EDI                            ; 0046d125
    MOV AL,byte ptr [ESI]               ; 0046d126
        ;   Label: LAB_0046d126
    MOV byte ptr [EDI],AL               ; 0046d128 | g_TextureNameArray | DAT_01eb1492
    CMP AL,0x0                          ; 0046d12a
    JZ 0x0046d13e                       ; 0046d12c
        ;   XREF to: 0046d13e (CONDITIONAL_JUMP)  ; LAB_0046d13e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046d12e
    ADD ESI,0x2                         ; 0046d131
    MOV byte ptr [EDI + 0x1],AL         ; 0046d134 | DAT_01eb1491 | DAT_01eb1493
    ADD EDI,0x2                         ; 0046d137
    CMP AL,0x0                          ; 0046d13a
    JNZ 0x0046d126                      ; 0046d13c
        ;   XREF to: 0046d126 (CONDITIONAL_JUMP)  ; LAB_0046d126
    POP EDI                             ; 0046d13e
        ;   Label: LAB_0046d13e
    PUSH 0x2aed                         ; 0046d13f
    MOV EAX,0x61db13                    ; 0046d144 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046d149 | = "..\\shape\\design.c"
    PUSH 0x1                            ; 0046d14a
    MOV EAX,[0x01eb1760]                ; 0046d14c | g_TextureAtlasDimension
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d151 | g_TextureAtlasDimension
    LEA EAX,[EAX + EAX*0x2]             ; 0046d158
    PUSH EAX                            ; 0046d15b
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 0046d15c
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0046d161
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046d164
    PUSH 0x2aee                         ; 0046d167
    MOV EAX,0x61db25                    ; 0046d16c | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046d171 | = "..\\shape\\design.c"
    MOV EAX,[0x01eb1760]                ; 0046d172 | g_TextureAtlasDimension
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d177 | g_TextureAtlasDimension
    PUSH EAX                            ; 0046d17e
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0046d17f
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046d184
    MOV dword ptr [EBP + -0x18],EAX     ; 0046d187
    CMP dword ptr [EBP + -0x1c],0x0     ; 0046d18a
    JZ 0x0046d196                       ; 0046d18e
        ;   XREF to: 0046d196 (CONDITIONAL_JUMP)  ; LAB_0046d196
    CMP dword ptr [EBP + -0x18],0x0     ; 0046d190
    JNZ 0x0046d1b8                      ; 0046d194
        ;   XREF to: 0046d1b8 (CONDITIONAL_JUMP)  ; LAB_0046d1b8
    MOV dword ptr [0x02f0ca48],0x61db37 ; 0046d196 | g_CurrentFilename | = "..\\shape\\design.c"
        ;   Label: LAB_0046d196
    MOV dword ptr [0x02f0ca4c],0x2aef   ; 0046d1a0 | g_CurrentLineNumber
    MOV EAX,0x61db49                    ; 0046d1aa | = "Unable to get bitmap!"
    PUSH EAX                            ; 0046d1af | = "Unable to get bitmap!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046d1b0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046d1b5
    MOV EAX,[0x01eb1760]                ; 0046d1b8 | g_TextureAtlasDimension
        ;   Label: LAB_0046d1b8
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d1bd | g_TextureAtlasDimension
    PUSH EAX                            ; 0046d1c4
    PUSH 0xff                           ; 0046d1c5
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046d1ca
    PUSH EAX                            ; 0046d1cd
    CALL crt_memory.c_memset_FUN_005fde40 ; 0046d1ce
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046d1d3
    CMP dword ptr [EBP + 0x14],0x0      ; 0046d1d6
    JNZ 0x0046d1e9                      ; 0046d1da
        ;   XREF to: 0046d1e9 (CONDITIONAL_JUMP)  ; LAB_0046d1e9
    PUSH 0x3e8                          ; 0046d1dc
    CALL crt_system.c_sleep_FUN_00600790 ; 0046d1e1
        ;   XREF to: 00600790 (UNCONDITIONAL_CALL)  ; void crt_system.c_sleep_FUN_00600790(DWORD milliseconds)
    ADD ESP,0x4                         ; 0046d1e6
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0046d1e9
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0046d1e9
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046d1ee
    PUSH EAX                            ; 0046d1f1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046d1f2
    PUSH EAX                            ; 0046d1f5
    MOV EAX,0x61db5f                    ; 0046d1f6 | = "Map %d of %d  "
    PUSH EAX                            ; 0046d1fb | = "Map %d of %d  "
    LEA EAX,[EBP + 0xfffffebc]          ; 0046d1fc
    PUSH EAX                            ; 0046d202
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046d203
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0046d208
    PUSH 0x0                            ; 0046d20b
    PUSH 0x0                            ; 0046d20d
    LEA EAX,[EBP + 0xfffffebc]          ; 0046d20f
    PUSH EAX                            ; 0046d215
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046d216
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046d21b
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046d21e
    PUSH EAX                            ; 0046d224
    MOV EAX,0x61db6e                    ; 0046d225 | = "Sampling down %s...                  "
    PUSH EAX                            ; 0046d22a | = "Sampling down %s...                  "
    LEA EAX,[EBP + 0xfffffebc]          ; 0046d22b
    PUSH EAX                            ; 0046d231
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046d232
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046d237
    PUSH 0x16                           ; 0046d23a
    PUSH 0x0                            ; 0046d23c
    LEA EAX,[EBP + 0xfffffebc]          ; 0046d23e
    PUSH EAX                            ; 0046d244
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046d245
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046d24a
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046d24d
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV dword ptr [EBP + -0x4c],0x0     ; 0046d252
    JMP 0x0046d261                      ; 0046d259
        ;   XREF to: 0046d261 (UNCONDITIONAL_JUMP)  ; LAB_0046d261
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046d25b
        ;   Label: LAB_0046d25b
    INC dword ptr [EBP + -0x4c]         ; 0046d25e
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046d261
        ;   Label: LAB_0046d261
    CMP EAX,dword ptr [0x01e8d260]      ; 0046d264 | g_TextureProcessedCount
    JGE 0x0046d2b6                      ; 0046d26a
        ;   XREF to: 0046d2b6 (CONDITIONAL_JUMP)  ; LAB_0046d2b6
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d26c
    MOV EAX,dword ptr [EAX + 0x1e8d474] ; 0046d273 | DAT_01e8d474
    CMP EAX,dword ptr [EBP + -0x20]     ; 0046d279
    JZ 0x0046d280                       ; 0046d27c
        ;   XREF to: 0046d280 (CONDITIONAL_JUMP)  ; LAB_0046d280
    JMP 0x0046d2b4                      ; 0046d27e
        ;   XREF to: 0046d2b4 (UNCONDITIONAL_JUMP)  ; LAB_0046d2b4
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046d280
        ;   Label: LAB_0046d280
    PUSH EAX                            ; 0046d283
    MOV EAX,dword ptr [EBP + -0x64]     ; 0046d284
    PUSH EAX                            ; 0046d287
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046d288
    SHL EAX,0x2                         ; 0046d28b
    PUSH dword ptr [EAX + EBP*0x1 + 0xfffff7c8] ; 0046d28e
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046d295
    PUSH EAX                            ; 0046d298
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046d299
    PUSH EAX                            ; 0046d29c
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d29d
    MOV EDX,0x1e8d264                   ; 0046d2a4 | g_TextureAtlasEntries
    ADD EAX,EDX                         ; 0046d2a9
    PUSH EAX                            ; 0046d2ab
    CALL shape_design.c_loadTextureData_FUN_0046b060 ; 0046d2ac
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void shape_design.c_loadTextureData_FUN_0046b060(STextureLoadConfig * config_ptr, void * rgb_buffer, void * alpha_buffer, int atlas_width, ...)
    ADD ESP,0x18                        ; 0046d2b1
    JMP 0x0046d25b                      ; 0046d2b4
        ;   XREF to: 0046d25b (UNCONDITIONAL_JUMP)  ; LAB_0046d25b
        ;   Label: LAB_0046d2b4
    LEA EAX,[EBP + -0x14]               ; 0046d2b6
        ;   Label: LAB_0046d2b6
    MOV dword ptr [EBP + -0x70],EAX     ; 0046d2b9
    LEA EAX,[EBP + -0x10]               ; 0046d2bc
    MOV dword ptr [EBP + -0x6c],EAX     ; 0046d2bf
    PUSH 0x1                            ; 0046d2c2
    PUSH 0x2                            ; 0046d2c4
    PUSH 0x18                           ; 0046d2c6
    PUSH dword ptr [0x01eb1760]         ; 0046d2c8 | g_TextureAtlasDimension
    PUSH dword ptr [0x01eb1760]         ; 0046d2ce | g_TextureAtlasDimension
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0046d2d4
    PUSH EAX                            ; 0046d2d7
    MOV EAX,dword ptr [EBP + -0x70]     ; 0046d2d8
    PUSH EAX                            ; 0046d2db
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046d2dc
    PUSH EAX                            ; 0046d2df
    CALL shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 ; 0046d2e0
        ;   XREF to: 00556490 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_quantizeRawPixelData_FUN_00556490(uchar * src_pixel_data, uchar * * out_pixel_data, uchar * * out_palette, short width, ...)
    ADD ESP,0x20                        ; 0046d2e5
    TEST EAX,EAX                        ; 0046d2e8
    JNZ 0x0046d30e                      ; 0046d2ea
        ;   XREF to: 0046d30e (CONDITIONAL_JUMP)  ; LAB_0046d30e
    MOV dword ptr [0x02f0ca48],0x61db94 ; 0046d2ec | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2b1b   ; 0046d2f6 | g_CurrentLineNumber
    MOV EAX,0x61dba6                    ; 0046d300 | = "Bitmap color quantization failed!"
    PUSH EAX                            ; 0046d305 | = "Bitmap color quantization failed!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046d306
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046d30b
    CMP dword ptr [EBP + -0x3c],0x0     ; 0046d30e
        ;   Label: LAB_0046d30e
    JZ 0x0046d31a                       ; 0046d312
        ;   XREF to: 0046d31a (CONDITIONAL_JUMP)  ; LAB_0046d31a
    CMP dword ptr [EBP + -0x54],0x0     ; 0046d314
    JG 0x0046d31f                       ; 0046d318
        ;   XREF to: 0046d31f (CONDITIONAL_JUMP)  ; LAB_0046d31f
    JMP 0x0046daa7                      ; 0046d31a
        ;   XREF to: 0046daa7 (UNCONDITIONAL_JUMP)  ; LAB_0046daa7
        ;   Label: LAB_0046d31a
    MOV dword ptr [EBP + -0x4c],0x0     ; 0046d31f
        ;   Label: LAB_0046d31f
    JMP 0x0046d32e                      ; 0046d326
        ;   XREF to: 0046d32e (UNCONDITIONAL_JUMP)  ; LAB_0046d32e
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046d328
        ;   Label: LAB_0046d328
    INC dword ptr [EBP + -0x4c]         ; 0046d32b
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046d32e
        ;   Label: LAB_0046d32e
    CMP EAX,dword ptr [0x01e8d260]      ; 0046d331 | g_TextureProcessedCount
    JGE 0x0046daa7                      ; 0046d337
        ;   XREF to: 0046daa7 (CONDITIONAL_JUMP)  ; LAB_0046daa7
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d33d
    MOV EAX,dword ptr [EAX + 0x1e8d474] ; 0046d344 | DAT_01e8d474
    CMP EAX,dword ptr [EBP + -0x20]     ; 0046d34a
    JZ 0x0046d354                       ; 0046d34d
        ;   XREF to: 0046d354 (CONDITIONAL_JUMP)  ; LAB_0046d354
    JMP 0x0046daa2                      ; 0046d34f
        ;   XREF to: 0046daa2 (UNCONDITIONAL_JUMP)  ; LAB_0046daa2
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d354
        ;   Label: LAB_0046d354
    CMP dword ptr [EAX + 0x1e8d478],0x0 ; 0046d35b | DAT_01e8d478
    JNZ 0x0046d38c                      ; 0046d362
        ;   XREF to: 0046d38c (CONDITIONAL_JUMP)  ; LAB_0046d38c
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d364
    MOV EAX,dword ptr [EAX + 0x1e8d494] ; 0046d36b | DAT_01e8d494
    MOV dword ptr [EBP + 0xfffff5d8],EAX ; 0046d371
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d377
    MOV EAX,dword ptr [EAX + 0x1e8d498] ; 0046d37e | DAT_01e8d498
    MOV dword ptr [EBP + 0xfffff5d4],EAX ; 0046d384
    JMP 0x0046d3b2                      ; 0046d38a
        ;   XREF to: 0046d3b2 (UNCONDITIONAL_JUMP)  ; LAB_0046d3b2
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d38c
        ;   Label: LAB_0046d38c
    MOV EAX,dword ptr [EAX + 0x1e8d498] ; 0046d393 | DAT_01e8d498
    MOV dword ptr [EBP + 0xfffff5d8],EAX ; 0046d399
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d39f
    MOV EAX,dword ptr [EAX + 0x1e8d494] ; 0046d3a6 | DAT_01e8d494
    MOV dword ptr [EBP + 0xfffff5d4],EAX ; 0046d3ac
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d3b2
        ;   Label: LAB_0046d3b2
    MOV EAX,dword ptr [EAX + 0x1e8d48c] ; 0046d3b9 | DAT_01e8d48c
    MOV dword ptr [EBP + 0xfffff5d0],EAX ; 0046d3bf
    IMUL EAX,dword ptr [EBP + -0x4c],0x250 ; 0046d3c5
    MOV EAX,dword ptr [EAX + 0x1e8d490] ; 0046d3cc | DAT_01e8d490
    MOV dword ptr [EBP + 0xfffff5cc],EAX ; 0046d3d2
    MOV EAX,dword ptr [EBP + -0x54]     ; 0046d3d8
    MOV EDX,dword ptr [EBP + -0x54]     ; 0046d3db
    SAR EDX,0x1f                        ; 0046d3de
    SUB EAX,EDX                         ; 0046d3e1
    SAR EAX,0x1                         ; 0046d3e3
    MOV dword ptr [EBP + 0xfffff5c8],EAX ; 0046d3e5
    JMP 0x0046d3fa                      ; 0046d3eb
        ;   XREF to: 0046d3fa (UNCONDITIONAL_JUMP)  ; LAB_0046d3fa
    MOV EAX,dword ptr [EBP + 0xfffff5c8] ; 0046d3ed
        ;   Label: LAB_0046d3ed
    ADD dword ptr [EBP + 0xfffff5c8],-0x1 ; 0046d3f3
    CMP dword ptr [EBP + 0xfffff5c8],0x0 ; 0046d3fa
        ;   Label: LAB_0046d3fa
    JLE 0x0046daa2                      ; 0046d401
        ;   XREF to: 0046daa2 (CONDITIONAL_JUMP)  ; LAB_0046daa2
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d407
    DEC EAX                             ; 0046d40d
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d40e
    MOV dword ptr [EBP + -0x34],0x0     ; 0046d414
    JMP 0x0046d423                      ; 0046d41b
        ;   XREF to: 0046d423 (UNCONDITIONAL_JUMP)  ; LAB_0046d423
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046d41d
        ;   Label: LAB_0046d41d
    INC dword ptr [EBP + -0x34]         ; 0046d420
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046d423
        ;   Label: LAB_0046d423
    CMP EAX,dword ptr [EBP + 0xfffff5d8] ; 0046d426
    JGE 0x0046d4e4                      ; 0046d42c
        ;   XREF to: 0046d4e4 (CONDITIONAL_JUMP)  ; LAB_0046d4e4
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d432
    ADD EAX,dword ptr [EBP + -0x34]     ; 0046d438
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d43b
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d441
    JL 0x0046d458                       ; 0046d448
        ;   XREF to: 0046d458 (CONDITIONAL_JUMP)  ; LAB_0046d458
    MOV EAX,[0x01eb1760]                ; 0046d44a | g_TextureAtlasDimension
    DEC EAX                             ; 0046d44f
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d450
    JGE 0x0046d45a                      ; 0046d456
        ;   XREF to: 0046d45a (CONDITIONAL_JUMP)  ; LAB_0046d45a
    JMP 0x0046d463                      ; 0046d458
        ;   XREF to: 0046d463 (UNCONDITIONAL_JUMP)  ; LAB_0046d463
        ;   Label: LAB_0046d458
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d45a
        ;   Label: LAB_0046d45a
    JGE 0x0046d465                      ; 0046d461
        ;   XREF to: 0046d465 (CONDITIONAL_JUMP)  ; LAB_0046d465
    JMP 0x0046d473                      ; 0046d463
        ;   XREF to: 0046d473 (UNCONDITIONAL_JUMP)  ; LAB_0046d473
        ;   Label: LAB_0046d463
    MOV EAX,[0x01eb1760]                ; 0046d465 | g_TextureAtlasDimension
        ;   Label: LAB_0046d465
    DEC EAX                             ; 0046d46a
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d46b
    JGE 0x0046d475                      ; 0046d471
        ;   XREF to: 0046d475 (CONDITIONAL_JUMP)  ; LAB_0046d475
    JMP 0x0046d4df                      ; 0046d473
        ;   XREF to: 0046d4df (UNCONDITIONAL_JUMP)  ; LAB_0046d4df
        ;   Label: LAB_0046d473
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d475
        ;   Label: LAB_0046d475
    INC EAX                             ; 0046d47b
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d47c | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d483
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d489
    ADD EDX,EAX                         ; 0046d48c
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d48e
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d494 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d49b
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d4a1
    ADD ECX,EAX                         ; 0046d4a4
    MOV AL,byte ptr [EDX]               ; 0046d4a6
    MOV byte ptr [ECX],AL               ; 0046d4a8
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d4aa
    INC EAX                             ; 0046d4b0
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d4b1 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d4b8
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d4be
    ADD EDX,EAX                         ; 0046d4c1
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d4c3
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d4c9 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d4d0
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d4d6
    ADD ECX,EAX                         ; 0046d4d9
    MOV AL,byte ptr [EDX]               ; 0046d4db
    MOV byte ptr [ECX],AL               ; 0046d4dd
    JMP 0x0046d41d                      ; 0046d4df
        ;   XREF to: 0046d41d (UNCONDITIONAL_JUMP)  ; LAB_0046d41d
        ;   Label: LAB_0046d4df
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d4e4
        ;   Label: LAB_0046d4e4
    ADD EAX,dword ptr [EBP + 0xfffff5d4] ; 0046d4ea
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d4f0
    MOV dword ptr [EBP + -0x34],0x0     ; 0046d4f6
    JMP 0x0046d505                      ; 0046d4fd
        ;   XREF to: 0046d505 (UNCONDITIONAL_JUMP)  ; LAB_0046d505
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046d4ff
        ;   Label: LAB_0046d4ff
    INC dword ptr [EBP + -0x34]         ; 0046d502
    MOV EAX,dword ptr [EBP + -0x34]     ; 0046d505
        ;   Label: LAB_0046d505
    CMP EAX,dword ptr [EBP + 0xfffff5d8] ; 0046d508
    JGE 0x0046d5c6                      ; 0046d50e
        ;   XREF to: 0046d5c6 (CONDITIONAL_JUMP)  ; LAB_0046d5c6
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d514
    ADD EAX,dword ptr [EBP + -0x34]     ; 0046d51a
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d51d
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d523
    JL 0x0046d53a                       ; 0046d52a
        ;   XREF to: 0046d53a (CONDITIONAL_JUMP)  ; LAB_0046d53a
    MOV EAX,[0x01eb1760]                ; 0046d52c | g_TextureAtlasDimension
    DEC EAX                             ; 0046d531
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d532
    JGE 0x0046d53c                      ; 0046d538
        ;   XREF to: 0046d53c (CONDITIONAL_JUMP)  ; LAB_0046d53c
    JMP 0x0046d545                      ; 0046d53a
        ;   XREF to: 0046d545 (UNCONDITIONAL_JUMP)  ; LAB_0046d545
        ;   Label: LAB_0046d53a
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d53c
        ;   Label: LAB_0046d53c
    JGE 0x0046d547                      ; 0046d543
        ;   XREF to: 0046d547 (CONDITIONAL_JUMP)  ; LAB_0046d547
    JMP 0x0046d555                      ; 0046d545
        ;   XREF to: 0046d555 (UNCONDITIONAL_JUMP)  ; LAB_0046d555
        ;   Label: LAB_0046d545
    MOV EAX,[0x01eb1760]                ; 0046d547 | g_TextureAtlasDimension
        ;   Label: LAB_0046d547
    DEC EAX                             ; 0046d54c
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d54d
    JGE 0x0046d557                      ; 0046d553
        ;   XREF to: 0046d557 (CONDITIONAL_JUMP)  ; LAB_0046d557
    JMP 0x0046d5c1                      ; 0046d555
        ;   XREF to: 0046d5c1 (UNCONDITIONAL_JUMP)  ; LAB_0046d5c1
        ;   Label: LAB_0046d555
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d557
        ;   Label: LAB_0046d557
    DEC EAX                             ; 0046d55d
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d55e | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d565
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d56b
    ADD EDX,EAX                         ; 0046d56e
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d570
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d576 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d57d
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d583
    ADD ECX,EAX                         ; 0046d586
    MOV AL,byte ptr [EDX]               ; 0046d588
    MOV byte ptr [ECX],AL               ; 0046d58a
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d58c
    DEC EAX                             ; 0046d592
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d593 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d59a
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d5a0
    ADD EDX,EAX                         ; 0046d5a3
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d5a5
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d5ab | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d5b2
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d5b8
    ADD ECX,EAX                         ; 0046d5bb
    MOV AL,byte ptr [EDX]               ; 0046d5bd
    MOV byte ptr [ECX],AL               ; 0046d5bf
    JMP 0x0046d4ff                      ; 0046d5c1
        ;   XREF to: 0046d4ff (UNCONDITIONAL_JUMP)  ; LAB_0046d4ff
        ;   Label: LAB_0046d5c1
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d5c6
        ;   Label: LAB_0046d5c6
    DEC EAX                             ; 0046d5cc
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d5cd
    MOV dword ptr [EBP + -0x30],0x0     ; 0046d5d3
    JMP 0x0046d5e2                      ; 0046d5da
        ;   XREF to: 0046d5e2 (UNCONDITIONAL_JUMP)  ; LAB_0046d5e2
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046d5dc
        ;   Label: LAB_0046d5dc
    INC dword ptr [EBP + -0x30]         ; 0046d5df
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046d5e2
        ;   Label: LAB_0046d5e2
    CMP EAX,dword ptr [EBP + 0xfffff5d4] ; 0046d5e5
    JGE 0x0046d6a3                      ; 0046d5eb
        ;   XREF to: 0046d6a3 (CONDITIONAL_JUMP)  ; LAB_0046d6a3
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d5f1
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046d5f7
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d5fa
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d600
    JL 0x0046d617                       ; 0046d607
        ;   XREF to: 0046d617 (CONDITIONAL_JUMP)  ; LAB_0046d617
    MOV EAX,[0x01eb1760]                ; 0046d609 | g_TextureAtlasDimension
    DEC EAX                             ; 0046d60e
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d60f
    JGE 0x0046d619                      ; 0046d615
        ;   XREF to: 0046d619 (CONDITIONAL_JUMP)  ; LAB_0046d619
    JMP 0x0046d622                      ; 0046d617
        ;   XREF to: 0046d622 (UNCONDITIONAL_JUMP)  ; LAB_0046d622
        ;   Label: LAB_0046d617
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d619
        ;   Label: LAB_0046d619
    JGE 0x0046d624                      ; 0046d620
        ;   XREF to: 0046d624 (CONDITIONAL_JUMP)  ; LAB_0046d624
    JMP 0x0046d632                      ; 0046d622
        ;   XREF to: 0046d632 (UNCONDITIONAL_JUMP)  ; LAB_0046d632
        ;   Label: LAB_0046d622
    MOV EAX,[0x01eb1760]                ; 0046d624 | g_TextureAtlasDimension
        ;   Label: LAB_0046d624
    DEC EAX                             ; 0046d629
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d62a
    JGE 0x0046d634                      ; 0046d630
        ;   XREF to: 0046d634 (CONDITIONAL_JUMP)  ; LAB_0046d634
    JMP 0x0046d69e                      ; 0046d632
        ;   XREF to: 0046d69e (UNCONDITIONAL_JUMP)  ; LAB_0046d69e
        ;   Label: LAB_0046d632
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d634
        ;   Label: LAB_0046d634
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d63a | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d641
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d647
    ADD EDX,EAX                         ; 0046d64a
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d64c
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d652 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d659
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d65f
    ADD ECX,EAX                         ; 0046d662
    MOV AL,byte ptr [EDX + 0x1]         ; 0046d664
    MOV byte ptr [ECX],AL               ; 0046d667
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d669
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d66f | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d676
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d67c
    ADD EDX,EAX                         ; 0046d67f
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d681
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d687 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d68e
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d694
    ADD ECX,EAX                         ; 0046d697
    MOV AL,byte ptr [EDX + 0x1]         ; 0046d699
    MOV byte ptr [ECX],AL               ; 0046d69c
    JMP 0x0046d5dc                      ; 0046d69e
        ;   XREF to: 0046d5dc (UNCONDITIONAL_JUMP)  ; LAB_0046d5dc
        ;   Label: LAB_0046d69e
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d6a3
        ;   Label: LAB_0046d6a3
    ADD EAX,dword ptr [EBP + 0xfffff5d8] ; 0046d6a9
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d6af
    MOV dword ptr [EBP + -0x30],0x0     ; 0046d6b5
    JMP 0x0046d6c4                      ; 0046d6bc
        ;   XREF to: 0046d6c4 (UNCONDITIONAL_JUMP)  ; LAB_0046d6c4
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046d6be
        ;   Label: LAB_0046d6be
    INC dword ptr [EBP + -0x30]         ; 0046d6c1
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046d6c4
        ;   Label: LAB_0046d6c4
    CMP EAX,dword ptr [EBP + 0xfffff5d4] ; 0046d6c7
    JGE 0x0046d785                      ; 0046d6cd
        ;   XREF to: 0046d785 (CONDITIONAL_JUMP)  ; LAB_0046d785
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d6d3
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046d6d9
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d6dc
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d6e2
    JL 0x0046d6f9                       ; 0046d6e9
        ;   XREF to: 0046d6f9 (CONDITIONAL_JUMP)  ; LAB_0046d6f9
    MOV EAX,[0x01eb1760]                ; 0046d6eb | g_TextureAtlasDimension
    DEC EAX                             ; 0046d6f0
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d6f1
    JGE 0x0046d6fb                      ; 0046d6f7
        ;   XREF to: 0046d6fb (CONDITIONAL_JUMP)  ; LAB_0046d6fb
    JMP 0x0046d704                      ; 0046d6f9
        ;   XREF to: 0046d704 (UNCONDITIONAL_JUMP)  ; LAB_0046d704
        ;   Label: LAB_0046d6f9
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d6fb
        ;   Label: LAB_0046d6fb
    JGE 0x0046d706                      ; 0046d702
        ;   XREF to: 0046d706 (CONDITIONAL_JUMP)  ; LAB_0046d706
    JMP 0x0046d714                      ; 0046d704
        ;   XREF to: 0046d714 (UNCONDITIONAL_JUMP)  ; LAB_0046d714
        ;   Label: LAB_0046d704
    MOV EAX,[0x01eb1760]                ; 0046d706 | g_TextureAtlasDimension
        ;   Label: LAB_0046d706
    DEC EAX                             ; 0046d70b
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d70c
    JGE 0x0046d716                      ; 0046d712
        ;   XREF to: 0046d716 (CONDITIONAL_JUMP)  ; LAB_0046d716
    JMP 0x0046d780                      ; 0046d714
        ;   XREF to: 0046d780 (UNCONDITIONAL_JUMP)  ; LAB_0046d780
        ;   Label: LAB_0046d714
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d716
        ;   Label: LAB_0046d716
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d71c | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d723
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d729
    ADD EDX,EAX                         ; 0046d72c
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d72e
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d734 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d73b
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d741
    ADD ECX,EAX                         ; 0046d744
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d746
    MOV byte ptr [ECX],AL               ; 0046d749
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d74b
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d751 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d758
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d75e
    ADD EDX,EAX                         ; 0046d761
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d763
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d769 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d770
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d776
    ADD ECX,EAX                         ; 0046d779
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d77b
    MOV byte ptr [ECX],AL               ; 0046d77e
    JMP 0x0046d6be                      ; 0046d780
        ;   XREF to: 0046d6be (UNCONDITIONAL_JUMP)  ; LAB_0046d6be
        ;   Label: LAB_0046d780
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d785
        ;   Label: LAB_0046d785
    DEC EAX                             ; 0046d78b
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d78c
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d792
    DEC EAX                             ; 0046d798
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d799
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d79f
    JL 0x0046d7b6                       ; 0046d7a6
        ;   XREF to: 0046d7b6 (CONDITIONAL_JUMP)  ; LAB_0046d7b6
    MOV EAX,[0x01eb1760]                ; 0046d7a8 | g_TextureAtlasDimension
    DEC EAX                             ; 0046d7ad
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d7ae
    JGE 0x0046d7b8                      ; 0046d7b4
        ;   XREF to: 0046d7b8 (CONDITIONAL_JUMP)  ; LAB_0046d7b8
    JMP 0x0046d7c1                      ; 0046d7b6
        ;   XREF to: 0046d7c1 (UNCONDITIONAL_JUMP)  ; LAB_0046d7c1
        ;   Label: LAB_0046d7b6
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d7b8
        ;   Label: LAB_0046d7b8
    JGE 0x0046d7c3                      ; 0046d7bf
        ;   XREF to: 0046d7c3 (CONDITIONAL_JUMP)  ; LAB_0046d7c3
    JMP 0x0046d7d1                      ; 0046d7c1
        ;   XREF to: 0046d7d1 (UNCONDITIONAL_JUMP)  ; LAB_0046d7d1
        ;   Label: LAB_0046d7c1
    MOV EAX,[0x01eb1760]                ; 0046d7c3 | g_TextureAtlasDimension
        ;   Label: LAB_0046d7c3
    DEC EAX                             ; 0046d7c8
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d7c9
    JGE 0x0046d7d3                      ; 0046d7cf
        ;   XREF to: 0046d7d3 (CONDITIONAL_JUMP)  ; LAB_0046d7d3
    JMP 0x0046d83f                      ; 0046d7d1
        ;   XREF to: 0046d83f (UNCONDITIONAL_JUMP)  ; LAB_0046d83f
        ;   Label: LAB_0046d7d1
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d7d3
        ;   Label: LAB_0046d7d3
    INC EAX                             ; 0046d7d9
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d7da | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d7e1
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d7e7
    ADD EDX,EAX                         ; 0046d7ea
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d7ec
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d7f2 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d7f9
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d7ff
    ADD ECX,EAX                         ; 0046d802
    MOV AL,byte ptr [EDX + 0x1]         ; 0046d804
    MOV byte ptr [ECX],AL               ; 0046d807
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d809
    INC EAX                             ; 0046d80f
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d810 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d817
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d81d
    ADD EDX,EAX                         ; 0046d820
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d822
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d828 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d82f
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d835
    ADD ECX,EAX                         ; 0046d838
    MOV AL,byte ptr [EDX + 0x1]         ; 0046d83a
    MOV byte ptr [ECX],AL               ; 0046d83d
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d83f
        ;   Label: LAB_0046d83f
    ADD EAX,dword ptr [EBP + 0xfffff5d8] ; 0046d845
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d84b
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d851
    DEC EAX                             ; 0046d857
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d858
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d85e
    JL 0x0046d875                       ; 0046d865
        ;   XREF to: 0046d875 (CONDITIONAL_JUMP)  ; LAB_0046d875
    MOV EAX,[0x01eb1760]                ; 0046d867 | g_TextureAtlasDimension
    DEC EAX                             ; 0046d86c
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d86d
    JGE 0x0046d877                      ; 0046d873
        ;   XREF to: 0046d877 (CONDITIONAL_JUMP)  ; LAB_0046d877
    JMP 0x0046d880                      ; 0046d875
        ;   XREF to: 0046d880 (UNCONDITIONAL_JUMP)  ; LAB_0046d880
        ;   Label: LAB_0046d875
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d877
        ;   Label: LAB_0046d877
    JGE 0x0046d882                      ; 0046d87e
        ;   XREF to: 0046d882 (CONDITIONAL_JUMP)  ; LAB_0046d882
    JMP 0x0046d890                      ; 0046d880
        ;   XREF to: 0046d890 (UNCONDITIONAL_JUMP)  ; LAB_0046d890
        ;   Label: LAB_0046d880
    MOV EAX,[0x01eb1760]                ; 0046d882 | g_TextureAtlasDimension
        ;   Label: LAB_0046d882
    DEC EAX                             ; 0046d887
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d888
    JGE 0x0046d892                      ; 0046d88e
        ;   XREF to: 0046d892 (CONDITIONAL_JUMP)  ; LAB_0046d892
    JMP 0x0046d8fe                      ; 0046d890
        ;   XREF to: 0046d8fe (UNCONDITIONAL_JUMP)  ; LAB_0046d8fe
        ;   Label: LAB_0046d890
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d892
        ;   Label: LAB_0046d892
    INC EAX                             ; 0046d898
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d899 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d8a0
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d8a6
    ADD EDX,EAX                         ; 0046d8a9
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d8ab
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d8b1 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d8b8
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d8be
    ADD ECX,EAX                         ; 0046d8c1
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d8c3
    MOV byte ptr [ECX],AL               ; 0046d8c6
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d8c8
    INC EAX                             ; 0046d8ce
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d8cf | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d8d6
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d8dc
    ADD EDX,EAX                         ; 0046d8df
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d8e1
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d8e7 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d8ee
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d8f4
    ADD ECX,EAX                         ; 0046d8f7
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d8f9
    MOV byte ptr [ECX],AL               ; 0046d8fc
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d8fe
        ;   Label: LAB_0046d8fe
    ADD EAX,dword ptr [EBP + 0xfffff5d8] ; 0046d904
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d90a
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d910
    ADD EAX,dword ptr [EBP + 0xfffff5d4] ; 0046d916
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d91c
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d922
    JL 0x0046d939                       ; 0046d929
        ;   XREF to: 0046d939 (CONDITIONAL_JUMP)  ; LAB_0046d939
    MOV EAX,[0x01eb1760]                ; 0046d92b | g_TextureAtlasDimension
    DEC EAX                             ; 0046d930
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d931
    JGE 0x0046d93b                      ; 0046d937
        ;   XREF to: 0046d93b (CONDITIONAL_JUMP)  ; LAB_0046d93b
    JMP 0x0046d944                      ; 0046d939
        ;   XREF to: 0046d944 (UNCONDITIONAL_JUMP)  ; LAB_0046d944
        ;   Label: LAB_0046d939
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d93b
        ;   Label: LAB_0046d93b
    JGE 0x0046d946                      ; 0046d942
        ;   XREF to: 0046d946 (CONDITIONAL_JUMP)  ; LAB_0046d946
    JMP 0x0046d954                      ; 0046d944
        ;   XREF to: 0046d954 (UNCONDITIONAL_JUMP)  ; LAB_0046d954
        ;   Label: LAB_0046d944
    MOV EAX,[0x01eb1760]                ; 0046d946 | g_TextureAtlasDimension
        ;   Label: LAB_0046d946
    DEC EAX                             ; 0046d94b
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d94c
    JGE 0x0046d956                      ; 0046d952
        ;   XREF to: 0046d956 (CONDITIONAL_JUMP)  ; LAB_0046d956
    JMP 0x0046d9c2                      ; 0046d954
        ;   XREF to: 0046d9c2 (UNCONDITIONAL_JUMP)  ; LAB_0046d9c2
        ;   Label: LAB_0046d954
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d956
        ;   Label: LAB_0046d956
    DEC EAX                             ; 0046d95c
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d95d | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d964
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046d96a
    ADD EDX,EAX                         ; 0046d96d
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d96f
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d975 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d97c
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046d982
    ADD ECX,EAX                         ; 0046d985
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d987
    MOV byte ptr [ECX],AL               ; 0046d98a
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d98c
    DEC EAX                             ; 0046d992
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d993 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d99a
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046d9a0
    ADD EDX,EAX                         ; 0046d9a3
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046d9a5
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046d9ab | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d9b2
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046d9b8
    ADD ECX,EAX                         ; 0046d9bb
    MOV AL,byte ptr [EDX + -0x1]        ; 0046d9bd
    MOV byte ptr [ECX],AL               ; 0046d9c0
    MOV EAX,dword ptr [EBP + 0xfffff5d0] ; 0046d9c2
        ;   Label: LAB_0046d9c2
    DEC EAX                             ; 0046d9c8
    MOV dword ptr [EBP + 0xfffff5c0],EAX ; 0046d9c9
    MOV EAX,dword ptr [EBP + 0xfffff5cc] ; 0046d9cf
    ADD EAX,dword ptr [EBP + 0xfffff5d4] ; 0046d9d5
    MOV dword ptr [EBP + 0xfffff5c4],EAX ; 0046d9db
    CMP dword ptr [EBP + 0xfffff5c0],0x0 ; 0046d9e1
    JL 0x0046d9f8                       ; 0046d9e8
        ;   XREF to: 0046d9f8 (CONDITIONAL_JUMP)  ; LAB_0046d9f8
    MOV EAX,[0x01eb1760]                ; 0046d9ea | g_TextureAtlasDimension
    DEC EAX                             ; 0046d9ef
    CMP EAX,dword ptr [EBP + 0xfffff5c0] ; 0046d9f0
    JGE 0x0046d9fa                      ; 0046d9f6
        ;   XREF to: 0046d9fa (CONDITIONAL_JUMP)  ; LAB_0046d9fa
    JMP 0x0046da03                      ; 0046d9f8
        ;   XREF to: 0046da03 (UNCONDITIONAL_JUMP)  ; LAB_0046da03
        ;   Label: LAB_0046d9f8
    CMP dword ptr [EBP + 0xfffff5c4],0x0 ; 0046d9fa
        ;   Label: LAB_0046d9fa
    JGE 0x0046da05                      ; 0046da01
        ;   XREF to: 0046da05 (CONDITIONAL_JUMP)  ; LAB_0046da05
    JMP 0x0046da13                      ; 0046da03
        ;   XREF to: 0046da13 (UNCONDITIONAL_JUMP)  ; LAB_0046da13
        ;   Label: LAB_0046da03
    MOV EAX,[0x01eb1760]                ; 0046da05 | g_TextureAtlasDimension
        ;   Label: LAB_0046da05
    DEC EAX                             ; 0046da0a
    CMP EAX,dword ptr [EBP + 0xfffff5c4] ; 0046da0b
    JGE 0x0046da15                      ; 0046da11
        ;   XREF to: 0046da15 (CONDITIONAL_JUMP)  ; LAB_0046da15
    JMP 0x0046da81                      ; 0046da13
        ;   XREF to: 0046da81 (UNCONDITIONAL_JUMP)  ; LAB_0046da81
        ;   Label: LAB_0046da13
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046da15
        ;   Label: LAB_0046da15
    DEC EAX                             ; 0046da1b
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046da1c | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046da23
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046da29
    ADD EDX,EAX                         ; 0046da2c
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046da2e
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046da34 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046da3b
    MOV ECX,dword ptr [EBP + -0x14]     ; 0046da41
    ADD ECX,EAX                         ; 0046da44
    MOV AL,byte ptr [EDX + 0x1]         ; 0046da46
    MOV byte ptr [ECX],AL               ; 0046da49
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046da4b
    DEC EAX                             ; 0046da51
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046da52 | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046da59
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046da5f
    ADD EDX,EAX                         ; 0046da62
    MOV EAX,dword ptr [EBP + 0xfffff5c4] ; 0046da64
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046da6a | g_TextureAtlasDimension
    ADD EAX,dword ptr [EBP + 0xfffff5c0] ; 0046da71
    MOV ECX,dword ptr [EBP + -0x18]     ; 0046da77
    ADD ECX,EAX                         ; 0046da7a
    MOV AL,byte ptr [EDX + 0x1]         ; 0046da7c
    MOV byte ptr [ECX],AL               ; 0046da7f
    ADD dword ptr [EBP + 0xfffff5d8],0x2 ; 0046da81
        ;   Label: LAB_0046da81
    ADD dword ptr [EBP + 0xfffff5d4],0x2 ; 0046da88
    ADD dword ptr [EBP + 0xfffff5d0],-0x1 ; 0046da8f
    ADD dword ptr [EBP + 0xfffff5cc],-0x1 ; 0046da96
    JMP 0x0046d3ed                      ; 0046da9d
        ;   XREF to: 0046d3ed (UNCONDITIONAL_JUMP)  ; LAB_0046d3ed
    JMP 0x0046d328                      ; 0046daa2
        ;   XREF to: 0046d328 (UNCONDITIONAL_JUMP)  ; LAB_0046d328
        ;   Label: LAB_0046daa2
    PUSH dword ptr [0x01eb1760]         ; 0046daa7 | g_TextureAtlasDimension
        ;   Label: LAB_0046daa7
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046daad
    PUSH EAX                            ; 0046dab0
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046dab1
    PUSH EAX                            ; 0046dab4
    CALL shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 ; 0046dab5
        ;   XREF to: 0046b9a0 (UNCONDITIONAL_CALL)  ; void shape_design.c_embedCopyrightWatermark_FUN_0046b9a0(void * image_buffer, char * output_filename, int texture_size)
    ADD ESP,0xc                         ; 0046daba
    MOV EAX,0x61dbc8                    ; 0046dabd | = "wb"
    PUSH EAX                            ; 0046dac2 | = "wb"
    LEA EAX,[EBP + 0xfffffdb8]          ; 0046dac3
    PUSH EAX                            ; 0046dac9
    MOV EAX,0x61dbcb                    ; 0046daca | = "art"
    PUSH EAX                            ; 0046dacf | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046dad0
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046dad5
    MOV dword ptr [EBP + 0xfffff5bc],EAX ; 0046dad8
    CMP dword ptr [EBP + 0xfffff5bc],0x0 ; 0046dade
    JNZ 0x0046db09                      ; 0046dae5
        ;   XREF to: 0046db09 (CONDITIONAL_JUMP)  ; LAB_0046db09
    MOV dword ptr [0x02f0ca48],0x61dbcf ; 0046dae7 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2b7e   ; 0046daf1 | g_CurrentLineNumber
    MOV EAX,0x61dbe1                    ; 0046dafb | = "Unable to open output for 8-bit .RAW ..."
    PUSH EAX                            ; 0046db00 | = "Unable to open output for 8-bit .RAW ..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046db01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046db06
    MOV EDX,dword ptr [EBP + 0xfffff5bc] ; 0046db09
        ;   Label: LAB_0046db09
    PUSH EDX                            ; 0046db0f
    PUSH dword ptr [0x01eb1760]         ; 0046db10 | g_TextureAtlasDimension
    PUSH dword ptr [0x01eb1760]         ; 0046db16 | g_TextureAtlasDimension
    MOV EDX,dword ptr [EBP + -0x14]     ; 0046db1c
    PUSH EDX                            ; 0046db1f
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0046db20
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046db25
    PUSH 0x2b80                         ; 0046db28
    MOV EDX,0x61dc0c                    ; 0046db2d | = "..\\shape\\design.c"
    PUSH EDX                            ; 0046db32 | = "..\\shape\\design.c"
    MOV EDX,dword ptr [EBP + 0xfffff5bc] ; 0046db33
    PUSH EDX                            ; 0046db39
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046db3a
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046db3f
    LEA EDX,[EBP + 0xfffffdb8]          ; 0046db42
    PUSH EDX                            ; 0046db48
    MOV EDX,0x61dc1e                    ; 0046db49 | = "Saved %s                    "
    PUSH EDX                            ; 0046db4e | = "Saved %s                    "
    LEA EDX,[EBP + 0xfffffebc]          ; 0046db4f
    PUSH EDX                            ; 0046db55
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046db56
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046db5b
    PUSH 0x4d                           ; 0046db5e
    PUSH 0x0                            ; 0046db60
    LEA EDX,[EBP + 0xfffffebc]          ; 0046db62
    PUSH EDX                            ; 0046db68
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046db69
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046db6e
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046db71
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046db76
    LEA EDI,[EBP + 0xfffffbb0]          ; 0046db7c
    PUSH EDI                            ; 0046db82
    MOV AL,byte ptr [ESI]               ; 0046db83
        ;   Label: LAB_0046db83
    MOV byte ptr [EDI],AL               ; 0046db85
    CMP AL,0x0                          ; 0046db87
    JZ 0x0046db9b                       ; 0046db89
        ;   XREF to: 0046db9b (CONDITIONAL_JUMP)  ; LAB_0046db9b
    MOV AL,byte ptr [ESI + 0x1]         ; 0046db8b
    ADD ESI,0x2                         ; 0046db8e
    MOV byte ptr [EDI + 0x1],AL         ; 0046db91
    ADD EDI,0x2                         ; 0046db94
    CMP AL,0x0                          ; 0046db97
    JNZ 0x0046db83                      ; 0046db99
        ;   XREF to: 0046db83 (CONDITIONAL_JUMP)  ; LAB_0046db83
    POP EDI                             ; 0046db9b
        ;   Label: LAB_0046db9b
    MOV EDX,0x2e                        ; 0046db9c
    LEA ESI,[EBP + 0xfffffbb0]          ; 0046dba1
    MOV AL,byte ptr [ESI]               ; 0046dba7
        ;   Label: LAB_0046dba7
    CMP AL,DL                           ; 0046dba9
    JZ 0x0046dbbf                       ; 0046dbab
        ;   XREF to: 0046dbbf (CONDITIONAL_JUMP)  ; LAB_0046dbbf
    CMP AL,0x0                          ; 0046dbad
    JZ 0x0046dbbd                       ; 0046dbaf
        ;   XREF to: 0046dbbd (CONDITIONAL_JUMP)  ; LAB_0046dbbd
    INC ESI                             ; 0046dbb1
    MOV AL,byte ptr [ESI]               ; 0046dbb2
    CMP AL,DL                           ; 0046dbb4
    JZ 0x0046dbbf                       ; 0046dbb6
        ;   XREF to: 0046dbbf (CONDITIONAL_JUMP)  ; LAB_0046dbbf
    INC ESI                             ; 0046dbb8
    CMP AL,0x0                          ; 0046dbb9
    JNZ 0x0046dba7                      ; 0046dbbb
        ;   XREF to: 0046dba7 (CONDITIONAL_JUMP)  ; LAB_0046dba7
    SUB ESI,ESI                         ; 0046dbbd
        ;   Label: LAB_0046dbbd
    MOV dword ptr [EBP + -0x5c],ESI     ; 0046dbbf
        ;   Label: LAB_0046dbbf
    CMP dword ptr [EBP + -0x5c],0x0     ; 0046dbc2
    JZ 0x0046dbea                       ; 0046dbc6
        ;   XREF to: 0046dbea (CONDITIONAL_JUMP)  ; LAB_0046dbea
    MOV ESI,0x61dc3b                    ; 0046dbc8 | = ".ACT"
    MOV EDI,dword ptr [EBP + -0x5c]     ; 0046dbcd
    PUSH EDI                            ; 0046dbd0
    MOV AL,byte ptr [ESI]               ; 0046dbd1 | = ".ACT" | DAT_0061dc3d
        ;   Label: LAB_0046dbd1
    MOV byte ptr [EDI],AL               ; 0046dbd3
    CMP AL,0x0                          ; 0046dbd5
    JZ 0x0046dbe9                       ; 0046dbd7
        ;   XREF to: 0046dbe9 (CONDITIONAL_JUMP)  ; LAB_0046dbe9
    MOV AL,byte ptr [ESI + 0x1]         ; 0046dbd9 | DAT_0061dc3c | DAT_0061dc3e
    ADD ESI,0x2                         ; 0046dbdc
    MOV byte ptr [EDI + 0x1],AL         ; 0046dbdf
    ADD EDI,0x2                         ; 0046dbe2
    CMP AL,0x0                          ; 0046dbe5
    JNZ 0x0046dbd1                      ; 0046dbe7
        ;   XREF to: 0046dbd1 (CONDITIONAL_JUMP)  ; LAB_0046dbd1
    POP EDI                             ; 0046dbe9
        ;   Label: LAB_0046dbe9
    MOV EAX,0x61dc40                    ; 0046dbea | = "wb"
        ;   Label: LAB_0046dbea
    PUSH EAX                            ; 0046dbef | = "wb"
    LEA EAX,[EBP + 0xfffffbb0]          ; 0046dbf0
    PUSH EAX                            ; 0046dbf6
    MOV EAX,0x61dc43                    ; 0046dbf7 | = "art"
    PUSH EAX                            ; 0046dbfc | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046dbfd
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046dc02
    MOV dword ptr [EBP + 0xfffff5bc],EAX ; 0046dc05
    CMP dword ptr [EBP + 0xfffff5bc],0x0 ; 0046dc0b
    JNZ 0x0046dc36                      ; 0046dc12
        ;   XREF to: 0046dc36 (CONDITIONAL_JUMP)  ; LAB_0046dc36
    MOV dword ptr [0x02f0ca48],0x61dc47 ; 0046dc14 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2b8c   ; 0046dc1e | g_CurrentLineNumber
    MOV EAX,0x61dc59                    ; 0046dc28 | = "Unable to open output for .ACT file!"
    PUSH EAX                            ; 0046dc2d | = "Unable to open output for .ACT file!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046dc2e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046dc33
    MOV dword ptr [EBP + -0x4c],0x0     ; 0046dc36
        ;   Label: LAB_0046dc36
    JMP 0x0046dc45                      ; 0046dc3d
        ;   XREF to: 0046dc45 (UNCONDITIONAL_JUMP)  ; LAB_0046dc45
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046dc3f
        ;   Label: LAB_0046dc3f
    INC dword ptr [EBP + -0x4c]         ; 0046dc42
    CMP dword ptr [EBP + -0x4c],0x100   ; 0046dc45
        ;   Label: LAB_0046dc45
    JGE 0x0046dcb2                      ; 0046dc4c
        ;   XREF to: 0046dcb2 (CONDITIONAL_JUMP)  ; LAB_0046dcb2
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046dc4e
    PUSH EAX                            ; 0046dc54
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046dc55
    LEA EAX,[EAX + EAX*0x2]             ; 0046dc58
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046dc5b
    MOV AL,byte ptr [EAX + 0x2]         ; 0046dc5e
    AND EAX,0xff                        ; 0046dc61
    PUSH EAX                            ; 0046dc66
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0046dc67
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0046dc6c
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046dc6f
    PUSH EAX                            ; 0046dc75
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046dc76
    LEA EAX,[EAX + EAX*0x2]             ; 0046dc79
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046dc7c
    MOV AL,byte ptr [EAX + 0x1]         ; 0046dc7f
    AND EAX,0xff                        ; 0046dc82
    PUSH EAX                            ; 0046dc87
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0046dc88
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0046dc8d
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046dc90
    PUSH EAX                            ; 0046dc96
    MOV EAX,dword ptr [EBP + -0x4c]     ; 0046dc97
    LEA EAX,[EAX + EAX*0x2]             ; 0046dc9a
    ADD EAX,dword ptr [EBP + -0x10]     ; 0046dc9d
    MOV AL,byte ptr [EAX]               ; 0046dca0
    AND EAX,0xff                        ; 0046dca2
    PUSH EAX                            ; 0046dca7
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 0046dca8
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, _FILE * file)
    ADD ESP,0x8                         ; 0046dcad
    JMP 0x0046dc3f                      ; 0046dcb0
        ;   XREF to: 0046dc3f (UNCONDITIONAL_JUMP)  ; LAB_0046dc3f
    PUSH 0x2b92                         ; 0046dcb2
        ;   Label: LAB_0046dcb2
    MOV EDX,0x61dc7e                    ; 0046dcb7 | = "..\\shape\\design.c"
    PUSH EDX                            ; 0046dcbc | = "..\\shape\\design.c"
    MOV EDX,dword ptr [EBP + 0xfffff5bc] ; 0046dcbd
    PUSH EDX                            ; 0046dcc3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046dcc4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046dcc9
    LEA EDX,[EBP + 0xfffffbb0]          ; 0046dccc
    PUSH EDX                            ; 0046dcd2
    MOV EDX,0x61dc90                    ; 0046dcd3 | = "Saved %s                    "
    PUSH EDX                            ; 0046dcd8 | = "Saved %s                    "
    LEA EDX,[EBP + 0xfffffebc]          ; 0046dcd9
    PUSH EDX                            ; 0046dcdf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046dce0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046dce5
    PUSH 0x58                           ; 0046dce8
    PUSH 0x0                            ; 0046dcea
    LEA EDX,[EBP + 0xfffffebc]          ; 0046dcec
    PUSH EDX                            ; 0046dcf2
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046dcf3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046dcf8
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046dcfb
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    LEA ESI,[EBP + 0xfffffdb8]          ; 0046dd00
    LEA EDI,[EBP + 0xfffffcb4]          ; 0046dd06
    PUSH EDI                            ; 0046dd0c
    MOV AL,byte ptr [ESI]               ; 0046dd0d
        ;   Label: LAB_0046dd0d
    MOV byte ptr [EDI],AL               ; 0046dd0f
    CMP AL,0x0                          ; 0046dd11
    JZ 0x0046dd25                       ; 0046dd13
        ;   XREF to: 0046dd25 (CONDITIONAL_JUMP)  ; LAB_0046dd25
    MOV AL,byte ptr [ESI + 0x1]         ; 0046dd15
    ADD ESI,0x2                         ; 0046dd18
    MOV byte ptr [EDI + 0x1],AL         ; 0046dd1b
    ADD EDI,0x2                         ; 0046dd1e
    CMP AL,0x0                          ; 0046dd21
    JNZ 0x0046dd0d                      ; 0046dd23
        ;   XREF to: 0046dd0d (CONDITIONAL_JUMP)  ; LAB_0046dd0d
    POP EDI                             ; 0046dd25
        ;   Label: LAB_0046dd25
    MOV EDX,0x2e                        ; 0046dd26
    LEA ESI,[EBP + 0xfffffcb4]          ; 0046dd2b
    MOV AL,byte ptr [ESI]               ; 0046dd31
        ;   Label: LAB_0046dd31
    CMP AL,DL                           ; 0046dd33
    JZ 0x0046dd49                       ; 0046dd35
        ;   XREF to: 0046dd49 (CONDITIONAL_JUMP)  ; LAB_0046dd49
    CMP AL,0x0                          ; 0046dd37
    JZ 0x0046dd47                       ; 0046dd39
        ;   XREF to: 0046dd47 (CONDITIONAL_JUMP)  ; LAB_0046dd47
    INC ESI                             ; 0046dd3b
    MOV AL,byte ptr [ESI]               ; 0046dd3c
    CMP AL,DL                           ; 0046dd3e
    JZ 0x0046dd49                       ; 0046dd40
        ;   XREF to: 0046dd49 (CONDITIONAL_JUMP)  ; LAB_0046dd49
    INC ESI                             ; 0046dd42
    CMP AL,0x0                          ; 0046dd43
    JNZ 0x0046dd31                      ; 0046dd45
        ;   XREF to: 0046dd31 (CONDITIONAL_JUMP)  ; LAB_0046dd31
    SUB ESI,ESI                         ; 0046dd47
        ;   Label: LAB_0046dd47
    MOV dword ptr [EBP + -0x5c],ESI     ; 0046dd49
        ;   Label: LAB_0046dd49
    CMP dword ptr [EBP + -0x5c],0x0     ; 0046dd4c
    JZ 0x0046dd74                       ; 0046dd50
        ;   XREF to: 0046dd74 (CONDITIONAL_JUMP)  ; LAB_0046dd74
    MOV ESI,0x61dcad                    ; 0046dd52 | = ".OPA"
    MOV EDI,dword ptr [EBP + -0x5c]     ; 0046dd57
    PUSH EDI                            ; 0046dd5a
    MOV AL,byte ptr [ESI]               ; 0046dd5b | = ".OPA" | DAT_0061dcaf
        ;   Label: LAB_0046dd5b
    MOV byte ptr [EDI],AL               ; 0046dd5d
    CMP AL,0x0                          ; 0046dd5f
    JZ 0x0046dd73                       ; 0046dd61
        ;   XREF to: 0046dd73 (CONDITIONAL_JUMP)  ; LAB_0046dd73
    MOV AL,byte ptr [ESI + 0x1]         ; 0046dd63 | DAT_0061dcae | DAT_0061dcb0
    ADD ESI,0x2                         ; 0046dd66
    MOV byte ptr [EDI + 0x1],AL         ; 0046dd69
    ADD EDI,0x2                         ; 0046dd6c
    CMP AL,0x0                          ; 0046dd6f
    JNZ 0x0046dd5b                      ; 0046dd71
        ;   XREF to: 0046dd5b (CONDITIONAL_JUMP)  ; LAB_0046dd5b
    POP EDI                             ; 0046dd73
        ;   Label: LAB_0046dd73
    MOV EAX,[0x01eb1760]                ; 0046dd74 | g_TextureAtlasDimension
        ;   Label: LAB_0046dd74
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046dd79 | g_TextureAtlasDimension
    PUSH EAX                            ; 0046dd80
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046dd81
    PUSH EAX                            ; 0046dd84
    CALL shape_design.c_checkNonFFBytes_FUN_0046ac70 ; 0046dd85
        ;   XREF to: 0046ac70 (UNCONDITIONAL_CALL)  ; int shape_design.c_checkNonFFBytes_FUN_0046ac70(char * buffer_ptr, int buffer_length)
    ADD ESP,0x8                         ; 0046dd8a
    TEST EAX,EAX                        ; 0046dd8d
    JZ 0x0046de38                       ; 0046dd8f
        ;   XREF to: 0046de38 (CONDITIONAL_JUMP)  ; LAB_0046de38
    MOV EAX,0x61dcb2                    ; 0046dd95 | = "wb"
    PUSH EAX                            ; 0046dd9a | = "wb"
    LEA EAX,[EBP + 0xfffffcb4]          ; 0046dd9b
    PUSH EAX                            ; 0046dda1
    MOV EAX,0x61dcb5                    ; 0046dda2 | = "art"
    PUSH EAX                            ; 0046dda7 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046dda8
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046ddad
    MOV dword ptr [EBP + 0xfffff5bc],EAX ; 0046ddb0
    CMP dword ptr [EBP + 0xfffff5bc],0x0 ; 0046ddb6
    JNZ 0x0046dde1                      ; 0046ddbd
        ;   XREF to: 0046dde1 (CONDITIONAL_JUMP)  ; LAB_0046dde1
    MOV dword ptr [0x02f0ca48],0x61dcb9 ; 0046ddbf | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2ba2   ; 0046ddc9 | g_CurrentLineNumber
    MOV EAX,0x61dccb                    ; 0046ddd3 | = "unable to create .OPA file."
    PUSH EAX                            ; 0046ddd8 | = "unable to create .OPA file."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046ddd9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046ddde
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046dde1
        ;   Label: LAB_0046dde1
    PUSH EAX                            ; 0046dde7
    PUSH dword ptr [0x01eb1760]         ; 0046dde8 | g_TextureAtlasDimension
    PUSH dword ptr [0x01eb1760]         ; 0046ddee | g_TextureAtlasDimension
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046ddf4
    PUSH EAX                            ; 0046ddf7
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0046ddf8
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046ddfd
    PUSH 0x2ba4                         ; 0046de00
    MOV EAX,0x61dce7                    ; 0046de05 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046de0a | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046de0b
    PUSH EAX                            ; 0046de11
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046de12
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046de17
    LEA EAX,[EBP + 0xfffffcb4]          ; 0046de1a
    PUSH EAX                            ; 0046de20
    MOV EAX,0x61dcf9                    ; 0046de21 | = "Saved %s                    "
    PUSH EAX                            ; 0046de26 | = "Saved %s                    "
    LEA EAX,[EBP + 0xfffffebc]          ; 0046de27
    PUSH EAX                            ; 0046de2d
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046de2e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046de33
    JMP 0x0046de78                      ; 0046de36
        ;   XREF to: 0046de78 (UNCONDITIONAL_JUMP)  ; LAB_0046de78
    LEA EAX,[EBP + 0xfffffcb4]          ; 0046de38
        ;   Label: LAB_0046de38
    PUSH EAX                            ; 0046de3e
    MOV EAX,0x61dd16                    ; 0046de3f | = "art\\%s"
    PUSH EAX                            ; 0046de44 | = "art\\%s"
    LEA EAX,[EBP + 0xfffff4b8]          ; 0046de45
    PUSH EAX                            ; 0046de4b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046de4c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046de51
    LEA EAX,[EBP + 0xfffff4b8]          ; 0046de54
    PUSH EAX                            ; 0046de5a
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 0046de5b
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 0046de60
    MOV EAX,0x61dd1d                    ; 0046de63 | = "All pixels completely opaque, no .OPA..."
    PUSH EAX                            ; 0046de68 | = "All pixels completely opaque, no .OPA..."
    LEA EAX,[EBP + 0xfffffebc]          ; 0046de69
    PUSH EAX                            ; 0046de6f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046de70
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0046de75
    PUSH 0x63                           ; 0046de78
        ;   Label: LAB_0046de78
    PUSH 0x0                            ; 0046de7a
    LEA EAX,[EBP + 0xfffffebc]          ; 0046de7c
    PUSH EAX                            ; 0046de82
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046de83
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046de88
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0046de8b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,0x61dd53                    ; 0046de90 | = "wb"
    PUSH EAX                            ; 0046de95 | = "wb"
    MOV EAX,0x61dd56                    ; 0046de96 | = "tmp24.raw"
    PUSH EAX                            ; 0046de9b | = "tmp24.raw"
    MOV EAX,0x61dd60                    ; 0046de9c | = "art"
    PUSH EAX                            ; 0046dea1 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046dea2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046dea7
    MOV dword ptr [EBP + 0xfffff5bc],EAX ; 0046deaa
    CMP dword ptr [EBP + 0xfffff5bc],0x0 ; 0046deb0
    JNZ 0x0046dedb                      ; 0046deb7
        ;   XREF to: 0046dedb (CONDITIONAL_JUMP)  ; LAB_0046dedb
    MOV dword ptr [0x02f0ca48],0x61dd64 ; 0046deb9 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x2bb9   ; 0046dec3 | g_CurrentLineNumber
    MOV EAX,0x61dd76                    ; 0046decd | = "Unable to open output for 24-bit .RAW..."
    PUSH EAX                            ; 0046ded2 | = "Unable to open output for 24-bit .RAW..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046ded3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046ded8
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046dedb
        ;   Label: LAB_0046dedb
    PUSH EAX                            ; 0046dee1
    PUSH dword ptr [0x01eb1760]         ; 0046dee2 | g_TextureAtlasDimension
    MOV EAX,[0x01eb1760]                ; 0046dee8 | g_TextureAtlasDimension
    LEA EAX,[EAX + EAX*0x2]             ; 0046deed
    PUSH EAX                            ; 0046def0
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046def1
    PUSH EAX                            ; 0046def4
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0046def5
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0046defa
    PUSH 0x2bbb                         ; 0046defd
    MOV EAX,0x61dda2                    ; 0046df02 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046df07 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0xfffff5bc] ; 0046df08
    PUSH EAX                            ; 0046df0e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046df0f
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046df14
    PUSH 0x2bbf                         ; 0046df17
    MOV EAX,0x61ddb4                    ; 0046df1c | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046df21 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046df22
    PUSH EAX                            ; 0046df25
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046df26
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046df2b
    MOV dword ptr [EBP + -0x10],0x0     ; 0046df2e
    PUSH 0x2bc1                         ; 0046df35
    MOV EAX,0x61ddc6                    ; 0046df3a | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046df3f | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046df40
    PUSH EAX                            ; 0046df43
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046df44
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046df49
    MOV dword ptr [EBP + -0x14],0x0     ; 0046df4c
    PUSH 0x2bc3                         ; 0046df53
    MOV EAX,0x61ddd8                    ; 0046df58 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046df5d | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046df5e
    PUSH EAX                            ; 0046df61
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046df62
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046df67
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046df6a
    PUSH 0x2bc5                         ; 0046df71
    MOV EAX,0x61ddea                    ; 0046df76 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046df7b | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046df7c
    PUSH EAX                            ; 0046df7f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046df80
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046df85
    MOV dword ptr [EBP + -0x18],0x0     ; 0046df88
    JMP 0x0046cfb7                      ; 0046df8f
        ;   XREF to: 0046cfb7 (UNCONDITIONAL_JUMP)  ; LAB_0046cfb7
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046df94
        ;   Label: LAB_0046df94
    MOV [0x01eb17b8],EAX                ; 0046df97 | g_LastTextureProcessIndex
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0046df9c
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    MOV dword ptr [EBP + -0x68],0x1     ; 0046dfa1
    MOV EAX,dword ptr [EBP + -0x68]     ; 0046dfa8
        ;   Label: LAB_0046dfa8
    MOV ESP,EBP                         ; 0046dfab
    POP EBP                             ; 0046dfad
    POP EDI                             ; 0046dfae
    POP ESI                             ; 0046dfaf
    POP EBX                             ; 0046dfb0
    RET                                 ; 0046dfb1

