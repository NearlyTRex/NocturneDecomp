; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_CTextureCache_loadTexture_FUN_00544ef0(CTextureCache *cache,char *texture_name)
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
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920 at 0054596f
;
; Referenced Globals:
;   TerminatedCString s_art_00596708
;   TerminatedCString s_CTextureCache_load_Bad_t_0059670c
;   TerminatedCString s_engine_texture_cpp_0059673d
;   TerminatedCString s_engine_texture_cpp_00596753
;   TerminatedCString s_CTextureCache_load_Can_t_00596769
;   TerminatedCString s_act_00596794
;   TerminatedCString s_rb_00596799
;   TerminatedCString s_art_0059679c
;   TerminatedCString s_engine_texture_cpp_005967a0
;   TerminatedCString s_CTextureCache_load_Out_o_005967b6
;   TerminatedCString s_raw_00596809
;   TerminatedCString s_rb_0059680e
;   TerminatedCString s_art_00596811
;   TerminatedCString s_opa_00596815
;   TerminatedCString s_rb_0059681a
;   ... and 6 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_malloc_FUN_005635b0
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_unknown.c_FUN_005638d0
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544ef0
        ;   Label: engine_texture.cpp_CTextureCache_loadTexture_FUN_00544ef0
    PUSH ESI                            ; 00544ef1
    PUSH EDI                            ; 00544ef2
    PUSH EBP                            ; 00544ef3
    SUB ESP,0x104                       ; 00544ef4
    MOV EBX,dword ptr [ESP + 0x118]     ; 00544efa
    MOV EDX,dword ptr [ESP + 0x11c]     ; 00544f01
    PUSH EDX                            ; 00544f08
    PUSH 0x596708                       ; 00544f09 | = "art"
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 00544f0e
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 00544f13
    MOV dword ptr [ESP + 0x100],EAX     ; 00544f16
    CMP EAX,0x1000                      ; 00544f1d
    JNC 0x00545284                      ; 00544f22
        ;   XREF to: 00545284 (CONDITIONAL_JUMP)  ; LAB_00545284
    CMP EAX,0x400                       ; 00544f28
    JNZ 0x00545296                      ; 00544f2d
        ;   XREF to: 00545296 (CONDITIONAL_JUMP)  ; LAB_00545296
    MOV EBP,0x20                        ; 00544f33
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00544f38
        ;   Label: LAB_00544f38
    MOV EDI,ESP                         ; 00544f3f
    MOV DL,0x2e                         ; 00544f41
    PUSH EDI                            ; 00544f43
    MOV AL,byte ptr [ESI]               ; 00544f44
        ;   Label: LAB_00544f44
    MOV byte ptr [EDI],AL               ; 00544f46
    CMP AL,0x0                          ; 00544f48
    JZ 0x00544f5c                       ; 00544f4a
        ;   XREF to: 00544f5c (CONDITIONAL_JUMP)  ; LAB_00544f5c
    MOV AL,byte ptr [ESI + 0x1]         ; 00544f4c
    ADD ESI,0x2                         ; 00544f4f
    MOV byte ptr [EDI + 0x1],AL         ; 00544f52
    ADD EDI,0x2                         ; 00544f55
    CMP AL,0x0                          ; 00544f58
    JNZ 0x00544f44                      ; 00544f5a
        ;   XREF to: 00544f44 (CONDITIONAL_JUMP)  ; LAB_00544f44
    POP EDI                             ; 00544f5c
        ;   Label: LAB_00544f5c
    MOV ESI,ESP                         ; 00544f5d
    MOV AL,byte ptr [ESI]               ; 00544f5f
        ;   Label: LAB_00544f5f
    CMP AL,DL                           ; 00544f61
    JZ 0x00544f77                       ; 00544f63
        ;   XREF to: 00544f77 (CONDITIONAL_JUMP)  ; LAB_00544f77
    CMP AL,0x0                          ; 00544f65
    JZ 0x00544f75                       ; 00544f67
        ;   XREF to: 00544f75 (CONDITIONAL_JUMP)  ; LAB_00544f75
    INC ESI                             ; 00544f69
    MOV AL,byte ptr [ESI]               ; 00544f6a
    CMP AL,DL                           ; 00544f6c
    JZ 0x00544f77                       ; 00544f6e
        ;   XREF to: 00544f77 (CONDITIONAL_JUMP)  ; LAB_00544f77
    INC ESI                             ; 00544f70
    CMP AL,0x0                          ; 00544f71
    JNZ 0x00544f5f                      ; 00544f73
        ;   XREF to: 00544f5f (CONDITIONAL_JUMP)  ; LAB_00544f5f
    SUB ESI,ESI                         ; 00544f75
        ;   Label: LAB_00544f75
    MOV EDI,ESI                         ; 00544f77
        ;   Label: LAB_00544f77
    TEST ESI,ESI                        ; 00544f79
    JNZ 0x00544fa0                      ; 00544f7b
        ;   XREF to: 00544fa0 (CONDITIONAL_JUMP)  ; LAB_00544fa0
    MOV EDX,0x596753                    ; 00544f7d | = "..\\engine\\texture.cpp"
    MOV ECX,0xfa                        ; 00544f82
    PUSH 0x596769                       ; 00544f87 | = "CTextureCache::load - Can't find exte..."
    MOV dword ptr [0x01cc4800],EDX      ; 00544f8c | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00544f92 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00544f98
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00544f9d
    PUSH 0x596794                       ; 00544fa0 | = ".act"
        ;   Label: LAB_00544fa0
    PUSH EDI                            ; 00544fa5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00544fa6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 00544fab
    PUSH 0x596799                       ; 00544fae | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00544fb3
    PUSH EAX                            ; 00544fb7
    PUSH 0x59679c                       ; 00544fb8 | = "art"
    LEA EDI,[EBX + 0x13008]             ; 00544fbd
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00544fc3
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 00544fc8
    ADD ESP,0xc                         ; 00544fca
    TEST EAX,EAX                        ; 00544fcd
    JZ 0x005452dd                       ; 00544fcf
        ;   XREF to: 005452dd (CONDITIONAL_JUMP)  ; LAB_005452dd
    MOV EDX,dword ptr [EBX + 0xd3008]   ; 00544fd5
    PUSH EAX                            ; 00544fdb
    LEA EAX,[EDX*0x4 + 0x0]             ; 00544fdc
    SUB EAX,EDX                         ; 00544fe3
    PUSH 0x3                            ; 00544fe5
    SHL EAX,0x8                         ; 00544fe7
    PUSH 0x100                          ; 00544fea
    ADD EAX,EDI                         ; 00544fef
    PUSH EAX                            ; 00544ff1
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00544ff2
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00544ff7
    PUSH ESI                            ; 00544ffa
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00544ffb
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00545000
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545003
        ;   Label: LAB_00545003
    LEA EDI,[EBX + 0x3008]              ; 00545009
    SHL EAX,0x6                         ; 0054500f
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00545012
    ADD EDI,EAX                         ; 00545019
    PUSH EDI                            ; 0054501b
    MOV AL,byte ptr [ESI]               ; 0054501c
        ;   Label: LAB_0054501c
    MOV byte ptr [EDI],AL               ; 0054501e
    CMP AL,0x0                          ; 00545020
    JZ 0x00545034                       ; 00545022
        ;   XREF to: 00545034 (CONDITIONAL_JUMP)  ; LAB_00545034
    MOV AL,byte ptr [ESI + 0x1]         ; 00545024
    ADD ESI,0x2                         ; 00545027
    MOV byte ptr [EDI + 0x1],AL         ; 0054502a
    ADD EDI,0x2                         ; 0054502d
    CMP AL,0x0                          ; 00545030
    JNZ 0x0054501c                      ; 00545032
        ;   XREF to: 0054501c (CONDITIONAL_JUMP)  ; LAB_0054501c
    POP EDI                             ; 00545034
        ;   Label: LAB_00545034
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545035
    SHL EAX,0x2                         ; 0054503b
    ADD EAX,EBX                         ; 0054503e
    CMP EBP,dword ptr [EAX + 0x8]       ; 00545040
    JZ 0x005450dc                       ; 00545043
        ;   XREF to: 005450dc (CONDITIONAL_JUMP)  ; LAB_005450dc
    MOV EDI,dword ptr [EAX + 0x1008]    ; 00545049
    TEST EDI,EDI                        ; 0054504f
    JZ 0x0054508b                       ; 00545051
        ;   XREF to: 0054508b (CONDITIONAL_JUMP)  ; LAB_0054508b
    PUSH EDI                            ; 00545053
    CALL crt_unknown.c_FUN_005638d0     ; 00545054
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545059
    SHL EAX,0x2                         ; 0054505f
    ADD EAX,EBX                         ; 00545062
    MOV ECX,dword ptr [EAX + 0x2008]    ; 00545064
    ADD ESP,0x4                         ; 0054506a
    TEST ECX,ECX                        ; 0054506d
    JZ 0x0054508b                       ; 0054506f
        ;   XREF to: 0054508b (CONDITIONAL_JUMP)  ; LAB_0054508b
    PUSH ECX                            ; 00545071
    CALL crt_unknown.c_FUN_005638d0     ; 00545072
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545077
    ADD ESP,0x4                         ; 0054507d
    MOV dword ptr [EBX + EAX*0x4 + 0x2008],0x0 ; 00545080
    MOV EDI,dword ptr [ESP + 0x100]     ; 0054508b
        ;   Label: LAB_0054508b
    PUSH EDI                            ; 00545092
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00545093
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EDX,dword ptr [EBX + 0xd3008]   ; 00545098
    MOV dword ptr [EBX + EDX*0x4 + 0x1008],EAX ; 0054509e
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 005450a5
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008] ; 005450ab
    ADD ESP,0x4                         ; 005450b2
    TEST EDX,EDX                        ; 005450b5
    JNZ 0x005450dc                      ; 005450b7
        ;   XREF to: 005450dc (CONDITIONAL_JUMP)  ; LAB_005450dc
    MOV ECX,0x5967a0                    ; 005450b9 | = "..\\engine\\texture.cpp"
    MOV ESI,0x115                       ; 005450be
    PUSH 0x5967b6                       ; 005450c3 | = "CTextureCache::load - Out of memory. ..."
    MOV dword ptr [0x01cc4800],ECX      ; 005450c8 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 005450ce | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005450d4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005450d9
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005450dc
        ;   Label: LAB_005450dc
    MOV EDI,ESP                         ; 005450e3
    MOV DL,0x2e                         ; 005450e5
    PUSH EDI                            ; 005450e7
    MOV AL,byte ptr [ESI]               ; 005450e8
        ;   Label: LAB_005450e8
    MOV byte ptr [EDI],AL               ; 005450ea
    CMP AL,0x0                          ; 005450ec
    JZ 0x00545100                       ; 005450ee
        ;   XREF to: 00545100 (CONDITIONAL_JUMP)  ; LAB_00545100
    MOV AL,byte ptr [ESI + 0x1]         ; 005450f0
    ADD ESI,0x2                         ; 005450f3
    MOV byte ptr [EDI + 0x1],AL         ; 005450f6
    ADD EDI,0x2                         ; 005450f9
    CMP AL,0x0                          ; 005450fc
    JNZ 0x005450e8                      ; 005450fe
        ;   XREF to: 005450e8 (CONDITIONAL_JUMP)  ; LAB_005450e8
    POP EDI                             ; 00545100
        ;   Label: LAB_00545100
    MOV ESI,ESP                         ; 00545101
    MOV AL,byte ptr [ESI]               ; 00545103
        ;   Label: LAB_00545103
    CMP AL,DL                           ; 00545105
    JZ 0x0054511b                       ; 00545107
        ;   XREF to: 0054511b (CONDITIONAL_JUMP)  ; LAB_0054511b
    CMP AL,0x0                          ; 00545109
    JZ 0x00545119                       ; 0054510b
        ;   XREF to: 00545119 (CONDITIONAL_JUMP)  ; LAB_00545119
    INC ESI                             ; 0054510d
    MOV AL,byte ptr [ESI]               ; 0054510e
    CMP AL,DL                           ; 00545110
    JZ 0x0054511b                       ; 00545112
        ;   XREF to: 0054511b (CONDITIONAL_JUMP)  ; LAB_0054511b
    INC ESI                             ; 00545114
    CMP AL,0x0                          ; 00545115
    JNZ 0x00545103                      ; 00545117
        ;   XREF to: 00545103 (CONDITIONAL_JUMP)  ; LAB_00545103
    SUB ESI,ESI                         ; 00545119
        ;   Label: LAB_00545119
    PUSH 0x596809                       ; 0054511b | = ".raw"
        ;   Label: LAB_0054511b
    PUSH ESI                            ; 00545120
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00545121
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 00545126
    PUSH 0x59680e                       ; 00545129 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 0054512e
    PUSH EAX                            ; 00545132
    PUSH 0x596811                       ; 00545133 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00545138
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    MOV ESI,EAX                         ; 0054513d
    ADD ESP,0xc                         ; 0054513f
    TEST EAX,EAX                        ; 00545142
    JNZ 0x00545310                      ; 00545144
        ;   XREF to: 00545310 (CONDITIONAL_JUMP)  ; LAB_00545310
    MOV EAX,EBP                         ; 0054514a
    IMUL EAX,EBP                        ; 0054514c
    PUSH EAX                            ; 0054514f
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545150
    PUSH ESI                            ; 00545156
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x1008] ; 00545157
    PUSH EDX                            ; 0054515e
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0054515f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00545164
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00545167
        ;   Label: LAB_00545167
    MOV EDI,ESP                         ; 0054516e
    MOV DL,0x2e                         ; 00545170
    PUSH EDI                            ; 00545172
    MOV AL,byte ptr [ESI]               ; 00545173
        ;   Label: LAB_00545173
    MOV byte ptr [EDI],AL               ; 00545175
    CMP AL,0x0                          ; 00545177
    JZ 0x0054518b                       ; 00545179
        ;   XREF to: 0054518b (CONDITIONAL_JUMP)  ; LAB_0054518b
    MOV AL,byte ptr [ESI + 0x1]         ; 0054517b
    ADD ESI,0x2                         ; 0054517e
    MOV byte ptr [EDI + 0x1],AL         ; 00545181
    ADD EDI,0x2                         ; 00545184
    CMP AL,0x0                          ; 00545187
    JNZ 0x00545173                      ; 00545189
        ;   XREF to: 00545173 (CONDITIONAL_JUMP)  ; LAB_00545173
    POP EDI                             ; 0054518b
        ;   Label: LAB_0054518b
    MOV ESI,ESP                         ; 0054518c
    MOV AL,byte ptr [ESI]               ; 0054518e
        ;   Label: LAB_0054518e
    CMP AL,DL                           ; 00545190
    JZ 0x005451a6                       ; 00545192
        ;   XREF to: 005451a6 (CONDITIONAL_JUMP)  ; LAB_005451a6
    CMP AL,0x0                          ; 00545194
    JZ 0x005451a4                       ; 00545196
        ;   XREF to: 005451a4 (CONDITIONAL_JUMP)  ; LAB_005451a4
    INC ESI                             ; 00545198
    MOV AL,byte ptr [ESI]               ; 00545199
    CMP AL,DL                           ; 0054519b
    JZ 0x005451a6                       ; 0054519d
        ;   XREF to: 005451a6 (CONDITIONAL_JUMP)  ; LAB_005451a6
    INC ESI                             ; 0054519f
    CMP AL,0x0                          ; 005451a0
    JNZ 0x0054518e                      ; 005451a2
        ;   XREF to: 0054518e (CONDITIONAL_JUMP)  ; LAB_0054518e
    SUB ESI,ESI                         ; 005451a4
        ;   Label: LAB_005451a4
    PUSH 0x596815                       ; 005451a6 | = ".opa"
        ;   Label: LAB_005451a6
    PUSH ESI                            ; 005451ab
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005451ac
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x8                         ; 005451b1
    PUSH 0x59681a                       ; 005451b4 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 005451b9
    PUSH EAX                            ; 005451bd
    PUSH 0x59681d                       ; 005451be | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 005451c3
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005451c8
    MOV ESI,EAX                         ; 005451cb
    TEST EAX,EAX                        ; 005451cd
    JZ 0x00545337                       ; 005451cf
        ;   XREF to: 00545337 (CONDITIONAL_JUMP)  ; LAB_00545337
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 005451d5
    SHL EAX,0x2                         ; 005451db
    ADD EAX,EBX                         ; 005451de
    CMP EBP,dword ptr [EAX + 0x8]       ; 005451e0
    JZ 0x00545215                       ; 005451e3
        ;   XREF to: 00545215 (CONDITIONAL_JUMP)  ; LAB_00545215
    MOV EDX,dword ptr [EAX + 0x2008]    ; 005451e5
    TEST EDX,EDX                        ; 005451eb
    JZ 0x005451f8                       ; 005451ed
        ;   XREF to: 005451f8 (CONDITIONAL_JUMP)  ; LAB_005451f8
    PUSH EDX                            ; 005451ef
    CALL crt_unknown.c_FUN_005638d0     ; 005451f0
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 005451f5
    MOV EDI,dword ptr [ESP + 0x100]     ; 005451f8
        ;   Label: LAB_005451f8
    PUSH EDI                            ; 005451ff
    CALL crt_memory.c_malloc_FUN_005635b0 ; 00545200
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005635b0(ulong size)
    MOV EDX,dword ptr [EBX + 0xd3008]   ; 00545205
    ADD ESP,0x4                         ; 0054520b
    MOV dword ptr [EBX + EDX*0x4 + 0x2008],EAX ; 0054520e
    PUSH ESI                            ; 00545215
        ;   Label: LAB_00545215
    PUSH EBP                            ; 00545216
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545217
    PUSH EBP                            ; 0054521d
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2008] ; 0054521e
    PUSH EDX                            ; 00545225
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00545226
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054522b
    PUSH ESI                            ; 0054522e
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0054522f
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00545234
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545237
        ;   Label: LAB_00545237
    MOV dword ptr [EBX + EAX*0x4 + 0x8],EBP ; 0054523d
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545241
    LEA EDX,[EAX + 0x1]                 ; 00545247
    MOV ECX,dword ptr [EBX + 0x4]       ; 0054524a
    MOV dword ptr [EBX + 0xd3008],EDX   ; 0054524d
    CMP EDX,ECX                         ; 00545253
    JGE 0x0054536b                      ; 00545255
        ;   XREF to: 0054536b (CONDITIONAL_JUMP)  ; LAB_0054536b
    ADD ESP,0x104                       ; 0054525b
    POP EBP                             ; 00545261
    POP EDI                             ; 00545262
    POP ESI                             ; 00545263
    POP EBX                             ; 00545264
    RET                                 ; 00545265
    MOV EBP,0x40                        ; 00545266
        ;   Label: LAB_00545266
    JMP 0x00544f38                      ; 0054526b
        ;   XREF to: 00544f38 (UNCONDITIONAL_JUMP)  ; LAB_00544f38
    MOV EBP,0x80                        ; 00545270
        ;   Label: LAB_00545270
    JMP 0x00544f38                      ; 00545275
        ;   XREF to: 00544f38 (UNCONDITIONAL_JUMP)  ; LAB_00544f38
    MOV EBP,0x100                       ; 0054527a
        ;   Label: LAB_0054527a
    JMP 0x00544f38                      ; 0054527f
        ;   XREF to: 00544f38 (UNCONDITIONAL_JUMP)  ; LAB_00544f38
    JBE 0x00545266                      ; 00545284
        ;   XREF to: 00545266 (CONDITIONAL_JUMP)  ; LAB_00545266
        ;   Label: LAB_00545284
    CMP EAX,0x4000                      ; 00545286
    JC 0x00545296                       ; 0054528b
        ;   XREF to: 00545296 (CONDITIONAL_JUMP)  ; LAB_00545296
    JBE 0x00545270                      ; 0054528d
        ;   XREF to: 00545270 (CONDITIONAL_JUMP)  ; LAB_00545270
    CMP EAX,0x10000                     ; 0054528f
    JZ 0x0054527a                       ; 00545294
        ;   XREF to: 0054527a (CONDITIONAL_JUMP)  ; LAB_0054527a
    MOV ECX,dword ptr [ESP + 0x100]     ; 00545296
        ;   Label: LAB_00545296
    PUSH ECX                            ; 0054529d
    MOV ESI,dword ptr [ESP + 0x120]     ; 0054529e
    PUSH ESI                            ; 005452a5
    PUSH 0x59670c                       ; 005452a6 | = "CTextureCache::load - Bad texture len..."
    LEA EAX,[ESP + 0xc]                 ; 005452ab
    PUSH EAX                            ; 005452af
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 005452b0
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0xf3                        ; 005452b5
    ADD ESP,0x10                        ; 005452ba
    MOV [0x01cc4804],EAX                ; 005452bd | g_INT_01cc4804
    MOV EAX,ESP                         ; 005452c2
    MOV EDI,0x59673d                    ; 005452c4 | = "..\\engine\\texture.cpp"
    PUSH EAX                            ; 005452c9
    MOV dword ptr [0x01cc4800],EDI      ; 005452ca | g_CHAR_PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 005452d0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005452d5
    JMP 0x00544f38                      ; 005452d8
        ;   XREF to: 00544f38 (UNCONDITIONAL_JUMP)  ; LAB_00544f38
    MOV EDX,dword ptr [EBX + 0xd3008]   ; 005452dd
        ;   Label: LAB_005452dd
    LEA EAX,[EDX*0x4 + 0x0]             ; 005452e3
    SUB EAX,EDX                         ; 005452ea
    MOV ECX,0x300                       ; 005452ec
    SHL EAX,0x8                         ; 005452f1
    MOV ESI,0x1c00648                   ; 005452f4
    ADD EDI,EAX                         ; 005452f9
    PUSH EDI                            ; 005452fb
    MOV EAX,ECX                         ; 005452fc
    SHR ECX,0x2                         ; 005452fe
    MOVSD.REP ES:EDI,ESI                ; 00545301 | DAT_01c00648 | DAT_01c0064c
    MOV CL,AL                           ; 00545303
    AND CL,0x3                          ; 00545305
    MOVSB.REP ES:EDI,ESI                ; 00545308 | DAT_01c0064c | DAT_01c0064d
    POP EDI                             ; 0054530a
    JMP 0x00545003                      ; 0054530b
        ;   XREF to: 00545003 (UNCONDITIONAL_JUMP)  ; LAB_00545003
    PUSH EAX                            ; 00545310
        ;   Label: LAB_00545310
    PUSH EBP                            ; 00545311
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545312
    PUSH EBP                            ; 00545318
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x1008] ; 00545319
    PUSH EDI                            ; 00545320
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00545321
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00545326
    PUSH ESI                            ; 00545329
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0054532a
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0054532f
    JMP 0x00545167                      ; 00545332
        ;   XREF to: 00545167 (UNCONDITIONAL_JUMP)  ; LAB_00545167
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545337
        ;   Label: LAB_00545337
    SHL EAX,0x2                         ; 0054533d
    ADD EAX,EBX                         ; 00545340
    MOV ECX,dword ptr [EAX + 0x2008]    ; 00545342
    TEST ECX,ECX                        ; 00545348
    JZ 0x00545237                       ; 0054534a
        ;   XREF to: 00545237 (CONDITIONAL_JUMP)  ; LAB_00545237
    PUSH ECX                            ; 00545350
    CALL crt_unknown.c_FUN_005638d0     ; 00545351
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EAX,dword ptr [EBX + 0xd3008]   ; 00545356
    ADD ESP,0x4                         ; 0054535c
    MOV dword ptr [EBX + EAX*0x4 + 0x2008],ESI ; 0054535f
    JMP 0x00545237                      ; 00545366
        ;   XREF to: 00545237 (UNCONDITIONAL_JUMP)  ; LAB_00545237
    MOV dword ptr [EBX],0x1             ; 0054536b
        ;   Label: LAB_0054536b
    MOV dword ptr [EBX + 0xd3008],0x0   ; 00545371
    ADD ESP,0x104                       ; 0054537b
    POP EBP                             ; 00545381
    POP EDI                             ; 00545382
    POP ESI                             ; 00545383
    POP EBX                             ; 00545384
    RET                                 ; 00545385

