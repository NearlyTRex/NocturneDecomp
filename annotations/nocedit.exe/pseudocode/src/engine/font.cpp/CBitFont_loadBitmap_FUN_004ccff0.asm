; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0(CBitFont * this_ptr, char * filename, int width, int height, int first_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   first_char
; Local Variables:
; undefined1       Stack[-0x43c]:1  local_43c
; undefined1       Stack[-0x310]:1  local_310
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x110]:1  local_110
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004cd280 at 004cd2af
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_0062a4b6
;   TerminatedCString s_Too_many_bitmaps_0062a4c9
;   TerminatedCString s_art_0062a4da
;   TerminatedCString s_Invalid_font_file_size_s_0062a4de
;   TerminatedCString s_engine_font_cpp_0062a4fb
;   TerminatedCString s_engine_font_cpp_0062a50e
;   TerminatedCString s_Unable_to_allocate_memor_0062a521
;   TerminatedCString s_engine_font_cpp_0062a551
;   TerminatedCString s_act_0062a564
;   TerminatedCString s_rb_0062a568
;   TerminatedCString s_art_0062a56b
;   TerminatedCString s_engine_font_cpp_0062a56f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strupr_FUN_00600770
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550
;   engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccff0
        ;   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0
    PUSH ESI                            ; 004ccff1
    PUSH EDI                            ; 004ccff2
    PUSH EBP                            ; 004ccff3
    SUB ESP,0x42c                       ; 004ccff4
    MOV EBX,dword ptr [ESP + 0x440]     ; 004ccffa
    MOV EBP,dword ptr [ESP + 0x444]     ; 004cd001
    CMP dword ptr [EBX],0x4             ; 004cd008
    JGE 0x004cd256                      ; 004cd00b | LAB_004cd256
        ;   XREF to: 004cd256 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX]             ; 004cd011
        ;   Label: LAB_004cd011
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd013
    ADD EAX,EDX                         ; 004cd01a
    LEA ECX,[EBX + 0x4]                 ; 004cd01c
    SHL EAX,0x4                         ; 004cd01f
    MOV ESI,EBP                         ; 004cd022
    LEA EDI,[ECX + EAX*0x1]             ; 004cd024
    PUSH EDI                            ; 004cd027
    MOV AL,byte ptr [ESI]               ; 004cd028
        ;   Label: LAB_004cd028
    MOV byte ptr [EDI],AL               ; 004cd02a
    CMP AL,0x0                          ; 004cd02c
    JZ 0x004cd040                       ; 004cd02e | LAB_004cd040
        ;   XREF to: 004cd040 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004cd030
    ADD ESI,0x2                         ; 004cd033
    MOV byte ptr [EDI + 0x1],AL         ; 004cd036
    ADD EDI,0x2                         ; 004cd039
    CMP AL,0x0                          ; 004cd03c
    JNZ 0x004cd028                      ; 004cd03e | LAB_004cd028
        ;   XREF to: 004cd028 (CONDITIONAL_JUMP)
    POP EDI                             ; 004cd040
        ;   Label: LAB_004cd040
    MOV EDX,dword ptr [EBX]             ; 004cd041
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd043
    ADD EAX,EDX                         ; 004cd04a
    SHL EAX,0x4                         ; 004cd04c
    ADD EAX,ECX                         ; 004cd04f
    PUSH EAX                            ; 004cd051
    CALL crt_string.c_strupr_FUN_00600770 ; 004cd052 | char * crt_string.c_strupr_FUN_00600770(char * string)
        ;   XREF to: 00600770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd057
    MOV EDX,dword ptr [ESP + 0x448]     ; 004cd05a
    MOV EDI,dword ptr [ESP + 0x44c]     ; 004cd061
    MOV ESI,EDX                         ; 004cd068
    IMUL ESI,EDI                        ; 004cd06a
    PUSH EBP                            ; 004cd06d
    MOV EAX,dword ptr [EBX]             ; 004cd06e
    PUSH 0x62a4da                       ; 004cd070 | = "art" | s_art_0062a4da = art
    MOV dword ptr [EBX + EAX*0x4 + 0x154],EDX ; 004cd075
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 004cd07c | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cd081
    CMP EAX,ESI                         ; 004cd084
    JGE 0x004cd0bb                      ; 004cd086 | LAB_004cd0bb
        ;   XREF to: 004cd0bb (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004cd088
    PUSH 0x62a4de                       ; 004cd089 | = "Invalid font file size (%s)." | s_Invalid_font_file_size_s_0062a4de = Invalid font file size (%s).
    LEA EAX,[ESP + 0x8]                 ; 004cd08e
    PUSH EAX                            ; 004cd092
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004cd093 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x62a4fb                    ; 004cd098 | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a4fb = ..\engine\font.cpp
    ADD ESP,0xc                         ; 004cd09d
    MOV [0x02f0ca48],EAX                ; 004cd0a0 | char * g_CurrentFilename
    MOV EAX,ESP                         ; 004cd0a5
    MOV EDX,0xeb                        ; 004cd0a7
    PUSH EAX                            ; 004cd0ac
    MOV dword ptr [0x02f0ca4c],EDX      ; 004cd0ad | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd0b3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd0b8
    PUSH 0xf0                           ; 004cd0bb
        ;   Label: LAB_004cd0bb
    PUSH 0x62a50e                       ; 004cd0c0 | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a50e = ..\engine\font.cpp
    PUSH ESI                            ; 004cd0c5
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004cd0c6 | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX]             ; 004cd0cb
    MOV dword ptr [EBX + EDX*0x4 + 0x144],EAX ; 004cd0cd
    MOV EAX,dword ptr [EBX]             ; 004cd0d4
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x144] ; 004cd0d6
    ADD ESP,0xc                         ; 004cd0dd
    TEST ECX,ECX                        ; 004cd0e0
    JNZ 0x004cd117                      ; 004cd0e2 | LAB_004cd117
        ;   XREF to: 004cd117 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004cd0e4
    PUSH 0x62a521                       ; 004cd0e5 | = "Unable to allocate memory for font bi..." | s_Unable_to_allocate_memor_0062a521 = Unable to allocate memory for font bitmap (%s).
    LEA EAX,[ESP + 0x8]                 ; 004cd0ea
    PUSH EAX                            ; 004cd0ee
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004cd0ef | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0xf3                        ; 004cd0f4
    ADD ESP,0xc                         ; 004cd0f9
    MOV [0x02f0ca4c],EAX                ; 004cd0fc | int g_CurrentLineNumber
    MOV EAX,ESP                         ; 004cd101
    MOV EDI,0x62a551                    ; 004cd103 | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a551 = ..\engine\font.cpp
    PUSH EAX                            ; 004cd108
    MOV dword ptr [0x02f0ca48],EDI      ; 004cd109 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd10f | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd114
    MOV EAX,dword ptr [EBX]             ; 004cd117
        ;   Label: LAB_004cd117
    PUSH ESI                            ; 004cd119
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x144] ; 004cd11a
    PUSH EDX                            ; 004cd121
    PUSH EBP                            ; 004cd122
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870 ; 004cd123 | void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
        ;   XREF to: 00431870 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004cd128
    PUSH 0x0                            ; 004cd12b
    LEA EAX,[ESP + 0x330]               ; 004cd12d
    PUSH EAX                            ; 004cd134
    LEA EAX,[ESP + 0x234]               ; 004cd135
    PUSH EAX                            ; 004cd13c
    PUSH 0x0                            ; 004cd13d
    PUSH EBP                            ; 004cd13f
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 004cd140 | void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004cd145
    PUSH 0x62a564                       ; 004cd148 | = "act" | s_act_0062a564 = act
    LEA EAX,[ESP + 0x330]               ; 004cd14d
    PUSH EAX                            ; 004cd154
    LEA EAX,[ESP + 0x234]               ; 004cd155
    PUSH EAX                            ; 004cd15c
    PUSH 0x0                            ; 004cd15d
    LEA EAX,[ESP + 0x13c]               ; 004cd15f
    PUSH EAX                            ; 004cd166
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004cd167 | void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004cd16c
    PUSH 0x62a568                       ; 004cd16f | = "rb" | s_rb_0062a568 = rb
    LEA EAX,[ESP + 0x130]               ; 004cd174
    PUSH EAX                            ; 004cd17b
    PUSH 0x62a56b                       ; 004cd17c | = "art" | s_art_0062a56b = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004cd181 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004cd186
    MOV EDI,EAX                         ; 004cd189
    TEST EAX,EAX                        ; 004cd18b
    JZ 0x004cd219                       ; 004cd18d | LAB_004cd219
        ;   XREF to: 004cd219 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 004cd193
    PUSH EDI                            ; 004cd195
        ;   Label: LAB_004cd195
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004cd196 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX]             ; 004cd19b
    MOV ECX,EAX                         ; 004cd19d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cd19f
    SUB EAX,EDX                         ; 004cd1a6
    SHL EAX,0x8                         ; 004cd1a8
    ADD ESP,0x4                         ; 004cd1ab
    ADD EAX,EBX                         ; 004cd1ae
    PUSH EDI                            ; 004cd1b0
    MOV byte ptr [ESI + EAX*0x1 + 0x164],CL ; 004cd1b1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004cd1b8 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX]             ; 004cd1bd
    MOV EDX,EAX                         ; 004cd1bf
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cd1c1
    SUB EAX,ECX                         ; 004cd1c8
    SHL EAX,0x8                         ; 004cd1ca
    ADD ESP,0x4                         ; 004cd1cd
    ADD EAX,EBX                         ; 004cd1d0
    PUSH EDI                            ; 004cd1d2
    MOV byte ptr [ESI + EAX*0x1 + 0x165],DL ; 004cd1d3
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004cd1da | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX]             ; 004cd1df
    MOV EDX,EAX                         ; 004cd1e1
    LEA EAX,[ECX*0x4 + 0x0]             ; 004cd1e3
    SUB EAX,ECX                         ; 004cd1ea
    SHL EAX,0x8                         ; 004cd1ec
    ADD ESI,0x3                         ; 004cd1ef
    ADD EAX,EBX                         ; 004cd1f2
    ADD ESP,0x4                         ; 004cd1f4
    MOV byte ptr [ESI + EAX*0x1 + 0x163],DL ; 004cd1f7
    CMP ESI,0x300                       ; 004cd1fe
    JNZ 0x004cd195                      ; 004cd204 | LAB_004cd195
        ;   XREF to: 004cd195 (CONDITIONAL_JUMP)
    PUSH 0x10a                          ; 004cd206
    PUSH 0x62a56f                       ; 004cd20b | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a56f = ..\engine\font.cpp
    PUSH EDI                            ; 004cd210
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004cd211 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004cd216
    MOV ECX,dword ptr [ESP + 0x450]     ; 004cd219
        ;   Label: LAB_004cd219
    PUSH ECX                            ; 004cd220
    MOV ESI,dword ptr [ESP + 0x450]     ; 004cd221
    PUSH ESI                            ; 004cd228
    MOV EDI,dword ptr [ESP + 0x450]     ; 004cd229
    PUSH EDI                            ; 004cd230
    MOV EBP,dword ptr [EBX]             ; 004cd231
    PUSH EBP                            ; 004cd233
    PUSH EBX                            ; 004cd234
    CALL engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 ; 004cd235 | void engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550(CBitFont * this_ptr, int bitmapcount, int other2, int bitmap_index, ...)
        ;   XREF to: 004cd550 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX]             ; 004cd23a
    ADD ESP,0x14                        ; 004cd23c
    INC EAX                             ; 004cd23f
    PUSH EBX                            ; 004cd240
    MOV dword ptr [EBX],EAX             ; 004cd241
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0 ; 004cd243 | void engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0(CBitFont * this_ptr)
        ;   XREF to: 004d02a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd248
    ADD ESP,0x42c                       ; 004cd24b
    POP EBP                             ; 004cd251
    POP EDI                             ; 004cd252
    POP ESI                             ; 004cd253
    POP EBX                             ; 004cd254
    RET                                 ; 004cd255
    MOV ECX,0x62a4b6                    ; 004cd256 | = "..\\engine\\font.cpp" | s_engine_font_cpp_0062a4b6 = ..\engine\font.cpp
        ;   Label: LAB_004cd256
    MOV ESI,0xd6                        ; 004cd25b
    PUSH 0x62a4c9                       ; 004cd260 | = "Too many bitmaps" | s_Too_many_bitmaps_0062a4c9 = Too many bitmaps
    MOV dword ptr [0x02f0ca48],ECX      ; 004cd265 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004cd26b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004cd271 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004cd276
    JMP 0x004cd011                      ; 004cd279 | LAB_004cd011
        ;   XREF to: 004cd011 (UNCONDITIONAL_JUMP)

