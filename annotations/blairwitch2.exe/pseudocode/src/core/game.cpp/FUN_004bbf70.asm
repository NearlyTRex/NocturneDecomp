; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bbf70(CGame *this_ptr,char *save_filename,int load_mode)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; int              Stack[0xc]:4   load_mode
; Local Variables:
; undefined1       Stack[-0x56c]:1  local_56c
; undefined1       Stack[-0x56b]:1  local_56b
; undefined        Stack[-0x468]:1  local_468
; undefined        Stack[-0x364]:1  local_364
; undefined        Stack[-0x264]:1  local_264
; undefined        Stack[-0x164]:1  local_164
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
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
;   core_game.cpp_FUN_004bc840 at 004bca7b
;   core_menu.cpp_showMainGameMenu_FUN_004ee3f0 at 004ee87c
;
; Referenced Globals:
;   undefined4 DAT_005d852a
;   undefined4 DAT_005d852e
;   TerminatedCString s_noc_005d8533
;   undefined4 DAT_005d8539
;   TerminatedCString s_Select_file_to_load_005d853e
;   undefined4 DAT_005d8552
;   undefined4 DAT_005d8555
;   undefined1 DAT_005d855a
;   undefined1 DAT_005d855b
;   undefined4 DAT_005d855e
;   TerminatedCString s_s_s_005d8563
;   TerminatedCString s_Can_t_open_saved_game_fi_005d8569
;   undefined4 DAT_005d8585
;   TerminatedCString s_Can_t_create_temp_file_t_005d8588
;   undefined4 DAT_005d85b8
;   ... and 41 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_event.cpp_CEventList_loadState_FUN_00491ca0
;   core_event.cpp_FUN_004910b0
;   core_fire.cpp_CFireEffect_init_FUN_0049c190
;   core_fire.cpp_CFireEffect_load_FUN_0049ea80
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004a61b0
;   core_gore.cpp_CGore_load_FUN_004c9e70
;   core_gore.cpp_CGore_reset_FUN_004c93f0
;   core_level.cpp_FUN_004e1480
;   core_main.c_FUN_004e4500
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00
;   core_mission.cpp_FUN_004fce00
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbf70
        ;   Label: core_game.cpp_FUN_004bbf70
    PUSH ESI                            ; 004bbf71
    PUSH EDI                            ; 004bbf72
    PUSH EBP                            ; 004bbf73
    SUB ESP,0x55c                       ; 004bbf74
    PUSH 0x6164c8                       ; 004bbf7a | = "save\\$$SAVE$$.TMP"
    CALL crt_unknown.c_FUN_005ba1e0     ; 004bbf7f
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 004bbf84
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bbf87
    MOV dword ptr [EAX + 0x250],0x1     ; 004bbf8e
    LEA EAX,[ESP + 0x208]               ; 004bbf98
    PUSH EAX                            ; 004bbf9f
    PUSH 0x0                            ; 004bbfa0
    PUSH 0x0                            ; 004bbfa2
    PUSH 0x0                            ; 004bbfa4
    PUSH 0x1cb7b50                      ; 004bbfa6 | DAT_01cb7b50
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 004bbfab
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bbfb0
    PUSH 0x5d852a                       ; 004bbfb3 | DAT_005d852a
    LEA EAX,[ESP + 0x20c]               ; 004bbfb8
    PUSH EAX                            ; 004bbfbf
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bbfc0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bbfc5
    TEST EAX,EAX                        ; 004bbfc8
    JZ 0x004bbfe9                       ; 004bbfca
        ;   XREF to: 004bbfe9 (CONDITIONAL_JUMP)  ; LAB_004bbfe9
    PUSH 0x5d852e                       ; 004bbfcc | DAT_005d852e
    LEA EAX,[ESP + 0x20c]               ; 004bbfd1
    PUSH EAX                            ; 004bbfd8
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bbfd9
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bbfde
    TEST EAX,EAX                        ; 004bbfe1
    JNZ 0x004bc3c6                      ; 004bbfe3
        ;   XREF to: 004bc3c6 (CONDITIONAL_JUMP)  ; LAB_004bc3c6
    MOV ESI,0x1cb7b50                   ; 004bbfe9
        ;   Label: LAB_004bbfe9
    MOV EDI,ESP                         ; 004bbfee
    PUSH EDI                            ; 004bbff0
    MOV AL,byte ptr [ESI]               ; 004bbff1 | DAT_01cb7b50 | DAT_01cb7b52
        ;   Label: LAB_004bbff1
    MOV byte ptr [EDI],AL               ; 004bbff3
    CMP AL,0x0                          ; 004bbff5
    JZ 0x004bc009                       ; 004bbff7
        ;   XREF to: 004bc009 (CONDITIONAL_JUMP)  ; LAB_004bc009
    MOV AL,byte ptr [ESI + 0x1]         ; 004bbff9 | DAT_01cb7b51 | DAT_01cb7b53
    ADD ESI,0x2                         ; 004bbffc
    MOV byte ptr [EDI + 0x1],AL         ; 004bbfff
    ADD EDI,0x2                         ; 004bc002
    CMP AL,0x0                          ; 004bc005
    JNZ 0x004bbff1                      ; 004bc007
        ;   XREF to: 004bbff1 (CONDITIONAL_JUMP)  ; LAB_004bbff1
    POP EDI                             ; 004bc009
        ;   Label: LAB_004bc009
    MOV EDX,dword ptr [0x00616044]      ; 004bc00a | g_CFieldNotesPtr
        ;   Label: LAB_004bc00a
    PUSH EDX                            ; 004bc010
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004bc011
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bc016
    MOV EAX,[0x01c25590]                ; 004bc019 | DAT_01c25590
    MOV ECX,dword ptr [ESP + 0x578]     ; 004bc01e
    MOV dword ptr [ESP + 0x53c],EAX     ; 004bc025
    TEST ECX,ECX                        ; 004bc02c
    JNZ 0x004bc3d0                      ; 004bc02e
        ;   XREF to: 004bc3d0 (CONDITIONAL_JUMP)  ; LAB_004bc3d0
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc034
        ;   Label: LAB_004bc034
    ADD EAX,0x9ec                       ; 004bc03b
    MOV dword ptr [ESP + 0x544],EAX     ; 004bc040
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc047
    ADD EAX,0x274                       ; 004bc04e
    MOV dword ptr [ESP + 0x548],EAX     ; 004bc053
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc05a
    ADD EAX,0x26c                       ; 004bc061
    MOV dword ptr [ESP + 0x540],EAX     ; 004bc066
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc06d
    ADD EAX,0x268                       ; 004bc074
    MOV dword ptr [ESP + 0x54c],EAX     ; 004bc079
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc080
    ADD EAX,0x270                       ; 004bc087
    MOV dword ptr [ESP + 0x550],EAX     ; 004bc08c
    MOV EBX,dword ptr [ESP + 0x574]     ; 004bc093
        ;   Label: LAB_004bc093
    TEST EBX,EBX                        ; 004bc09a
    JZ 0x004bc3df                       ; 004bc09c
        ;   XREF to: 004bc3df (CONDITIONAL_JUMP)  ; LAB_004bc3df
    MOV EDI,ESP                         ; 004bc0a2
    MOV ESI,EBX                         ; 004bc0a4
    PUSH EDI                            ; 004bc0a6
    MOV AL,byte ptr [ESI]               ; 004bc0a7
        ;   Label: LAB_004bc0a7
    MOV byte ptr [EDI],AL               ; 004bc0a9
    CMP AL,0x0                          ; 004bc0ab
    JZ 0x004bc0bf                       ; 004bc0ad
        ;   XREF to: 004bc0bf (CONDITIONAL_JUMP)  ; LAB_004bc0bf
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc0af
    ADD ESI,0x2                         ; 004bc0b2
    MOV byte ptr [EDI + 0x1],AL         ; 004bc0b5
    ADD EDI,0x2                         ; 004bc0b8
    CMP AL,0x0                          ; 004bc0bb
    JNZ 0x004bc0a7                      ; 004bc0bd
        ;   XREF to: 004bc0a7 (CONDITIONAL_JUMP)  ; LAB_004bc0a7
    POP EDI                             ; 004bc0bf
        ;   Label: LAB_004bc0bf
    MOV EDI,dword ptr [0x006141f0]      ; 004bc0c0 | DAT_006141f0
        ;   Label: LAB_004bc0c0
    PUSH EDI                            ; 004bc0c6
    CALL core_event.cpp_FUN_004910b0    ; 004bc0c7
        ;   XREF to: 004910b0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004910b0()
    ADD ESP,0x4                         ; 004bc0cc
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 004bc0cf
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    PUSH -0x1                           ; 004bc0d4
    PUSH 0x0                            ; 004bc0d6
    PUSH 0x9                            ; 004bc0d8
    MOV EBP,dword ptr [0x00617e10]      ; 004bc0da | DAT_00617e10
    PUSH EBP                            ; 004bc0e0
    CALL core_level.cpp_FUN_004e1480    ; 004bc0e1
        ;   XREF to: 004e1480 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e1480()
    ADD ESP,0x10                        ; 004bc0e6
    PUSH 0x5d8552                       ; 004bc0e9 | DAT_005d8552
    LEA EAX,[ESP + 0x4]                 ; 004bc0ee
    PUSH EAX                            ; 004bc0f2
    PUSH 0x5d8555                       ; 004bc0f3 | DAT_005d8555
    CALL engine_dosio.cpp_FUN_00460c70  ; 004bc0f8
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004bc0fd
    PUSH EAX                            ; 004bc100
    MOV EBX,EAX                         ; 004bc101
    CALL crt_stdio.c_ftell_FUN_005baab0 ; 004bc103
        ;   XREF to: 005baab0 (UNCONDITIONAL_CALL)  ; long crt_stdio.c_ftell_FUN_005baab0(_FILE * file_handle)
    ADD ESP,0x4                         ; 004bc108
    MOV dword ptr [ESP + 0x554],EAX     ; 004bc10b
    MOV EAX,ESP                         ; 004bc112
    PUSH EAX                            ; 004bc114
    PUSH 0x1cb7b50                      ; 004bc115 | DAT_01cb7b50
    MOV EBP,0x1                         ; 004bc11a
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bc11f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bc124
    TEST EAX,EAX                        ; 004bc127
    JZ 0x004bc14e                       ; 004bc129
        ;   XREF to: 004bc14e (CONDITIONAL_JUMP)  ; LAB_004bc14e
    MOV ESI,ESP                         ; 004bc12b
    MOV EDI,0x1cb7b50                   ; 004bc12d
    PUSH EDI                            ; 004bc132 | DAT_01cb7b50
    MOV AL,byte ptr [ESI]               ; 004bc133
        ;   Label: LAB_004bc133
    MOV byte ptr [EDI],AL               ; 004bc135 | DAT_01cb7b50 | DAT_01cb7b52
    CMP AL,0x0                          ; 004bc137
    JZ 0x004bc14b                       ; 004bc139
        ;   XREF to: 004bc14b (CONDITIONAL_JUMP)  ; LAB_004bc14b
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc13b
    ADD ESI,0x2                         ; 004bc13e
    MOV byte ptr [EDI + 0x1],AL         ; 004bc141 | DAT_01cb7b51 | DAT_01cb7b53
    ADD EDI,0x2                         ; 004bc144
    CMP AL,0x0                          ; 004bc147
    JNZ 0x004bc133                      ; 004bc149
        ;   XREF to: 004bc133 (CONDITIONAL_JUMP)  ; LAB_004bc133
    POP EDI                             ; 004bc14b
        ;   Label: LAB_004bc14b
    XOR EBP,EBP                         ; 004bc14c
    CMP dword ptr [ESP + 0x578],0x0     ; 004bc14e
        ;   Label: LAB_004bc14e
    JNZ 0x004bc15d                      ; 004bc156
        ;   XREF to: 004bc15d (CONDITIONAL_JUMP)  ; LAB_004bc15d
    MOV EBP,0x1                         ; 004bc158
    PUSH EBX                            ; 004bc15d
        ;   Label: LAB_004bc15d
    PUSH 0x1                            ; 004bc15e
    PUSH 0x4                            ; 004bc160
    LEA EAX,[ESP + 0x540]               ; 004bc162
    PUSH EAX                            ; 004bc169
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004bc16a
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004bc16f
    PUSH 0x0                            ; 004bc172
    MOV EDX,dword ptr [ESP + 0x558]     ; 004bc174
    PUSH EDX                            ; 004bc17b
    PUSH EBX                            ; 004bc17c
    MOV EDI,0x6164dc                    ; 004bc17d | DAT_006164dc
    CALL crt_stdio.c_fseek_FUN_005b929c ; 004bc182
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005b929c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004bc187
    LEA ESI,[ESP + 0x534]               ; 004bc18a
    MOV ECX,0x4                         ; 004bc191
    XOR EAX,EAX                         ; 004bc196
    CMPSB.REPE ES:EDI,ESI               ; 004bc198 | DAT_006164dc | DAT_006164dd
    JZ 0x004bc1a1                       ; 004bc19a
        ;   XREF to: 004bc1a1 (CONDITIONAL_JUMP)  ; LAB_004bc1a1
    SBB EAX,EAX                         ; 004bc19c
    SBB EAX,-0x1                        ; 004bc19e
    TEST EAX,EAX                        ; 004bc1a1
        ;   Label: LAB_004bc1a1
    JZ 0x004bc1c9                       ; 004bc1a3
        ;   XREF to: 004bc1c9 (CONDITIONAL_JUMP)  ; LAB_004bc1c9
    MOV ECX,0x3                         ; 004bc1a5
    MOV EDI,0x5d855a                    ; 004bc1aa | DAT_005d855a
    LEA ESI,[ESP + 0x534]               ; 004bc1af
    XOR EAX,EAX                         ; 004bc1b6
    CMPSB.REPE ES:EDI,ESI               ; 004bc1b8 | DAT_005d855a | DAT_005d855b
    JZ 0x004bc1c1                       ; 004bc1ba
        ;   XREF to: 004bc1c1 (CONDITIONAL_JUMP)  ; LAB_004bc1c1
    SBB EAX,EAX                         ; 004bc1bc
    SBB EAX,-0x1                        ; 004bc1be
    TEST EAX,EAX                        ; 004bc1c1
        ;   Label: LAB_004bc1c1
    JNZ 0x004bc36c                      ; 004bc1c3
        ;   XREF to: 004bc36c (CONDITIONAL_JUMP)  ; LAB_004bc36c
    PUSH EBX                            ; 004bc1c9
        ;   Label: LAB_004bc1c9
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc1ca
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc1cf
    LEA EAX,[ESP + 0x504]               ; 004bc1d2
    PUSH EAX                            ; 004bc1d9
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004bc1da
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bc1df
    LEA EAX,[ESP + 0x52c]               ; 004bc1e2
    PUSH EAX                            ; 004bc1e9
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80 ; 004bc1ea
        ;   XREF to: 0057db80 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bc1ef
    MOV EAX,ESP                         ; 004bc1f2
    PUSH EAX                            ; 004bc1f4
    PUSH 0x5d855e                       ; 004bc1f5 | DAT_005d855e
    PUSH 0x5d8563                       ; 004bc1fa | = "%s\\%s"
    LEA EAX,[ESP + 0x110]               ; 004bc1ff
    PUSH EAX                            ; 004bc206
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004bc207
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004bc20c
    LEA EAX,[ESP + 0x104]               ; 004bc20f
    PUSH EAX                            ; 004bc216
    LEA EAX,[ESP + 0x508]               ; 004bc217
    PUSH EAX                            ; 004bc21e
    CALL support_trstream.cpp_CInStreamFile_open_FUN_0057d320 ; 004bc21f
        ;   XREF to: 0057d320 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_open_FUN_0057d320(CInStreamFile * this_ptr, char * path)
    ADD ESP,0x8                         ; 004bc224
    TEST EAX,EAX                        ; 004bc227
    JZ 0x004bc459                       ; 004bc229
        ;   XREF to: 004bc459 (CONDITIONAL_JUMP)  ; LAB_004bc459
    PUSH 0x0                            ; 004bc22f
    PUSH 0x4                            ; 004bc231
    LEA EAX,[ESP + 0x50c]               ; 004bc233
    PUSH EAX                            ; 004bc23a
    CALL support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0 ; 004bc23b
        ;   XREF to: 0057d0c0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_seek_FUN_0057d0c0(CInStreamFile * this_ptr, int offset, int origin)
    ADD ESP,0xc                         ; 004bc240
    PUSH 0x5d8585                       ; 004bc243 | DAT_005d8585
    PUSH 0x6164c8                       ; 004bc248 | = "save\\$$SAVE$$.TMP"
    LEA EAX,[ESP + 0x534]               ; 004bc24d
    PUSH EAX                            ; 004bc254
    CALL support_trstream.cpp_COutStreamFile_open_FUN_0057dd90 ; 004bc255
        ;   XREF to: 0057dd90 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_open_FUN_0057dd90(COutStreamFile * this_ptr, char * path, char * mode)
    ADD ESP,0xc                         ; 004bc25a
    TEST EAX,EAX                        ; 004bc25d
    JZ 0x004bc4a5                       ; 004bc25f
        ;   XREF to: 004bc4a5 (CONDITIONAL_JUMP)  ; LAB_004bc4a5
    PUSH 0x8                            ; 004bc265
    PUSH 0x8000                         ; 004bc267
    LEA EAX,[ESP + 0x4d8]               ; 004bc26c
    PUSH EAX                            ; 004bc273
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_00434990 ; 004bc274
        ;   XREF to: 00434990 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_00434990(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004bc279
    LEA EAX,[ESP + 0x4d0]               ; 004bc27c
    PUSH EAX                            ; 004bc283
    CALL support_codec.cpp_CLZWDecompress_init_FUN_004349d0 ; 004bc284
        ;   XREF to: 004349d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_004349d0(CLZWDecompress * this_ptr)
    ADD ESP,0x4                         ; 004bc289
    LEA EAX,[ESP + 0x52c]               ; 004bc28c
    PUSH EAX                            ; 004bc293
    LEA EAX,[ESP + 0x508]               ; 004bc294
    PUSH EAX                            ; 004bc29b
    LEA EAX,[ESP + 0x4d8]               ; 004bc29c
    PUSH EAX                            ; 004bc2a3
    CALL support_codec.cpp_FUN_00434a10 ; 004bc2a4
        ;   XREF to: 00434a10 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434a10()
    ADD ESP,0xc                         ; 004bc2a9
    LEA EAX,[ESP + 0x52c]               ; 004bc2ac
    PUSH EAX                            ; 004bc2b3
    LEA EAX,[ESP + 0x4d4]               ; 004bc2b4
    PUSH EAX                            ; 004bc2bb
    CALL support_codec.cpp_FUN_00434a70 ; 004bc2bc
        ;   XREF to: 00434a70 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434a70()
    ADD ESP,0x8                         ; 004bc2c1
    LEA EAX,[ESP + 0x504]               ; 004bc2c4
    PUSH EAX                            ; 004bc2cb
    CALL support_trstream.cpp_CInStreamFile_close_FUN_0057d180 ; 004bc2cc
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bc2d1
    LEA EAX,[ESP + 0x52c]               ; 004bc2d4
    PUSH EAX                            ; 004bc2db
    CALL support_trstream.cpp_COutStreamFile_close_FUN_0057dd60 ; 004bc2dc
        ;   XREF to: 0057dd60 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_close_FUN_0057dd60(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bc2e1
    PUSH 0x5d85b8                       ; 004bc2e4 | DAT_005d85b8
    PUSH 0x6164c8                       ; 004bc2e9 | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004bc2ee
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004bc2f3
    MOV EBX,EAX                         ; 004bc2f6
    TEST EAX,EAX                        ; 004bc2f8
    JNZ 0x004bc324                      ; 004bc2fa
        ;   XREF to: 004bc324 (CONDITIONAL_JUMP)  ; LAB_004bc324
    PUSH 0x6164c8                       ; 004bc2fc | = "save\\$$SAVE$$.TMP"
    MOV ESI,0x5d85bb                    ; 004bc301 | = "..\\core\\game.cpp"
    MOV EDI,0x106f                      ; 004bc306
    PUSH 0x5d85cc                       ; 004bc30b | = "Can't reopen %s"
    MOV dword ptr [0x01d046a0],ESI      ; 004bc310 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004bc316 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004bc31c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004bc321
    PUSH 0x0                            ; 004bc324
        ;   Label: LAB_004bc324
    LEA EAX,[ESP + 0x4d8]               ; 004bc326
    PUSH EAX                            ; 004bc32d
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00434270 ; 004bc32e
        ;   XREF to: 00434270 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00434270(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc333
    PUSH 0x1                            ; 004bc336
    LEA EAX,[ESP + 0x4d4]               ; 004bc338
    PUSH EAX                            ; 004bc33f
    CALL support_codec.cpp_CCodec_dtor_FUN_00433e90 ; 004bc340
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00433e90(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc345
    PUSH 0x0                            ; 004bc348
    LEA EAX,[ESP + 0x530]               ; 004bc34a
    PUSH EAX                            ; 004bc351
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bc352
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc357
    PUSH 0x0                            ; 004bc35a
    LEA EAX,[ESP + 0x508]               ; 004bc35c
    PUSH EAX                            ; 004bc363
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bc364
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc369
    PUSH EBX                            ; 004bc36c
        ;   Label: LAB_004bc36c
    PUSH 0xff                           ; 004bc36d
    LEA EAX,[ESP + 0x310]               ; 004bc372
    PUSH EAX                            ; 004bc379
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004bc37a
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bc37f
    PUSH 0xa                            ; 004bc382
    PUSH 0x5d85dc                       ; 004bc384 | = "CInventory"
    LEA EAX,[ESP + 0x310]               ; 004bc389
    PUSH EAX                            ; 004bc390
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 004bc391
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004bc396
    TEST EAX,EAX                        ; 004bc399
    JNZ 0x004bc4f1                      ; 004bc39b
        ;   XREF to: 004bc4f1 (CONDITIONAL_JUMP)  ; LAB_004bc4f1
    PUSH EBX                            ; 004bc3a1
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc3a2
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc3a7
    MOV EAX,ESP                         ; 004bc3aa
    PUSH EAX                            ; 004bc3ac
    PUSH 0x5d85e7                       ; 004bc3ad | = "Can't load old save game file %s.  So..."
    MOV EBP,dword ptr [0x006138e0]      ; 004bc3b2 | g_CEditorToolsPtr
    PUSH EBP                            ; 004bc3b8
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 004bc3b9
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bc3be
    JMP 0x004bc093                      ; 004bc3c1
        ;   XREF to: 004bc093 (UNCONDITIONAL_JUMP)  ; LAB_004bc093
    XOR AH,AH                           ; 004bc3c6
        ;   Label: LAB_004bc3c6
    MOV byte ptr [ESP],AH               ; 004bc3c8
    JMP 0x004bc00a                      ; 004bc3cb
        ;   XREF to: 004bc00a (UNCONDITIONAL_JUMP)  ; LAB_004bc00a
    MOV EAX,[0x01511cc0]                ; 004bc3d0 | DAT_01511cc0
        ;   Label: LAB_004bc3d0
    MOV [0x01c25590],EAX                ; 004bc3d5 | DAT_01c25590
    JMP 0x004bc034                      ; 004bc3da
        ;   XREF to: 004bc034 (UNCONDITIONAL_JUMP)  ; LAB_004bc034
    PUSH 0x1                            ; 004bc3df
        ;   Label: LAB_004bc3df
    LEA EAX,[ESP + 0x4]                 ; 004bc3e1
    PUSH EAX                            ; 004bc3e5
    PUSH 0x5d8533                       ; 004bc3e6 | = "*.noc"
    PUSH 0x5d8539                       ; 004bc3eb | DAT_005d8539
    PUSH 0x5d853e                       ; 004bc3f0 | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bc3f5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bc3fa
    PUSH EAX                            ; 004bc3fd
    MOV ESI,dword ptr [0x006138e0]      ; 004bc3fe | g_CEditorToolsPtr
    PUSH ESI                            ; 004bc404
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970 ; 004bc405
        ;   XREF to: 0047c970 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047c970(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004bc40a
    TEST EAX,EAX                        ; 004bc40d
    JNZ 0x004bc0c0                      ; 004bc40f
        ;   XREF to: 004bc0c0 (CONDITIONAL_JUMP)  ; LAB_004bc0c0
    MOV ESI,dword ptr [0x00616044]      ; 004bc415 | g_CFieldNotesPtr
        ;   Label: LAB_004bc415
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004bc41b
    PUSH ESI                            ; 004bc422
    MOV [0x01c25590],EAX                ; 004bc423 | DAT_01c25590
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0 ; 004bc428
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004bc42d
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc430
    PUSH 0x6164c8                       ; 004bc437 | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [EAX + 0x250],0x0     ; 004bc43c
    CALL crt_unknown.c_FUN_005ba1e0     ; 004bc446
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 004bc44b
    ADD ESP,0x55c                       ; 004bc44e
        ;   Label: LAB_004bc44e
    POP EBP                             ; 004bc454
    POP EDI                             ; 004bc455
    POP ESI                             ; 004bc456
    POP EBX                             ; 004bc457
    RET                                 ; 004bc458
    PUSH 0x5d8569                       ; 004bc459 | = "Can't open saved game file."
        ;   Label: LAB_004bc459
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bc45e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bc463
    PUSH EAX                            ; 004bc466
    MOV ECX,dword ptr [0x006138e0]      ; 004bc467 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bc46d
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004bc46e
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bc473
    PUSH 0x0                            ; 004bc476
    LEA EAX,[ESP + 0x530]               ; 004bc478
    PUSH EAX                            ; 004bc47f
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bc480
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc485
    PUSH 0x0                            ; 004bc488
    LEA EAX,[ESP + 0x508]               ; 004bc48a
    PUSH EAX                            ; 004bc491
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bc492
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc497
    ADD ESP,0x55c                       ; 004bc49a
    POP EBP                             ; 004bc4a0
    POP EDI                             ; 004bc4a1
    POP ESI                             ; 004bc4a2
    POP EBX                             ; 004bc4a3
    RET                                 ; 004bc4a4
    PUSH 0x5d8588                       ; 004bc4a5 | = "Can't create temp file to load saved ..."
        ;   Label: LAB_004bc4a5
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bc4aa
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bc4af
    PUSH EAX                            ; 004bc4b2
    MOV EBX,dword ptr [0x006138e0]      ; 004bc4b3 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bc4b9
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004bc4ba
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bc4bf
    PUSH 0x0                            ; 004bc4c2
    LEA EAX,[ESP + 0x530]               ; 004bc4c4
    PUSH EAX                            ; 004bc4cb
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bc4cc
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc4d1
    PUSH 0x0                            ; 004bc4d4
    LEA EAX,[ESP + 0x508]               ; 004bc4d6
    PUSH EAX                            ; 004bc4dd
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bc4de
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bc4e3
    ADD ESP,0x55c                       ; 004bc4e6
    POP EBP                             ; 004bc4ec
    POP EDI                             ; 004bc4ed
    POP ESI                             ; 004bc4ee
    POP EBX                             ; 004bc4ef
    RET                                 ; 004bc4f0
    LEA EAX,[ESP + 0x538]               ; 004bc4f1
        ;   Label: LAB_004bc4f1
    PUSH EAX                            ; 004bc4f8
    PUSH 0x5d8611                       ; 004bc4f9 | DAT_005d8611
    PUSH EBX                            ; 004bc4fe
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc4ff
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bc504
    CMP dword ptr [ESP + 0x538],0x3     ; 004bc507
    JL 0x004bc7d6                       ; 004bc50f
        ;   XREF to: 004bc7d6 (CONDITIONAL_JUMP)  ; LAB_004bc7d6
    PUSH EBP                            ; 004bc515
    PUSH EBX                            ; 004bc516
    MOV EDX,dword ptr [0x00618170]      ; 004bc517 | DAT_00618170
    PUSH EDX                            ; 004bc51d
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 ; 004bc51e
        ;   XREF to: 004fb590 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004bc523
    PUSH EBX                            ; 004bc526
    PUSH 0xff                           ; 004bc527
    LEA EAX,[ESP + 0x310]               ; 004bc52c
    PUSH EAX                            ; 004bc533
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004bc534
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bc539
    PUSH 0x1cedef4                      ; 004bc53c | DAT_01cedef4
    PUSH 0x1cedee0                      ; 004bc541 | DAT_01cedee0
    PUSH 0x5d863f                       ; 004bc546 | = "%d, %d\n"
    PUSH EBX                            ; 004bc54b
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc54c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004bc551
    XOR ECX,ECX                         ; 004bc554
    MOV ESI,dword ptr [0x01cedee0]      ; 004bc556 | DAT_01cedee0
    MOV dword ptr [ESP + 0x558],ECX     ; 004bc55c
    TEST ESI,ESI                        ; 004bc563
    JLE 0x004bc60c                      ; 004bc565
        ;   XREF to: 004bc60c (CONDITIONAL_JUMP)  ; LAB_004bc60c
    XOR EBP,EBP                         ; 004bc56b
    LEA EAX,[ESP + 0x408]               ; 004bc56d
        ;   Label: LAB_004bc56d
    PUSH EAX                            ; 004bc574
    MOV ECX,0x32                        ; 004bc575
    PUSH 0x5d8647                       ; 004bc57a | = "%[^\n]\n"
    LEA EDI,[ESP + 0x410]               ; 004bc57f
    MOV ESI,0x6164e0                    ; 004bc586 | = "(file corrupt)"
    PUSH EBX                            ; 004bc58b
    MOVSD.REP ES:EDI,ESI                ; 004bc58c | = "(file corrupt)" | s_file_corrupt_006164e0+4
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc58e
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004bc593
    MOV ESI,dword ptr [0x01cedf50]      ; 004bc596 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004bc59c
    LEA EAX,[ESP + 0x40c]               ; 004bc59d
    PUSH EAX                            ; 004bc5a4
    MOV EDI,dword ptr [0x00618170]      ; 004bc5a5 | DAT_00618170
    PUSH EDI                            ; 004bc5ab
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740 ; 004bc5ac
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004fc740(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004bc5b1
    PUSH EAX                            ; 004bc5b4
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004bc5b5
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004bc5ba
    MOV dword ptr [EBP + 0x1cedee4],EAX ; 004bc5bd
    TEST EAX,EAX                        ; 004bc5c3
    JNZ 0x004bc5ec                      ; 004bc5c5
        ;   XREF to: 004bc5ec (CONDITIONAL_JUMP)  ; LAB_004bc5ec
    PUSH EBX                            ; 004bc5c7
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc5c8
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc5cd
    LEA EAX,[ESP + 0x408]               ; 004bc5d0
    PUSH EAX                            ; 004bc5d7
    PUSH 0x5d864e                       ; 004bc5d8 | = "Can't find hero %s.  Sorry."
    MOV EDX,dword ptr [0x006138e0]      ; 004bc5dd | g_CEditorToolsPtr
    PUSH EDX                            ; 004bc5e3
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 004bc5e4
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bc5e9
    MOV EAX,dword ptr [ESP + 0x558]     ; 004bc5ec
        ;   Label: LAB_004bc5ec
    MOV EDX,dword ptr [0x01cedee0]      ; 004bc5f3 | DAT_01cedee0
    INC EAX                             ; 004bc5f9
    ADD EBP,0x4                         ; 004bc5fa
    MOV dword ptr [ESP + 0x558],EAX     ; 004bc5fd
    CMP EAX,EDX                         ; 004bc604
    JL 0x004bc56d                       ; 004bc606
        ;   XREF to: 004bc56d (CONDITIONAL_JUMP)  ; LAB_004bc56d
    MOV ECX,dword ptr [0x00618170]      ; 004bc60c | DAT_00618170
        ;   Label: LAB_004bc60c
    PUSH ECX                            ; 004bc612
    CALL core_mission.cpp_FUN_004fce00  ; 004bc613
        ;   XREF to: 004fce00 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004fce00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bc618
    TEST EAX,EAX                        ; 004bc61b
    JZ 0x004bc415                       ; 004bc61d
        ;   XREF to: 004bc415 (CONDITIONAL_JUMP)  ; LAB_004bc415
    PUSH EBX                            ; 004bc623
    MOV ESI,dword ptr [0x006141f0]      ; 004bc624 | DAT_006141f0
    PUSH ESI                            ; 004bc62a
    CALL core_event.cpp_CEventList_loadState_FUN_00491ca0 ; 004bc62b
        ;   XREF to: 00491ca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_loadState_FUN_00491ca0(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bc630
    PUSH EBX                            ; 004bc633
    MOV EDI,dword ptr [0x0061b460]      ; 004bc634 | g_CScriptPtr
    PUSH EDI                            ; 004bc63a
    CALL core_script.cpp_CScript_loadState_FUN_0052a0d0 ; 004bc63b
        ;   XREF to: 0052a0d0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadState_FUN_0052a0d0(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bc640
    MOV EBP,dword ptr [ESP + 0x538]     ; 004bc643
    CMP EBP,0x4                         ; 004bc64a
    JL 0x004bc7fb                       ; 004bc64d
        ;   XREF to: 004bc7fb (CONDITIONAL_JUMP)  ; LAB_004bc7fb
    JNZ 0x004bc665                      ; 004bc653
        ;   XREF to: 004bc665 (CONDITIONAL_JUMP)  ; LAB_004bc665
    PUSH EBX                            ; 004bc655
    MOV EDX,dword ptr [0x006167e0]      ; 004bc656 | g_CGorePtr
    PUSH EDX                            ; 004bc65c
    CALL core_gore.cpp_CGore_load_FUN_004c9e70 ; 004bc65d
        ;   XREF to: 004c9e70 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_load_FUN_004c9e70(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bc662
    CMP dword ptr [ESP + 0x538],0x7     ; 004bc665
        ;   Label: LAB_004bc665
    JGE 0x004bc80f                      ; 004bc66d
        ;   XREF to: 004bc80f (CONDITIONAL_JUMP)  ; LAB_004bc80f
    MOV EBP,dword ptr [0x00614d30]      ; 004bc673 | DAT_00614d30
    PUSH EBP                            ; 004bc679
    CALL core_fire.cpp_CFireEffect_init_FUN_0049c190 ; 004bc67a
        ;   XREF to: 0049c190 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_init_FUN_0049c190(CFireEffect * this_ptr)
    ADD ESP,0x4                         ; 004bc67f
    CMP dword ptr [ESP + 0x538],0x6     ; 004bc682
        ;   Label: LAB_004bc682
    JL 0x004bc824                       ; 004bc68a
        ;   XREF to: 004bc824 (CONDITIONAL_JUMP)  ; LAB_004bc824
    PUSH EBX                            ; 004bc690
    PUSH 0xff                           ; 004bc691
    LEA EAX,[ESP + 0x310]               ; 004bc696
    PUSH EAX                            ; 004bc69d
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004bc69e
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bc6a3
    PUSH 0x1cb7c54                      ; 004bc6a6 | DAT_01cb7c54
    PUSH 0x5d866a                       ; 004bc6ab | DAT_005d866a
    PUSH EBX                            ; 004bc6b0
    MOV EBP,0x1                         ; 004bc6b1
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc6b6
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV ECX,dword ptr [0x01cb7c54]      ; 004bc6bb | DAT_01cb7c54
    ADD ESP,0xc                         ; 004bc6c1
    CMP ECX,EBP                         ; 004bc6c4
    JL 0x004bc6ed                       ; 004bc6c6
        ;   XREF to: 004bc6ed (CONDITIONAL_JUMP)  ; LAB_004bc6ed
    MOV ESI,0x1cb7c54                   ; 004bc6c8
    ADD ESI,0x4                         ; 004bc6cd
    PUSH ESI                            ; 004bc6d0 | DAT_01cb7c58 | DAT_01cb7c5c
        ;   Label: LAB_004bc6d0
    PUSH 0x5d866e                       ; 004bc6d1 | DAT_005d866e
    PUSH EBX                            ; 004bc6d6
    INC EBP                             ; 004bc6d7
    ADD ESI,0x4                         ; 004bc6d8
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc6db
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    MOV ECX,dword ptr [0x01cb7c54]      ; 004bc6e0 | DAT_01cb7c54
    ADD ESP,0xc                         ; 004bc6e6
    CMP EBP,ECX                         ; 004bc6e9
    JLE 0x004bc6d0                      ; 004bc6eb
        ;   XREF to: 004bc6d0 (CONDITIONAL_JUMP)  ; LAB_004bc6d0
    MOV dword ptr [0x01cb7c50],0x1      ; 004bc6ed | DAT_01cb7c50
        ;   Label: LAB_004bc6ed
    CMP dword ptr [ESP + 0x538],0x8     ; 004bc6f7
        ;   Label: LAB_004bc6f7
    JL 0x004bc745                       ; 004bc6ff
        ;   XREF to: 004bc745 (CONDITIONAL_JUMP)  ; LAB_004bc745
    PUSH EBX                            ; 004bc701
    PUSH 0xff                           ; 004bc702
    LEA EAX,[ESP + 0x310]               ; 004bc707
    PUSH EAX                            ; 004bc70e
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004bc70f
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004bc714
    MOV EBP,dword ptr [ESP + 0x548]     ; 004bc717
    PUSH EBP                            ; 004bc71e
    MOV EAX,dword ptr [ESP + 0x544]     ; 004bc71f
    PUSH EAX                            ; 004bc726
    MOV EDX,dword ptr [ESP + 0x554]     ; 004bc727
    PUSH EDX                            ; 004bc72e
    MOV ECX,dword ptr [ESP + 0x55c]     ; 004bc72f
    PUSH ECX                            ; 004bc736
    PUSH 0x5d8672                       ; 004bc737 | = "%f,%f,%d,%d\n"
    PUSH EBX                            ; 004bc73c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004bc73d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004bc742
    CMP dword ptr [ESP + 0x538],0x9     ; 004bc745
        ;   Label: LAB_004bc745
    JL 0x004bc75f                       ; 004bc74d
        ;   XREF to: 004bc75f (CONDITIONAL_JUMP)  ; LAB_004bc75f
    PUSH EBX                            ; 004bc74f
    MOV EDI,dword ptr [0x0061b5a8]      ; 004bc750 | g_CDemonSetPtr
    PUSH EDI                            ; 004bc756
    CALL core_set.cpp_CDemonSet_loadStateInfo_FUN_00534a90 ; 004bc757
        ;   XREF to: 00534a90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_loadStateInfo_FUN_00534a90(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bc75c
    CMP dword ptr [ESP + 0x538],0xa     ; 004bc75f
        ;   Label: LAB_004bc75f
    JL 0x004bc778                       ; 004bc767
        ;   XREF to: 004bc778 (CONDITIONAL_JUMP)  ; LAB_004bc778
    PUSH EBX                            ; 004bc769
    MOV EAX,[0x00616044]                ; 004bc76a | g_CFieldNotesPtr
    PUSH EAX                            ; 004bc76f
    CALL core_fldnotes.cpp_CFieldNotes_loadState_FUN_004a61b0 ; 004bc770
        ;   XREF to: 004a61b0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_loadState_FUN_004a61b0(CFieldNotes * this_ptr, _FILE * file)
    ADD ESP,0x8                         ; 004bc775
    PUSH EBX                            ; 004bc778
        ;   Label: LAB_004bc778
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc779
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc77e
    CMP dword ptr [ESP + 0x578],0x0     ; 004bc781
    JZ 0x004bc44e                       ; 004bc789
        ;   XREF to: 004bc44e (CONDITIONAL_JUMP)  ; LAB_004bc44e
    MOV ECX,dword ptr [0x00618170]      ; 004bc78f | DAT_00618170
    PUSH ECX                            ; 004bc795
    CALL core_mission.cpp_CDemonMission_run_FUN_004fcb00 ; 004bc796
        ;   XREF to: 004fcb00 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004fcb00(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004bc79b
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc79e
    CMP dword ptr [EAX + 0x9e8],0x0     ; 004bc7a5
    JZ 0x004bc415                       ; 004bc7ac
        ;   XREF to: 004bc415 (CONDITIONAL_JUMP)  ; LAB_004bc415
    MOV EAX,dword ptr [ESP + 0x544]     ; 004bc7b2
    MOV dword ptr [ESP + 0x574],EAX     ; 004bc7b9
    MOV EAX,dword ptr [ESP + 0x570]     ; 004bc7c0
    MOV dword ptr [EAX + 0x9e8],0x0     ; 004bc7c7
    JMP 0x004bc093                      ; 004bc7d1
        ;   XREF to: 004bc093 (UNCONDITIONAL_JUMP)  ; LAB_004bc093
    PUSH EBX                            ; 004bc7d6
        ;   Label: LAB_004bc7d6
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bc7d7
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bc7dc
    MOV EAX,ESP                         ; 004bc7df
    PUSH EAX                            ; 004bc7e1
    PUSH 0x5d8615                       ; 004bc7e2 | = "Can't load old save game file %s.  So..."
    MOV EDI,dword ptr [0x006138e0]      ; 004bc7e7 | g_CEditorToolsPtr
    PUSH EDI                            ; 004bc7ed
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 004bc7ee
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004bc7f3
    JMP 0x004bc093                      ; 004bc7f6
        ;   XREF to: 004bc093 (UNCONDITIONAL_JUMP)  ; LAB_004bc093
    MOV ECX,dword ptr [0x006167e0]      ; 004bc7fb | g_CGorePtr
        ;   Label: LAB_004bc7fb
    PUSH ECX                            ; 004bc801
    CALL core_gore.cpp_CGore_reset_FUN_004c93f0 ; 004bc802
        ;   XREF to: 004c93f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004c93f0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004bc807
    JMP 0x004bc665                      ; 004bc80a
        ;   XREF to: 004bc665 (UNCONDITIONAL_JUMP)  ; LAB_004bc665
    PUSH EBX                            ; 004bc80f
        ;   Label: LAB_004bc80f
    MOV EDI,dword ptr [0x00614d30]      ; 004bc810 | DAT_00614d30
    PUSH EDI                            ; 004bc816
    CALL core_fire.cpp_CFireEffect_load_FUN_0049ea80 ; 004bc817
        ;   XREF to: 0049ea80 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_load_FUN_0049ea80(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bc81c
    JMP 0x004bc682                      ; 004bc81f
        ;   XREF to: 004bc682 (UNCONDITIONAL_JUMP)  ; LAB_004bc682
    XOR EDX,EDX                         ; 004bc824
        ;   Label: LAB_004bc824
    MOV dword ptr [0x01cb7c50],EDX      ; 004bc826 | DAT_01cb7c50
    JMP 0x004bc6f7                      ; 004bc82c
        ;   XREF to: 004bc6f7 (UNCONDITIONAL_JUMP)  ; LAB_004bc6f7

