; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bb9b0(CGame *this_ptr,char *save_filename)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   save_filename
; Local Variables:
; undefined8       Stack[-0x4a8]:8  local_4a8
; undefined8       Stack[-0x4a0]:8  local_4a0
; undefined1       Stack[-0x490]:1  local_490
; undefined1       Stack[-0x48f]:1  local_48f
; undefined        Stack[-0x38c]:1  local_38c
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x184]:1  local_184
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_FUN_004b6170 at 004b6ba3
;   core_game.cpp_FUN_004b82e0 at 004b8b45
;
; Referenced Globals:
;   undefined4 s_GUnable_to_save_during_c_005d8406+1
;   undefined4 DAT_005d8427
;   undefined4 DAT_005d842b
;   undefined4 DAT_005d8430
;   undefined4 DAT_005d8434
;   TerminatedCString s_Save_game_005d8439
;   TerminatedCString s_s_noc_005d8443
;   undefined4 DAT_005d844a
;   undefined4 DAT_005d844f
;   TerminatedCString s_Warning_Your_game_didn_t_005d845a
;   TerminatedCString s_NOC_file_version_005d847b
;   undefined4 DAT_005d8491
;   TerminatedCString s_Hero_count_local_hero_in_005d8495
;   TerminatedCString s_d_d_005d84c1
;   undefined4 DAT_005d84c9
;   ... and 28 more
;
; Called Functions:
;   core_event.cpp_CEventList_saveState_FUN_00492060
;   core_fire.cpp_CFireEffect_save_FUN_0049eb00
;   core_fldnotes.cpp_FUN_004a6470
;   core_mission.cpp_FUN_004fbce0
;   core_script.cpp_FUN_0052a400
;   core_set.cpp_CDemonSet_saveMasterLightStates_FUN_005349d0
;   core_set.cpp_CDemonSet_saveStateInfo_FUN_00534a10
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_string.c__stricmp_FUN_005b8130
;   crt_string.c_splitpath_FUN_005b9e58
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005b8010
;   crt_unknown.c_FUN_005ba1e0
;   crt_watcom.c__mkdir_FUN_005b9c20
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb9b0
        ;   Label: core_game.cpp_FUN_004bb9b0
    PUSH ESI                            ; 004bb9b1
    PUSH EDI                            ; 004bb9b2
    PUSH EBP                            ; 004bb9b3
    SUB ESP,0x480                       ; 004bb9b4
    MOV EBX,dword ptr [ESP + 0x498]     ; 004bb9ba
    MOV EAX,dword ptr [ESP + 0x494]     ; 004bb9c1
    CMP dword ptr [EAX + 0x244],0x0     ; 004bb9c8
    JNZ 0x004bbdfd                      ; 004bb9cf
        ;   XREF to: 004bbdfd (CONDITIONAL_JUMP)  ; LAB_004bbdfd
    PUSH 0x6164c8                       ; 004bb9d5 | = "save\\$$SAVE$$.TMP"
    CALL crt_unknown.c_FUN_005ba1e0     ; 004bb9da
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 004bb9df
    LEA EAX,[ESP + 0x30c]               ; 004bb9e2
    PUSH EAX                            ; 004bb9e9
    PUSH 0x0                            ; 004bb9ea
    PUSH 0x0                            ; 004bb9ec
    PUSH 0x0                            ; 004bb9ee
    PUSH 0x1cb7b50                      ; 004bb9f0 | DAT_01cb7b50
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 004bb9f5
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bb9fa
    PUSH 0x5d8427                       ; 004bb9fd | DAT_005d8427
    LEA EAX,[ESP + 0x310]               ; 004bba02
    PUSH EAX                            ; 004bba09
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bba0a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bba0f
    TEST EAX,EAX                        ; 004bba12
    JNZ 0x004bbe25                      ; 004bba14
        ;   XREF to: 004bbe25 (CONDITIONAL_JUMP)  ; LAB_004bbe25
    MOV ESI,0x1cb7b50                   ; 004bba1a
        ;   Label: LAB_004bba1a
    MOV EDI,ESP                         ; 004bba1f
    PUSH EDI                            ; 004bba21
    MOV AL,byte ptr [ESI]               ; 004bba22 | DAT_01cb7b50 | DAT_01cb7b52
        ;   Label: LAB_004bba22
    MOV byte ptr [EDI],AL               ; 004bba24
    CMP AL,0x0                          ; 004bba26
    JZ 0x004bba3a                       ; 004bba28
        ;   XREF to: 004bba3a (CONDITIONAL_JUMP)  ; LAB_004bba3a
    MOV AL,byte ptr [ESI + 0x1]         ; 004bba2a | DAT_01cb7b51 | DAT_01cb7b53
    ADD ESI,0x2                         ; 004bba2d
    MOV byte ptr [EDI + 0x1],AL         ; 004bba30
    ADD EDI,0x2                         ; 004bba33
    CMP AL,0x0                          ; 004bba36
    JNZ 0x004bba22                      ; 004bba38
        ;   XREF to: 004bba22 (CONDITIONAL_JUMP)  ; LAB_004bba22
    POP EDI                             ; 004bba3a
        ;   Label: LAB_004bba3a
    TEST EBX,EBX                        ; 004bba3b
        ;   Label: LAB_004bba3b
    JZ 0x004bbe4c                       ; 004bba3d
        ;   XREF to: 004bbe4c (CONDITIONAL_JUMP)  ; LAB_004bbe4c
    MOV EDI,ESP                         ; 004bba43
    MOV ESI,EBX                         ; 004bba45
    PUSH EDI                            ; 004bba47
    MOV AL,byte ptr [ESI]               ; 004bba48
        ;   Label: LAB_004bba48
    MOV byte ptr [EDI],AL               ; 004bba4a
    CMP AL,0x0                          ; 004bba4c
    JZ 0x004bba60                       ; 004bba4e
        ;   XREF to: 004bba60 (CONDITIONAL_JUMP)  ; LAB_004bba60
    MOV AL,byte ptr [ESI + 0x1]         ; 004bba50
    ADD ESI,0x2                         ; 004bba53
    MOV byte ptr [EDI + 0x1],AL         ; 004bba56
    ADD EDI,0x2                         ; 004bba59
    CMP AL,0x0                          ; 004bba5c
    JNZ 0x004bba48                      ; 004bba5e
        ;   XREF to: 004bba48 (CONDITIONAL_JUMP)  ; LAB_004bba48
    POP EDI                             ; 004bba60
        ;   Label: LAB_004bba60
    PUSH 0x5d844a                       ; 004bba61 | DAT_005d844a
        ;   Label: LAB_004bba61
    CALL crt_watcom.c__mkdir_FUN_005b9c20 ; 004bba66
        ;   XREF to: 005b9c20 (UNCONDITIONAL_CALL)  ; int crt_watcom.c__mkdir_FUN_005b9c20(char * path)
    ADD ESP,0x4                         ; 004bba6b
    PUSH 0x5d844f                       ; 004bba6e | DAT_005d844f
    MOV EBX,0x1                         ; 004bba73
    PUSH 0x6164c8                       ; 004bba78 | = "save\\$$SAVE$$.TMP"
    MOV dword ptr [0x007bc040],EBX      ; 004bba7d | DAT_007bc040
    MOV dword ptr [ESP + 0x484],EBX     ; 004bba83
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004bba8a
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    MOV EBX,EAX                         ; 004bba8f
    ADD ESP,0x8                         ; 004bba91
    MOV EBP,EAX                         ; 004bba94
    TEST EAX,EAX                        ; 004bba96
    JZ 0x004bbeb9                       ; 004bba98
        ;   XREF to: 004bbeb9 (CONDITIONAL_JUMP)  ; LAB_004bbeb9
    PUSH 0x5d847b                       ; 004bba9e | = "// .NOC file version\n"
    PUSH EAX                            ; 004bbaa3
    CALL crt_unknown.c_FUN_005b8010     ; 004bbaa4
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004bbaa9
    PUSH 0xa                            ; 004bbaac
    PUSH 0x5d8491                       ; 004bbaae | DAT_005d8491
    PUSH EBX                            ; 004bbab3
    CALL crt_unknown.c_FUN_005b8010     ; 004bbab4
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 004bbab9
    PUSH EBX                            ; 004bbabc
    MOV EDI,dword ptr [0x00618170]      ; 004bbabd | DAT_00618170
    PUSH EDI                            ; 004bbac3
    CALL core_mission.cpp_FUN_004fbce0  ; 004bbac4
        ;   XREF to: 004fbce0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004fbce0(CDemonMission * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bbac9
    PUSH 0x5d8495                       ; 004bbacc | = "// Hero count, local hero index, hero..."
    PUSH EBX                            ; 004bbad1
    CALL crt_unknown.c_FUN_005b8010     ; 004bbad2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004bbad7
    MOV EAX,[0x01cedef4]                ; 004bbada | DAT_01cedef4
    PUSH EAX                            ; 004bbadf
    MOV EDX,dword ptr [0x01cedee0]      ; 004bbae0 | DAT_01cedee0
    PUSH EDX                            ; 004bbae6
    PUSH 0x5d84c1                       ; 004bbae7 | = "%d, %d\n"
    PUSH EBX                            ; 004bbaec
    CALL crt_unknown.c_FUN_005b8010     ; 004bbaed
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV ECX,dword ptr [0x01cedee0]      ; 004bbaf2 | DAT_01cedee0
    ADD ESP,0x10                        ; 004bbaf8
    XOR EBX,EBX                         ; 004bbafb
    TEST ECX,ECX                        ; 004bbafd
    JLE 0x004bbb30                      ; 004bbaff
        ;   XREF to: 004bbb30 (CONDITIONAL_JUMP)  ; LAB_004bbb30
    XOR ESI,ESI                         ; 004bbb01
    MOV EAX,dword ptr [ESI + 0x1cedee4] ; 004bbb03
        ;   Label: LAB_004bbb03
    PUSH EAX                            ; 004bbb09
    PUSH 0x5d84c9                       ; 004bbb0a | DAT_005d84c9
    PUSH EBP                            ; 004bbb0f
    ADD ESI,0x4                         ; 004bbb10
    INC EBX                             ; 004bbb13
    CALL crt_unknown.c_FUN_005b8010     ; 004bbb14
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [0x01cedee0]      ; 004bbb19 | DAT_01cedee0
    ADD ESP,0xc                         ; 004bbb1f
    CMP EBX,EDX                         ; 004bbb22
    JL 0x004bbb03                       ; 004bbb24
        ;   XREF to: 004bbb03 (CONDITIONAL_JUMP)  ; LAB_004bbb03
    LEA EAX,[EAX]                       ; 004bbb26
    LEA EDX,[EDX]                       ; 004bbb2c
    PUSH EBP                            ; 004bbb30
        ;   Label: LAB_004bbb30
    MOV ECX,dword ptr [0x006141f0]      ; 004bbb31 | DAT_006141f0
    PUSH ECX                            ; 004bbb37
    CALL core_event.cpp_CEventList_saveState_FUN_00492060 ; 004bbb38
        ;   XREF to: 00492060 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_saveState_FUN_00492060(CEventList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bbb3d
    PUSH EBP                            ; 004bbb40
    MOV EBX,dword ptr [0x0061b460]      ; 004bbb41 | g_CScriptPtr
    PUSH EBX                            ; 004bbb47
    CALL core_script.cpp_FUN_0052a400   ; 004bbb48
        ;   XREF to: 0052a400 (UNCONDITIONAL_CALL)  ; void core_script.cpp_FUN_0052a400(CScript * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bbb4d
    PUSH EBP                            ; 004bbb50
    MOV ESI,dword ptr [0x00614d30]      ; 004bbb51 | DAT_00614d30
    PUSH ESI                            ; 004bbb57
    CALL core_fire.cpp_CFireEffect_save_FUN_0049eb00 ; 004bbb58
        ;   XREF to: 0049eb00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_save_FUN_0049eb00(CFireEffect * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bbb5d
    PUSH 0x5d84cd                       ; 004bbb60 | = "Light state\n"
    PUSH EBP                            ; 004bbb65
    CALL crt_unknown.c_FUN_005b8010     ; 004bbb66
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004bbb6b
    PUSH 0x1cb7c54                      ; 004bbb6e | DAT_01cb7c54
    MOV EDI,dword ptr [0x0061b5a8]      ; 004bbb73 | g_CDemonSetPtr
    PUSH EDI                            ; 004bbb79
    CALL core_set.cpp_CDemonSet_saveMasterLightStates_FUN_005349d0 ; 004bbb7a
        ;   XREF to: 005349d0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_saveMasterLightStates_FUN_005349d0(CDemonSet * this_ptr, int * light_state_buffer)
    ADD ESP,0x8                         ; 004bbb7f
    MOV EAX,[0x01cb7c54]                ; 004bbb82 | DAT_01cb7c54
    PUSH EAX                            ; 004bbb87
    PUSH 0x5d84da                       ; 004bbb88 | DAT_005d84da
    PUSH EBP                            ; 004bbb8d
    MOV ESI,0x1                         ; 004bbb8e
    CALL crt_unknown.c_FUN_005b8010     ; 004bbb93
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [0x01cb7c54]      ; 004bbb98 | DAT_01cb7c54
    ADD ESP,0xc                         ; 004bbb9e
    CMP EDX,ESI                         ; 004bbba1
    JL 0x004bbbd0                       ; 004bbba3
        ;   XREF to: 004bbbd0 (CONDITIONAL_JUMP)  ; LAB_004bbbd0
    MOV EDI,0x4                         ; 004bbba5
    MOV ECX,dword ptr [EDI + 0x1cb7c54] ; 004bbbaa | DAT_01cb7c58 | DAT_01cb7c5c
        ;   Label: LAB_004bbbaa
    PUSH ECX                            ; 004bbbb0
    PUSH 0x5d84de                       ; 004bbbb1 | DAT_005d84de
    PUSH EBP                            ; 004bbbb6
    ADD EDI,0x4                         ; 004bbbb7
    INC ESI                             ; 004bbbba
    CALL crt_unknown.c_FUN_005b8010     ; 004bbbbb
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EBX,dword ptr [0x01cb7c54]      ; 004bbbc0 | DAT_01cb7c54
    ADD ESP,0xc                         ; 004bbbc6
    CMP ESI,EBX                         ; 004bbbc9
    JLE 0x004bbbaa                      ; 004bbbcb
        ;   XREF to: 004bbbaa (CONDITIONAL_JUMP)  ; LAB_004bbbaa
    LEA EAX,[EAX]                       ; 004bbbcd
    PUSH 0x5d84e2                       ; 004bbbd0 | = "Game stats\n"
        ;   Label: LAB_004bbbd0
    PUSH EBP                            ; 004bbbd5
    CALL crt_unknown.c_FUN_005b8010     ; 004bbbd6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x8                         ; 004bbbdb
    MOV EAX,dword ptr [ESP + 0x494]     ; 004bbbde
    MOV ESI,dword ptr [EAX + 0x274]     ; 004bbbe5
    PUSH ESI                            ; 004bbbeb
    MOV EDI,dword ptr [EAX + 0x26c]     ; 004bbbec
    PUSH EDI                            ; 004bbbf2
    SUB ESP,0x8                         ; 004bbbf3
    FLD float ptr [EAX + 0x268]         ; 004bbbf6
    FSTP double ptr [ESP]               ; 004bbbfc
    SUB ESP,0x8                         ; 004bbbff
    FLD float ptr [EAX + 0x270]         ; 004bbc02
    FSTP double ptr [ESP]               ; 004bbc08
    PUSH 0x5d84ee                       ; 004bbc0b | = "%f,%f,%d,%d\n"
    PUSH EBP                            ; 004bbc10
    CALL crt_unknown.c_FUN_005b8010     ; 004bbc11
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x20                        ; 004bbc16
    PUSH EBP                            ; 004bbc19
    MOV EAX,[0x0061b5a8]                ; 004bbc1a | g_CDemonSetPtr
    PUSH EAX                            ; 004bbc1f
    CALL core_set.cpp_CDemonSet_saveStateInfo_FUN_00534a10 ; 004bbc20
        ;   XREF to: 00534a10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_saveStateInfo_FUN_00534a10(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004bbc25
    PUSH EBP                            ; 004bbc28
    MOV EDX,dword ptr [0x00616044]      ; 004bbc29 | g_CFieldNotesPtr
    PUSH EDX                            ; 004bbc2f
    CALL core_fldnotes.cpp_FUN_004a6470 ; 004bbc30
        ;   XREF to: 004a6470 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a6470()
    ADD ESP,0x8                         ; 004bbc35
    PUSH EBP                            ; 004bbc38
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004bbc39
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004bbc3e
    XOR ECX,ECX                         ; 004bbc41
    MOV EBX,dword ptr [ESP + 0x47c]     ; 004bbc43
    MOV dword ptr [0x007bc040],ECX      ; 004bbc4a | DAT_007bc040
    TEST EBX,EBX                        ; 004bbc50
    JZ 0x004bbdc4                       ; 004bbc52
        ;   XREF to: 004bbdc4 (CONDITIONAL_JUMP)  ; LAB_004bbdc4
    LEA EAX,[ESP + 0x44c]               ; 004bbc58
    PUSH EAX                            ; 004bbc5f
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004bbc60
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bbc65
    LEA EAX,[ESP + 0x474]               ; 004bbc68
    PUSH EAX                            ; 004bbc6f
    CALL support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80 ; 004bbc70
        ;   XREF to: 0057db80 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_ctor_FUN_0057db80(COutStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004bbc75
    PUSH 0x5d84fb                       ; 004bbc78 | = "Warning!  Your game didn't save."
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bbc7d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bbc82
    PUSH 0x6164c8                       ; 004bbc85 | = "save\\$$SAVE$$.TMP"
    MOV EBX,EAX                         ; 004bbc8a
    LEA EAX,[ESP + 0x450]               ; 004bbc8c
    PUSH EAX                            ; 004bbc93
    CALL support_trstream.cpp_FUN_0057d320 ; 004bbc94
        ;   XREF to: 0057d320 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057d320()
    ADD ESP,0x8                         ; 004bbc99
    TEST EAX,EAX                        ; 004bbc9c
    JZ 0x004bbee9                       ; 004bbc9e
        ;   XREF to: 004bbee9 (CONDITIONAL_JUMP)  ; LAB_004bbee9
    MOV EAX,ESP                         ; 004bbca4
    PUSH EAX                            ; 004bbca6
    PUSH 0x5d851c                       ; 004bbca7 | DAT_005d851c
    PUSH 0x5d8521                       ; 004bbcac | = "%s\\%s"
    LEA EAX,[ESP + 0x214]               ; 004bbcb1
    PUSH EAX                            ; 004bbcb8
    CALL crt_unknown.c_FUN_005b7790     ; 004bbcb9
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004bbcbe
    PUSH 0x5d8527                       ; 004bbcc1 | DAT_005d8527
    LEA EAX,[ESP + 0x20c]               ; 004bbcc6
    PUSH EAX                            ; 004bbccd
    LEA EAX,[ESP + 0x47c]               ; 004bbcce
    PUSH EAX                            ; 004bbcd5
    CALL support_trstream.cpp_FUN_0057dd90 ; 004bbcd6
        ;   XREF to: 0057dd90 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057dd90()
    ADD ESP,0xc                         ; 004bbcdb
    TEST EAX,EAX                        ; 004bbcde
    JZ 0x004bbf28                       ; 004bbce0
        ;   XREF to: 004bbf28 (CONDITIONAL_JUMP)  ; LAB_004bbf28
    PUSH 0x4                            ; 004bbce6
    PUSH 0x6164dc                       ; 004bbce8 | DAT_006164dc
    LEA EAX,[ESP + 0x47c]               ; 004bbced
    PUSH EAX                            ; 004bbcf4
    CALL support_trstream.cpp_FUN_0057dca0 ; 004bbcf5
        ;   XREF to: 0057dca0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057dca0()
    ADD ESP,0xc                         ; 004bbcfa
    PUSH 0x8                            ; 004bbcfd
    PUSH 0x8000                         ; 004bbcff
    LEA EAX,[ESP + 0x414]               ; 004bbd04
    PUSH EAX                            ; 004bbd0b
    CALL support_codec.cpp_CLZWCompress_ctor_FUN_00434770 ; 004bbd0c
        ;   XREF to: 00434770 (UNCONDITIONAL_CALL)  ; CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_00434770(CLZWCompress * this_ptr, int buffer_size, int num_bits)
    ADD ESP,0xc                         ; 004bbd11
    LEA EAX,[ESP + 0x40c]               ; 004bbd14
    PUSH EAX                            ; 004bbd1b
    CALL support_codec.cpp_FUN_004347c0 ; 004bbd1c
        ;   XREF to: 004347c0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_004347c0(CLZWCompress * this_ptr)
    ADD ESP,0x4                         ; 004bbd21
    LEA EAX,[ESP + 0x474]               ; 004bbd24
    PUSH EAX                            ; 004bbd2b
    LEA EAX,[ESP + 0x450]               ; 004bbd2c
    PUSH EAX                            ; 004bbd33
    LEA EAX,[ESP + 0x414]               ; 004bbd34
    PUSH EAX                            ; 004bbd3b
    CALL support_codec.cpp_FUN_00434810 ; 004bbd3c
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434810()
    ADD ESP,0xc                         ; 004bbd41
    LEA EAX,[ESP + 0x474]               ; 004bbd44
    PUSH EAX                            ; 004bbd4b
    LEA EAX,[ESP + 0x410]               ; 004bbd4c
    PUSH EAX                            ; 004bbd53
    CALL support_codec.cpp_FUN_00434910 ; 004bbd54
        ;   XREF to: 00434910 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434910()
    ADD ESP,0x8                         ; 004bbd59
    LEA EAX,[ESP + 0x44c]               ; 004bbd5c
    PUSH EAX                            ; 004bbd63
    CALL unkaddr_0057b9a0.cpp_FUN_0057d180 ; 004bbd64
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0057b9a0.cpp_FUN_0057d180()
    ADD ESP,0x4                         ; 004bbd69
    LEA EAX,[ESP + 0x474]               ; 004bbd6c
    PUSH EAX                            ; 004bbd73
    CALL support_trstream.cpp_FUN_0057dd60 ; 004bbd74
        ;   XREF to: 0057dd60 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_0057dd60()
    ADD ESP,0x4                         ; 004bbd79
    PUSH 0x0                            ; 004bbd7c
    LEA EAX,[ESP + 0x414]               ; 004bbd7e
    PUSH EAX                            ; 004bbd85
    CALL support_codec.cpp_CLZWDictionary_dtor_FUN_00434270 ; 004bbd86
        ;   XREF to: 00434270 (UNCONDITIONAL_CALL)  ; CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_00434270(CLZWDictionary * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbd8b
    PUSH 0x1                            ; 004bbd8e
    LEA EAX,[ESP + 0x410]               ; 004bbd90
    PUSH EAX                            ; 004bbd97
    CALL support_codec.cpp_CCodec_dtor_FUN_00433e90 ; 004bbd98
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; CCodec * support_codec.cpp_CCodec_dtor_FUN_00433e90(CCodec * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbd9d
    PUSH 0x0                            ; 004bbda0
    LEA EAX,[ESP + 0x478]               ; 004bbda2
    PUSH EAX                            ; 004bbda9
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bbdaa
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbdaf
    PUSH 0x0                            ; 004bbdb2
    LEA EAX,[ESP + 0x450]               ; 004bbdb4
    PUSH EAX                            ; 004bbdbb
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bbdbc
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbdc1
    PUSH 0x6164c8                       ; 004bbdc4 | = "save\\$$SAVE$$.TMP"
        ;   Label: LAB_004bbdc4
    CALL crt_unknown.c_FUN_005ba1e0     ; 004bbdc9
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005ba1e0(char * filename)
    ADD ESP,0x4                         ; 004bbdce
    MOV ESI,ESP                         ; 004bbdd1
    MOV EDI,0x1cb7b50                   ; 004bbdd3
    PUSH EDI                            ; 004bbdd8 | DAT_01cb7b50
    MOV AL,byte ptr [ESI]               ; 004bbdd9
        ;   Label: LAB_004bbdd9
    MOV byte ptr [EDI],AL               ; 004bbddb | DAT_01cb7b50 | DAT_01cb7b52
    CMP AL,0x0                          ; 004bbddd
    JZ 0x004bbdf1                       ; 004bbddf
        ;   XREF to: 004bbdf1 (CONDITIONAL_JUMP)  ; LAB_004bbdf1
    MOV AL,byte ptr [ESI + 0x1]         ; 004bbde1
    ADD ESI,0x2                         ; 004bbde4
    MOV byte ptr [EDI + 0x1],AL         ; 004bbde7 | DAT_01cb7b51 | DAT_01cb7b53
    ADD EDI,0x2                         ; 004bbdea
    CMP AL,0x0                          ; 004bbded
    JNZ 0x004bbdd9                      ; 004bbdef
        ;   XREF to: 004bbdd9 (CONDITIONAL_JUMP)  ; LAB_004bbdd9
    POP EDI                             ; 004bbdf1
        ;   Label: LAB_004bbdf1
    ADD ESP,0x480                       ; 004bbdf2
        ;   Label: LAB_004bbdf2
    POP EBP                             ; 004bbdf8
    POP EDI                             ; 004bbdf9
    POP ESI                             ; 004bbdfa
    POP EBX                             ; 004bbdfb
    RET                                 ; 004bbdfc
    PUSH 0x5d8407                       ; 004bbdfd | s_GUnable_to_save_during_c_005d8406+1
        ;   Label: LAB_004bbdfd
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bbe02
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bbe07
    PUSH EAX                            ; 004bbe0a
    MOV EDI,dword ptr [0x006138e0]      ; 004bbe0b | g_CEditorToolsPtr
    PUSH EDI                            ; 004bbe11
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bbe12
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 004bbe17
    ADD ESP,0x480                       ; 004bbe1a
    POP EBP                             ; 004bbe20
    POP EDI                             ; 004bbe21
    POP ESI                             ; 004bbe22
    POP EBX                             ; 004bbe23
    RET                                 ; 004bbe24
    PUSH 0x5d842b                       ; 004bbe25 | DAT_005d842b
        ;   Label: LAB_004bbe25
    LEA EAX,[ESP + 0x310]               ; 004bbe2a
    PUSH EAX                            ; 004bbe31
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004bbe32
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004bbe37
    TEST EAX,EAX                        ; 004bbe3a
    JZ 0x004bba1a                       ; 004bbe3c
        ;   XREF to: 004bba1a (CONDITIONAL_JUMP)  ; LAB_004bba1a
    XOR AH,AH                           ; 004bbe42
    MOV byte ptr [ESP],AH               ; 004bbe44
    JMP 0x004bba3b                      ; 004bbe47
        ;   XREF to: 004bba3b (UNCONDITIONAL_JUMP)  ; LAB_004bba3b
    PUSH 0x1                            ; 004bbe4c
        ;   Label: LAB_004bbe4c
    LEA EAX,[ESP + 0x4]                 ; 004bbe4e
    PUSH EAX                            ; 004bbe52
    PUSH 0x5d8430                       ; 004bbe53 | DAT_005d8430
    PUSH 0x5d8434                       ; 004bbe58 | DAT_005d8434
    PUSH 0x5d8439                       ; 004bbe5d | = "Save game"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bbe62
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bbe67
    PUSH EAX                            ; 004bbe6a
    MOV ECX,dword ptr [0x006138e0]      ; 004bbe6b | g_CEditorToolsPtr
    PUSH ECX                            ; 004bbe71
    CALL shape_edittool.cpp_FUN_0047d270 ; 004bbe72
        ;   XREF to: 0047d270 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_0047d270(CEditorTools * this_ptr, char * dialog_title, char * directory_path, char * file_extension, ...)
    ADD ESP,0x18                        ; 004bbe77
    TEST EAX,EAX                        ; 004bbe7a
    JZ 0x004bbdf2                       ; 004bbe7c
        ;   XREF to: 004bbdf2 (CONDITIONAL_JUMP)  ; LAB_004bbdf2
    PUSH EBX                            ; 004bbe82
    LEA EAX,[ESP + 0x108]               ; 004bbe83
    PUSH EAX                            ; 004bbe8a
    PUSH EBX                            ; 004bbe8b
    PUSH EBX                            ; 004bbe8c
    LEA EAX,[ESP + 0x10]                ; 004bbe8d
    PUSH EAX                            ; 004bbe91
    CALL crt_string.c_splitpath_FUN_005b9e58 ; 004bbe92
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005b9e58(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004bbe97
    LEA EAX,[ESP + 0x104]               ; 004bbe9a
    PUSH EAX                            ; 004bbea1
    PUSH 0x5d8443                       ; 004bbea2 | = "%s.noc"
    LEA EAX,[ESP + 0x8]                 ; 004bbea7
    PUSH EAX                            ; 004bbeab
    CALL crt_unknown.c_FUN_005b7790     ; 004bbeac
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004bbeb1
    JMP 0x004bba61                      ; 004bbeb4
        ;   XREF to: 004bba61 (UNCONDITIONAL_JUMP)  ; LAB_004bba61
    PUSH 0x5d845a                       ; 004bbeb9 | = "Warning!  Your game didn't save."
        ;   Label: LAB_004bbeb9
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004bbebe
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004bbec3
    PUSH EAX                            ; 004bbec6
    MOV EBX,dword ptr [0x006138e0]      ; 004bbec7 | g_CEditorToolsPtr
    PUSH EBX                            ; 004bbecd
    XOR ESI,ESI                         ; 004bbece
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bbed0
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 004bbed5
    MOV dword ptr [0x007bc040],ESI      ; 004bbed8 | DAT_007bc040
    ADD ESP,0x480                       ; 004bbede
    POP EBP                             ; 004bbee4
    POP EDI                             ; 004bbee5
    POP ESI                             ; 004bbee6
    POP EBX                             ; 004bbee7
    RET                                 ; 004bbee8
    PUSH EBX                            ; 004bbee9
        ;   Label: LAB_004bbee9
    MOV ESI,dword ptr [0x006138e0]      ; 004bbeea | g_CEditorToolsPtr
    PUSH ESI                            ; 004bbef0
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bbef1
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 004bbef6
    PUSH 0x0                            ; 004bbef9
    LEA EAX,[ESP + 0x478]               ; 004bbefb
    PUSH EAX                            ; 004bbf02
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bbf03
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbf08
    PUSH 0x0                            ; 004bbf0b
    LEA EAX,[ESP + 0x450]               ; 004bbf0d
    PUSH EAX                            ; 004bbf14
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bbf15
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbf1a
    ADD ESP,0x480                       ; 004bbf1d
    POP EBP                             ; 004bbf23
    POP EDI                             ; 004bbf24
    POP ESI                             ; 004bbf25
    POP EBX                             ; 004bbf26
    RET                                 ; 004bbf27
    PUSH EBX                            ; 004bbf28
        ;   Label: LAB_004bbf28
    MOV EDI,dword ptr [0x006138e0]      ; 004bbf29 | g_CEditorToolsPtr
    PUSH EDI                            ; 004bbf2f
    CALL shape_edittool.cpp_FUN_0047be40 ; 004bbf30
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 004bbf35
    PUSH 0x0                            ; 004bbf38
    LEA EAX,[ESP + 0x478]               ; 004bbf3a
    PUSH EAX                            ; 004bbf41
    CALL support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 ; 004bbf42
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; COutStreamFile * support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10(COutStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbf47
    PUSH 0x0                            ; 004bbf4a
    LEA EAX,[ESP + 0x450]               ; 004bbf4c
    PUSH EAX                            ; 004bbf53
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004bbf54
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bbf59
    ADD ESP,0x480                       ; 004bbf5c
    POP EBP                             ; 004bbf62
    POP EDI                             ; 004bbf63
    POP ESI                             ; 004bbf64
    POP EBX                             ; 004bbf65
    RET                                 ; 004bbf66

