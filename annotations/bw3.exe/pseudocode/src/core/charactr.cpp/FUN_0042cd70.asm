; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_0042cd70(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xb4]:1  local_b4
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x44]:1  local_44
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
; XREF[6]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0bf6
;   core_bird.cpp_CBird_process_FUN_0040fb40 at 0040fb56
;   core_enemy.cpp_CEnemy_randomize_FUN_0048a220 at 0048a256
;   core_moocow.cpp_CMooCow_process_FUN_004f8cc0 at 004f8cd3
;   core_npc.cpp_CNPC_process_FUN_00509120 at 00509136
;   core_prye.cpp_CPrye_process_FUN_00518ab0 at 00518abe
;
; Referenced Globals:
;   TerminatedCString s_wp_bindevil_loop_wav_005b8256
;   undefined4 DAT_005b826e
;   undefined4 DAT_005dd234
;   CGame* g_CGamePtr = 01d2130c
;   CScript* g_CScriptPtr = 01ed73e0
;   undefined4 DAT_006045f8
;   CGame g_CGameInstance
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_computePickup_FUN_00431ab0
;   core_charactr.cpp_FUN_0042e8c0
;   core_charactr.cpp_FUN_00432220
;   core_game.cpp_CGame_setStatusDisplay_FUN_004bd930
;   core_hero.cpp_isAnyHeroWithinCylinder_FUN_004d23f0
;   core_script.cpp_CScript_setSpeaker_FUN_00530390
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_xform.cpp_FUN_00585de0
;   core_xform.cpp_multiplyQuaternion_FUN_00585990
;   core_xform.cpp_quaternionFromAngleX_FUN_00585cd0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042cd70
        ;   Label: core_charactr.cpp_FUN_0042cd70
    PUSH ESI                            ; 0042cd71
    PUSH EDI                            ; 0042cd72
    PUSH EBP                            ; 0042cd73
    SUB ESP,0xf4                        ; 0042cd74
    MOV EBX,dword ptr [ESP + 0x108]     ; 0042cd7a
    FLD float ptr [EBX + 0x324c]        ; 0042cd81
    FSUB float ptr [ESP + 0x10c]        ; 0042cd87
    XOR EBP,EBP                         ; 0042cd8e
    FST float ptr [EBX + 0x324c]        ; 0042cd90
    FLDZ                                ; 0042cd96
    FCOMPP                              ; 0042cd98
    FNSTSW AX                           ; 0042cd9a
    SAHF                                ; 0042cd9c
    JA 0x0042cfdf                       ; 0042cd9d
        ;   XREF to: 0042cfdf (CONDITIONAL_JUMP)  ; LAB_0042cfdf
    FLDZ                                ; 0042cda3
        ;   Label: LAB_0042cda3
    FCOMP float ptr [EBX + 0x3254]      ; 0042cda5
    FNSTSW AX                           ; 0042cdab
    SAHF                                ; 0042cdad
    JNC 0x0042d081                      ; 0042cdae
        ;   XREF to: 0042d081 (CONDITIONAL_JUMP)  ; LAB_0042d081
    CMP dword ptr [EBX + 0x3258],0x0    ; 0042cdb4
    JNZ 0x0042cdd4                      ; 0042cdbb
        ;   XREF to: 0042cdd4 (CONDITIONAL_JUMP)  ; LAB_0042cdd4
    MOV ECX,dword ptr [EBX + 0x325c]    ; 0042cdbd
    PUSH ECX                            ; 0042cdc3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 0042cdc4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0042cdc9
    TEST EAX,EAX                        ; 0042cdcc
    JZ 0x0042cfea                       ; 0042cdce
        ;   XREF to: 0042cfea (CONDITIONAL_JUMP)  ; LAB_0042cfea
    MOV EDI,dword ptr [EBX + 0x3258]    ; 0042cdd4
        ;   Label: LAB_0042cdd4
    CMP EDI,0x1                         ; 0042cdda
    JNZ 0x0042d00e                      ; 0042cddd
        ;   XREF to: 0042d00e (CONDITIONAL_JUMP)  ; LAB_0042d00e
    LEA ESI,[EBX + 0x158]               ; 0042cde3
        ;   Label: LAB_0042cde3
    PUSH ESI                            ; 0042cde9
    XOR EBP,EBP                         ; 0042cdea
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0042cdec
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042cdf1
    LEA EAX,[EBX + 0x808]               ; 0042cdf4
    MOV dword ptr [ESP + 0xe4],ESI      ; 0042cdfa
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042ce01
    MOV dword ptr [ESP + 0xec],EBX      ; 0042ce08
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0042ce0f
        ;   Label: LAB_0042ce0f
    PUSH EAX                            ; 0042ce16
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042ce17
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0042ce1c
    ADD ESP,0x4                         ; 0042ce22
    CMP EBP,EDX                         ; 0042ce25
    JGE 0x0042d017                      ; 0042ce27
        ;   XREF to: 0042d017 (CONDITIONAL_JUMP)  ; LAB_0042d017
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0042ce2d
    PUSH ECX                            ; 0042ce34
    LEA ESI,[ESP + 0xc4]                ; 0042ce35
    LEA EDI,[ESP + 0xdc]                ; 0042ce3c
    CALL core_xform.cpp_FUN_00585de0    ; 0042ce43
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[ESP + 0xc4]                ; 0042ce48
    ADD ESP,0x4                         ; 0042ce4f
    MOVSD ES:EDI,ESI                    ; 0042ce52
    MOVSD ES:EDI,ESI                    ; 0042ce53
    MOVSD ES:EDI,ESI                    ; 0042ce54
    LEA EAX,[ESP + 0xcc]                ; 0042ce55
    LEA ESI,[ESP + 0xd8]                ; 0042ce5c
    CMP EAX,ESI                         ; 0042ce63
    JNZ 0x0042d250                      ; 0042ce65
        ;   XREF to: 0042d250 (CONDITIONAL_JUMP)  ; LAB_0042d250
    PUSH 0x3e20d97c                     ; 0042ce6b
        ;   Label: LAB_0042ce6b
    PUSH 0xbe20d97c                     ; 0042ce70
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042ce75
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042ce7a
    FLD float ptr [ESP + 0xf8]          ; 0042ce81
    ADD ESP,0x8                         ; 0042ce88
    PUSH 0x3e20d97c                     ; 0042ce8b
    FADD float ptr [ESP + 0xd4]         ; 0042ce90
    PUSH 0xbe20d97c                     ; 0042ce97
    FSTP float ptr [ESP + 0xd8]         ; 0042ce9c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042cea3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042cea8
    FLD float ptr [ESP + 0xf8]          ; 0042ceaf
    ADD ESP,0x8                         ; 0042ceb6
    PUSH 0x3e20d97c                     ; 0042ceb9
    FADD float ptr [ESP + 0xd0]         ; 0042cebe
    PUSH 0xbe20d97c                     ; 0042cec5
    FSTP float ptr [ESP + 0xd4]         ; 0042ceca
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042ced1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042ced6
    LEA ESI,[ESP + 0xb8]                ; 0042cedd
    FLD float ptr [ESP + 0xf8]          ; 0042cee4
    ADD ESP,0x8                         ; 0042ceeb
    LEA EDI,[ESP + 0xa0]                ; 0042ceee
    FADD float ptr [ESP + 0xd4]         ; 0042cef5
    PUSH dword ptr [ESP + 0xd0]         ; 0042cefc
    FSTP float ptr [ESP + 0xd8]         ; 0042cf03
    CALL core_xform.cpp_quaternionFromAngleY_FUN_00585d10 ; 0042cf0a
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleY_FUN_00585d10()
    ADD ESP,0x4                         ; 0042cf0f
    LEA EAX,[ESP + 0xa0]                ; 0042cf12
    LEA ESI,[ESP + 0xb0]                ; 0042cf19
    PUSH EAX                            ; 0042cf20
    MOVSD ES:EDI,ESI                    ; 0042cf21
    MOVSD ES:EDI,ESI                    ; 0042cf22
    MOVSD ES:EDI,ESI                    ; 0042cf23
    MOVSD ES:EDI,ESI                    ; 0042cf24
    PUSH dword ptr [ESP + 0xd0]         ; 0042cf25
    LEA ESI,[ESP + 0x68]                ; 0042cf2c
    LEA EDI,[ESP + 0x48]                ; 0042cf30
    CALL core_xform.cpp_quaternionFromAngleX_FUN_00585cd0 ; 0042cf34
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleX_FUN_00585cd0()
    ADD ESP,0x4                         ; 0042cf39
    LEA EAX,[ESP + 0x44]                ; 0042cf3c
    LEA ESI,[ESP + 0x64]                ; 0042cf40
    PUSH EAX                            ; 0042cf44
    MOVSD ES:EDI,ESI                    ; 0042cf45
    MOVSD ES:EDI,ESI                    ; 0042cf46
    MOVSD ES:EDI,ESI                    ; 0042cf47
    MOVSD ES:EDI,ESI                    ; 0042cf48
    PUSH dword ptr [ESP + 0xdc]         ; 0042cf49
    LEA ESI,[ESP + 0x7c]                ; 0042cf50
    LEA EDI,[ESP + 0x9c]                ; 0042cf54
    CALL core_xform.cpp_quaternionFromAngleZ_FUN_00585d50 ; 0042cf5b
        ;   XREF to: 00585d50 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionFromAngleZ_FUN_00585d50()
    LEA ESI,[ESP + 0x7c]                ; 0042cf60
    ADD ESP,0x4                         ; 0042cf64
    LEA EAX,[ESP + 0x98]                ; 0042cf67
    MOVSD ES:EDI,ESI                    ; 0042cf6e
    MOVSD ES:EDI,ESI                    ; 0042cf6f
    MOVSD ES:EDI,ESI                    ; 0042cf70
    MOVSD ES:EDI,ESI                    ; 0042cf71
    PUSH EAX                            ; 0042cf72
    LEA ESI,[ESP + 0x3c]                ; 0042cf73
    LEA EDI,[ESP + 0x8c]                ; 0042cf77
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0042cf7e
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    LEA ESI,[ESP + 0x3c]                ; 0042cf83
    ADD ESP,0x8                         ; 0042cf87
    LEA EAX,[ESP + 0x84]                ; 0042cf8a
    MOVSD ES:EDI,ESI                    ; 0042cf91
    MOVSD ES:EDI,ESI                    ; 0042cf92
    MOVSD ES:EDI,ESI                    ; 0042cf93
    MOVSD ES:EDI,ESI                    ; 0042cf94
    PUSH EAX                            ; 0042cf95
    LEA ESI,[ESP + 0x58]                ; 0042cf96
    CALL core_xform.cpp_multiplyQuaternion_FUN_00585990 ; 0042cf9a
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyQuaternion_FUN_00585990()
    ADD ESP,0x8                         ; 0042cf9f
    MOV EDI,dword ptr [ESP + 0xec]      ; 0042cfa2
    LEA ESI,[ESP + 0x50]                ; 0042cfa9
    LEA EDI,[EDI + 0x808]               ; 0042cfad
    MOVSD ES:EDI,ESI                    ; 0042cfb3
    MOVSD ES:EDI,ESI                    ; 0042cfb4
    MOVSD ES:EDI,ESI                    ; 0042cfb5
    MOVSD ES:EDI,ESI                    ; 0042cfb6
    INC EBP                             ; 0042cfb7
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0042cfb8
    MOV EDI,dword ptr [ESP + 0xec]      ; 0042cfbf
    ADD ESI,0x10                        ; 0042cfc6
    ADD EDI,0x10                        ; 0042cfc9
    MOV dword ptr [ESP + 0xe8],ESI      ; 0042cfcc
    MOV dword ptr [ESP + 0xec],EDI      ; 0042cfd3
    JMP 0x0042ce0f                      ; 0042cfda
        ;   XREF to: 0042ce0f (UNCONDITIONAL_JUMP)  ; LAB_0042ce0f
    MOV dword ptr [EBX + 0x324c],EBP    ; 0042cfdf
        ;   Label: LAB_0042cfdf
    JMP 0x0042cda3                      ; 0042cfe5
        ;   XREF to: 0042cda3 (UNCONDITIONAL_JUMP)  ; LAB_0042cda3
    LEA EAX,[EBX + 0x20]                ; 0042cfea
        ;   Label: LAB_0042cfea
    PUSH EAX                            ; 0042cfed
    PUSH 0x5b8256                       ; 0042cfee | = "wp_bindevil_loop.wav"
    PUSH EBX                            ; 0042cff3
    MOV ESI,dword ptr [0x006045f8]      ; 0042cff4 | DAT_006045f8
    PUSH ESI                            ; 0042cffa
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0042cffb
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0042d000
    MOV dword ptr [EBX + 0x325c],EAX    ; 0042d003
    JMP 0x0042cdd4                      ; 0042d009
        ;   XREF to: 0042cdd4 (UNCONDITIONAL_JUMP)  ; LAB_0042cdd4
    CMP EDI,0x2                         ; 0042d00e
        ;   Label: LAB_0042d00e
    JZ 0x0042cde3                       ; 0042d011
        ;   XREF to: 0042cde3 (CONDITIONAL_JUMP)  ; LAB_0042cde3
    MOV EBP,dword ptr [EBX + 0x3258]    ; 0042d017
        ;   Label: LAB_0042d017
    CMP EBP,0x3                         ; 0042d01d
    JNZ 0x0042d27f                      ; 0042d020
        ;   XREF to: 0042d27f (CONDITIONAL_JUMP)  ; LAB_0042d27f
    XOR EBP,EBP                         ; 0042d026
        ;   Label: LAB_0042d026
    FLD float ptr [EBX + 0x3254]        ; 0042d028
        ;   Label: LAB_0042d028
    FSUB float ptr [ESP + 0x10c]        ; 0042d02e
    FLDZ                                ; 0042d035
    FXCH                                ; 0042d037
    FSTP float ptr [EBX + 0x3254]       ; 0042d039
    FCOMP float ptr [EBX + 0x3254]      ; 0042d03f
    FNSTSW AX                           ; 0042d045
    SAHF                                ; 0042d047
    JBE 0x0042d292                      ; 0042d048
        ;   XREF to: 0042d292 (CONDITIONAL_JUMP)  ; LAB_0042d292
    MOV ESI,dword ptr [EBX + 0x3258]    ; 0042d04e
    TEST ESI,ESI                        ; 0042d054
    JNZ 0x0042d06d                      ; 0042d056
        ;   XREF to: 0042d06d (CONDITIONAL_JUMP)  ; LAB_0042d06d
    MOV EDI,dword ptr [EBX + 0x325c]    ; 0042d058
    PUSH EDI                            ; 0042d05e
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042d05f
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042d064
    MOV dword ptr [EBX + 0x325c],ESI    ; 0042d067
    MOV dword ptr [EBX + 0x3258],0x0    ; 0042d06d
        ;   Label: LAB_0042d06d
    MOV dword ptr [EBX + 0x3254],0x0    ; 0042d077
    PUSH dword ptr [ESP + 0x10c]        ; 0042d081
        ;   Label: LAB_0042d081
    PUSH EBX                            ; 0042d088
    CALL core_charactr.cpp_FUN_0042e8c0 ; 0042d089
        ;   XREF to: 0042e8c0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042e8c0()
    ADD ESP,0x8                         ; 0042d08e
    PUSH dword ptr [ESP + 0x10c]        ; 0042d091
    PUSH EBX                            ; 0042d098
    CALL core_charactr.cpp_FUN_00432220 ; 0042d099
        ;   XREF to: 00432220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432220()
    ADD ESP,0x8                         ; 0042d09e
    FLD float ptr [EBX + 0xbc70]        ; 0042d0a1
    FSUB float ptr [ESP + 0x10c]        ; 0042d0a7
    FST float ptr [EBX + 0xbc70]        ; 0042d0ae
    FLDZ                                ; 0042d0b4
    FCOMPP                              ; 0042d0b6
    FNSTSW AX                           ; 0042d0b8
    SAHF                                ; 0042d0ba
    JBE 0x0042d0c7                      ; 0042d0bb
        ;   XREF to: 0042d0c7 (CONDITIONAL_JUMP)  ; LAB_0042d0c7
    MOV dword ptr [EBX + 0xbc70],0x0    ; 0042d0bd
    FLD float ptr [EBX + 0x27b4]        ; 0042d0c7
        ;   Label: LAB_0042d0c7
    FLDZ                                ; 0042d0cd
    FCOMPP                              ; 0042d0cf
    FNSTSW AX                           ; 0042d0d1
    SAHF                                ; 0042d0d3
    JNC 0x0042d10b                      ; 0042d0d4
        ;   XREF to: 0042d10b (CONDITIONAL_JUMP)  ; LAB_0042d10b
    FLD float ptr [EBX + 0x27b4]        ; 0042d0d6
    FSUB float ptr [ESP + 0x10c]        ; 0042d0dc
    FST float ptr [EBX + 0x27b4]        ; 0042d0e3
    FLDZ                                ; 0042d0e9
    FCOMPP                              ; 0042d0eb
    FNSTSW AX                           ; 0042d0ed
    SAHF                                ; 0042d0ef
    JBE 0x0042d10b                      ; 0042d0f0
        ;   XREF to: 0042d10b (CONDITIONAL_JUMP)  ; LAB_0042d10b
    PUSH EBX                            ; 0042d0f2
    MOV EAX,[0x006039e0]                ; 0042d0f3 | g_CScriptPtr
    PUSH EAX                            ; 0042d0f8 | g_CScriptInstance
    MOV dword ptr [EBX + 0x27b4],0x0    ; 0042d0f9
    CALL core_script.cpp_CScript_setSpeaker_FUN_00530390 ; 0042d103
        ;   XREF to: 00530390 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00530390(CScript * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042d108
    CMP dword ptr [EBX + 0x2540],0x2    ; 0042d10b
        ;   Label: LAB_0042d10b
    JNZ 0x0042d141                      ; 0042d112
        ;   XREF to: 0042d141 (CONDITIONAL_JUMP)  ; LAB_0042d141
    FLD float ptr [EBX + 0x2538]        ; 0042d114
    FDIV float ptr [EBX + 0x253c]       ; 0042d11a
    PUSH 0x40000000                     ; 0042d120
    SUB ESP,0x4                         ; 0042d125
    LEA EAX,[EBX + 0x2544]              ; 0042d128
    FSTP float ptr [ESP]                ; 0042d12e
    PUSH EAX                            ; 0042d131
    MOV ECX,dword ptr [0x005fe9dc]      ; 0042d132 | g_CGamePtr
    PUSH ECX                            ; 0042d138 | g_CGameInstance
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004bd930 ; 0042d139
        ;   XREF to: 004bd930 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_setStatusDisplay_FUN_004bd930(CGame * this_ptr, char * name, float value, float duration)
    ADD ESP,0x10                        ; 0042d13e
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0042d141
        ;   Label: LAB_0042d141
    JNZ 0x0042d2bd                      ; 0042d148
        ;   XREF to: 0042d2bd (CONDITIONAL_JUMP)  ; LAB_0042d2bd
    FLD float ptr [EBX + 0x2504]        ; 0042d14e
    FCOMP float ptr [0x005dd234]        ; 0042d154 | DAT_005dd234
    FNSTSW AX                           ; 0042d15a
    SAHF                                ; 0042d15c
    JZ 0x0042d2ca                       ; 0042d15d
        ;   XREF to: 0042d2ca (CONDITIONAL_JUMP)  ; LAB_0042d2ca
    FLD float ptr [EBX + 0xe4]          ; 0042d163
        ;   Label: LAB_0042d163
    MOV dword ptr [EBX + 0xe4],0x0      ; 0042d169
    FADD float ptr [EBX + 0x24]         ; 0042d173
    FLD float ptr [EBX + 0x2504]        ; 0042d176
    FXCH                                ; 0042d17c
    FSTP float ptr [EBX + 0x24]         ; 0042d17e
    FCOMP float ptr [0x005dd234]        ; 0042d181 | DAT_005dd234
    FNSTSW AX                           ; 0042d187
    SAHF                                ; 0042d189
    JZ 0x0042d195                       ; 0042d18a
        ;   XREF to: 0042d195 (CONDITIONAL_JUMP)  ; LAB_0042d195
    CMP dword ptr [EBX + 0xdc],0x0      ; 0042d18c
    JZ 0x0042d1be                       ; 0042d193
        ;   XREF to: 0042d1be (CONDITIONAL_JUMP)  ; LAB_0042d1be
    PUSH 0x0                            ; 0042d195
        ;   Label: LAB_0042d195
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d197
    PUSH dword ptr [EBX + 0x326c]       ; 0042d19d
    PUSH EBX                            ; 0042d1a3
    CALL dword ptr [EAX + 0x40]         ; 0042d1a4
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042d1a7
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042d1ae
    MOV dword ptr [EBX + 0x2504],EAX    ; 0042d1b5
    ADD ESP,0xc                         ; 0042d1bb
    FLD float ptr [EBX + 0x2504]        ; 0042d1be
        ;   Label: LAB_0042d1be
    FADD double ptr [0x005b826e]        ; 0042d1c4 | DAT_005b826e
    FLD float ptr [EBX + 0x24]          ; 0042d1ca
    FCOMPP                              ; 0042d1cd
    FNSTSW AX                           ; 0042d1cf
    SAHF                                ; 0042d1d1
    JNC 0x0042d30c                      ; 0042d1d2
        ;   XREF to: 0042d30c (CONDITIONAL_JUMP)  ; LAB_0042d30c
    MOV EAX,0x1                         ; 0042d1d8
    MOV dword ptr [EBX + 0x2500],EAX    ; 0042d1dd
        ;   Label: LAB_0042d1dd
    LEA EAX,[EBX + 0x250c]              ; 0042d1e3
    MOV dword ptr [EAX + 0x8],0x0       ; 0042d1e9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042d1f0
    MOV dword ptr [EAX + 0x4],EDX       ; 0042d1f3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042d1f6
    MOV dword ptr [EAX],EDX             ; 0042d1f9
    MOV ESI,dword ptr [EBX + 0xdc]      ; 0042d1fb
    MOV dword ptr [EBX + 0x2508],0x0    ; 0042d201
    TEST ESI,ESI                        ; 0042d20b
    JNZ 0x0042d238                      ; 0042d20d
        ;   XREF to: 0042d238 (CONDITIONAL_JUMP)  ; LAB_0042d238
    CMP dword ptr [EBX + 0x2704],0x0    ; 0042d20f
    JNZ 0x0042d238                      ; 0042d216
        ;   XREF to: 0042d238 (CONDITIONAL_JUMP)  ; LAB_0042d238
    PUSH dword ptr [EBX + 0x3274]       ; 0042d218
    LEA EAX,[EBX + 0x20]                ; 0042d21e
    PUSH dword ptr [EBX + 0x3278]       ; 0042d221
    PUSH EAX                            ; 0042d227
    CALL core_hero.cpp_isAnyHeroWithinCylinder_FUN_004d23f0 ; 0042d228
        ;   XREF to: 004d23f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_isAnyHeroWithinCylinder_FUN_004d23f0(CVector3f * point, float horizontal_radius, float vertical_tolerance)
    ADD ESP,0xc                         ; 0042d22d
    TEST EAX,EAX                        ; 0042d230
    JZ 0x0042d313                       ; 0042d232
        ;   XREF to: 0042d313 (CONDITIONAL_JUMP)  ; LAB_0042d313
    TEST EBP,EBP                        ; 0042d238
        ;   Label: LAB_0042d238
    JNZ 0x0042d365                      ; 0042d23a
        ;   XREF to: 0042d365 (CONDITIONAL_JUMP)  ; LAB_0042d365
    MOV EAX,0x1                         ; 0042d240
    ADD ESP,0xf4                        ; 0042d245
    POP EBP                             ; 0042d24b
    POP EDI                             ; 0042d24c
    POP ESI                             ; 0042d24d
    POP EBX                             ; 0042d24e
    RET                                 ; 0042d24f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042d250
        ;   Label: LAB_0042d250
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042d257
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042d25e
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042d265
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0042d26c
    MOV dword ptr [ESP + 0xd4],EAX      ; 0042d273
    JMP 0x0042ce6b                      ; 0042d27a
        ;   XREF to: 0042ce6b (UNCONDITIONAL_JUMP)  ; LAB_0042ce6b
    CMP EBP,0x4                         ; 0042d27f
        ;   Label: LAB_0042d27f
    JZ 0x0042d026                       ; 0042d282
        ;   XREF to: 0042d026 (CONDITIONAL_JUMP)  ; LAB_0042d026
    MOV EBP,0x1                         ; 0042d288
    JMP 0x0042d028                      ; 0042d28d
        ;   XREF to: 0042d028 (UNCONDITIONAL_JUMP)  ; LAB_0042d028
    CMP dword ptr [EBX + 0x3258],0x0    ; 0042d292
        ;   Label: LAB_0042d292
    JZ 0x0042d081                       ; 0042d299
        ;   XREF to: 0042d081 (CONDITIONAL_JUMP)  ; LAB_0042d081
    MOV ECX,dword ptr [EBX + 0x325c]    ; 0042d29f
    PUSH ECX                            ; 0042d2a5
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042d2a6
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042d2ab
    MOV dword ptr [EBX + 0x325c],0x0    ; 0042d2ae
    JMP 0x0042d081                      ; 0042d2b8
        ;   XREF to: 0042d081 (UNCONDITIONAL_JUMP)  ; LAB_0042d081
    XOR EAX,EAX                         ; 0042d2bd
        ;   Label: LAB_0042d2bd
    ADD ESP,0xf4                        ; 0042d2bf
    POP EBP                             ; 0042d2c5
    POP EDI                             ; 0042d2c6
    POP ESI                             ; 0042d2c7
    POP EBX                             ; 0042d2c8
    RET                                 ; 0042d2c9
    MOV ESI,EBX                         ; 0042d2ca
        ;   Label: LAB_0042d2ca
    XOR EDI,EDI                         ; 0042d2cc
    CMP dword ptr [ESI + 0x25b0],0x0    ; 0042d2ce
        ;   Label: LAB_0042d2ce
    JZ 0x0042d2e1                       ; 0042d2d5
        ;   XREF to: 0042d2e1 (CONDITIONAL_JUMP)  ; LAB_0042d2e1
    MOV EDX,dword ptr [ESI + 0x25ec]    ; 0042d2d7
    TEST EDX,EDX                        ; 0042d2dd
    JZ 0x0042d2f0                       ; 0042d2df
        ;   XREF to: 0042d2f0 (CONDITIONAL_JUMP)  ; LAB_0042d2f0
    INC EDI                             ; 0042d2e1
        ;   Label: LAB_0042d2e1
    ADD ESI,0x78                        ; 0042d2e2
    CMP EDI,0x2                         ; 0042d2e5
    JGE 0x0042d163                      ; 0042d2e8
        ;   XREF to: 0042d163 (CONDITIONAL_JUMP)  ; LAB_0042d163
    JMP 0x0042d2ce                      ; 0042d2ee
        ;   XREF to: 0042d2ce (UNCONDITIONAL_JUMP)  ; LAB_0042d2ce
    PUSH EDX                            ; 0042d2f0
        ;   Label: LAB_0042d2f0
    PUSH 0x0                            ; 0042d2f1
    PUSH EDI                            ; 0042d2f3
    PUSH EBX                            ; 0042d2f4
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_00431ab0 ; 0042d2f5
        ;   XREF to: 00431ab0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computePickup_FUN_00431ab0(CCharacter * this_ptr, int param_2, float param_3, int * param_4)
    ADD ESP,0x10                        ; 0042d2fa
    INC EDI                             ; 0042d2fd
    ADD ESI,0x78                        ; 0042d2fe
    CMP EDI,0x2                         ; 0042d301
    JGE 0x0042d163                      ; 0042d304
        ;   XREF to: 0042d163 (CONDITIONAL_JUMP)  ; LAB_0042d163
    JMP 0x0042d2ce                      ; 0042d30a
        ;   XREF to: 0042d2ce (UNCONDITIONAL_JUMP)  ; LAB_0042d2ce
    XOR EAX,EAX                         ; 0042d30c
        ;   Label: LAB_0042d30c
    JMP 0x0042d1dd                      ; 0042d30e
        ;   XREF to: 0042d1dd (UNCONDITIONAL_JUMP)  ; LAB_0042d1dd
    PUSH ESI                            ; 0042d313
        ;   Label: LAB_0042d313
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042d314
    PUSH EBX                            ; 0042d31a
    LEA ESI,[ESP + 0x20]                ; 0042d31b
    LEA EDI,[ESP + 0x8]                 ; 0042d31f
    CALL dword ptr [EAX + 0x1c]         ; 0042d323
    MOV ECX,0x6                         ; 0042d326
    ADD ESP,0x4                         ; 0042d32b
    LEA EAX,[ESP + 0x4]                 ; 0042d32e
    LEA ESI,[ESP + 0x1c]                ; 0042d332
    PUSH EAX                            ; 0042d336
    MOVSD.REP ES:EDI,ESI                ; 0042d337
    CALL core_box.cpp_FUN_0041daf0      ; 0042d339
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0042d33e
    TEST EAX,EAX                        ; 0042d341
    JNZ 0x0042d238                      ; 0042d343
        ;   XREF to: 0042d238 (CONDITIONAL_JUMP)  ; LAB_0042d238
    MOV EBP,dword ptr [EBX + 0xbc64]    ; 0042d349
    PUSH EBP                            ; 0042d34f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042d350
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042d355
    XOR EAX,EAX                         ; 0042d358
    ADD ESP,0xf4                        ; 0042d35a
    POP EBP                             ; 0042d360
    POP EDI                             ; 0042d361
    POP ESI                             ; 0042d362
    POP EBX                             ; 0042d363
    RET                                 ; 0042d364
    PUSH dword ptr [ESP + 0x10c]        ; 0042d365
        ;   Label: LAB_0042d365
    PUSH EBX                            ; 0042d36c
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0042d36d
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0042d372
    XOR EAX,EAX                         ; 0042d375
    ADD ESP,0xf4                        ; 0042d377
    POP EBP                             ; 0042d37d
    POP EDI                             ; 0042d37e
    POP ESI                             ; 0042d37f
    POP EBX                             ; 0042d380
    RET                                 ; 0042d381

