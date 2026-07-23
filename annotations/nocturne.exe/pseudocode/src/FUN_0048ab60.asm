; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ab60(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5)
;
; Local Variables:
; undefined8       Stack[-0x68]:8  local_68
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_00477890 at 00477fc1
;   FUN_004b27c0 at 004b2fa5
;   FUN_00515ea0 at 00516608
;   FUN_00545c30 at 0054645f
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054b01e
;
; Referenced Globals:
;   undefined1* switchdataD_0048ab04 = 0048acc0
;   undefined1* switchdataD_0048ab2c = 0048ace3
;   TerminatedCString s_ric_s_wav_0058146c
;   TerminatedCString s_ric_s_wav_00581479
;   TerminatedCString s_ric_s_wav_00581486
;   TerminatedCString s_ric_s_wav_00581493
;   double DOUBLE_005814a4 = 0.200000000000000
;   double DOUBLE_005814ac = -0.200000000000000
;   double DOUBLE_005814b4 = 0.0578000000000000
;   undefined4 DAT_005b8bd8
;   undefined2 DAT_005b8bdc
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c0a13c
;   undefined4 DAT_01c0a140
;   undefined4 DAT_01c20140
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590
;   core_fire.cpp_allocateBulletHole_FUN_0048a0e0
;   core_fire.cpp_CBulletHole_init_FUN_00482c80
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_fire.cpp_CSmokeParticle_init_FUN_00482780
;   core_ground.cpp_getGroundTypeCode_FUN_004b11b0
;   core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ab60
        ;   Label: FUN_0048ab60
    PUSH ESI                            ; 0048ab61
    PUSH EDI                            ; 0048ab62
    PUSH EBP                            ; 0048ab63
    MOV EBP,ESP                         ; 0048ab64
    SUB ESP,0x58                        ; 0048ab66
    AND ESP,0xfffffff8                  ; 0048ab69
    MOV EDI,dword ptr [EBP + 0x14]      ; 0048ab6c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048ab6f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048ab72
    FLD float ptr [EAX + 0x4]           ; 0048ab75
    FST double ptr [ESP]                ; 0048ab78
    FCOMP double ptr [0x005814a4]       ; 0048ab7b | DOUBLE_005814a4
    FNSTSW AX                           ; 0048ab81
    SAHF                                ; 0048ab83
    JNC 0x0048ac45                      ; 0048ab84
        ;   XREF to: 0048ac45 (CONDITIONAL_JUMP)  ; LAB_0048ac45
    FLD double ptr [ESP]                ; 0048ab8a
    FCOMP double ptr [0x005814ac]       ; 0048ab8d | DOUBLE_005814ac
    FNSTSW AX                           ; 0048ab93
    SAHF                                ; 0048ab95
    JBE 0x0048ac45                      ; 0048ab96
        ;   XREF to: 0048ac45 (CONDITIONAL_JUMP)  ; LAB_0048ac45
    MOV EDX,0x1                         ; 0048ab9c
    MOV ECX,dword ptr [EBP + 0x24]      ; 0048aba1
    MOV ESI,0x1c20148                   ; 0048aba4
    MOV dword ptr [ESP + 0x54],EDX      ; 0048aba9
    TEST ECX,ECX                        ; 0048abad
    JZ 0x0048abc6                       ; 0048abaf
        ;   XREF to: 0048abc6 (CONDITIONAL_JUMP)  ; LAB_0048abc6
    PUSH ECX                            ; 0048abb1
    MOV EAX,dword ptr [ECX + 0x14c]     ; 0048abb2
    CALL dword ptr [EAX + 0x44]         ; 0048abb8
    ADD ESP,0x4                         ; 0048abbb
    TEST EAX,EAX                        ; 0048abbe
    JZ 0x0048ac45                       ; 0048abc0
        ;   XREF to: 0048ac45 (CONDITIONAL_JUMP)  ; LAB_0048ac45
    CMP dword ptr [ESP + 0x54],0x0      ; 0048abc6
        ;   Label: LAB_0048abc6
    JZ 0x0048ad07                       ; 0048abcb
        ;   XREF to: 0048ad07 (CONDITIONAL_JUMP)  ; LAB_0048ad07
    MOV EAX,[0x01c20140]                ; 0048abd1 | DAT_01c20140
    XOR EDX,EDX                         ; 0048abd6
    TEST EAX,EAX                        ; 0048abd8
    JLE 0x0048ad07                      ; 0048abda
        ;   XREF to: 0048ad07 (CONDITIONAL_JUMP)  ; LAB_0048ad07
    FLD float ptr [EBX]                 ; 0048abe0
        ;   Label: LAB_0048abe0
    FSUB float ptr [ESI]                ; 0048abe2 | DAT_01c20148 | DAT_01c20184
    FSTP float ptr [ESP + 0x48]         ; 0048abe4
    FLD float ptr [EBX + 0x4]           ; 0048abe8
    FSUB float ptr [ESI + 0x4]          ; 0048abeb | DAT_01c2014c | DAT_01c20188
    LEA ECX,[ESP + 0x48]                ; 0048abee
    FSTP float ptr [ESP + 0x4c]         ; 0048abf2
    FLD float ptr [EBX + 0x8]           ; 0048abf6
    FSUB float ptr [ESI + 0x8]          ; 0048abf9 | DAT_01c20150 | DAT_01c2018c
    LEA EAX,[ESP + 0x3c]                ; 0048abfc
    FSTP float ptr [ESP + 0x50]         ; 0048ac00
    CMP EAX,ECX                         ; 0048ac04
    JZ 0x0048ac20                       ; 0048ac06
        ;   XREF to: 0048ac20 (CONDITIONAL_JUMP)  ; LAB_0048ac20
    MOV EAX,dword ptr [ESP + 0x48]      ; 0048ac08
    MOV dword ptr [ESP + 0x3c],EAX      ; 0048ac0c
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048ac10
    MOV dword ptr [ESP + 0x40],EAX      ; 0048ac14
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048ac18
    MOV dword ptr [ESP + 0x44],EAX      ; 0048ac1c
    FLD float ptr [ESP + 0x40]          ; 0048ac20
        ;   Label: LAB_0048ac20
    FMUL ST0                            ; 0048ac24
    FLD float ptr [ESP + 0x3c]          ; 0048ac26
    FMUL ST0                            ; 0048ac2a
    FADDP                               ; 0048ac2c
    FLD float ptr [ESP + 0x44]          ; 0048ac2e
    FMUL ST0                            ; 0048ac32
    FADDP                               ; 0048ac34
    FCOMP double ptr [0x005814b4]       ; 0048ac36 | DOUBLE_005814b4
    FNSTSW AX                           ; 0048ac3c
    SAHF                                ; 0048ac3e
    JNC 0x0048acf5                      ; 0048ac3f
        ;   XREF to: 0048acf5 (CONDITIONAL_JUMP)  ; LAB_0048acf5
    PUSH 0x3f000000                     ; 0048ac45
        ;   Label: LAB_0048ac45
    PUSH EBX                            ; 0048ac4a
    PUSH 0x1fb8508                      ; 0048ac4b
    CALL core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590 ; 0048ac50
        ;   XREF to: 00446590 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_isSphereVisible_FUN_00446590()
    ADD ESP,0xc                         ; 0048ac55
    TEST EAX,EAX                        ; 0048ac58
    JZ 0x0048acc0                       ; 0048ac5a
        ;   XREF to: 0048acc0 (CONDITIONAL_JUMP)  ; caseD_9
    XOR ESI,ESI                         ; 0048ac5c
    MOV EDX,dword ptr [0x01c0a13c]      ; 0048ac5e | DAT_01c0a13c
        ;   Label: LAB_0048ac5e
    IMUL EAX,EDX,0x2c                   ; 0048ac64
    LEA ECX,[EDX + 0x1]                 ; 0048ac67
    ADD EAX,0x1c0a140                   ; 0048ac6a
    MOV dword ptr [0x01c0a13c],ECX      ; 0048ac6f | DAT_01c0a13c
    CMP ECX,0x800                       ; 0048ac75
    JL 0x0048ac85                       ; 0048ac7b
        ;   XREF to: 0048ac85 (CONDITIONAL_JUMP)  ; LAB_0048ac85
    XOR ECX,ECX                         ; 0048ac7d
    MOV dword ptr [0x01c0a13c],ECX      ; 0048ac7f | DAT_01c0a13c
    PUSH 0xffff                         ; 0048ac85
        ;   Label: LAB_0048ac85
    PUSH 0x0                            ; 0048ac8a
    PUSH 0x3e99999a                     ; 0048ac8c
    PUSH EBX                            ; 0048ac91
    PUSH EAX                            ; 0048ac92 | DAT_01c0a140
    INC ESI                             ; 0048ac93
    CALL core_fire.cpp_CSmokeParticle_init_FUN_00482780 ; 0048ac94
        ;   XREF to: 00482780 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CSmokeParticle_init_FUN_00482780()
    ADD ESP,0x14                        ; 0048ac99
    CMP ESI,0x8                         ; 0048ac9c
    JL 0x0048ac5e                       ; 0048ac9f
        ;   XREF to: 0048ac5e (CONDITIONAL_JUMP)  ; LAB_0048ac5e
    MOV ESI,dword ptr [EBP + 0x20]      ; 0048aca1
    CMP ESI,0x9                         ; 0048aca4
    JA 0x0048acc0                       ; 0048aca7
        ;   XREF to: 0048acc0 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,ESI                         ; 0048aca9
    JMP dword ptr [EAX*0x4 + 0x48ab04]  ; 0048acab | caseD_9 | caseD_8 | switchdataD_0048ab04
        ;   Label: switchD
    MOV ECX,0xc                         ; 0048acc0
        ;   Label: caseD_0
    LEA EDI,[ESP + 0x8]                 ; 0048acc5
    MOV ESI,0x5b8bd8                    ; 0048acc9 | DAT_005b8bd8
    MOVSD.REP ES:EDI,ESI                ; 0048acce | DAT_005b8bd8 | DAT_005b8bdc
    MOVSW ES:EDI,ESI                    ; 0048acd0 | DAT_005b8bdc
    MOV EDI,dword ptr [EBP + 0x20]      ; 0048acd2
    CMP EDI,0x9                         ; 0048acd5
    JA 0x0048ace3                       ; 0048acd8
        ;   XREF to: 0048ace3 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,EDI                         ; 0048acda
    JMP dword ptr [EAX*0x4 + 0x48ab2c]  ; 0048acdc | caseD_9 | caseD_8 | caseD_4
        ;   Label: switchD
    CMP byte ptr [ESP + 0x8],0x0        ; 0048ace3
        ;   Label: caseD_0
    JNZ 0x0048ae60                      ; 0048ace8
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    MOV ESP,EBP                         ; 0048acee
    POP EBP                             ; 0048acf0
    POP EDI                             ; 0048acf1
    POP ESI                             ; 0048acf2
    POP EBX                             ; 0048acf3
    RET                                 ; 0048acf4
    MOV ECX,dword ptr [0x01c20140]      ; 0048acf5 | DAT_01c20140
        ;   Label: LAB_0048acf5
    INC EDX                             ; 0048acfb
    ADD ESI,0x3c                        ; 0048acfc
    CMP EDX,ECX                         ; 0048acff
    JL 0x0048abe0                       ; 0048ad01
        ;   XREF to: 0048abe0 (CONDITIONAL_JUMP)  ; LAB_0048abe0
    CMP dword ptr [ESP + 0x54],0x0      ; 0048ad07
        ;   Label: LAB_0048ad07
    JZ 0x0048ac45                       ; 0048ad0c
        ;   XREF to: 0048ac45 (CONDITIONAL_JUMP)  ; LAB_0048ac45
    CALL core_fire.cpp_allocateBulletHole_FUN_0048a0e0 ; 0048ad12
        ;   XREF to: 0048a0e0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_allocateBulletHole_FUN_0048a0e0()
    MOV EDX,dword ptr [EBP + 0x24]      ; 0048ad17
    PUSH EDX                            ; 0048ad1a
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0048ad1b
    PUSH ECX                            ; 0048ad1e
    PUSH EBX                            ; 0048ad1f
    PUSH EAX                            ; 0048ad20
    CALL core_fire.cpp_CBulletHole_init_FUN_00482c80 ; 0048ad21
        ;   XREF to: 00482c80 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CBulletHole_init_FUN_00482c80()
    ADD ESP,0x10                        ; 0048ad26
    JMP 0x0048ac45                      ; 0048ad29
        ;   XREF to: 0048ac45 (UNCONDITIONAL_JUMP)  ; LAB_0048ac45
    XOR ESI,ESI                         ; 0048ad2e
        ;   Label: caseD_2
    PUSH 0xffff                         ; 0048ad30
        ;   Label: LAB_0048ad30
    PUSH 0x0                            ; 0048ad35
    PUSH 0x10000                        ; 0048ad37
    PUSH 0x20000                        ; 0048ad3c
    PUSH 0x0                            ; 0048ad41
    PUSH EBX                            ; 0048ad43
    PUSH EDI                            ; 0048ad44
    INC ESI                             ; 0048ad45
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 0048ad46
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90()
    ADD ESP,0x1c                        ; 0048ad4b
    CMP ESI,0x8                         ; 0048ad4e
    JL 0x0048ad30                       ; 0048ad51
        ;   XREF to: 0048ad30 (CONDITIONAL_JUMP)  ; LAB_0048ad30
    JMP 0x0048acc0                      ; 0048ad53
        ;   XREF to: 0048acc0 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3e2aaaab                     ; 0048ad58
        ;   Label: caseD_2
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0048ad5d
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0048ad62
    TEST EAX,EAX                        ; 0048ad65
    JZ 0x0048ace3                       ; 0048ad67
        ;   XREF to: 0048ace3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 0048ad6d
    CALL core_ground.cpp_getGroundTypeCode_FUN_004b11b0 ; 0048ad6f
        ;   XREF to: 004b11b0 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_getGroundTypeCode_FUN_004b11b0()
    ADD ESP,0x4                         ; 0048ad74
    PUSH EAX                            ; 0048ad77
    PUSH 0x58146c                       ; 0048ad78 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0048ad7d
    PUSH EAX                            ; 0048ad81
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0048ad82
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0048ad87
    CMP byte ptr [ESP + 0x8],0x0        ; 0048ad8a
    JNZ 0x0048ae60                      ; 0048ad8f
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    MOV ESP,EBP                         ; 0048ad95
    POP EBP                             ; 0048ad97
    POP EDI                             ; 0048ad98
    POP ESI                             ; 0048ad99
    POP EBX                             ; 0048ad9a
    RET                                 ; 0048ad9b
    PUSH 0x3e2aaaab                     ; 0048ad9c
        ;   Label: caseD_5
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0048ada1
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0048ada6
    TEST EAX,EAX                        ; 0048ada9
    JZ 0x0048ace3                       ; 0048adab
        ;   XREF to: 0048ace3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x5                            ; 0048adb1
    CALL core_ground.cpp_getGroundTypeCode_FUN_004b11b0 ; 0048adb3
        ;   XREF to: 004b11b0 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_getGroundTypeCode_FUN_004b11b0()
    ADD ESP,0x4                         ; 0048adb8
    PUSH EAX                            ; 0048adbb
    PUSH 0x581479                       ; 0048adbc | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0048adc1
    PUSH EAX                            ; 0048adc5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0048adc6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0048adcb
    CMP byte ptr [ESP + 0x8],0x0        ; 0048adce
    JNZ 0x0048ae60                      ; 0048add3
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    MOV ESP,EBP                         ; 0048add9
    POP EBP                             ; 0048addb
    POP EDI                             ; 0048addc
    POP ESI                             ; 0048addd
    POP EBX                             ; 0048adde
    RET                                 ; 0048addf
    PUSH 0x3e2aaaab                     ; 0048ade0
        ;   Label: caseD_7
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0048ade5
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0048adea
    TEST EAX,EAX                        ; 0048aded
    JZ 0x0048ace3                       ; 0048adef
        ;   XREF to: 0048ace3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x7                            ; 0048adf5
    CALL core_ground.cpp_getGroundTypeCode_FUN_004b11b0 ; 0048adf7
        ;   XREF to: 004b11b0 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_getGroundTypeCode_FUN_004b11b0()
    ADD ESP,0x4                         ; 0048adfc
    PUSH EAX                            ; 0048adff
    PUSH 0x581486                       ; 0048ae00 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0048ae05
    PUSH EAX                            ; 0048ae09
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0048ae0a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0048ae0f
    CMP byte ptr [ESP + 0x8],0x0        ; 0048ae12
    JNZ 0x0048ae60                      ; 0048ae17
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    MOV ESP,EBP                         ; 0048ae19
    POP EBP                             ; 0048ae1b
    POP EDI                             ; 0048ae1c
    POP ESI                             ; 0048ae1d
    POP EBX                             ; 0048ae1e
    RET                                 ; 0048ae1f
    PUSH 0x3e2aaaab                     ; 0048ae20
        ;   Label: caseD_3
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0048ae25
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0048ae2a
    TEST EAX,EAX                        ; 0048ae2d
    JZ 0x0048ace3                       ; 0048ae2f
        ;   XREF to: 0048ace3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3                            ; 0048ae35
    CALL core_ground.cpp_getGroundTypeCode_FUN_004b11b0 ; 0048ae37
        ;   XREF to: 004b11b0 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_getGroundTypeCode_FUN_004b11b0()
    ADD ESP,0x4                         ; 0048ae3c
    PUSH EAX                            ; 0048ae3f
    PUSH 0x581493                       ; 0048ae40 | = "ric-%s.wav"
    LEA EAX,[ESP + 0x10]                ; 0048ae45
    PUSH EAX                            ; 0048ae49
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0048ae4a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0048ae4f
    CMP byte ptr [ESP + 0x8],0x0        ; 0048ae52
    JNZ 0x0048ae60                      ; 0048ae57
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    MOV ESP,EBP                         ; 0048ae59
    POP EBP                             ; 0048ae5b
    POP EDI                             ; 0048ae5c
    POP ESI                             ; 0048ae5d
    POP EBX                             ; 0048ae5e
    RET                                 ; 0048ae5f
    PUSH 0x3e2e147b                     ; 0048ae60
        ;   Label: LAB_0048ae60
    PUSH EBX                            ; 0048ae65
    LEA EAX,[ESP + 0x10]                ; 0048ae66
    PUSH EAX                            ; 0048ae6a
    PUSH 0x0                            ; 0048ae6b
    MOV EAX,[0x005bed68]                ; 0048ae6d | DAT_005bed68
    PUSH EAX                            ; 0048ae72
    CALL core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00 ; 0048ae73
        ;   XREF to: 0052eb00 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playActorPositionalSoundWithDelay_FUN_0052eb00()
    ADD ESP,0x14                        ; 0048ae78
    MOV ESP,EBP                         ; 0048ae7b
    POP EBP                             ; 0048ae7d
    POP EDI                             ; 0048ae7e
    POP ESI                             ; 0048ae7f
    POP EBX                             ; 0048ae80
    RET                                 ; 0048ae81

