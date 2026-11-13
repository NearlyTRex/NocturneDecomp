; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CToss_process_FUN_0049d090(CToss *this_ptr)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004a1760 at 004a1977
;
; Referenced Globals:
;   void* switchdataD_0049d080 = 0049d0f6
;   TerminatedCString s_wp_bindevil_wav_005c073a
;   TerminatedCString s_wp_bindevil_wav_005c074a
;   undefined4 DAT_005c0760
;   undefined4 DAT_005fc5a0
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_006045f8
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041b410
;   core_dirmat.cpp_FUN_0045b800
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0
;   core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20
;   core_fire.cpp_CFireEffect_createRing_FUN_004a3f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0
;   core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d090
        ;   Label: core_fire.cpp_CToss_process_FUN_0049d090
    PUSH ESI                            ; 0049d091
    PUSH EDI                            ; 0049d092
    PUSH EBP                            ; 0049d093
    MOV EBP,ESP                         ; 0049d094
    SUB ESP,0x74                        ; 0049d096
    AND ESP,0xfffffff8                  ; 0049d099
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d09c
    FLD float ptr [EAX + 0x3dc]         ; 0049d09f
    FLDZ                                ; 0049d0a5
    FCOMPP                              ; 0049d0a7
    FNSTSW AX                           ; 0049d0a9
    SAHF                                ; 0049d0ab
    JNC 0x0049d140                      ; 0049d0ac
        ;   XREF to: 0049d140 (CONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005fe9dc]                ; 0049d0b2 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 0049d0b7 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x6c],EAX      ; 0049d0bd
    MOV dword ptr [ESP + 0x70],EAX      ; 0049d0c1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d0c5
    FLD float ptr [EAX + 0x3dc]         ; 0049d0c8
    FSUB float ptr [ESP + 0x6c]         ; 0049d0ce
    FST float ptr [EAX + 0x3dc]         ; 0049d0d2
    FLDZ                                ; 0049d0d8
    FCOMPP                              ; 0049d0da
    FNSTSW AX                           ; 0049d0dc
    SAHF                                ; 0049d0de
    JC 0x0049d20f                       ; 0049d0df
        ;   XREF to: 0049d20f (CONDITIONAL_JUMP)  ; LAB_0049d20f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d0e5
    MOV EAX,dword ptr [EAX]             ; 0049d0e8
    CMP EAX,0x3                         ; 0049d0ea
    JA 0x0049d140                       ; 0049d0ed
        ;   XREF to: 0049d140 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x49d080]  ; 0049d0ef | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x0                            ; 0049d0f6
        ;   Label: caseD_0
    PUSH 0x40800000                     ; 0049d0f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d0fd
    PUSH 0x42c80000                     ; 0049d100
    ADD EAX,0x180                       ; 0049d105
    PUSH 0x41800000                     ; 0049d10a
    PUSH EAX                            ; 0049d10f
    MOV ECX,dword ptr [0x005fc5a0]      ; 0049d110 | DAT_005fc5a0
    PUSH ECX                            ; 0049d116
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0 ; 0049d117
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x18                        ; 0049d11c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d11f
    MOV EBX,dword ptr [EAX + 0x3e4]     ; 0049d122
    PUSH EBX                            ; 0049d128
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0049d129
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0049d12e
    LEA EAX,[EAX]                       ; 0049d131
    LEA EDX,[EDX]                       ; 0049d137
    LEA EAX,[EAX]                       ; 0049d13d
    MOV ESP,EBP                         ; 0049d140
        ;   Label: default
    POP EBP                             ; 0049d142
    POP EDI                             ; 0049d143
    POP ESI                             ; 0049d144
    POP EBX                             ; 0049d145
    RET                                 ; 0049d146
    PUSH 0x0                            ; 0049d147
        ;   Label: caseD_1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049d149
    PUSH 0x1                            ; 0049d14c
    ADD EBX,0x180                       ; 0049d14e
    PUSH EBX                            ; 0049d154
    MOV EDI,dword ptr [0x005fc5a0]      ; 0049d155 | DAT_005fc5a0
    PUSH EDI                            ; 0049d15b
    CALL core_fire.cpp_CFireEffect_createRing_FUN_004a3f70 ; 0049d15c
        ;   XREF to: 004a3f70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4)
    ADD ESP,0x10                        ; 0049d161
    PUSH EBX                            ; 0049d164
    PUSH 0x5c073a                       ; 0049d165 | = "wp_bindevil.wav"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d16a
    PUSH EAX                            ; 0049d16d
    MOV EDX,dword ptr [0x006045f8]      ; 0049d16e | DAT_006045f8
    PUSH EDX                            ; 0049d174
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0049d175
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049d17a
    MOV ESP,EBP                         ; 0049d17d
    POP EBP                             ; 0049d17f
    POP EDI                             ; 0049d180
    POP ESI                             ; 0049d181
    POP EBX                             ; 0049d182
    RET                                 ; 0049d183
    PUSH 0x3                            ; 0049d184
        ;   Label: caseD_2
    PUSH 0x40800000                     ; 0049d186
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049d18b
    PUSH 0x42c80000                     ; 0049d18e
    ADD EBX,0x180                       ; 0049d193
    PUSH 0x41000000                     ; 0049d199
    PUSH EBX                            ; 0049d19e
    MOV ESI,dword ptr [0x005fc5a0]      ; 0049d19f | DAT_005fc5a0
    PUSH ESI                            ; 0049d1a5
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0 ; 0049d1a6
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x18                        ; 0049d1ab
    PUSH EBX                            ; 0049d1ae
    CALL core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0 ; 0049d1af
        ;   XREF to: 0049cca0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0(CVector3f * position)
    ADD ESP,0x4                         ; 0049d1b4
    MOV ESP,EBP                         ; 0049d1b7
    POP EBP                             ; 0049d1b9
    POP EDI                             ; 0049d1ba
    POP ESI                             ; 0049d1bb
    POP EBX                             ; 0049d1bc
    RET                                 ; 0049d1bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d1be
        ;   Label: caseD_3
    MOV EDI,dword ptr [EAX + 0x188]     ; 0049d1c1
    PUSH EDI                            ; 0049d1c7
    MOV EDX,dword ptr [EAX + 0x184]     ; 0049d1c8
    PUSH EDX                            ; 0049d1ce
    MOV ECX,dword ptr [EAX + 0x180]     ; 0049d1cf
    PUSH ECX                            ; 0049d1d5
    MOV EBX,dword ptr [0x005fc5a0]      ; 0049d1d6 | DAT_005fc5a0
    PUSH EBX                            ; 0049d1dc
    CALL core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0 ; 0049d1dd
        ;   XREF to: 004a3fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect * this_ptr, CVector3f position)
    ADD ESP,0x10                        ; 0049d1e2
    MOV EDI,dword ptr [EBP + 0x14]      ; 0049d1e5
    XOR ESI,ESI                         ; 0049d1e8
    ADD EDI,0x180                       ; 0049d1ea
    PUSH 0x0                            ; 0049d1f0
        ;   Label: LAB_0049d1f0
    PUSH EDI                            ; 0049d1f2
    MOV EDX,dword ptr [0x005fc5a0]      ; 0049d1f3 | DAT_005fc5a0
    PUSH EDX                            ; 0049d1f9
    INC ESI                             ; 0049d1fa
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20 ; 0049d1fb
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049d200
    CMP ESI,0x10                        ; 0049d203
    JL 0x0049d1f0                       ; 0049d206
        ;   XREF to: 0049d1f0 (CONDITIONAL_JUMP)  ; LAB_0049d1f0
    MOV ESP,EBP                         ; 0049d208
    POP EBP                             ; 0049d20a
    POP EDI                             ; 0049d20b
    POP ESI                             ; 0049d20c
    POP EBX                             ; 0049d20d
    RET                                 ; 0049d20e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049d20f
        ;   Label: LAB_0049d20f
    LEA EAX,[ESP + 0x3c]                ; 0049d212
    ADD EBX,0x1c0                       ; 0049d216
    CMP EAX,EBX                         ; 0049d21c
    JZ 0x0049d234                       ; 0049d21e
        ;   XREF to: 0049d234 (CONDITIONAL_JUMP)  ; LAB_0049d234
    MOV EAX,dword ptr [EBX]             ; 0049d220
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049d222
    MOV EAX,dword ptr [EBX + 0x4]       ; 0049d226
    MOV dword ptr [ESP + 0x40],EAX      ; 0049d229
    MOV EAX,dword ptr [EBX + 0x8]       ; 0049d22d
    MOV dword ptr [ESP + 0x44],EAX      ; 0049d230
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d234
        ;   Label: LAB_0049d234
    PUSH dword ptr [ESP + 0x70]         ; 0049d237
    ADD EAX,0x180                       ; 0049d23b
    LEA EDI,[ESP + 0x64]                ; 0049d240
    PUSH EAX                            ; 0049d244
    LEA ESI,[ESP + 0x5c]                ; 0049d245
    LEA EBX,[ESP + 0x14]                ; 0049d249
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0049d24d
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0049d252
    XOR EDX,EDX                         ; 0049d255
    FLD float ptr [ESP + 0x3c]          ; 0049d257
    FLD float ptr [ESP + 0x40]          ; 0049d25b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d25f
    FLD float ptr [ESP + 0x44]          ; 0049d262
    FXCH ST2                            ; 0049d266
    FSUB float ptr [EAX + 0x1c0]        ; 0049d268
    FXCH                                ; 0049d26e
    FSUB float ptr [EAX + 0x1c4]        ; 0049d270
    FXCH ST2                            ; 0049d276
    FSUB float ptr [EAX + 0x1c8]        ; 0049d278
    FXCH                                ; 0049d27e
    FSTP float ptr [ESP + 0x54]         ; 0049d280
    FXCH                                ; 0049d284
    FSTP float ptr [ESP + 0x58]         ; 0049d286
    FSTP float ptr [ESP + 0x5c]         ; 0049d28a
    LEA EAX,[ESP + 0x60]                ; 0049d28e
    MOVSD ES:EDI,ESI                    ; 0049d292
    MOVSD ES:EDI,ESI                    ; 0049d293
    MOVSD ES:EDI,ESI                    ; 0049d294
    CMP EBX,EAX                         ; 0049d295
    JZ 0x0049d2b1                       ; 0049d297
        ;   XREF to: 0049d2b1 (CONDITIONAL_JUMP)  ; LAB_0049d2b1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0049d299
    MOV dword ptr [ESP + 0xc],EAX       ; 0049d29d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049d2a1
    MOV dword ptr [ESP + 0x10],EAX      ; 0049d2a5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0049d2a9
    MOV dword ptr [ESP + 0x14],EAX      ; 0049d2ad
    FLD float ptr [ESP + 0xc]           ; 0049d2b1
        ;   Label: LAB_0049d2b1
    FMUL ST0                            ; 0049d2b5
    FLD float ptr [ESP + 0x14]          ; 0049d2b7
    FMUL ST0                            ; 0049d2bb
    FADDP                               ; 0049d2bd
    FSQRT                               ; 0049d2bf
    XOR ECX,ECX                         ; 0049d2c1
    MOV dword ptr [ESP + 0x10],ECX      ; 0049d2c3
    FLDZ                                ; 0049d2c7
    FCOMPP                              ; 0049d2c9
    FNSTSW AX                           ; 0049d2cb
    SAHF                                ; 0049d2cd
    JNC 0x0049d42c                      ; 0049d2ce
        ;   XREF to: 0049d42c (CONDITIONAL_JUMP)  ; LAB_0049d42c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d2d4
        ;   Label: LAB_0049d2d4
    FLD float ptr [EAX + 0x3e0]         ; 0049d2d7
    FSUB float ptr [EAX + 0x3dc]        ; 0049d2dd
    FCOMP double ptr [0x005c0760]       ; 0049d2e3 | DAT_005c0760
    FNSTSW AX                           ; 0049d2e9
    SAHF                                ; 0049d2eb
    JBE 0x0049d33b                      ; 0049d2ec
        ;   XREF to: 0049d33b (CONDITIONAL_JUMP)  ; LAB_0049d33b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d2ee
    MOV ESI,dword ptr [EBP + 0x14]      ; 0049d2f1
    MOV EBX,dword ptr [EAX]             ; 0049d2f4
    ADD ESI,0x180                       ; 0049d2f6
    CMP EBX,0x1                         ; 0049d2fc
    JNZ 0x0049d44f                      ; 0049d2ff
        ;   XREF to: 0049d44f (CONDITIONAL_JUMP)  ; LAB_0049d44f
    PUSH 0x0                            ; 0049d305
    PUSH EBX                            ; 0049d307
    PUSH ESI                            ; 0049d308
    MOV ECX,dword ptr [0x005fc5a0]      ; 0049d309 | DAT_005fc5a0
    PUSH ECX                            ; 0049d30f
    CALL core_fire.cpp_CFireEffect_createRing_FUN_004a3f70 ; 0049d310
        ;   XREF to: 004a3f70 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRing_FUN_004a3f70(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, undefined4 param_4)
    ADD ESP,0x10                        ; 0049d315
    PUSH ESI                            ; 0049d318
    PUSH 0x5c074a                       ; 0049d319 | = "wp_bindevil.wav"
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049d31e
    PUSH EBX                            ; 0049d321
    MOV ESI,dword ptr [0x006045f8]      ; 0049d322 | DAT_006045f8
    PUSH ESI                            ; 0049d328
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0049d329
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0049d32e
    MOV dword ptr [EBX + 0x3dc],0x0     ; 0049d331
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d33b
        ;   Label: LAB_0049d33b
    MOV EAX,dword ptr [EAX]             ; 0049d33e
    CMP EAX,0x1                         ; 0049d340
    JNC 0x0049d4e8                      ; 0049d343
        ;   XREF to: 0049d4e8 (CONDITIONAL_JUMP)  ; LAB_0049d4e8
    TEST EAX,EAX                        ; 0049d349
    JNZ 0x0049d140                      ; 0049d34b
        ;   XREF to: 0049d140 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d351
        ;   Label: LAB_0049d351
    LEA EDI,[ESP + 0x18]                ; 0049d354
    ADD EAX,0x4                         ; 0049d358
    MOV ESI,0x2cfd900                   ; 0049d35b
    PUSH EAX                            ; 0049d360
    MOVSD ES:EDI,ESI                    ; 0049d361 | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 0049d362 | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 0049d363 | DAT_02cfd908
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0049d364
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049d369
    FLD float ptr [ESP + 0x20]          ; 0049d36c
    FADD float ptr [EAX + 0x34c]        ; 0049d370
    LEA EAX,[ESP + 0x18]                ; 0049d376
    PUSH EAX                            ; 0049d37a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d37b
    LEA ESI,[ESP + 0x4]                 ; 0049d37e
    ADD EAX,0x198                       ; 0049d382
    LEA EDI,[ESP + 0x34]                ; 0049d387
    PUSH EAX                            ; 0049d38b
    FSTP float ptr [ESP + 0x28]         ; 0049d38c
    CALL core_dirmat.cpp_FUN_0045b800   ; 0049d390
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    ADD ESP,0x8                         ; 0049d395
    MOV ESI,ESP                         ; 0049d398
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d39a
    MOVSD ES:EDI,ESI                    ; 0049d39d
    MOVSD ES:EDI,ESI                    ; 0049d39e
    MOVSD ES:EDI,ESI                    ; 0049d39f
    LEA EBX,[ESP + 0x18]                ; 0049d3a0
    FLD float ptr [EAX + 0x184]         ; 0049d3a4
    FLD float ptr [EAX + 0x188]         ; 0049d3aa
    FLD float ptr [EAX + 0x180]         ; 0049d3b0
    LEA EDI,[ESP + 0x24]                ; 0049d3b6
    LEA ESI,[ESP + 0x48]                ; 0049d3ba
    LEA EAX,[ESP + 0x24]                ; 0049d3be
    FADD float ptr [ESP + 0x30]         ; 0049d3c2
    FXCH ST2                            ; 0049d3c6
    FADD float ptr [ESP + 0x34]         ; 0049d3c8
    FXCH                                ; 0049d3cc
    FADD float ptr [ESP + 0x38]         ; 0049d3ce
    FXCH ST2                            ; 0049d3d2
    FSTP float ptr [ESP + 0x48]         ; 0049d3d4
    FSTP float ptr [ESP + 0x4c]         ; 0049d3d8
    FSTP float ptr [ESP + 0x50]         ; 0049d3dc
    MOVSD ES:EDI,ESI                    ; 0049d3e0
    MOVSD ES:EDI,ESI                    ; 0049d3e1
    MOVSD ES:EDI,ESI                    ; 0049d3e2
    CMP EBX,EAX                         ; 0049d3e3
    JZ 0x0049d3ff                       ; 0049d3e5
        ;   XREF to: 0049d3ff (CONDITIONAL_JUMP)  ; LAB_0049d3ff
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049d3e7
    MOV dword ptr [ESP + 0x18],EAX      ; 0049d3eb
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049d3ef
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049d3f3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049d3f7
    MOV dword ptr [ESP + 0x20],EAX      ; 0049d3fb
    PUSH 0xffff                         ; 0049d3ff
        ;   Label: LAB_0049d3ff
    PUSH 0x0                            ; 0049d404
    PUSH 0x10000                        ; 0049d406
    PUSH 0x20000                        ; 0049d40b
    PUSH 0x0                            ; 0049d410
    LEA EAX,[ESP + 0x2c]                ; 0049d412
    PUSH EAX                            ; 0049d416
    MOV EAX,[0x005fc5a0]                ; 0049d417 | DAT_005fc5a0
    PUSH EAX                            ; 0049d41c
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 0049d41d
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0049d422
    MOV ESP,EBP                         ; 0049d425
    POP EBP                             ; 0049d427
    POP EDI                             ; 0049d428
    POP ESI                             ; 0049d429
    POP EBX                             ; 0049d42a
    RET                                 ; 0049d42b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d42c
        ;   Label: LAB_0049d42c
    FLD float ptr [EAX + 0x1c4]         ; 0049d42f
    FCOMP float ptr [ESP + 0x40]        ; 0049d435
    FNSTSW AX                           ; 0049d439
    SAHF                                ; 0049d43b
    JA 0x0049d2d4                       ; 0049d43c
        ;   XREF to: 0049d2d4 (CONDITIONAL_JUMP)  ; LAB_0049d2d4
    TEST EDX,EDX                        ; 0049d442
    JNZ 0x0049d2d4                      ; 0049d444
        ;   XREF to: 0049d2d4 (CONDITIONAL_JUMP)  ; LAB_0049d2d4
    JMP 0x0049d33b                      ; 0049d44a
        ;   XREF to: 0049d33b (UNCONDITIONAL_JUMP)  ; LAB_0049d33b
    CMP EBX,0x2                         ; 0049d44f
        ;   Label: LAB_0049d44f
    JZ 0x0049d4ac                       ; 0049d452
        ;   XREF to: 0049d4ac (CONDITIONAL_JUMP)  ; LAB_0049d4ac
    CMP EBX,0x3                         ; 0049d454
    JNZ 0x0049d33b                      ; 0049d457
        ;   XREF to: 0049d33b (CONDITIONAL_JUMP)  ; LAB_0049d33b
    MOV ECX,dword ptr [EAX + 0x188]     ; 0049d45d
    PUSH ECX                            ; 0049d463
    MOV EBX,dword ptr [EAX + 0x184]     ; 0049d464
    PUSH EBX                            ; 0049d46a
    MOV EDI,dword ptr [EAX + 0x180]     ; 0049d46b
    PUSH EDI                            ; 0049d471
    MOV EAX,[0x005fc5a0]                ; 0049d472 | DAT_005fc5a0
    PUSH EAX                            ; 0049d477
    XOR EBX,EBX                         ; 0049d478
    CALL core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0 ; 0049d47a
        ;   XREF to: 004a3fd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createStormEffect_FUN_004a3fd0(CFireEffect * this_ptr, CVector3f position)
    ADD ESP,0x10                        ; 0049d47f
    PUSH 0x0                            ; 0049d482
        ;   Label: LAB_0049d482
    PUSH ESI                            ; 0049d484
    MOV EDI,dword ptr [0x005fc5a0]      ; 0049d485 | DAT_005fc5a0
    PUSH EDI                            ; 0049d48b
    INC EBX                             ; 0049d48c
    CALL core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20 ; 0049d48d
        ;   XREF to: 004a3f20 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createRainDrop_FUN_004a3f20(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 0049d492
    CMP EBX,0x10                        ; 0049d495
    JL 0x0049d482                       ; 0049d498
        ;   XREF to: 0049d482 (CONDITIONAL_JUMP)  ; LAB_0049d482
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d49a
    MOV dword ptr [EAX + 0x3dc],0x0     ; 0049d49d
    JMP 0x0049d33b                      ; 0049d4a7
        ;   XREF to: 0049d33b (UNCONDITIONAL_JUMP)  ; LAB_0049d33b
    PUSH 0x3                            ; 0049d4ac
        ;   Label: LAB_0049d4ac
    PUSH 0x40800000                     ; 0049d4ae
    PUSH 0x42c80000                     ; 0049d4b3
    PUSH 0x41000000                     ; 0049d4b8
    PUSH ESI                            ; 0049d4bd
    MOV EDX,dword ptr [0x005fc5a0]      ; 0049d4be | DAT_005fc5a0
    PUSH EDX                            ; 0049d4c4
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0 ; 0049d4c5
        ;   XREF to: 004a36e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004a36e0(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x18                        ; 0049d4ca
    PUSH ESI                            ; 0049d4cd
    CALL core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0 ; 0049d4ce
        ;   XREF to: 0049cca0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0(CVector3f * position)
    ADD ESP,0x4                         ; 0049d4d3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049d4d6
    MOV dword ptr [EAX + 0x3dc],0x0     ; 0049d4d9
    JMP 0x0049d33b                      ; 0049d4e3
        ;   XREF to: 0049d33b (UNCONDITIONAL_JUMP)  ; LAB_0049d33b
    JBE 0x0049d351                      ; 0049d4e8
        ;   XREF to: 0049d351 (CONDITIONAL_JUMP)  ; LAB_0049d351
        ;   Label: LAB_0049d4e8
    CMP EAX,0x2                         ; 0049d4ee
    JZ 0x0049d351                       ; 0049d4f1
        ;   XREF to: 0049d351 (CONDITIONAL_JUMP)  ; LAB_0049d351
    MOV ESP,EBP                         ; 0049d4f7
    POP EBP                             ; 0049d4f9
    POP EDI                             ; 0049d4fa
    POP ESI                             ; 0049d4fb
    POP EBX                             ; 0049d4fc
    RET                                 ; 0049d4fd

