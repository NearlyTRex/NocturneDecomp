; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_FUN_0057bda0(CWeather *param_1)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004bf4b0 at 004bf87e
;
; Referenced Globals:
;   undefined4 s_noLightningFlash_005d78f2+1
;   TerminatedCString s_noLightningFlash_005d7904
;   TerminatedCString s_rain_wav_5_005d7915
;   TerminatedCString s_rain_wav_1_005d7923
;   undefined4 DAT_005d7933
;   undefined4 DAT_005d793b
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_006045f8
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CDemonCameraInstance.corona_blend_factor
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_fire.cpp_FUN_004a3f20
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   core_weather.cpp_CWeather_createThunder_FUN_0057c840
;   core_weather.cpp_FUN_0057c2e0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bda0
        ;   Label: core_weather.cpp_FUN_0057bda0
    PUSH ESI                            ; 0057bda1
    PUSH EDI                            ; 0057bda2
    PUSH EBP                            ; 0057bda3
    MOV EBP,ESP                         ; 0057bda4
    SUB ESP,0x48                        ; 0057bda6
    AND ESP,0xfffffff8                  ; 0057bda9
    MOV EAX,[0x005fe9dc]                ; 0057bdac | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 0057bdb1 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x28],EAX      ; 0057bdb7
    MOV dword ptr [ESP + 0x38],EAX      ; 0057bdbb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bdbf
    CMP dword ptr [EAX + 0x24],0x0      ; 0057bdc2
    JNZ 0x0057c098                      ; 0057bdc6
        ;   XREF to: 0057c098 (CONDITIONAL_JUMP)  ; LAB_0057c098
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bdcc
        ;   Label: LAB_0057bdcc
    MOV EBX,dword ptr [EAX]             ; 0057bdcf
    CMP EBX,0x1                         ; 0057bdd1
    JZ 0x0057bdea                       ; 0057bdd4
        ;   XREF to: 0057bdea (CONDITIONAL_JUMP)  ; LAB_0057bdea
    CMP EBX,0x5                         ; 0057bdd6
    JZ 0x0057bdea                       ; 0057bdd9
        ;   XREF to: 0057bdea (CONDITIONAL_JUMP)  ; LAB_0057bdea
    MOV EDI,dword ptr [0x02d20258]      ; 0057bddb | DAT_02d20258
    PUSH EDI                            ; 0057bde1
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0057bde2
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057bde7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bdea
        ;   Label: LAB_0057bdea
    CMP dword ptr [EAX],0x0             ; 0057bded
    JZ 0x0057c091                       ; 0057bdf0
        ;   XREF to: 0057c091 (CONDITIONAL_JUMP)  ; LAB_0057c091
    XOR ECX,ECX                         ; 0057bdf6
    MOV EBX,dword ptr [EAX + 0x38]      ; 0057bdf8
    MOV dword ptr [ESP + 0x30],ECX      ; 0057bdfb
    TEST EBX,EBX                        ; 0057bdff
    JLE 0x0057c014                      ; 0057be01
        ;   XREF to: 0057c014 (CONDITIONAL_JUMP)  ; LAB_0057c014
    MOV EAX,0x2d0c208                   ; 0057be07
    MOV EDX,0x2d17d88                   ; 0057be0c
    MOV dword ptr [ESP + 0x34],ECX      ; 0057be11
    XOR EBX,EBX                         ; 0057be15
    MOV dword ptr [ESP + 0x3c],EAX      ; 0057be17 | DAT_02d0c208
    MOV dword ptr [ESP + 0x40],EDX      ; 0057be1b | DAT_02d17d88
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057be1f
        ;   Label: LAB_0057be1f
    XOR DL,DL                           ; 0057be23
    MOV byte ptr [EAX + 0x2d1fa88],DL   ; 0057be25
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057be2b
    FLD float ptr [EAX + 0x4]           ; 0057be2e
    FMUL float ptr [ESP + 0x38]         ; 0057be31
    FSUBR float ptr [EBX + 0x2d0c20c]   ; 0057be35 | DAT_02d0c20c | DAT_02d0c218
    FSTP float ptr [EBX + 0x2d0c20c]    ; 0057be3b | DAT_02d0c20c | DAT_02d0c218
    MOV ESI,dword ptr [EAX]             ; 0057be41
    CMP ESI,0x2                         ; 0057be43
    JNZ 0x0057c143                      ; 0057be46
        ;   XREF to: 0057c143 (CONDITIONAL_JUMP)  ; LAB_0057c143
    PUSH 0x40a00000                     ; 0057be4c
        ;   Label: LAB_0057be4c
    PUSH 0xc0a00000                     ; 0057be51
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057be56
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057be5b
    FLD float ptr [ESP + 0x4c]          ; 0057be5f
    ADD ESP,0x8                         ; 0057be63
    FMUL float ptr [ESP + 0x38]         ; 0057be66
    PUSH 0x40a00000                     ; 0057be6a
    FADD float ptr [EBX + 0x2d17d88]    ; 0057be6f
    PUSH 0xc0a00000                     ; 0057be75
    FSTP float ptr [EBX + 0x2d17d88]    ; 0057be7a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057be80
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057be85
    FLD float ptr [ESP + 0x4c]          ; 0057be89
    ADD ESP,0x8                         ; 0057be8d
    FMUL float ptr [ESP + 0x38]         ; 0057be90
    FADD float ptr [EBX + 0x2d17d90]    ; 0057be94
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057be9a
    FSTP float ptr [EBX + 0x2d17d90]    ; 0057be9e
    FLD float ptr [EAX]                 ; 0057bea4 | DAT_02d17d88
    FMUL float ptr [ESP + 0x38]         ; 0057bea6
    FLD float ptr [EAX + 0x4]           ; 0057beaa | DAT_02d17d8c
    FMUL float ptr [ESP + 0x38]         ; 0057bead
    FLD float ptr [EAX + 0x8]           ; 0057beb1 | DAT_02d17d90
    FMUL float ptr [ESP + 0x38]         ; 0057beb4
    LEA EDI,[ESP + 0x4]                 ; 0057beb8
    LEA ESI,[ESP + 0x1c]                ; 0057bebc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057bec0
    FXCH ST2                            ; 0057bec4
    FSTP float ptr [ESP + 0x1c]         ; 0057bec6
    FSTP float ptr [ESP + 0x20]         ; 0057beca
    FSTP float ptr [ESP + 0x24]         ; 0057bece
    MOVSD ES:EDI,ESI                    ; 0057bed2
    MOVSD ES:EDI,ESI                    ; 0057bed3
    MOVSD ES:EDI,ESI                    ; 0057bed4
    FLD float ptr [EAX]                 ; 0057bed5 | DAT_02d0c208
    FLD float ptr [EAX + 0x4]           ; 0057bed7 | DAT_02d0c20c
    FLD float ptr [EAX + 0x8]           ; 0057beda | DAT_02d0c210
    FXCH ST2                            ; 0057bedd
    FADD float ptr [ESP + 0x4]          ; 0057bedf
    FXCH                                ; 0057bee3
    FADD float ptr [ESP + 0x8]          ; 0057bee5
    FXCH ST2                            ; 0057bee9
    FADD float ptr [ESP + 0xc]          ; 0057beeb
    FXCH                                ; 0057beef
    FSTP float ptr [EAX]                ; 0057bef1 | DAT_02d0c208
    FXCH                                ; 0057bef3
    FSTP float ptr [EAX + 0x4]          ; 0057bef5 | DAT_02d0c20c
    FSTP float ptr [EAX + 0x8]          ; 0057bef8 | DAT_02d0c210
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057befb
        ;   Label: LAB_0057befb
    FLD float ptr [EBX + 0x2d0c20c]     ; 0057beff | DAT_02d0c20c | DAT_02d0c218
    FCOMP float ptr [EAX + 0x2d1db48]   ; 0057bf05
    FNSTSW AX                           ; 0057bf0b
    SAHF                                ; 0057bf0d
    JNC 0x0057bfd9                      ; 0057bf0e
        ;   XREF to: 0057bfd9 (CONDITIONAL_JUMP)  ; LAB_0057bfd9
    MOV EAX,0x2d0c208                   ; 0057bf14
    MOV EDX,0x2d11fc8                   ; 0057bf19
    ADD EAX,EBX                         ; 0057bf1e
    ADD EDX,EBX                         ; 0057bf20
    CMP EAX,EDX                         ; 0057bf22
    JZ 0x0057bf36                       ; 0057bf24
        ;   XREF to: 0057bf36 (CONDITIONAL_JUMP)  ; LAB_0057bf36
    MOV ECX,dword ptr [EDX]             ; 0057bf26
    MOV dword ptr [EAX],ECX             ; 0057bf28 | DAT_02d0c208 | DAT_02d0c214
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057bf2a
    MOV dword ptr [EAX + 0x4],ECX       ; 0057bf2d | DAT_02d0c20c | DAT_02d0c218
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057bf30
    MOV dword ptr [EAX + 0x8],ECX       ; 0057bf33 | DAT_02d0c210
    MOV ECX,dword ptr [ESP + 0x40]      ; 0057bf36
        ;   Label: LAB_0057bf36
    CMP ECX,0x2cfd900                   ; 0057bf3a
    JZ 0x0057bf59                       ; 0057bf40
        ;   XREF to: 0057bf59 (CONDITIONAL_JUMP)  ; LAB_0057bf59
    MOV EAX,[0x02cfd900]                ; 0057bf42 | DAT_02cfd900
    MOV dword ptr [ECX],EAX             ; 0057bf47 | DAT_02d17d88 | DAT_02d17d94
    MOV EAX,[0x02cfd904]                ; 0057bf49 | DAT_02cfd904
    MOV dword ptr [ECX + 0x4],EAX       ; 0057bf4e | DAT_02d17d8c | DAT_02d17d98
    MOV EAX,[0x02cfd908]                ; 0057bf51 | DAT_02cfd908
    MOV dword ptr [ECX + 0x8],EAX       ; 0057bf56 | DAT_02d17d90
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bf59
        ;   Label: LAB_0057bf59
    MOV ESI,dword ptr [EAX]             ; 0057bf5c
    CMP ESI,0x1                         ; 0057bf5e
    JNZ 0x0057c15a                      ; 0057bf61
        ;   XREF to: 0057c15a (CONDITIONAL_JUMP)  ; LAB_0057c15a
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057bf67
        ;   Label: LAB_0057bf67
    LEA EDI,[ESP + 0x10]                ; 0057bf6b
    LEA ESI,[EBX + 0x2d0c208]           ; 0057bf6f
    MOV EAX,dword ptr [EAX + 0x2d1db48] ; 0057bf75
    MOVSD ES:EDI,ESI                    ; 0057bf7b | DAT_02d0c208 | DAT_02d0c214
    MOVSD ES:EDI,ESI                    ; 0057bf7c | DAT_02d0c20c | DAT_02d0c218
    MOVSD ES:EDI,ESI                    ; 0057bf7d | DAT_02d0c210 | DAT_02d0c21c
    PUSH 0x0                            ; 0057bf7e
    MOV dword ptr [ESP + 0x18],EAX      ; 0057bf80
    LEA EAX,[ESP + 0x14]                ; 0057bf84
    PUSH EAX                            ; 0057bf88
    MOV EAX,[0x005fc5a0]                ; 0057bf89 | DAT_005fc5a0
    PUSH EAX                            ; 0057bf8e
    CALL core_fire.cpp_FUN_004a3f20     ; 0057bf8f
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3f20()
    ADD ESP,0xc                         ; 0057bf94
    PUSH 0x0                            ; 0057bf97
    LEA EAX,[ESP + 0x14]                ; 0057bf99
    PUSH EAX                            ; 0057bf9d
    MOV EDX,dword ptr [0x005fc5a0]      ; 0057bf9e | DAT_005fc5a0
    PUSH EDX                            ; 0057bfa4
    CALL core_fire.cpp_FUN_004a3f20     ; 0057bfa5
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3f20()
    ADD ESP,0xc                         ; 0057bfaa
    PUSH 0x0                            ; 0057bfad
    LEA EAX,[ESP + 0x14]                ; 0057bfaf
    PUSH EAX                            ; 0057bfb3
    MOV ECX,dword ptr [0x005fc5a0]      ; 0057bfb4 | DAT_005fc5a0
    PUSH ECX                            ; 0057bfba
    CALL core_fire.cpp_FUN_004a3f20     ; 0057bfbb
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3f20()
    ADD ESP,0xc                         ; 0057bfc0
    PUSH 0x0                            ; 0057bfc3
    LEA EAX,[ESP + 0x14]                ; 0057bfc5
    PUSH EAX                            ; 0057bfc9
    MOV ESI,dword ptr [0x005fc5a0]      ; 0057bfca | DAT_005fc5a0
    PUSH ESI                            ; 0057bfd0
    CALL core_fire.cpp_FUN_004a3f20     ; 0057bfd1
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3f20()
    ADD ESP,0xc                         ; 0057bfd6
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0057bfd9
        ;   Label: LAB_0057bfd9
    MOV EDI,dword ptr [ESP + 0x40]      ; 0057bfdd
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057bfe1
    MOV EDX,dword ptr [ESP + 0x30]      ; 0057bfe5
    ADD EBX,0xc                         ; 0057bfe9
    ADD ESI,0xc                         ; 0057bfec
    ADD EDI,0xc                         ; 0057bfef
    ADD EAX,0x4                         ; 0057bff2
    INC EDX                             ; 0057bff5
    MOV dword ptr [ESP + 0x34],EAX      ; 0057bff6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057bffa
    MOV dword ptr [ESP + 0x3c],ESI      ; 0057bffd | DAT_02d0c214
    MOV dword ptr [ESP + 0x40],EDI      ; 0057c001
    MOV ECX,dword ptr [EAX + 0x38]      ; 0057c005
    MOV dword ptr [ESP + 0x30],EDX      ; 0057c008
    CMP EDX,ECX                         ; 0057c00c
    JL 0x0057be1f                       ; 0057c00e
        ;   XREF to: 0057be1f (CONDITIONAL_JUMP)  ; LAB_0057be1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c014
        ;   Label: LAB_0057c014
    MOV EBX,dword ptr [EAX]             ; 0057c017
    CMP EBX,0x1                         ; 0057c019
    JNZ 0x0057c168                      ; 0057c01c
        ;   XREF to: 0057c168 (CONDITIONAL_JUMP)  ; LAB_0057c168
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c022
        ;   Label: LAB_0057c022
    FLD float ptr [EAX + 0x20]          ; 0057c025
    FSUB float ptr [ESP + 0x38]         ; 0057c028
    FST float ptr [EAX + 0x20]          ; 0057c02c
    FLDZ                                ; 0057c02f
    FCOMPP                              ; 0057c031
    FNSTSW AX                           ; 0057c033
    SAHF                                ; 0057c035
    JBE 0x0057c1aa                      ; 0057c036
        ;   XREF to: 0057c1aa (CONDITIONAL_JUMP)  ; LAB_0057c1aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c03c
    CMP dword ptr [EAX],0x5             ; 0057c03f
    JNZ 0x0057c178                      ; 0057c042
        ;   XREF to: 0057c178 (CONDITIONAL_JUMP)  ; LAB_0057c178
    PUSH 0x1                            ; 0057c048
    PUSH 0x3dcccccd                     ; 0057c04a
    PUSH EAX                            ; 0057c04f
    CALL core_weather.cpp_FUN_0057c2e0  ; 0057c050
        ;   XREF to: 0057c2e0 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057c2e0()
        ;   Label: LAB_0057c050
    ADD ESP,0xc                         ; 0057c055
    MOV EDI,dword ptr [0x02d20258]      ; 0057c058 | DAT_02d20258
        ;   Label: LAB_0057c058
    PUSH EDI                            ; 0057c05e
    CALL sound_sndmain.cpp_FUN_00556700 ; 0057c05f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0057c064
    TEST EAX,EAX                        ; 0057c067
    JNZ 0x0057c091                      ; 0057c069
        ;   XREF to: 0057c091 (CONDITIONAL_JUMP)  ; LAB_0057c091
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c06b
    CMP dword ptr [EAX],0x5             ; 0057c06e
    JNZ 0x0057c29b                      ; 0057c071
        ;   XREF to: 0057c29b (CONDITIONAL_JUMP)  ; LAB_0057c29b
    PUSH 0x5d7915                       ; 0057c077 | = "rain.wav @ .5"
    PUSH EAX                            ; 0057c07c
    MOV EDI,dword ptr [0x006045f8]      ; 0057c07d | DAT_006045f8
    PUSH EDI                            ; 0057c083
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0057c084
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0057c089
    MOV [0x02d20258],EAX                ; 0057c08c | DAT_02d20258
    MOV ESP,EBP                         ; 0057c091
        ;   Label: LAB_0057c091
    POP EBP                             ; 0057c093
    POP EDI                             ; 0057c094
    POP ESI                             ; 0057c095
    POP EBX                             ; 0057c096
    RET                                 ; 0057c097
    FLD float ptr [EAX + 0x28]          ; 0057c098
        ;   Label: LAB_0057c098
    FSUB float ptr [ESP + 0x28]         ; 0057c09b
    FST float ptr [EAX + 0x28]          ; 0057c09f
    FLDZ                                ; 0057c0a2
    FCOMPP                              ; 0057c0a4
    FNSTSW AX                           ; 0057c0a6
    SAHF                                ; 0057c0a8
    JA 0x0057c11a                       ; 0057c0a9
        ;   XREF to: 0057c11a (CONDITIONAL_JUMP)  ; LAB_0057c11a
    PUSH 0x5d78f3                       ; 0057c0ab | s_noLightningFlash_005d78f2+1
    MOV ECX,dword ptr [0x005fba60]      ; 0057c0b0 | DAT_005fba60
    PUSH ECX                            ; 0057c0b6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0057c0b7
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057c0bc
    TEST EAX,EAX                        ; 0057c0bf
    JNZ 0x0057c11a                      ; 0057c0c1
        ;   XREF to: 0057c11a (CONDITIONAL_JUMP)  ; LAB_0057c11a
    MOV EAX,[0x0203a134]                ; 0057c0c3 | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [ESP + 0x44],EAX      ; 0057c0c8
    FILD dword ptr [ESP + 0x44]         ; 0057c0cc
    FMUL double ptr [0x005d7933]        ; 0057c0d0 | DAT_005d7933
    FSUB float ptr [ESP + 0x28]         ; 0057c0d6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c0da
    FST float ptr [ESP + 0x2c]          ; 0057c0dd
    FCOMP float ptr [EAX + 0x30]        ; 0057c0e1
    FNSTSW AX                           ; 0057c0e4
    SAHF                                ; 0057c0e6
    JNC 0x0057c104                      ; 0057c0e7
        ;   XREF to: 0057c104 (CONDITIONAL_JUMP)  ; LAB_0057c104
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c0e9
    MOV EAX,dword ptr [EAX + 0x30]      ; 0057c0ec
    MOV dword ptr [ESP + 0x2c],EAX      ; 0057c0ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c0f3
    MOV dword ptr [EAX + 0x24],0x0      ; 0057c0f6
    MOV dword ptr [EAX + 0x28],0x0      ; 0057c0fd
    PUSH dword ptr [ESP + 0x2c]         ; 0057c104
        ;   Label: LAB_0057c104
    PUSH 0x2038f4c                      ; 0057c108
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 0057c10d
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057c112
    JMP 0x0057bdcc                      ; 0057c115
        ;   XREF to: 0057bdcc (UNCONDITIONAL_JUMP)  ; LAB_0057bdcc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c11a
        ;   Label: LAB_0057c11a
    PUSH dword ptr [EAX + 0x30]         ; 0057c11d
    PUSH 0x2038f4c                      ; 0057c120
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 0057c125
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057c12a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c12d
    MOV dword ptr [EAX + 0x24],0x0      ; 0057c130
    MOV dword ptr [EAX + 0x28],0x0      ; 0057c137
    JMP 0x0057bdcc                      ; 0057c13e
        ;   XREF to: 0057bdcc (UNCONDITIONAL_JUMP)  ; LAB_0057bdcc
    CMP ESI,0x3                         ; 0057c143
        ;   Label: LAB_0057c143
    JZ 0x0057be4c                       ; 0057c146
        ;   XREF to: 0057be4c (CONDITIONAL_JUMP)  ; LAB_0057be4c
    CMP ESI,0x4                         ; 0057c14c
    JZ 0x0057be4c                       ; 0057c14f
        ;   XREF to: 0057be4c (CONDITIONAL_JUMP)  ; LAB_0057be4c
    JMP 0x0057befb                      ; 0057c155
        ;   XREF to: 0057befb (UNCONDITIONAL_JUMP)  ; LAB_0057befb
    CMP ESI,0x5                         ; 0057c15a
        ;   Label: LAB_0057c15a
    JZ 0x0057bf67                       ; 0057c15d
        ;   XREF to: 0057bf67 (CONDITIONAL_JUMP)  ; LAB_0057bf67
    JMP 0x0057bfd9                      ; 0057c163
        ;   XREF to: 0057bfd9 (UNCONDITIONAL_JUMP)  ; LAB_0057bfd9
    CMP EBX,0x5                         ; 0057c168
        ;   Label: LAB_0057c168
    JZ 0x0057c022                       ; 0057c16b
        ;   XREF to: 0057c022 (CONDITIONAL_JUMP)  ; LAB_0057c022
    MOV ESP,EBP                         ; 0057c171
    POP EBP                             ; 0057c173
    POP EDI                             ; 0057c174
    POP ESI                             ; 0057c175
    POP EBX                             ; 0057c176
    RET                                 ; 0057c177
    PUSH 0x3ecccccd                     ; 0057c178
        ;   Label: LAB_0057c178
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0057c17d
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0057c182
    TEST EAX,EAX                        ; 0057c185
    JZ 0x0057c199                       ; 0057c187
        ;   XREF to: 0057c199 (CONDITIONAL_JUMP)  ; LAB_0057c199
    PUSH 0x1                            ; 0057c189
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057c18b
    PUSH 0x3dcccccd                     ; 0057c18e
    PUSH EBX                            ; 0057c193
    JMP 0x0057c050                      ; 0057c194
        ;   XREF to: 0057c050 (UNCONDITIONAL_JUMP)  ; LAB_0057c050
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c199
        ;   Label: LAB_0057c199
    PUSH ECX                            ; 0057c19c
    CALL core_weather.cpp_CWeather_createThunder_FUN_0057c840 ; 0057c19d
        ;   XREF to: 0057c840 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createThunder_FUN_0057c840(CWeather * this_ptr)
    ADD ESP,0x4                         ; 0057c1a2
    JMP 0x0057c058                      ; 0057c1a5
        ;   XREF to: 0057c058 (UNCONDITIONAL_JUMP)  ; LAB_0057c058
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c1aa
        ;   Label: LAB_0057c1aa
    FLD float ptr [EAX + 0x2c]          ; 0057c1ad
    FSUB float ptr [ESP + 0x38]         ; 0057c1b0
    FST float ptr [EAX + 0x2c]          ; 0057c1b4
    FLDZ                                ; 0057c1b7
    FCOMPP                              ; 0057c1b9
    FNSTSW AX                           ; 0057c1bb
    SAHF                                ; 0057c1bd
    JBE 0x0057c058                      ; 0057c1be
        ;   XREF to: 0057c058 (CONDITIONAL_JUMP)  ; LAB_0057c058
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c1c4
    PUSH dword ptr [EAX + 0x34]         ; 0057c1c7
    PUSH 0x3dcccccd                     ; 0057c1ca
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c1cf
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057c1d4
    FLD float ptr [ESP + 0x4c]          ; 0057c1d8
    ADD ESP,0x8                         ; 0057c1dc
    PUSH 0x5d7904                       ; 0057c1df | = "noLightningFlash"
    MOV EDI,dword ptr [0x005fba60]      ; 0057c1e4 | DAT_005fba60
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c1ea
    PUSH EDI                            ; 0057c1ed
    FSTP float ptr [EAX + 0x2c]         ; 0057c1ee
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0057c1f1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057c1f6
    TEST EAX,EAX                        ; 0057c1f9
    JNZ 0x0057c058                      ; 0057c1fb
        ;   XREF to: 0057c058 (CONDITIONAL_JUMP)  ; LAB_0057c058
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c201
    MOV dword ptr [EAX + 0x24],0x1      ; 0057c204
    MOV EAX,[0x0203a134]                ; 0057c20b | g_CDemonCameraInstance.corona_blend_factor
    MOV dword ptr [ESP + 0x44],EAX      ; 0057c210
    FILD dword ptr [ESP + 0x44]         ; 0057c214
    FMUL double ptr [0x005d7933]        ; 0057c218 | DAT_005d7933
    PUSH 0x3e99999a                     ; 0057c21e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057c223
    FSTP float ptr [ESP + 0x4]          ; 0057c226
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057c22a
    PUSH 0x3dcccccd                     ; 0057c22e
    MOV dword ptr [EDX + 0x30],EAX      ; 0057c233
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c236
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057c23b
    FLD float ptr [ESP + 0x4c]          ; 0057c23f
    ADD ESP,0x8                         ; 0057c243
    FADD float ptr [ESP]                ; 0057c246
    FST float ptr [ESP]                 ; 0057c249
    FLD1                                ; 0057c24c
    FCOMPP                              ; 0057c24e
    FNSTSW AX                           ; 0057c250
    SAHF                                ; 0057c252
    JNC 0x0057c25c                      ; 0057c253
        ;   XREF to: 0057c25c (CONDITIONAL_JUMP)  ; LAB_0057c25c
    MOV dword ptr [ESP],0x3f800000      ; 0057c255
    FLD float ptr [ESP]                 ; 0057c25c
        ;   Label: LAB_0057c25c
    FMUL double ptr [0x005d793b]        ; 0057c25f | DAT_005d793b
    SUB ESP,0x4                         ; 0057c265
    FSTP float ptr [ESP]                ; 0057c268
    PUSH 0x3c23d70a                     ; 0057c26b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c270
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x4c],EAX      ; 0057c275
    FLD float ptr [ESP + 0x4c]          ; 0057c279
    ADD ESP,0x8                         ; 0057c27d
    PUSH dword ptr [ESP]                ; 0057c280
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057c283
    PUSH 0x2038f4c                      ; 0057c286
    FSTP float ptr [EAX + 0x28]         ; 0057c28b
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 0057c28e
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057c293
    JMP 0x0057c058                      ; 0057c296
        ;   XREF to: 0057c058 (UNCONDITIONAL_JUMP)  ; LAB_0057c058
    PUSH 0x5d7923                       ; 0057c29b | = "rain.wav @ .1"
        ;   Label: LAB_0057c29b
    PUSH EAX                            ; 0057c2a0
    MOV EBX,dword ptr [0x006045f8]      ; 0057c2a1 | DAT_006045f8
    PUSH EBX                            ; 0057c2a7
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0057c2a8
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0057c2ad
    MOV [0x02d20258],EAX                ; 0057c2b0 | DAT_02d20258
    MOV ESP,EBP                         ; 0057c2b5
    POP EBP                             ; 0057c2b7
    POP EDI                             ; 0057c2b8
    POP ESI                             ; 0057c2b9
    POP EBX                             ; 0057c2ba
    RET                                 ; 0057c2bb

