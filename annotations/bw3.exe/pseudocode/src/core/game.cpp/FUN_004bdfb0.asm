; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bdfb0(CGame *this_ptr,char *save_filename,int load_mode)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; int              Stack[0xc]:4   load_mode
; Local Variables:
; undefined1       Stack[-0x578]:1  local_578
; undefined1       Stack[-0x577]:1  local_577
; undefined        Stack[-0x474]:1  local_474
; undefined        Stack[-0x370]:1  local_370
; undefined        Stack[-0x270]:1  local_270
; undefined        Stack[-0x170]:1  local_170
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
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
; XREF[2]:
;   core_game.cpp_FUN_004be8d0 at 004beb17
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea980
;
; Referenced Globals:
;   undefined4 DAT_005c3662
;   undefined4 DAT_005c3666
;   TerminatedCString s_sav_005c366b
;   undefined4 DAT_005c3671
;   TerminatedCString s_Select_file_to_load_005c3676
;   undefined4 DAT_005c368a
;   undefined4 DAT_005c368d
;   undefined1 DAT_005c3692
;   undefined1 DAT_005c3693
;   undefined4 DAT_005c3696
;   TerminatedCString s_s_s_005c369b
;   TerminatedCString s_Can_t_open_saved_game_fi_005c36a1
;   undefined4 DAT_005c36bd
;   TerminatedCString s_Can_t_create_temp_file_t_005c36c0
;   undefined4 DAT_005c36f0
;   ... and 47 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_event.cpp_CEventList_loadState_FUN_00495490
;   core_event.cpp_FUN_00494880
;   core_fire.cpp_CFireEffect_load_FUN_004a4030
;   core_fire.cpp_FUN_004a1480
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900
;   core_gore.cpp_CGore_load_FUN_004cf010
;   core_gore.cpp_CGore_reset_FUN_004ce560
;   core_level.cpp_FUN_004dfc50
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdfb0
        ;   Label: core_game.cpp_FUN_004bdfb0
    PUSH ESI                            ; 004bdfb1
    PUSH EDI                            ; 004bdfb2
    PUSH EBP                            ; 004bdfb3
    SUB ESP,0x568                       ; 004bdfb4
    PUSH 0x5fe9f8                       ; 004bdfba | = "save\\$$SAVE$$.TMP"
    CALL crt_unknown.c_FUN_005a54b0     ; 004bdfbf
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    ADD ESP,0x4                         ; 004bdfc4
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004bdfc7
    MOV dword ptr [EAX + 0x258],0x1     ; 004bdfce
    LEA EAX,[ESP + 0x208]               ; 004bdfd8
    PUSH EAX                            ; 004bdfdf
    PUSH 0x0                            ; 004bdfe0
    PUSH 0x0                            ; 004bdfe2
    PUSH 0x0                            ; 004bdfe4
    PUSH 0x1d225c8                      ; 004bdfe6 | DAT_01d225c8
    CALL crt_string.c_splitpath_FUN_005a5128 ; 004bdfeb
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bdff0
    PUSH 0x5c3662                       ; 004bdff3 | DAT_005c3662
    LEA EAX,[ESP + 0x20c]               ; 004bdff8
    PUSH EAX                            ; 004bdfff
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004be000
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004be005
    TEST EAX,EAX                        ; 004be008
    JZ 0x004be029                       ; 004be00a
        ;   XREF to: 004be029 (CONDITIONAL_JUMP)  ; LAB_004be029
    PUSH 0x5c3666                       ; 004be00c | DAT_005c3666
    LEA EAX,[ESP + 0x20c]               ; 004be011
    PUSH EAX                            ; 004be018
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004be019
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004be01e
    TEST EAX,EAX                        ; 004be021
    JNZ 0x004be429                      ; 004be023
        ;   XREF to: 004be429 (CONDITIONAL_JUMP)  ; LAB_004be429
    MOV ESI,0x1d225c8                   ; 004be029
        ;   Label: LAB_004be029
    MOV EDI,ESP                         ; 004be02e
    PUSH EDI                            ; 004be030
    MOV AL,byte ptr [ESI]               ; 004be031 | DAT_01d225c8 | DAT_01d225ca
        ;   Label: LAB_004be031
    MOV byte ptr [EDI],AL               ; 004be033
    CMP AL,0x0                          ; 004be035
    JZ 0x004be049                       ; 004be037
        ;   XREF to: 004be049 (CONDITIONAL_JUMP)  ; LAB_004be049
    MOV AL,byte ptr [ESI + 0x1]         ; 004be039 | DAT_01d225c9 | DAT_01d225cb
    ADD ESI,0x2                         ; 004be03c
    MOV byte ptr [EDI + 0x1],AL         ; 004be03f
    ADD EDI,0x2                         ; 004be042
    CMP AL,0x0                          ; 004be045
    JNZ 0x004be031                      ; 004be047
        ;   XREF to: 004be031 (CONDITIONAL_JUMP)  ; LAB_004be031
    POP EDI                             ; 004be049
        ;   Label: LAB_004be049
    MOV EDX,dword ptr [0x005fe4b0]      ; 004be04a | g_CFieldNotesPtr
        ;   Label: LAB_004be04a
    PUSH EDX                            ; 004be050 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 ; 004be051
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004be056
    MOV EAX,[0x01c5b0e0]                ; 004be059 | DAT_01c5b0e0
    MOV ECX,dword ptr [ESP + 0x584]     ; 004be05e
    MOV dword ptr [ESP + 0x544],EAX     ; 004be065
    TEST ECX,ECX                        ; 004be06c
    JNZ 0x004be433                      ; 004be06e
        ;   XREF to: 004be433 (CONDITIONAL_JUMP)  ; LAB_004be433
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be074
        ;   Label: LAB_004be074
    ADD EAX,0xa7c                       ; 004be07b
    MOV dword ptr [ESP + 0x554],EAX     ; 004be080
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be087
    ADD EAX,0x298                       ; 004be08e
    MOV dword ptr [ESP + 0x558],EAX     ; 004be093
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be09a
    ADD EAX,0x27c                       ; 004be0a1
    MOV dword ptr [ESP + 0x548],EAX     ; 004be0a6
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be0ad
    ADD EAX,0x274                       ; 004be0b4
    MOV dword ptr [ESP + 0x538],EAX     ; 004be0b9
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be0c0
    ADD EAX,0x294                       ; 004be0c7
    MOV dword ptr [ESP + 0x54c],EAX     ; 004be0cc
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be0d3
    ADD EAX,0x270                       ; 004be0da
    MOV dword ptr [ESP + 0x550],EAX     ; 004be0df
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be0e6
    ADD EAX,0x278                       ; 004be0ed
    MOV dword ptr [ESP + 0x55c],EAX     ; 004be0f2
    MOV EBX,dword ptr [ESP + 0x580]     ; 004be0f9
        ;   Label: LAB_004be0f9
    TEST EBX,EBX                        ; 004be100
    JZ 0x004be442                       ; 004be102
        ;   XREF to: 004be442 (CONDITIONAL_JUMP)  ; LAB_004be442
    MOV EDI,ESP                         ; 004be108
    MOV ESI,EBX                         ; 004be10a
    PUSH EDI                            ; 004be10c
    MOV AL,byte ptr [ESI]               ; 004be10d
        ;   Label: LAB_004be10d
    MOV byte ptr [EDI],AL               ; 004be10f
    CMP AL,0x0                          ; 004be111
    JZ 0x004be125                       ; 004be113
        ;   XREF to: 004be125 (CONDITIONAL_JUMP)  ; LAB_004be125
    MOV AL,byte ptr [ESI + 0x1]         ; 004be115
    ADD ESI,0x2                         ; 004be118
    MOV byte ptr [EDI + 0x1],AL         ; 004be11b
    ADD EDI,0x2                         ; 004be11e
    CMP AL,0x0                          ; 004be121
    JNZ 0x004be10d                      ; 004be123
        ;   XREF to: 004be10d (CONDITIONAL_JUMP)  ; LAB_004be10d
    POP EDI                             ; 004be125
        ;   Label: LAB_004be125
    MOV EDI,dword ptr [0x005fba60]      ; 004be126 | DAT_005fba60
        ;   Label: LAB_004be126
    PUSH EDI                            ; 004be12c
    CALL core_event.cpp_FUN_00494880    ; 004be12d
        ;   XREF to: 00494880 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00494880()
    ADD ESP,0x4                         ; 004be132
    PUSH -0x1                           ; 004be135
    PUSH 0x0                            ; 004be137
    PUSH 0x9                            ; 004be139
    MOV EBP,dword ptr [0x006002ac]      ; 004be13b | DAT_006002ac
    PUSH EBP                            ; 004be141
    CALL core_level.cpp_FUN_004dfc50    ; 004be142
        ;   XREF to: 004dfc50 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004dfc50()
    ADD ESP,0x10                        ; 004be147
    PUSH 0x5c368a                       ; 004be14a | DAT_005c368a
    LEA EAX,[ESP + 0x4]                 ; 004be14f
    PUSH EAX                            ; 004be153
    PUSH 0x5c368d                       ; 004be154 | DAT_005c368d
    CALL engine_dosio.cpp_FUN_004659c0  ; 004be159
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004be15e
    PUSH EAX                            ; 004be161
    MOV EBX,EAX                         ; 004be162
    CALL crt_stdio.c_ftell_FUN_005a5d00 ; 004be164
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_ftell_FUN_005a5d00()
    ADD ESP,0x4                         ; 004be169
    MOV dword ptr [ESP + 0x560],EAX     ; 004be16c
    MOV EAX,ESP                         ; 004be173
    PUSH EAX                            ; 004be175
    PUSH 0x1d225c8                      ; 004be176 | DAT_01d225c8
    MOV EBP,0x1                         ; 004be17b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004be180
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004be185
    TEST EAX,EAX                        ; 004be188
    JZ 0x004be1af                       ; 004be18a
        ;   XREF to: 004be1af (CONDITIONAL_JUMP)  ; LAB_004be1af
    MOV ESI,ESP                         ; 004be18c
    MOV EDI,0x1d225c8                   ; 004be18e
    PUSH EDI                            ; 004be193 | DAT_01d225c8
    MOV AL,byte ptr [ESI]               ; 004be194
        ;   Label: LAB_004be194
    MOV byte ptr [EDI],AL               ; 004be196 | DAT_01d225c8 | DAT_01d225ca
    CMP AL,0x0                          ; 004be198
    JZ 0x004be1ac                       ; 004be19a
        ;   XREF to: 004be1ac (CONDITIONAL_JUMP)  ; LAB_004be1ac
    MOV AL,byte ptr [ESI + 0x1]         ; 004be19c
    ADD ESI,0x2                         ; 004be19f
    MOV byte ptr [EDI + 0x1],AL         ; 004be1a2 | DAT_01d225c9 | DAT_01d225cb
    ADD EDI,0x2                         ; 004be1a5
    CMP AL,0x0                          ; 004be1a8
    JNZ 0x004be194                      ; 004be1aa
        ;   XREF to: 004be194 (CONDITIONAL_JUMP)  ; LAB_004be194
    POP EDI                             ; 004be1ac
        ;   Label: LAB_004be1ac
    XOR EBP,EBP                         ; 004be1ad
    CMP dword ptr [ESP + 0x584],0x0     ; 004be1af
        ;   Label: LAB_004be1af
    JNZ 0x004be1be                      ; 004be1b7
        ;   XREF to: 004be1be (CONDITIONAL_JUMP)  ; LAB_004be1be
    MOV EBP,0x1                         ; 004be1b9
    PUSH EBX                            ; 004be1be
        ;   Label: LAB_004be1be
    PUSH 0x1                            ; 004be1bf
    PUSH 0x4                            ; 004be1c1
    LEA EAX,[ESP + 0x548]               ; 004be1c3
    PUSH EAX                            ; 004be1ca
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004be1cb
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004be1d0
    PUSH 0x0                            ; 004be1d3
    MOV EDX,dword ptr [ESP + 0x564]     ; 004be1d5
    PUSH EDX                            ; 004be1dc
    PUSH EBX                            ; 004be1dd
    MOV EDI,0x5fea0c                    ; 004be1de | DAT_005fea0c
    CALL crt_stdio.c_fseek_FUN_005a457c ; 004be1e3
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 004be1e8
    LEA ESI,[ESP + 0x53c]               ; 004be1eb
    MOV ECX,0x4                         ; 004be1f2
    XOR EAX,EAX                         ; 004be1f7
    CMPSB.REPE ES:EDI,ESI               ; 004be1f9 | DAT_005fea0c | DAT_005fea0d
    JZ 0x004be202                       ; 004be1fb
        ;   XREF to: 004be202 (CONDITIONAL_JUMP)  ; LAB_004be202
    SBB EAX,EAX                         ; 004be1fd
    SBB EAX,-0x1                        ; 004be1ff
    TEST EAX,EAX                        ; 004be202
        ;   Label: LAB_004be202
    JZ 0x004be22a                       ; 004be204
        ;   XREF to: 004be22a (CONDITIONAL_JUMP)  ; LAB_004be22a
    MOV ECX,0x3                         ; 004be206
    MOV EDI,0x5c3692                    ; 004be20b | DAT_005c3692
    LEA ESI,[ESP + 0x53c]               ; 004be210
    XOR EAX,EAX                         ; 004be217
    CMPSB.REPE ES:EDI,ESI               ; 004be219 | DAT_005c3692 | DAT_005c3693
    JZ 0x004be222                       ; 004be21b
        ;   XREF to: 004be222 (CONDITIONAL_JUMP)  ; LAB_004be222
    SBB EAX,EAX                         ; 004be21d
    SBB EAX,-0x1                        ; 004be21f
    TEST EAX,EAX                        ; 004be222
        ;   Label: LAB_004be222
    JNZ 0x004be3cf                      ; 004be224
        ;   XREF to: 004be3cf (CONDITIONAL_JUMP)  ; LAB_004be3cf
    PUSH EBX                            ; 004be22a
        ;   Label: LAB_004be22a
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be22b
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be230
    LEA EAX,[ESP + 0x504]               ; 004be233
    PUSH EAX                            ; 004be23a
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004be23b
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004be240
    LEA EAX,[ESP + 0x530]               ; 004be243
    PUSH EAX                            ; 004be24a
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0 ; 004be24b
        ;   XREF to: 005747c0 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004be250
    MOV EAX,ESP                         ; 004be253
    PUSH EAX                            ; 004be255
    PUSH 0x5c3696                       ; 004be256 | DAT_005c3696
    PUSH 0x5c369b                       ; 004be25b | = "%s\\%s"
    LEA EAX,[ESP + 0x110]               ; 004be260
    PUSH EAX                            ; 004be267
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004be268
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004be26d
    PUSH 0x1                            ; 004be270
    LEA EAX,[ESP + 0x108]               ; 004be272
    PUSH EAX                            ; 004be279
    LEA EAX,[ESP + 0x50c]               ; 004be27a
    PUSH EAX                            ; 004be281
    CALL support_trstream.cpp_CInStreamFile_open_FUN_00573f50 ; 004be282
        ;   XREF to: 00573f50 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile * this_ptr, LPCSTR param_2, int param_3)
    ADD ESP,0xc                         ; 004be287
    TEST EAX,EAX                        ; 004be28a
    JZ 0x004be4bc                       ; 004be28c
        ;   XREF to: 004be4bc (CONDITIONAL_JUMP)  ; LAB_004be4bc
    PUSH 0x0                            ; 004be292
    PUSH 0x4                            ; 004be294
    LEA EAX,[ESP + 0x50c]               ; 004be296
    PUSH EAX                            ; 004be29d
    CALL unkafter_turret.cpp_CInStreamFile_seek_FUN_00573cf0 ; 004be29e
        ;   XREF to: 00573cf0 (UNCONDITIONAL_CALL)  ; undefined4 unkafter_turret.cpp_CInStreamFile_seek_FUN_00573cf0(CInStreamFile * this_ptr, int param_2, uint param_3)
    ADD ESP,0xc                         ; 004be2a3
    PUSH 0x5c36bd                       ; 004be2a6 | DAT_005c36bd
    PUSH 0x5fe9f8                       ; 004be2ab | = "save\\$$SAVE$$.TMP"
    LEA EAX,[ESP + 0x538]               ; 004be2b0
    PUSH EAX                            ; 004be2b7
    CALL support_trstream.cpp_COutStreamFile_open_FUN_005749d0 ; 004be2b8
        ;   XREF to: 005749d0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004be2bd
    TEST EAX,EAX                        ; 004be2c0
    JZ 0x004be508                       ; 004be2c2
        ;   XREF to: 004be508 (CONDITIONAL_JUMP)  ; LAB_004be508
    PUSH 0x8                            ; 004be2c8
    PUSH 0x8000                         ; 004be2ca
    LEA EAX,[ESP + 0x4d8]               ; 004be2cf
    PUSH EAX                            ; 004be2d6
    CALL support_codec.cpp_CLZWDecompress_ctor_FUN_00441310 ; 004be2d7
        ;   XREF to: 00441310 (UNCONDITIONAL_CALL)  ; CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_00441310(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
    ADD ESP,0xc                         ; 004be2dc
    LEA EAX,[ESP + 0x4d0]               ; 004be2df
    PUSH EAX                            ; 004be2e6
    CALL support_codec.cpp_CLZWDecompress_init_FUN_00441350 ; 004be2e7
        ;   XREF to: 00441350 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDecompress_init_FUN_00441350(CLZWDecompress * this_ptr)
    ADD ESP,0x4                         ; 004be2ec
    LEA EAX,[ESP + 0x530]               ; 004be2ef
    PUSH EAX                            ; 004be2f6
    LEA EAX,[ESP + 0x508]               ; 004be2f7
    PUSH EAX                            ; 004be2fe
    LEA EAX,[ESP + 0x4d8]               ; 004be2ff
    PUSH EAX                            ; 004be306
    CALL support_codec.cpp_FUN_00441390 ; 004be307
        ;   XREF to: 00441390 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441390()
    ADD ESP,0xc                         ; 004be30c
    LEA EAX,[ESP + 0x530]               ; 004be30f
    PUSH EAX                            ; 004be316
    LEA EAX,[ESP + 0x4d4]               ; 004be317
    PUSH EAX                            ; 004be31e
    CALL support_codec.cpp_FUN_004413f0 ; 004be31f
        ;   XREF to: 004413f0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004413f0()
    ADD ESP,0x8                         ; 004be324
    LEA EAX,[ESP + 0x504]               ; 004be327
    PUSH EAX                            ; 004be32e
    CALL unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0 ; 004be32f
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004be334
    LEA EAX,[ESP + 0x530]               ; 004be337
    PUSH EAX                            ; 004be33e
    CALL support_trstream.cpp_COutStreamFile_close_FUN_005749a0 ; 004be33f
        ;   XREF to: 005749a0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004be344
    PUSH 0x5c36f0                       ; 004be347 | DAT_005c36f0
    PUSH 0x5fe9f8                       ; 004be34c | = "save\\$$SAVE$$.TMP"
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004be351
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 004be356
    MOV EBX,EAX                         ; 004be359
    TEST EAX,EAX                        ; 004be35b
    JNZ 0x004be387                      ; 004be35d
        ;   XREF to: 004be387 (CONDITIONAL_JUMP)  ; LAB_004be387
    PUSH 0x5fe9f8                       ; 004be35f | = "save\\$$SAVE$$.TMP"
    MOV ESI,0x5c36f3                    ; 004be364 | = "..\\core\\game.cpp"
    MOV EDI,0x1079                      ; 004be369
    PUSH 0x5c3704                       ; 004be36e | = "Can't reopen %s"
    MOV dword ptr [0x01d71de0],ESI      ; 004be373 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004be379 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004be37f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004be384
    PUSH 0x0                            ; 004be387
        ;   Label: LAB_004be387
    LEA EAX,[ESP + 0x4d8]               ; 004be389
    PUSH EAX                            ; 004be390
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 ; 004be391
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be396
    PUSH 0x1                            ; 004be399
    LEA EAX,[ESP + 0x4d4]               ; 004be39b
    PUSH EAX                            ; 004be3a2
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 004be3a3
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be3a8
    PUSH 0x0                            ; 004be3ab
    LEA EAX,[ESP + 0x534]               ; 004be3ad
    PUSH EAX                            ; 004be3b4
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004be3b5
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be3ba
    PUSH 0x0                            ; 004be3bd
    LEA EAX,[ESP + 0x508]               ; 004be3bf
    PUSH EAX                            ; 004be3c6
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004be3c7
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be3cc
    PUSH EBX                            ; 004be3cf
        ;   Label: LAB_004be3cf
    PUSH 0xff                           ; 004be3d0
    LEA EAX,[ESP + 0x310]               ; 004be3d5
    PUSH EAX                            ; 004be3dc
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004be3dd
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004be3e2
    PUSH 0xa                            ; 004be3e5
    PUSH 0x5c3714                       ; 004be3e7 | = "CInventory"
    LEA EAX,[ESP + 0x310]               ; 004be3ec
    PUSH EAX                            ; 004be3f3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 004be3f4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 004be3f9
    TEST EAX,EAX                        ; 004be3fc
    JNZ 0x004be554                      ; 004be3fe
        ;   XREF to: 004be554 (CONDITIONAL_JUMP)  ; LAB_004be554
    PUSH EBX                            ; 004be404
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be405
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be40a
    MOV EAX,ESP                         ; 004be40d
    PUSH EAX                            ; 004be40f
    PUSH 0x5c371f                       ; 004be410 | = "Can't load old save game file %s.  So..."
    MOV EBP,dword ptr [0x005fb140]      ; 004be415 | g_CEditorToolsPtr
    PUSH EBP                            ; 004be41b
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004be41c
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004be421
    JMP 0x004be0f9                      ; 004be424
        ;   XREF to: 004be0f9 (UNCONDITIONAL_JUMP)  ; LAB_004be0f9
    XOR AH,AH                           ; 004be429
        ;   Label: LAB_004be429
    MOV byte ptr [ESP],AH               ; 004be42b
    JMP 0x004be04a                      ; 004be42e
        ;   XREF to: 004be04a (UNCONDITIONAL_JUMP)  ; LAB_004be04a
    MOV EAX,[0x01549aa8]                ; 004be433 | DAT_01549aa8
        ;   Label: LAB_004be433
    MOV [0x01c5b0e0],EAX                ; 004be438 | DAT_01c5b0e0
    JMP 0x004be074                      ; 004be43d
        ;   XREF to: 004be074 (UNCONDITIONAL_JUMP)  ; LAB_004be074
    PUSH 0x1                            ; 004be442
        ;   Label: LAB_004be442
    LEA EAX,[ESP + 0x4]                 ; 004be444
    PUSH EAX                            ; 004be448
    PUSH 0x5c366b                       ; 004be449 | = "*.sav"
    PUSH 0x5c3671                       ; 004be44e | DAT_005c3671
    PUSH 0x5c3676                       ; 004be453 | = "Select file to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004be458
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004be45d
    PUSH EAX                            ; 004be460
    MOV ESI,dword ptr [0x005fb140]      ; 004be461 | g_CEditorToolsPtr
    PUSH ESI                            ; 004be467
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70 ; 004be468
        ;   XREF to: 0047db70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0047db70(CEditorTools * this_ptr, char * dialog_title, char * search_directory, char * file_pattern, ...)
    ADD ESP,0x18                        ; 004be46d
    TEST EAX,EAX                        ; 004be470
    JNZ 0x004be126                      ; 004be472
        ;   XREF to: 004be126 (CONDITIONAL_JUMP)  ; LAB_004be126
    MOV ECX,dword ptr [0x005fe4b0]      ; 004be478 | g_CFieldNotesPtr
        ;   Label: LAB_004be478
    MOV EAX,dword ptr [ESP + 0x544]     ; 004be47e
    PUSH ECX                            ; 004be485 | g_CFieldNotesInstance
    MOV [0x01c5b0e0],EAX                ; 004be486 | DAT_01c5b0e0
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0 ; 004be48b
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 004be490
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be493
    PUSH 0x5fe9f8                       ; 004be49a | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [EAX + 0x258],0x0     ; 004be49f
    CALL crt_unknown.c_FUN_005a54b0     ; 004be4a9
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    ADD ESP,0x4                         ; 004be4ae
    ADD ESP,0x568                       ; 004be4b1
        ;   Label: LAB_004be4b1
    POP EBP                             ; 004be4b7
    POP EDI                             ; 004be4b8
    POP ESI                             ; 004be4b9
    POP EBX                             ; 004be4ba
    RET                                 ; 004be4bb
    PUSH 0x5c36a1                       ; 004be4bc | = "Can't open saved game file."
        ;   Label: LAB_004be4bc
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004be4c1
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004be4c6
    PUSH EAX                            ; 004be4c9
    MOV ECX,dword ptr [0x005fb140]      ; 004be4ca | g_CEditorToolsPtr
    PUSH ECX                            ; 004be4d0
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004be4d1
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004be4d6
    PUSH 0x0                            ; 004be4d9
    LEA EAX,[ESP + 0x534]               ; 004be4db
    PUSH EAX                            ; 004be4e2
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004be4e3
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be4e8
    PUSH 0x0                            ; 004be4eb
    LEA EAX,[ESP + 0x508]               ; 004be4ed
    PUSH EAX                            ; 004be4f4
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004be4f5
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be4fa
    ADD ESP,0x568                       ; 004be4fd
    POP EBP                             ; 004be503
    POP EDI                             ; 004be504
    POP ESI                             ; 004be505
    POP EBX                             ; 004be506
    RET                                 ; 004be507
    PUSH 0x5c36c0                       ; 004be508 | = "Can't create temp file to load saved ..."
        ;   Label: LAB_004be508
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004be50d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004be512
    PUSH EAX                            ; 004be515
    MOV EBX,dword ptr [0x005fb140]      ; 004be516 | g_CEditorToolsPtr
    PUSH EBX                            ; 004be51c
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004be51d
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004be522
    PUSH 0x0                            ; 004be525
    LEA EAX,[ESP + 0x534]               ; 004be527
    PUSH EAX                            ; 004be52e
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004be52f
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be534
    PUSH 0x0                            ; 004be537
    LEA EAX,[ESP + 0x508]               ; 004be539
    PUSH EAX                            ; 004be540
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004be541
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004be546
    ADD ESP,0x568                       ; 004be549
    POP EBP                             ; 004be54f
    POP EDI                             ; 004be550
    POP ESI                             ; 004be551
    POP EBX                             ; 004be552
    RET                                 ; 004be553
    LEA EAX,[ESP + 0x540]               ; 004be554
        ;   Label: LAB_004be554
    PUSH EAX                            ; 004be55b
    PUSH 0x5c3749                       ; 004be55c | DAT_005c3749
    PUSH EBX                            ; 004be561
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be562
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004be567
    CMP dword ptr [ESP + 0x540],0x3     ; 004be56a
    JL 0x004be86b                       ; 004be572
        ;   XREF to: 004be86b (CONDITIONAL_JUMP)  ; LAB_004be86b
    PUSH EBP                            ; 004be578
    PUSH EBX                            ; 004be579
    MOV EDX,dword ptr [0x00600530]      ; 004be57a | DAT_00600530
    PUSH EDX                            ; 004be580 | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 ; 004be581
        ;   XREF to: 004f5cc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0(CDemonMission * this_ptr, _FILE * file_handle, int load_flags)
    ADD ESP,0xc                         ; 004be586
    PUSH EBX                            ; 004be589
    PUSH 0xff                           ; 004be58a
    LEA EAX,[ESP + 0x310]               ; 004be58f
    PUSH EAX                            ; 004be596
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004be597
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004be59c
    PUSH 0x1d5ba14                      ; 004be59f | DAT_01d5ba14
    PUSH 0x1d5ba00                      ; 004be5a4 | DAT_01d5ba00
    PUSH 0x5c3777                       ; 004be5a9 | = "%d, %d\n"
    PUSH EBX                            ; 004be5ae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be5af
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 004be5b4
    XOR ECX,ECX                         ; 004be5b7
    MOV ESI,dword ptr [0x01d5ba00]      ; 004be5b9 | DAT_01d5ba00
    MOV dword ptr [ESP + 0x564],ECX     ; 004be5bf
    TEST ESI,ESI                        ; 004be5c6
    JLE 0x004be66f                      ; 004be5c8
        ;   XREF to: 004be66f (CONDITIONAL_JUMP)  ; LAB_004be66f
    XOR EBP,EBP                         ; 004be5ce
    LEA EAX,[ESP + 0x408]               ; 004be5d0
        ;   Label: LAB_004be5d0
    PUSH EAX                            ; 004be5d7
    MOV ECX,0x32                        ; 004be5d8
    PUSH 0x5c377f                       ; 004be5dd | = "%[^\n]\n"
    LEA EDI,[ESP + 0x410]               ; 004be5e2
    MOV ESI,0x5fea10                    ; 004be5e9 | = "(file corrupt)"
    PUSH EBX                            ; 004be5ee
    MOVSD.REP ES:EDI,ESI                ; 004be5ef | = "(file corrupt)" | s_file_corrupt_005fea10+4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be5f1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004be5f6
    MOV ESI,dword ptr [0x01d5ba70]      ; 004be5f9 | g_CHeroClassInfo.name_hash
    PUSH ESI                            ; 004be5ff
    LEA EAX,[ESP + 0x40c]               ; 004be600
    PUSH EAX                            ; 004be607
    MOV EDI,dword ptr [0x00600530]      ; 004be608 | DAT_00600530
    PUSH EDI                            ; 004be60e | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90 ; 004be60f
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; CDemonActor * core_mission.cpp_CDemonMission_findActorByName_FUN_004f6e90(CDemonMission * this_ptr, char * name)
    ADD ESP,0x8                         ; 004be614
    PUSH EAX                            ; 004be617
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004be618
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004be61d
    MOV dword ptr [EBP + 0x1d5ba04],EAX ; 004be620
    TEST EAX,EAX                        ; 004be626
    JNZ 0x004be64f                      ; 004be628
        ;   XREF to: 004be64f (CONDITIONAL_JUMP)  ; LAB_004be64f
    PUSH EBX                            ; 004be62a
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be62b
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be630
    LEA EAX,[ESP + 0x408]               ; 004be633
    PUSH EAX                            ; 004be63a
    PUSH 0x5c3786                       ; 004be63b | = "Can't find hero %s.  Sorry."
    MOV EDX,dword ptr [0x005fb140]      ; 004be640 | g_CEditorToolsPtr
    PUSH EDX                            ; 004be646
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004be647
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004be64c
    MOV EAX,dword ptr [ESP + 0x564]     ; 004be64f
        ;   Label: LAB_004be64f
    MOV EDX,dword ptr [0x01d5ba00]      ; 004be656 | DAT_01d5ba00
    INC EAX                             ; 004be65c
    ADD EBP,0x4                         ; 004be65d
    MOV dword ptr [ESP + 0x564],EAX     ; 004be660
    CMP EAX,EDX                         ; 004be667
    JL 0x004be5d0                       ; 004be669
        ;   XREF to: 004be5d0 (CONDITIONAL_JUMP)  ; LAB_004be5d0
    MOV ECX,dword ptr [0x00600530]      ; 004be66f | DAT_00600530
        ;   Label: LAB_004be66f
    PUSH ECX                            ; 004be675 | DAT_01d81080
    CALL core_mission.cpp_FUN_004f7590  ; 004be676
        ;   XREF to: 004f7590 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004f7590(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004be67b
    TEST EAX,EAX                        ; 004be67e
    JZ 0x004be478                       ; 004be680
        ;   XREF to: 004be478 (CONDITIONAL_JUMP)  ; LAB_004be478
    PUSH EBX                            ; 004be686
    MOV ESI,dword ptr [0x005fba60]      ; 004be687 | DAT_005fba60
    PUSH ESI                            ; 004be68d
    CALL core_event.cpp_CEventList_loadState_FUN_00495490 ; 004be68e
        ;   XREF to: 00495490 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_loadState_FUN_00495490(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004be693
    PUSH EBX                            ; 004be696
    MOV EDI,dword ptr [0x006039e0]      ; 004be697 | g_CScriptPtr
    PUSH EDI                            ; 004be69d | g_CScriptInstance
    CALL core_script.cpp_CScript_loadState_FUN_00530ad0 ; 004be69e
        ;   XREF to: 00530ad0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_loadState_FUN_00530ad0(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004be6a3
    MOV EBP,dword ptr [ESP + 0x540]     ; 004be6a6
    CMP EBP,0x4                         ; 004be6ad
    JL 0x004be890                       ; 004be6b0
        ;   XREF to: 004be890 (CONDITIONAL_JUMP)  ; LAB_004be890
    JNZ 0x004be6c8                      ; 004be6b6
        ;   XREF to: 004be6c8 (CONDITIONAL_JUMP)  ; LAB_004be6c8
    PUSH EBX                            ; 004be6b8
    MOV EDX,dword ptr [0x005fed24]      ; 004be6b9 | g_CGorePtr
    PUSH EDX                            ; 004be6bf
    CALL core_gore.cpp_CGore_load_FUN_004cf010 ; 004be6c0
        ;   XREF to: 004cf010 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CGore_load_FUN_004cf010(CGore * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004be6c5
    CMP dword ptr [ESP + 0x540],0x7     ; 004be6c8
        ;   Label: LAB_004be6c8
    JGE 0x004be8a4                      ; 004be6d0
        ;   XREF to: 004be8a4 (CONDITIONAL_JUMP)  ; LAB_004be8a4
    MOV EBP,dword ptr [0x005fc5a0]      ; 004be6d6 | DAT_005fc5a0
    PUSH EBP                            ; 004be6dc
    CALL core_fire.cpp_FUN_004a1480     ; 004be6dd
        ;   XREF to: 004a1480 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a1480()
    ADD ESP,0x4                         ; 004be6e2
    CMP dword ptr [ESP + 0x540],0x6     ; 004be6e5
        ;   Label: LAB_004be6e5
    JL 0x004be8b9                       ; 004be6ed
        ;   XREF to: 004be8b9 (CONDITIONAL_JUMP)  ; LAB_004be8b9
    PUSH EBX                            ; 004be6f3
    PUSH 0xff                           ; 004be6f4
    LEA EAX,[ESP + 0x310]               ; 004be6f9
    PUSH EAX                            ; 004be700
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004be701
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004be706
    PUSH 0x1d226cc                      ; 004be709 | DAT_01d226cc
    PUSH 0x5c37a2                       ; 004be70e | DAT_005c37a2
    PUSH EBX                            ; 004be713
    MOV EBP,0x1                         ; 004be714
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be719
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [0x01d226cc]      ; 004be71e | DAT_01d226cc
    ADD ESP,0xc                         ; 004be724
    CMP ECX,EBP                         ; 004be727
    JL 0x004be750                       ; 004be729
        ;   XREF to: 004be750 (CONDITIONAL_JUMP)  ; LAB_004be750
    MOV ESI,0x1d226cc                   ; 004be72b
    ADD ESI,0x4                         ; 004be730
    PUSH ESI                            ; 004be733 | DAT_01d226d0 | DAT_01d226d4
        ;   Label: LAB_004be733
    PUSH 0x5c37a6                       ; 004be734 | DAT_005c37a6
    PUSH EBX                            ; 004be739
    INC EBP                             ; 004be73a
    ADD ESI,0x4                         ; 004be73b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be73e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV ECX,dword ptr [0x01d226cc]      ; 004be743 | DAT_01d226cc
    ADD ESP,0xc                         ; 004be749
    CMP EBP,ECX                         ; 004be74c
    JLE 0x004be733                      ; 004be74e
        ;   XREF to: 004be733 (CONDITIONAL_JUMP)  ; LAB_004be733
    MOV dword ptr [0x01d226c8],0x1      ; 004be750 | DAT_01d226c8
        ;   Label: LAB_004be750
    CMP dword ptr [ESP + 0x540],0x8     ; 004be75a
        ;   Label: LAB_004be75a
    JL 0x004be7b0                       ; 004be762
        ;   XREF to: 004be7b0 (CONDITIONAL_JUMP)  ; LAB_004be7b0
    PUSH EBX                            ; 004be764
    PUSH 0xff                           ; 004be765
    LEA EAX,[ESP + 0x310]               ; 004be76a
    PUSH EAX                            ; 004be771
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004be772
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004be777
    MOV EBP,dword ptr [ESP + 0x548]     ; 004be77a
    PUSH EBP                            ; 004be781
    MOV EAX,dword ptr [ESP + 0x53c]     ; 004be782
    PUSH EAX                            ; 004be789
    MOV EDX,dword ptr [ESP + 0x554]     ; 004be78a
    PUSH EDX                            ; 004be791
    MOV ECX,dword ptr [ESP + 0x55c]     ; 004be792
    PUSH ECX                            ; 004be799
    MOV ESI,dword ptr [ESP + 0x56c]     ; 004be79a
    PUSH ESI                            ; 004be7a1
    PUSH 0x5c37aa                       ; 004be7a2 | = "%f,%f,%f,%d,%d\n"
    PUSH EBX                            ; 004be7a7
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be7a8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x1c                        ; 004be7ad
    MOV EDI,dword ptr [ESP + 0x558]     ; 004be7b0
        ;   Label: LAB_004be7b0
    PUSH EDI                            ; 004be7b7
    PUSH 0x5c37ba                       ; 004be7b8 | DAT_005c37ba
    PUSH EBX                            ; 004be7bd
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 004be7be
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 004be7c3
    CMP dword ptr [ESP + 0x540],0x9     ; 004be7c6
    JL 0x004be7df                       ; 004be7ce
        ;   XREF to: 004be7df (CONDITIONAL_JUMP)  ; LAB_004be7df
    PUSH EBX                            ; 004be7d0
    MOV EAX,[0x00603b28]                ; 004be7d1 | g_CDemonSetPtr
    PUSH EAX                            ; 004be7d6 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_0053b7f0      ; 004be7d7
        ;   XREF to: 0053b7f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0053b7f0()
    ADD ESP,0x8                         ; 004be7dc
    CMP dword ptr [ESP + 0x540],0xa     ; 004be7df
        ;   Label: LAB_004be7df
    JL 0x004be7f9                       ; 004be7e7
        ;   XREF to: 004be7f9 (CONDITIONAL_JUMP)  ; LAB_004be7f9
    PUSH EBX                            ; 004be7e9
    MOV ECX,dword ptr [0x005fe4b0]      ; 004be7ea | g_CFieldNotesPtr
    PUSH ECX                            ; 004be7f0 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900 ; 004be7f1
        ;   XREF to: 004ac900 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900(CFieldNotes * this_ptr, undefined4 param_2)
    ADD ESP,0x8                         ; 004be7f6
    PUSH 0x5c37be                       ; 004be7f9 | = "JustLoadedGame"
        ;   Label: LAB_004be7f9
    MOV ESI,dword ptr [0x005fba60]      ; 004be7fe | DAT_005fba60
    PUSH ESI                            ; 004be804
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004be805
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004be80a
    PUSH EBX                            ; 004be80d
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be80e
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be813
    CMP dword ptr [ESP + 0x584],0x0     ; 004be816
    JZ 0x004be4b1                       ; 004be81e
        ;   XREF to: 004be4b1 (CONDITIONAL_JUMP)  ; LAB_004be4b1
    MOV EBP,dword ptr [0x00600530]      ; 004be824 | DAT_00600530
    PUSH EBP                            ; 004be82a | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_run_FUN_004f72a0 ; 004be82b
        ;   XREF to: 004f72a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_run_FUN_004f72a0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004be830
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be833
    CMP dword ptr [EAX + 0xa78],0x0     ; 004be83a
    JZ 0x004be478                       ; 004be841
        ;   XREF to: 004be478 (CONDITIONAL_JUMP)  ; LAB_004be478
    MOV EAX,dword ptr [ESP + 0x554]     ; 004be847
    MOV dword ptr [ESP + 0x580],EAX     ; 004be84e
    MOV EAX,dword ptr [ESP + 0x57c]     ; 004be855
    MOV dword ptr [EAX + 0xa78],0x0     ; 004be85c
    JMP 0x004be0f9                      ; 004be866
        ;   XREF to: 004be0f9 (UNCONDITIONAL_JUMP)  ; LAB_004be0f9
    PUSH EBX                            ; 004be86b
        ;   Label: LAB_004be86b
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004be86c
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004be871
    MOV EAX,ESP                         ; 004be874
    PUSH EAX                            ; 004be876
    PUSH 0x5c374d                       ; 004be877 | = "Can't load old save game file %s.  So..."
    MOV EDI,dword ptr [0x005fb140]      ; 004be87c | g_CEditorToolsPtr
    PUSH EDI                            ; 004be882
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004be883
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004be888
    JMP 0x004be0f9                      ; 004be88b
        ;   XREF to: 004be0f9 (UNCONDITIONAL_JUMP)  ; LAB_004be0f9
    MOV ECX,dword ptr [0x005fed24]      ; 004be890 | g_CGorePtr
        ;   Label: LAB_004be890
    PUSH ECX                            ; 004be896
    CALL core_gore.cpp_CGore_reset_FUN_004ce560 ; 004be897
        ;   XREF to: 004ce560 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004ce560(CGore * this_ptr)
    ADD ESP,0x4                         ; 004be89c
    JMP 0x004be6c8                      ; 004be89f
        ;   XREF to: 004be6c8 (UNCONDITIONAL_JUMP)  ; LAB_004be6c8
    PUSH EBX                            ; 004be8a4
        ;   Label: LAB_004be8a4
    MOV EDI,dword ptr [0x005fc5a0]      ; 004be8a5 | DAT_005fc5a0
    PUSH EDI                            ; 004be8ab
    CALL core_fire.cpp_CFireEffect_load_FUN_004a4030 ; 004be8ac
        ;   XREF to: 004a4030 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_load_FUN_004a4030(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004be8b1
    JMP 0x004be6e5                      ; 004be8b4
        ;   XREF to: 004be6e5 (UNCONDITIONAL_JUMP)  ; LAB_004be6e5
    XOR EDX,EDX                         ; 004be8b9
        ;   Label: LAB_004be8b9
    MOV dword ptr [0x01d226c8],EDX      ; 004be8bb | DAT_01d226c8
    JMP 0x004be75a                      ; 004be8c1
        ;   XREF to: 004be75a (UNCONDITIONAL_JUMP)  ; LAB_004be75a

