; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bda10(CGame *this_ptr,char *save_filename)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; Local Variables:
; undefined8       Stack[-0x4b4]:8  local_4b4
; undefined8       Stack[-0x4ac]:8  local_4ac
; undefined8       Stack[-0x4a4]:8  local_4a4
; undefined1       Stack[-0x494]:1  local_494
; undefined1       Stack[-0x493]:1  local_493
; undefined        Stack[-0x390]:1  local_390
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba784
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8a9a
;
; Referenced Globals:
;   undefined4 DAT_005c3558
;   undefined4 DAT_005c355c
;   undefined4 DAT_005c3561
;   undefined4 DAT_005c3565
;   TerminatedCString s_Save_game_005c356a
;   TerminatedCString s_s_sav_005c3574
;   undefined4 DAT_005c357b
;   undefined4 DAT_005c3580
;   TerminatedCString s_Warning_Your_game_didn_t_005c358b
;   TerminatedCString s_SAV_file_version_005c35ac
;   undefined4 DAT_005c35c2
;   TerminatedCString s_Hero_count_local_hero_in_005c35c6
;   TerminatedCString s_d_d_005c35f2
;   undefined4 DAT_005c35fa
;   TerminatedCString s_Light_state_005c35fe
;   ... and 28 more
;
; Called Functions:
;   core_event.cpp_CEventList_saveState_FUN_00495850
;   core_fire.cpp_CFireEffect_save_FUN_004a40b0
;   core_fldnotes.cpp_FUN_004acf00
;   core_mission.cpp_CDemonMission_writeFile_FUN_004f6410
;   core_script.cpp_CScript_saveState_FUN_00530e00
;   core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0
;   core_set.cpp_FUN_0053b6e0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_string.c__stricmp_FUN_005a3260
;   crt_string.c_splitpath_FUN_005a5128
;   crt_unknown.c_FUN_005a3140
;   crt_unknown.c_FUN_005a54b0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   crt_watcom.c__mkdir_FUN_005a4e10
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bda10
        ;   Label: core_game.cpp_FUN_004bda10
    PUSH ESI                            ; 004bda11
    PUSH EDI                            ; 004bda12
    PUSH EBP                            ; 004bda13
    SUB ESP,0x484                       ; 004bda14
    MOV EBX,dword ptr [ESP + 0x49c]     ; 004bda1a
    PUSH 0x5fe9f8                       ; 004bda21 | = "save\\$$SAVE$$.TMP"
    CALL crt_unknown.c_FUN_005a54b0     ; 004bda26
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    ADD ESP,0x4                         ; 004bda2b
    LEA EAX,[ESP + 0x30c]               ; 004bda2e
    PUSH EAX                            ; 004bda35
    PUSH 0x0                            ; 004bda36
    PUSH 0x0                            ; 004bda38
    PUSH 0x0                            ; 004bda3a
    PUSH 0x1d225c8                      ; 004bda3c | DAT_01d225c8
    CALL crt_string.c_splitpath_FUN_005a5128 ; 004bda41
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bda46
    PUSH 0x5c3558                       ; 004bda49 | DAT_005c3558
    LEA EAX,[ESP + 0x310]               ; 004bda4e
    PUSH EAX                            ; 004bda55
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004bda56
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bda5b
    TEST EAX,EAX                        ; 004bda5e
    JZ 0x004bda7f                       ; 004bda60
        ;   XREF to: 004bda7f (CONDITIONAL_JUMP)  ; LAB_004bda7f
    PUSH 0x5c355c                       ; 004bda62 | DAT_005c355c
    LEA EAX,[ESP + 0x310]               ; 004bda67
    PUSH EAX                            ; 004bda6e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004bda6f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bda74
    TEST EAX,EAX                        ; 004bda77
    JNZ 0x004bde86                      ; 004bda79
        ;   XREF to: 004bde86 (CONDITIONAL_JUMP)  ; LAB_004bde86
    MOV ESI,0x1d225c8                   ; 004bda7f
        ;   Label: LAB_004bda7f
    MOV EDI,ESP                         ; 004bda84
    PUSH EDI                            ; 004bda86
    MOV AL,byte ptr [ESI]               ; 004bda87 | DAT_01d225c8 | DAT_01d225ca
        ;   Label: LAB_004bda87
    MOV byte ptr [EDI],AL               ; 004bda89
    CMP AL,0x0                          ; 004bda8b
    JZ 0x004bda9f                       ; 004bda8d
        ;   XREF to: 004bda9f (CONDITIONAL_JUMP)  ; LAB_004bda9f
    MOV AL,byte ptr [ESI + 0x1]         ; 004bda8f | DAT_01d225c9 | DAT_01d225cb
    ADD ESI,0x2                         ; 004bda92
    MOV byte ptr [EDI + 0x1],AL         ; 004bda95
    ADD EDI,0x2                         ; 004bda98
    CMP AL,0x0                          ; 004bda9b
    JNZ 0x004bda87                      ; 004bda9d
        ;   XREF to: 004bda87 (CONDITIONAL_JUMP)  ; LAB_004bda87
    POP EDI                             ; 004bda9f
        ;   Label: LAB_004bda9f
    TEST EBX,EBX                        ; 004bdaa0
        ;   Label: LAB_004bdaa0
    JZ 0x004bde90                       ; 004bdaa2
        ;   XREF to: 004bde90 (CONDITIONAL_JUMP)  ; LAB_004bde90
    MOV EDI,ESP                         ; 004bdaa8
    MOV ESI,EBX                         ; 004bdaaa
    PUSH EDI                            ; 004bdaac
    MOV AL,byte ptr [ESI]               ; 004bdaad
        ;   Label: LAB_004bdaad
    MOV byte ptr [EDI],AL               ; 004bdaaf
    CMP AL,0x0                          ; 004bdab1
    JZ 0x004bdac5                       ; 004bdab3
        ;   XREF to: 004bdac5 (CONDITIONAL_JUMP)  ; LAB_004bdac5
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdab5
    ADD ESI,0x2                         ; 004bdab8
    MOV byte ptr [EDI + 0x1],AL         ; 004bdabb
    ADD EDI,0x2                         ; 004bdabe
    CMP AL,0x0                          ; 004bdac1
    JNZ 0x004bdaad                      ; 004bdac3
        ;   XREF to: 004bdaad (CONDITIONAL_JUMP)  ; LAB_004bdaad
    POP EDI                             ; 004bdac5
        ;   Label: LAB_004bdac5
    PUSH 0x5c357b                       ; 004bdac6 | DAT_005c357b
        ;   Label: LAB_004bdac6
    CALL crt_watcom.c__mkdir_FUN_005a4e10 ; 004bdacb
        ;   XREF to: 005a4e10 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005a4e10(char * path)
    ADD ESP,0x4                         ; 004bdad0
    PUSH 0x5c3580                       ; 004bdad3 | DAT_005c3580
    MOV ECX,0x1                         ; 004bdad8
    PUSH 0x5fe9f8                       ; 004bdadd | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [ESP + 0x488],ECX     ; 004bdae2
    MOV dword ptr [0x007df9c0],ECX      ; 004bdae9 | DAT_007df9c0
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004bdaef
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005a43ec(char * filename, char * mode)
    MOV EBX,EAX                         ; 004bdaf4
    ADD ESP,0x8                         ; 004bdaf6
    MOV EBP,EAX                         ; 004bdaf9
    TEST EAX,EAX                        ; 004bdafb
    JZ 0x004bdef9                       ; 004bdafd
        ;   XREF to: 004bdef9 (CONDITIONAL_JUMP)  ; LAB_004bdef9
    PUSH 0x5c35ac                       ; 004bdb03 | = "// .SAV file version\n"
    PUSH EAX                            ; 004bdb08
    CALL crt_unknown.c_FUN_005a3140     ; 004bdb09
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004bdb0e
    PUSH 0xc                            ; 004bdb11
    PUSH 0x5c35c2                       ; 004bdb13 | DAT_005c35c2
    PUSH EBX                            ; 004bdb18
    CALL crt_unknown.c_FUN_005a3140     ; 004bdb19
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004bdb1e
    PUSH EBX                            ; 004bdb21
    MOV ESI,dword ptr [0x00600530]      ; 004bdb22 | DAT_00600530
    PUSH ESI                            ; 004bdb28
    CALL core_mission.cpp_CDemonMission_writeFile_FUN_004f6410 ; 004bdb29
        ;   XREF to: 004f6410 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_writeFile_FUN_004f6410(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bdb2e
    PUSH 0x5c35c6                       ; 004bdb31 | = "// Hero count, local hero index, hero..."
    PUSH EBX                            ; 004bdb36
    CALL crt_unknown.c_FUN_005a3140     ; 004bdb37
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004bdb3c
    MOV EDI,dword ptr [0x01d5ba14]      ; 004bdb3f | DAT_01d5ba14
    PUSH EDI                            ; 004bdb45
    MOV EAX,[0x01d5ba00]                ; 004bdb46 | DAT_01d5ba00
    PUSH EAX                            ; 004bdb4b
    PUSH 0x5c35f2                       ; 004bdb4c | = "%d, %d\n"
    PUSH EBX                            ; 004bdb51
    CALL crt_unknown.c_FUN_005a3140     ; 004bdb52
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EDX,dword ptr [0x01d5ba00]      ; 004bdb57 | DAT_01d5ba00
    ADD ESP,0x10                        ; 004bdb5d
    XOR EBX,EBX                         ; 004bdb60
    TEST EDX,EDX                        ; 004bdb62
    JLE 0x004bdb90                      ; 004bdb64
        ;   XREF to: 004bdb90 (CONDITIONAL_JUMP)  ; LAB_004bdb90
    XOR ESI,ESI                         ; 004bdb66
    MOV EDI,dword ptr [ESI + 0x1d5ba04] ; 004bdb68
        ;   Label: LAB_004bdb68
    PUSH EDI                            ; 004bdb6e
    PUSH 0x5c35fa                       ; 004bdb6f | DAT_005c35fa
    PUSH EBP                            ; 004bdb74
    ADD ESI,0x4                         ; 004bdb75
    INC EBX                             ; 004bdb78
    CALL crt_unknown.c_FUN_005a3140     ; 004bdb79
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,[0x01d5ba00]                ; 004bdb7e | DAT_01d5ba00
    ADD ESP,0xc                         ; 004bdb83
    CMP EBX,EAX                         ; 004bdb86
    JL 0x004bdb68                       ; 004bdb88
        ;   XREF to: 004bdb68 (CONDITIONAL_JUMP)  ; LAB_004bdb68
    LEA EAX,[EAX]                       ; 004bdb8a
    PUSH EBP                            ; 004bdb90
        ;   Label: LAB_004bdb90
    MOV EDX,dword ptr [0x005fba60]      ; 004bdb91 | DAT_005fba60
    PUSH EDX                            ; 004bdb97
    CALL core_event.cpp_CEventList_saveState_FUN_00495850 ; 004bdb98
        ;   XREF to: 00495850 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_saveState_FUN_00495850(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bdb9d
    PUSH EBP                            ; 004bdba0
    MOV ECX,dword ptr [0x006039e0]      ; 004bdba1 | g_CScriptPtr
    PUSH ECX                            ; 004bdba7
    CALL core_script.cpp_CScript_saveState_FUN_00530e00 ; 004bdba8
        ;   XREF to: 00530e00 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_saveState_FUN_00530e00(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bdbad
    PUSH EBP                            ; 004bdbb0
    MOV EBX,dword ptr [0x005fc5a0]      ; 004bdbb1 | DAT_005fc5a0
    PUSH EBX                            ; 004bdbb7
    CALL core_fire.cpp_CFireEffect_save_FUN_004a40b0 ; 004bdbb8
        ;   XREF to: 004a40b0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_save_FUN_004a40b0(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bdbbd
    PUSH 0x5c35fe                       ; 004bdbc0 | = "Light state\n"
    PUSH EBP                            ; 004bdbc5
    CALL crt_unknown.c_FUN_005a3140     ; 004bdbc6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004bdbcb
    PUSH 0x1d226cc                      ; 004bdbce | DAT_01d226cc
    MOV ESI,dword ptr [0x00603b28]      ; 004bdbd3 | g_CDemonSetPtr
    PUSH ESI                            ; 004bdbd9
    CALL core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0 ; 004bdbda
        ;   XREF to: 0053b6a0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_saveMasterLightStates_FUN_0053b6a0(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004bdbdf
    MOV EDI,dword ptr [0x01d226cc]      ; 004bdbe2 | DAT_01d226cc
    PUSH EDI                            ; 004bdbe8
    PUSH 0x5c360b                       ; 004bdbe9 | DAT_005c360b
    PUSH EBP                            ; 004bdbee
    MOV ESI,0x1                         ; 004bdbef
    CALL crt_unknown.c_FUN_005a3140     ; 004bdbf4
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV EAX,[0x01d226cc]                ; 004bdbf9 | DAT_01d226cc
    ADD ESP,0xc                         ; 004bdbfe
    CMP EAX,ESI                         ; 004bdc01
    JL 0x004bdc30                       ; 004bdc03
        ;   XREF to: 004bdc30 (CONDITIONAL_JUMP)  ; LAB_004bdc30
    MOV EDI,0x4                         ; 004bdc05
    MOV EDX,dword ptr [EDI + 0x1d226cc] ; 004bdc0a | DAT_01d226d0 | DAT_01d226d4
        ;   Label: LAB_004bdc0a
    PUSH EDX                            ; 004bdc10
    PUSH 0x5c360f                       ; 004bdc11 | DAT_005c360f
    PUSH EBP                            ; 004bdc16
    ADD EDI,0x4                         ; 004bdc17
    INC ESI                             ; 004bdc1a
    CALL crt_unknown.c_FUN_005a3140     ; 004bdc1b
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    MOV ECX,dword ptr [0x01d226cc]      ; 004bdc20 | DAT_01d226cc
    ADD ESP,0xc                         ; 004bdc26
    CMP ESI,ECX                         ; 004bdc29
    JLE 0x004bdc0a                      ; 004bdc2b
        ;   XREF to: 004bdc0a (CONDITIONAL_JUMP)  ; LAB_004bdc0a
    LEA EAX,[EAX]                       ; 004bdc2d
    PUSH 0x5c3613                       ; 004bdc30 | = "Game stats\n"
        ;   Label: LAB_004bdc30
    PUSH EBP                            ; 004bdc35
    CALL crt_unknown.c_FUN_005a3140     ; 004bdc36
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x8                         ; 004bdc3b
    MOV EAX,dword ptr [ESP + 0x498]     ; 004bdc3e
    MOV EBX,dword ptr [EAX + 0x27c]     ; 004bdc45
    PUSH EBX                            ; 004bdc4b
    MOV ESI,dword ptr [EAX + 0x274]     ; 004bdc4c
    PUSH ESI                            ; 004bdc52
    SUB ESP,0x8                         ; 004bdc53
    FLD float ptr [EAX + 0x294]         ; 004bdc56
    FSTP double ptr [ESP]               ; 004bdc5c
    SUB ESP,0x8                         ; 004bdc5f
    FLD float ptr [EAX + 0x270]         ; 004bdc62
    FSTP double ptr [ESP]               ; 004bdc68
    SUB ESP,0x8                         ; 004bdc6b
    FLD float ptr [EAX + 0x278]         ; 004bdc6e
    FSTP double ptr [ESP]               ; 004bdc74
    PUSH 0x5c361f                       ; 004bdc77 | = "%f,%f,%f,%d,%d\n"
    PUSH EBP                            ; 004bdc7c
    CALL crt_unknown.c_FUN_005a3140     ; 004bdc7d
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0x28                        ; 004bdc82
    MOV EAX,dword ptr [ESP + 0x498]     ; 004bdc85
    ADD EAX,0x298                       ; 004bdc8c
    PUSH EAX                            ; 004bdc91
    PUSH 0x5c362f                       ; 004bdc92 | DAT_005c362f
    PUSH EBP                            ; 004bdc97
    CALL crt_unknown.c_FUN_005a3140     ; 004bdc98
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3140()
    ADD ESP,0xc                         ; 004bdc9d
    PUSH EBP                            ; 004bdca0
    MOV EDI,dword ptr [0x00603b28]      ; 004bdca1 | g_CDemonSetPtr
    PUSH EDI                            ; 004bdca7
    CALL core_set.cpp_FUN_0053b6e0      ; 004bdca8
        ;   XREF to: 0053b6e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_0053b6e0()
    ADD ESP,0x8                         ; 004bdcad
    PUSH EBP                            ; 004bdcb0
    MOV EAX,[0x005fe4b0]                ; 004bdcb1 | g_CFieldNotesPtr
    PUSH EAX                            ; 004bdcb6
    CALL core_fldnotes.cpp_FUN_004acf00 ; 004bdcb7
        ;   XREF to: 004acf00 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004acf00()
    ADD ESP,0x8                         ; 004bdcbc
    PUSH EBP                            ; 004bdcbf
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004bdcc0
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004bdcc5
    XOR EDX,EDX                         ; 004bdcc8
    MOV ECX,dword ptr [ESP + 0x480]     ; 004bdcca
    MOV dword ptr [0x007df9c0],EDX      ; 004bdcd1 | DAT_007df9c0
    TEST ECX,ECX                        ; 004bdcd7
    JZ 0x004bde4d                       ; 004bdcd9
        ;   XREF to: 004bde4d (CONDITIONAL_JUMP)  ; LAB_004bde4d
    LEA EAX,[ESP + 0x44c]               ; 004bdcdf
    PUSH EAX                            ; 004bdce6
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004bdce7
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bdcec
    LEA EAX,[ESP + 0x478]               ; 004bdcef
    PUSH EAX                            ; 004bdcf6
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0 ; 004bdcf7
        ;   XREF to: 005747c0 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_005747c0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bdcfc
    PUSH 0x5c3633                       ; 004bdcff | = "Warning!  Your game didn't save."
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bdd04
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bdd09
    PUSH 0x1                            ; 004bdd0c
    PUSH 0x5fe9f8                       ; 004bdd0e | = "save\\$$SAVE$$.TMP"
    MOV EBX,EAX                         ; 004bdd13
    LEA EAX,[ESP + 0x454]               ; 004bdd15
    PUSH EAX                            ; 004bdd1c
    CALL support_trstream.cpp_CInStreamFile_open_FUN_00573f50 ; 004bdd1d
        ;   XREF to: 00573f50 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile * this_ptr, LPCSTR param_2, int param_3)
    ADD ESP,0xc                         ; 004bdd22
    TEST EAX,EAX                        ; 004bdd25
    JZ 0x004bdf27                       ; 004bdd27
        ;   XREF to: 004bdf27 (CONDITIONAL_JUMP)  ; LAB_004bdf27
    MOV EAX,ESP                         ; 004bdd2d
    PUSH EAX                            ; 004bdd2f
    PUSH 0x5c3654                       ; 004bdd30 | DAT_005c3654
    PUSH 0x5c3659                       ; 004bdd35 | = "%s\\%s"
    LEA EAX,[ESP + 0x214]               ; 004bdd3a
    PUSH EAX                            ; 004bdd41
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004bdd42
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004bdd47
    PUSH 0x5c365f                       ; 004bdd4a | DAT_005c365f
    LEA EAX,[ESP + 0x20c]               ; 004bdd4f
    PUSH EAX                            ; 004bdd56
    LEA EAX,[ESP + 0x480]               ; 004bdd57
    PUSH EAX                            ; 004bdd5e
    CALL support_trstream.cpp_COutStreamFile_open_FUN_005749d0 ; 004bdd5f
        ;   XREF to: 005749d0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004bdd64
    TEST EAX,EAX                        ; 004bdd67
    JZ 0x004bdf66                       ; 004bdd69
        ;   XREF to: 004bdf66 (CONDITIONAL_JUMP)  ; LAB_004bdf66
    PUSH 0x4                            ; 004bdd6f
    PUSH 0x5fea0c                       ; 004bdd71 | DAT_005fea0c
    LEA EAX,[ESP + 0x480]               ; 004bdd76
    PUSH EAX                            ; 004bdd7d
    CALL support_trstream.cpp_COutStreamFile_write_FUN_005748e0 ; 004bdd7e
        ;   XREF to: 005748e0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_COutStreamFile_write_FUN_005748e0(COutStreamFile * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 004bdd83
    PUSH 0x8                            ; 004bdd86
    PUSH 0x8000                         ; 004bdd88
    LEA EAX,[ESP + 0x414]               ; 004bdd8d
    PUSH EAX                            ; 004bdd94
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_004410f0 ; 004bdd95
        ;   XREF to: 004410f0 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_004410f0(CLZWCompress * this_ptr, int buffer_size, int num_bits)
    ADD ESP,0xc                         ; 004bdd9a
    LEA EAX,[ESP + 0x40c]               ; 004bdd9d
    PUSH EAX                            ; 004bdda4
    CALL support_codec.cpp_CLZWCompress_init_FUN_00441140 ; 004bdda5
        ;   XREF to: 00441140 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWCompress_init_FUN_00441140(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 004bddaa
    LEA EAX,[ESP + 0x478]               ; 004bddad
    PUSH EAX                            ; 004bddb4
    LEA EAX,[ESP + 0x450]               ; 004bddb5
    PUSH EAX                            ; 004bddbc
    LEA EAX,[ESP + 0x414]               ; 004bddbd
    PUSH EAX                            ; 004bddc4
    CALL support_codec.cpp_FUN_00441190 ; 004bddc5
        ;   XREF to: 00441190 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441190()
    ADD ESP,0xc                         ; 004bddca
    LEA EAX,[ESP + 0x478]               ; 004bddcd
    PUSH EAX                            ; 004bddd4
    LEA EAX,[ESP + 0x410]               ; 004bddd5
    PUSH EAX                            ; 004bdddc
    CALL support_codec.cpp_FUN_00441290 ; 004bdddd
        ;   XREF to: 00441290 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00441290()
    ADD ESP,0x8                         ; 004bdde2
    LEA EAX,[ESP + 0x44c]               ; 004bdde5
    PUSH EAX                            ; 004bddec
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 004bdded
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bddf2
    LEA EAX,[ESP + 0x478]               ; 004bddf5
    PUSH EAX                            ; 004bddfc
    CALL support_trstream.cpp_COutStreamFile_close_FUN_005749a0 ; 004bddfd
        ;   XREF to: 005749a0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bde02
    PUSH 0x0                            ; 004bde05
    LEA EAX,[ESP + 0x414]               ; 004bde07
    PUSH EAX                            ; 004bde0e
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 ; 004bde0f
        ;   XREF to: 00440bf0 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bde14
    PUSH 0x1                            ; 004bde17
    LEA EAX,[ESP + 0x410]               ; 004bde19
    PUSH EAX                            ; 004bde20
    CALL support_codec.cpp_CCodec_dtor_FUN_00440810 ; 004bde21
        ;   XREF to: 00440810 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00440810(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bde26
    PUSH 0x0                            ; 004bde29
    LEA EAX,[ESP + 0x47c]               ; 004bde2b
    PUSH EAX                            ; 004bde32
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004bde33
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bde38
    PUSH 0x0                            ; 004bde3b
    LEA EAX,[ESP + 0x450]               ; 004bde3d
    PUSH EAX                            ; 004bde44
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004bde45
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bde4a
    PUSH 0x5fe9f8                       ; 004bde4d | = "save\\$$SAVE$$.TMP"
        ;   Label: LAB_004bde4d
    CALL crt_unknown.c_FUN_005a54b0     ; 004bde52
        ;   XREF to: 005a54b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a54b0(char * filename)
    ADD ESP,0x4                         ; 004bde57
    MOV ESI,ESP                         ; 004bde5a
    MOV EDI,0x1d225c8                   ; 004bde5c
    PUSH EDI                            ; 004bde61 | DAT_01d225c8
    MOV AL,byte ptr [ESI]               ; 004bde62
        ;   Label: LAB_004bde62
    MOV byte ptr [EDI],AL               ; 004bde64 | DAT_01d225c8 | DAT_01d225ca
    CMP AL,0x0                          ; 004bde66
    JZ 0x004bde7a                       ; 004bde68
        ;   XREF to: 004bde7a (CONDITIONAL_JUMP)  ; LAB_004bde7a
    MOV AL,byte ptr [ESI + 0x1]         ; 004bde6a
    ADD ESI,0x2                         ; 004bde6d
    MOV byte ptr [EDI + 0x1],AL         ; 004bde70 | DAT_01d225c9 | DAT_01d225cb
    ADD EDI,0x2                         ; 004bde73
    CMP AL,0x0                          ; 004bde76
    JNZ 0x004bde62                      ; 004bde78
        ;   XREF to: 004bde62 (CONDITIONAL_JUMP)  ; LAB_004bde62
    POP EDI                             ; 004bde7a
        ;   Label: LAB_004bde7a
    ADD ESP,0x484                       ; 004bde7b
        ;   Label: LAB_004bde7b
    POP EBP                             ; 004bde81
    POP EDI                             ; 004bde82
    POP ESI                             ; 004bde83
    POP EBX                             ; 004bde84
    RET                                 ; 004bde85
    XOR AH,AH                           ; 004bde86
        ;   Label: LAB_004bde86
    MOV byte ptr [ESP],AH               ; 004bde88
    JMP 0x004bdaa0                      ; 004bde8b
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_JUMP)  ; LAB_004bdaa0
    PUSH 0x1                            ; 004bde90
        ;   Label: LAB_004bde90
    LEA EAX,[ESP + 0x4]                 ; 004bde92
    PUSH EAX                            ; 004bde96
    PUSH 0x5c3561                       ; 004bde97 | DAT_005c3561
    PUSH 0x5c3565                       ; 004bde9c | DAT_005c3565
    PUSH 0x5c356a                       ; 004bdea1 | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bdea6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bdeab
    PUSH EAX                            ; 004bdeae
    MOV EDX,dword ptr [0x005fb140]      ; 004bdeaf | g_CEditorToolsPtr
    PUSH EDX                            ; 004bdeb5
    CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 ; 004bdeb6
        ;   XREF to: 0047e470 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 004bdebb
    TEST EAX,EAX                        ; 004bdebe
    JZ 0x004bde7b                       ; 004bdec0
        ;   XREF to: 004bde7b (CONDITIONAL_JUMP)  ; LAB_004bde7b
    PUSH EBX                            ; 004bdec2
    LEA EAX,[ESP + 0x108]               ; 004bdec3
    PUSH EAX                            ; 004bdeca
    PUSH EBX                            ; 004bdecb
    PUSH EBX                            ; 004bdecc
    LEA EAX,[ESP + 0x10]                ; 004bdecd
    PUSH EAX                            ; 004bded1
    CALL crt_string.c_splitpath_FUN_005a5128 ; 004bded2
        ;   XREF to: 005a5128 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005a5128(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bded7
    LEA EAX,[ESP + 0x104]               ; 004bdeda
    PUSH EAX                            ; 004bdee1
    PUSH 0x5c3574                       ; 004bdee2 | = "%s.sav"
    LEA EAX,[ESP + 0x8]                 ; 004bdee7
    PUSH EAX                            ; 004bdeeb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004bdeec
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004bdef1
    JMP 0x004bdac6                      ; 004bdef4
        ;   XREF to: 004bdac6 (UNCONDITIONAL_JUMP)  ; LAB_004bdac6
    PUSH 0x5c358b                       ; 004bdef9 | = "Warning!  Your game didn't save."
        ;   Label: LAB_004bdef9
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bdefe
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bdf03
    PUSH EAX                            ; 004bdf06
    MOV ECX,dword ptr [0x005fb140]      ; 004bdf07 | g_CEditorToolsPtr
    PUSH ECX                            ; 004bdf0d
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004bdf0e
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bdf13
    MOV dword ptr [0x007df9c0],EBX      ; 004bdf16 | DAT_007df9c0
    ADD ESP,0x484                       ; 004bdf1c
    POP EBP                             ; 004bdf22
    POP EDI                             ; 004bdf23
    POP ESI                             ; 004bdf24
    POP EBX                             ; 004bdf25
    RET                                 ; 004bdf26
    PUSH EBX                            ; 004bdf27
        ;   Label: LAB_004bdf27
    MOV EBX,dword ptr [0x005fb140]      ; 004bdf28 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bdf2e
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004bdf2f
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bdf34
    PUSH 0x0                            ; 004bdf37
    LEA EAX,[ESP + 0x47c]               ; 004bdf39
    PUSH EAX                            ; 004bdf40
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004bdf41
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bdf46
    PUSH 0x0                            ; 004bdf49
    LEA EAX,[ESP + 0x450]               ; 004bdf4b
    PUSH EAX                            ; 004bdf52
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004bdf53
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bdf58
    ADD ESP,0x484                       ; 004bdf5b
    POP EBP                             ; 004bdf61
    POP EDI                             ; 004bdf62
    POP ESI                             ; 004bdf63
    POP EBX                             ; 004bdf64
    RET                                 ; 004bdf65
    PUSH EBX                            ; 004bdf66
        ;   Label: LAB_004bdf66
    MOV ESI,dword ptr [0x005fb140]      ; 004bdf67 | g_CEditorToolsPtr
    PUSH ESI                            ; 004bdf6d
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40 ; 004bdf6e
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047cf40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004bdf73
    PUSH 0x0                            ; 004bdf76
    LEA EAX,[ESP + 0x47c]               ; 004bdf78
    PUSH EAX                            ; 004bdf7f
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 ; 004bdf80
        ;   XREF to: 00574850 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_00574850(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bdf85
    PUSH 0x0                            ; 004bdf88
    LEA EAX,[ESP + 0x450]               ; 004bdf8a
    PUSH EAX                            ; 004bdf91
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004bdf92
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bdf97
    ADD ESP,0x484                       ; 004bdf9a
    POP EBP                             ; 004bdfa0
    POP EDI                             ; 004bdfa1
    POP ESI                             ; 004bdfa2
    POP EBX                             ; 004bdfa3
    RET                                 ; 004bdfa4

