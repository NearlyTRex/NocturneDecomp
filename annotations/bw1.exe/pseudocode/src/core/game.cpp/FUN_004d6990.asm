; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004d6990(CGame *this_ptr,char *save_filename,int load_mode)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; int              Stack[0xc]:4   load_mode
; Local Variables:
; undefined1       Stack[-0x570]:1  local_570
; undefined1       Stack[-0x56f]:1  local_56f
; undefined        Stack[-0x46c]:1  local_46c
; undefined        Stack[-0x368]:1  local_368
; undefined        Stack[-0x268]:1  local_268
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x38]:1  local_38
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
; XREF[2]:
;   core_game.cpp_FUN_004d7250 at 004d7573
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050d13d
;
; Referenced Globals:
;   undefined4 DAT_005e2faf
;   undefined4 DAT_005e2fb3
;   TerminatedCString s_noc_005e2fb8
;   undefined4 DAT_005e2fbe
;   TerminatedCString s_Select_file_to_load_005e2fc3
;   undefined4 DAT_005e2fd7
;   undefined4 DAT_005e2fda
;   undefined1 DAT_005e2fdf
;   undefined1 DAT_005e2fe0
;   undefined4 DAT_005e2fe3
;   TerminatedCString s_s_s_005e2fe8
;   TerminatedCString s_Can_t_open_saved_game_fi_005e2fee
;   undefined4 DAT_005e300a
;   TerminatedCString s_Can_t_create_temp_file_t_005e300d
;   undefined4 DAT_005e303d
;   ... and 40 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_event.cpp_CEventList_loadState_FUN_004aa610
;   core_event.cpp_FUN_004a9a00
;   core_fire.cpp_CFireEffect_init_FUN_004b4b30
;   core_fire.cpp_CFireEffect_load_FUN_004b7370
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0
;   core_gore.cpp_CGore_load_FUN_004e6680
;   core_gore.cpp_CGore_reset_FUN_004e5c00
;   core_level.cpp_FUN_004fe840
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0
;   core_mission.cpp_FUN_0051bdc0
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6990
        ;   Label: core_game.cpp_FUN_004d6990
    PUSH ESI                            ; 004d6991
    PUSH EDI                            ; 004d6992
    PUSH EBP                            ; 004d6993
    SUB ESP,0x560                       ; 004d6994
    PUSH 0x61d978                       ; 004d699a | = "save\\$$SAVE$$.TMP"
    CALL crt_unknown.c_FUN_005c25c0     ; 004d699f
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c25c0(char * filename)
    ADD ESP,0x4                         ; 004d69a4
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d69a7
    MOV dword ptr [EAX + 0x250],0x1     ; 004d69ae
    LEA EAX,[ESP + 0x208]               ; 004d69b8
    PUSH EAX                            ; 004d69bf
    PUSH 0x0                            ; 004d69c0
    PUSH 0x0                            ; 004d69c2
    PUSH 0x0                            ; 004d69c4
    PUSH 0x1cd05c0                      ; 004d69c6
    CALL crt_string.c_splitpath_FUN_005c2238 ; 004d69cb
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005c2238(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004d69d0
    PUSH 0x5e2faf                       ; 004d69d3 | DAT_005e2faf
    LEA EAX,[ESP + 0x20c]               ; 004d69d8
    PUSH EAX                            ; 004d69df
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004d69e0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d69e5
    TEST EAX,EAX                        ; 004d69e8
    JZ 0x004d6a09                       ; 004d69ea
        ;   XREF to: 004d6a09 (CONDITIONAL_JUMP)  ; LAB_004d6a09
    PUSH 0x5e2fb3                       ; 004d69ec | DAT_005e2fb3
    LEA EAX,[ESP + 0x20c]               ; 004d69f1
    PUSH EAX                            ; 004d69f8
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004d69f9
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d69fe
    TEST EAX,EAX                        ; 004d6a01
    JNZ 0x004d6de3                      ; 004d6a03
        ;   XREF to: 004d6de3 (CONDITIONAL_JUMP)  ; LAB_004d6de3
    MOV ESI,0x1cd05c0                   ; 004d6a09
        ;   Label: LAB_004d6a09
    MOV EDI,ESP                         ; 004d6a0e
    PUSH EDI                            ; 004d6a10
    MOV AL,byte ptr [ESI]               ; 004d6a11 | DAT_01cd05c0 | DAT_01cd05c2
        ;   Label: LAB_004d6a11
    MOV byte ptr [EDI],AL               ; 004d6a13
    CMP AL,0x0                          ; 004d6a15
    JZ 0x004d6a29                       ; 004d6a17
        ;   XREF to: 004d6a29 (CONDITIONAL_JUMP)  ; LAB_004d6a29
    MOV AL,byte ptr [ESI + 0x1]         ; 004d6a19 | DAT_01cd05c1 | DAT_01cd05c3
    ADD ESI,0x2                         ; 004d6a1c
    MOV byte ptr [EDI + 0x1],AL         ; 004d6a1f
    ADD EDI,0x2                         ; 004d6a22
    CMP AL,0x0                          ; 004d6a25
    JNZ 0x004d6a11                      ; 004d6a27
        ;   XREF to: 004d6a11 (CONDITIONAL_JUMP)  ; LAB_004d6a11
    POP EDI                             ; 004d6a29
        ;   Label: LAB_004d6a29
    MOV EDX,dword ptr [0x0061d418]      ; 004d6a2a | g_CFieldNotesPtr
        ;   Label: LAB_004d6a2a
    PUSH EDX                            ; 004d6a30
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 004d6a31
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004d6a36
    MOV EAX,[0x01c3eb50]                ; 004d6a39 | DAT_01c3eb50
    MOV ECX,dword ptr [ESP + 0x57c]     ; 004d6a3e
    MOV dword ptr [ESP + 0x540],EAX     ; 004d6a45
    TEST ECX,ECX                        ; 004d6a4c
    JNZ 0x004d6ded                      ; 004d6a4e
        ;   XREF to: 004d6ded (CONDITIONAL_JUMP)  ; LAB_004d6ded
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6a54
        ;   Label: LAB_004d6a54
    ADD EAX,0x9fc                       ; 004d6a5b
    MOV dword ptr [ESP + 0x548],EAX     ; 004d6a60
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6a67
    ADD EAX,0x274                       ; 004d6a6e
    MOV dword ptr [ESP + 0x54c],EAX     ; 004d6a73
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6a7a
    ADD EAX,0x26c                       ; 004d6a81
    MOV dword ptr [ESP + 0x544],EAX     ; 004d6a86
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6a8d
    ADD EAX,0x268                       ; 004d6a94
    MOV dword ptr [ESP + 0x550],EAX     ; 004d6a99
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6aa0
    ADD EAX,0x270                       ; 004d6aa7
    MOV dword ptr [ESP + 0x554],EAX     ; 004d6aac
    MOV EBX,dword ptr [ESP + 0x578]     ; 004d6ab3
        ;   Label: LAB_004d6ab3
    TEST EBX,EBX                        ; 004d6aba
    JZ 0x004d6dfc                       ; 004d6abc
        ;   XREF to: 004d6dfc (CONDITIONAL_JUMP)  ; LAB_004d6dfc
    MOV EDI,ESP                         ; 004d6ac2
    MOV ESI,EBX                         ; 004d6ac4
    PUSH EDI                            ; 004d6ac6
    MOV AL,byte ptr [ESI]               ; 004d6ac7
        ;   Label: LAB_004d6ac7
    MOV byte ptr [EDI],AL               ; 004d6ac9
    CMP AL,0x0                          ; 004d6acb
    JZ 0x004d6adf                       ; 004d6acd
        ;   XREF to: 004d6adf (CONDITIONAL_JUMP)  ; LAB_004d6adf
    MOV AL,byte ptr [ESI + 0x1]         ; 004d6acf
    ADD ESI,0x2                         ; 004d6ad2
    MOV byte ptr [EDI + 0x1],AL         ; 004d6ad5
    ADD EDI,0x2                         ; 004d6ad8
    CMP AL,0x0                          ; 004d6adb
    JNZ 0x004d6ac7                      ; 004d6add
        ;   XREF to: 004d6ac7 (CONDITIONAL_JUMP)  ; LAB_004d6ac7
    POP EDI                             ; 004d6adf
        ;   Label: LAB_004d6adf
    MOV EDI,dword ptr [0x0061b4d0]      ; 004d6ae0 | DAT_0061b4d0
        ;   Label: LAB_004d6ae0
    PUSH EDI                            ; 004d6ae6
    CALL core_event.cpp_FUN_004a9a00    ; 004d6ae7
        ;   XREF to: 004a9a00 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004a9a00()
    ADD ESP,0x4                         ; 004d6aec
    PUSH -0x1                           ; 004d6aef
    PUSH 0x0                            ; 004d6af1
    PUSH 0x9                            ; 004d6af3
    MOV EBP,dword ptr [0x0061f2e0]      ; 004d6af5 | DAT_0061f2e0
    PUSH EBP                            ; 004d6afb
    CALL core_level.cpp_FUN_004fe840    ; 004d6afc
        ;   XREF to: 004fe840 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004fe840()
    ADD ESP,0x10                        ; 004d6b01
    PUSH 0x5e2fd7                       ; 004d6b04 | DAT_005e2fd7
    LEA EAX,[ESP + 0x4]                 ; 004d6b09
    PUSH EAX                            ; 004d6b0d
    PUSH 0x5e2fda                       ; 004d6b0e | DAT_005e2fda
    CALL engine_dosio.cpp_FUN_00479180  ; 004d6b13
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d6b18
    PUSH EAX                            ; 004d6b1b
    MOV EBX,EAX                         ; 004d6b1c
    CALL crt_stdio.c_ftell_FUN_005c2e90 ; 004d6b1e
        ;   XREF to: 005c2e90 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005c2e90(_FILE * file_handle)
    ADD ESP,0x4                         ; 004d6b23
    MOV dword ptr [ESP + 0x558],EAX     ; 004d6b26
    MOV EAX,ESP                         ; 004d6b2d
    PUSH EAX                            ; 004d6b2f
    PUSH 0x1cd05c0                      ; 004d6b30 | DAT_01cd05c0
    MOV EBP,0x1                         ; 004d6b35
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004d6b3a
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d6b3f
    TEST EAX,EAX                        ; 004d6b42
    JZ 0x004d6b69                       ; 004d6b44
        ;   XREF to: 004d6b69 (CONDITIONAL_JUMP)  ; LAB_004d6b69
    MOV ESI,ESP                         ; 004d6b46
    MOV EDI,0x1cd05c0                   ; 004d6b48
    PUSH EDI                            ; 004d6b4d | DAT_01cd05c0
    MOV AL,byte ptr [ESI]               ; 004d6b4e
        ;   Label: LAB_004d6b4e
    MOV byte ptr [EDI],AL               ; 004d6b50 | DAT_01cd05c0 | DAT_01cd05c2
    CMP AL,0x0                          ; 004d6b52
    JZ 0x004d6b66                       ; 004d6b54
        ;   XREF to: 004d6b66 (CONDITIONAL_JUMP)  ; LAB_004d6b66
    MOV AL,byte ptr [ESI + 0x1]         ; 004d6b56
    ADD ESI,0x2                         ; 004d6b59
    MOV byte ptr [EDI + 0x1],AL         ; 004d6b5c | DAT_01cd05c1 | DAT_01cd05c3
    ADD EDI,0x2                         ; 004d6b5f
    CMP AL,0x0                          ; 004d6b62
    JNZ 0x004d6b4e                      ; 004d6b64
        ;   XREF to: 004d6b4e (CONDITIONAL_JUMP)  ; LAB_004d6b4e
    POP EDI                             ; 004d6b66
        ;   Label: LAB_004d6b66
    XOR EBP,EBP                         ; 004d6b67
    CMP dword ptr [ESP + 0x57c],0x0     ; 004d6b69
        ;   Label: LAB_004d6b69
    JNZ 0x004d6b78                      ; 004d6b71
        ;   XREF to: 004d6b78 (CONDITIONAL_JUMP)  ; LAB_004d6b78
    MOV EBP,0x1                         ; 004d6b73
    PUSH EBX                            ; 004d6b78
        ;   Label: LAB_004d6b78
    PUSH 0x1                            ; 004d6b79
    PUSH 0x4                            ; 004d6b7b
    LEA EAX,[ESP + 0x544]               ; 004d6b7d
    PUSH EAX                            ; 004d6b84
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 004d6b85
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005c0b10(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004d6b8a
    PUSH 0x0                            ; 004d6b8d
    MOV EDX,dword ptr [ESP + 0x55c]     ; 004d6b8f
    PUSH EDX                            ; 004d6b96
    PUSH EBX                            ; 004d6b97
    MOV EDI,0x61d98c                    ; 004d6b98 | DAT_0061d98c
    CALL crt_stdio.c_fseek_FUN_005c170c ; 004d6b9d
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005c170c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004d6ba2
    LEA ESI,[ESP + 0x538]               ; 004d6ba5
    MOV ECX,0x4                         ; 004d6bac
    XOR EAX,EAX                         ; 004d6bb1
    CMPSB.REPE ES:EDI,ESI               ; 004d6bb3 | DAT_0061d98c | DAT_0061d98d
    JZ 0x004d6bbc                       ; 004d6bb5
        ;   XREF to: 004d6bbc (CONDITIONAL_JUMP)  ; LAB_004d6bbc
    SBB EAX,EAX                         ; 004d6bb7
    SBB EAX,-0x1                        ; 004d6bb9
    TEST EAX,EAX                        ; 004d6bbc
        ;   Label: LAB_004d6bbc
    JZ 0x004d6be4                       ; 004d6bbe
        ;   XREF to: 004d6be4 (CONDITIONAL_JUMP)  ; LAB_004d6be4
    MOV ECX,0x3                         ; 004d6bc0
    MOV EDI,0x5e2fdf                    ; 004d6bc5 | DAT_005e2fdf
    LEA ESI,[ESP + 0x538]               ; 004d6bca
    XOR EAX,EAX                         ; 004d6bd1
    CMPSB.REPE ES:EDI,ESI               ; 004d6bd3 | DAT_005e2fdf | DAT_005e2fe0
    JZ 0x004d6bdc                       ; 004d6bd5
        ;   XREF to: 004d6bdc (CONDITIONAL_JUMP)  ; LAB_004d6bdc
    SBB EAX,EAX                         ; 004d6bd7
    SBB EAX,-0x1                        ; 004d6bd9
    TEST EAX,EAX                        ; 004d6bdc
        ;   Label: LAB_004d6bdc
    JNZ 0x004d6d89                      ; 004d6bde
        ;   XREF to: 004d6d89 (CONDITIONAL_JUMP)  ; LAB_004d6d89
    PUSH EBX                            ; 004d6be4
        ;   Label: LAB_004d6be4
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d6be5
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d6bea
    LEA EAX,[ESP + 0x504]               ; 004d6bed
    PUSH EAX                            ; 004d6bf4
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 004d6bf5
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004d6bfa
    LEA EAX,[ESP + 0x530]               ; 004d6bfd
    PUSH EAX                            ; 004d6c04
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0 ; 004d6c05
        ;   XREF to: 005a17d0 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_005a17d0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004d6c0a
    MOV EAX,ESP                         ; 004d6c0d
    PUSH EAX                            ; 004d6c0f
    PUSH 0x5e2fe3                       ; 004d6c10 | DAT_005e2fe3
    PUSH 0x5e2fe8                       ; 004d6c15 | = "%s\\%s"
    LEA EAX,[ESP + 0x110]               ; 004d6c1a
    PUSH EAX                            ; 004d6c21
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004d6c22
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d6c27
    PUSH 0x1                            ; 004d6c2a
    LEA EAX,[ESP + 0x108]               ; 004d6c2c
    PUSH EAX                            ; 004d6c33
    LEA EAX,[ESP + 0x50c]               ; 004d6c34
    PUSH EAX                            ; 004d6c3b
    CALL support_trstream.cpp_CInStreamFile_open_FUN_005a0f60 ; 004d6c3c
        ;   XREF to: 005a0f60 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_open_FUN_005a0f60(CInStreamFile * this_ptr, LPCSTR param_2, int param_3)
    ADD ESP,0xc                         ; 004d6c41
    TEST EAX,EAX                        ; 004d6c44
    JZ 0x004d6e76                       ; 004d6c46
        ;   XREF to: 004d6e76 (CONDITIONAL_JUMP)  ; LAB_004d6e76
    PUSH 0x0                            ; 004d6c4c
    PUSH 0x4                            ; 004d6c4e
    LEA EAX,[ESP + 0x50c]               ; 004d6c50
    PUSH EAX                            ; 004d6c57
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00 ; 004d6c58
        ;   XREF to: 005a0d00 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_seek_FUN_005a0d00(CInStreamFile * this_ptr, int param_2, uint param_3)
    ADD ESP,0xc                         ; 004d6c5d
    PUSH 0x5e300a                       ; 004d6c60 | DAT_005e300a
    PUSH 0x61d978                       ; 004d6c65 | = "save\\$$SAVE$$.TMP"
    LEA EAX,[ESP + 0x538]               ; 004d6c6a
    PUSH EAX                            ; 004d6c71
    CALL support_trstream.cpp_COutStreamFile_open_FUN_005a19e0 ; 004d6c72
        ;   XREF to: 005a19e0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_open_FUN_005a19e0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004d6c77
    TEST EAX,EAX                        ; 004d6c7a
    JZ 0x004d6ec2                       ; 004d6c7c
        ;   XREF to: 004d6ec2 (CONDITIONAL_JUMP)  ; LAB_004d6ec2
    PUSH 0x8                            ; 004d6c82
    PUSH 0x8000                         ; 004d6c84
    LEA EAX,[ESP + 0x4d8]               ; 004d6c89
    PUSH EAX                            ; 004d6c90
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0 ; 004d6c91
        ;   XREF to: 004436b0 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_004436b0(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004d6c96
    LEA EAX,[ESP + 0x4d0]               ; 004d6c99
    PUSH EAX                            ; 004d6ca0
    CALL support_codec.cpp_CLZWDecompress_init_FUN_004436f0 ; 004d6ca1
        ;   XREF to: 004436f0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_004436f0(CLZWDecompress * this_ptr)
    ADD ESP,0x4                         ; 004d6ca6
    LEA EAX,[ESP + 0x530]               ; 004d6ca9
    PUSH EAX                            ; 004d6cb0
    LEA EAX,[ESP + 0x508]               ; 004d6cb1
    PUSH EAX                            ; 004d6cb8
    LEA EAX,[ESP + 0x4d8]               ; 004d6cb9
    PUSH EAX                            ; 004d6cc0
    CALL support_codec.cpp_FUN_00443730 ; 004d6cc1
        ;   XREF to: 00443730 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443730()
    ADD ESP,0xc                         ; 004d6cc6
    LEA EAX,[ESP + 0x530]               ; 004d6cc9
    PUSH EAX                            ; 004d6cd0
    LEA EAX,[ESP + 0x4d4]               ; 004d6cd1
    PUSH EAX                            ; 004d6cd8
    CALL support_codec.cpp_FUN_00443790 ; 004d6cd9
        ;   XREF to: 00443790 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443790()
    ADD ESP,0x8                         ; 004d6cde
    LEA EAX,[ESP + 0x504]               ; 004d6ce1
    PUSH EAX                            ; 004d6ce8
    CALL support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0 ; 004d6ce9
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004d6cee
    LEA EAX,[ESP + 0x530]               ; 004d6cf1
    PUSH EAX                            ; 004d6cf8
    CALL support_trstream.cpp_COutStreamFile_close_FUN_005a19b0 ; 004d6cf9
        ;   XREF to: 005a19b0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_close_FUN_005a19b0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004d6cfe
    PUSH 0x5e303d                       ; 004d6d01 | DAT_005e303d
    PUSH 0x61d978                       ; 004d6d06 | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004d6d0b
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004d6d10
    MOV EBX,EAX                         ; 004d6d13
    TEST EAX,EAX                        ; 004d6d15
    JNZ 0x004d6d41                      ; 004d6d17
        ;   XREF to: 004d6d41 (CONDITIONAL_JUMP)  ; LAB_004d6d41
    PUSH 0x61d978                       ; 004d6d19 | = "save\\$$SAVE$$.TMP"
    MOV ESI,0x5e3040                    ; 004d6d1e | = "..\\core\\game.cpp"
    MOV EDI,0x1050                      ; 004d6d23
    PUSH 0x5e3051                       ; 004d6d28 | = "Can't reopen %s"
    MOV dword ptr [0x01d1d400],ESI      ; 004d6d2d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004d6d33 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d6d39
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004d6d3e
    PUSH 0x0                            ; 004d6d41
        ;   Label: LAB_004d6d41
    LEA EAX,[ESP + 0x4d8]               ; 004d6d43
    PUSH EAX                            ; 004d6d4a
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90 ; 004d6d4b
        ;   XREF to: 00442f90 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6d50
    PUSH 0x1                            ; 004d6d53
    LEA EAX,[ESP + 0x4d4]               ; 004d6d55
    PUSH EAX                            ; 004d6d5c
    CALL support_codec.cpp_CCodec_dtor_FUN_00442bb0 ; 004d6d5d
        ;   XREF to: 00442bb0 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00442bb0(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6d62
    PUSH 0x0                            ; 004d6d65
    LEA EAX,[ESP + 0x534]               ; 004d6d67
    PUSH EAX                            ; 004d6d6e
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 004d6d6f
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6d74
    PUSH 0x0                            ; 004d6d77
    LEA EAX,[ESP + 0x508]               ; 004d6d79
    PUSH EAX                            ; 004d6d80
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004d6d81
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6d86
    PUSH EBX                            ; 004d6d89
        ;   Label: LAB_004d6d89
    PUSH 0xff                           ; 004d6d8a
    LEA EAX,[ESP + 0x310]               ; 004d6d8f
    PUSH EAX                            ; 004d6d96
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004d6d97
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d6d9c
    PUSH 0xa                            ; 004d6d9f
    PUSH 0x5e3061                       ; 004d6da1 | = "CInventory"
    LEA EAX,[ESP + 0x310]               ; 004d6da6
    PUSH EAX                            ; 004d6dad
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 004d6dae
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004d6db3
    TEST EAX,EAX                        ; 004d6db6
    JNZ 0x004d6f0e                      ; 004d6db8
        ;   XREF to: 004d6f0e (CONDITIONAL_JUMP)  ; LAB_004d6f0e
    PUSH EBX                            ; 004d6dbe
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d6dbf
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d6dc4
    MOV EAX,ESP                         ; 004d6dc7
    PUSH EAX                            ; 004d6dc9
    PUSH 0x5e306c                       ; 004d6dca | = "Can't load old save game file %s.  So..."
    MOV EBP,dword ptr [0x0061abc0]      ; 004d6dcf | g_CEditorToolsPtr
    PUSH EBP                            ; 004d6dd5
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 004d6dd6
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004d6ddb
    JMP 0x004d6ab3                      ; 004d6dde
        ;   XREF to: 004d6ab3 (UNCONDITIONAL_JUMP)  ; LAB_004d6ab3
    XOR AH,AH                           ; 004d6de3
        ;   Label: LAB_004d6de3
    MOV byte ptr [ESP],AH               ; 004d6de5
    JMP 0x004d6a2a                      ; 004d6de8
        ;   XREF to: 004d6a2a (UNCONDITIONAL_JUMP)  ; LAB_004d6a2a
    MOV EAX,[0x0152d244]                ; 004d6ded | DAT_0152d244
        ;   Label: LAB_004d6ded
    MOV [0x01c3eb50],EAX                ; 004d6df2 | DAT_01c3eb50
    JMP 0x004d6a54                      ; 004d6df7
        ;   XREF to: 004d6a54 (UNCONDITIONAL_JUMP)  ; LAB_004d6a54
    PUSH 0x1                            ; 004d6dfc
        ;   Label: LAB_004d6dfc
    LEA EAX,[ESP + 0x4]                 ; 004d6dfe
    PUSH EAX                            ; 004d6e02
    PUSH 0x5e2fb8                       ; 004d6e03 | = "*.noc"
    PUSH 0x5e2fbe                       ; 004d6e08 | DAT_005e2fbe
    PUSH 0x5e2fc3                       ; 004d6e0d | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d6e12
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d6e17
    PUSH EAX                            ; 004d6e1a
    MOV ESI,dword ptr [0x0061abc0]      ; 004d6e1b | g_CEditorToolsPtr
    PUSH ESI                            ; 004d6e21
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0 ; 004d6e22
        ;   XREF to: 00494fd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00494fd0(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004d6e27
    TEST EAX,EAX                        ; 004d6e2a
    JNZ 0x004d6ae0                      ; 004d6e2c
        ;   XREF to: 004d6ae0 (CONDITIONAL_JUMP)  ; LAB_004d6ae0
    MOV ESI,dword ptr [0x0061d418]      ; 004d6e32 | g_CFieldNotesPtr
        ;   Label: LAB_004d6e32
    MOV EAX,dword ptr [ESP + 0x540]     ; 004d6e38
    PUSH ESI                            ; 004d6e3f
    MOV [0x01c3eb50],EAX                ; 004d6e40 | DAT_01c3eb50
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 004d6e45
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004d6e4a
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d6e4d
    PUSH 0x61d978                       ; 004d6e54 | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [EAX + 0x250],0x0     ; 004d6e59
    CALL crt_unknown.c_FUN_005c25c0     ; 004d6e63
        ;   XREF to: 005c25c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005c25c0(char * filename)
    ADD ESP,0x4                         ; 004d6e68
    ADD ESP,0x560                       ; 004d6e6b
        ;   Label: LAB_004d6e6b
    POP EBP                             ; 004d6e71
    POP EDI                             ; 004d6e72
    POP ESI                             ; 004d6e73
    POP EBX                             ; 004d6e74
    RET                                 ; 004d6e75
    PUSH 0x5e2fee                       ; 004d6e76 | = "Can't open saved game file."
        ;   Label: LAB_004d6e76
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d6e7b
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d6e80
    PUSH EAX                            ; 004d6e83
    MOV ECX,dword ptr [0x0061abc0]      ; 004d6e84 | g_CEditorToolsPtr
    PUSH ECX                            ; 004d6e8a
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004d6e8b
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d6e90
    PUSH 0x0                            ; 004d6e93
    LEA EAX,[ESP + 0x534]               ; 004d6e95
    PUSH EAX                            ; 004d6e9c
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 004d6e9d
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6ea2
    PUSH 0x0                            ; 004d6ea5
    LEA EAX,[ESP + 0x508]               ; 004d6ea7
    PUSH EAX                            ; 004d6eae
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004d6eaf
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6eb4
    ADD ESP,0x560                       ; 004d6eb7
    POP EBP                             ; 004d6ebd
    POP EDI                             ; 004d6ebe
    POP ESI                             ; 004d6ebf
    POP EBX                             ; 004d6ec0
    RET                                 ; 004d6ec1
    PUSH 0x5e300d                       ; 004d6ec2 | = "Can't create temp file to load saved ..."
        ;   Label: LAB_004d6ec2
    CALL support_newmsg.cpp_getLocalizedString_FUN_00531090 ; 004d6ec7
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00531090(char * key)
    ADD ESP,0x4                         ; 004d6ecc
    PUSH EAX                            ; 004d6ecf
    MOV EBX,dword ptr [0x0061abc0]      ; 004d6ed0 | g_CEditorToolsPtr
    PUSH EBX                            ; 004d6ed6
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004d6ed7
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004d6edc
    PUSH 0x0                            ; 004d6edf
    LEA EAX,[ESP + 0x534]               ; 004d6ee1
    PUSH EAX                            ; 004d6ee8
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 ; 004d6ee9
        ;   XREF to: 005a1860 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6eee
    PUSH 0x0                            ; 004d6ef1
    LEA EAX,[ESP + 0x508]               ; 004d6ef3
    PUSH EAX                            ; 004d6efa
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004d6efb
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d6f00
    ADD ESP,0x560                       ; 004d6f03
    POP EBP                             ; 004d6f09
    POP EDI                             ; 004d6f0a
    POP ESI                             ; 004d6f0b
    POP EBX                             ; 004d6f0c
    RET                                 ; 004d6f0d
    LEA EAX,[ESP + 0x53c]               ; 004d6f0e
        ;   Label: LAB_004d6f0e
    PUSH EAX                            ; 004d6f15
    PUSH 0x5e3096                       ; 004d6f16 | DAT_005e3096
    PUSH EBX                            ; 004d6f1b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d6f1c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004d6f21
    CMP dword ptr [ESP + 0x53c],0x3     ; 004d6f24
    JL 0x004d71f3                       ; 004d6f2c
        ;   XREF to: 004d71f3 (CONDITIONAL_JUMP)  ; LAB_004d71f3
    PUSH EBP                            ; 004d6f32
    PUSH EBX                            ; 004d6f33
    MOV EDX,dword ptr [0x0061f650]      ; 004d6f34 | DAT_0061f650
    PUSH EDX                            ; 004d6f3a | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0 ; 004d6f3b
        ;   XREF to: 0051a4f0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_0051a4f0(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004d6f40
    PUSH EBX                            ; 004d6f43
    PUSH 0xff                           ; 004d6f44
    LEA EAX,[ESP + 0x310]               ; 004d6f49
    PUSH EAX                            ; 004d6f50
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004d6f51
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d6f56
    PUSH 0x1d06ab4                      ; 004d6f59 | DAT_01d06ab4
    PUSH 0x1d06aa0                      ; 004d6f5e | DAT_01d06aa0
    PUSH 0x5e30c4                       ; 004d6f63 | = "%d, %d\n"
    PUSH EBX                            ; 004d6f68
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d6f69
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004d6f6e
    XOR ECX,ECX                         ; 004d6f71
    MOV ESI,dword ptr [0x01d06aa0]      ; 004d6f73 | DAT_01d06aa0
    MOV dword ptr [ESP + 0x55c],ECX     ; 004d6f79
    TEST ESI,ESI                        ; 004d6f80
    JLE 0x004d7029                      ; 004d6f82
        ;   XREF to: 004d7029 (CONDITIONAL_JUMP)  ; LAB_004d7029
    XOR EBP,EBP                         ; 004d6f88
    LEA EAX,[ESP + 0x408]               ; 004d6f8a
        ;   Label: LAB_004d6f8a
    PUSH EAX                            ; 004d6f91
    MOV ECX,0x32                        ; 004d6f92
    PUSH 0x5e30cc                       ; 004d6f97 | = "%[^\n]\n"
    LEA EDI,[ESP + 0x410]               ; 004d6f9c
    MOV ESI,0x61d990                    ; 004d6fa3 | = "(file corrupt)"
    PUSH EBX                            ; 004d6fa8
    MOVSD.REP ES:EDI,ESI                ; 004d6fa9 | = "(file corrupt)" | s_file_corrupt_0061d990+4
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d6fab
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004d6fb0
    MOV ESI,dword ptr [0x01d06b10]      ; 004d6fb3 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004d6fb9
    LEA EAX,[ESP + 0x40c]               ; 004d6fba
    PUSH EAX                            ; 004d6fc1
    MOV EDI,dword ptr [0x0061f650]      ; 004d6fc2 | DAT_0061f650
    PUSH EDI                            ; 004d6fc8 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0 ; 004d6fc9
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_0051b6c0(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004d6fce
    PUSH EAX                            ; 004d6fd1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d6fd2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d6fd7
    MOV dword ptr [EBP + 0x1d06aa4],EAX ; 004d6fda
    TEST EAX,EAX                        ; 004d6fe0
    JNZ 0x004d7009                      ; 004d6fe2
        ;   XREF to: 004d7009 (CONDITIONAL_JUMP)  ; LAB_004d7009
    PUSH EBX                            ; 004d6fe4
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d6fe5
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d6fea
    LEA EAX,[ESP + 0x408]               ; 004d6fed
    PUSH EAX                            ; 004d6ff4
    PUSH 0x5e30d3                       ; 004d6ff5 | = "Can't find hero %s.  Sorry."
    MOV EDX,dword ptr [0x0061abc0]      ; 004d6ffa | g_CEditorToolsPtr
    PUSH EDX                            ; 004d7000
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_004943a0 ; 004d7001
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_004943a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004d7006
    MOV EAX,dword ptr [ESP + 0x55c]     ; 004d7009
        ;   Label: LAB_004d7009
    MOV EDX,dword ptr [0x01d06aa0]      ; 004d7010 | DAT_01d06aa0
    INC EAX                             ; 004d7016
    ADD EBP,0x4                         ; 004d7017
    MOV dword ptr [ESP + 0x55c],EAX     ; 004d701a
    CMP EAX,EDX                         ; 004d7021
    JL 0x004d6f8a                       ; 004d7023
        ;   XREF to: 004d6f8a (CONDITIONAL_JUMP)  ; LAB_004d6f8a
    MOV ECX,dword ptr [0x0061f650]      ; 004d7029 | DAT_0061f650
        ;   Label: LAB_004d7029
    PUSH ECX                            ; 004d702f | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051bdc0  ; 004d7030
        ;   XREF to: 0051bdc0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_0051bdc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d7035
    TEST EAX,EAX                        ; 004d7038
    JZ 0x004d6e32                       ; 004d703a
        ;   XREF to: 004d6e32 (CONDITIONAL_JUMP)  ; LAB_004d6e32
    PUSH EBX                            ; 004d7040
    MOV ESI,dword ptr [0x0061b4d0]      ; 004d7041 | DAT_0061b4d0
    PUSH ESI                            ; 004d7047
    CALL core_event.cpp_CEventList_loadState_FUN_004aa610 ; 004d7048
        ;   XREF to: 004aa610 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_loadState_FUN_004aa610(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d704d
    PUSH EBX                            ; 004d7050
    MOV EDI,dword ptr [0x00622ad0]      ; 004d7051 | g_CScriptPtr
    PUSH EDI                            ; 004d7057
    CALL core_script.cpp_CScript_loadState_FUN_0054b3e0 ; 004d7058
        ;   XREF to: 0054b3e0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadState_FUN_0054b3e0(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d705d
    MOV EBP,dword ptr [ESP + 0x53c]     ; 004d7060
    CMP EBP,0x4                         ; 004d7067
    JL 0x004d7218                       ; 004d706a
        ;   XREF to: 004d7218 (CONDITIONAL_JUMP)  ; LAB_004d7218
    JNZ 0x004d7082                      ; 004d7070
        ;   XREF to: 004d7082 (CONDITIONAL_JUMP)  ; LAB_004d7082
    PUSH EBX                            ; 004d7072
    MOV EDX,dword ptr [0x0061dca4]      ; 004d7073 | g_CGorePtr
    PUSH EDX                            ; 004d7079
    CALL core_gore.cpp_CGore_load_FUN_004e6680 ; 004d707a
        ;   XREF to: 004e6680 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_load_FUN_004e6680(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d707f
    CMP dword ptr [ESP + 0x53c],0x7     ; 004d7082
        ;   Label: LAB_004d7082
    JGE 0x004d722c                      ; 004d708a
        ;   XREF to: 004d722c (CONDITIONAL_JUMP)  ; LAB_004d722c
    MOV EBP,dword ptr [0x0061c010]      ; 004d7090 | DAT_0061c010
    PUSH EBP                            ; 004d7096
    CALL core_fire.cpp_CFireEffect_init_FUN_004b4b30 ; 004d7097
        ;   XREF to: 004b4b30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_004b4b30(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004d709c
    CMP dword ptr [ESP + 0x53c],0x6     ; 004d709f
        ;   Label: LAB_004d709f
    JL 0x004d7241                       ; 004d70a7
        ;   XREF to: 004d7241 (CONDITIONAL_JUMP)  ; LAB_004d7241
    PUSH EBX                            ; 004d70ad
    PUSH 0xff                           ; 004d70ae
    LEA EAX,[ESP + 0x310]               ; 004d70b3
    PUSH EAX                            ; 004d70ba
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004d70bb
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d70c0
    PUSH 0x1cd06c4                      ; 004d70c3 | DAT_01cd06c4
    PUSH 0x5e30ef                       ; 004d70c8 | DAT_005e30ef
    PUSH EBX                            ; 004d70cd
    MOV EBP,0x1                         ; 004d70ce
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d70d3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    MOV ECX,dword ptr [0x01cd06c4]      ; 004d70d8 | DAT_01cd06c4
    ADD ESP,0xc                         ; 004d70de
    CMP ECX,EBP                         ; 004d70e1
    JL 0x004d710a                       ; 004d70e3
        ;   XREF to: 004d710a (CONDITIONAL_JUMP)  ; LAB_004d710a
    MOV ESI,0x1cd06c4                   ; 004d70e5
    ADD ESI,0x4                         ; 004d70ea
    PUSH ESI                            ; 004d70ed
        ;   Label: LAB_004d70ed
    PUSH 0x5e30f3                       ; 004d70ee | DAT_005e30f3
    PUSH EBX                            ; 004d70f3
    INC EBP                             ; 004d70f4
    ADD ESI,0x4                         ; 004d70f5
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d70f8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    MOV ECX,dword ptr [0x01cd06c4]      ; 004d70fd | DAT_01cd06c4
    ADD ESP,0xc                         ; 004d7103
    CMP EBP,ECX                         ; 004d7106
    JLE 0x004d70ed                      ; 004d7108
        ;   XREF to: 004d70ed (CONDITIONAL_JUMP)  ; LAB_004d70ed
    MOV dword ptr [0x01cd06c0],0x1      ; 004d710a | DAT_01cd06c0
        ;   Label: LAB_004d710a
    CMP dword ptr [ESP + 0x53c],0x8     ; 004d7114
        ;   Label: LAB_004d7114
    JL 0x004d7162                       ; 004d711c
        ;   XREF to: 004d7162 (CONDITIONAL_JUMP)  ; LAB_004d7162
    PUSH EBX                            ; 004d711e
    PUSH 0xff                           ; 004d711f
    LEA EAX,[ESP + 0x310]               ; 004d7124
    PUSH EAX                            ; 004d712b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004d712c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004d7131
    MOV EBP,dword ptr [ESP + 0x54c]     ; 004d7134
    PUSH EBP                            ; 004d713b
    MOV EAX,dword ptr [ESP + 0x548]     ; 004d713c
    PUSH EAX                            ; 004d7143
    MOV EDX,dword ptr [ESP + 0x558]     ; 004d7144
    PUSH EDX                            ; 004d714b
    MOV ECX,dword ptr [ESP + 0x560]     ; 004d714c
    PUSH ECX                            ; 004d7153
    PUSH 0x5e30f7                       ; 004d7154 | = "%f,%f,%d,%d\n"
    PUSH EBX                            ; 004d7159
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004d715a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004d715f
    CMP dword ptr [ESP + 0x53c],0x9     ; 004d7162
        ;   Label: LAB_004d7162
    JL 0x004d717c                       ; 004d716a
        ;   XREF to: 004d717c (CONDITIONAL_JUMP)  ; LAB_004d717c
    PUSH EBX                            ; 004d716c
    MOV EDI,dword ptr [0x00622c18]      ; 004d716d | g_CDemonSetPtr
    PUSH EDI                            ; 004d7173
    CALL core_set.cpp_FUN_00555e30      ; 004d7174
        ;   XREF to: 00555e30 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00555e30()
    ADD ESP,0x8                         ; 004d7179
    CMP dword ptr [ESP + 0x53c],0xa     ; 004d717c
        ;   Label: LAB_004d717c
    JL 0x004d7195                       ; 004d7184
        ;   XREF to: 004d7195 (CONDITIONAL_JUMP)  ; LAB_004d7195
    PUSH EBX                            ; 004d7186
    MOV EAX,[0x0061d418]                ; 004d7187 | g_CFieldNotesPtr
    PUSH EAX                            ; 004d718c
    CALL core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0 ; 004d718d
        ;   XREF to: 004bebc0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_loadState_FUN_004bebc0(CFieldNotes * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 004d7192
    PUSH EBX                            ; 004d7195
        ;   Label: LAB_004d7195
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d7196
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d719b
    CMP dword ptr [ESP + 0x57c],0x0     ; 004d719e
    JZ 0x004d6e6b                       ; 004d71a6
        ;   XREF to: 004d6e6b (CONDITIONAL_JUMP)  ; LAB_004d6e6b
    MOV ECX,dword ptr [0x0061f650]      ; 004d71ac | DAT_0061f650
    PUSH ECX                            ; 004d71b2 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_run_FUN_0051bad0 ; 004d71b3
        ;   XREF to: 0051bad0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_0051bad0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004d71b8
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d71bb
    CMP dword ptr [EAX + 0x9f8],0x0     ; 004d71c2
    JZ 0x004d6e32                       ; 004d71c9
        ;   XREF to: 004d6e32 (CONDITIONAL_JUMP)  ; LAB_004d6e32
    MOV EAX,dword ptr [ESP + 0x548]     ; 004d71cf
    MOV dword ptr [ESP + 0x578],EAX     ; 004d71d6
    MOV EAX,dword ptr [ESP + 0x574]     ; 004d71dd
    MOV dword ptr [EAX + 0x9f8],0x0     ; 004d71e4
    JMP 0x004d6ab3                      ; 004d71ee
        ;   XREF to: 004d6ab3 (UNCONDITIONAL_JUMP)  ; LAB_004d6ab3
    PUSH EBX                            ; 004d71f3
        ;   Label: LAB_004d71f3
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d71f4
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d71f9
    MOV EAX,ESP                         ; 004d71fc
    PUSH EAX                            ; 004d71fe
    PUSH 0x5e309a                       ; 004d71ff | = "Can't load old save game file %s.  So..."
    MOV EDI,dword ptr [0x0061abc0]      ; 004d7204 | g_CEditorToolsPtr
    PUSH EDI                            ; 004d720a
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 004d720b
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004d7210
    JMP 0x004d6ab3                      ; 004d7213
        ;   XREF to: 004d6ab3 (UNCONDITIONAL_JUMP)  ; LAB_004d6ab3
    MOV ECX,dword ptr [0x0061dca4]      ; 004d7218 | g_CGorePtr
        ;   Label: LAB_004d7218
    PUSH ECX                            ; 004d721e
    CALL core_gore.cpp_CGore_reset_FUN_004e5c00 ; 004d721f
        ;   XREF to: 004e5c00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004e5c00(CGore * this_ptr)
    ADD ESP,0x4                         ; 004d7224
    JMP 0x004d7082                      ; 004d7227
        ;   XREF to: 004d7082 (UNCONDITIONAL_JUMP)  ; LAB_004d7082
    PUSH EBX                            ; 004d722c
        ;   Label: LAB_004d722c
    MOV EDI,dword ptr [0x0061c010]      ; 004d722d | DAT_0061c010
    PUSH EDI                            ; 004d7233
    CALL core_fire.cpp_CFireEffect_load_FUN_004b7370 ; 004d7234
        ;   XREF to: 004b7370 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_load_FUN_004b7370(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d7239
    JMP 0x004d709f                      ; 004d723c
        ;   XREF to: 004d709f (UNCONDITIONAL_JUMP)  ; LAB_004d709f
    XOR EDX,EDX                         ; 004d7241
        ;   Label: LAB_004d7241
    MOV dword ptr [0x01cd06c0],EDX      ; 004d7243 | DAT_01cd06c0
    JMP 0x004d7114                      ; 004d7249
        ;   XREF to: 004d7114 (UNCONDITIONAL_JUMP)  ; LAB_004d7114

