; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00(CTextureCache * cache, char * texture_name)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   cache
; char *           Stack[0x8]:4   texture_name
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined1       Stack[-0x113]:1  local_113
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 at 005dd84c
;
; Referenced Globals:
;   TerminatedCString s_art_00655184
;   TerminatedCString s_CTextureCache_load_Bad_t_00655188
;   TerminatedCString s_engine_texture_cpp_006551b9
;   TerminatedCString s_engine_texture_cpp_006551cf
;   TerminatedCString s_engine_texture_cpp_006551e5
;   TerminatedCString s_CTextureCache_load_Out_o_006551fb
;   TerminatedCString s_engine_texture_cpp_0065524e
;   TerminatedCString s_CTextureCache_load_Can_t_00655264
;   TerminatedCString s_act_0065528f
;   TerminatedCString s_rb_00655294
;   TerminatedCString s_art_00655297
;   TerminatedCString s_engine_texture_cpp_0065529b
;   TerminatedCString s_engine_texture_cpp_006552b1
;   TerminatedCString s_engine_texture_cpp_006552c7
;   TerminatedCString s_engine_texture_cpp_006552dd
;   ... and 18 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dcc00
        ;   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00
    PUSH ESI                            ; 005dcc01
    PUSH EDI                            ; 005dcc02
    PUSH EBP                            ; 005dcc03
    SUB ESP,0x104                       ; 005dcc04
    MOV EBX,dword ptr [ESP + 0x118]     ; 005dcc0a
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005dcc11
    PUSH EDX                            ; 005dcc18
    PUSH 0x655184                       ; 005dcc19 | = "art" | s_art_00655184 = art
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 005dcc1e | int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dcc23
    MOV dword ptr [ESP + 0x100],EAX     ; 005dcc26
    CMP EAX,0x4000                      ; 005dcc2d
    JNC 0x005dd08f                      ; 005dcc32 | LAB_005dd08f
        ;   XREF to: 005dd08f (CONDITIONAL_JUMP)
    CMP EAX,0x400                       ; 005dcc38
    JNC 0x005dd0b2                      ; 005dcc3d | LAB_005dd0b2
        ;   XREF to: 005dd0b2 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x100]     ; 005dcc43
        ;   Label: LAB_005dcc43
    PUSH ECX                            ; 005dcc4a
    MOV ESI,dword ptr [ESP + 0x120]     ; 005dcc4b
    PUSH ESI                            ; 005dcc52
    PUSH 0x655188                       ; 005dcc53 | = "CTextureCache::load - Bad texture len..." | s_CTextureCache_load_Bad_t_00655188 = CTextureCache::load - Bad texture length : %s,%d
    LEA EAX,[ESP + 0xc]                 ; 005dcc58
    PUSH EAX                            ; 005dcc5c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005dcc5d | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,0x101                       ; 005dcc62
    ADD ESP,0x10                        ; 005dcc67
    MOV [0x02f0ca4c],EAX                ; 005dcc6a | int g_CurrentLineNumber
    MOV EAX,ESP                         ; 005dcc6f
    MOV EDI,0x6551b9                    ; 005dcc71 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006551b9 = ..\engine\texture.cpp
    PUSH EAX                            ; 005dcc76
    MOV dword ptr [0x02f0ca48],EDI      ; 005dcc77 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dcc7d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dcc82
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcc85
        ;   Label: LAB_005dcc85
    CMP dword ptr [EBX + EAX*0x4 + 0x13008],0x0 ; 005dcc8b
    JNZ 0x005dcced                      ; 005dcc93 | LAB_005dcced
        ;   XREF to: 005dcced (CONDITIONAL_JUMP)
    PUSH 0x107                          ; 005dcc95
    PUSH 0x6551cf                       ; 005dcc9a | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006551cf = ..\engine\texture.cpp
    PUSH 0x300                          ; 005dcc9f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005dcca4 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x14008]   ; 005dcca9
    MOV dword ptr [EBX + ESI*0x4 + 0x13008],EAX ; 005dccaf
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dccb6
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x13008] ; 005dccbc
    ADD ESP,0xc                         ; 005dccc3
    TEST ECX,ECX                        ; 005dccc6
    JNZ 0x005dcced                      ; 005dccc8 | LAB_005dcced
        ;   XREF to: 005dcced (CONDITIONAL_JUMP)
    MOV ESI,0x6551e5                    ; 005dccca | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006551e5 = ..\engine\texture.cpp
    MOV EDI,0x109                       ; 005dcccf
    PUSH 0x6551fb                       ; 005dccd4 | = "CTextureCache::load - Out of memory. ..." | s_CTextureCache_load_Out_o_006551fb = CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM
    MOV dword ptr [0x02f0ca48],ESI      ; 005dccd9 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005dccdf | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dcce5 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dccea
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005dcced
        ;   Label: LAB_005dcced
    MOV EDI,ESP                         ; 005dccf4
    MOV DL,0x2e                         ; 005dccf6
    PUSH EDI                            ; 005dccf8
    MOV AL,byte ptr [ESI]               ; 005dccf9
        ;   Label: LAB_005dccf9
    MOV byte ptr [EDI],AL               ; 005dccfb
    CMP AL,0x0                          ; 005dccfd
    JZ 0x005dcd11                       ; 005dccff | LAB_005dcd11
        ;   XREF to: 005dcd11 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dcd01
    ADD ESI,0x2                         ; 005dcd04
    MOV byte ptr [EDI + 0x1],AL         ; 005dcd07
    ADD EDI,0x2                         ; 005dcd0a
    CMP AL,0x0                          ; 005dcd0d
    JNZ 0x005dccf9                      ; 005dcd0f | LAB_005dccf9
        ;   XREF to: 005dccf9 (CONDITIONAL_JUMP)
    POP EDI                             ; 005dcd11
        ;   Label: LAB_005dcd11
    MOV ESI,ESP                         ; 005dcd12
    MOV AL,byte ptr [ESI]               ; 005dcd14
        ;   Label: LAB_005dcd14
    CMP AL,DL                           ; 005dcd16
    JZ 0x005dcd2c                       ; 005dcd18 | LAB_005dcd2c
        ;   XREF to: 005dcd2c (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005dcd1a
    JZ 0x005dcd2a                       ; 005dcd1c | LAB_005dcd2a
        ;   XREF to: 005dcd2a (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcd1e
    MOV AL,byte ptr [ESI]               ; 005dcd1f
    CMP AL,DL                           ; 005dcd21
    JZ 0x005dcd2c                       ; 005dcd23 | LAB_005dcd2c
        ;   XREF to: 005dcd2c (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcd25
    CMP AL,0x0                          ; 005dcd26
    JNZ 0x005dcd14                      ; 005dcd28 | LAB_005dcd14
        ;   XREF to: 005dcd14 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005dcd2a
        ;   Label: LAB_005dcd2a
    MOV EDI,ESI                         ; 005dcd2c
        ;   Label: LAB_005dcd2c
    TEST ESI,ESI                        ; 005dcd2e
    JNZ 0x005dcd54                      ; 005dcd30 | LAB_005dcd54
        ;   XREF to: 005dcd54 (CONDITIONAL_JUMP)
    MOV EAX,0x65524e                    ; 005dcd32 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_0065524e = ..\engine\texture.cpp
    MOV EDX,0x111                       ; 005dcd37
    PUSH 0x655264                       ; 005dcd3c | = "CTextureCache::load - Can't find exte..." | s_CTextureCache_load_Can_t_00655264 = CTextureCache::load - Can't find extension
    MOV [0x02f0ca48],EAX                ; 005dcd41 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005dcd46 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dcd4c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dcd51
    PUSH 0x65528f                       ; 005dcd54 | = ".act" | s_act_0065528f = .act
        ;   Label: LAB_005dcd54
    PUSH EDI                            ; 005dcd59
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005dcd5a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dcd5f
    PUSH 0x655294                       ; 005dcd62 | = "rb" | s_rb_00655294 = rb
    LEA EAX,[ESP + 0x4]                 ; 005dcd67
    PUSH EAX                            ; 005dcd6b
    PUSH 0x655297                       ; 005dcd6c | = "art" | s_art_00655297 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005dcd71 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005dcd76
    ADD ESP,0xc                         ; 005dcd78
    TEST EAX,EAX                        ; 005dcd7b
    JZ 0x005dd0c0                       ; 005dcd7d | LAB_005dd0c0
        ;   XREF to: 005dd0c0 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005dcd83
    PUSH 0x3                            ; 005dcd84
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcd86
    PUSH 0x100                          ; 005dcd8c
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x13008] ; 005dcd91
    PUSH ECX                            ; 005dcd98
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005dcd99 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005dcd9e
    PUSH 0x117                          ; 005dcda1
    PUSH 0x65529b                       ; 005dcda6 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_0065529b = ..\engine\texture.cpp
    PUSH ESI                            ; 005dcdab
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005dcdac | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcdb1
    MOV EDI,dword ptr [EBX + 0x14008]   ; 005dcdb4
        ;   Label: LAB_005dcdb4
    LEA EAX,[EBX + 0x3008]              ; 005dcdba
    SHL EDI,0x6                         ; 005dcdc0
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005dcdc3
    ADD EDI,EAX                         ; 005dcdca
    PUSH EDI                            ; 005dcdcc
    MOV AL,byte ptr [ESI]               ; 005dcdcd
        ;   Label: LAB_005dcdcd
    MOV byte ptr [EDI],AL               ; 005dcdcf
    CMP AL,0x0                          ; 005dcdd1
    JZ 0x005dcde5                       ; 005dcdd3 | LAB_005dcde5
        ;   XREF to: 005dcde5 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dcdd5
    ADD ESI,0x2                         ; 005dcdd8
    MOV byte ptr [EDI + 0x1],AL         ; 005dcddb
    ADD EDI,0x2                         ; 005dcdde
    CMP AL,0x0                          ; 005dcde1
    JNZ 0x005dcdcd                      ; 005dcde3 | LAB_005dcdcd
        ;   XREF to: 005dcdcd (CONDITIONAL_JUMP)
    POP EDI                             ; 005dcde5
        ;   Label: LAB_005dcde5
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcde6
    SHL EAX,0x2                         ; 005dcdec
    ADD EAX,EBX                         ; 005dcdef
    CMP EBP,dword ptr [EAX + 0x8]       ; 005dcdf1
    JZ 0x005dceab                       ; 005dcdf4 | LAB_005dceab
        ;   XREF to: 005dceab (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x1008]    ; 005dcdfa
    TEST EDI,EDI                        ; 005dce00
    JZ 0x005dce50                       ; 005dce02 | LAB_005dce50
        ;   XREF to: 005dce50 (CONDITIONAL_JUMP)
    PUSH 0x124                          ; 005dce04
    PUSH 0x6552b1                       ; 005dce09 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006552b1 = ..\engine\texture.cpp
    PUSH EDI                            ; 005dce0e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dce0f | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dce14
    SHL EAX,0x2                         ; 005dce1a
    ADD EAX,EBX                         ; 005dce1d
    MOV ECX,dword ptr [EAX + 0x2008]    ; 005dce1f
    ADD ESP,0xc                         ; 005dce25
    TEST ECX,ECX                        ; 005dce28
    JZ 0x005dce50                       ; 005dce2a | LAB_005dce50
        ;   XREF to: 005dce50 (CONDITIONAL_JUMP)
    PUSH 0x126                          ; 005dce2c
    PUSH 0x6552c7                       ; 005dce31 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006552c7 = ..\engine\texture.cpp
    PUSH ECX                            ; 005dce36
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dce37 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dce3c
    ADD ESP,0xc                         ; 005dce42
    MOV dword ptr [EBX + EAX*0x4 + 0x2008],0x0 ; 005dce45
    PUSH 0x12a                          ; 005dce50
        ;   Label: LAB_005dce50
    PUSH 0x6552dd                       ; 005dce55 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006552dd = ..\engine\texture.cpp
    MOV EDI,dword ptr [ESP + 0x108]     ; 005dce5a
    PUSH EDI                            ; 005dce61
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005dce62 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EBX + 0x14008]   ; 005dce67
    MOV dword ptr [EBX + ESI*0x4 + 0x1008],EAX ; 005dce6d
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dce74
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008] ; 005dce7a
    ADD ESP,0xc                         ; 005dce81
    TEST EDX,EDX                        ; 005dce84
    JNZ 0x005dceab                      ; 005dce86 | LAB_005dceab
        ;   XREF to: 005dceab (CONDITIONAL_JUMP)
    MOV ECX,0x6552f3                    ; 005dce88 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006552f3 = ..\engine\texture.cpp
    MOV ESI,0x12c                       ; 005dce8d
    PUSH 0x655309                       ; 005dce92 | = "CTextureCache::load - Out of memory. ..." | s_CTextureCache_load_Out_o_00655309 = CTextureCache::load - Out of memory.  Heap is probably trashed or you're out of VM
    MOV dword ptr [0x02f0ca48],ECX      ; 005dce97 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005dce9d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dcea3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dcea8
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005dceab
        ;   Label: LAB_005dceab
    MOV EDI,ESP                         ; 005dceb2
    MOV DL,0x2e                         ; 005dceb4
    PUSH EDI                            ; 005dceb6
    MOV AL,byte ptr [ESI]               ; 005dceb7
        ;   Label: LAB_005dceb7
    MOV byte ptr [EDI],AL               ; 005dceb9
    CMP AL,0x0                          ; 005dcebb
    JZ 0x005dcecf                       ; 005dcebd | LAB_005dcecf
        ;   XREF to: 005dcecf (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dcebf
    ADD ESI,0x2                         ; 005dcec2
    MOV byte ptr [EDI + 0x1],AL         ; 005dcec5
    ADD EDI,0x2                         ; 005dcec8
    CMP AL,0x0                          ; 005dcecb
    JNZ 0x005dceb7                      ; 005dcecd | LAB_005dceb7
        ;   XREF to: 005dceb7 (CONDITIONAL_JUMP)
    POP EDI                             ; 005dcecf
        ;   Label: LAB_005dcecf
    MOV ESI,ESP                         ; 005dced0
    MOV AL,byte ptr [ESI]               ; 005dced2
        ;   Label: LAB_005dced2
    CMP AL,DL                           ; 005dced4
    JZ 0x005dceea                       ; 005dced6 | LAB_005dceea
        ;   XREF to: 005dceea (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005dced8
    JZ 0x005dcee8                       ; 005dceda | LAB_005dcee8
        ;   XREF to: 005dcee8 (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcedc
    MOV AL,byte ptr [ESI]               ; 005dcedd
    CMP AL,DL                           ; 005dcedf
    JZ 0x005dceea                       ; 005dcee1 | LAB_005dceea
        ;   XREF to: 005dceea (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcee3
    CMP AL,0x0                          ; 005dcee4
    JNZ 0x005dced2                      ; 005dcee6 | LAB_005dced2
        ;   XREF to: 005dced2 (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005dcee8
        ;   Label: LAB_005dcee8
    PUSH 0x65535c                       ; 005dceea | = ".raw" | s_raw_0065535c = .raw
        ;   Label: LAB_005dceea
    PUSH ESI                            ; 005dceef
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005dcef0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dcef5
    PUSH 0x655361                       ; 005dcef8 | = "rb" | s_rb_00655361 = rb
    LEA EAX,[ESP + 0x4]                 ; 005dcefd
    PUSH EAX                            ; 005dcf01
    PUSH 0x655364                       ; 005dcf02 | = "art" | s_art_00655364 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005dcf07 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV ESI,EAX                         ; 005dcf0c
    ADD ESP,0xc                         ; 005dcf0e
    TEST EAX,EAX                        ; 005dcf11
    JNZ 0x005dd0ec                      ; 005dcf13 | LAB_005dd0ec
        ;   XREF to: 005dd0ec (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 005dcf19
    IMUL EAX,EBP                        ; 005dcf1b
    PUSH EAX                            ; 005dcf1e
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcf1f
    PUSH ESI                            ; 005dcf25
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008] ; 005dcf26
    PUSH EDX                            ; 005dcf2d
    CALL crt_memory.c_memset_FUN_005fde40 ; 005dcf2e | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcf33
        ;   Label: LAB_005dcf33
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005dcf36
    MOV EDI,ESP                         ; 005dcf3d
    MOV DL,0x2e                         ; 005dcf3f
    PUSH EDI                            ; 005dcf41
    MOV AL,byte ptr [ESI]               ; 005dcf42
        ;   Label: LAB_005dcf42
    MOV byte ptr [EDI],AL               ; 005dcf44
    CMP AL,0x0                          ; 005dcf46
    JZ 0x005dcf5a                       ; 005dcf48 | LAB_005dcf5a
        ;   XREF to: 005dcf5a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005dcf4a
    ADD ESI,0x2                         ; 005dcf4d
    MOV byte ptr [EDI + 0x1],AL         ; 005dcf50
    ADD EDI,0x2                         ; 005dcf53
    CMP AL,0x0                          ; 005dcf56
    JNZ 0x005dcf42                      ; 005dcf58 | LAB_005dcf42
        ;   XREF to: 005dcf42 (CONDITIONAL_JUMP)
    POP EDI                             ; 005dcf5a
        ;   Label: LAB_005dcf5a
    MOV ESI,ESP                         ; 005dcf5b
    MOV AL,byte ptr [ESI]               ; 005dcf5d
        ;   Label: LAB_005dcf5d
    CMP AL,DL                           ; 005dcf5f
    JZ 0x005dcf75                       ; 005dcf61 | LAB_005dcf75
        ;   XREF to: 005dcf75 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 005dcf63
    JZ 0x005dcf73                       ; 005dcf65 | LAB_005dcf73
        ;   XREF to: 005dcf73 (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcf67
    MOV AL,byte ptr [ESI]               ; 005dcf68
    CMP AL,DL                           ; 005dcf6a
    JZ 0x005dcf75                       ; 005dcf6c | LAB_005dcf75
        ;   XREF to: 005dcf75 (CONDITIONAL_JUMP)
    INC ESI                             ; 005dcf6e
    CMP AL,0x0                          ; 005dcf6f
    JNZ 0x005dcf5d                      ; 005dcf71 | LAB_005dcf5d
        ;   XREF to: 005dcf5d (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 005dcf73
        ;   Label: LAB_005dcf73
    PUSH 0x65537e                       ; 005dcf75 | = ".opa" | s_opa_0065537e = .opa
        ;   Label: LAB_005dcf75
    PUSH ESI                            ; 005dcf7a
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005dcf7b | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dcf80
    PUSH 0x655383                       ; 005dcf83 | = "rb" | s_rb_00655383 = rb
    LEA EAX,[ESP + 0x4]                 ; 005dcf88
    PUSH EAX                            ; 005dcf8c
    PUSH 0x655386                       ; 005dcf8d | = "art" | s_art_00655386 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005dcf92 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcf97
    MOV ESI,EAX                         ; 005dcf9a
    TEST EAX,EAX                        ; 005dcf9c
    JZ 0x005dd11a                       ; 005dcf9e | LAB_005dd11a
        ;   XREF to: 005dd11a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcfa4
    SHL EAX,0x2                         ; 005dcfaa
    ADD EAX,EBX                         ; 005dcfad
    CMP EBP,dword ptr [EAX + 0x8]       ; 005dcfaf
    JZ 0x005dcff8                       ; 005dcfb2 | LAB_005dcff8
        ;   XREF to: 005dcff8 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX + 0x2008]    ; 005dcfb4
    TEST EDX,EDX                        ; 005dcfba
    JZ 0x005dcfd1                       ; 005dcfbc | LAB_005dcfd1
        ;   XREF to: 005dcfd1 (CONDITIONAL_JUMP)
    PUSH 0x146                          ; 005dcfbe
    PUSH 0x65538a                       ; 005dcfc3 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_0065538a = ..\engine\texture.cpp
    PUSH EDX                            ; 005dcfc8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dcfc9 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dcfce
    PUSH 0x148                          ; 005dcfd1
        ;   Label: LAB_005dcfd1
    PUSH 0x6553a0                       ; 005dcfd6 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006553a0 = ..\engine\texture.cpp
    MOV EDI,dword ptr [ESP + 0x108]     ; 005dcfdb
    PUSH EDI                            ; 005dcfe2
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 005dcfe3 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [EBX + 0x14008]   ; 005dcfe8
    ADD ESP,0xc                         ; 005dcfee
    MOV dword ptr [EBX + EDI*0x4 + 0x2008],EAX ; 005dcff1
    PUSH ESI                            ; 005dcff8
        ;   Label: LAB_005dcff8
    PUSH EBP                            ; 005dcff9
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dcffa
    PUSH EBP                            ; 005dd000
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2008] ; 005dd001
    PUSH EDX                            ; 005dd008
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005dd009 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005dd00e
    PUSH 0x14b                          ; 005dd011
    PUSH 0x6553b6                       ; 005dd016 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006553b6 = ..\engine\texture.cpp
    PUSH ESI                            ; 005dd01b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005dd01c | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005dd021
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd024
        ;   Label: LAB_005dd024
    MOV dword ptr [EBX + EAX*0x4 + 0x8],EBP ; 005dd02a
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd02e
    LEA ESI,[EAX + 0x1]                 ; 005dd034
    MOV ECX,dword ptr [EBX + 0x4]       ; 005dd037
    MOV dword ptr [EBX + 0x14008],ESI   ; 005dd03a
    CMP ESI,ECX                         ; 005dd040
    JGE 0x005dd158                      ; 005dd042 | LAB_005dd158
        ;   XREF to: 005dd158 (CONDITIONAL_JUMP)
    ADD ESP,0x104                       ; 005dd048
    POP EBP                             ; 005dd04e
    POP EDI                             ; 005dd04f
    POP ESI                             ; 005dd050
    POP EBX                             ; 005dd051
    RET                                 ; 005dd052
    MOV EBP,0x20                        ; 005dd053
        ;   Label: LAB_005dd053
    JMP 0x005dcc85                      ; 005dd058 | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    MOV EBP,0x40                        ; 005dd05d
        ;   Label: LAB_005dd05d
    JMP 0x005dcc85                      ; 005dd062 | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    MOV EBP,0x80                        ; 005dd067
        ;   Label: LAB_005dd067
    JMP 0x005dcc85                      ; 005dd06c | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    MOV EBP,0x100                       ; 005dd071
        ;   Label: LAB_005dd071
    JMP 0x005dcc85                      ; 005dd076 | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    MOV EBP,0x200                       ; 005dd07b
        ;   Label: LAB_005dd07b
    JMP 0x005dcc85                      ; 005dd080 | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    MOV EBP,0x400                       ; 005dd085
        ;   Label: LAB_005dd085
    JMP 0x005dcc85                      ; 005dd08a | LAB_005dcc85
        ;   XREF to: 005dcc85 (UNCONDITIONAL_JUMP)
    JBE 0x005dd067                      ; 005dd08f | LAB_005dd067
        ;   Label: LAB_005dd08f
        ;   XREF to: 005dd067 (CONDITIONAL_JUMP)
    CMP EAX,0x40000                     ; 005dd091
    JNC 0x005dd0a4                      ; 005dd096 | LAB_005dd0a4
        ;   XREF to: 005dd0a4 (CONDITIONAL_JUMP)
    CMP EAX,0x10000                     ; 005dd098
    JZ 0x005dd071                       ; 005dd09d | LAB_005dd071
        ;   XREF to: 005dd071 (CONDITIONAL_JUMP)
    JMP 0x005dcc43                      ; 005dd09f | LAB_005dcc43
        ;   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
    JBE 0x005dd07b                      ; 005dd0a4 | LAB_005dd07b
        ;   Label: LAB_005dd0a4
        ;   XREF to: 005dd07b (CONDITIONAL_JUMP)
    CMP EAX,0x100000                    ; 005dd0a6
    JZ 0x005dd085                       ; 005dd0ab | LAB_005dd085
        ;   XREF to: 005dd085 (CONDITIONAL_JUMP)
    JMP 0x005dcc43                      ; 005dd0ad | LAB_005dcc43
        ;   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
    JBE 0x005dd053                      ; 005dd0b2 | LAB_005dd053
        ;   Label: LAB_005dd0b2
        ;   XREF to: 005dd053 (CONDITIONAL_JUMP)
    CMP EAX,0x1000                      ; 005dd0b4
    JZ 0x005dd05d                       ; 005dd0b9 | LAB_005dd05d
        ;   XREF to: 005dd05d (CONDITIONAL_JUMP)
    JMP 0x005dcc43                      ; 005dd0bb | LAB_005dcc43
        ;   XREF to: 005dcc43 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd0c0
        ;   Label: LAB_005dd0c0
    MOV ECX,0x300                       ; 005dd0c6
    MOV ESI,0x2d01f48                   ; 005dd0cb | char[768] g_SourcePaletteData
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x13008] ; 005dd0d0
    PUSH EDI                            ; 005dd0d7
    MOV EAX,ECX                         ; 005dd0d8
    SHR ECX,0x2                         ; 005dd0da
    MOVSD.REP ES:EDI,ESI                ; 005dd0dd | char[768] g_SourcePaletteData
    MOV CL,AL                           ; 005dd0df
    AND CL,0x3                          ; 005dd0e1
    MOVSB.REP ES:EDI,ESI                ; 005dd0e4 | char[768] g_SourcePaletteData
    POP EDI                             ; 005dd0e6
    JMP 0x005dcdb4                      ; 005dd0e7 | LAB_005dcdb4
        ;   XREF to: 005dcdb4 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005dd0ec
        ;   Label: LAB_005dd0ec
    PUSH EBP                            ; 005dd0ed
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd0ee
    PUSH EBP                            ; 005dd0f4
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1008] ; 005dd0f5
    PUSH EDI                            ; 005dd0fc
    CALL crt_stdio.c_fread_FUN_005fd990 ; 005dd0fd | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005dd102
    PUSH 0x13a                          ; 005dd105
    PUSH 0x655368                       ; 005dd10a | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_00655368 = ..\engine\texture.cpp
    PUSH ESI                            ; 005dd10f
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005dd110 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x005dcf33                      ; 005dd115 | LAB_005dcf33
        ;   XREF to: 005dcf33 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd11a
        ;   Label: LAB_005dd11a
    SHL EAX,0x2                         ; 005dd120
    ADD EAX,EBX                         ; 005dd123
    MOV ECX,dword ptr [EAX + 0x2008]    ; 005dd125
    TEST ECX,ECX                        ; 005dd12b
    JZ 0x005dd024                       ; 005dd12d | LAB_005dd024
        ;   XREF to: 005dd024 (CONDITIONAL_JUMP)
    PUSH 0x14e                          ; 005dd133
    PUSH 0x6553cc                       ; 005dd138 | = "..\\engine\\texture.cpp" | s_engine_texture_cpp_006553cc = ..\engine\texture.cpp
    PUSH ECX                            ; 005dd13d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005dd13e | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBX + 0x14008]   ; 005dd143
    ADD ESP,0xc                         ; 005dd149
    MOV dword ptr [EBX + EAX*0x4 + 0x2008],ESI ; 005dd14c
    JMP 0x005dd024                      ; 005dd153 | LAB_005dd024
        ;   XREF to: 005dd024 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x1             ; 005dd158
        ;   Label: LAB_005dd158
    MOV dword ptr [EBX + 0x14008],0x0   ; 005dd15e
    ADD ESP,0x104                       ; 005dd168
    POP EBP                             ; 005dd16e
    POP EDI                             ; 005dd16f
    POP ESI                             ; 005dd170
    POP EBX                             ; 005dd171
    RET                                 ; 005dd172

