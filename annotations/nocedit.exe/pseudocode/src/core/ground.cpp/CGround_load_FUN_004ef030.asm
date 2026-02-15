; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ground_cpp_CGround_load_FUN_004ef030(CGround *this_ptr,char *filename)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc8]:1  local_c8
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x7b]:1  local_7b
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_init_FUN_005e1ef0 at 005e1f1b
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_0062e571
;   TerminatedCString s_eopen_ext_not_found_0062e584
;   TerminatedCString s_core_ground_cpp_0062e59b
;   TerminatedCString s_eopen_Cannot_open_file_0062e5ae
;   undefined4 s_cpp_0062e72e
;   TerminatedCString s_rb_0062e745
;   TerminatedCString s_raw_0062e748
;   undefined4 DAT_0062e749
;   undefined4 DAT_0062e74a
;   undefined4 DAT_0062e74b
;   TerminatedCString s_data_0062e74c
;   TerminatedCString s_core_ground_cpp_0062e751
;   TerminatedCString s_rb_0062e764
;   TerminatedCString s_clr_0062e767
;   undefined4 DAT_0062e768
;   ... and 6 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_texlist.cpp_CTextureList_load_FUN_005dbe00
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fread_FUN_005fd990
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef030
        ;   Label: core_ground.cpp_CGround_load_FUN_004ef030
    PUSH ESI                            ; 004ef031
    PUSH EDI                            ; 004ef032
    PUSH EBP                            ; 004ef033
    SUB ESP,0xbc                        ; 004ef034
    MOV EBX,dword ptr [ESP + 0xd0]      ; 004ef03a
    MOV EDX,0x62e74c                    ; 004ef041 | = "data"
    MOV EBP,0x62e748                    ; 004ef046 | = "raw"
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004ef04b
    MOV EDI,ESP                         ; 004ef052
    MOV ECX,0x62e745                    ; 004ef054 | = "rb"
    PUSH EDI                            ; 004ef059
    MOV AL,byte ptr [ESI]               ; 004ef05a
        ;   Label: LAB_004ef05a
    MOV byte ptr [EDI],AL               ; 004ef05c
    CMP AL,0x0                          ; 004ef05e
    JZ 0x004ef072                       ; 004ef060
        ;   XREF to: 004ef072 (CONDITIONAL_JUMP)  ; LAB_004ef072
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef062
    ADD ESI,0x2                         ; 004ef065
    MOV byte ptr [EDI + 0x1],AL         ; 004ef068
    ADD EDI,0x2                         ; 004ef06b
    CMP AL,0x0                          ; 004ef06e
    JNZ 0x004ef05a                      ; 004ef070
        ;   XREF to: 004ef05a (CONDITIONAL_JUMP)  ; LAB_004ef05a
    POP EDI                             ; 004ef072
        ;   Label: LAB_004ef072
    MOV ESI,ESP                         ; 004ef073
    MOV dword ptr [ESP + 0xa8],EDX      ; 004ef075 | = "data"
    MOV DL,0x2e                         ; 004ef07c | s_cpp_0062e72e
    MOV dword ptr [ESP + 0xac],ECX      ; 004ef07e | = "rb"
    MOV AL,byte ptr [ESI]               ; 004ef085
        ;   Label: LAB_004ef085
    CMP AL,DL                           ; 004ef087
    JZ 0x004ef09d                       ; 004ef089
        ;   XREF to: 004ef09d (CONDITIONAL_JUMP)  ; LAB_004ef09d
    CMP AL,0x0                          ; 004ef08b
    JZ 0x004ef09b                       ; 004ef08d
        ;   XREF to: 004ef09b (CONDITIONAL_JUMP)  ; LAB_004ef09b
    INC ESI                             ; 004ef08f
    MOV AL,byte ptr [ESI]               ; 004ef090
    CMP AL,DL                           ; 004ef092
    JZ 0x004ef09d                       ; 004ef094
        ;   XREF to: 004ef09d (CONDITIONAL_JUMP)  ; LAB_004ef09d
    INC ESI                             ; 004ef096
    CMP AL,0x0                          ; 004ef097
    JNZ 0x004ef085                      ; 004ef099
        ;   XREF to: 004ef085 (CONDITIONAL_JUMP)  ; LAB_004ef085
    SUB ESI,ESI                         ; 004ef09b
        ;   Label: LAB_004ef09b
    MOV EDI,ESI                         ; 004ef09d
        ;   Label: LAB_004ef09d
    TEST ESI,ESI                        ; 004ef09f
    JZ 0x004ef331                       ; 004ef0a1
        ;   XREF to: 004ef331 (CONDITIONAL_JUMP)  ; LAB_004ef331
    INC EDI                             ; 004ef0a7
        ;   Label: LAB_004ef0a7
    MOV ESI,EBP                         ; 004ef0a8
    MOV EDX,dword ptr [ESP + 0xac]      ; 004ef0aa | = "rb"
    PUSH EDI                            ; 004ef0b1
    MOV AL,byte ptr [ESI]               ; 004ef0b2 | = "raw" | DAT_0062e74a
        ;   Label: LAB_004ef0b2
    MOV byte ptr [EDI],AL               ; 004ef0b4
    CMP AL,0x0                          ; 004ef0b6
    JZ 0x004ef0ca                       ; 004ef0b8
        ;   XREF to: 004ef0ca (CONDITIONAL_JUMP)  ; LAB_004ef0ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef0ba | DAT_0062e749 | DAT_0062e74b
    ADD ESI,0x2                         ; 004ef0bd
    MOV byte ptr [EDI + 0x1],AL         ; 004ef0c0
    ADD EDI,0x2                         ; 004ef0c3
    CMP AL,0x0                          ; 004ef0c6
    JNZ 0x004ef0b2                      ; 004ef0c8
        ;   XREF to: 004ef0b2 (CONDITIONAL_JUMP)  ; LAB_004ef0b2
    POP EDI                             ; 004ef0ca
        ;   Label: LAB_004ef0ca
    PUSH EDX                            ; 004ef0cb | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 004ef0cc
    PUSH EAX                            ; 004ef0d0
    MOV ECX,dword ptr [ESP + 0xb0]      ; 004ef0d1 | = "data"
    PUSH ECX                            ; 004ef0d8 | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004ef0d9
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004ef0de
    MOV ESI,EAX                         ; 004ef0e1
    TEST EAX,EAX                        ; 004ef0e3
    JNZ 0x004ef10a                      ; 004ef0e5
        ;   XREF to: 004ef10a (CONDITIONAL_JUMP)  ; LAB_004ef10a
    MOV EDI,0x62e59b                    ; 004ef0e7 | = "..\\core\\ground.cpp"
    MOV EBP,0x44                        ; 004ef0ec
    PUSH 0x62e5ae                       ; 004ef0f1 | = "eopen - Cannot open file"
    MOV dword ptr [0x02f0ca48],EDI      ; 004ef0f6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004ef0fc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ef102
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ef107
    XOR EAX,EAX                         ; 004ef10a
        ;   Label: LAB_004ef10a
    MOV EDX,dword ptr [EBX + 0x4]       ; 004ef10c
    MOV dword ptr [ESP + 0xb4],EAX      ; 004ef10f
    TEST EDX,EDX                        ; 004ef116
    JLE 0x004ef17e                      ; 004ef118
        ;   XREF to: 004ef17e (CONDITIONAL_JUMP)  ; LAB_004ef17e
    MOV EBP,dword ptr [EBX]             ; 004ef11a
        ;   Label: LAB_004ef11a
    XOR EDI,EDI                         ; 004ef11c
    TEST EBP,EBP                        ; 004ef11e
    JLE 0x004ef168                      ; 004ef120
        ;   XREF to: 004ef168 (CONDITIONAL_JUMP)  ; LAB_004ef168
    MOV EBP,dword ptr [ESI + 0x4]       ; 004ef122
        ;   Label: LAB_004ef122
    TEST EBP,EBP                        ; 004ef125
    JLE 0x004ef140                      ; 004ef127
        ;   XREF to: 004ef140 (CONDITIONAL_JUMP)  ; LAB_004ef140
    MOV EAX,dword ptr [ESI]             ; 004ef129
    MOV AL,byte ptr [EAX]               ; 004ef12b
    AND EAX,0xff                        ; 004ef12d
    SUB EAX,0xd                         ; 004ef132
    CMP EAX,0xfd                        ; 004ef135
    JA 0x004ef358                       ; 004ef13a
        ;   XREF to: 004ef358 (CONDITIONAL_JUMP)  ; LAB_004ef358
    PUSH ESI                            ; 004ef140
        ;   Label: LAB_004ef140
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004ef141
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004ef146
    SHL EAX,0x7                         ; 004ef149
        ;   Label: LAB_004ef149
    MOV EDX,dword ptr [EBX]             ; 004ef14c
    MOV ECX,EAX                         ; 004ef14e
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004ef150
    IMUL EAX,EDX                        ; 004ef157
    MOV EDX,dword ptr [EBX + 0x24]      ; 004ef15a
    ADD EAX,EDI                         ; 004ef15d
    MOV word ptr [EDX + EAX*0x4],CX     ; 004ef15f
    INC EDI                             ; 004ef163
    CMP EDI,dword ptr [EBX]             ; 004ef164
    JL 0x004ef122                       ; 004ef166
        ;   XREF to: 004ef122 (CONDITIONAL_JUMP)  ; LAB_004ef122
    MOV ECX,dword ptr [ESP + 0xb4]      ; 004ef168
        ;   Label: LAB_004ef168
    INC ECX                             ; 004ef16f
    MOV EDI,dword ptr [EBX + 0x4]       ; 004ef170
    MOV dword ptr [ESP + 0xb4],ECX      ; 004ef173
    CMP ECX,EDI                         ; 004ef17a
    JL 0x004ef11a                       ; 004ef17c
        ;   XREF to: 004ef11a (CONDITIONAL_JUMP)  ; LAB_004ef11a
    PUSH 0x102                          ; 004ef17e
        ;   Label: LAB_004ef17e
    PUSH 0x62e751                       ; 004ef183 | = "..\\core\\ground.cpp"
    PUSH ESI                            ; 004ef188
    MOV EBP,0x62e76b                    ; 004ef189 | = "data"
    LEA EDI,[ESP + 0x5c]                ; 004ef18e
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004ef192
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    MOV EAX,0x62e764                    ; 004ef197 | = "rb"
    ADD ESP,0xc                         ; 004ef19c
    MOV DL,0x2e                         ; 004ef19f
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004ef1a1
    MOV dword ptr [ESP + 0xa4],EBP      ; 004ef1a8 | = "data"
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ef1af | = "rb"
    PUSH EDI                            ; 004ef1b6
    MOV AL,byte ptr [ESI]               ; 004ef1b7
        ;   Label: LAB_004ef1b7
    MOV byte ptr [EDI],AL               ; 004ef1b9
    CMP AL,0x0                          ; 004ef1bb
    JZ 0x004ef1cf                       ; 004ef1bd
        ;   XREF to: 004ef1cf (CONDITIONAL_JUMP)  ; LAB_004ef1cf
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef1bf
    ADD ESI,0x2                         ; 004ef1c2
    MOV byte ptr [EDI + 0x1],AL         ; 004ef1c5
    ADD EDI,0x2                         ; 004ef1c8
    CMP AL,0x0                          ; 004ef1cb
    JNZ 0x004ef1b7                      ; 004ef1cd
        ;   XREF to: 004ef1b7 (CONDITIONAL_JUMP)  ; LAB_004ef1b7
    POP EDI                             ; 004ef1cf
        ;   Label: LAB_004ef1cf
    LEA ESI,[ESP + 0x50]                ; 004ef1d0
    MOV EBP,0x62e767                    ; 004ef1d4 | = "clr"
    MOV AL,byte ptr [ESI]               ; 004ef1d9
        ;   Label: LAB_004ef1d9
    CMP AL,DL                           ; 004ef1db
    JZ 0x004ef1f1                       ; 004ef1dd
        ;   XREF to: 004ef1f1 (CONDITIONAL_JUMP)  ; LAB_004ef1f1
    CMP AL,0x0                          ; 004ef1df
    JZ 0x004ef1ef                       ; 004ef1e1
        ;   XREF to: 004ef1ef (CONDITIONAL_JUMP)  ; LAB_004ef1ef
    INC ESI                             ; 004ef1e3
    MOV AL,byte ptr [ESI]               ; 004ef1e4
    CMP AL,DL                           ; 004ef1e6
    JZ 0x004ef1f1                       ; 004ef1e8
        ;   XREF to: 004ef1f1 (CONDITIONAL_JUMP)  ; LAB_004ef1f1
    INC ESI                             ; 004ef1ea
    CMP AL,0x0                          ; 004ef1eb
    JNZ 0x004ef1d9                      ; 004ef1ed
        ;   XREF to: 004ef1d9 (CONDITIONAL_JUMP)  ; LAB_004ef1d9
    SUB ESI,ESI                         ; 004ef1ef
        ;   Label: LAB_004ef1ef
    MOV EDI,ESI                         ; 004ef1f1
        ;   Label: LAB_004ef1f1
    TEST ESI,ESI                        ; 004ef1f3
    JNZ 0x004ef21a                      ; 004ef1f5
        ;   XREF to: 004ef21a (CONDITIONAL_JUMP)  ; LAB_004ef21a
    MOV EDX,0x62e571                    ; 004ef1f7 | = "..\\core\\ground.cpp"
    MOV ECX,0x40                        ; 004ef1fc
    PUSH 0x62e584                       ; 004ef201 | = "eopen - ext not found!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004ef206 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004ef20c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ef212
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ef217
    INC EDI                             ; 004ef21a
        ;   Label: LAB_004ef21a
    MOV ESI,EBP                         ; 004ef21b
    PUSH EDI                            ; 004ef21d
    MOV AL,byte ptr [ESI]               ; 004ef21e | = "clr" | DAT_0062e769
        ;   Label: LAB_004ef21e
    MOV byte ptr [EDI],AL               ; 004ef220
    CMP AL,0x0                          ; 004ef222
    JZ 0x004ef236                       ; 004ef224
        ;   XREF to: 004ef236 (CONDITIONAL_JUMP)  ; LAB_004ef236
    MOV AL,byte ptr [ESI + 0x1]         ; 004ef226 | DAT_0062e768 | DAT_0062e76a
    ADD ESI,0x2                         ; 004ef229
    MOV byte ptr [EDI + 0x1],AL         ; 004ef22c
    ADD EDI,0x2                         ; 004ef22f
    CMP AL,0x0                          ; 004ef232
    JNZ 0x004ef21e                      ; 004ef234
        ;   XREF to: 004ef21e (CONDITIONAL_JUMP)  ; LAB_004ef21e
    POP EDI                             ; 004ef236
        ;   Label: LAB_004ef236
    MOV ESI,dword ptr [ESP + 0xa0]      ; 004ef237
    PUSH ESI                            ; 004ef23e | = "rb"
    LEA EAX,[ESP + 0x54]                ; 004ef23f
    PUSH EAX                            ; 004ef243
    MOV EDI,dword ptr [ESP + 0xac]      ; 004ef244
    PUSH EDI                            ; 004ef24b | = "data"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004ef24c
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004ef251
    MOV ESI,EAX                         ; 004ef254
    TEST EAX,EAX                        ; 004ef256
    JNZ 0x004ef27c                      ; 004ef258
        ;   XREF to: 004ef27c (CONDITIONAL_JUMP)  ; LAB_004ef27c
    MOV EBP,0x62e59b                    ; 004ef25a | = "..\\core\\ground.cpp"
    MOV EAX,0x44                        ; 004ef25f
    PUSH 0x62e5ae                       ; 004ef264 | = "eopen - Cannot open file"
    MOV dword ptr [0x02f0ca48],EBP      ; 004ef269 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004ef26f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ef274
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ef279
    MOV dword ptr [ESP + 0xb0],ESI      ; 004ef27c
        ;   Label: LAB_004ef27c
    XOR EDX,EDX                         ; 004ef283
    MOV ECX,dword ptr [EBX + 0x4]       ; 004ef285
    MOV dword ptr [ESP + 0xb8],EDX      ; 004ef288
    TEST ECX,ECX                        ; 004ef28f
    JLE 0x004ef2ea                      ; 004ef291
        ;   XREF to: 004ef2ea (CONDITIONAL_JUMP)  ; LAB_004ef2ea
    MOV EBP,0x2                         ; 004ef293
    MOV EDI,dword ptr [EBX]             ; 004ef298
        ;   Label: LAB_004ef298
    XOR ESI,ESI                         ; 004ef29a
    TEST EDI,EDI                        ; 004ef29c
    JLE 0x004ef2d4                      ; 004ef29e
        ;   XREF to: 004ef2d4 (CONDITIONAL_JUMP)  ; LAB_004ef2d4
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004ef2a0
        ;   Label: LAB_004ef2a0
    MOV EDX,dword ptr [EBX]             ; 004ef2a7
    PUSH EAX                            ; 004ef2a9
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004ef2aa
    IMUL EAX,EDX                        ; 004ef2b1
    ADD EAX,ESI                         ; 004ef2b4
    MOV EDI,dword ptr [EBX + 0x24]      ; 004ef2b6
    SHL EAX,0x2                         ; 004ef2b9
    PUSH EBP                            ; 004ef2bc
    ADD EAX,EDI                         ; 004ef2bd
    PUSH 0x1                            ; 004ef2bf
    ADD EAX,0x2                         ; 004ef2c1
    PUSH EAX                            ; 004ef2c4
    INC ESI                             ; 004ef2c5
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004ef2c6
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV ECX,dword ptr [EBX]             ; 004ef2cb
    ADD ESP,0x10                        ; 004ef2cd
    CMP ESI,ECX                         ; 004ef2d0
    JL 0x004ef2a0                       ; 004ef2d2
        ;   XREF to: 004ef2a0 (CONDITIONAL_JUMP)  ; LAB_004ef2a0
    MOV EDX,dword ptr [ESP + 0xb8]      ; 004ef2d4
        ;   Label: LAB_004ef2d4
    INC EDX                             ; 004ef2db
    MOV ECX,dword ptr [EBX + 0x4]       ; 004ef2dc
    MOV dword ptr [ESP + 0xb8],EDX      ; 004ef2df
    CMP EDX,ECX                         ; 004ef2e6
    JL 0x004ef298                       ; 004ef2e8
        ;   XREF to: 004ef298 (CONDITIONAL_JUMP)  ; LAB_004ef298
    PUSH 0x10c                          ; 004ef2ea
        ;   Label: LAB_004ef2ea
    PUSH 0x62e770                       ; 004ef2ef | = "..\\core\\ground.cpp"
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004ef2f4
    PUSH ESI                            ; 004ef2fb
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004ef2fc
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004ef301
    MOV EDI,dword ptr [ESP + 0xd4]      ; 004ef304
    PUSH EDI                            ; 004ef30b
    MOV EBP,dword ptr [EBX + 0x28]      ; 004ef30c
    PUSH EBP                            ; 004ef30f
    CALL core_texlist.cpp_CTextureList_load_FUN_005dbe00 ; 004ef310
        ;   XREF to: 005dbe00 (UNCONDITIONAL_CALL)  ; void core_texlist.cpp_CTextureList_load_FUN_005dbe00(CTextureList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004ef315
    ADD ESP,0xbc                        ; 004ef318
    POP EBP                             ; 004ef31e
    POP EDI                             ; 004ef31f
    POP ESI                             ; 004ef320
    POP EBX                             ; 004ef321
    LEA EAX,[EAX]                       ; 004ef322
    LEA EDX,[EDX]                       ; 004ef328
    MOV EAX,EAX                         ; 004ef32e
    RET                                 ; 004ef330
    MOV ESI,0x62e571                    ; 004ef331 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004ef331
    MOV EAX,0x40                        ; 004ef336
    PUSH 0x62e584                       ; 004ef33b | = "eopen - ext not found!"
    MOV dword ptr [0x02f0ca48],ESI      ; 004ef340 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004ef346 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ef34b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004ef350
    JMP 0x004ef0a7                      ; 004ef353
        ;   XREF to: 004ef0a7 (UNCONDITIONAL_JUMP)  ; LAB_004ef0a7
    LEA EAX,[EBP + -0x1]                ; 004ef358
        ;   Label: LAB_004ef358
    MOV dword ptr [ESI + 0x4],EAX       ; 004ef35b
    MOV EAX,dword ptr [ESI]             ; 004ef35e
    LEA EDX,[EAX + 0x1]                 ; 004ef360
    MOV dword ptr [ESI],EDX             ; 004ef363
    MOV AL,byte ptr [EAX]               ; 004ef365
    AND EAX,0xff                        ; 004ef367
    JMP 0x004ef149                      ; 004ef36c
        ;   XREF to: 004ef149 (UNCONDITIONAL_JUMP)  ; LAB_004ef149

