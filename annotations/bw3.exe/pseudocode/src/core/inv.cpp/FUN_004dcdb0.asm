; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004dcdb0(CInventory *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519e60
;
; Referenced Globals:
;   TerminatedCString s_CTVBat_005c5ea4
;   TerminatedCString s_CWhitewolf_005c5eab
;   TerminatedCString s_voodoo4_wav_005c5eb6
;   TerminatedCString s_voodoo3_wav_005c5ec2
;   TerminatedCString s_voodoo2_wav_005c5ece
;   TerminatedCString s_voodoo1_wav_005c5eda
;   undefined4 DAT_005c65df
;   undefined4 DAT_005c65e7
;   undefined4 DAT_005c65ef
;   undefined4 DAT_005c65f7
;   CFieldNotes* g_CFieldNotesPtr = 01d1a05c
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 DAT_007dffb4
;   ... and 11 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
;   core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcdb0
        ;   Label: core_inv.cpp_FUN_004dcdb0
    PUSH ESI                            ; 004dcdb1
    PUSH EDI                            ; 004dcdb2
    PUSH EBP                            ; 004dcdb3
    MOV EBP,ESP                         ; 004dcdb4
    SUB ESP,0x38                        ; 004dcdb6
    AND ESP,0xfffffff8                  ; 004dcdb9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dcdbc
    MOV EDX,dword ptr [EBX + 0x338]     ; 004dcdbf
    TEST EDX,EDX                        ; 004dcdc5
    JNZ 0x004dcf30                      ; 004dcdc7
        ;   XREF to: 004dcf30 (CONDITIONAL_JUMP)  ; LAB_004dcf30
    MOV EAX,[0x005fe9dc]                ; 004dcdcd | g_CGamePtr
        ;   Label: LAB_004dcdcd
    CMP dword ptr [EAX + 0x264],0x0     ; 004dcdd2 | g_CGameInstance.goggles_active
    JZ 0x004dcfd0                       ; 004dcdd9
        ;   XREF to: 004dcfd0 (CONDITIONAL_JUMP)  ; LAB_004dcfd0
    MOV dword ptr [EBX + 0x344],0x0     ; 004dcddf
        ;   Label: LAB_004dcddf
    MOV dword ptr [EBX + 0x34c],0x0     ; 004dcde9
    MOV dword ptr [EBX + 0x350],0x0     ; 004dcdf3
    MOV dword ptr [EBX + 0x340],0x0     ; 004dcdfd
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dce07 | g_CGamePtr
        ;   Label: LAB_004dce07
    LEA EAX,[EBX + 0x340]               ; 004dce0d
    FLD float ptr [EDX + 0x314]         ; 004dce13 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce19
    FSTP float ptr [EAX]                ; 004dce1b
    FLD float ptr [EBX + 0x340]         ; 004dce1d
    FLDZ                                ; 004dce23
    FCOMPP                              ; 004dce25
    FNSTSW AX                           ; 004dce27
    SAHF                                ; 004dce29
    JC 0x004dce36                       ; 004dce2a
        ;   XREF to: 004dce36 (CONDITIONAL_JUMP)  ; LAB_004dce36
    MOV dword ptr [EBX + 0x340],0x0     ; 004dce2c
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dce36 | g_CGamePtr
        ;   Label: LAB_004dce36
    LEA EAX,[EBX + 0x344]               ; 004dce3c
    FLD float ptr [EDX + 0x314]         ; 004dce42 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce48
    FSTP float ptr [EAX]                ; 004dce4a
    FLD float ptr [EBX + 0x344]         ; 004dce4c
    FLDZ                                ; 004dce52
    FCOMPP                              ; 004dce54
    FNSTSW AX                           ; 004dce56
    SAHF                                ; 004dce58
    JC 0x004dce65                       ; 004dce59
        ;   XREF to: 004dce65 (CONDITIONAL_JUMP)  ; LAB_004dce65
    MOV dword ptr [EBX + 0x344],0x0     ; 004dce5b
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dce65 | g_CGamePtr
        ;   Label: LAB_004dce65
    LEA EAX,[EBX + 0x348]               ; 004dce6b
    FLD float ptr [EDX + 0x314]         ; 004dce71 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce77
    FSTP float ptr [EAX]                ; 004dce79
    FLD float ptr [EBX + 0x348]         ; 004dce7b
    FLDZ                                ; 004dce81
    FCOMPP                              ; 004dce83
    FNSTSW AX                           ; 004dce85
    SAHF                                ; 004dce87
    JC 0x004dce94                       ; 004dce88
        ;   XREF to: 004dce94 (CONDITIONAL_JUMP)  ; LAB_004dce94
    MOV dword ptr [EBX + 0x348],0x0     ; 004dce8a
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dce94 | g_CGamePtr
        ;   Label: LAB_004dce94
    LEA EAX,[EBX + 0x34c]               ; 004dce9a
    FLD float ptr [EDX + 0x314]         ; 004dcea0 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dcea6
    FSTP float ptr [EAX]                ; 004dcea8
    FLD float ptr [EBX + 0x34c]         ; 004dceaa
    FLDZ                                ; 004dceb0
    FCOMPP                              ; 004dceb2
    FNSTSW AX                           ; 004dceb4
    SAHF                                ; 004dceb6
    JC 0x004dceca                       ; 004dceb7
        ;   XREF to: 004dceca (CONDITIONAL_JUMP)  ; LAB_004dceca
    MOV byte ptr [EBX + 0x354],0x0      ; 004dceb9
    MOV dword ptr [EBX + 0x34c],0x0     ; 004dcec0
    MOV EDX,dword ptr [0x005fe9dc]      ; 004dceca | g_CGamePtr
        ;   Label: LAB_004dceca
    LEA EAX,[EBX + 0x350]               ; 004dced0
    FLD float ptr [EDX + 0x314]         ; 004dced6 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dcedc
    FSTP float ptr [EAX]                ; 004dcede
    FLD float ptr [EBX + 0x350]         ; 004dcee0
    FLDZ                                ; 004dcee6
    FCOMPP                              ; 004dcee8
    FNSTSW AX                           ; 004dceea
    SAHF                                ; 004dceec
    JBE 0x004dcef9                      ; 004dceed
        ;   XREF to: 004dcef9 (CONDITIONAL_JUMP)  ; LAB_004dcef9
    MOV dword ptr [EBX + 0x350],0x0     ; 004dceef
    CMP dword ptr [EBX + 0xc],0x0       ; 004dcef9
        ;   Label: LAB_004dcef9
    JZ 0x004dcf29                       ; 004dcefd
        ;   XREF to: 004dcf29 (CONDITIONAL_JUMP)  ; LAB_004dcf29
    MOV EAX,[0x005fe9dc]                ; 004dceff | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 004dcf04 | g_CGameInstance.delta_time_float
    FSUBR float ptr [0x01d5be80]        ; 004dcf0a | DAT_01d5be80
    FLDZ                                ; 004dcf10
    FXCH                                ; 004dcf12
    FSTP float ptr [0x01d5be80]         ; 004dcf14 | DAT_01d5be80
    FCOMP float ptr [0x01d5be80]        ; 004dcf1a | DAT_01d5be80
    FNSTSW AX                           ; 004dcf20
    SAHF                                ; 004dcf22
    JNC 0x004dcfff                      ; 004dcf23
        ;   XREF to: 004dcfff (CONDITIONAL_JUMP)  ; LAB_004dcfff
    MOV ESP,EBP                         ; 004dcf29
        ;   Label: LAB_004dcf29
    POP EBP                             ; 004dcf2b
    POP EDI                             ; 004dcf2c
    POP ESI                             ; 004dcf2d
    POP EBX                             ; 004dcf2e
    RET                                 ; 004dcf2f
    MOV ECX,dword ptr [0x01d5ba70]      ; 004dcf30 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_004dcf30
    PUSH ECX                            ; 004dcf36
    MOV ESI,dword ptr [EDX + 0x304]     ; 004dcf37
    PUSH ESI                            ; 004dcf3d
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dcf3e
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004dcf43
    MOV ESI,EAX                         ; 004dcf46
    TEST EAX,EAX                        ; 004dcf48
    JZ 0x004dcdcd                       ; 004dcf4a
        ;   XREF to: 004dcdcd (CONDITIONAL_JUMP)  ; LAB_004dcdcd
    MOV EDX,dword ptr [EBX + 0x338]     ; 004dcf50
    CMP dword ptr [EDX + 0x56c],0xa     ; 004dcf56
    JNZ 0x004dcf6d                      ; 004dcf5d
        ;   XREF to: 004dcf6d (CONDITIONAL_JUMP)  ; LAB_004dcf6d
    MOV EDX,dword ptr [EBX + 0x46c]     ; 004dcf5f
    CMP EDX,dword ptr [EAX + 0x20b80]   ; 004dcf65
    JNZ 0x004dcf92                      ; 004dcf6b
        ;   XREF to: 004dcf92 (CONDITIONAL_JUMP)  ; LAB_004dcf92
    MOV EAX,dword ptr [EBX + 0x338]     ; 004dcf6d
        ;   Label: LAB_004dcf6d
    CMP dword ptr [EAX + 0x56c],0xb     ; 004dcf73
    JNZ 0x004dcdcd                      ; 004dcf7a
        ;   XREF to: 004dcdcd (CONDITIONAL_JUMP)  ; LAB_004dcdcd
    MOV EDI,dword ptr [EBX + 0x468]     ; 004dcf80
    CMP EDI,dword ptr [ESI + 0x20b84]   ; 004dcf86
    JZ 0x004dcdcd                       ; 004dcf8c
        ;   XREF to: 004dcdcd (CONDITIONAL_JUMP)  ; LAB_004dcdcd
    PUSH 0x0                            ; 004dcf92
        ;   Label: LAB_004dcf92
    PUSH EBX                            ; 004dcf94
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340 ; 004dcf95
        ;   XREF to: 004dd340 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory * this_ptr, int reset_both)
    MOV EAX,dword ptr [EBX + 0x338]     ; 004dcf9a
    MOV EDX,dword ptr [EAX + 0x56c]     ; 004dcfa0
    ADD ESP,0x8                         ; 004dcfa6
    CMP EDX,0xa                         ; 004dcfa9
    JNZ 0x004dcfbf                      ; 004dcfac
        ;   XREF to: 004dcfbf (CONDITIONAL_JUMP)  ; LAB_004dcfbf
    MOV EAX,dword ptr [ESI + 0x20b80]   ; 004dcfae
    MOV dword ptr [EBX + 0x46c],EAX     ; 004dcfb4
    JMP 0x004dcdcd                      ; 004dcfba
        ;   XREF to: 004dcdcd (UNCONDITIONAL_JUMP)  ; LAB_004dcdcd
    MOV EAX,dword ptr [ESI + 0x20b84]   ; 004dcfbf
        ;   Label: LAB_004dcfbf
    MOV dword ptr [EBX + 0x468],EAX     ; 004dcfc5
    JMP 0x004dcdcd                      ; 004dcfcb
        ;   XREF to: 004dcdcd (UNCONDITIONAL_JUMP)  ; LAB_004dcdcd
    MOV EDX,dword ptr [0x005fe4b0]      ; 004dcfd0 | g_CFieldNotesPtr
        ;   Label: LAB_004dcfd0
    CMP dword ptr [EDX + 0x40],0x0      ; 004dcfd6 | g_CFieldNotesInstance.is_displayed
    JNZ 0x004dcddf                      ; 004dcfda
        ;   XREF to: 004dcddf (CONDITIONAL_JUMP)  ; LAB_004dcddf
    CMP dword ptr [0x007dffb4],0x0      ; 004dcfe0 | DAT_007dffb4
    JNZ 0x004dcddf                      ; 004dcfe7
        ;   XREF to: 004dcddf (CONDITIONAL_JUMP)  ; LAB_004dcddf
    CMP dword ptr [EAX + 0x24c],0x0     ; 004dcfed | g_CGameInstance.letterbox_mode
    JNZ 0x004dcddf                      ; 004dcff4
        ;   XREF to: 004dcddf (CONDITIONAL_JUMP)  ; LAB_004dcddf
    JMP 0x004dce07                      ; 004dcffa
        ;   XREF to: 004dce07 (UNCONDITIONAL_JUMP)  ; LAB_004dce07
    PUSH 0x3ecccccd                     ; 004dcfff
        ;   Label: LAB_004dcfff
    PUSH 0x3dcccccd                     ; 004dd004
    MOV EBX,0xffffffff                  ; 004dd009
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004dd00e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    XOR EDI,EDI                         ; 004dd013
    XOR ESI,ESI                         ; 004dd015
    MOV dword ptr [ESP + 0x3c],EAX      ; 004dd017
    MOV dword ptr [0x01d70a20],EBX      ; 004dd01b | DAT_01d70a20
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004dd021
    MOV [0x01d5be80],EAX                ; 004dd025 | DAT_01d5be80
    ADD ESP,0x8                         ; 004dd02a
    MOV EAX,[0x00603b28]                ; 004dd02d | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_004dd02d
    CMP EDI,dword ptr [EAX + 0x14f0a8]  ; 004dd032 | g_CDemonSetInstance.character_count
    JGE 0x004dcf29                      ; 004dd038
        ;   XREF to: 004dcf29 (CONDITIONAL_JUMP)  ; LAB_004dcf29
    MOV ECX,dword ptr [0x01c5bc48]      ; 004dd03e | g_CEnemyClassInfo.name_hash
    PUSH ECX                            ; 004dd044
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f0ac] ; 004dd045
    PUSH EBX                            ; 004dd04c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004dd04d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV EBX,EAX                         ; 004dd052
    ADD ESP,0x8                         ; 004dd054
    TEST EAX,EAX                        ; 004dd057
    JNZ 0x004dd061                      ; 004dd059
        ;   XREF to: 004dd061 (CONDITIONAL_JUMP)  ; LAB_004dd061
    INC EDI                             ; 004dd05b
        ;   Label: LAB_004dd05b
    ADD ESI,0x4                         ; 004dd05c
    JMP 0x004dd02d                      ; 004dd05f
        ;   XREF to: 004dd02d (UNCONDITIONAL_JUMP)  ; LAB_004dd02d
    PUSH EBX                            ; 004dd061
        ;   Label: LAB_004dd061
    MOV EAX,dword ptr [EAX + 0x154]     ; 004dd062
    CALL dword ptr [EAX + 0x10c]        ; 004dd068
    ADD ESP,0x4                         ; 004dd06e
    TEST EAX,EAX                        ; 004dd071
    JNZ 0x004dd05b                      ; 004dd073
        ;   XREF to: 004dd05b (CONDITIONAL_JUMP)  ; LAB_004dd05b
    PUSH 0x5c5ea4                       ; 004dd075 | = "CTVBat"
    PUSH EBX                            ; 004dd07a
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dd07b
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd080
    TEST EAX,EAX                        ; 004dd083
    JNZ 0x004dd05b                      ; 004dd085
        ;   XREF to: 004dd05b (CONDITIONAL_JUMP)  ; LAB_004dd05b
    PUSH 0x5c5eab                       ; 004dd087 | = "CWhitewolf"
    PUSH EBX                            ; 004dd08c
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 004dd08d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dd092
    TEST EAX,EAX                        ; 004dd095
    JNZ 0x004dd05b                      ; 004dd097
        ;   XREF to: 004dd05b (CONDITIONAL_JUMP)  ; LAB_004dd05b
    MOV EDX,dword ptr [0x01d5ba14]      ; 004dd099 | DAT_01d5ba14
    MOV EDX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 004dd09f
    LEA EAX,[EBX + 0x20]                ; 004dd0a6
    FLD float ptr [EDX + 0x20]          ; 004dd0a9
    FSUB float ptr [EAX]                ; 004dd0ac
    FMUL ST0                            ; 004dd0ae
    FLD float ptr [EDX + 0x24]          ; 004dd0b0
    FSUB float ptr [EAX + 0x4]          ; 004dd0b3
    FMUL ST0                            ; 004dd0b6
    FLD float ptr [EDX + 0x28]          ; 004dd0b8
    FXCH                                ; 004dd0bb
    FADDP ST2,ST0                       ; 004dd0bd
    FSUB float ptr [EAX + 0x8]          ; 004dd0bf
    FMUL ST0                            ; 004dd0c2
    FADDP                               ; 004dd0c4
    FST double ptr [ESP]                ; 004dd0c6
    FCOMP double ptr [0x005c65df]       ; 004dd0c9 | DAT_005c65df
    FNSTSW AX                           ; 004dd0cf
    SAHF                                ; 004dd0d1
    JA 0x004dd05b                       ; 004dd0d2
        ;   XREF to: 004dd05b (CONDITIONAL_JUMP)  ; LAB_004dd05b
    FLD double ptr [ESP]                ; 004dd0d4
    FCOMP double ptr [0x005c65e7]       ; 004dd0d7 | DAT_005c65e7
    FNSTSW AX                           ; 004dd0dd
    SAHF                                ; 004dd0df
    JBE 0x004dd152                      ; 004dd0e0
        ;   XREF to: 004dd152 (CONDITIONAL_JUMP)  ; LAB_004dd152
    MOV ECX,0x3                         ; 004dd0e2
    MOV dword ptr [ESP + 0x30],EBX      ; 004dd0e7
    MOV EBX,0x5c5eb6                    ; 004dd0eb | = "voodoo4.wav"
    MOV dword ptr [0x01d70a20],ECX      ; 004dd0f0 | DAT_01d70a20
    MOV dword ptr [ESP + 0x14],EBX      ; 004dd0f6 | = "voodoo4.wav"
    XOR EBX,EBX                         ; 004dd0fa
    MOV EAX,dword ptr [EBX + 0x1d70a24] ; 004dd0fc
        ;   Label: LAB_004dd0fc
    PUSH EAX                            ; 004dd102
    MOV EDX,dword ptr [0x006045f8]      ; 004dd103 | DAT_006045f8
    PUSH EDX                            ; 004dd109
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 004dd10a
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004dd10f
    TEST EAX,EAX                        ; 004dd112
    JZ 0x004dd125                       ; 004dd114
        ;   XREF to: 004dd125 (CONDITIONAL_JUMP)  ; LAB_004dd125
    ADD EBX,0x4                         ; 004dd116
    CMP EBX,0x10                        ; 004dd119
    JL 0x004dd0fc                       ; 004dd11c
        ;   XREF to: 004dd0fc (CONDITIONAL_JUMP)  ; LAB_004dd0fc
    MOV ESP,EBP                         ; 004dd11e
    POP EBP                             ; 004dd120
    POP EDI                             ; 004dd121
    POP ESI                             ; 004dd122
    POP EBX                             ; 004dd123
    RET                                 ; 004dd124
    MOV ECX,dword ptr [ESP + 0x14]      ; 004dd125
        ;   Label: LAB_004dd125
    PUSH ECX                            ; 004dd129 | = "voodoo4.wav"
    PUSH EAX                            ; 004dd12a
    MOV EAX,[0x006045f8]                ; 004dd12b | DAT_006045f8
    PUSH EAX                            ; 004dd130
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004dd131
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dd136
    MOV EDX,dword ptr [ESP + 0x30]      ; 004dd139
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004dd13d
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004dd143
    INC EDI                             ; 004dd149
    ADD ESI,0x4                         ; 004dd14a
    JMP 0x004dd02d                      ; 004dd14d
        ;   XREF to: 004dd02d (UNCONDITIONAL_JUMP)  ; LAB_004dd02d
    FLD double ptr [ESP]                ; 004dd152
        ;   Label: LAB_004dd152
    FCOMP double ptr [0x005c65ef]       ; 004dd155 | DAT_005c65ef
    FNSTSW AX                           ; 004dd15b
    SAHF                                ; 004dd15d
    JBE 0x004dd1cf                      ; 004dd15e
        ;   XREF to: 004dd1cf (CONDITIONAL_JUMP)  ; LAB_004dd1cf
    MOV EDX,0x5c5ec2                    ; 004dd160 | = "voodoo3.wav"
    MOV EAX,0x2                         ; 004dd165
    MOV dword ptr [ESP + 0x24],EBX      ; 004dd16a
    MOV dword ptr [ESP + 0x1c],EDX      ; 004dd16e | = "voodoo3.wav"
    MOV [0x01d70a20],EAX                ; 004dd172 | DAT_01d70a20
    XOR EBX,EBX                         ; 004dd177
    MOV ECX,dword ptr [EBX + 0x1d70a24] ; 004dd179
        ;   Label: LAB_004dd179
    PUSH ECX                            ; 004dd17f
    MOV EAX,[0x006045f8]                ; 004dd180 | DAT_006045f8
    PUSH EAX                            ; 004dd185
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 004dd186
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004dd18b
    TEST EAX,EAX                        ; 004dd18e
    JZ 0x004dd1a1                       ; 004dd190
        ;   XREF to: 004dd1a1 (CONDITIONAL_JUMP)  ; LAB_004dd1a1
    ADD EBX,0x4                         ; 004dd192
    CMP EBX,0x10                        ; 004dd195
    JL 0x004dd179                       ; 004dd198
        ;   XREF to: 004dd179 (CONDITIONAL_JUMP)  ; LAB_004dd179
    MOV ESP,EBP                         ; 004dd19a
    POP EBP                             ; 004dd19c
    POP EDI                             ; 004dd19d
    POP ESI                             ; 004dd19e
    POP EBX                             ; 004dd19f
    RET                                 ; 004dd1a0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004dd1a1
        ;   Label: LAB_004dd1a1
    PUSH EDX                            ; 004dd1a5 | = "voodoo3.wav"
    PUSH EAX                            ; 004dd1a6
    MOV ECX,dword ptr [0x006045f8]      ; 004dd1a7 | DAT_006045f8
    PUSH ECX                            ; 004dd1ad
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004dd1ae
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dd1b3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004dd1b6
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004dd1ba
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004dd1c0
    INC EDI                             ; 004dd1c6
    ADD ESI,0x4                         ; 004dd1c7
    JMP 0x004dd02d                      ; 004dd1ca
        ;   XREF to: 004dd02d (UNCONDITIONAL_JUMP)  ; LAB_004dd02d
    FLD double ptr [ESP]                ; 004dd1cf
        ;   Label: LAB_004dd1cf
    FCOMP double ptr [0x005c65f7]       ; 004dd1d2 | DAT_005c65f7
    FNSTSW AX                           ; 004dd1d8
    SAHF                                ; 004dd1da
    JBE 0x004dd24f                      ; 004dd1db
        ;   XREF to: 004dd24f (CONDITIONAL_JUMP)  ; LAB_004dd24f
    MOV ECX,0x1                         ; 004dd1dd
    MOV dword ptr [ESP + 0x2c],EBX      ; 004dd1e2
    MOV EBX,0x5c5ece                    ; 004dd1e6 | = "voodoo2.wav"
    MOV dword ptr [0x01d70a20],ECX      ; 004dd1eb | DAT_01d70a20
    MOV dword ptr [ESP + 0x20],EBX      ; 004dd1f1 | = "voodoo2.wav"
    XOR EBX,EBX                         ; 004dd1f5
    MOV EDX,dword ptr [EBX + 0x1d70a24] ; 004dd1f7
        ;   Label: LAB_004dd1f7
    PUSH EDX                            ; 004dd1fd
    MOV ECX,dword ptr [0x006045f8]      ; 004dd1fe | DAT_006045f8
    PUSH ECX                            ; 004dd204
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 004dd205
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004dd20a
    TEST EAX,EAX                        ; 004dd20d
    JZ 0x004dd220                       ; 004dd20f
        ;   XREF to: 004dd220 (CONDITIONAL_JUMP)  ; LAB_004dd220
    ADD EBX,0x4                         ; 004dd211
    CMP EBX,0x10                        ; 004dd214
    JL 0x004dd1f7                       ; 004dd217
        ;   XREF to: 004dd1f7 (CONDITIONAL_JUMP)  ; LAB_004dd1f7
    MOV ESP,EBP                         ; 004dd219
    POP EBP                             ; 004dd21b
    POP EDI                             ; 004dd21c
    POP ESI                             ; 004dd21d
    POP EBX                             ; 004dd21e
    RET                                 ; 004dd21f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dd220
        ;   Label: LAB_004dd220
    PUSH EAX                            ; 004dd224 | = "voodoo2.wav"
    PUSH 0x0                            ; 004dd225
    MOV EDX,dword ptr [0x006045f8]      ; 004dd227 | DAT_006045f8
    PUSH EDX                            ; 004dd22d
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004dd22e
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dd233
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004dd236
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004dd23a
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004dd240
    INC EDI                             ; 004dd246
    ADD ESI,0x4                         ; 004dd247
    JMP 0x004dd02d                      ; 004dd24a
        ;   XREF to: 004dd02d (UNCONDITIONAL_JUMP)  ; LAB_004dd02d
    MOV EDX,0x5c5eda                    ; 004dd24f | = "voodoo1.wav"
        ;   Label: LAB_004dd24f
    MOV dword ptr [ESP + 0x28],EBX      ; 004dd254
    XOR EAX,EAX                         ; 004dd258
    MOV dword ptr [ESP + 0x18],EDX      ; 004dd25a | = "voodoo1.wav"
    MOV [0x01d70a20],EAX                ; 004dd25e | DAT_01d70a20
    XOR EBX,EBX                         ; 004dd263
    MOV EAX,dword ptr [EBX + 0x1d70a24] ; 004dd265
        ;   Label: LAB_004dd265
    PUSH EAX                            ; 004dd26b
    MOV EDX,dword ptr [0x006045f8]      ; 004dd26c | DAT_006045f8
    PUSH EDX                            ; 004dd272
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 004dd273
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004dd278
    TEST EAX,EAX                        ; 004dd27b
    JZ 0x004dd28e                       ; 004dd27d
        ;   XREF to: 004dd28e (CONDITIONAL_JUMP)  ; LAB_004dd28e
    ADD EBX,0x4                         ; 004dd27f
    CMP EBX,0x10                        ; 004dd282
    JL 0x004dd265                       ; 004dd285
        ;   XREF to: 004dd265 (CONDITIONAL_JUMP)  ; LAB_004dd265
    MOV ESP,EBP                         ; 004dd287
    POP EBP                             ; 004dd289
    POP EDI                             ; 004dd28a
    POP ESI                             ; 004dd28b
    POP EBX                             ; 004dd28c
    RET                                 ; 004dd28d
    MOV ECX,dword ptr [ESP + 0x18]      ; 004dd28e
        ;   Label: LAB_004dd28e
    PUSH ECX                            ; 004dd292 | = "voodoo1.wav"
    PUSH EAX                            ; 004dd293
    MOV EAX,[0x006045f8]                ; 004dd294 | DAT_006045f8
    PUSH EAX                            ; 004dd299
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 004dd29a
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004dd29f
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dd2a2
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004dd2a6
    MOV dword ptr [EBX + 0x1d70a24],EAX ; 004dd2ac
    INC EDI                             ; 004dd2b2
    ADD ESI,0x4                         ; 004dd2b3
    JMP 0x004dd02d                      ; 004dd2b6
        ;   XREF to: 004dd02d (UNCONDITIONAL_JUMP)  ; LAB_004dd02d

