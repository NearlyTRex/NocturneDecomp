; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_loadTextureData_FUN_0046b060(STextureAtlasEntry *entry,uchar *rgb_buffer,uchar *alpha_buffer,int atlas_width,int atlas_height)
;
; Parameters:
; STextureAtlasEntry * Stack[0x4]:4   entry
; uchar *          Stack[0x8]:4   rgb_buffer
; uchar *          Stack[0xc]:4   alpha_buffer
; int              Stack[0x10]:4   atlas_width
; int              Stack[0x14]:4   atlas_height
; Local Variables:
; undefined8       Stack[-0x1b4]:8  local_1b4
; undefined8       Stack[-0x1ac]:8  local_1ac
; undefined8       Stack[-0x1a4]:8  local_1a4
; undefined8       Stack[-0x19c]:8  local_19c
; undefined        Stack[-0x184]:1  local_184
; undefined        Stack[-0x180]:1  local_180
; undefined        Stack[-0x17c]:1  local_17c
; undefined8       Stack[-0x178]:8  local_178
; undefined8       Stack[-0x170]:8  local_170
; undefined8       Stack[-0x168]:8  local_168
; undefined8       Stack[-0x160]:8  local_160
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined        Stack[-0x148]:1  local_148
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
; XREF[1]:
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046d2ac
;
; Referenced Globals:
;   TerminatedCString s_rb_0061d29e
;   TerminatedCString s_art_0061d2a1
;   TerminatedCString s_shape_design_c_0061d2a5
;   TerminatedCString s_rb_0061d2b7
;   TerminatedCString s_shape_design_c_0061d2ba
;   TerminatedCString s_Unable_to_load_input_0061d2cc
;   TerminatedCString s_shape_design_c_0061d2e1
;   TerminatedCString s_shape_design_c_0061d2f3
;   TerminatedCString s_shape_design_c_0061d305
;   TerminatedCString s_Out_of_mem_0061d317
;   TerminatedCString s_Unable_to_read_file_s_0061d323
;   TerminatedCString s_shape_design_c_0061d33d
;   TerminatedCString s_shape_design_c_0061d34f
;   TerminatedCString s_shape_design_c_0061d361
;   double g_CoordinateRoundingOffset = 0.5
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fseek_FUN_005ffacc
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_design.c_readPixelRowFromFile_FUN_0046abf0
;   shape_design.c_sampleAndFilterPixel_FUN_0046ae20
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b060
        ;   Label: shape_design.c_loadTextureData_FUN_0046b060
    PUSH ESI                            ; 0046b061
    PUSH EDI                            ; 0046b062
    PUSH EBP                            ; 0046b063
    MOV EBP,ESP                         ; 0046b064
    SUB ESP,0x174                       ; 0046b066
    CMP dword ptr [0x01eb1484],0x0      ; 0046b06c | g_TextureManagerMode
    JZ 0x0046b092                       ; 0046b073
        ;   XREF to: 0046b092 (CONDITIONAL_JUMP)  ; LAB_0046b092
    MOV EAX,0x61d29e                    ; 0046b075 | = "rb"
    PUSH EAX                            ; 0046b07a | = "rb"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b07b
    PUSH EAX                            ; 0046b07e
    MOV EAX,0x61d2a1                    ; 0046b07f | = "art"
    PUSH EAX                            ; 0046b084 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0046b085
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0046b08a
    MOV dword ptr [EBP + -0xc],EAX      ; 0046b08d
    JMP 0x0046b0b4                      ; 0046b090
        ;   XREF to: 0046b0b4 (UNCONDITIONAL_JUMP)  ; LAB_0046b0b4
    PUSH 0x27a2                         ; 0046b092
        ;   Label: LAB_0046b092
    MOV EAX,0x61d2a5                    ; 0046b097 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b09c | = "..\\shape\\design.c"
    MOV EAX,0x61d2b7                    ; 0046b09d | = "rb"
    PUSH EAX                            ; 0046b0a2 | = "rb"
    PUSH 0x0                            ; 0046b0a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b0a5
    PUSH EAX                            ; 0046b0a8
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 0046b0a9
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 0046b0ae
    MOV dword ptr [EBP + -0xc],EAX      ; 0046b0b1
    CMP dword ptr [EBP + -0xc],0x0      ; 0046b0b4
        ;   Label: LAB_0046b0b4
    JNZ 0x0046b0dc                      ; 0046b0b8
        ;   XREF to: 0046b0dc (CONDITIONAL_JUMP)  ; LAB_0046b0dc
    MOV dword ptr [0x02f0ca48],0x61d2ba ; 0046b0ba | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x27a4   ; 0046b0c4 | g_CurrentLineNumber
    MOV EAX,0x61d2cc                    ; 0046b0ce | = "Unable to load input"
    PUSH EAX                            ; 0046b0d3 | = "Unable to load input"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046b0d4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046b0d9
    PUSH 0x0                            ; 0046b0dc
        ;   Label: LAB_0046b0dc
    PUSH 0x11                           ; 0046b0de
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b0e0
    PUSH EAX                            ; 0046b0e3
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0046b0e4
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0046b0e9
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b0ec
    PUSH EAX                            ; 0046b0ef
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0046b0f0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0046b0f5
    MOV dword ptr [EBP + -0x8],EAX      ; 0046b0f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b0fb
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b0fe
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b104
    IMUL EAX,dword ptr [EDX + 0x204]    ; 0046b107
    LEA EAX,[EAX + EAX*0x2]             ; 0046b10e
    MOV dword ptr [EBP + -0x10],EAX     ; 0046b111
    PUSH 0x27ad                         ; 0046b114
    MOV EAX,0x61d2e1                    ; 0046b119 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b11e | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x10]     ; 0046b11f
    PUSH EAX                            ; 0046b122
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0046b123
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046b128
    MOV dword ptr [EBP + -0x18],EAX     ; 0046b12b
    PUSH 0x27ae                         ; 0046b12e
    MOV EAX,0x61d2f3                    ; 0046b133 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b138 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b139
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b13c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b142
    IMUL EAX,dword ptr [EDX + 0x204]    ; 0046b145
    PUSH EAX                            ; 0046b14c
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0046b14d
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046b152
    MOV dword ptr [EBP + -0x14],EAX     ; 0046b155
    CMP dword ptr [EBP + -0x18],0x0     ; 0046b158
    JZ 0x0046b164                       ; 0046b15c
        ;   XREF to: 0046b164 (CONDITIONAL_JUMP)  ; LAB_0046b164
    CMP dword ptr [EBP + -0x14],0x0     ; 0046b15e
    JNZ 0x0046b186                      ; 0046b162
        ;   XREF to: 0046b186 (CONDITIONAL_JUMP)  ; LAB_0046b186
    MOV dword ptr [0x02f0ca48],0x61d305 ; 0046b164 | g_CurrentFilename | = "..\\shape\\design.c"
        ;   Label: LAB_0046b164
    MOV dword ptr [0x02f0ca4c],0x27af   ; 0046b16e | g_CurrentLineNumber
    MOV EAX,0x61d317                    ; 0046b178 | = "Out of mem!"
    PUSH EAX                            ; 0046b17d | = "Out of mem!"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046b17e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046b183
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b186
        ;   Label: LAB_0046b186
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b189
    LEA EAX,[EAX + EAX*0x2]             ; 0046b18f
    MOV dword ptr [EBP + -0x4],EAX      ; 0046b192
    TEST dword ptr [EBP + -0x8],0x20    ; 0046b195
    JZ 0x0046b1f3                       ; 0046b19c
        ;   XREF to: 0046b1f3 (CONDITIONAL_JUMP)  ; LAB_0046b1f3
    MOV dword ptr [EBP + -0x2c],0x0     ; 0046b19e
    JMP 0x0046b1aa                      ; 0046b1a5
        ;   XREF to: 0046b1aa (UNCONDITIONAL_JUMP)  ; LAB_0046b1aa
    INC dword ptr [EBP + -0x2c]         ; 0046b1a7
        ;   Label: LAB_0046b1a7
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b1aa
        ;   Label: LAB_0046b1aa
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b1ad
    CMP EAX,dword ptr [EDX + 0x204]     ; 0046b1b0
    JGE 0x0046b1f1                      ; 0046b1b6
        ;   XREF to: 0046b1f1 (CONDITIONAL_JUMP)  ; LAB_0046b1f1
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046b1b8
    PUSH EAX                            ; 0046b1bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b1bc
    PUSH dword ptr [EAX + 0x200]        ; 0046b1bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b1c5
    MOV EDX,dword ptr [EBP + -0x2c]     ; 0046b1c8
    IMUL EDX,dword ptr [EAX + 0x200]    ; 0046b1cb
    MOV EAX,EDX                         ; 0046b1d2
    ADD EAX,dword ptr [EBP + -0x14]     ; 0046b1d4
    PUSH EAX                            ; 0046b1d7
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b1d8
    IMUL EAX,dword ptr [EBP + -0x4]     ; 0046b1db
    ADD EAX,dword ptr [EBP + -0x18]     ; 0046b1df
    PUSH EAX                            ; 0046b1e2
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b1e3
    PUSH EAX                            ; 0046b1e6
    CALL shape_design.c_readPixelRowFromFile_FUN_0046abf0 ; 0046b1e7
        ;   XREF to: 0046abf0 (UNCONDITIONAL_CALL)  ; void shape_design.c_readPixelRowFromFile_FUN_0046abf0(_FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, ...)
    ADD ESP,0x14                        ; 0046b1ec
    JMP 0x0046b1a7                      ; 0046b1ef
        ;   XREF to: 0046b1a7 (UNCONDITIONAL_JUMP)  ; LAB_0046b1a7
    JMP 0x0046b245                      ; 0046b1f1
        ;   XREF to: 0046b245 (UNCONDITIONAL_JUMP)  ; LAB_0046b245
        ;   Label: LAB_0046b1f1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b1f3
        ;   Label: LAB_0046b1f3
    MOV EAX,dword ptr [EAX + 0x204]     ; 0046b1f6
    DEC EAX                             ; 0046b1fc
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b1fd
    JMP 0x0046b206                      ; 0046b200
        ;   XREF to: 0046b206 (UNCONDITIONAL_JUMP)  ; LAB_0046b206
    ADD dword ptr [EBP + -0x2c],-0x1    ; 0046b202
        ;   Label: LAB_0046b202
    CMP dword ptr [EBP + -0x2c],0x0     ; 0046b206
        ;   Label: LAB_0046b206
    JL 0x0046b245                       ; 0046b20a
        ;   XREF to: 0046b245 (CONDITIONAL_JUMP)  ; LAB_0046b245
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046b20c
    PUSH EAX                            ; 0046b20f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b210
    PUSH dword ptr [EAX + 0x200]        ; 0046b213
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b219
    MOV EDX,dword ptr [EBP + -0x2c]     ; 0046b21c
    IMUL EDX,dword ptr [EAX + 0x200]    ; 0046b21f
    MOV EAX,EDX                         ; 0046b226
    ADD EAX,dword ptr [EBP + -0x14]     ; 0046b228
    PUSH EAX                            ; 0046b22b
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b22c
    IMUL EAX,dword ptr [EBP + -0x4]     ; 0046b22f
    ADD EAX,dword ptr [EBP + -0x18]     ; 0046b233
    PUSH EAX                            ; 0046b236
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b237
    PUSH EAX                            ; 0046b23a
    CALL shape_design.c_readPixelRowFromFile_FUN_0046abf0 ; 0046b23b
        ;   XREF to: 0046abf0 (UNCONDITIONAL_CALL)  ; void shape_design.c_readPixelRowFromFile_FUN_0046abf0(_FILE * file_handle, byte * rgb_buffer, byte * alpha_buffer, int pixel_count, ...)
    ADD ESP,0x14                        ; 0046b240
    JMP 0x0046b202                      ; 0046b243
        ;   XREF to: 0046b202 (UNCONDITIONAL_JUMP)  ; LAB_0046b202
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b245
        ;   Label: LAB_0046b245
    TEST byte ptr [EAX + 0xc],0x20      ; 0046b248
    JZ 0x0046b2a1                       ; 0046b24c
        ;   XREF to: 0046b2a1 (CONDITIONAL_JUMP)  ; LAB_0046b2a1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b24e
    PUSH EAX                            ; 0046b251
    MOV EAX,0x61d323                    ; 0046b252 | = "Unable to read file (%s)."
    PUSH EAX                            ; 0046b257 | = "Unable to read file (%s)."
    LEA EAX,[EBP + 0xfffffec8]          ; 0046b258
    PUSH EAX                            ; 0046b25e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046b25f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0046b264
    PUSH 0x27c2                         ; 0046b267
    MOV EAX,0x61d33d                    ; 0046b26c | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b271 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b272
    PUSH EAX                            ; 0046b275
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046b276
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046b27b
    MOV dword ptr [0x02f0ca48],0x61d34f ; 0046b27e | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x27c3   ; 0046b288 | g_CurrentLineNumber
    LEA EAX,[EBP + 0xfffffec8]          ; 0046b292
    PUSH EAX                            ; 0046b298
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046b299
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046b29e
    PUSH 0x27c5                         ; 0046b2a1
        ;   Label: LAB_0046b2a1
    MOV EAX,0x61d361                    ; 0046b2a6 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b2ab | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b2ac
    PUSH EAX                            ; 0046b2af
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0046b2b0
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0046b2b5
    MOV dword ptr [EBP + -0x34],0x0     ; 0046b2b8
    JMP 0x0046b2c4                      ; 0046b2bf
        ;   XREF to: 0046b2c4 (UNCONDITIONAL_JUMP)  ; LAB_0046b2c4
    INC dword ptr [EBP + -0x34]         ; 0046b2c1
        ;   Label: LAB_0046b2c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b2c4
        ;   Label: LAB_0046b2c4
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b2c7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b2cd
    IMUL EAX,dword ptr [EDX + 0x204]    ; 0046b2d0
    CMP EAX,dword ptr [EBP + -0x34]     ; 0046b2d7
    JLE 0x0046b2eb                      ; 0046b2da
        ;   XREF to: 0046b2eb (CONDITIONAL_JUMP)  ; LAB_0046b2eb
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b2dc
    ADD EAX,dword ptr [EBP + -0x34]     ; 0046b2df
    CMP byte ptr [EAX],0x0              ; 0046b2e2
    JZ 0x0046b2e9                       ; 0046b2e5
        ;   XREF to: 0046b2e9 (CONDITIONAL_JUMP)  ; LAB_0046b2e9
    JMP 0x0046b2eb                      ; 0046b2e7
        ;   XREF to: 0046b2eb (UNCONDITIONAL_JUMP)  ; LAB_0046b2eb
    JMP 0x0046b2c1                      ; 0046b2e9
        ;   XREF to: 0046b2c1 (UNCONDITIONAL_JUMP)  ; LAB_0046b2c1
        ;   Label: LAB_0046b2e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b2eb
        ;   Label: LAB_0046b2eb
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b2ee
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b2f4
    IMUL EAX,dword ptr [EDX + 0x204]    ; 0046b2f7
    CMP EAX,dword ptr [EBP + -0x34]     ; 0046b2fe
    JG 0x0046b328                       ; 0046b301
        ;   XREF to: 0046b328 (CONDITIONAL_JUMP)  ; LAB_0046b328
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b303
    MOV EAX,dword ptr [EAX + 0x200]     ; 0046b306
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b30c
    IMUL EAX,dword ptr [EDX + 0x204]    ; 0046b30f
    PUSH EAX                            ; 0046b316
    PUSH 0xff                           ; 0046b317
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b31c
    PUSH EAX                            ; 0046b31f
    CALL crt_memory.c_memset_FUN_005fde40 ; 0046b320
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0046b325
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b328
        ;   Label: LAB_0046b328
    FILD dword ptr [EAX + 0x220]        ; 0046b32b
    FILD dword ptr [0x01eb1760]         ; 0046b331 | g_TextureAtlasDimension
    FMULP                               ; 0046b337
    FILD dword ptr [EBP + 0x24]         ; 0046b339
    FDIVP                               ; 0046b33c
    FADD double ptr [0x0061d376]        ; 0046b33e | g_CoordinateRoundingOffset
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b344
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x28]       ; 0046b349
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b34c
    FILD dword ptr [EAX + 0x224]        ; 0046b34f
    FILD dword ptr [0x01eb1760]         ; 0046b355 | g_TextureAtlasDimension
    FMULP                               ; 0046b35b
    FILD dword ptr [EBP + 0x28]         ; 0046b35d
    FDIVP                               ; 0046b360
    FADD double ptr [0x0061d376]        ; 0046b362 | g_CoordinateRoundingOffset
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b368
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x24]       ; 0046b36d
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046b370
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b373
    MOV dword ptr [EDX + 0x230],EAX     ; 0046b376
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046b37c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b37f
    MOV dword ptr [EDX + 0x234],EAX     ; 0046b382
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b388
    FILD dword ptr [EAX + 0x218]        ; 0046b38b
    FILD dword ptr [0x01eb1760]         ; 0046b391 | g_TextureAtlasDimension
    FMULP                               ; 0046b397
    FILD dword ptr [EBP + 0x24]         ; 0046b399
    FDIVP                               ; 0046b39c
    FADD double ptr [0x0061d376]        ; 0046b39e | g_CoordinateRoundingOffset
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b3a4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x20]       ; 0046b3a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b3ac
    FILD dword ptr [EAX + 0x21c]        ; 0046b3af
    FILD dword ptr [0x01eb1760]         ; 0046b3b5 | g_TextureAtlasDimension
    FMULP                               ; 0046b3bb
    FILD dword ptr [EBP + 0x28]         ; 0046b3bd
    FDIVP                               ; 0046b3c0
    FADD double ptr [0x0061d376]        ; 0046b3c2 | g_CoordinateRoundingOffset
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b3c8
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x1c]       ; 0046b3cd
    MOV EAX,[0x01eb1760]                ; 0046b3d0 | g_TextureAtlasDimension
    DEC EAX                             ; 0046b3d5
    CMP EAX,dword ptr [EBP + -0x20]     ; 0046b3d6
    JGE 0x0046b3e4                      ; 0046b3d9
        ;   XREF to: 0046b3e4 (CONDITIONAL_JUMP)  ; LAB_0046b3e4
    MOV EAX,[0x01eb1760]                ; 0046b3db | g_TextureAtlasDimension
    DEC EAX                             ; 0046b3e0
    MOV dword ptr [EBP + -0x20],EAX     ; 0046b3e1
    MOV EAX,[0x01eb1760]                ; 0046b3e4 | g_TextureAtlasDimension
        ;   Label: LAB_0046b3e4
    DEC EAX                             ; 0046b3e9
    CMP EAX,dword ptr [EBP + -0x1c]     ; 0046b3ea
    JGE 0x0046b3f8                      ; 0046b3ed
        ;   XREF to: 0046b3f8 (CONDITIONAL_JUMP)  ; LAB_0046b3f8
    MOV EAX,[0x01eb1760]                ; 0046b3ef | g_TextureAtlasDimension
    DEC EAX                             ; 0046b3f4
    MOV dword ptr [EBP + -0x1c],EAX     ; 0046b3f5
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046b3f8
        ;   Label: LAB_0046b3f8
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b3fb
    MOV dword ptr [EDX + 0x228],EAX     ; 0046b3fe
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b404
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b407
    MOV dword ptr [EDX + 0x22c],EAX     ; 0046b40a
    MOV dword ptr [EBP + -0x2c],0x0     ; 0046b410
    JMP 0x0046b41f                      ; 0046b417
        ;   XREF to: 0046b41f (UNCONDITIONAL_JUMP)  ; LAB_0046b41f
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b419
        ;   Label: LAB_0046b419
    INC dword ptr [EBP + -0x2c]         ; 0046b41c
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b41f
        ;   Label: LAB_0046b41f
    CMP EAX,dword ptr [EBP + -0x24]     ; 0046b422
    JGE 0x0046b6a5                      ; 0046b425
        ;   XREF to: 0046b6a5 (CONDITIONAL_JUMP)  ; LAB_0046b6a5
    MOV dword ptr [EBP + -0x30],0x0     ; 0046b42b
    JMP 0x0046b43a                      ; 0046b432
        ;   XREF to: 0046b43a (UNCONDITIONAL_JUMP)  ; LAB_0046b43a
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046b434
        ;   Label: LAB_0046b434
    INC dword ptr [EBP + -0x30]         ; 0046b437
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046b43a
        ;   Label: LAB_0046b43a
    CMP EAX,dword ptr [EBP + -0x28]     ; 0046b43d
    JGE 0x0046b6a0                      ; 0046b440
        ;   XREF to: 0046b6a0 (CONDITIONAL_JUMP)  ; LAB_0046b6a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b446
    MOV EDX,dword ptr [EAX + 0x248]     ; 0046b449
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b44f
    SUB EDX,dword ptr [EAX + 0x240]     ; 0046b452
    MOV dword ptr [EBP + 0xfffffeb8],EDX ; 0046b458
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b45e
    FILD dword ptr [EBP + -0x30]        ; 0046b464
    FMULP                               ; 0046b467
    FILD dword ptr [EBP + -0x28]        ; 0046b469
    FDIVP                               ; 0046b46c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b46e
    FILD dword ptr [EAX + 0x240]        ; 0046b471
    FADDP                               ; 0046b477
    FMUL double ptr [0x0061d37e]        ; 0046b479 | g_TextureScalingFactor_0061d37e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b47f
    FILD dword ptr [EAX + 0x200]        ; 0046b482
    FMULP                               ; 0046b488
    FSTP double ptr [EBP + 0xfffffeb0]  ; 0046b48a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b490
    MOV EDX,dword ptr [EAX + 0x24c]     ; 0046b493
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b499
    SUB EDX,dword ptr [EAX + 0x244]     ; 0046b49c
    MOV dword ptr [EBP + 0xfffffeb8],EDX ; 0046b4a2
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b4a8
    FILD dword ptr [EBP + -0x2c]        ; 0046b4ae
    FMULP                               ; 0046b4b1
    FILD dword ptr [EBP + -0x24]        ; 0046b4b3
    FDIVP                               ; 0046b4b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b4b8
    FILD dword ptr [EAX + 0x244]        ; 0046b4bb
    FADDP                               ; 0046b4c1
    FMUL double ptr [0x0061d37e]        ; 0046b4c3 | g_TextureScalingFactor_0061d37e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b4c9
    FILD dword ptr [EAX + 0x204]        ; 0046b4cc
    FMULP                               ; 0046b4d2
    FSTP double ptr [EBP + 0xfffffea8]  ; 0046b4d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b4da
    MOV EDX,dword ptr [EAX + 0x248]     ; 0046b4dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b4e3
    SUB EDX,dword ptr [EAX + 0x240]     ; 0046b4e6
    MOV EAX,EDX                         ; 0046b4ec
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 0046b4ee
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b4f4
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046b4fa
    INC EAX                             ; 0046b4fd
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 0046b4fe
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b504
    FMULP                               ; 0046b50a
    FILD dword ptr [EBP + -0x28]        ; 0046b50c
    FDIVP                               ; 0046b50f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b511
    FILD dword ptr [EAX + 0x240]        ; 0046b514
    FADDP                               ; 0046b51a
    FMUL double ptr [0x0061d37e]        ; 0046b51c | g_TextureScalingFactor_0061d37e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b522
    FILD dword ptr [EAX + 0x200]        ; 0046b525
    FMULP                               ; 0046b52b
    FSTP double ptr [EBP + 0xfffffea0]  ; 0046b52d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b533
    MOV EDX,dword ptr [EAX + 0x24c]     ; 0046b536
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b53c
    SUB EDX,dword ptr [EAX + 0x244]     ; 0046b53f
    MOV EAX,EDX                         ; 0046b545
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 0046b547
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b54d
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0046b553
    INC EAX                             ; 0046b556
    MOV dword ptr [EBP + 0xfffffeb8],EAX ; 0046b557
    FILD dword ptr [EBP + 0xfffffeb8]   ; 0046b55d
    FMULP                               ; 0046b563
    FILD dword ptr [EBP + -0x24]        ; 0046b565
    FDIVP                               ; 0046b568
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b56a
    FILD dword ptr [EAX + 0x244]        ; 0046b56d
    FADDP                               ; 0046b573
    FMUL double ptr [0x0061d37e]        ; 0046b575 | g_TextureScalingFactor_0061d37e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b57b
    FILD dword ptr [EAX + 0x204]        ; 0046b57e
    FMULP                               ; 0046b584
    FSTP double ptr [EBP + 0xfffffe98]  ; 0046b586
    LEA EAX,[EBP + 0xfffffe94]          ; 0046b58c
    PUSH EAX                            ; 0046b592
    LEA EAX,[EBP + 0xfffffebc]          ; 0046b593
    PUSH EAX                            ; 0046b599
    LEA EAX,[EBP + 0xfffffe90]          ; 0046b59a
    PUSH EAX                            ; 0046b5a0
    LEA EAX,[EBP + 0xfffffe8c]          ; 0046b5a1
    PUSH EAX                            ; 0046b5a7
    FLD double ptr [EBP + 0xfffffe98]   ; 0046b5a8
    SUB ESP,0x8                         ; 0046b5ae
    FSTP double ptr [ESP]               ; 0046b5b1
    FLD double ptr [EBP + 0xfffffea0]   ; 0046b5b4
    SUB ESP,0x8                         ; 0046b5ba
    FSTP double ptr [ESP]               ; 0046b5bd
    FLD double ptr [EBP + 0xfffffea8]   ; 0046b5c0
    SUB ESP,0x8                         ; 0046b5c6
    FSTP double ptr [ESP]               ; 0046b5c9
    FLD double ptr [EBP + 0xfffffeb0]   ; 0046b5cc
    SUB ESP,0x8                         ; 0046b5d2
    FSTP double ptr [ESP]               ; 0046b5d5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b5d8
    PUSH dword ptr [EAX + 0x204]        ; 0046b5db
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b5e1
    PUSH dword ptr [EAX + 0x200]        ; 0046b5e4
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b5ea
    PUSH EAX                            ; 0046b5ed
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046b5ee
    PUSH EAX                            ; 0046b5f1
    CALL shape_design.c_sampleAndFilterPixel_FUN_0046ae20 ; 0046b5f2
        ;   XREF to: 0046ae20 (UNCONDITIONAL_CALL)  ; void shape_design.c_sampleAndFilterPixel_FUN_0046ae20(void * rgb_buffer, void * alpha_buffer, int col_coord, int row_coord, ...)
    ADD ESP,0x40                        ; 0046b5f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046b5fa
    CMP dword ptr [EAX + 0x214],0x0     ; 0046b5fd
    JNZ 0x0046b625                      ; 0046b604
        ;   XREF to: 0046b625 (CONDITIONAL_JUMP)  ; LAB_0046b625
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b606
    ADD EAX,dword ptr [EBP + -0x2c]     ; 0046b609
    MOV EDX,dword ptr [0x01eb1760]      ; 0046b60c | g_TextureAtlasDimension
    IMUL EDX,EAX                        ; 0046b612
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046b615
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046b618
    ADD EDX,EAX                         ; 0046b61b
    MOV dword ptr [EBP + 0xfffffec0],EDX ; 0046b61d
    JMP 0x0046b646                      ; 0046b623
        ;   XREF to: 0046b646 (UNCONDITIONAL_JUMP)  ; LAB_0046b646
    MOV EAX,dword ptr [EBP + -0x24]     ; 0046b625
        ;   Label: LAB_0046b625
    DEC EAX                             ; 0046b628
    SUB EAX,dword ptr [EBP + -0x2c]     ; 0046b629
    MOV EDX,dword ptr [EBP + -0x20]     ; 0046b62c
    ADD EDX,EAX                         ; 0046b62f
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b631
    ADD EAX,dword ptr [EBP + -0x30]     ; 0046b634
    IMUL EAX,dword ptr [0x01eb1760]     ; 0046b637 | g_TextureAtlasDimension
    ADD EAX,EDX                         ; 0046b63e
    MOV dword ptr [EBP + 0xfffffec0],EAX ; 0046b640
    MOV EAX,dword ptr [EBP + 0xfffffec0] ; 0046b646
        ;   Label: LAB_0046b646
    LEA EAX,[EAX + EAX*0x2]             ; 0046b64c
    MOV dword ptr [EBP + 0xfffffec4],EAX ; 0046b64f
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046b655
    ADD EDX,dword ptr [EBP + 0xfffffec4] ; 0046b658
    MOV AL,byte ptr [EBP + 0xfffffe8c]  ; 0046b65e
    MOV byte ptr [EDX],AL               ; 0046b664
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046b666
    ADD EDX,dword ptr [EBP + 0xfffffec4] ; 0046b669
    MOV AL,byte ptr [EBP + 0xfffffe90]  ; 0046b66f
    MOV byte ptr [EDX + 0x1],AL         ; 0046b675
    MOV EDX,dword ptr [EBP + 0x18]      ; 0046b678
    ADD EDX,dword ptr [EBP + 0xfffffec4] ; 0046b67b
    MOV AL,byte ptr [EBP + 0xfffffebc]  ; 0046b681
    MOV byte ptr [EDX + 0x2],AL         ; 0046b687
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046b68a
    ADD EDX,dword ptr [EBP + 0xfffffec0] ; 0046b68d
    MOV AL,byte ptr [EBP + 0xfffffe94]  ; 0046b693
    MOV byte ptr [EDX],AL               ; 0046b699
    JMP 0x0046b434                      ; 0046b69b
        ;   XREF to: 0046b434 (UNCONDITIONAL_JUMP)  ; LAB_0046b434
    JMP 0x0046b419                      ; 0046b6a0
        ;   XREF to: 0046b419 (UNCONDITIONAL_JUMP)  ; LAB_0046b419
        ;   Label: LAB_0046b6a0
    PUSH 0x2818                         ; 0046b6a5
        ;   Label: LAB_0046b6a5
    MOV EAX,0x61d386                    ; 0046b6aa | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b6af | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046b6b0
    PUSH EAX                            ; 0046b6b3
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046b6b4
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046b6b9
    PUSH 0x2819                         ; 0046b6bc
    MOV EAX,0x61d398                    ; 0046b6c1 | = "..\\shape\\design.c"
    PUSH EAX                            ; 0046b6c6 | = "..\\shape\\design.c"
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b6c7
    PUSH EAX                            ; 0046b6ca
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0046b6cb
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0046b6d0
    MOV ESP,EBP                         ; 0046b6d3
    POP EBP                             ; 0046b6d5
    POP EDI                             ; 0046b6d6
    POP ESI                             ; 0046b6d7
    POP EBX                             ; 0046b6d8
    RET                                 ; 0046b6d9

