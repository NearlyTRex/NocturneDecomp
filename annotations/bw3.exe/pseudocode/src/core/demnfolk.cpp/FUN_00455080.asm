; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_demnfolk_cpp_FUN_00455080(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00454fc0 = 004564b2
;   TerminatedCString s_ghoul_eat_wav_005ba4aa
;   TerminatedCString s_s_picked_up_s_using_hand_005ba4ba
;   TerminatedCString s_core_demnfolk_cpp_005ba4d9
;   undefined4 DAT_005ba4ee
;   TerminatedCString s_s_lugging_s_005ba4f3
;   TerminatedCString s_demn_taunt_wav_005ba502
;   TerminatedCString s_core_demnfolk_cpp_005ba516
;   undefined4 DAT_005ba52b
;   TerminatedCString s_s_tossing_s_005ba530
;   TerminatedCString s_demn_taunt_wav_005ba53f
;   TerminatedCString s_zombie_bang_door_wav_005ba553
;   TerminatedCString s_ghoul_eat_wav_005ba569
;   undefined4 s_ghoul_eat_wav_005ba569+1
;   undefined4 s_ghoul_eat_wav_005ba569+2
;   ... and 55 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cf40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_0042fc90
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455080
        ;   Label: core_demnfolk.cpp_FUN_00455080
    PUSH ESI                            ; 00455081
    PUSH EDI                            ; 00455082
    PUSH EBP                            ; 00455083
    MOV EBP,ESP                         ; 00455084
    SUB ESP,0x63c                       ; 00455086
    SUB EBP,0x7a                        ; 0045508c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0045508f
    PUSH dword ptr [EBP + 0x92]         ; 00455095
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045509b
    PUSH EBX                            ; 004550a1
    CALL dword ptr [EAX + 0x148]        ; 004550a2
    ADD ESP,0x8                         ; 004550a8
    TEST EAX,EAX                        ; 004550ab
    JZ 0x00455167                       ; 004550ad
        ;   XREF to: 00455167 (CONDITIONAL_JUMP)  ; LAB_00455167
    MOV EAX,dword ptr [EBX + 0xd128]    ; 004550b3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004550b9
    JZ 0x0045517e                       ; 004550c1
        ;   XREF to: 0045517e (CONDITIONAL_JUMP)  ; LAB_0045517e
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 004550c7
        ;   Label: LAB_004550c7
    TEST ECX,ECX                        ; 004550cd
    JNZ 0x004551ae                      ; 004550cf
        ;   XREF to: 004551ae (CONDITIONAL_JUMP)  ; LAB_004551ae
    FLD float ptr [EBX + 0xd130]        ; 004550d5
    FLDZ                                ; 004550db
    FCOMPP                              ; 004550dd
    FNSTSW AX                           ; 004550df
    SAHF                                ; 004550e1
    JC 0x0045520e                       ; 004550e2
        ;   XREF to: 0045520e (CONDITIONAL_JUMP)  ; LAB_0045520e
    FLD float ptr [EBP + 0x92]          ; 004550e8
        ;   Label: LAB_004550e8
    LEA EAX,[EBP + 0xfffffb66]          ; 004550ee
    FMUL float ptr [EBX + 0xcdcc]       ; 004550f4
    ADD EAX,0xc                         ; 004550fa
    FMUL float ptr [EBX + 0xd148]       ; 004550fd
    MOV dword ptr [EBP + -0x16],EAX     ; 00455103
    LEA EAX,[EBP + 0xfffffb96]          ; 00455106
    ADD EAX,0xc                         ; 0045510c
    MOV dword ptr [EBP + -0xe],EAX      ; 0045510f
    LEA EAX,[EBX + 0x158]               ; 00455112
    FSTP float ptr [EBP + -0x1a]        ; 00455118
    MOV dword ptr [EBP + 0x4e],EAX      ; 0045511b
    FLD float ptr [EBP + -0x1a]         ; 0045511e
        ;   Label: LAB_0045511e
    FLDZ                                ; 00455121
    FCOMPP                              ; 00455123
    FNSTSW AX                           ; 00455125
    SAHF                                ; 00455127
    JNC 0x00455c28                      ; 00455128
        ;   XREF to: 00455c28 (CONDITIONAL_JUMP)  ; LAB_00455c28
    LEA EAX,[EBP + -0x1a]               ; 0045512e
    PUSH EAX                            ; 00455131
    MOV ECX,dword ptr [EBP + 0x4e]      ; 00455132
    PUSH ECX                            ; 00455135
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00455136
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0045513b
    MOV ESI,EAX                         ; 0045513e
    CMP EAX,0xb                         ; 00455140
    JNC 0x00455bd0                      ; 00455143
        ;   XREF to: 00455bd0 (CONDITIONAL_JUMP)  ; LAB_00455bd0
    CMP EAX,0x5                         ; 00455149
    JNC 0x00455c0a                      ; 0045514c
        ;   XREF to: 00455c0a (CONDITIONAL_JUMP)  ; LAB_00455c0a
    CMP EAX,0x2                         ; 00455152
    JZ 0x004555c0                       ; 00455155
        ;   XREF to: 004555c0 (CONDITIONAL_JUMP)  ; LAB_004555c0
    PUSH ESI                            ; 0045515b
        ;   Label: LAB_0045515b
    PUSH EBX                            ; 0045515c
    CALL core_charactr.cpp_FUN_00433fb0 ; 0045515d
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00455162
    JMP 0x0045511e                      ; 00455165
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV EDI,dword ptr [EBX + 0xd13c]    ; 00455167
        ;   Label: LAB_00455167
    PUSH EDI                            ; 0045516d
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0045516e
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00455173
    LEA ESP,[EBP + 0x7a]                ; 00455176
        ;   Label: LAB_00455176
    POP EBP                             ; 00455179
    POP EDI                             ; 0045517a
    POP ESI                             ; 0045517b
    POP EBX                             ; 0045517c
    RET                                 ; 0045517d
    PUSH EBX                            ; 0045517e
        ;   Label: LAB_0045517e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045517f
    CALL dword ptr [EAX + 0x10c]        ; 00455185
    ADD ESP,0x4                         ; 0045518b
    TEST EAX,EAX                        ; 0045518e
    JNZ 0x004550c7                      ; 00455190
        ;   XREF to: 004550c7 (CONDITIONAL_JUMP)  ; LAB_004550c7
    PUSH 0x1                            ; 00455196
    PUSH 0x17                           ; 00455198
    LEA EAX,[EBX + 0x158]               ; 0045519a
    PUSH EAX                            ; 004551a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004551a1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004551a6
    JMP 0x004550c7                      ; 004551a9
        ;   XREF to: 004550c7 (UNCONDITIONAL_JUMP)  ; LAB_004550c7
    MOV EAX,dword ptr [ECX + 0x154]     ; 004551ae
        ;   Label: LAB_004551ae
    PUSH 0x0                            ; 004551b4
    MOV dword ptr [EBP + 0x76],EAX      ; 004551b6
    LEA EAX,[EBX + 0x158]               ; 004551b9
    LEA ESI,[EBP + 0xfffffdd6]          ; 004551bf
    PUSH EAX                            ; 004551c5
    LEA EDI,[EBP + 0xffffff02]          ; 004551c6
    MOV dword ptr [EBP + -0x2],ECX      ; 004551cc
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 004551cf
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 004551d4
    LEA EAX,[EBP + 0xffffff02]          ; 004551d7
    LEA ESI,[EBP + 0xfffffdd6]          ; 004551dd
    PUSH EAX                            ; 004551e3
    MOVSD ES:EDI,ESI                    ; 004551e4
    MOVSD ES:EDI,ESI                    ; 004551e5
    MOVSD ES:EDI,ESI                    ; 004551e6
    PUSH EBX                            ; 004551e7
    MOV ESI,dword ptr [EBP + -0x2]      ; 004551e8
    MOV EAX,dword ptr [EBP + 0x76]      ; 004551eb
    PUSH ESI                            ; 004551ee
    CALL dword ptr [EAX + 0x110]        ; 004551ef
    ADD ESP,0xc                         ; 004551f5
    TEST EAX,EAX                        ; 004551f8
    JNZ 0x00455176                      ; 004551fa
        ;   XREF to: 00455176 (CONDITIONAL_JUMP)  ; LAB_00455176
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00455200
    LEA ESP,[EBP + 0x7a]                ; 00455206
    POP EBP                             ; 00455209
    POP EDI                             ; 0045520a
    POP ESI                             ; 0045520b
    POP EBX                             ; 0045520c
    RET                                 ; 0045520d
    FLD float ptr [EBX + 0xd130]        ; 0045520e
        ;   Label: LAB_0045520e
    FSUB float ptr [EBP + 0x92]         ; 00455214
    FSTP float ptr [EBX + 0xd130]       ; 0045521a
    JMP 0x004550e8                      ; 00455220
        ;   XREF to: 004550e8 (UNCONDITIONAL_JUMP)  ; LAB_004550e8
    MOV EDI,0x1                         ; 00455225
        ;   Label: LAB_00455225
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0045522a
    MOV dword ptr [EBP + 0x62],EDI      ; 00455230
    TEST EAX,EAX                        ; 00455233
    JNZ 0x00455245                      ; 00455235
        ;   XREF to: 00455245 (CONDITIONAL_JUMP)  ; LAB_00455245
    PUSH EBX                            ; 00455237
        ;   Label: LAB_00455237
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00455238
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 0045523d
    JMP 0x0045511e                      ; 00455240
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV EAX,[0x005de058]                ; 00455245 | DAT_005de058
        ;   Label: LAB_00455245
    MOV dword ptr [EBP + 0xfffffd96],EAX ; 0045524a
    LEA EAX,[EBP + 0xfffffd8e]          ; 00455250
    LEA ESI,[EBP + 0xfffffdfa]          ; 00455256
    PUSH EAX                            ; 0045525c
    LEA EDI,[EBP + 0xfffffd0a]          ; 0045525d
    XOR EDX,EDX                         ; 00455263
    PUSH EBX                            ; 00455265
    MOV dword ptr [EBP + 0xfffffd8e],EDX ; 00455266
    MOV dword ptr [EBP + 0xfffffd92],EDX ; 0045526c
    CALL core_actor.cpp_FUN_00408b80    ; 00455272
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffdfa]          ; 00455277
    MOVSD ES:EDI,ESI                    ; 0045527d
    MOVSD ES:EDI,ESI                    ; 0045527e
    MOVSD ES:EDI,ESI                    ; 0045527f
    FLD float ptr [EBP + 0xfffffd0a]    ; 00455280
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455286
    FLD float ptr [EBP + 0xfffffd0e]    ; 0045528c
    FXCH                                ; 00455292
    FSUB float ptr [EAX + 0x20]         ; 00455294
    FLD float ptr [EBP + 0xfffffd12]    ; 00455297
    FXCH                                ; 0045529d
    FSTP float ptr [EBP + 0xfffffec6]   ; 0045529f
    FXCH                                ; 004552a5
    FSUB float ptr [EAX + 0x24]         ; 004552a7
    LEA EDI,[EBP + 0xfffffea2]          ; 004552aa
    FSTP float ptr [EBP + 0xfffffeca]   ; 004552b0
    FSUB float ptr [EAX + 0x28]         ; 004552b6
    LEA ESI,[EBP + 0xfffffec6]          ; 004552b9
    FSTP float ptr [EBP + 0xfffffece]   ; 004552bf
    MOVSD ES:EDI,ESI                    ; 004552c5
    MOVSD ES:EDI,ESI                    ; 004552c6
    MOVSD ES:EDI,ESI                    ; 004552c7
    FLD float ptr [EBP + 0xfffffea2]    ; 004552c8
    FMUL ST0                            ; 004552ce
    FLD float ptr [EBP + 0xfffffeaa]    ; 004552d0
    FMUL ST0                            ; 004552d6
    FADDP                               ; 004552d8
    FSQRT                               ; 004552da
    XOR ESI,ESI                         ; 004552dc
    ADD ESP,0x8                         ; 004552de
    MOV dword ptr [EBP + 0xfffffea6],ESI ; 004552e1
    FLD1                                ; 004552e7
    FCOMPP                              ; 004552e9
    FNSTSW AX                           ; 004552eb
    SAHF                                ; 004552ed
    JC 0x00455237                       ; 004552ee
        ;   XREF to: 00455237 (CONDITIONAL_JUMP)  ; LAB_00455237
    CMP dword ptr [EBP + 0x62],0x0      ; 004552f4
    JZ 0x004553bc                       ; 004552f8
        ;   XREF to: 004553bc (CONDITIONAL_JUMP)  ; LAB_004553bc
    MOV EDX,0x40800000                  ; 004552fe
    LEA EAX,[EBP + 0xfffffd76]          ; 00455303
    LEA EDI,[EBP + 0xfffffc86]          ; 00455309
    PUSH EAX                            ; 0045530f
    MOV dword ptr [EBP + 0xfffffd76],ESI ; 00455310
    MOV dword ptr [EBP + 0xfffffd7e],ESI ; 00455316
    PUSH EBX                            ; 0045531c
    LEA ESI,[EBP + -0x62]               ; 0045531d
    MOV dword ptr [EBP + 0xfffffd7a],EDX ; 00455320
    CALL core_actor.cpp_FUN_00408b80    ; 00455326
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x62]               ; 0045532b
    MOVSD ES:EDI,ESI                    ; 0045532e
    MOVSD ES:EDI,ESI                    ; 0045532f
    MOVSD ES:EDI,ESI                    ; 00455330
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00455331
    LEA EDI,[EBP + 0xffffff3e]          ; 00455337
    LEA ESI,[ESI + 0x20]                ; 0045533d
    MOVSD ES:EDI,ESI                    ; 00455340
    MOVSD ES:EDI,ESI                    ; 00455341
    MOVSD ES:EDI,ESI                    ; 00455342
    ADD ESP,0x8                         ; 00455343
    MOV ESI,dword ptr [0x00603b28]      ; 00455346 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0xfffffc8a] ; 0045534c
    PUSH ESI                            ; 00455352 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xffffff42],EAX ; 00455353
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00455359
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045535e
    PUSH EBX                            ; 00455361
    MOV EDI,dword ptr [0x00603b28]      ; 00455362 | g_CDemonSetPtr
    PUSH EDI                            ; 00455368 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00455369
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045536e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455371
    PUSH EAX                            ; 00455377
    MOV EDX,dword ptr [0x00603b28]      ; 00455378 | g_CDemonSetPtr
    PUSH EDX                            ; 0045537e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0045537f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00455384
    LEA EAX,[EBP + 0xffffff3e]          ; 00455387
    PUSH EAX                            ; 0045538d
    LEA EAX,[EBP + 0xfffffc86]          ; 0045538e
    PUSH EAX                            ; 00455394
    MOV ECX,dword ptr [0x00603b28]      ; 00455395 | g_CDemonSetPtr
    PUSH ECX                            ; 0045539b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 0045539c
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004553a1
    TEST EAX,EAX                        ; 004553a4
    JZ 0x004553ad                       ; 004553a6
        ;   XREF to: 004553ad (CONDITIONAL_JUMP)  ; LAB_004553ad
    XOR ESI,ESI                         ; 004553a8
    MOV dword ptr [EBP + 0x62],ESI      ; 004553aa
    MOV EDI,dword ptr [0x00603b28]      ; 004553ad | g_CDemonSetPtr
        ;   Label: LAB_004553ad
    PUSH EDI                            ; 004553b3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004553b4
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004553b9
    CMP dword ptr [EBP + 0x62],0x0      ; 004553bc
        ;   Label: LAB_004553bc
    JZ 0x004553e3                       ; 004553c0
        ;   XREF to: 004553e3 (CONDITIONAL_JUMP)  ; LAB_004553e3
    PUSH 0x0                            ; 004553c2
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004553c4
    PUSH EBX                            ; 004553ca
    MOV ESI,dword ptr [EAX + 0x154]     ; 004553cb
    PUSH EAX                            ; 004553d1
    CALL dword ptr [ESI + 0xec]         ; 004553d2
    ADD ESP,0xc                         ; 004553d8
    TEST EAX,EAX                        ; 004553db
    JZ 0x00455237                       ; 004553dd
        ;   XREF to: 00455237 (CONDITIONAL_JUMP)  ; LAB_00455237
    CMP dword ptr [EBP + 0x62],0x0      ; 004553e3
        ;   Label: LAB_004553e3
    JNZ 0x0045511e                      ; 004553e7
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH EBX                            ; 004553ed
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 004553ee
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 004553f3
    JMP 0x0045511e                      ; 004553f6
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    CMP dword ptr [EBX + 0xcde4],0x0    ; 004553fb
        ;   Label: LAB_004553fb
    JNZ 0x00455412                      ; 00455402
        ;   XREF to: 00455412 (CONDITIONAL_JUMP)  ; LAB_00455412
    PUSH EBX                            ; 00455404
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00455405
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 0045540a
    JMP 0x0045511e                      ; 0045540d
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV EDI,dword ptr [EBX + 0xd0e8]    ; 00455412
        ;   Label: LAB_00455412
    PUSH EDI                            ; 00455418
    MOV EAX,dword ptr [EBP + 0x4e]      ; 00455419
    PUSH EAX                            ; 0045541c
    LEA ESI,[EBP + 0xffffff26]          ; 0045541d
    LEA EDI,[EBP + 0xfffffed2]          ; 00455423
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00455429
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0045542e
    LEA EAX,[EBP + 0xfffffed2]          ; 00455431
    LEA ESI,[EBP + 0xffffff26]          ; 00455437
    PUSH EAX                            ; 0045543d
    MOVSD ES:EDI,ESI                    ; 0045543e
    MOVSD ES:EDI,ESI                    ; 0045543f
    MOVSD ES:EDI,ESI                    ; 00455440
    PUSH EBX                            ; 00455441
    LEA ESI,[EBP + 0xffffff1a]          ; 00455442
    LEA EDI,[EBP + 0xfffffd52]          ; 00455448
    CALL core_actor.cpp_FUN_00408b80    ; 0045544e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff1a]          ; 00455453
    MOVSD ES:EDI,ESI                    ; 00455459
    MOVSD ES:EDI,ESI                    ; 0045545a
    MOVSD ES:EDI,ESI                    ; 0045545b
    MOV EDX,dword ptr [EBX + 0xd124]    ; 0045545c
    ADD ESP,0x8                         ; 00455462
    TEST EDX,EDX                        ; 00455465
    JL 0x00455491                       ; 00455467
        ;   XREF to: 00455491 (CONDITIONAL_JUMP)  ; LAB_00455491
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455469
    PUSH EAX                            ; 0045546f
    MOV ESI,dword ptr [EAX + 0x154]     ; 00455470
    CALL dword ptr [ESI + 0xf4]         ; 00455476
    ADD ESP,0x4                         ; 0045547c
    CMP EAX,EBX                         ; 0045547f
    JZ 0x004554ca                       ; 00455481
        ;   XREF to: 004554ca (CONDITIONAL_JUMP)  ; LAB_004554ca
    PUSH EBX                            ; 00455483
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00455484
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00455489
    JMP 0x0045511e                      ; 0045548c
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455491
        ;   Label: LAB_00455491
    FLD float ptr [EBP + 0xfffffd52]    ; 00455497
    FSUB float ptr [EAX + 0x20]         ; 0045549d
    FMUL ST0                            ; 004554a0
    FLD float ptr [EBP + 0xfffffd5a]    ; 004554a2
    FSUB float ptr [EAX + 0x28]         ; 004554a8
    FMUL ST0                            ; 004554ab
    FADDP                               ; 004554ad
    FSQRT                               ; 004554af
    FCOMP double ptr [0x005ba722]       ; 004554b1 | DAT_005ba722
    FNSTSW AX                           ; 004554b7
    SAHF                                ; 004554b9
    JBE 0x004554ca                      ; 004554ba
        ;   XREF to: 004554ca (CONDITIONAL_JUMP)  ; LAB_004554ca
    PUSH EBX                            ; 004554bc
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 004554bd
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 004554c2
    JMP 0x0045511e                      ; 004554c5
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    LEA EAX,[EBP + 0xfffffa7a]          ; 004554ca
        ;   Label: LAB_004554ca
    PUSH EAX                            ; 004554d0
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004554d1
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004554d6
    PUSH 0x41a00000                     ; 004554d9
    PUSH 0x41200000                     ; 004554de
    LEA ESI,[EBP + 0xfffffa7a]          ; 004554e3
    CALL core_actor.cpp_FUN_0040ce40    ; 004554e9
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 004554ee
    ADD ESP,0x8                         ; 004554f1
    FLD float ptr [EBP + 0x76]          ; 004554f4
    FMUL float ptr [EBX + 0xd148]       ; 004554f7
    PUSH ESI                            ; 004554fd
    MOV dword ptr [EBP + 0xfffffaae],EBX ; 004554fe
    MOV dword ptr [EBP + 0xfffffab2],EBX ; 00455504
    FSTP float ptr [EBP + 0xfffffa7e]   ; 0045550a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455510
    PUSH EAX                            ; 00455516
    MOV EDI,dword ptr [EAX + 0x154]     ; 00455517
    CALL dword ptr [EDI + 0x108]        ; 0045551d
    FLD float ptr [EBP + 0xfffffa7e]    ; 00455523
    FLDZ                                ; 00455529
    ADD ESP,0x8                         ; 0045552b
    FXCH                                ; 0045552e
    FSTP double ptr [EBP + -0x36]       ; 00455530
    FCOMP double ptr [EBP + -0x36]      ; 00455533
    FNSTSW AX                           ; 00455536
    SAHF                                ; 00455538
    JNC 0x00455570                      ; 00455539
        ;   XREF to: 00455570 (CONDITIONAL_JUMP)  ; LAB_00455570
    FLD double ptr [EBP + -0x36]        ; 0045553b
    FMUL double ptr [0x005ba6f2]        ; 0045553e | DAT_005ba6f2
    FMUL double ptr [0x005ba6fa]        ; 00455544 | DAT_005ba6fa
    PUSH 0x0                            ; 0045554a
    CALL crt_math.c_round_FUN_005a3120  ; 0045554c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x36]        ; 00455551
    MOV ECX,dword ptr [EBP + 0x36]      ; 00455554
    PUSH ECX                            ; 00455557
    PUSH 0x0                            ; 00455558
    LEA EAX,[EBP + 0xfffffd52]          ; 0045555a
    PUSH EAX                            ; 00455560
    MOV ESI,dword ptr [0x005fed24]      ; 00455561 | g_CGorePtr
    PUSH ESI                            ; 00455567
    CALL core_gore.cpp_FUN_004ce9c0     ; 00455568
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0045556d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455570
        ;   Label: LAB_00455570
    PUSH EAX                            ; 00455576
    MOV ESI,dword ptr [EAX + 0x154]     ; 00455577
    CALL dword ptr [ESI + 0x10c]        ; 0045557d
    ADD ESP,0x4                         ; 00455583
    TEST EAX,EAX                        ; 00455586
    JLE 0x004555a9                      ; 00455588
        ;   XREF to: 004555a9 (CONDITIONAL_JUMP)  ; LAB_004555a9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0045558a
    PUSH EAX                            ; 00455590
    MOV ESI,dword ptr [EAX + 0x154]     ; 00455591
    CALL dword ptr [ESI + 0xf0]         ; 00455597
    ADD ESP,0x4                         ; 0045559d
    PUSH EBX                            ; 004555a0
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 004555a1
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 004555a6
    PUSH 0x5ba4aa                       ; 004555a9 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004555a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004555ae
    PUSH EBX                            ; 004555b4
    CALL dword ptr [EAX + 0x2c]         ; 004555b5
    ADD ESP,0x8                         ; 004555b8
    JMP 0x0045511e                      ; 004555bb
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ECX,dword ptr [EBX + 0xd064]    ; 004555c0
        ;   Label: LAB_004555c0
    TEST ECX,ECX                        ; 004555c6
    JZ 0x0045511e                       ; 004555c8
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ESI,dword ptr [EBX + 0xd068]    ; 004555ce
    PUSH ESI                            ; 004555d4
    PUSH EBX                            ; 004555d5
    MOV EDI,ECX                         ; 004555d6
    MOV dword ptr [EBX + 0xd064],0x0    ; 004555d8
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 004555e2
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 004555e7
    MOV ESI,EAX                         ; 004555ea
    TEST EAX,EAX                        ; 004555ec
    JL 0x0045511e                       ; 004555ee
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH 0x0                            ; 004555f4
    PUSH 0x3e4ccccd                     ; 004555f6
    PUSH EDI                            ; 004555fb
    PUSH EAX                            ; 004555fc
    PUSH EBX                            ; 004555fd
    CALL core_charactr.cpp_FUN_004319d0 ; 004555fe
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 00455603
    PUSH ESI                            ; 00455606
    PUSH EDI                            ; 00455607
    PUSH EBX                            ; 00455608
    MOV EAX,0x5ba4ba                    ; 00455609 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 0045560e | = "%s picked up %s using hand %d\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0045560f | g_CConsolePtr
    PUSH EDI                            ; 00455615 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00455616
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x14                        ; 0045561b
    JMP 0x0045511e                      ; 0045561e
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH 0x2                            ; 00455623
        ;   Label: LAB_00455623
    PUSH EBX                            ; 00455625
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 00455626
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 0045562b
    MOV ESI,EAX                         ; 0045562e
    TEST EAX,EAX                        ; 00455630
    JL 0x004556aa                       ; 00455632
        ;   XREF to: 004556aa (CONDITIONAL_JUMP)  ; LAB_004556aa
    IMUL EAX,ESI,0x78                   ; 00455634
        ;   Label: LAB_00455634
    ADD EAX,EBX                         ; 00455637
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 00455639
    TEST EDX,EDX                        ; 0045563f
    JZ 0x0045511e                       ; 00455641
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH EDX                            ; 00455647
    PUSH EBX                            ; 00455648
    PUSH 0x5ba4f3                       ; 00455649 | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0045564e | g_CConsolePtr
    PUSH EDI                            ; 00455654 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00455655
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EDX,0x40c00000                  ; 0045565a
    MOV ECX,0x41880000                  ; 0045565f
    ADD ESP,0x10                        ; 00455664
    XOR EAX,EAX                         ; 00455667
    LEA EDI,[EBP + 0xfffffe72]          ; 00455669
    MOV dword ptr [EBP + 0xfffffe72],EAX ; 0045566f
    PUSH EDI                            ; 00455675
    MOV dword ptr [EBP + 0xfffffe76],EDX ; 00455676
    MOV dword ptr [EBP + 0xfffffe7a],ECX ; 0045567c
    PUSH ESI                            ; 00455682
    MOV EAX,dword ptr [EBX + 0x154]     ; 00455683
    PUSH EBX                            ; 00455689
    CALL dword ptr [EAX + 0x128]        ; 0045568a
    ADD ESP,0xc                         ; 00455690
    PUSH 0x5ba502                       ; 00455693 | = "demn_taunt__???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00455698
    PUSH EBX                            ; 0045569e
    CALL dword ptr [EAX + 0x2c]         ; 0045569f
    ADD ESP,0x8                         ; 004556a2
    JMP 0x0045511e                      ; 004556a5
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ECX,0x5ba4d9                    ; 004556aa | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_004556aa
    MOV EDI,0x21f                       ; 004556af
    PUSH 0x5ba4ee                       ; 004556b4 | DAT_005ba4ee
    MOV dword ptr [0x01d71de0],ECX      ; 004556b9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004556bf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004556c5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004556ca
    JMP 0x00455634                      ; 004556cd
        ;   XREF to: 00455634 (UNCONDITIONAL_JUMP)  ; LAB_00455634
    PUSH 0x3                            ; 004556d2
        ;   Label: LAB_004556d2
    PUSH EBX                            ; 004556d4
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 004556d5
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 004556da
    MOV dword ptr [EBP + -0x26],EAX     ; 004556dd
    TEST EAX,EAX                        ; 004556e0
    JL 0x004557b3                       ; 004556e2
        ;   XREF to: 004557b3 (CONDITIONAL_JUMP)  ; LAB_004557b3
    IMUL EAX,dword ptr [EBP + -0x26],0x78 ; 004556e8
        ;   Label: LAB_004556e8
    LEA EDX,[EBX + EAX*0x1]             ; 004556ec
    MOV ECX,dword ptr [EDX + 0x25b0]    ; 004556ef
    MOV dword ptr [EBP + 0x42],EDX      ; 004556f5
    TEST ECX,ECX                        ; 004556f8
    JZ 0x0045511e                       ; 004556fa
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH ECX                            ; 00455700
    PUSH EBX                            ; 00455701
    PUSH 0x5ba530                       ; 00455702 | = "%s tossing %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00455707 | g_CConsolePtr
    PUSH EDI                            ; 0045570d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0045570e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    XOR EAX,EAX                         ; 00455713
    MOV ECX,0x3f800000                  ; 00455715
    MOV dword ptr [EBP + 0xfffffcc2],EAX ; 0045571a
    MOV dword ptr [EBP + 0xfffffcc6],EAX ; 00455720
    MOV dword ptr [EBP + 0xfffffcca],ECX ; 00455726
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0045572c
    ADD ESP,0x10                        ; 00455732
    TEST ESI,ESI                        ; 00455735
    JNZ 0x004557db                      ; 00455737
        ;   XREF to: 004557db (CONDITIONAL_JUMP)  ; LAB_004557db
    FLD float ptr [0x005ba6ee]          ; 0045573d | DAT_005ba6ee
        ;   Label: LAB_0045573d
    FLD float ptr [EBP + 0xfffffcc2]    ; 00455743
    FMUL ST1                            ; 00455749
    FLD float ptr [EBP + 0xfffffcc6]    ; 0045574b
    FMUL ST2                            ; 00455751
    FLD float ptr [EBP + 0xfffffcca]    ; 00455753
    FMULP ST3                           ; 00455759
    LEA ESI,[EBP + 0xfffffcc2]          ; 0045575b
    MOV EDX,dword ptr [EBP + -0x26]     ; 00455761
    PUSH ESI                            ; 00455764
    FXCH                                ; 00455765
    FSTP float ptr [EBP + 0xfffffcc2]   ; 00455767
    FSTP float ptr [EBP + 0xfffffcc6]   ; 0045576d
    FSTP float ptr [EBP + 0xfffffcca]   ; 00455773
    FLD float ptr [EBP + 0xfffffcc6]    ; 00455779
    PUSH EDX                            ; 0045577f
    FADD float ptr [0x005ba71a]         ; 00455780 | DAT_005ba71a
    PUSH EBX                            ; 00455786
    FSTP float ptr [EBP + 0xfffffcc6]   ; 00455787
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045578d
    CALL dword ptr [EAX + 0x128]        ; 00455793
    ADD ESP,0xc                         ; 00455799
    PUSH 0x5ba53f                       ; 0045579c | = "demn_taunt__???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004557a1
    PUSH EBX                            ; 004557a7
    CALL dword ptr [EAX + 0x2c]         ; 004557a8
    ADD ESP,0x8                         ; 004557ab
    JMP 0x0045511e                      ; 004557ae
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ESI,0x5ba516                    ; 004557b3 | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_004557b3
    MOV EDI,0x236                       ; 004557b8
    PUSH 0x5ba52b                       ; 004557bd | DAT_005ba52b
    MOV dword ptr [0x01d71de0],ESI      ; 004557c2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004557c8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004557ce
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004557d3
    JMP 0x004556e8                      ; 004557d6
        ;   XREF to: 004556e8 (UNCONDITIONAL_JUMP)  ; LAB_004556e8
    MOV EAX,dword ptr [EBP + 0x42]      ; 004557db
        ;   Label: LAB_004557db
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 004557de
    PUSH EAX                            ; 004557e4
    MOV EDI,dword ptr [EAX + 0x154]     ; 004557e5
    LEA ESI,[EBP + 0xfffffb06]          ; 004557eb
    CALL dword ptr [EDI + 0x1c]         ; 004557f1
    MOV ECX,0x6                         ; 004557f4
    LEA EDI,[EBP + 0xfffffb66]          ; 004557f9
    LEA ESI,[EBP + 0xfffffb06]          ; 004557ff
    MOVSD.REP ES:EDI,ESI                ; 00455805
    MOV EAX,dword ptr [EBP + -0x16]     ; 00455807
    FLD float ptr [EBP + 0xfffffb6a]    ; 0045580a
    FLD float ptr [EBP + 0xfffffb66]    ; 00455810
    FADD float ptr [EAX]                ; 00455816
    FLD float ptr [EBP + 0xfffffb6e]    ; 00455818
    FXCH                                ; 0045581e
    FSTP float ptr [EBP + 0xfffffd22]   ; 00455820
    FXCH                                ; 00455826
    FADD float ptr [EAX + 0x4]          ; 00455828
    LEA EDI,[EBP + 0xfffffe66]          ; 0045582b
    FSTP float ptr [EBP + 0xfffffd26]   ; 00455831
    FADD float ptr [EAX + 0x8]          ; 00455837
    LEA ESI,[EBP + 0xfffffd22]          ; 0045583a
    FSTP float ptr [EBP + 0xfffffd2a]   ; 00455840
    MOVSD ES:EDI,ESI                    ; 00455846
    MOVSD ES:EDI,ESI                    ; 00455847
    MOVSD ES:EDI,ESI                    ; 00455848
    FLD float ptr [EBP + 0xfffffe66]    ; 00455849
    FMUL float ptr [0x005ba6ea]         ; 0045584f | DAT_005ba6ea
    FLD float ptr [EBP + 0xfffffe6a]    ; 00455855
    FMUL float ptr [0x005ba6ea]         ; 0045585b | DAT_005ba6ea
    ADD ESP,0x4                         ; 00455861
    LEA EAX,[EBP + -0x7a]               ; 00455864
    FLD float ptr [EBP + 0xfffffe6e]    ; 00455867
    FMUL float ptr [0x005ba6ea]         ; 0045586d | DAT_005ba6ea
    PUSH EAX                            ; 00455873
    LEA EDI,[EBP + -0x7a]               ; 00455874
    LEA ESI,[EBP + 0xfffffc62]          ; 00455877
    MOV EAX,dword ptr [EBP + 0x42]      ; 0045587d
    FXCH ST2                            ; 00455880
    FSTP float ptr [EBP + 0xfffffc62]   ; 00455882
    FSTP float ptr [EBP + 0xfffffc66]   ; 00455888
    FSTP float ptr [EBP + 0xfffffc6a]   ; 0045588e
    MOVSD ES:EDI,ESI                    ; 00455894
    MOVSD ES:EDI,ESI                    ; 00455895
    MOVSD ES:EDI,ESI                    ; 00455896
    MOV EDI,dword ptr [EAX + 0x25b0]    ; 00455897
    PUSH EDI                            ; 0045589d
    LEA ESI,[EBP + 0xfffffcb6]          ; 0045589e
    LEA EDI,[EBP + 0xfffffde2]          ; 004558a4
    CALL core_actor.cpp_FUN_00408b80    ; 004558aa
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffcb6]          ; 004558af
    MOVSD ES:EDI,ESI                    ; 004558b5
    MOVSD ES:EDI,ESI                    ; 004558b6
    MOVSD ES:EDI,ESI                    ; 004558b7
    ADD ESP,0x8                         ; 004558b8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004558bb
    PUSH EAX                            ; 004558c1
    MOV EDI,dword ptr [EAX + 0x154]     ; 004558c2
    LEA ESI,[EBP + 0xfffffb4e]          ; 004558c8
    CALL dword ptr [EDI + 0x1c]         ; 004558ce
    MOV ECX,0x6                         ; 004558d1
    LEA EDI,[EBP + 0xfffffb96]          ; 004558d6
    LEA ESI,[EBP + 0xfffffb4e]          ; 004558dc
    MOVSD.REP ES:EDI,ESI                ; 004558e2
    MOV EAX,dword ptr [EBP + -0xe]      ; 004558e4
    FLD float ptr [EBP + 0xfffffb9a]    ; 004558e7
    FLD float ptr [EBP + 0xfffffb96]    ; 004558ed
    FADD float ptr [EAX]                ; 004558f3
    FLD float ptr [EBP + 0xfffffb9e]    ; 004558f5
    FXCH                                ; 004558fb
    FSTP float ptr [EBP + 0xfffffe7e]   ; 004558fd
    FXCH                                ; 00455903
    FADD float ptr [EAX + 0x4]          ; 00455905
    LEA EDI,[EBP + 0xfffffc32]          ; 00455908
    FSTP float ptr [EBP + 0xfffffe82]   ; 0045590e
    FADD float ptr [EAX + 0x8]          ; 00455914
    LEA ESI,[EBP + 0xfffffe7e]          ; 00455917
    FSTP float ptr [EBP + 0xfffffe86]   ; 0045591d
    MOVSD ES:EDI,ESI                    ; 00455923
    MOVSD ES:EDI,ESI                    ; 00455924
    MOVSD ES:EDI,ESI                    ; 00455925
    FLD float ptr [EBP + 0xfffffc32]    ; 00455926
    FMUL float ptr [0x005ba6ea]         ; 0045592c | DAT_005ba6ea
    FLD float ptr [EBP + 0xfffffc36]    ; 00455932
    FMUL float ptr [0x005ba6ea]         ; 00455938 | DAT_005ba6ea
    FLD float ptr [EBP + 0xfffffc3a]    ; 0045593e
    FMUL float ptr [0x005ba6ea]         ; 00455944 | DAT_005ba6ea
    ADD ESP,0x4                         ; 0045594a
    LEA EAX,[EBP + 0xfffffd6a]          ; 0045594d
    LEA EDI,[EBP + 0xfffffd6a]          ; 00455953
    LEA ESI,[EBP + 0xfffffe12]          ; 00455959
    FXCH ST2                            ; 0045595f
    FSTP float ptr [EBP + 0xfffffe12]   ; 00455961
    FSTP float ptr [EBP + 0xfffffe16]   ; 00455967
    FSTP float ptr [EBP + 0xfffffe1a]   ; 0045596d
    MOVSD ES:EDI,ESI                    ; 00455973
    MOVSD ES:EDI,ESI                    ; 00455974
    MOVSD ES:EDI,ESI                    ; 00455975
    PUSH EAX                            ; 00455976
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00455977
    PUSH EAX                            ; 0045597d
    LEA ESI,[EBP + 0xfffffe1e]          ; 0045597e
    LEA EDI,[EBP + 0xfffffdbe]          ; 00455984
    CALL core_actor.cpp_FUN_00408b80    ; 0045598a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffe1e]          ; 0045598f
    MOVSD ES:EDI,ESI                    ; 00455995
    MOVSD ES:EDI,ESI                    ; 00455996
    MOVSD ES:EDI,ESI                    ; 00455997
    FLD float ptr [EBP + 0xfffffdbe]    ; 00455998
    FLD float ptr [EBP + 0xfffffdc2]    ; 0045599e
    FLD float ptr [EBP + 0xfffffdc6]    ; 004559a4
    LEA EDI,[EBP + 0xfffffc26]          ; 004559aa
    LEA ESI,[EBP + 0xfffffce6]          ; 004559b0
    FXCH ST2                            ; 004559b6
    FSUB float ptr [EBP + 0xfffffde2]   ; 004559b8
    FXCH                                ; 004559be
    FSUB float ptr [EBP + 0xfffffde6]   ; 004559c0
    FXCH ST2                            ; 004559c6
    FSUB float ptr [EBP + 0xfffffdea]   ; 004559c8
    FXCH                                ; 004559ce
    FSTP float ptr [EBP + 0xfffffce6]   ; 004559d0
    FXCH                                ; 004559d6
    FSTP float ptr [EBP + 0xfffffcea]   ; 004559d8
    FSTP float ptr [EBP + 0xfffffcee]   ; 004559de
    MOVSD ES:EDI,ESI                    ; 004559e4
    MOVSD ES:EDI,ESI                    ; 004559e5
    MOVSD ES:EDI,ESI                    ; 004559e6
    FLD float ptr [EBP + 0xfffffc2a]    ; 004559e7
    FMUL ST0                            ; 004559ed
    FLD float ptr [EBP + 0xfffffc26]    ; 004559ef
    FMUL ST0                            ; 004559f5
    FADDP                               ; 004559f7
    FLD float ptr [EBP + 0xfffffc2e]    ; 004559f9
    FMUL ST0                            ; 004559ff
    FADDP                               ; 00455a01
    FSQRT                               ; 00455a03
    ADD ESP,0x8                         ; 00455a05
    FST float ptr [EBP + 0x22]          ; 00455a08
    FLDZ                                ; 00455a0b
    FCOMPP                              ; 00455a0d
    FNSTSW AX                           ; 00455a0f
    SAHF                                ; 00455a11
    JNC 0x0045573d                      ; 00455a12
        ;   XREF to: 0045573d (CONDITIONAL_JUMP)  ; LAB_0045573d
    LEA EAX,[EBP + 0xfffffc26]          ; 00455a18
    PUSH EAX                            ; 00455a1e
    PUSH EBX                            ; 00455a1f
    LEA ESI,[EBP + -0x56]               ; 00455a20
    LEA EDI,[EBP + 0xffffff56]          ; 00455a23
    CALL core_actor.cpp_FUN_00408b40    ; 00455a29
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + -0x56]               ; 00455a2e
    MOVSD ES:EDI,ESI                    ; 00455a31
    MOVSD ES:EDI,ESI                    ; 00455a32
    MOVSD ES:EDI,ESI                    ; 00455a33
    FLD1                                ; 00455a34
    FLD float ptr [EBP + 0xffffff56]    ; 00455a36
    FXCH                                ; 00455a3c
    FDIV float ptr [EBP + 0x22]         ; 00455a3e
    FXCH                                ; 00455a41
    FMUL ST1                            ; 00455a43
    FLD float ptr [EBP + 0xffffff5a]    ; 00455a45
    FMUL ST2                            ; 00455a4b
    FLD float ptr [EBP + 0xffffff5e]    ; 00455a4d
    FMULP ST3                           ; 00455a53
    LEA EDI,[EBP + 0xffffff0e]          ; 00455a55
    LEA ESI,[EBP + 0xfffffbde]          ; 00455a5b
    FXCH                                ; 00455a61
    FSTP float ptr [EBP + 0xfffffbde]   ; 00455a63
    FSTP float ptr [EBP + 0xfffffbe2]   ; 00455a69
    FSTP float ptr [EBP + 0xfffffbe6]   ; 00455a6f
    MOVSD ES:EDI,ESI                    ; 00455a75
    MOVSD ES:EDI,ESI                    ; 00455a76
    MOVSD ES:EDI,ESI                    ; 00455a77
    LEA EAX,[EBP + 0xfffffcc2]          ; 00455a78
    LEA ESI,[EBP + 0xffffff0e]          ; 00455a7e
    ADD ESP,0x8                         ; 00455a84
    CMP EAX,ESI                         ; 00455a87
    JZ 0x0045573d                       ; 00455a89
        ;   XREF to: 0045573d (CONDITIONAL_JUMP)  ; LAB_0045573d
    MOV EAX,dword ptr [EBP + 0xffffff0e] ; 00455a8f
    MOV dword ptr [EBP + 0xfffffcc2],EAX ; 00455a95
    MOV EAX,dword ptr [EBP + 0xffffff12] ; 00455a9b
    MOV dword ptr [EBP + 0xfffffcc6],EAX ; 00455aa1
    MOV EAX,dword ptr [EBP + 0xffffff16] ; 00455aa7
    MOV dword ptr [EBP + 0xfffffcca],EAX ; 00455aad
    JMP 0x0045573d                      ; 00455ab3
        ;   XREF to: 0045573d (UNCONDITIONAL_JUMP)  ; LAB_0045573d
    MOV EDX,dword ptr [EBX + 0xd070]    ; 00455ab8
        ;   Label: LAB_00455ab8
    TEST EDX,EDX                        ; 00455abe
    JZ 0x0045511e                       ; 00455ac0
        ;   XREF to: 0045511e (CONDITIONAL_JUMP)  ; LAB_0045511e
    PUSH 0x3e99999a                     ; 00455ac6
    PUSH EDX                            ; 00455acb
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00465060 ; 00455acc
        ;   XREF to: 00465060 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00465060(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 00455ad1
    MOV EAX,dword ptr [EBX + 0xd070]    ; 00455ad4
    PUSH 0x5ba553                       ; 00455ada | = "zombie-bang-door?.wav"
    MOV ESI,dword ptr [EAX + 0x154]     ; 00455adf
    PUSH EAX                            ; 00455ae5
    CALL dword ptr [ESI + 0x2c]         ; 00455ae6
    ADD ESP,0x8                         ; 00455ae9
    MOV dword ptr [EBX + 0xd070],0x0    ; 00455aec
    JMP 0x0045511e                      ; 00455af6
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 00455afb
        ;   Label: LAB_00455afb
    PUSH ESI                            ; 00455b01
    MOV EDI,dword ptr [EBP + 0x4e]      ; 00455b02
    PUSH EDI                            ; 00455b05
    LEA ESI,[EBP + 0xfffffc6e]          ; 00455b06
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00455b0c
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA EDI,[EBP + 0xfffffe5a]          ; 00455b11
    ADD ESP,0x8                         ; 00455b17
    LEA EAX,[EBP + 0xfffffe5a]          ; 00455b1a
    LEA ESI,[EBP + 0xfffffc6e]          ; 00455b20
    PUSH EAX                            ; 00455b26
    MOVSD ES:EDI,ESI                    ; 00455b27
    MOVSD ES:EDI,ESI                    ; 00455b28
    MOVSD ES:EDI,ESI                    ; 00455b29
    PUSH EBX                            ; 00455b2a
    LEA ESI,[EBP + 0xfffffbf6]          ; 00455b2b
    CALL core_actor.cpp_FUN_00408b80    ; 00455b31
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00455b36
    PUSH 0x0                            ; 00455b39
    PUSH 0x3                            ; 00455b3b
    PUSH 0x0                            ; 00455b3d
    LEA EAX,[EBP + 0xffffff4a]          ; 00455b3f
    LEA EDI,[EBP + 0xffffff4a]          ; 00455b45
    PUSH EAX                            ; 00455b4b
    MOV EAX,[0x005fed24]                ; 00455b4c | g_CGorePtr
    LEA ESI,[EBP + 0xfffffbf6]          ; 00455b51
    PUSH EAX                            ; 00455b57
    MOVSD ES:EDI,ESI                    ; 00455b58
    MOVSD ES:EDI,ESI                    ; 00455b59
    MOVSD ES:EDI,ESI                    ; 00455b5a
    CALL core_gore.cpp_FUN_004ce9c0     ; 00455b5b
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00455b60
    PUSH 0x3f000000                     ; 00455b63
    CALL core_actor.cpp_FUN_0040cf40    ; 00455b68
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00455b6d
    TEST EAX,EAX                        ; 00455b70
    JZ 0x00455bb2                       ; 00455b72
        ;   XREF to: 00455bb2 (CONDITIONAL_JUMP)  ; LAB_00455bb2
    MOV ESI,0x5ba569                    ; 00455b74 | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffab6]          ; 00455b79
        ;   Label: LAB_00455b79
    PUSH EDI                            ; 00455b7f
    MOV AL,byte ptr [ESI]               ; 00455b80 | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005ba569+2 | s_ghoul_dig_wav_005ba579
        ;   Label: LAB_00455b80
    MOV byte ptr [EDI],AL               ; 00455b82
    CMP AL,0x0                          ; 00455b84
    JZ 0x00455b98                       ; 00455b86
        ;   XREF to: 00455b98 (CONDITIONAL_JUMP)  ; LAB_00455b98
    MOV AL,byte ptr [ESI + 0x1]         ; 00455b88 | s_ghoul_eat_wav_005ba569+1 | s_ghoul_eat_wav_005ba569+3 | s_ghoul_dig_wav_005ba579+1
    ADD ESI,0x2                         ; 00455b8b
    MOV byte ptr [EDI + 0x1],AL         ; 00455b8e
    ADD EDI,0x2                         ; 00455b91
    CMP AL,0x0                          ; 00455b94
    JNZ 0x00455b80                      ; 00455b96
        ;   XREF to: 00455b80 (CONDITIONAL_JUMP)  ; LAB_00455b80
    POP EDI                             ; 00455b98
        ;   Label: LAB_00455b98
    LEA EAX,[EBP + 0xfffffab6]          ; 00455b99
    PUSH EAX                            ; 00455b9f
    MOV ESI,dword ptr [EBX + 0x154]     ; 00455ba0
    PUSH EBX                            ; 00455ba6
    CALL dword ptr [ESI + 0x2c]         ; 00455ba7
    ADD ESP,0x8                         ; 00455baa
    JMP 0x0045511e                      ; 00455bad
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    MOV ESI,0x5ba579                    ; 00455bb2 | = "ghoul-dig-?.wav"
        ;   Label: LAB_00455bb2
    JMP 0x00455b79                      ; 00455bb7
        ;   XREF to: 00455b79 (UNCONDITIONAL_JUMP)  ; LAB_00455b79
    PUSH 0x5ba589                       ; 00455bb9 | = "fall-?.wav"
        ;   Label: LAB_00455bb9
    MOV EAX,dword ptr [EBX + 0x154]     ; 00455bbe
    PUSH EBX                            ; 00455bc4
    CALL dword ptr [EAX + 0x2c]         ; 00455bc5
    ADD ESP,0x8                         ; 00455bc8
    JMP 0x0045511e                      ; 00455bcb
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    JBE 0x00455623                      ; 00455bd0
        ;   XREF to: 00455623 (CONDITIONAL_JUMP)  ; LAB_00455623
        ;   Label: LAB_00455bd0
    CMP EAX,0xd                         ; 00455bd6
    JC 0x004556d2                       ; 00455bd9
        ;   XREF to: 004556d2 (CONDITIONAL_JUMP)  ; LAB_004556d2
    JBE 0x00455ab8                      ; 00455bdf
        ;   XREF to: 00455ab8 (CONDITIONAL_JUMP)  ; LAB_00455ab8
    CMP EAX,0x65                        ; 00455be5
    JC 0x0045515b                       ; 00455be8
        ;   XREF to: 0045515b (CONDITIONAL_JUMP)  ; LAB_0045515b
    JBE 0x00455bb9                      ; 00455bee
        ;   XREF to: 00455bb9 (CONDITIONAL_JUMP)  ; LAB_00455bb9
    CMP EAX,0x29a                       ; 00455bf0
    JZ 0x00455afb                       ; 00455bf5
        ;   XREF to: 00455afb (CONDITIONAL_JUMP)  ; LAB_00455afb
    PUSH ESI                            ; 00455bfb
    PUSH EBX                            ; 00455bfc
    CALL core_charactr.cpp_FUN_00433fb0 ; 00455bfd
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00455c02
    JMP 0x0045511e                      ; 00455c05
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    JBE 0x00455225                      ; 00455c0a
        ;   XREF to: 00455225 (CONDITIONAL_JUMP)  ; LAB_00455225
        ;   Label: LAB_00455c0a
    CMP EAX,0xa                         ; 00455c10
    JZ 0x004553fb                       ; 00455c13
        ;   XREF to: 004553fb (CONDITIONAL_JUMP)  ; LAB_004553fb
    PUSH ESI                            ; 00455c19
    PUSH EBX                            ; 00455c1a
    CALL core_charactr.cpp_FUN_00433fb0 ; 00455c1b
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00455c20
    JMP 0x0045511e                      ; 00455c23
        ;   XREF to: 0045511e (UNCONDITIONAL_JUMP)  ; LAB_0045511e
    FLD float ptr [EBP + 0x92]          ; 00455c28
        ;   Label: LAB_00455c28
    FMUL float ptr [EBX + 0xcdcc]       ; 00455c2e
    SUB ESP,0x4                         ; 00455c34
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00455c37
    MOV dword ptr [EBX + 0x2524],EAX    ; 00455c3d
    FSTP float ptr [ESP]                ; 00455c43
    PUSH EBX                            ; 00455c46
    CALL core_charactr.cpp_FUN_00434850 ; 00455c47
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV EAX,dword ptr [EBX + 0xd120]    ; 00455c4c
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00455c52
    ADD ESP,0x8                         ; 00455c59
    TEST EDX,EDX                        ; 00455c5c
    JZ 0x00455e95                       ; 00455c5e
        ;   XREF to: 00455e95 (CONDITIONAL_JUMP)  ; LAB_00455e95
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00455c64
        ;   Label: LAB_00455c64
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00455c6a
    JZ 0x00455ea9                       ; 00455c72
        ;   XREF to: 00455ea9 (CONDITIONAL_JUMP)  ; LAB_00455ea9
    LEA ESI,[EBX + 0x158]               ; 00455c78
        ;   Label: LAB_00455c78
    PUSH ESI                            ; 00455c7e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00455c7f
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00455c84
    MOV EDI,dword ptr [EAX + 0x24]      ; 00455c87
    PUSH dword ptr [EBP + 0x92]         ; 00455c8a
    XOR EAX,EAX                         ; 00455c90
    PUSH EBX                            ; 00455c92
    MOV dword ptr [EBP + -0x12],EAX     ; 00455c93
    CALL core_charactr.cpp_FUN_00431660 ; 00455c96
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00455c9b
    TEST EAX,EAX                        ; 00455c9e
    JZ 0x00456f14                       ; 00455ca0
        ;   XREF to: 00456f14 (CONDITIONAL_JUMP)  ; LAB_00456f14
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00455ca6
    CMP EAX,0x2                         ; 00455cac
    JNC 0x00455f54                      ; 00455caf
        ;   XREF to: 00455f54 (CONDITIONAL_JUMP)  ; LAB_00455f54
    CMP EAX,0x1                         ; 00455cb5
    JNZ 0x00455f5f                      ; 00455cb8
        ;   XREF to: 00455f5f (CONDITIONAL_JUMP)  ; LAB_00455f5f
    CMP EDI,0x4                         ; 00455cbe
        ;   Label: LAB_00455cbe
    JZ 0x00455cd6                       ; 00455cc1
        ;   XREF to: 00455cd6 (CONDITIONAL_JUMP)  ; LAB_00455cd6
    PUSH 0x1                            ; 00455cc3
    PUSH 0x4                            ; 00455cc5
    LEA EAX,[EBX + 0x158]               ; 00455cc7
        ;   Label: LAB_00455cc7
    PUSH EAX                            ; 00455ccd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00455cce
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00455cd3
        ;   Label: LAB_00455cd3
    FLD float ptr [EBX + 0xcde0]        ; 00455cd6
        ;   Label: LAB_00455cd6
    FLDZ                                ; 00455cdc
    FCOMPP                              ; 00455cde
    FNSTSW AX                           ; 00455ce0
    SAHF                                ; 00455ce2
    JNC 0x00455cf7                      ; 00455ce3
        ;   XREF to: 00455cf7 (CONDITIONAL_JUMP)  ; LAB_00455cf7
    FLD float ptr [EBX + 0xcde0]        ; 00455ce5
    FSUB float ptr [EBP + 0x92]         ; 00455ceb
    FSTP float ptr [EBX + 0xcde0]       ; 00455cf1
    LEA EAX,[EBX + 0x158]               ; 00455cf7
        ;   Label: LAB_00455cf7
    PUSH EAX                            ; 00455cfd
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00455cfe
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00455d03
    MOV EAX,dword ptr [EAX + 0x24]      ; 00455d06
    LEA EDX,[EBX + 0x249c]              ; 00455d09
    MOV dword ptr [EBP + 0x56],EAX      ; 00455d0f
    MOV dword ptr [EBP + 0x4a],EDX      ; 00455d12
    CMP EAX,0x23                        ; 00455d15
    JNZ 0x00456f40                      ; 00455d18
        ;   XREF to: 00456f40 (CONDITIONAL_JUMP)  ; LAB_00456f40
    MOV EAX,EDX                         ; 00455d1e
    MOV dword ptr [EDX + 0x8],0x0       ; 00455d20
    MOV ECX,dword ptr [EAX + 0x8]       ; 00455d27
    MOV dword ptr [EDX + 0x4],ECX       ; 00455d2a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00455d2d
    MOV dword ptr [EDX],ECX             ; 00455d30
    PUSH EBX                            ; 00455d32
        ;   Label: LAB_00455d32
    MOV EDI,dword ptr [EBP + 0x56]      ; 00455d33
    CALL core_charactr.cpp_FUN_0042cd30 ; 00455d36
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00455d3b
    CMP EDI,0x23                        ; 00455d3e
    JZ 0x00455d61                       ; 00455d41
        ;   XREF to: 00455d61 (CONDITIONAL_JUMP)  ; LAB_00455d61
    LEA EAX,[EBX + 0x158]               ; 00455d43
    PUSH EAX                            ; 00455d49
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00455d4a
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00455d4f
    PUSH dword ptr [EBP + 0x92]         ; 00455d52
    PUSH EBX                            ; 00455d58
    CALL core_charactr.cpp_FUN_00433350 ; 00455d59
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00455d5e
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 00455d61
        ;   Label: LAB_00455d61
    JNZ 0x00455e46                      ; 00455d68
        ;   XREF to: 00455e46 (CONDITIONAL_JUMP)  ; LAB_00455e46
    MOV EAX,dword ptr [EBX + 0xd128]    ; 00455d6e
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00455d74
    JZ 0x00457291                       ; 00455d7c
        ;   XREF to: 00457291 (CONDITIONAL_JUMP)  ; LAB_00457291
    MOV EDI,dword ptr [EBX + 0xd0fc]    ; 00455d82
    PUSH 0x3e4ccccd                     ; 00455d88
    PUSH EDI                            ; 00455d8d
    MOV EAX,dword ptr [EBX + 0xd114]    ; 00455d8e
    PUSH EAX                            ; 00455d94
    PUSH EBX                            ; 00455d95
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00455d96
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd114]    ; 00455d9b
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00455da1
    ADD ESP,0x10                        ; 00455da8
    TEST EDX,EDX                        ; 00455dab
    JZ 0x00455dcb                       ; 00455dad
        ;   XREF to: 00455dcb (CONDITIONAL_JUMP)  ; LAB_00455dcb
    MOV ECX,dword ptr [EBX + 0xd0f4]    ; 00455daf
    PUSH 0x3e4ccccd                     ; 00455db5
    PUSH ECX                            ; 00455dba
    MOV ESI,dword ptr [EBX + 0xd118]    ; 00455dbb
    PUSH ESI                            ; 00455dc1
    PUSH EBX                            ; 00455dc2
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00455dc3
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00455dc8
    MOV EDI,dword ptr [EBX + 0xd100]    ; 00455dcb
        ;   Label: LAB_00455dcb
    PUSH 0x3e4ccccd                     ; 00455dd1
    PUSH EDI                            ; 00455dd6
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 00455dd7
    PUSH EAX                            ; 00455ddd
    PUSH EBX                            ; 00455dde
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00455ddf
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 00455de4
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00455dea
    ADD ESP,0x10                        ; 00455df1
    TEST EDX,EDX                        ; 00455df4
    JZ 0x00455e14                       ; 00455df6
        ;   XREF to: 00455e14 (CONDITIONAL_JUMP)  ; LAB_00455e14
    MOV ECX,dword ptr [EBX + 0xd0f8]    ; 00455df8
    PUSH 0x3e4ccccd                     ; 00455dfe
    PUSH ECX                            ; 00455e03
    MOV ESI,dword ptr [EBX + 0xd120]    ; 00455e04
    PUSH ESI                            ; 00455e0a
    PUSH EBX                            ; 00455e0b
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00455e0c
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00455e11
    MOV EDI,dword ptr [EBX + 0xd0e8]    ; 00455e14
        ;   Label: LAB_00455e14
    PUSH 0x3f333333                     ; 00455e1a
    PUSH EDI                            ; 00455e1f
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00455e20
    PUSH EAX                            ; 00455e26
        ;   Label: LAB_00455e26
    PUSH EBX                            ; 00455e27
    CALL core_charactr.cpp_FUN_0042fe90 ; 00455e28
        ;   XREF to: 0042fe90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042fe90(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00455e2d
    CMP dword ptr [EBX + 0xd124],0x0    ; 00455e30
    JL 0x004572a2                       ; 00455e37
        ;   XREF to: 004572a2 (CONDITIONAL_JUMP)  ; LAB_004572a2
    PUSH EBX                            ; 00455e3d
        ;   Label: LAB_00455e3d
    CALL core_charactr.cpp_FUN_0042fc90 ; 00455e3e
        ;   XREF to: 0042fc90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fc90()
    ADD ESP,0x4                         ; 00455e43
    PUSH 0x1                            ; 00455e46
        ;   Label: LAB_00455e46
    PUSH EBX                            ; 00455e48
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 00455e49
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    MOV EDX,dword ptr [EBP + -0x12]     ; 00455e4e
    ADD ESP,0x8                         ; 00455e51
    TEST EDX,EDX                        ; 00455e54
    JZ 0x00455176                       ; 00455e56
        ;   XREF to: 00455176 (CONDITIONAL_JUMP)  ; LAB_00455176
    TEST EAX,EAX                        ; 00455e5c
    JL 0x00455176                       ; 00455e5e
        ;   XREF to: 00455176 (CONDITIONAL_JUMP)  ; LAB_00455176
    SHL EAX,0x3                         ; 00455e64
    MOV EDX,EAX                         ; 00455e67
    SHL EAX,0x4                         ; 00455e69
    SUB EAX,EDX                         ; 00455e6c
    ADD EAX,EBX                         ; 00455e6e
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 00455e70
    TEST ECX,ECX                        ; 00455e76
    JZ 0x00455176                       ; 00455e78
        ;   XREF to: 00455176 (CONDITIONAL_JUMP)  ; LAB_00455176
    PUSH 0x2                            ; 00455e7e
    MOV EDX,dword ptr [ECX + 0x154]     ; 00455e80
    PUSH ECX                            ; 00455e86
    CALL dword ptr [EDX + 0x78]         ; 00455e87
    ADD ESP,0x8                         ; 00455e8a
    LEA ESP,[EBP + 0x7a]                ; 00455e8d
    POP EBP                             ; 00455e90
    POP EDI                             ; 00455e91
    POP ESI                             ; 00455e92
    POP EBX                             ; 00455e93
    RET                                 ; 00455e94
    MOV EAX,dword ptr [EBX + 0xd118]    ; 00455e95
        ;   Label: LAB_00455e95
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00455e9b
    JNZ 0x00455c64                      ; 00455ea3
        ;   XREF to: 00455c64 (CONDITIONAL_JUMP)  ; LAB_00455c64
    FLD float ptr [EBX + 0xd134]        ; 00455ea9
        ;   Label: LAB_00455ea9
    FLDZ                                ; 00455eaf
    FCOMPP                              ; 00455eb1
    FNSTSW AX                           ; 00455eb3
    SAHF                                ; 00455eb5
    JA 0x00455c78                       ; 00455eb6
        ;   XREF to: 00455c78 (CONDITIONAL_JUMP)  ; LAB_00455c78
    FLD float ptr [EBX + 0xd134]        ; 00455ebc
    FADD float ptr [EBP + 0x92]         ; 00455ec2
    FST float ptr [EBX + 0xd134]        ; 00455ec8
    FCOMP double ptr [0x005ba68a]       ; 00455ece | DAT_005ba68a
    FNSTSW AX                           ; 00455ed4
    SAHF                                ; 00455ed6
    JC 0x00455c78                       ; 00455ed7
        ;   XREF to: 00455c78 (CONDITIONAL_JUMP)  ; LAB_00455c78
    LEA EAX,[EBP + 0xfffffa3e]          ; 00455edd
    PUSH EAX                            ; 00455ee3
    MOV EDI,0x461c3f9a                  ; 00455ee4
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00455ee9
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    LEA EDX,[EBP + 0xfffffa3e]          ; 00455eee
    ADD ESP,0x4                         ; 00455ef4
    MOV dword ptr [EBP + 0xfffffa42],EDI ; 00455ef7
    MOV dword ptr [EBP + 0xfffffa72],EBX ; 00455efd
    MOV dword ptr [EBP + 0xfffffa76],EBX ; 00455f03
    PUSH EDX                            ; 00455f09
    MOV EAX,dword ptr [EBX + 0x154]     ; 00455f0a
    PUSH EBX                            ; 00455f10
    CALL dword ptr [EAX + 0x108]        ; 00455f11
    ADD ESP,0x8                         ; 00455f17
    MOV dword ptr [EBX + 0xd134],0xbf800000 ; 00455f1a
    JMP 0x00455c78                      ; 00455f24
        ;   XREF to: 00455c78 (UNCONDITIONAL_JUMP)  ; LAB_00455c78
    PUSH 0x1                            ; 00455f29
        ;   Label: LAB_00455f29
    PUSH 0x2                            ; 00455f2b
    LEA EAX,[EBX + 0x158]               ; 00455f2d
    PUSH EAX                            ; 00455f33
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00455f34
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00455f39
    PUSH EBX                            ; 00455f3c
    MOV EAX,0x5ba594                    ; 00455f3d | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00455f42 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 00455f43 | g_CConsolePtr
    PUSH EDX                            ; 00455f49 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00455f4a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x00455cd3                      ; 00455f4f
        ;   XREF to: 00455cd3 (UNCONDITIONAL_JUMP)  ; LAB_00455cd3
    JBE 0x00455cbe                      ; 00455f54
        ;   XREF to: 00455cbe (CONDITIONAL_JUMP)  ; LAB_00455cbe
        ;   Label: LAB_00455f54
    CMP EAX,0x3                         ; 00455f5a
    JZ 0x00455f29                       ; 00455f5d
        ;   XREF to: 00455f29 (CONDITIONAL_JUMP)  ; LAB_00455f29
    PUSH 0x1                            ; 00455f5f
        ;   Label: LAB_00455f5f
    PUSH 0x0                            ; 00455f61
    JMP 0x00455cc7                      ; 00455f63
        ;   XREF to: 00455cc7 (UNCONDITIONAL_JUMP)  ; LAB_00455cc7
    MOV EAX,[0x01d5ba14]                ; 00455f68 | DAT_01d5ba14
        ;   Label: caseD_2a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00455f6d
    PUSH EAX                            ; 00455f74
    MOV EDX,dword ptr [EAX + 0x154]     ; 00455f75
    CALL dword ptr [EDX + 0x10c]        ; 00455f7b
    ADD ESP,0x4                         ; 00455f81
    TEST EAX,EAX                        ; 00455f84
    JZ 0x00456061                       ; 00455f86
        ;   XREF to: 00456061 (CONDITIONAL_JUMP)  ; LAB_00456061
    FLD float ptr [EBP + 0x5a]          ; 00455f8c
        ;   Label: caseD_a
    FLDZ                                ; 00455f8f
    FCOMPP                              ; 00455f91
    FNSTSW AX                           ; 00455f93
    SAHF                                ; 00455f95
    JA 0x00455cd6                       ; 00455f96
        ;   XREF to: 00455cd6 (CONDITIONAL_JUMP)  ; LAB_00455cd6
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00455f9c
    JZ 0x00455cd6                       ; 00455fa3
        ;   XREF to: 00455cd6 (CONDITIONAL_JUMP)  ; LAB_00455cd6
    FLD float ptr [EBP + -0x1e]         ; 00455fa9
    FMUL float ptr [EBX + 0xcdcc]       ; 00455fac
    FLD float ptr [EBP + 0x92]          ; 00455fb2
    FLD ST0                             ; 00455fb8
    FMUL float ptr [EBX + 0xcdcc]       ; 00455fba
    FXCH ST2                            ; 00455fc0
    FMULP                               ; 00455fc2
    SUB ESP,0x4                         ; 00455fc4
    FSTP float ptr [EBX + 0x2524]       ; 00455fc7
    FSTP float ptr [ESP]                ; 00455fcd
    PUSH EBX                            ; 00455fd0
    CALL core_charactr.cpp_FUN_00434850 ; 00455fd1
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00455fd6
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00455fd9
    PUSH 0x3f490fdb                     ; 00455fdc
    XOR EDX,EDX                         ; 00455fe1
    PUSH 0x40400000                     ; 00455fe3
    MOV dword ptr [EBP + 0xffffff62],EDX ; 00455fe8
    MOV dword ptr [EBP + 0xffffff6a],EAX ; 00455fee
    LEA EAX,[EBP + 0xffffff62]          ; 00455ff4
    MOV dword ptr [EBP + 0xffffff66],EDX ; 00455ffa
    PUSH EAX                            ; 00456000
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456001
    PUSH EAX                            ; 00456007
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456008
    CALL dword ptr [EDX + 0xc4]         ; 0045600e
    ADD ESP,0x4                         ; 00456014
    PUSH EAX                            ; 00456017
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456018
    ADD EAX,0x20                        ; 0045601e
    PUSH EAX                            ; 00456021
    PUSH EBX                            ; 00456022
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00456023
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00456028
    CMP EAX,0x1                         ; 0045602b
    JZ 0x00455cd6                       ; 0045602e
        ;   XREF to: 00455cd6 (CONDITIONAL_JUMP)  ; LAB_00455cd6
    PUSH EBX                            ; 00456034
    PUSH 0x5ba66f                       ; 00456035 | = "%s giving up attack\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0045603a | g_CConsolePtr
    PUSH ESI                            ; 00456040 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00456041
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00456046
    PUSH EBX                            ; 00456049
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 0045604a
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 0045604f
    MOV dword ptr [EBX + 0x2508],0x0    ; 00456052
    JMP 0x00455cd6                      ; 0045605c
        ;   XREF to: 00455cd6 (UNCONDITIONAL_JUMP)  ; LAB_00455cd6
    PUSH dword ptr [EBP + 0x92]         ; 00456061
        ;   Label: LAB_00456061
    MOV EAX,dword ptr [EBX + 0x154]     ; 00456067
    PUSH EBX                            ; 0045606d
    CALL dword ptr [EAX + 0x144]        ; 0045606e
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00456074
    ADD ESP,0x8                         ; 0045607a
    TEST EDX,EDX                        ; 0045607d
    JZ 0x00455f8c                       ; 0045607f
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x1                            ; 00456085
        ;   Label: LAB_00456085
    PUSH 0x3                            ; 00456087
    PUSH 0x0                            ; 00456089
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0045608b
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00456090
    PUSH EAX                            ; 00456093
    LEA EAX,[EBX + 0x158]               ; 00456094
    PUSH EAX                            ; 0045609a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0045609b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004560a0
    JMP 0x00455f8c                      ; 004560a3
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBX + 0xd144]        ; 004560a8
        ;   Label: caseD_2e
    FSUB float ptr [EBP + 0x92]         ; 004560ae
    FST float ptr [EBX + 0xd144]        ; 004560b4
    FLDZ                                ; 004560ba
    FCOMPP                              ; 004560bc
    FNSTSW AX                           ; 004560be
    SAHF                                ; 004560c0
    JC 0x00455f8c                       ; 004560c1
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH dword ptr [EBP + 0x92]         ; 004560c7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004560cd
    PUSH EBX                            ; 004560d3
    MOV dword ptr [EBX + 0xd144],0x0    ; 004560d4
    CALL dword ptr [EAX + 0x144]        ; 004560de
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004560e4
    ADD ESP,0x8                         ; 004560ea
    TEST ESI,ESI                        ; 004560ed
    JZ 0x00455f8c                       ; 004560ef
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    LEA EAX,[EBX + 0x20]                ; 004560f5
    FLD float ptr [EAX]                 ; 004560f8
    FSUB float ptr [ESI + 0x20]         ; 004560fa
    LEA EDI,[EBP + 0xfffffc4a]          ; 004560fd
    FSTP float ptr [EBP + 0xfffffd46]   ; 00456103
    FLD float ptr [EAX + 0x4]           ; 00456109
    FSUB float ptr [ESI + 0x24]         ; 0045610c
    LEA EDX,[EBP + 0xfffffc4a]          ; 0045610f
    FSTP float ptr [EBP + 0xfffffd4a]   ; 00456115
    FLD float ptr [EAX + 0x8]           ; 0045611b
    LEA EAX,[EBP + 0xfffffd9a]          ; 0045611e
    FSUB float ptr [ESI + 0x28]         ; 00456124
    LEA ESI,[EBP + 0xfffffd46]          ; 00456127
    FSTP float ptr [EBP + 0xfffffd4e]   ; 0045612d
    MOVSD ES:EDI,ESI                    ; 00456133
    MOVSD ES:EDI,ESI                    ; 00456134
    MOVSD ES:EDI,ESI                    ; 00456135
    CMP EAX,EDX                         ; 00456136
    JZ 0x0045615e                       ; 00456138
        ;   XREF to: 0045615e (CONDITIONAL_JUMP)  ; LAB_0045615e
    MOV EAX,dword ptr [EBP + 0xfffffc4a] ; 0045613a
    MOV dword ptr [EBP + 0xfffffd9a],EAX ; 00456140
    MOV EAX,dword ptr [EBP + 0xfffffc4e] ; 00456146
    MOV dword ptr [EBP + 0xfffffd9e],EAX ; 0045614c
    MOV EAX,dword ptr [EBP + 0xfffffc52] ; 00456152
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 00456158
    FLD float ptr [EBP + 0xfffffd9e]    ; 0045615e
        ;   Label: LAB_0045615e
    FMUL ST0                            ; 00456164
    FLD float ptr [EBP + 0xfffffd9a]    ; 00456166
    FMUL ST0                            ; 0045616c
    FADDP                               ; 0045616e
    FLD float ptr [EBP + 0xfffffda2]    ; 00456170
    FMUL ST0                            ; 00456176
    FADDP                               ; 00456178
    FSTP float ptr [EBP + 0x16]         ; 0045617a
    MOV EAX,dword ptr [EBP + 0x16]      ; 0045617d
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00456180 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00456186
    ADD EAX,EDI                         ; 00456188
    MOV dword ptr [EBP + 0x66],EAX      ; 0045618a
    FLD float ptr [EBP + 0x66]          ; 0045618d
    FCOMP double ptr [0x005ba692]       ; 00456190 | DAT_005ba692
    FNSTSW AX                           ; 00456196
    SAHF                                ; 00456198
    JA 0x00455f8c                       ; 00456199
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [EBX + 0x3280]    ; 0045619f
    MOV dword ptr [EBP + 0x5e],EAX      ; 004561a5
    FLD float ptr [EBP + 0x5e]          ; 004561a8
    FCOMP float ptr [EBX + 0x327c]      ; 004561ab
    FNSTSW AX                           ; 004561b1
    SAHF                                ; 004561b3
    JNC 0x004561bf                      ; 004561b4
        ;   XREF to: 004561bf (CONDITIONAL_JUMP)  ; LAB_004561bf
    MOV EAX,dword ptr [EBX + 0x2490]    ; 004561b6
    MOV dword ptr [EBP + 0x5e],EAX      ; 004561bc
    FLD float ptr [EBP + 0x5e]          ; 004561bf
        ;   Label: LAB_004561bf
    FCOMP float ptr [EBX + 0x327c]      ; 004561c2
    FNSTSW AX                           ; 004561c8
    SAHF                                ; 004561ca
    JC 0x004562ab                       ; 004561cb
        ;   XREF to: 004562ab (CONDITIONAL_JUMP)  ; LAB_004562ab
    XOR ESI,ESI                         ; 004561d1
        ;   Label: LAB_004561d1
    MOV dword ptr [EBP + 0x76],ESI      ; 004561d3
        ;   Label: LAB_004561d3
    FILD dword ptr [EBP + 0x76]         ; 004561d6
    FMUL float ptr [0x005ba702]         ; 004561d9 | DAT_005ba702
    MOV EAX,[0x00603b28]                ; 004561df | g_CDemonSetPtr
    FMUL float ptr [0x005ba706]         ; 004561e4 | DAT_005ba706
    PUSH EAX                            ; 004561ea | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x6e]         ; 004561eb
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004561ee
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004561f3
    PUSH EBX                            ; 004561f6
    MOV EDX,dword ptr [0x00603b28]      ; 004561f7 | g_CDemonSetPtr
    PUSH EDX                            ; 004561fd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 004561fe
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x6e]          ; 00456203
    FLD ST0                             ; 00456206
    FCOS                                ; 00456208
    FXCH                                ; 0045620a
    FSIN                                ; 0045620c
    FXCH                                ; 0045620e
    FLD double ptr [0x005ba70a]         ; 00456210 | DAT_005ba70a
    FXCH                                ; 00456216
    FMUL ST1                            ; 00456218
    FXCH ST2                            ; 0045621a
    FMULP                               ; 0045621c
    FLD float ptr [EBX + 0x24]          ; 0045621e
    ADD ESP,0x8                         ; 00456221
    FADD float ptr [EBP + 0x5e]         ; 00456224
    SUB ESP,0x4                         ; 00456227
    FSTP float ptr [ESP]                ; 0045622a
    FLD float ptr [EBX + 0x24]          ; 0045622d
    FADD float ptr [EBX + 0x327c]       ; 00456230
    SUB ESP,0x4                         ; 00456236
    FSTP float ptr [ESP]                ; 00456239
    PUSH dword ptr [EBX + 0x3270]       ; 0045623c
    SUB ESP,0x4                         ; 00456242
    FXCH                                ; 00456245
    FSTP float ptr [ESP]                ; 00456247
    SUB ESP,0x4                         ; 0045624a
    FSTP float ptr [ESP]                ; 0045624d
    PUSH dword ptr [EBX + 0x28]         ; 00456250
    MOV ECX,dword ptr [0x00603b28]      ; 00456253 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 00456259
    PUSH ECX                            ; 0045625c | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 0045625d
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV EDI,dword ptr [0x00603b28]      ; 00456262 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 00456268
    ADD ESP,0x20                        ; 0045626b
    FLD float ptr [EBP + 0x76]          ; 0045626e
    PUSH EDI                            ; 00456271 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x72]         ; 00456272
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00456275
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x72]          ; 0045627a
    FLD1                                ; 0045627d
    ADD ESP,0x4                         ; 0045627f
    FCOMPP                              ; 00456282
    FNSTSW AX                           ; 00456284
    SAHF                                ; 00456286
    JBE 0x004562bf                      ; 00456287
        ;   XREF to: 004562bf (CONDITIONAL_JUMP)  ; LAB_004562bf
    CMP ESI,0x4                         ; 00456289
        ;   Label: LAB_00456289
    JGE 0x00456085                      ; 0045628c
        ;   XREF to: 00456085 (CONDITIONAL_JUMP)  ; LAB_00456085
    MOV dword ptr [EBX + 0xd144],0x40400000 ; 00456292
    MOV dword ptr [EBX + 0xcde4],0x0    ; 0045629c
    JMP 0x00455f8c                      ; 004562a6
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBX + 0x327c]        ; 004562ab
        ;   Label: LAB_004562ab
    FADD double ptr [0x005ba69a]        ; 004562b1 | DAT_005ba69a
    FSTP float ptr [EBP + 0x5e]         ; 004562b7
    JMP 0x004561d1                      ; 004562ba
        ;   XREF to: 004561d1 (UNCONDITIONAL_JUMP)  ; LAB_004561d1
    INC ESI                             ; 004562bf
        ;   Label: LAB_004562bf
    CMP ESI,0x4                         ; 004562c0
    JL 0x004561d3                       ; 004562c3
        ;   XREF to: 004561d3 (CONDITIONAL_JUMP)  ; LAB_004561d3
    JMP 0x00456289                      ; 004562c9
        ;   XREF to: 00456289 (UNCONDITIONAL_JUMP)  ; LAB_00456289
    LEA EAX,[EBX + 0xd074]              ; 004562cb
        ;   Label: caseD_23
    PUSH EAX                            ; 004562d1
    MOV ESI,dword ptr [0x005fba60]      ; 004562d2 | DAT_005fba60
    PUSH ESI                            ; 004562d8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004562d9
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004562de
    TEST EAX,EAX                        ; 004562e1
    JZ 0x00455f8c                       ; 004562e3
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBX + 0xd140]        ; 004562e9
    FSUB float ptr [EBP + 0x92]         ; 004562ef
    FST float ptr [EBX + 0xd140]        ; 004562f5
    FLDZ                                ; 004562fb
    FCOMPP                              ; 004562fd
    FNSTSW AX                           ; 004562ff
    SAHF                                ; 00456301
    JBE 0x00455f8c                      ; 00456302
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    FLD1                                ; 00456308
    XOR EDI,EDI                         ; 0045630a
    LEA EAX,[EBX + 0x20]                ; 0045630c
    MOV dword ptr [EBP + -0xa],EDI      ; 0045630f
    MOV dword ptr [EBP + -0x6],EAX      ; 00456312
    FADD float ptr [EBX + 0xd140]       ; 00456315
    MOV dword ptr [EBP + 0x52],EDI      ; 0045631b
    FSTP float ptr [EBX + 0xd140]       ; 0045631e
    MOV EAX,[0x00603b28]                ; 00456324 | g_CDemonSetPtr
        ;   Label: LAB_00456324
    MOV EDX,dword ptr [EBP + -0xa]      ; 00456329
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0045632c | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00455f8c                      ; 00456332
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    ADD EAX,dword ptr [EBP + 0x52]      ; 00456338
    PUSH EBX                            ; 0045633b
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 0045633c
    PUSH ESI                            ; 00456342
    MOV EAX,dword ptr [ESI + 0x154]     ; 00456343
    CALL dword ptr [EAX + 0xe4]         ; 00456349
    ADD ESP,0x8                         ; 0045634f
    TEST EAX,EAX                        ; 00456352
    JNZ 0x00456368                      ; 00456354
        ;   XREF to: 00456368 (CONDITIONAL_JUMP)  ; LAB_00456368
    MOV EDI,dword ptr [EBP + -0xa]      ; 00456356
        ;   Label: LAB_00456356
    MOV ESI,dword ptr [EBP + 0x52]      ; 00456359
    INC EDI                             ; 0045635c
    ADD ESI,0x4                         ; 0045635d
    MOV dword ptr [EBP + -0xa],EDI      ; 00456360
    MOV dword ptr [EBP + 0x52],ESI      ; 00456363
    JMP 0x00456324                      ; 00456366
        ;   XREF to: 00456324 (UNCONDITIONAL_JUMP)  ; LAB_00456324
    LEA EAX,[ESI + 0x20]                ; 00456368
        ;   Label: LAB_00456368
    MOV EDX,dword ptr [EBP + -0x6]      ; 0045636b
    FLD float ptr [EAX]                 ; 0045636e
    FSUB float ptr [EDX]                ; 00456370
    FSTP float ptr [EBP + 0xfffffe42]   ; 00456372
    FLD float ptr [EAX + 0x4]           ; 00456378
    FSUB float ptr [EDX + 0x4]          ; 0045637b
    LEA EDI,[EBP + 0xfffffd16]          ; 0045637e
    FSTP float ptr [EBP + 0xfffffe46]   ; 00456384
    FLD float ptr [EAX + 0x8]           ; 0045638a
    FSUB float ptr [EDX + 0x8]          ; 0045638d
    LEA ESI,[EBP + 0xfffffe42]          ; 00456390
    FSTP float ptr [EBP + 0xfffffe4a]   ; 00456396
    MOVSD ES:EDI,ESI                    ; 0045639c
    MOVSD ES:EDI,ESI                    ; 0045639d
    MOVSD ES:EDI,ESI                    ; 0045639e
    FLD float ptr [EBP + 0xfffffd1a]    ; 0045639f
    FABS                                ; 004563a5
    FCOMP double ptr [0x005ba72a]       ; 004563a7 | DAT_005ba72a
    FNSTSW AX                           ; 004563ad
    SAHF                                ; 004563af
    JA 0x00456356                       ; 004563b0
        ;   XREF to: 00456356 (CONDITIONAL_JUMP)  ; LAB_00456356
    FLD float ptr [EBP + 0xfffffd16]    ; 004563b2
    FMUL ST0                            ; 004563b8
    FLD float ptr [EBP + 0xfffffd1e]    ; 004563ba
    FMUL ST0                            ; 004563c0
    FADDP                               ; 004563c2
    FSQRT                               ; 004563c4
    XOR EDI,EDI                         ; 004563c6
    MOV dword ptr [EBP + 0xfffffd1a],EDI ; 004563c8
    FCOMP float ptr [EBX + 0xcddc]      ; 004563ce
    FNSTSW AX                           ; 004563d4
    SAHF                                ; 004563d6
    JA 0x00456356                       ; 004563d7
        ;   XREF to: 00456356 (CONDITIONAL_JUMP)  ; LAB_00456356
    PUSH EBX                            ; 004563dd
    PUSH 0x5ba5be                       ; 004563de | = "%s rising from the grave\n"
    MOV EAX,[0x005f1690]                ; 004563e3 | g_CConsolePtr
    PUSH EAX                            ; 004563e8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004563e9
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004563ee
    PUSH 0x1                            ; 004563f1
    PUSH 0x24                           ; 004563f3
    LEA EAX,[EBX + 0x158]               ; 004563f5
    PUSH EAX                            ; 004563fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004563fc
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0xd06c]    ; 00456401
    ADD ESP,0xc                         ; 00456407
    TEST EDX,EDX                        ; 0045640a
    JZ 0x0045641d                       ; 0045640c
        ;   XREF to: 0045641d (CONDITIONAL_JUMP)  ; LAB_0045641d
    PUSH EDX                            ; 0045640e
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004cf580 ; 0045640f
        ;   XREF to: 004cf580 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004cf580(CGrave * this_ptr)
    ADD ESP,0x4                         ; 00456414
    MOV dword ptr [EBX + 0xd06c],EDI    ; 00456417
    MOV dword ptr [EBX + 0xcddc],0x42c80000 ; 0045641d
        ;   Label: LAB_0045641d
    JMP 0x00455f8c                      ; 00456427
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 0045642c
        ;   Label: caseD_19
    TEST EDX,EDX                        ; 00456432
    JNZ 0x00455f8c                      ; 00456434
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    CMP dword ptr [EBX + 0xdc],0x0      ; 0045643a
    JNZ 0x00455f8c                      ; 00456441
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EDX                            ; 00456447
    LEA EAX,[EBX + 0x158]               ; 00456448
    PUSH EAX                            ; 0045644e
    LEA ESI,[EBP + -0x6e]               ; 0045644f
    LEA EDI,[EBP + 0xfffffe2a]          ; 00456452
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00456458
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0045645d
    LEA EAX,[EBP + 0xfffffe2a]          ; 00456460
    LEA ESI,[EBP + -0x6e]               ; 00456466
    PUSH EAX                            ; 00456469
    MOVSD ES:EDI,ESI                    ; 0045646a
    MOVSD ES:EDI,ESI                    ; 0045646b
    MOVSD ES:EDI,ESI                    ; 0045646c
    PUSH EBX                            ; 0045646d
    LEA ESI,[EBP + 0xfffffe4e]          ; 0045646e
    LEA EDI,[EBP + 0xfffffe36]          ; 00456474
    CALL core_actor.cpp_FUN_00408b80    ; 0045647a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0045647f
    LEA ESI,[EBP + 0xfffffe4e]          ; 00456482
    LEA EAX,[EBP + 0xfffffe36]          ; 00456488
    PUSH 0x0                            ; 0045648e
    MOVSD ES:EDI,ESI                    ; 00456490
    MOVSD ES:EDI,ESI                    ; 00456491
    MOVSD ES:EDI,ESI                    ; 00456492
    PUSH EAX                            ; 00456493
    MOV ESI,dword ptr [0x005fed24]      ; 00456494 | g_CGorePtr
    PUSH ESI                            ; 0045649a
    CALL core_gore.cpp_FUN_004cec40     ; 0045649b
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004564a0
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 004564a3
    JMP 0x00455f8c                      ; 004564ad
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBP + 0x92]          ; 004564b2
        ;   Label: caseD_0
    FMUL double ptr [0x005ba6e2]        ; 004564b8 | DAT_005ba6e2
    SUB ESP,0x4                         ; 004564be
    FSTP float ptr [ESP]                ; 004564c1
    CALL core_actor.cpp_FUN_0040cf40    ; 004564c4
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 004564c9
    TEST EAX,EAX                        ; 004564cc
    JNZ 0x00456085                      ; 004564ce
        ;   XREF to: 00456085 (CONDITIONAL_JUMP)  ; LAB_00456085
    PUSH dword ptr [EBP + 0x92]         ; 004564d4
    PUSH EBX                            ; 004564da
    CALL core_enemy.cpp_FUN_00489ff0    ; 004564db
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004564e0
    TEST EAX,EAX                        ; 004564e3
    JZ 0x004564f0                       ; 004564e5
        ;   XREF to: 004564f0 (CONDITIONAL_JUMP)  ; LAB_004564f0
    PUSH EBX                            ; 004564e7
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 004564e8
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 004564ed
    PUSH dword ptr [EBP + 0x92]         ; 004564f0
        ;   Label: LAB_004564f0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004564f6
    PUSH EBX                            ; 004564fc
    CALL dword ptr [EAX + 0x144]        ; 004564fd
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00456503
    ADD ESP,0x8                         ; 00456509
    TEST ECX,ECX                        ; 0045650c
    JZ 0x00456563                       ; 0045650e
        ;   XREF to: 00456563 (CONDITIONAL_JUMP)  ; LAB_00456563
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00456510
        ;   Label: LAB_00456510
    JZ 0x00455f8c                       ; 00456517
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 0045651d
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 0045651e
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00456523
    MOV EDI,dword ptr [EBX + 0xd13c]    ; 00456526
    PUSH EDI                            ; 0045652c
    CALL sound_sndmain.cpp_FUN_00556700 ; 0045652d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00456532
    TEST EAX,EAX                        ; 00456535
    JNZ 0x00455f8c                      ; 00456537
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    CMP dword ptr [EBX + 0xd0e4],0x0    ; 0045653d
    JZ 0x004565ad                       ; 00456544
        ;   XREF to: 004565ad (CONDITIONAL_JUMP)  ; LAB_004565ad
    PUSH 0x5ba5d8                       ; 00456546 | = "demn_chase_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045654b
    PUSH EBX                            ; 00456551
    CALL dword ptr [EAX + 0x2c]         ; 00456552
    ADD ESP,0x8                         ; 00456555
    MOV dword ptr [EBX + 0xd13c],EAX    ; 00456558
    JMP 0x00455f8c                      ; 0045655e
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,[0x01d5ba14]                ; 00456563 | DAT_01d5ba14
        ;   Label: LAB_00456563
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00456568
    PUSH EAX                            ; 0045656f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456570
    CALL dword ptr [EDX + 0x10c]        ; 00456576
    ADD ESP,0x4                         ; 0045657c
    TEST EAX,EAX                        ; 0045657f
    JZ 0x00455f8c                       ; 00456581
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,[0x005fe9dc]                ; 00456587 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 0045658c | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 00456596 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0045659b
    MOV dword ptr [EBX + 0xcde4],EAX    ; 004565a2
    JMP 0x00456510                      ; 004565a8
        ;   XREF to: 00456510 (UNCONDITIONAL_JUMP)  ; LAB_00456510
    PUSH 0x5ba5eb                       ; 004565ad | = "demn_chase_???.wav"
        ;   Label: LAB_004565ad
    MOV EAX,dword ptr [EBX + 0x154]     ; 004565b2
    PUSH EBX                            ; 004565b8
    CALL dword ptr [EAX + 0x2c]         ; 004565b9
    ADD ESP,0x8                         ; 004565bc
    MOV dword ptr [EBX + 0xd13c],EAX    ; 004565bf
    JMP 0x00455f8c                      ; 004565c5
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    LEA ESI,[EBX + 0x158]               ; 004565ca
        ;   Label: caseD_8
    PUSH ESI                            ; 004565d0
    CALL core_motion.cpp_FUN_004fc930   ; 004565d1
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004565d6
    ADD ESP,0x4                         ; 004565d9
    FLD float ptr [EBP + 0x76]          ; 004565dc
    FCOMP double ptr [0x005ba6b2]       ; 004565df | DAT_005ba6b2
    FNSTSW AX                           ; 004565e5
    SAHF                                ; 004565e7
    JBE 0x00455f8c                      ; 004565e8
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x1                            ; 004565ee
    PUSH 0x4                            ; 004565f0
    PUSH ESI                            ; 004565f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004565f3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004565f8
    JMP 0x00455f8c                      ; 004565fb
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH dword ptr [EBP + 0x92]         ; 00456600
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBX + 0x154]     ; 00456606
    PUSH EBX                            ; 0045660c
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0045660d
    CALL dword ptr [EAX + 0x144]        ; 00456613
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00456619
    ADD ESP,0x8                         ; 0045661f
    TEST EDX,EDX                        ; 00456622
    JNZ 0x00456667                      ; 00456624
        ;   XREF to: 00456667 (CONDITIONAL_JUMP)  ; LAB_00456667
    MOV EAX,[0x01d5ba14]                ; 00456626 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0045662b
    PUSH EAX                            ; 00456632
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456633
    CALL dword ptr [EDX + 0x10c]        ; 00456639
    ADD ESP,0x4                         ; 0045663f
    TEST EAX,EAX                        ; 00456642
    JZ 0x00456667                       ; 00456644
        ;   XREF to: 00456667 (CONDITIONAL_JUMP)  ; LAB_00456667
    MOV EAX,[0x005fe9dc]                ; 00456646 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 0045664b | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 00456655 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0045665a
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00456661
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00456667
        ;   Label: LAB_00456667
    LEA ESI,[EBX + 0x158]               ; 0045666d
    TEST ECX,ECX                        ; 00456673
    JZ 0x004566c1                       ; 00456675
        ;   XREF to: 004566c1 (CONDITIONAL_JUMP)  ; LAB_004566c1
    TEST EDI,EDI                        ; 00456677
    JNZ 0x004566fb                      ; 00456679
        ;   XREF to: 004566fb (CONDITIONAL_JUMP)  ; LAB_004566fb
    MOV EAX,dword ptr [EBX + 0xd13c]    ; 0045667f
    PUSH EAX                            ; 00456685
    CALL sound_sndmain.cpp_FUN_00556700 ; 00456686
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0045668b
    TEST EAX,EAX                        ; 0045668e
    JNZ 0x004566b3                      ; 00456690
        ;   XREF to: 004566b3 (CONDITIONAL_JUMP)  ; LAB_004566b3
    CMP dword ptr [EBX + 0xd0e4],0x0    ; 00456692
    JZ 0x004566f4                       ; 00456699
        ;   XREF to: 004566f4 (CONDITIONAL_JUMP)  ; LAB_004566f4
    PUSH 0x5ba5fe                       ; 0045669b | = "demn_chase_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004566a0
        ;   Label: LAB_004566a0
    PUSH EBX                            ; 004566a6
    CALL dword ptr [EAX + 0x2c]         ; 004566a7
    ADD ESP,0x8                         ; 004566aa
    MOV dword ptr [EBX + 0xd13c],EAX    ; 004566ad
    PUSH EBX                            ; 004566b3
        ;   Label: LAB_004566b3
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 004566b4
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 004566b9
    JMP 0x00455f8c                      ; 004566bc
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH dword ptr [EBP + 0x92]         ; 004566c1
        ;   Label: LAB_004566c1
    PUSH EBX                            ; 004566c7
    CALL core_enemy.cpp_FUN_00489ff0    ; 004566c8
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004566cd
    TEST EAX,EAX                        ; 004566d0
    JNZ 0x00455f8c                      ; 004566d2
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x1                            ; 004566d8
    PUSH 0x3                            ; 004566da
    PUSH EAX                            ; 004566dc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004566dd
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004566e2
    PUSH EAX                            ; 004566e5
    PUSH ESI                            ; 004566e6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004566e7
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004566ec
    JMP 0x00455f8c                      ; 004566ef
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x5ba611                       ; 004566f4 | = "demn_chase_???.wav"
        ;   Label: LAB_004566f4
    JMP 0x004566a0                      ; 004566f9
        ;   XREF to: 004566a0 (UNCONDITIONAL_JUMP)  ; LAB_004566a0
    TEST ECX,ECX                        ; 004566fb
        ;   Label: LAB_004566fb
    JZ 0x004567fd                       ; 004566fd
        ;   XREF to: 004567fd (CONDITIONAL_JUMP)  ; LAB_004567fd
    PUSH ESI                            ; 00456703
    CALL core_motion.cpp_FUN_004fc930   ; 00456704
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00456709
    ADD ESP,0x4                         ; 0045670c
    FLD float ptr [EBP + 0x76]          ; 0045670f
    FCOMP double ptr [0x005ba6b2]       ; 00456712 | DAT_005ba6b2
    FNSTSW AX                           ; 00456718
    SAHF                                ; 0045671a
    JBE 0x004567fd                      ; 0045671b
        ;   XREF to: 004567fd (CONDITIONAL_JUMP)  ; LAB_004567fd
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456721
    LEA EDX,[EBX + 0x20]                ; 00456727
    FLD float ptr [EAX + 0x20]          ; 0045672a
    FSUB float ptr [EDX]                ; 0045672d
    LEA EDI,[EBP + 0xfffffc9e]          ; 0045672f
    FSTP float ptr [EBP + 0xffffff32]   ; 00456735
    FLD float ptr [EAX + 0x24]          ; 0045673b
    FSUB float ptr [EDX + 0x4]          ; 0045673e
    LEA ESI,[EBP + 0xffffff32]          ; 00456741
    FSTP float ptr [EBP + 0xffffff36]   ; 00456747
    FLD float ptr [EAX + 0x28]          ; 0045674d
    FSUB float ptr [EDX + 0x8]          ; 00456750
    LEA EAX,[EBP + 0xfffffdee]          ; 00456753
    FSTP float ptr [EBP + 0xffffff3a]   ; 00456759
    LEA EDX,[EBP + 0xfffffc9e]          ; 0045675f
    MOVSD ES:EDI,ESI                    ; 00456765
    MOVSD ES:EDI,ESI                    ; 00456766
    MOVSD ES:EDI,ESI                    ; 00456767
    CMP EAX,EDX                         ; 00456768
    JZ 0x00456790                       ; 0045676a
        ;   XREF to: 00456790 (CONDITIONAL_JUMP)  ; LAB_00456790
    MOV EAX,dword ptr [EBP + 0xfffffc9e] ; 0045676c
    MOV dword ptr [EBP + 0xfffffdee],EAX ; 00456772
    MOV EAX,dword ptr [EBP + 0xfffffca2] ; 00456778
    MOV dword ptr [EBP + 0xfffffdf2],EAX ; 0045677e
    MOV EAX,dword ptr [EBP + 0xfffffca6] ; 00456784
    MOV dword ptr [EBP + 0xfffffdf6],EAX ; 0045678a
    FLD float ptr [EBP + 0xfffffdf2]    ; 00456790
        ;   Label: LAB_00456790
    FMUL ST0                            ; 00456796
    FLD float ptr [EBP + 0xfffffdee]    ; 00456798
    FMUL ST0                            ; 0045679e
    FADDP                               ; 004567a0
    FLD float ptr [EBP + 0xfffffdf6]    ; 004567a2
    FMUL ST0                            ; 004567a8
    FADDP                               ; 004567aa
    FSQRT                               ; 004567ac
    FST float ptr [EBP + 0x1a]          ; 004567ae
    FCOMP float ptr [0x005ba6ba]        ; 004567b1 | DAT_005ba6ba
    FNSTSW AX                           ; 004567b7
    SAHF                                ; 004567b9
    JNC 0x004567fd                      ; 004567ba
        ;   XREF to: 004567fd (CONDITIONAL_JUMP)  ; LAB_004567fd
    FLD float ptr [EBP + 0x1a]          ; 004567bc
    FCOMP float ptr [0x005ba6be]        ; 004567bf | DAT_005ba6be
    FNSTSW AX                           ; 004567c5
    SAHF                                ; 004567c7
    JBE 0x004567fd                      ; 004567c8
        ;   XREF to: 004567fd (CONDITIONAL_JUMP)  ; LAB_004567fd
    PUSH 0x3                            ; 004567ca
    PUSH 0x0                            ; 004567cc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004567ce
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004567d3
    CMP EAX,0x1                         ; 004567d6
    JNZ 0x00456a39                      ; 004567d9
        ;   XREF to: 00456a39 (CONDITIONAL_JUMP)  ; LAB_00456a39
    PUSH EAX                            ; 004567df
    FLD float ptr [EBX + 0x34]          ; 004567e0
    PUSH 0xb                            ; 004567e3
    LEA EAX,[EBX + 0x158]               ; 004567e5
    FADD float ptr [0x005ba6c2]         ; 004567eb | DAT_005ba6c2
    PUSH EAX                            ; 004567f1
    FSTP float ptr [EBX + 0x34]         ; 004567f2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004567f5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004567fa
    FLD float ptr [EBP + 0x92]          ; 004567fd
        ;   Label: LAB_004567fd
    FMUL double ptr [0x005ba6ca]        ; 00456803 | DAT_005ba6ca
    SUB ESP,0x4                         ; 00456809
    FSTP float ptr [ESP]                ; 0045680c
    CALL core_actor.cpp_FUN_0040cf40    ; 0045680f
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00456814
    TEST EAX,EAX                        ; 00456817
    JZ 0x0045682e                       ; 00456819
        ;   XREF to: 0045682e (CONDITIONAL_JUMP)  ; LAB_0045682e
    PUSH 0x1                            ; 0045681b
    PUSH 0x4                            ; 0045681d
    LEA EAX,[EBX + 0x158]               ; 0045681f
    PUSH EAX                            ; 00456825
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456826
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045682b
    XOR EAX,EAX                         ; 0045682e
        ;   Label: LAB_0045682e
    MOV dword ptr [EBP + 0xa],EAX       ; 00456830
    MOV EAX,dword ptr [EBX + 0xd118]    ; 00456833
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00456839
    JZ 0x0045684a                       ; 00456841
        ;   XREF to: 0045684a (CONDITIONAL_JUMP)  ; LAB_0045684a
    MOV dword ptr [EBP + 0xa],0x1       ; 00456843
    MOV EAX,dword ptr [EBX + 0xd120]    ; 0045684a
        ;   Label: LAB_0045684a
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00456850
    JZ 0x0045685d                       ; 00456858
        ;   XREF to: 0045685d (CONDITIONAL_JUMP)  ; LAB_0045685d
    INC dword ptr [EBP + 0xa]           ; 0045685a
    PUSH dword ptr [EBP + 0x92]         ; 0045685d
        ;   Label: LAB_0045685d
    PUSH EBX                            ; 00456863
    CALL core_demnfolk.cpp_FUN_00457740 ; 00456864
        ;   XREF to: 00457740 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00457740()
    ADD ESP,0x8                         ; 00456869
    TEST EAX,EAX                        ; 0045686c
    JNZ 0x00455f8c                      ; 0045686e
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x1                            ; 00456874
    MOV EAX,[0x005de058]                ; 00456876 | DAT_005de058
    PUSH EBX                            ; 0045687b
    MOV dword ptr [EBP + 0xe],EAX       ; 0045687c
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 0045687f
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 00456884
    MOV dword ptr [EBP + 0x12],EAX      ; 00456887
    TEST EAX,EAX                        ; 0045688a
    JL 0x0045695b                       ; 0045688c
        ;   XREF to: 0045695b (CONDITIONAL_JUMP)  ; LAB_0045695b
    SHL EAX,0x3                         ; 00456892
    MOV EDX,EAX                         ; 00456895
    SHL EAX,0x4                         ; 00456897
    SUB EAX,EDX                         ; 0045689a
    ADD EAX,EBX                         ; 0045689c
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 0045689e
    TEST EDX,EDX                        ; 004568a4
    JZ 0x0045695b                       ; 004568a6
        ;   XREF to: 0045695b (CONDITIONAL_JUMP)  ; LAB_0045695b
    CMP dword ptr [EBX + 0xd068],0x1    ; 004568ac
    JNZ 0x0045695b                      ; 004568b3
        ;   XREF to: 0045695b (CONDITIONAL_JUMP)  ; LAB_0045695b
    MOV ESI,0x3f800000                  ; 004568b9
    MOV EAX,EDX                         ; 004568be
    MOV dword ptr [EBP + 0x1e],ESI      ; 004568c0
    TEST EDX,EDX                        ; 004568c3
    JZ 0x00456955                       ; 004568c5
        ;   XREF to: 00456955 (CONDITIONAL_JUMP)  ; LAB_00456955
    PUSH EAX                            ; 004568cb
    MOV EDX,dword ptr [EDX + 0x154]     ; 004568cc
    LEA ESI,[EBP + 0xfffffad6]          ; 004568d2
    LEA EDI,[EBP + 0xfffffaee]          ; 004568d8
    CALL dword ptr [EDX + 0x1c]         ; 004568de
    MOV ECX,0x6                         ; 004568e1
    LEA ESI,[EBP + 0xfffffad6]          ; 004568e6
    LEA EAX,[EBP + 0xfffffd2e]          ; 004568ec
    ADD ESP,0x4                         ; 004568f2
    MOVSD.REP ES:EDI,ESI                ; 004568f5
    PUSH EAX                            ; 004568f7
    LEA ESI,[EBP + 0xfffffaee]          ; 004568f8
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 004568fe
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 00456903
    FSUB float ptr [EBP + 0xfffffaee]   ; 00456906
    FSTP float ptr [EBP + 0xfffffd2e]   ; 0045690c
    FLD float ptr [ESI + 0x10]          ; 00456912
    FSUB float ptr [EBP + 0xfffffaf2]   ; 00456915
    LEA EDI,[EBP + 0xfffffeea]          ; 0045691b
    FSTP float ptr [EBP + 0xfffffd32]   ; 00456921
    FLD float ptr [ESI + 0x14]          ; 00456927
    FSUB float ptr [EBP + 0xfffffaf6]   ; 0045692a
    LEA ESI,[EBP + 0xfffffd2e]          ; 00456930
    FSTP float ptr [EBP + 0xfffffd36]   ; 00456936
    MOVSD ES:EDI,ESI                    ; 0045693c
    MOVSD ES:EDI,ESI                    ; 0045693d
    MOVSD ES:EDI,ESI                    ; 0045693e
    FLD float ptr [EBP + 0xfffffef2]    ; 0045693f
    FMUL double ptr [0x005ba69a]        ; 00456945 | DAT_005ba69a
    FLD1                                ; 0045694b
    FADDP                               ; 0045694d
    ADD ESP,0x4                         ; 0045694f
    FSTP float ptr [EBP + 0x1e]         ; 00456952
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00456955
        ;   Label: LAB_00456955
    MOV dword ptr [EBP + 0xe],EAX       ; 00456958
    PUSH 0x3eb2b8c2                     ; 0045695b
        ;   Label: LAB_0045695b
    PUSH 0x3f8ccccd                     ; 00456960
    XOR EDI,EDI                         ; 00456965
    MOV EAX,dword ptr [EBP + 0xe]       ; 00456967
    MOV dword ptr [EBP + 0xfffffcda],EDI ; 0045696a
    MOV dword ptr [EBP + 0xfffffce2],EAX ; 00456970
    LEA EAX,[EBP + 0xfffffcda]          ; 00456976
    MOV dword ptr [EBP + 0xfffffcde],EDI ; 0045697c
    PUSH EAX                            ; 00456982
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456983
    PUSH EAX                            ; 00456989
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045698a
    CALL dword ptr [EDX + 0xc4]         ; 00456990
    ADD ESP,0x4                         ; 00456996
    PUSH EAX                            ; 00456999
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0045699a
    ADD EAX,0x20                        ; 004569a0
    PUSH EAX                            ; 004569a3
    PUSH EBX                            ; 004569a4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004569a5
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 004569aa
    ADD ESP,0x18                        ; 004569b0
    MOV dword ptr [EBP + 0x46],EDX      ; 004569b3
    TEST EAX,EAX                        ; 004569b6
    JL 0x00456a47                       ; 004569b8
        ;   XREF to: 00456a47 (CONDITIONAL_JUMP)  ; LAB_00456a47
    JLE 0x00456aca                      ; 004569be
        ;   XREF to: 00456aca (CONDITIONAL_JUMP)  ; LAB_00456aca
    CMP dword ptr [EBP + 0xa],0x0       ; 004569c4
    JLE 0x00455f8c                      ; 004569c8
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBX + 0xcde0]        ; 004569ce
    FLDZ                                ; 004569d4
    FCOMPP                              ; 004569d6
    FNSTSW AX                           ; 004569d8
    SAHF                                ; 004569da
    JC 0x00455f8c                       ; 004569db
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004569e1
    PUSH EAX                            ; 004569e7
    MOV EDX,dword ptr [EAX + 0x154]     ; 004569e8
    CALL dword ptr [EDX + 0xf4]         ; 004569ee
    ADD ESP,0x4                         ; 004569f4
    TEST EAX,EAX                        ; 004569f7
    JNZ 0x00455f8c                      ; 004569f9
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [EBP + 0x12]      ; 004569ff
    TEST EAX,EAX                        ; 00456a02
    JL 0x00456a7b                       ; 00456a04
        ;   XREF to: 00456a7b (CONDITIONAL_JUMP)  ; LAB_00456a7b
    SHL EAX,0x3                         ; 00456a06
    MOV EDX,EAX                         ; 00456a09
    SHL EAX,0x4                         ; 00456a0b
    SUB EAX,EDX                         ; 00456a0e
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 00456a10
    JZ 0x00456a7b                       ; 00456a18
        ;   XREF to: 00456a7b (CONDITIONAL_JUMP)  ; LAB_00456a7b
    PUSH 0x1                            ; 00456a1a
    PUSH 0xc                            ; 00456a1c
    MOV ECX,dword ptr [EBP + 0x46]      ; 00456a1e
    PUSH ECX                            ; 00456a21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456a22
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00456a22
    ADD ESP,0xc                         ; 00456a27
    MOV dword ptr [EBX + 0xcde0],0x3f4ccccd ; 00456a2a
    JMP 0x00455f8c                      ; 00456a34
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456a39
        ;   Label: LAB_00456a39
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00456a3a
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00456a3f
    JMP 0x004567fd                      ; 00456a42
        ;   XREF to: 004567fd (UNCONDITIONAL_JUMP)  ; LAB_004567fd
    PUSH EBX                            ; 00456a47
        ;   Label: LAB_00456a47
    PUSH 0x5ba624                       ; 00456a48 | = "%s gave up chase - I'm confused\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00456a4d | g_CConsolePtr
    PUSH ESI                            ; 00456a53 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00456a54
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00456a59
    PUSH 0x1                            ; 00456a5c
    PUSH 0x3                            ; 00456a5e
    PUSH EDI                            ; 00456a60
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00456a61
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00456a66
    PUSH EAX                            ; 00456a69
    MOV EDI,dword ptr [EBP + 0x46]      ; 00456a6a
    PUSH EDI                            ; 00456a6d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456a6e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00456a73
    JMP 0x00455f8c                      ; 00456a76
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456a7b
        ;   Label: LAB_00456a7b
    PUSH EAX                            ; 00456a81
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456a82
    LEA ESI,[EBX + 0x158]               ; 00456a88
    CALL dword ptr [EDX + 0x10c]        ; 00456a8e
    ADD ESP,0x4                         ; 00456a94
    TEST EAX,EAX                        ; 00456a97
    JZ 0x00456ac0                       ; 00456a99
        ;   XREF to: 00456ac0 (CONDITIONAL_JUMP)  ; LAB_00456ac0
    PUSH 0x3f000000                     ; 00456a9b
    CALL core_actor.cpp_FUN_0040cf40    ; 00456aa0
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00456aa5
    TEST EAX,EAX                        ; 00456aa8
    JZ 0x00456ab6                       ; 00456aaa
        ;   XREF to: 00456ab6 (CONDITIONAL_JUMP)  ; LAB_00456ab6
    PUSH 0x1                            ; 00456aac
    PUSH 0x2a                           ; 00456aae
    PUSH ESI                            ; 00456ab0
    JMP 0x00456a22                      ; 00456ab1
        ;   XREF to: 00456a22 (UNCONDITIONAL_JUMP)  ; LAB_00456a22
    PUSH 0x1                            ; 00456ab6
        ;   Label: LAB_00456ab6
    PUSH 0x2b                           ; 00456ab8
    PUSH ESI                            ; 00456aba
    JMP 0x00456a22                      ; 00456abb
        ;   XREF to: 00456a22 (UNCONDITIONAL_JUMP)  ; LAB_00456a22
    PUSH 0x1                            ; 00456ac0
        ;   Label: LAB_00456ac0
    PUSH 0xd                            ; 00456ac2
    PUSH ESI                            ; 00456ac4
    JMP 0x00456a22                      ; 00456ac5
        ;   XREF to: 00456a22 (UNCONDITIONAL_JUMP)  ; LAB_00456a22
    MOV EDX,dword ptr [EBX + 0xd068]    ; 00456aca
        ;   Label: LAB_00456aca
    PUSH EDX                            ; 00456ad0
    PUSH EBX                            ; 00456ad1
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 00456ad2
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    MOV dword ptr [EBP + 0x26],EAX      ; 00456ad7
    LEA EAX,[EBX + 0x20]                ; 00456ada
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00456add
    FLD float ptr [EAX]                 ; 00456ae3
    FSUB float ptr [EDX + 0x20]         ; 00456ae5
    FSTP float ptr [EBP + 0xfffffc0e]   ; 00456ae8
    FLD float ptr [EAX + 0x4]           ; 00456aee
    FSUB float ptr [EDX + 0x24]         ; 00456af1
    LEA EDI,[EBP + 0xfffffbc6]          ; 00456af4
    FSTP float ptr [EBP + 0xfffffc12]   ; 00456afa
    FLD float ptr [EAX + 0x8]           ; 00456b00
    FSUB float ptr [EDX + 0x28]         ; 00456b03
    LEA ESI,[EBP + 0xfffffc0e]          ; 00456b06
    FSTP float ptr [EBP + 0xfffffc16]   ; 00456b0c
    MOVSD ES:EDI,ESI                    ; 00456b12
    MOVSD ES:EDI,ESI                    ; 00456b13
    MOVSD ES:EDI,ESI                    ; 00456b14
    FLD float ptr [EBP + 0xfffffbca]    ; 00456b15
    FMUL ST0                            ; 00456b1b
    FLD float ptr [EBP + 0xfffffbc6]    ; 00456b1d
    FMUL ST0                            ; 00456b23
    FADDP                               ; 00456b25
    FLD float ptr [EBP + 0xfffffbce]    ; 00456b27
    FMUL ST0                            ; 00456b2d
    FADDP                               ; 00456b2f
    FSQRT                               ; 00456b31
    ADD ESP,0x8                         ; 00456b33
    ADD EDX,0x20                        ; 00456b36
    FCOMP double ptr [0x005ba6d2]       ; 00456b39 | DAT_005ba6d2
    FNSTSW AX                           ; 00456b3f
    SAHF                                ; 00456b41
    JNC 0x00455f8c                      ; 00456b42
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EDX                            ; 00456b48
    PUSH EBX                            ; 00456b49
    LEA ESI,[EBP + 0xfffffcce]          ; 00456b4a
    LEA EDI,[EBP + 0xfffffcf2]          ; 00456b50
    CALL core_actor.cpp_FUN_00408bf0    ; 00456b56
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffcce]          ; 00456b5b
    LEA EAX,[EBP + 0xfffffcf2]          ; 00456b61
    ADD ESP,0x8                         ; 00456b67
    MOVSD ES:EDI,ESI                    ; 00456b6a
    MOVSD ES:EDI,ESI                    ; 00456b6b
    MOVSD ES:EDI,ESI                    ; 00456b6c
    PUSH EAX                            ; 00456b6d
    LEA ESI,[EBP + 0xfffffc7a]          ; 00456b6e
    LEA EDI,[EBP + 0xfffffc56]          ; 00456b74
    CALL core_vecdir.cpp_FUN_00576250   ; 00456b7a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xfffffc7a]          ; 00456b7f
    MOVSD ES:EDI,ESI                    ; 00456b85
    MOVSD ES:EDI,ESI                    ; 00456b86
    MOVSD ES:EDI,ESI                    ; 00456b87
    FLD float ptr [EBP + 0xfffffc5a]    ; 00456b88
    FABS                                ; 00456b8e
    ADD ESP,0x4                         ; 00456b90
    FCOMP double ptr [0x005ba6da]       ; 00456b93 | DAT_005ba6da
    FNSTSW AX                           ; 00456b99
    SAHF                                ; 00456b9b
    JNC 0x00455f8c                      ; 00456b9c
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV ECX,dword ptr [EBP + 0x26]      ; 00456ba2
    TEST ECX,ECX                        ; 00456ba5
    JL 0x00455f8c                       ; 00456ba7
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV ESI,dword ptr [EBX + 0xd068]    ; 00456bad
    CMP ESI,0x2                         ; 00456bb3
    JC 0x00455f8c                       ; 00456bb6
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    LEA EAX,[ECX*0x8 + 0x0]             ; 00456bbc
    MOV EDX,EAX                         ; 00456bc3
    SHL EAX,0x4                         ; 00456bc5
    SUB EAX,EDX                         ; 00456bc8
    ADD EAX,EBX                         ; 00456bca
    CMP ESI,0x2                         ; 00456bcc
    JA 0x00456c3f                       ; 00456bcf
        ;   XREF to: 00456c3f (CONDITIONAL_JUMP)  ; LAB_00456c3f
    CMP dword ptr [EAX + 0x25b0],0x0    ; 00456bd1
    JZ 0x00455f8c                       ; 00456bd8
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456bde
    PUSH 0x5ba651                       ; 00456bdf | = "%s lugging\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00456be4 | g_CConsolePtr
    PUSH ECX                            ; 00456bea | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00456beb
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00456bf0
    PUSH 0x1                            ; 00456bf3
    PUSH 0x22                           ; 00456bf5
    MOV ESI,dword ptr [EBP + 0x46]      ; 00456bf7
    PUSH ESI                            ; 00456bfa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456bfb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00456c00
    JMP 0x00455f8c                      ; 00456c03
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP dword ptr [EAX + 0x25b0],0x0    ; 00456c08
        ;   Label: LAB_00456c08
    JZ 0x00455f8c                       ; 00456c0f
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456c15
    PUSH 0x5ba645                       ; 00456c16 | = "%s tossing\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00456c1b | g_CConsolePtr
    PUSH EDI                            ; 00456c21 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00456c22
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00456c27
    PUSH 0x1                            ; 00456c2a
    PUSH 0x20                           ; 00456c2c
    MOV EAX,dword ptr [EBP + 0x46]      ; 00456c2e
    PUSH EAX                            ; 00456c31
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456c32
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00456c37
    JMP 0x00455f8c                      ; 00456c3a
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP ESI,0x3                         ; 00456c3f
        ;   Label: LAB_00456c3f
    JZ 0x00456c08                       ; 00456c42
        ;   XREF to: 00456c08 (CONDITIONAL_JUMP)  ; LAB_00456c08
    JMP 0x00455f8c                      ; 00456c44
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00456c49
        ;   Label: caseD_d
    TEST EDI,EDI                        ; 00456c4f
    JZ 0x004566b3                       ; 00456c51
        ;   XREF to: 004566b3 (CONDITIONAL_JUMP)  ; LAB_004566b3
    PUSH EDI                            ; 00456c57
    MOV EDX,dword ptr [EDI + 0x154]     ; 00456c58
    CALL dword ptr [EDX + 0x10c]        ; 00456c5e
    ADD ESP,0x4                         ; 00456c64
    TEST EAX,EAX                        ; 00456c67
    JG 0x004566b3                       ; 00456c69
        ;   XREF to: 004566b3 (CONDITIONAL_JUMP)  ; LAB_004566b3
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456c6f
    PUSH EAX                            ; 00456c75
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456c76
    CALL dword ptr [EDX + 0xf4]         ; 00456c7c
    ADD ESP,0x4                         ; 00456c82
    TEST EAX,EAX                        ; 00456c85
    JNZ 0x00456c9d                      ; 00456c87
        ;   XREF to: 00456c9d (CONDITIONAL_JUMP)  ; LAB_00456c9d
    MOV EAX,[0x005de058]                ; 00456c89 | DAT_005de058
    MOV dword ptr [EBP + 0x5a],EAX      ; 00456c8e
    MOV dword ptr [EBP + -0x1e],0x40400000 ; 00456c91
    JMP 0x00455f8c                      ; 00456c98
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP EAX,EBX                         ; 00456c9d
        ;   Label: LAB_00456c9d
    JZ 0x00455f8c                       ; 00456c9f
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456ca5
        ;   Label: LAB_00456ca5
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00456ca6
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00456cab
    JMP 0x00455f8c                      ; 00456cae
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00456cb3
        ;   Label: caseD_c
    JZ 0x00456ca5                       ; 00456cba
        ;   XREF to: 00456ca5 (CONDITIONAL_JUMP)  ; LAB_00456ca5
    PUSH 0x1                            ; 00456cbc
    PUSH EBX                            ; 00456cbe
    CALL unkafter_demnfolk.cpp_FUN_004580a0 ; 00456cbf
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 00456cc4
    MOV ESI,EAX                         ; 00456cc7
    TEST EAX,EAX                        ; 00456cc9
    JL 0x00456e5d                       ; 00456ccb
        ;   XREF to: 00456e5d (CONDITIONAL_JUMP)  ; LAB_00456e5d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456cd1
    PUSH EAX                            ; 00456cd7
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456cd8
    CALL dword ptr [EDX + 0x10c]        ; 00456cde
    ADD ESP,0x4                         ; 00456ce4
    TEST EAX,EAX                        ; 00456ce7
    JG 0x00456e5d                       ; 00456ce9
        ;   XREF to: 00456e5d (CONDITIONAL_JUMP)  ; LAB_00456e5d
    MOV EAX,ESI                         ; 00456cef
    SHL EAX,0x3                         ; 00456cf1
    MOV EDX,EAX                         ; 00456cf4
    SHL EAX,0x4                         ; 00456cf6
    SUB EAX,EDX                         ; 00456cf9
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 00456cfb
    JZ 0x00456e5d                       ; 00456d03
        ;   XREF to: 00456e5d (CONDITIONAL_JUMP)  ; LAB_00456e5d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456d09
    PUSH EAX                            ; 00456d0f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456d10
    CALL dword ptr [EDX + 0xf4]         ; 00456d16
    ADD ESP,0x4                         ; 00456d1c
    TEST EAX,EAX                        ; 00456d1f
    JNZ 0x00456e5d                      ; 00456d21
        ;   XREF to: 00456e5d (CONDITIONAL_JUMP)  ; LAB_00456e5d
    MOV EAX,ESI                         ; 00456d27
    SHL EAX,0x3                         ; 00456d29
    MOV EDX,EAX                         ; 00456d2c
    SHL EAX,0x4                         ; 00456d2e
    SUB EAX,EDX                         ; 00456d31
    MOV ESI,0x3f800000                  ; 00456d33
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 00456d38
    MOV dword ptr [EBP + 0x2e],ESI      ; 00456d3f
    TEST EAX,EAX                        ; 00456d42
    JZ 0x00456e0d                       ; 00456d44
        ;   XREF to: 00456e0d (CONDITIONAL_JUMP)  ; LAB_00456e0d
    PUSH EAX                            ; 00456d4a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00456d4b
    LEA ESI,[EBP + 0xfffffb36]          ; 00456d51
    LEA EDI,[EBP + 0xfffffbae]          ; 00456d57
    CALL dword ptr [EDX + 0x1c]         ; 00456d5d
    MOV ECX,0x6                         ; 00456d60
    LEA ESI,[EBP + 0xfffffb36]          ; 00456d65
    ADD ESP,0x4                         ; 00456d6b
    MOVSD.REP ES:EDI,ESI                ; 00456d6e
    LEA EAX,[EBP + 0xfffffc02]          ; 00456d70
    LEA EDI,[EBP + 0xfffffbae]          ; 00456d76
    PUSH EAX                            ; 00456d7c
    LEA ESI,[EDI + 0xc]                 ; 00456d7d
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00456d80
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [ESI]                 ; 00456d85
    FSUB float ptr [EDI]                ; 00456d87
    FSTP float ptr [EBP + 0xfffffc02]   ; 00456d89
    FLD float ptr [ESI + 0x4]           ; 00456d8f
    FSUB float ptr [EDI + 0x4]          ; 00456d92
    FSTP float ptr [EBP + 0xfffffc06]   ; 00456d95
    FLD float ptr [ESI + 0x8]           ; 00456d9b
    LEA ESI,[EBP + 0xfffffc02]          ; 00456d9e
    FSUB float ptr [EDI + 0x8]          ; 00456da4
    LEA EDI,[EBP + 0xfffffd82]          ; 00456da7
    FSTP float ptr [EBP + 0xfffffc0a]   ; 00456dad
    MOVSD ES:EDI,ESI                    ; 00456db3
    MOVSD ES:EDI,ESI                    ; 00456db4
    MOVSD ES:EDI,ESI                    ; 00456db5
    LEA EDI,[EBP + 0xffffff7a]          ; 00456db6
    LEA ESI,[EBP + 0xfffffd82]          ; 00456dbc
    MOVSD ES:EDI,ESI                    ; 00456dc2
    MOVSD ES:EDI,ESI                    ; 00456dc3
    MOVSD ES:EDI,ESI                    ; 00456dc4
    LEA EDI,[EBP + 0xfffffdca]          ; 00456dc5
    LEA ESI,[EBP + 0xffffff7a]          ; 00456dcb
    MOVSD ES:EDI,ESI                    ; 00456dd1
    MOVSD ES:EDI,ESI                    ; 00456dd2
    MOVSD ES:EDI,ESI                    ; 00456dd3
    LEA EDI,[EBP + 0xfffffc3e]          ; 00456dd4
    LEA ESI,[EBP + 0xfffffdca]          ; 00456dda
    MOVSD ES:EDI,ESI                    ; 00456de0
    MOVSD ES:EDI,ESI                    ; 00456de1
    MOVSD ES:EDI,ESI                    ; 00456de2
    LEA EDI,[EBP + 0xfffffc1a]          ; 00456de3
    LEA ESI,[EBP + 0xfffffc3e]          ; 00456de9
    MOVSD ES:EDI,ESI                    ; 00456def
    MOVSD ES:EDI,ESI                    ; 00456df0
    MOVSD ES:EDI,ESI                    ; 00456df1
    FLD float ptr [EBP + 0xfffffc22]    ; 00456df2
    FMUL double ptr [0x005ba69a]        ; 00456df8 | DAT_005ba69a
    FLD float ptr [EBP + 0x2e]          ; 00456dfe
    FXCH                                ; 00456e01
    FADD ST0,ST1                        ; 00456e03
    ADD ESP,0x4                         ; 00456e05
    FSTP ST1                            ; 00456e08
    FSTP float ptr [EBP + 0x2e]         ; 00456e0a
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00456e0d
        ;   Label: LAB_00456e0d
    MOV dword ptr [EBP + 0x5a],EAX      ; 00456e10
    LEA EAX,[EBX + 0x158]               ; 00456e13
    PUSH EAX                            ; 00456e19
    CALL core_motion.cpp_FUN_004fc930   ; 00456e1a
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD1                                ; 00456e1f
    MOV dword ptr [EBP + 0x76],EAX      ; 00456e21
    ADD ESP,0x4                         ; 00456e24
    MOV EAX,dword ptr [EBP + 0x76]      ; 00456e27
    MOV dword ptr [EBP + 0x2a],EAX      ; 00456e2a
    FLD float ptr [EBP + 0x2a]          ; 00456e2d
    FSTP double ptr [EBP + -0x3e]       ; 00456e30
    FCOMP double ptr [EBP + -0x3e]      ; 00456e33
    FNSTSW AX                           ; 00456e36
    SAHF                                ; 00456e38
    JA 0x00455f8c                       ; 00456e39
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    FLD double ptr [EBP + -0x3e]        ; 00456e3f
    FCOMP double ptr [0x005ba6aa]       ; 00456e42 | DAT_005ba6aa
    FNSTSW AX                           ; 00456e48
    SAHF                                ; 00456e4a
    JA 0x00455f8c                       ; 00456e4b
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    MOV dword ptr [EBP + -0x12],0x1     ; 00456e51
    JMP 0x00455f8c                      ; 00456e58
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456e5d
        ;   Label: LAB_00456e5d
    PUSH 0x5ba65d                       ; 00456e5e | = "%s gave up swing\n"
    MOV EAX,[0x005f1690]                ; 00456e63 | g_CConsolePtr
    PUSH EAX                            ; 00456e68 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00456e69
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00456e6e
    PUSH EBX                            ; 00456e71
    CALL unkafter_demnfolk.cpp_FUN_00458fb0 ; 00456e72
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00456e77
    JMP 0x00455f8c                      ; 00456e7a
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH dword ptr [EBP + 0x92]         ; 00456e7f
        ;   Label: caseD_29
    MOV EAX,dword ptr [EBX + 0x154]     ; 00456e85
    PUSH EBX                            ; 00456e8b
    CALL dword ptr [EAX + 0x144]        ; 00456e8c
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00456e92
    ADD ESP,0x8                         ; 00456e98
    TEST ECX,ECX                        ; 00456e9b
    JZ 0x00455f8c                       ; 00456e9d
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    LEA EDI,[EBX + 0x20]                ; 00456ea3
    MOV EDX,ECX                         ; 00456ea6
    LEA EAX,[ECX + 0x20]                ; 00456ea8
    FLD float ptr [EDI]                 ; 00456eab
    FSUB float ptr [EAX]                ; 00456ead
    FMUL ST0                            ; 00456eaf
    FLD float ptr [EDI + 0x8]           ; 00456eb1
    FSUB float ptr [EAX + 0x8]          ; 00456eb4
    FMUL ST0                            ; 00456eb7
    FADDP                               ; 00456eb9
    FSQRT                               ; 00456ebb
    FCOMP double ptr [0x005ba6a2]       ; 00456ebd | DAT_005ba6a2
    FNSTSW AX                           ; 00456ec3
    SAHF                                ; 00456ec5
    JA 0x00455f8c                       ; 00456ec6
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    FLD float ptr [EBX + 0x24]          ; 00456ecc
    FSUB float ptr [ECX + 0x24]         ; 00456ecf
    FABS                                ; 00456ed2
    FCOMP double ptr [0x005ba6aa]       ; 00456ed4 | DAT_005ba6aa
    FNSTSW AX                           ; 00456eda
    SAHF                                ; 00456edc
    JA 0x00455f8c                       ; 00456edd
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    PUSH 0x1                            ; 00456ee3
    PUSH 0x3                            ; 00456ee5
    PUSH 0x0                            ; 00456ee7
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00456ee9
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00456eee
    PUSH EAX                            ; 00456ef1
    PUSH ESI                            ; 00456ef2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00456ef3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00456ef8
    JMP 0x00455f8c                      ; 00456efb
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    PUSH EBX                            ; 00456f00
        ;   Label: caseD_2c
    MOV EAX,[0x00603b28]                ; 00456f01 | g_CDemonSetPtr
    PUSH EAX                            ; 00456f06 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00534820      ; 00456f07
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00534820(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00456f0c
    JMP 0x00455f8c                      ; 00456f0f
        ;   XREF to: 00455f8c (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EDX,0xbf800000                  ; 00456f14
        ;   Label: LAB_00456f14
    MOV ECX,0x3e99999a                  ; 00456f19
    PUSH ESI                            ; 00456f1e
    MOV dword ptr [EBP + 0x5a],EDX      ; 00456f1f
    MOV dword ptr [EBP + -0x1e],ECX     ; 00456f22
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00456f25
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00456f2a
    ADD ESP,0x4                         ; 00456f2d
    CMP EAX,0x2f                        ; 00456f30
    JA 0x00455f8c                       ; 00456f33
        ;   XREF to: 00455f8c (CONDITIONAL_JUMP)  ; caseD_2f
    JMP dword ptr [EAX*0x4 + 0x454fc0]  ; 00456f39 | caseD_3 | caseD_7 | caseD_9
        ;   Label: switchD
    CMP EAX,0x24                        ; 00456f40
        ;   Label: LAB_00456f40
    JNZ 0x00456fa7                      ; 00456f43
        ;   XREF to: 00456fa7 (CONDITIONAL_JUMP)  ; LAB_00456fa7
    PUSH EDX                            ; 00456f45
    PUSH EBX                            ; 00456f46
    LEA ESI,[EBP + 0xfffffef6]          ; 00456f47
    LEA EDI,[EBP + 0xfffffd5e]          ; 00456f4d
    CALL core_actor.cpp_FUN_00408b00    ; 00456f53
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xfffffef6]          ; 00456f58
    LEA EAX,[EBX + 0x20]                ; 00456f5e
    MOVSD ES:EDI,ESI                    ; 00456f61
    MOVSD ES:EDI,ESI                    ; 00456f62
    MOVSD ES:EDI,ESI                    ; 00456f63
    FLD float ptr [EAX]                 ; 00456f64
    FADD float ptr [EBP + 0xfffffd5e]   ; 00456f66
    FLD float ptr [EAX + 0x4]           ; 00456f6c
    FXCH                                ; 00456f6f
    FSTP float ptr [EAX]                ; 00456f71
    FADD float ptr [EBP + 0xfffffd62]   ; 00456f73
    FLD float ptr [EAX + 0x8]           ; 00456f79
    FXCH                                ; 00456f7c
    FSTP float ptr [EAX + 0x4]          ; 00456f7e
    FADD float ptr [EBP + 0xfffffd66]   ; 00456f81
    FSTP float ptr [EAX + 0x8]          ; 00456f87
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00456f8a
    MOV dword ptr [EAX + 0x8],0x0       ; 00456f8d
    ADD ESP,0x8                         ; 00456f94
    MOV EDX,dword ptr [EAX + 0x8]       ; 00456f97
    MOV dword ptr [EAX + 0x4],EDX       ; 00456f9a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00456f9d
    MOV dword ptr [EAX],EDX             ; 00456fa0
    JMP 0x00455d32                      ; 00456fa2
        ;   XREF to: 00455d32 (UNCONDITIONAL_JUMP)  ; LAB_00455d32
    PUSH EBX                            ; 00456fa7
        ;   Label: LAB_00456fa7
    CALL core_charactr.cpp_FUN_0042ccf0 ; 00456fa8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00456fad
    TEST EAX,EAX                        ; 00456fb0
    JZ 0x00455d32                       ; 00456fb2
        ;   XREF to: 00455d32 (CONDITIONAL_JUMP)  ; LAB_00455d32
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00456fb8
    TEST EDI,EDI                        ; 00456fbe
    JZ 0x00456fec                       ; 00456fc0
        ;   XREF to: 00456fec (CONDITIONAL_JUMP)  ; LAB_00456fec
    PUSH EDI                            ; 00456fc2
    MOV EDX,dword ptr [EDI + 0x154]     ; 00456fc3
    CALL dword ptr [EDX + 0xf4]         ; 00456fc9
    ADD ESP,0x4                         ; 00456fcf
    CMP EAX,EBX                         ; 00456fd2
    JNZ 0x00456fec                      ; 00456fd4
        ;   XREF to: 00456fec (CONDITIONAL_JUMP)  ; LAB_00456fec
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00456fd6
    PUSH EAX                            ; 00456fdc
    MOV EDX,dword ptr [0x00603b28]      ; 00456fdd | g_CDemonSetPtr
    PUSH EDX                            ; 00456fe3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00456fe4
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00456fe9
    PUSH dword ptr [EBP + 0x92]         ; 00456fec
        ;   Label: LAB_00456fec
    PUSH EBX                            ; 00456ff2
    LEA ESI,[EBX + 0x2518]              ; 00456ff3
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00456ff9
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 00456ffe
    FMUL float ptr [EBP + 0x92]         ; 00457000
    FSTP float ptr [EBP + 0xfffffe8a]   ; 00457006
    FLD float ptr [ESI + 0x4]           ; 0045700c
    FMUL float ptr [EBP + 0x92]         ; 0045700f
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00457015
    FLD float ptr [ESI + 0x8]           ; 0045701b
    FMUL float ptr [EBP + 0x92]         ; 0045701e
    LEA EDI,[EBP + -0x4a]               ; 00457024
    LEA ESI,[EBP + 0xfffffe8a]          ; 00457027
    FSTP float ptr [EBP + 0xfffffe92]   ; 0045702d
    MOVSD ES:EDI,ESI                    ; 00457033
    MOVSD ES:EDI,ESI                    ; 00457034
    MOVSD ES:EDI,ESI                    ; 00457035
    LEA EDX,[EBX + 0x250c]              ; 00457036
    FLD float ptr [EBP + -0x46]         ; 0045703c
    FLD float ptr [EBP + -0x4a]         ; 0045703f
    FADD float ptr [EDX]                ; 00457042
    FLD float ptr [EBP + -0x42]         ; 00457044
    FXCH                                ; 00457047
    FSTP float ptr [EBP + 0xfffffbea]   ; 00457049
    FXCH                                ; 0045704f
    FADD float ptr [EDX + 0x4]          ; 00457051
    LEA EDI,[EBP + 0xfffffbd2]          ; 00457054
    FSTP float ptr [EBP + 0xfffffbee]   ; 0045705a
    FADD float ptr [EDX + 0x8]          ; 00457060
    LEA ESI,[EBP + 0xfffffbea]          ; 00457063
    FSTP float ptr [EBP + 0xfffffbf2]   ; 00457069
    MOVSD ES:EDI,ESI                    ; 0045706f
    MOVSD ES:EDI,ESI                    ; 00457070
    MOVSD ES:EDI,ESI                    ; 00457071
    LEA EAX,[EBX + 0x249c]              ; 00457072
    FLD float ptr [EBP + 0xfffffbd6]    ; 00457078
    FLD float ptr [EBP + 0xfffffbd2]    ; 0045707e
    FADD float ptr [EAX]                ; 00457084
    FLD float ptr [EBP + 0xfffffbda]    ; 00457086
    FXCH                                ; 0045708c
    FSTP float ptr [EBP + 0xfffffede]   ; 0045708e
    FXCH                                ; 00457094
    FADD float ptr [EAX + 0x4]          ; 00457096
    LEA EDI,[EBP + 0xfffffdb2]          ; 00457099
    FSTP float ptr [EBP + 0xfffffee2]   ; 0045709f
    FADD float ptr [EAX + 0x8]          ; 004570a5
    LEA ESI,[EBP + 0xfffffede]          ; 004570a8
    FSTP float ptr [EBP + 0xfffffee6]   ; 004570ae
    MOVSD ES:EDI,ESI                    ; 004570b4
    MOVSD ES:EDI,ESI                    ; 004570b5
    MOVSD ES:EDI,ESI                    ; 004570b6
    MOV dword ptr [EDX + 0x8],0x0       ; 004570b7
    MOV ECX,dword ptr [EDX + 0x8]       ; 004570be
    MOV dword ptr [EDX + 0x4],ECX       ; 004570c1
    MOV ECX,dword ptr [EDX + 0x4]       ; 004570c4
    MOV dword ptr [EDX],ECX             ; 004570c7
    MOV dword ptr [EAX + 0x8],0x0       ; 004570c9
    ADD ESP,0x8                         ; 004570d0
    MOV EDX,dword ptr [EAX + 0x8]       ; 004570d3
    MOV dword ptr [EAX + 0x4],EDX       ; 004570d6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004570d9
    MOV dword ptr [EAX],EDX             ; 004570dc
    LEA EAX,[EBP + 0xfffffdb2]          ; 004570de
    PUSH EAX                            ; 004570e4
    PUSH EBX                            ; 004570e5
    CALL core_charactr.cpp_FUN_0042c230 ; 004570e6
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    MOV ECX,dword ptr [EBP + 0x56]      ; 004570eb
    ADD ESP,0x8                         ; 004570ee
    CMP ECX,0x4                         ; 004570f1
    JNZ 0x00455d32                      ; 004570f4
        ;   XREF to: 00455d32 (CONDITIONAL_JUMP)  ; LAB_00455d32
    MOV ESI,dword ptr [0x01b85178]      ; 004570fa | g_CDoorClassInfo.name_hash
    PUSH ESI                            ; 00457100
    MOV EDI,dword ptr [0x007e2cf0]      ; 00457101 | DAT_007e2cf0
    PUSH EDI                            ; 00457107
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00457108
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV dword ptr [EBP + 0x3e],EAX      ; 0045710d
    ADD ESP,0x8                         ; 00457110
    MOV dword ptr [EBP + 0x3a],EAX      ; 00457113
    TEST EAX,EAX                        ; 00457116
    JZ 0x00455d32                       ; 00457118
        ;   XREF to: 00455d32 (CONDITIONAL_JUMP)  ; LAB_00455d32
    MOV EDX,dword ptr [EBP + 0x3e]      ; 0045711e
    MOV EAX,dword ptr [EAX + 0x154]     ; 00457121
    PUSH EDX                            ; 00457127
    LEA ESI,[EBP + 0xfffffb1e]          ; 00457128
    LEA EDI,[EBP + 0xfffffb7e]          ; 0045712e
    CALL dword ptr [EAX + 0x1c]         ; 00457134
    MOV ECX,0x6                         ; 00457137
    LEA ESI,[EBP + 0xfffffb1e]          ; 0045713c
    MOVSD.REP ES:EDI,ESI                ; 00457142
    LEA EAX,[EBP + 0xfffffb7e]          ; 00457144
    FLD float ptr [EBP + 0xfffffb82]    ; 0045714a
    FLD float ptr [EBP + 0xfffffb7e]    ; 00457150
    FADD float ptr [EAX + 0xc]          ; 00457156
    FLD float ptr [EBP + 0xfffffb86]    ; 00457159
    FXCH                                ; 0045715f
    FSTP float ptr [EBP + 0xfffffd3a]   ; 00457161
    FXCH                                ; 00457167
    FADD float ptr [EAX + 0x10]         ; 00457169
    LEA EDI,[EBP + 0xfffffcfe]          ; 0045716c
    FSTP float ptr [EBP + 0xfffffd3e]   ; 00457172
    FADD float ptr [EAX + 0x14]         ; 00457178
    LEA ESI,[EBP + 0xfffffd3a]          ; 0045717b
    FSTP float ptr [EBP + 0xfffffd42]   ; 00457181
    MOVSD ES:EDI,ESI                    ; 00457187
    MOVSD ES:EDI,ESI                    ; 00457188
    MOVSD ES:EDI,ESI                    ; 00457189
    FLD float ptr [0x005ba6ea]          ; 0045718a | DAT_005ba6ea
    FLD float ptr [EBP + 0xfffffcfe]    ; 00457190
    FMUL ST1                            ; 00457196
    FLD float ptr [EBP + 0xfffffd02]    ; 00457198
    FMUL ST2                            ; 0045719e
    FLD float ptr [EBP + 0xfffffd06]    ; 004571a0
    FMULP ST3                           ; 004571a6
    ADD ESP,0x4                         ; 004571a8
    LEA EAX,[EBP + 0xfffffc92]          ; 004571ab
    MOV ECX,dword ptr [EBP + 0x3e]      ; 004571b1
    PUSH EAX                            ; 004571b4
    LEA EDI,[EBP + 0xfffffc92]          ; 004571b5
    LEA ESI,[EBP + 0xfffffe96]          ; 004571bb
    FXCH                                ; 004571c1
    FSTP float ptr [EBP + 0xfffffe96]   ; 004571c3
    FSTP float ptr [EBP + 0xfffffe9a]   ; 004571c9
    FSTP float ptr [EBP + 0xfffffe9e]   ; 004571cf
    MOVSD ES:EDI,ESI                    ; 004571d5
    MOVSD ES:EDI,ESI                    ; 004571d6
    MOVSD ES:EDI,ESI                    ; 004571d7
    PUSH ECX                            ; 004571d8
    LEA ESI,[EBP + 0xfffffe06]          ; 004571d9
    LEA EDI,[EBP + 0xfffffda6]          ; 004571df
    CALL core_actor.cpp_FUN_00408b80    ; 004571e5
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004571ea
    LEA EAX,[EBP + 0xfffffda6]          ; 004571ed
    LEA ESI,[EBP + 0xfffffe06]          ; 004571f3
    PUSH EAX                            ; 004571f9
    MOVSD ES:EDI,ESI                    ; 004571fa
    MOVSD ES:EDI,ESI                    ; 004571fb
    MOVSD ES:EDI,ESI                    ; 004571fc
    PUSH EBX                            ; 004571fd
    LEA ESI,[EBP + 0xfffffeba]          ; 004571fe
    LEA EDI,[EBP + 0xfffffeae]          ; 00457204
    CALL core_actor.cpp_FUN_00408bf0    ; 0045720a
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffeba]          ; 0045720f
    LEA EAX,[EBP + 0xfffffeae]          ; 00457215
    ADD ESP,0x8                         ; 0045721b
    MOVSD ES:EDI,ESI                    ; 0045721e
    MOVSD ES:EDI,ESI                    ; 0045721f
    MOVSD ES:EDI,ESI                    ; 00457220
    PUSH EAX                            ; 00457221
    LEA ESI,[EBP + 0xffffff6e]          ; 00457222
    LEA EDI,[EBP + 0xfffffcaa]          ; 00457228
    CALL core_vecdir.cpp_FUN_00576250   ; 0045722e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xffffff6e]          ; 00457233
    MOVSD ES:EDI,ESI                    ; 00457239
    MOVSD ES:EDI,ESI                    ; 0045723a
    MOVSD ES:EDI,ESI                    ; 0045723b
    FLD float ptr [EBP + 0xfffffcae]    ; 0045723c
    FABS                                ; 00457242
    ADD ESP,0x4                         ; 00457244
    FCOMP double ptr [0x005ba712]       ; 00457247 | DAT_005ba712
    FNSTSW AX                           ; 0045724d
    SAHF                                ; 0045724f
    JNC 0x00455d32                      ; 00457250
        ;   XREF to: 00455d32 (CONDITIONAL_JUMP)  ; LAB_00455d32
    PUSH 0x3f000000                     ; 00457256
    CALL core_actor.cpp_FUN_0040cf40    ; 0045725b
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    MOV ESI,0x27                        ; 00457260
    ADD ESP,0x4                         ; 00457265
    TEST EAX,EAX                        ; 00457268
    JZ 0x00457271                       ; 0045726a
        ;   XREF to: 00457271 (CONDITIONAL_JUMP)  ; LAB_00457271
    MOV ESI,0x28                        ; 0045726c
    PUSH 0x1                            ; 00457271
        ;   Label: LAB_00457271
    PUSH ESI                            ; 00457273
    LEA EAX,[EBX + 0x158]               ; 00457274
    PUSH EAX                            ; 0045727a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0045727b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00457280
    ADD ESP,0xc                         ; 00457283
    MOV dword ptr [EBX + 0xd070],EAX    ; 00457286
    JMP 0x00455d32                      ; 0045728c
        ;   XREF to: 00455d32 (UNCONDITIONAL_JUMP)  ; LAB_00455d32
    MOV ECX,dword ptr [EBX + 0xd110]    ; 00457291
        ;   Label: LAB_00457291
    PUSH 0x3f000000                     ; 00457297
    PUSH ECX                            ; 0045729c
    JMP 0x00455e26                      ; 0045729d
        ;   XREF to: 00455e26 (UNCONDITIONAL_JUMP)  ; LAB_00455e26
    MOV EAX,dword ptr [EBX + 0xd128]    ; 004572a2
        ;   Label: LAB_004572a2
    SHL EAX,0x2                         ; 004572a8
    ADD EAX,EBX                         ; 004572ab
    CMP dword ptr [EAX + 0x2298],0x0    ; 004572ad
    JZ 0x00455e3d                       ; 004572b4
        ;   XREF to: 00455e3d (CONDITIONAL_JUMP)  ; LAB_00455e3d
    MOV dword ptr [EAX + 0x2298],0x0    ; 004572ba
    MOV ESI,dword ptr [EBX + 0xd110]    ; 004572c4
    PUSH 0x3e4ccccd                     ; 004572ca
    PUSH ESI                            ; 004572cf
    MOV EDI,dword ptr [EBX + 0xd128]    ; 004572d0
    PUSH EDI                            ; 004572d6
    PUSH EBX                            ; 004572d7
    CALL core_charactr.cpp_FUN_0042fdc0 ; 004572d8
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd128]    ; 004572dd
    ADD ESP,0x10                        ; 004572e3
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1 ; 004572e6
    JMP 0x00455e3d                      ; 004572f1
        ;   XREF to: 00455e3d (UNCONDITIONAL_JUMP)  ; LAB_00455e3d

