; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombie_cpp_FUN_005bafb0(CZombie *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHASE_2_005fa53c
;   TerminatedCString s_ghoul_eat_wav_005fa544
;   TerminatedCString s_s_picked_up_s_using_hand_005fa554
;   TerminatedCString s_core_zombie_cpp_005fa573
;   undefined4 DAT_005fa586
;   TerminatedCString s_s_lugging_s_005fa58b
;   TerminatedCString s_zom_h0_wav_005fa59a
;   TerminatedCString s_core_zombie_cpp_005fa5a6
;   undefined4 DAT_005fa5b9
;   TerminatedCString s_s_tossing_s_005fa5be
;   TerminatedCString s_zom_h0_wav_005fa5cd
;   TerminatedCString s_zombie_bang_door_wav_005fa5d9
;   TerminatedCString s_ghoul_eat_wav_005fa5ef
;   undefined4 s_ghoul_eat_wav_005fa5ef+1
;   undefined4 s_ghoul_eat_wav_005fa5ef+2
;   ... and 52 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cd00
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   ... and 36 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bafb0
        ;   Label: core_zombie.cpp_FUN_005bafb0
    PUSH ESI                            ; 005bafb1
    PUSH EDI                            ; 005bafb2
    PUSH EBP                            ; 005bafb3
    MOV EBP,ESP                         ; 005bafb4
    SUB ESP,0x618                       ; 005bafb6
    SUB EBP,0x7a                        ; 005bafbc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005bafbf
    PUSH dword ptr [EBP + 0x92]         ; 005bafc5
    PUSH EBX                            ; 005bafcb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005bafcc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bafd1
    TEST EAX,EAX                        ; 005bafd4
    JNZ 0x005bafe0                      ; 005bafd6
        ;   XREF to: 005bafe0 (CONDITIONAL_JUMP)  ; LAB_005bafe0
    LEA ESP,[EBP + 0x7a]                ; 005bafd8
        ;   Label: LAB_005bafd8
    POP EBP                             ; 005bafdb
    POP EDI                             ; 005bafdc
    POP ESI                             ; 005bafdd
    POP EBX                             ; 005bafde
    RET                                 ; 005bafdf
    XOR EDX,EDX                         ; 005bafe0
        ;   Label: LAB_005bafe0
    PUSH EDX                            ; 005bafe2
    PUSH 0x5fa53c                       ; 005bafe3 | = "CHASE_2"
    LEA EAX,[EBX + 0x158]               ; 005bafe8
    PUSH EAX                            ; 005bafee
    MOV dword ptr [EBP + 0x36],EDX      ; 005bafef
    CALL core_motion.cpp_FUN_00524a00   ; 005baff2
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005baff7
    PUSH EAX                            ; 005baffa
    CALL core_motion.cpp_FUN_00524150   ; 005baffb
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bb000
    CMP EAX,0x16                        ; 005bb003
    JNZ 0x005bb00f                      ; 005bb006
        ;   XREF to: 005bb00f (CONDITIONAL_JUMP)  ; LAB_005bb00f
    MOV dword ptr [EBP + 0x36],0x1      ; 005bb008
    MOV ESI,dword ptr [EBX + 0x26fc]    ; 005bb00f
        ;   Label: LAB_005bb00f
    TEST ESI,ESI                        ; 005bb015
    JNZ 0x005bb0a9                      ; 005bb017
        ;   XREF to: 005bb0a9 (CONDITIONAL_JUMP)  ; LAB_005bb0a9
    FLD float ptr [EBX + 0xc340]        ; 005bb01d
    FLDZ                                ; 005bb023
    FCOMPP                              ; 005bb025
    FNSTSW AX                           ; 005bb027
    SAHF                                ; 005bb029
    JC 0x005bb109                       ; 005bb02a
        ;   XREF to: 005bb109 (CONDITIONAL_JUMP)  ; LAB_005bb109
    LEA EAX,[EBP + 0xfffffb12]          ; 005bb030
        ;   Label: LAB_005bb030
    FLD float ptr [EBP + 0x92]          ; 005bb036
    ADD EAX,0xc                         ; 005bb03c
    FMUL float ptr [EBX + 0xc1d0]       ; 005bb03f
    MOV dword ptr [EBP + 0x1e],EAX      ; 005bb045
    LEA EAX,[EBP + 0xfffffb72]          ; 005bb048
    ADD EAX,0xc                         ; 005bb04e
    MOV dword ptr [EBP + 0x26],EAX      ; 005bb051
    LEA EAX,[EBX + 0x158]               ; 005bb054
    FSTP float ptr [EBP + -0x12]        ; 005bb05a
    MOV dword ptr [EBP + 0x5a],EAX      ; 005bb05d
    FLD float ptr [EBP + -0x12]         ; 005bb060
        ;   Label: LAB_005bb060
    FLDZ                                ; 005bb063
    FCOMPP                              ; 005bb065
    FNSTSW AX                           ; 005bb067
    SAHF                                ; 005bb069
    JNC 0x005bbb23                      ; 005bb06a
        ;   XREF to: 005bbb23 (CONDITIONAL_JUMP)  ; LAB_005bbb23
    LEA EAX,[EBP + -0x12]               ; 005bb070
    PUSH EAX                            ; 005bb073
    MOV ECX,dword ptr [EBP + 0x5a]      ; 005bb074
    PUSH ECX                            ; 005bb077
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 005bb078
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005bb07d
    MOV ESI,EAX                         ; 005bb080
    CMP EAX,0xb                         ; 005bb082
    JNC 0x005bbacb                      ; 005bb085
        ;   XREF to: 005bbacb (CONDITIONAL_JUMP)  ; LAB_005bbacb
    CMP EAX,0x5                         ; 005bb08b
    JNC 0x005bbb05                      ; 005bb08e
        ;   XREF to: 005bbb05 (CONDITIONAL_JUMP)  ; LAB_005bbb05
    CMP EAX,0x2                         ; 005bb094
    JZ 0x005bb4af                       ; 005bb097
        ;   XREF to: 005bb4af (CONDITIONAL_JUMP)  ; LAB_005bb4af
    PUSH ESI                            ; 005bb09d
        ;   Label: LAB_005bb09d
    PUSH EBX                            ; 005bb09e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005bb09f
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005bb0a4
    JMP 0x005bb060                      ; 005bb0a7
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV EAX,dword ptr [ESI + 0x154]     ; 005bb0a9
        ;   Label: LAB_005bb0a9
    PUSH 0x0                            ; 005bb0af
    MOV dword ptr [EBP + 0x76],EAX      ; 005bb0b1
    LEA EAX,[EBX + 0x158]               ; 005bb0b4
    MOV dword ptr [EBP + 0x1a],ESI      ; 005bb0ba
    PUSH EAX                            ; 005bb0bd
    LEA ESI,[EBP + 0xfffffdee]          ; 005bb0be
    LEA EDI,[EBP + 0xfffffdbe]          ; 005bb0c4
    CALL core_skeleton.cpp_FUN_00569130 ; 005bb0ca
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 005bb0cf
    LEA EAX,[EBP + 0xfffffdbe]          ; 005bb0d2
    LEA ESI,[EBP + 0xfffffdee]          ; 005bb0d8
    PUSH EAX                            ; 005bb0de
    MOVSD ES:EDI,ESI                    ; 005bb0df
    MOVSD ES:EDI,ESI                    ; 005bb0e0
    MOVSD ES:EDI,ESI                    ; 005bb0e1
    PUSH EBX                            ; 005bb0e2
    MOV EDI,dword ptr [EBP + 0x1a]      ; 005bb0e3
    MOV EAX,dword ptr [EBP + 0x76]      ; 005bb0e6
    PUSH EDI                            ; 005bb0e9
    CALL dword ptr [EAX + 0x110]        ; 005bb0ea
    ADD ESP,0xc                         ; 005bb0f0
    TEST EAX,EAX                        ; 005bb0f3
    JNZ 0x005bafd8                      ; 005bb0f5
        ;   XREF to: 005bafd8 (CONDITIONAL_JUMP)  ; LAB_005bafd8
    MOV dword ptr [EBX + 0x26fc],EAX    ; 005bb0fb
    LEA ESP,[EBP + 0x7a]                ; 005bb101
    POP EBP                             ; 005bb104
    POP EDI                             ; 005bb105
    POP ESI                             ; 005bb106
    POP EBX                             ; 005bb107
    RET                                 ; 005bb108
    FLD float ptr [EBX + 0xc340]        ; 005bb109
        ;   Label: LAB_005bb109
    FSUB float ptr [EBP + 0x92]         ; 005bb10f
    FSTP float ptr [EBX + 0xc340]       ; 005bb115
    JMP 0x005bb030                      ; 005bb11b
        ;   XREF to: 005bb030 (UNCONDITIONAL_JUMP)  ; LAB_005bb030
    MOV EDI,0x1                         ; 005bb120
        ;   Label: LAB_005bb120
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb125
    MOV dword ptr [EBP + 0x3a],EDI      ; 005bb12b
    TEST EAX,EAX                        ; 005bb12e
    JNZ 0x005bb140                      ; 005bb130
        ;   XREF to: 005bb140 (CONDITIONAL_JUMP)  ; LAB_005bb140
    PUSH EBX                            ; 005bb132
        ;   Label: LAB_005bb132
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb133
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb138
    JMP 0x005bb060                      ; 005bb13b
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV EAX,[0x006083a8]                ; 005bb140 | DAT_006083a8
        ;   Label: LAB_005bb140
    MOV dword ptr [EBP + 0xfffffc9a],EAX ; 005bb145
    LEA EAX,[EBP + 0xfffffc92]          ; 005bb14b
    LEA ESI,[EBP + 0xfffffc26]          ; 005bb151
    PUSH EAX                            ; 005bb157
    LEA EDI,[EBP + 0xfffffd0a]          ; 005bb158
    XOR EDX,EDX                         ; 005bb15e
    PUSH EBX                            ; 005bb160
    MOV dword ptr [EBP + 0xfffffc92],EDX ; 005bb161
    MOV dword ptr [EBP + 0xfffffc96],EDX ; 005bb167
    CALL core_actor.cpp_FUN_00408b40    ; 005bb16d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffc26]          ; 005bb172
    MOVSD ES:EDI,ESI                    ; 005bb178
    MOVSD ES:EDI,ESI                    ; 005bb179
    MOVSD ES:EDI,ESI                    ; 005bb17a
    FLD float ptr [EBP + 0xfffffd0a]    ; 005bb17b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb181
    FLD float ptr [EBP + 0xfffffd0e]    ; 005bb187
    FXCH                                ; 005bb18d
    FSUB float ptr [EAX + 0x20]         ; 005bb18f
    FLD float ptr [EBP + 0xfffffd12]    ; 005bb192
    FXCH                                ; 005bb198
    FSTP float ptr [EBP + -0x6e]        ; 005bb19a
    FXCH                                ; 005bb19d
    FSUB float ptr [EAX + 0x24]         ; 005bb19f
    LEA EDI,[EBP + 0xfffffc3e]          ; 005bb1a2
    FSTP float ptr [EBP + -0x6a]        ; 005bb1a8
    FSUB float ptr [EAX + 0x28]         ; 005bb1ab
    LEA ESI,[EBP + -0x6e]               ; 005bb1ae
    FSTP float ptr [EBP + -0x66]        ; 005bb1b1
    MOVSD ES:EDI,ESI                    ; 005bb1b4
    MOVSD ES:EDI,ESI                    ; 005bb1b5
    MOVSD ES:EDI,ESI                    ; 005bb1b6
    FLD float ptr [EBP + 0xfffffc3e]    ; 005bb1b7
    FMUL ST0                            ; 005bb1bd
    FLD float ptr [EBP + 0xfffffc46]    ; 005bb1bf
    FMUL ST0                            ; 005bb1c5
    FADDP                               ; 005bb1c7
    FSQRT                               ; 005bb1c9
    XOR ESI,ESI                         ; 005bb1cb
    ADD ESP,0x8                         ; 005bb1cd
    MOV dword ptr [EBP + 0xfffffc42],ESI ; 005bb1d0
    FLD1                                ; 005bb1d6
    FCOMPP                              ; 005bb1d8
    FNSTSW AX                           ; 005bb1da
    SAHF                                ; 005bb1dc
    JC 0x005bb132                       ; 005bb1dd
        ;   XREF to: 005bb132 (CONDITIONAL_JUMP)  ; LAB_005bb132
    CMP dword ptr [EBP + 0x3a],0x0      ; 005bb1e3
    JZ 0x005bb2b1                       ; 005bb1e7
        ;   XREF to: 005bb2b1 (CONDITIONAL_JUMP)  ; LAB_005bb2b1
    MOV EDX,0x40800000                  ; 005bb1ed
    LEA EAX,[EBP + 0xfffffdb2]          ; 005bb1f2
    LEA EDI,[EBP + 0xfffffce6]          ; 005bb1f8
    PUSH EAX                            ; 005bb1fe
    MOV dword ptr [EBP + 0xfffffdb2],ESI ; 005bb1ff
    MOV dword ptr [EBP + 0xfffffdba],ESI ; 005bb205
    PUSH EBX                            ; 005bb20b
    LEA ESI,[EBP + 0xfffffe8a]          ; 005bb20c
    MOV dword ptr [EBP + 0xfffffdb6],EDX ; 005bb212
    CALL core_actor.cpp_FUN_00408b40    ; 005bb218
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe8a]          ; 005bb21d
    MOVSD ES:EDI,ESI                    ; 005bb223
    MOVSD ES:EDI,ESI                    ; 005bb224
    MOVSD ES:EDI,ESI                    ; 005bb225
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005bb226
    LEA EDI,[EBP + 0xfffffe7e]          ; 005bb22c
    LEA ESI,[ESI + 0x20]                ; 005bb232
    MOVSD ES:EDI,ESI                    ; 005bb235
    MOVSD ES:EDI,ESI                    ; 005bb236
    MOVSD ES:EDI,ESI                    ; 005bb237
    ADD ESP,0x8                         ; 005bb238
    MOV ESI,dword ptr [0x00622c18]      ; 005bb23b | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0xfffffcea] ; 005bb241
    PUSH ESI                            ; 005bb247 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xfffffe82],EAX ; 005bb248
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005bb24e
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005bb253
    PUSH EBX                            ; 005bb256
    MOV EDI,dword ptr [0x00622c18]      ; 005bb257 | g_CDemonSetPtr
    PUSH EDI                            ; 005bb25d | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005bb25e
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005bb263
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb266
    PUSH EAX                            ; 005bb26c
    MOV EDX,dword ptr [0x00622c18]      ; 005bb26d | g_CDemonSetPtr
    PUSH EDX                            ; 005bb273 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005bb274
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005bb279
    LEA EAX,[EBP + 0xfffffe7e]          ; 005bb27c
    PUSH EAX                            ; 005bb282
    LEA EAX,[EBP + 0xfffffce6]          ; 005bb283
    PUSH EAX                            ; 005bb289
    MOV ECX,dword ptr [0x00622c18]      ; 005bb28a | g_CDemonSetPtr
    PUSH ECX                            ; 005bb290 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 005bb291
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 005bb296
    TEST EAX,EAX                        ; 005bb299
    JZ 0x005bb2a2                       ; 005bb29b
        ;   XREF to: 005bb2a2 (CONDITIONAL_JUMP)  ; LAB_005bb2a2
    XOR ESI,ESI                         ; 005bb29d
    MOV dword ptr [EBP + 0x3a],ESI      ; 005bb29f
    MOV EDI,dword ptr [0x00622c18]      ; 005bb2a2 | g_CDemonSetPtr
        ;   Label: LAB_005bb2a2
    PUSH EDI                            ; 005bb2a8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005bb2a9
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005bb2ae
    CMP dword ptr [EBP + 0x3a],0x0      ; 005bb2b1
        ;   Label: LAB_005bb2b1
    JZ 0x005bb2d8                       ; 005bb2b5
        ;   XREF to: 005bb2d8 (CONDITIONAL_JUMP)  ; LAB_005bb2d8
    PUSH 0x0                            ; 005bb2b7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb2b9
    PUSH EBX                            ; 005bb2bf
    MOV ESI,dword ptr [EAX + 0x154]     ; 005bb2c0
    PUSH EAX                            ; 005bb2c6
    CALL dword ptr [ESI + 0xec]         ; 005bb2c7
    ADD ESP,0xc                         ; 005bb2cd
    TEST EAX,EAX                        ; 005bb2d0
    JZ 0x005bb132                       ; 005bb2d2
        ;   XREF to: 005bb132 (CONDITIONAL_JUMP)  ; LAB_005bb132
    CMP dword ptr [EBP + 0x3a],0x0      ; 005bb2d8
        ;   Label: LAB_005bb2d8
    JNZ 0x005bb060                      ; 005bb2dc
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH EBX                            ; 005bb2e2
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb2e3
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb2e8
    JMP 0x005bb060                      ; 005bb2eb
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005bb2f0
        ;   Label: LAB_005bb2f0
    JNZ 0x005bb307                      ; 005bb2f7
        ;   XREF to: 005bb307 (CONDITIONAL_JUMP)  ; LAB_005bb307
    PUSH EBX                            ; 005bb2f9
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb2fa
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb2ff
    JMP 0x005bb060                      ; 005bb302
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV EDI,dword ptr [EBX + 0xc2f8]    ; 005bb307
        ;   Label: LAB_005bb307
    PUSH EDI                            ; 005bb30d
    MOV EAX,dword ptr [EBP + 0x5a]      ; 005bb30e
    PUSH EAX                            ; 005bb311
    LEA ESI,[EBP + 0xfffffcb6]          ; 005bb312
    LEA EDI,[EBP + 0xffffff3e]          ; 005bb318
    CALL core_skeleton.cpp_FUN_00569040 ; 005bb31e
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 005bb323
    LEA EAX,[EBP + 0xffffff3e]          ; 005bb326
    LEA ESI,[EBP + 0xfffffcb6]          ; 005bb32c
    PUSH EAX                            ; 005bb332
    MOVSD ES:EDI,ESI                    ; 005bb333
    MOVSD ES:EDI,ESI                    ; 005bb334
    MOVSD ES:EDI,ESI                    ; 005bb335
    PUSH EBX                            ; 005bb336
    LEA ESI,[EBP + 0xfffffcc2]          ; 005bb337
    LEA EDI,[EBP + 0xfffffed2]          ; 005bb33d
    CALL core_actor.cpp_FUN_00408b40    ; 005bb343
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffcc2]          ; 005bb348
    MOVSD ES:EDI,ESI                    ; 005bb34e
    MOVSD ES:EDI,ESI                    ; 005bb34f
    MOVSD ES:EDI,ESI                    ; 005bb350
    MOV EDX,dword ptr [EBX + 0xc334]    ; 005bb351
    ADD ESP,0x8                         ; 005bb357
    TEST EDX,EDX                        ; 005bb35a
    JL 0x005bb386                       ; 005bb35c
        ;   XREF to: 005bb386 (CONDITIONAL_JUMP)  ; LAB_005bb386
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb35e
    PUSH EAX                            ; 005bb364
    MOV ESI,dword ptr [EAX + 0x154]     ; 005bb365
    CALL dword ptr [ESI + 0xf4]         ; 005bb36b
    ADD ESP,0x4                         ; 005bb371
    CMP EAX,EBX                         ; 005bb374
    JZ 0x005bb3bf                       ; 005bb376
        ;   XREF to: 005bb3bf (CONDITIONAL_JUMP)  ; LAB_005bb3bf
    PUSH EBX                            ; 005bb378
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb379
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb37e
    JMP 0x005bb060                      ; 005bb381
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb386
        ;   Label: LAB_005bb386
    FLD float ptr [EBP + 0xfffffed2]    ; 005bb38c
    FSUB float ptr [EAX + 0x20]         ; 005bb392
    FMUL ST0                            ; 005bb395
    FLD float ptr [EBP + 0xfffffeda]    ; 005bb397
    FSUB float ptr [EAX + 0x28]         ; 005bb39d
    FMUL ST0                            ; 005bb3a0
    FADDP                               ; 005bb3a2
    FSQRT                               ; 005bb3a4
    FCOMP double ptr [0x005fa78c]       ; 005bb3a6 | DAT_005fa78c
    FNSTSW AX                           ; 005bb3ac
    SAHF                                ; 005bb3ae
    JBE 0x005bb3bf                      ; 005bb3af
        ;   XREF to: 005bb3bf (CONDITIONAL_JUMP)  ; LAB_005bb3bf
    PUSH EBX                            ; 005bb3b1
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb3b2
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb3b7
    JMP 0x005bb060                      ; 005bb3ba
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    LEA EAX,[EBP + 0xfffffa62]          ; 005bb3bf
        ;   Label: LAB_005bb3bf
    PUSH EAX                            ; 005bb3c5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005bb3c6
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005bb3cb
    PUSH 0x41c80000                     ; 005bb3ce
    PUSH 0x41700000                     ; 005bb3d3
    LEA ESI,[EBP + 0xfffffa62]          ; 005bb3d8
    CALL core_actor.cpp_FUN_0040cc00    ; 005bb3de
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 005bb3e3
    ADD ESP,0x8                         ; 005bb3e6
    MOV dword ptr [EBP + 0xfffffa96],EBX ; 005bb3e9
    MOV dword ptr [EBP + 0xfffffa9a],EBX ; 005bb3ef
    FLD float ptr [EBP + 0x76]          ; 005bb3f5
    PUSH ESI                            ; 005bb3f8
    FSTP float ptr [EBP + 0xfffffa66]   ; 005bb3f9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb3ff
    PUSH EAX                            ; 005bb405
    MOV EDI,dword ptr [EAX + 0x154]     ; 005bb406
    CALL dword ptr [EDI + 0x108]        ; 005bb40c
    FLD float ptr [EBP + 0xfffffa66]    ; 005bb412
    FLDZ                                ; 005bb418
    ADD ESP,0x8                         ; 005bb41a
    FXCH                                ; 005bb41d
    FSTP double ptr [EBP + -0x2e]       ; 005bb41f
    FCOMP double ptr [EBP + -0x2e]      ; 005bb422
    FNSTSW AX                           ; 005bb425
    SAHF                                ; 005bb427
    JNC 0x005bb45f                      ; 005bb428
        ;   XREF to: 005bb45f (CONDITIONAL_JUMP)  ; LAB_005bb45f
    FLD double ptr [EBP + -0x2e]        ; 005bb42a
    FMUL double ptr [0x005fa754]        ; 005bb42d | DAT_005fa754
    FMUL double ptr [0x005fa75c]        ; 005bb433 | DAT_005fa75c
    PUSH 0x0                            ; 005bb439
    CALL crt_math.c_round_FUN_005c03a0  ; 005bb43b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x4e]        ; 005bb440
    MOV ECX,dword ptr [EBP + 0x4e]      ; 005bb443
    PUSH ECX                            ; 005bb446
    PUSH 0x0                            ; 005bb447
    LEA EAX,[EBP + 0xfffffed2]          ; 005bb449
    PUSH EAX                            ; 005bb44f
    MOV ESI,dword ptr [0x0061dca4]      ; 005bb450 | g_CGorePtr
    PUSH ESI                            ; 005bb456
    CALL core_gore.cpp_FUN_004e6060     ; 005bb457
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005bb45c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb45f
        ;   Label: LAB_005bb45f
    PUSH EAX                            ; 005bb465
    MOV ESI,dword ptr [EAX + 0x154]     ; 005bb466
    CALL dword ptr [ESI + 0x10c]        ; 005bb46c
    ADD ESP,0x4                         ; 005bb472
    TEST EAX,EAX                        ; 005bb475
    JLE 0x005bb498                      ; 005bb477
        ;   XREF to: 005bb498 (CONDITIONAL_JUMP)  ; LAB_005bb498
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb479
    PUSH EAX                            ; 005bb47f
    MOV ESI,dword ptr [EAX + 0x154]     ; 005bb480
    CALL dword ptr [ESI + 0xf0]         ; 005bb486
    ADD ESP,0x4                         ; 005bb48c
    PUSH EBX                            ; 005bb48f
    CALL core_zombie.cpp_FUN_005bed80   ; 005bb490
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bb495
    PUSH 0x5fa544                       ; 005bb498 | = "ghoul-eat-?.wav"
        ;   Label: LAB_005bb498
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bb49d
    PUSH EBX                            ; 005bb4a3
    CALL dword ptr [EAX + 0x2c]         ; 005bb4a4
    ADD ESP,0x8                         ; 005bb4a7
    JMP 0x005bb060                      ; 005bb4aa
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ECX,dword ptr [EBX + 0xc278]    ; 005bb4af
        ;   Label: LAB_005bb4af
    TEST ECX,ECX                        ; 005bb4b5
    JZ 0x005bb060                       ; 005bb4b7
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ESI,dword ptr [EBX + 0xc27c]    ; 005bb4bd
    PUSH ESI                            ; 005bb4c3
    PUSH EBX                            ; 005bb4c4
    MOV EDI,ECX                         ; 005bb4c5
    MOV dword ptr [EBX + 0xc278],0x0    ; 005bb4c7
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bb4d1
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bb4d6
    MOV ESI,EAX                         ; 005bb4d9
    TEST EAX,EAX                        ; 005bb4db
    JL 0x005bb060                       ; 005bb4dd
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH 0x0                            ; 005bb4e3
    PUSH 0x3e4ccccd                     ; 005bb4e5
    PUSH EDI                            ; 005bb4ea
    PUSH EAX                            ; 005bb4eb
    PUSH EBX                            ; 005bb4ec
    CALL core_charactr.cpp_FUN_004325b0 ; 005bb4ed
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 005bb4f2
    PUSH ESI                            ; 005bb4f5
    PUSH EDI                            ; 005bb4f6
    PUSH EBX                            ; 005bb4f7
    MOV EAX,0x5fa554                    ; 005bb4f8 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 005bb4fd | = "%s picked up %s using hand %d\n"
    MOV EDI,dword ptr [0x00611100]      ; 005bb4fe | g_CConsolePtr
    PUSH EDI                            ; 005bb504 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bb505
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 005bb50a
    JMP 0x005bb060                      ; 005bb50d
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH 0x2                            ; 005bb512
        ;   Label: LAB_005bb512
    PUSH EBX                            ; 005bb514
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bb515
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bb51a
    MOV ESI,EAX                         ; 005bb51d
    TEST EAX,EAX                        ; 005bb51f
    JL 0x005bb599                       ; 005bb521
        ;   XREF to: 005bb599 (CONDITIONAL_JUMP)  ; LAB_005bb599
    IMUL EAX,ESI,0x78                   ; 005bb523
        ;   Label: LAB_005bb523
    ADD EAX,EBX                         ; 005bb526
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 005bb528
    TEST EDX,EDX                        ; 005bb52e
    JZ 0x005bb060                       ; 005bb530
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH EDX                            ; 005bb536
    PUSH EBX                            ; 005bb537
    PUSH 0x5fa58b                       ; 005bb538 | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 005bb53d | g_CConsolePtr
    PUSH EDI                            ; 005bb543 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bb544
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EDX,0x40c00000                  ; 005bb549
    XOR EAX,EAX                         ; 005bb54e
    ADD ESP,0x10                        ; 005bb550
    MOV dword ptr [EBP + 0xfffffcda],EAX ; 005bb553
    LEA EAX,[EBP + 0xfffffcda]          ; 005bb559
    MOV ECX,0x41880000                  ; 005bb55f
    PUSH EAX                            ; 005bb564
    MOV dword ptr [EBP + 0xfffffcde],EDX ; 005bb565
    MOV dword ptr [EBP + 0xfffffce2],ECX ; 005bb56b
    PUSH ESI                            ; 005bb571
    MOV EDI,dword ptr [EBX + 0x154]     ; 005bb572
    PUSH EBX                            ; 005bb578
    CALL dword ptr [EDI + 0x128]        ; 005bb579
    ADD ESP,0xc                         ; 005bb57f
    PUSH 0x5fa59a                       ; 005bb582 | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bb587
    PUSH EBX                            ; 005bb58d
    CALL dword ptr [EAX + 0x2c]         ; 005bb58e
    ADD ESP,0x8                         ; 005bb591
    JMP 0x005bb060                      ; 005bb594
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ECX,0x5fa573                    ; 005bb599 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005bb599
    MOV EDI,0x1ef                       ; 005bb59e
    PUSH 0x5fa586                       ; 005bb5a3 | DAT_005fa586
    MOV dword ptr [0x01d1d400],ECX      ; 005bb5a8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005bb5ae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005bb5b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005bb5b9
    JMP 0x005bb523                      ; 005bb5bc
        ;   XREF to: 005bb523 (UNCONDITIONAL_JUMP)  ; LAB_005bb523
    PUSH 0x3                            ; 005bb5c1
        ;   Label: LAB_005bb5c1
    PUSH EBX                            ; 005bb5c3
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bb5c4
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bb5c9
    MOV dword ptr [EBP + -0x22],EAX     ; 005bb5cc
    TEST EAX,EAX                        ; 005bb5cf
    JL 0x005bb6a2                       ; 005bb5d1
        ;   XREF to: 005bb6a2 (CONDITIONAL_JUMP)  ; LAB_005bb6a2
    IMUL EAX,dword ptr [EBP + -0x22],0x78 ; 005bb5d7
        ;   Label: LAB_005bb5d7
    LEA EDX,[EBX + EAX*0x1]             ; 005bb5db
    MOV ECX,dword ptr [EDX + 0x25b0]    ; 005bb5de
    MOV dword ptr [EBP + -0x1e],EDX     ; 005bb5e4
    TEST ECX,ECX                        ; 005bb5e7
    JZ 0x005bb060                       ; 005bb5e9
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH ECX                            ; 005bb5ef
    PUSH EBX                            ; 005bb5f0
    PUSH 0x5fa5be                       ; 005bb5f1 | = "%s tossing %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 005bb5f6 | g_CConsolePtr
    PUSH EDI                            ; 005bb5fc | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bb5fd
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    XOR EAX,EAX                         ; 005bb602
    MOV ECX,0x3f800000                  ; 005bb604
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 005bb609
    MOV dword ptr [EBP + 0xfffffd26],EAX ; 005bb60f
    MOV dword ptr [EBP + 0xfffffd2a],ECX ; 005bb615
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005bb61b
    ADD ESP,0x10                        ; 005bb621
    TEST ESI,ESI                        ; 005bb624
    JNZ 0x005bb6ca                      ; 005bb626
        ;   XREF to: 005bb6ca (CONDITIONAL_JUMP)  ; LAB_005bb6ca
    FLD float ptr [0x005fa750]          ; 005bb62c | DAT_005fa750
        ;   Label: LAB_005bb62c
    FLD float ptr [EBP + 0xfffffd22]    ; 005bb632
    FMUL ST1                            ; 005bb638
    FLD float ptr [EBP + 0xfffffd26]    ; 005bb63a
    FMUL ST2                            ; 005bb640
    FLD float ptr [EBP + 0xfffffd2a]    ; 005bb642
    FMULP ST3                           ; 005bb648
    LEA EAX,[EBP + 0xfffffd22]          ; 005bb64a
    MOV EDX,dword ptr [EBP + -0x22]     ; 005bb650
    PUSH EAX                            ; 005bb653
    FXCH                                ; 005bb654
    FSTP float ptr [EBP + 0xfffffd22]   ; 005bb656
    FSTP float ptr [EBP + 0xfffffd26]   ; 005bb65c
    FSTP float ptr [EBP + 0xfffffd2a]   ; 005bb662
    FLD float ptr [EBP + 0xfffffd26]    ; 005bb668
    PUSH EDX                            ; 005bb66e
    FADD float ptr [0x005fa784]         ; 005bb66f | DAT_005fa784
    PUSH EBX                            ; 005bb675
    FSTP float ptr [EBP + 0xfffffd26]   ; 005bb676
    MOV ESI,dword ptr [EBX + 0x154]     ; 005bb67c
    CALL dword ptr [ESI + 0x128]        ; 005bb682
    ADD ESP,0xc                         ; 005bb688
    PUSH 0x5fa5cd                       ; 005bb68b | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bb690
    PUSH EBX                            ; 005bb696
    CALL dword ptr [EAX + 0x2c]         ; 005bb697
    ADD ESP,0x8                         ; 005bb69a
    JMP 0x005bb060                      ; 005bb69d
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ESI,0x5fa5a6                    ; 005bb6a2 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005bb6a2
    MOV EDI,0x206                       ; 005bb6a7
    PUSH 0x5fa5b9                       ; 005bb6ac | DAT_005fa5b9
    MOV dword ptr [0x01d1d400],ESI      ; 005bb6b1 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005bb6b7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005bb6bd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005bb6c2
    JMP 0x005bb5d7                      ; 005bb6c5
        ;   XREF to: 005bb5d7 (UNCONDITIONAL_JUMP)  ; LAB_005bb5d7
    MOV EAX,dword ptr [EBP + -0x1e]     ; 005bb6ca
        ;   Label: LAB_005bb6ca
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 005bb6cd
    PUSH EAX                            ; 005bb6d3
    MOV EDI,dword ptr [EAX + 0x154]     ; 005bb6d4
    LEA ESI,[EBP + 0xfffffb5a]          ; 005bb6da
    CALL dword ptr [EDI + 0x1c]         ; 005bb6e0
    MOV ECX,0x6                         ; 005bb6e3
    LEA EDI,[EBP + 0xfffffb12]          ; 005bb6e8
    LEA ESI,[EBP + 0xfffffb5a]          ; 005bb6ee
    MOVSD.REP ES:EDI,ESI                ; 005bb6f4
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005bb6f6
    FLD float ptr [EBP + 0xfffffb16]    ; 005bb6f9
    FLD float ptr [EBP + 0xfffffb12]    ; 005bb6ff
    FADD float ptr [EAX]                ; 005bb705
    FLD float ptr [EBP + 0xfffffb1a]    ; 005bb707
    FXCH                                ; 005bb70d
    FSTP float ptr [EBP + 0xfffffe2a]   ; 005bb70f
    FXCH                                ; 005bb715
    FADD float ptr [EAX + 0x4]          ; 005bb717
    LEA EDI,[EBP + 0xfffffeba]          ; 005bb71a
    FSTP float ptr [EBP + 0xfffffe2e]   ; 005bb720
    FADD float ptr [EAX + 0x8]          ; 005bb726
    LEA ESI,[EBP + 0xfffffe2a]          ; 005bb729
    FSTP float ptr [EBP + 0xfffffe32]   ; 005bb72f
    MOVSD ES:EDI,ESI                    ; 005bb735
    MOVSD ES:EDI,ESI                    ; 005bb736
    MOVSD ES:EDI,ESI                    ; 005bb737
    FLD float ptr [EBP + 0xfffffeba]    ; 005bb738
    FMUL float ptr [0x005fa74c]         ; 005bb73e | DAT_005fa74c
    FLD float ptr [EBP + 0xfffffebe]    ; 005bb744
    FMUL float ptr [0x005fa74c]         ; 005bb74a | DAT_005fa74c
    ADD ESP,0x4                         ; 005bb750
    LEA EAX,[EBP + 0xfffffdfa]          ; 005bb753
    FLD float ptr [EBP + 0xfffffec2]    ; 005bb759
    FMUL float ptr [0x005fa74c]         ; 005bb75f | DAT_005fa74c
    PUSH EAX                            ; 005bb765
    LEA EDI,[EBP + 0xfffffdfa]          ; 005bb766
    LEA ESI,[EBP + 0xfffffe72]          ; 005bb76c
    MOV EAX,dword ptr [EBP + -0x1e]     ; 005bb772
    FXCH ST2                            ; 005bb775
    FSTP float ptr [EBP + 0xfffffe72]   ; 005bb777
    FSTP float ptr [EBP + 0xfffffe76]   ; 005bb77d
    FSTP float ptr [EBP + 0xfffffe7a]   ; 005bb783
    MOVSD ES:EDI,ESI                    ; 005bb789
    MOVSD ES:EDI,ESI                    ; 005bb78a
    MOVSD ES:EDI,ESI                    ; 005bb78b
    MOV EDI,dword ptr [EAX + 0x25b0]    ; 005bb78c
    PUSH EDI                            ; 005bb792
    LEA ESI,[EBP + 0xfffffc9e]          ; 005bb793
    LEA EDI,[EBP + 0xfffffe4e]          ; 005bb799
    CALL core_actor.cpp_FUN_00408b40    ; 005bb79f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffc9e]          ; 005bb7a4
    MOVSD ES:EDI,ESI                    ; 005bb7aa
    MOVSD ES:EDI,ESI                    ; 005bb7ab
    MOVSD ES:EDI,ESI                    ; 005bb7ac
    ADD ESP,0x8                         ; 005bb7ad
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb7b0
    PUSH EAX                            ; 005bb7b6
    MOV EDI,dword ptr [EAX + 0x154]     ; 005bb7b7
    LEA ESI,[EBP + 0xfffffafa]          ; 005bb7bd
    CALL dword ptr [EDI + 0x1c]         ; 005bb7c3
    MOV ECX,0x6                         ; 005bb7c6
    LEA EDI,[EBP + 0xfffffb72]          ; 005bb7cb
    LEA ESI,[EBP + 0xfffffafa]          ; 005bb7d1
    MOVSD.REP ES:EDI,ESI                ; 005bb7d7
    MOV EAX,dword ptr [EBP + 0x26]      ; 005bb7d9
    FLD float ptr [EBP + 0xfffffb76]    ; 005bb7dc
    FLD float ptr [EBP + 0xfffffb72]    ; 005bb7e2
    FADD float ptr [EAX]                ; 005bb7e8
    FLD float ptr [EBP + 0xfffffb7a]    ; 005bb7ea
    FXCH                                ; 005bb7f0
    FSTP float ptr [EBP + 0xfffffede]   ; 005bb7f2
    FXCH                                ; 005bb7f8
    FADD float ptr [EAX + 0x4]          ; 005bb7fa
    LEA EDI,[EBP + 0xffffff62]          ; 005bb7fd
    FSTP float ptr [EBP + 0xfffffee2]   ; 005bb803
    FADD float ptr [EAX + 0x8]          ; 005bb809
    LEA ESI,[EBP + 0xfffffede]          ; 005bb80c
    FSTP float ptr [EBP + 0xfffffee6]   ; 005bb812
    MOVSD ES:EDI,ESI                    ; 005bb818
    MOVSD ES:EDI,ESI                    ; 005bb819
    MOVSD ES:EDI,ESI                    ; 005bb81a
    FLD float ptr [EBP + 0xffffff62]    ; 005bb81b
    FMUL float ptr [0x005fa74c]         ; 005bb821 | DAT_005fa74c
    FLD float ptr [EBP + 0xffffff66]    ; 005bb827
    FMUL float ptr [0x005fa74c]         ; 005bb82d | DAT_005fa74c
    FLD float ptr [EBP + 0xffffff6a]    ; 005bb833
    FMUL float ptr [0x005fa74c]         ; 005bb839 | DAT_005fa74c
    ADD ESP,0x4                         ; 005bb83f
    LEA EAX,[EBP + 0xfffffc7a]          ; 005bb842
    LEA EDI,[EBP + 0xfffffc7a]          ; 005bb848
    LEA ESI,[EBP + 0xffffff26]          ; 005bb84e
    FXCH ST2                            ; 005bb854
    FSTP float ptr [EBP + 0xffffff26]   ; 005bb856
    FSTP float ptr [EBP + 0xffffff2a]   ; 005bb85c
    FSTP float ptr [EBP + 0xffffff2e]   ; 005bb862
    MOVSD ES:EDI,ESI                    ; 005bb868
    MOVSD ES:EDI,ESI                    ; 005bb869
    MOVSD ES:EDI,ESI                    ; 005bb86a
    PUSH EAX                            ; 005bb86b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bb86c
    PUSH EAX                            ; 005bb872
    LEA ESI,[EBP + 0xfffffd52]          ; 005bb873
    LEA EDI,[EBP + 0xfffffcfe]          ; 005bb879
    CALL core_actor.cpp_FUN_00408b40    ; 005bb87f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffd52]          ; 005bb884
    MOVSD ES:EDI,ESI                    ; 005bb88a
    MOVSD ES:EDI,ESI                    ; 005bb88b
    MOVSD ES:EDI,ESI                    ; 005bb88c
    FLD float ptr [EBP + 0xfffffcfe]    ; 005bb88d
    FLD float ptr [EBP + 0xfffffd02]    ; 005bb893
    FLD float ptr [EBP + 0xfffffd06]    ; 005bb899
    LEA EDI,[EBP + 0xfffffd76]          ; 005bb89f
    LEA ESI,[EBP + 0xfffffec6]          ; 005bb8a5
    FXCH ST2                            ; 005bb8ab
    FSUB float ptr [EBP + 0xfffffe4e]   ; 005bb8ad
    FXCH                                ; 005bb8b3
    FSUB float ptr [EBP + 0xfffffe52]   ; 005bb8b5
    FXCH ST2                            ; 005bb8bb
    FSUB float ptr [EBP + 0xfffffe56]   ; 005bb8bd
    FXCH                                ; 005bb8c3
    FSTP float ptr [EBP + 0xfffffec6]   ; 005bb8c5
    FXCH                                ; 005bb8cb
    FSTP float ptr [EBP + 0xfffffeca]   ; 005bb8cd
    FSTP float ptr [EBP + 0xfffffece]   ; 005bb8d3
    MOVSD ES:EDI,ESI                    ; 005bb8d9
    MOVSD ES:EDI,ESI                    ; 005bb8da
    MOVSD ES:EDI,ESI                    ; 005bb8db
    FLD float ptr [EBP + 0xfffffd7a]    ; 005bb8dc
    FMUL ST0                            ; 005bb8e2
    FLD float ptr [EBP + 0xfffffd76]    ; 005bb8e4
    FMUL ST0                            ; 005bb8ea
    FADDP                               ; 005bb8ec
    FLD float ptr [EBP + 0xfffffd7e]    ; 005bb8ee
    FMUL ST0                            ; 005bb8f4
    FADDP                               ; 005bb8f6
    FSQRT                               ; 005bb8f8
    ADD ESP,0x8                         ; 005bb8fa
    FST float ptr [EBP + 0x2a]          ; 005bb8fd
    FLDZ                                ; 005bb900
    FCOMPP                              ; 005bb902
    FNSTSW AX                           ; 005bb904
    SAHF                                ; 005bb906
    JNC 0x005bb62c                      ; 005bb907
        ;   XREF to: 005bb62c (CONDITIONAL_JUMP)  ; LAB_005bb62c
    LEA EAX,[EBP + 0xfffffd76]          ; 005bb90d
    PUSH EAX                            ; 005bb913
    PUSH EBX                            ; 005bb914
    LEA ESI,[EBP + 0xfffffc1a]          ; 005bb915
    LEA EDI,[EBP + 0xfffffbea]          ; 005bb91b
    CALL core_actor.cpp_FUN_00408b00    ; 005bb921
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xfffffc1a]          ; 005bb926
    MOVSD ES:EDI,ESI                    ; 005bb92c
    MOVSD ES:EDI,ESI                    ; 005bb92d
    MOVSD ES:EDI,ESI                    ; 005bb92e
    FLD1                                ; 005bb92f
    FLD float ptr [EBP + 0xfffffbea]    ; 005bb931
    FXCH                                ; 005bb937
    FDIV float ptr [EBP + 0x2a]         ; 005bb939
    FXCH                                ; 005bb93c
    FMUL ST1                            ; 005bb93e
    FLD float ptr [EBP + 0xfffffbee]    ; 005bb940
    FMUL ST2                            ; 005bb946
    FLD float ptr [EBP + 0xfffffbf2]    ; 005bb948
    FMULP ST3                           ; 005bb94e
    LEA EDI,[EBP + 0xfffffc56]          ; 005bb950
    LEA ESI,[EBP + 0xfffffd2e]          ; 005bb956
    FXCH                                ; 005bb95c
    FSTP float ptr [EBP + 0xfffffd2e]   ; 005bb95e
    FSTP float ptr [EBP + 0xfffffd32]   ; 005bb964
    FSTP float ptr [EBP + 0xfffffd36]   ; 005bb96a
    MOVSD ES:EDI,ESI                    ; 005bb970
    MOVSD ES:EDI,ESI                    ; 005bb971
    MOVSD ES:EDI,ESI                    ; 005bb972
    LEA EAX,[EBP + 0xfffffd22]          ; 005bb973
    LEA ESI,[EBP + 0xfffffc56]          ; 005bb979
    ADD ESP,0x8                         ; 005bb97f
    CMP EAX,ESI                         ; 005bb982
    JZ 0x005bb62c                       ; 005bb984
        ;   XREF to: 005bb62c (CONDITIONAL_JUMP)  ; LAB_005bb62c
    MOV EAX,dword ptr [EBP + 0xfffffc56] ; 005bb98a
    MOV dword ptr [EBP + 0xfffffd22],EAX ; 005bb990
    MOV EAX,dword ptr [EBP + 0xfffffc5a] ; 005bb996
    MOV dword ptr [EBP + 0xfffffd26],EAX ; 005bb99c
    MOV EAX,dword ptr [EBP + 0xfffffc5e] ; 005bb9a2
    MOV dword ptr [EBP + 0xfffffd2a],EAX ; 005bb9a8
    JMP 0x005bb62c                      ; 005bb9ae
        ;   XREF to: 005bb62c (UNCONDITIONAL_JUMP)  ; LAB_005bb62c
    MOV EDX,dword ptr [EBX + 0xc284]    ; 005bb9b3
        ;   Label: LAB_005bb9b3
    TEST EDX,EDX                        ; 005bb9b9
    JZ 0x005bb060                       ; 005bb9bb
        ;   XREF to: 005bb060 (CONDITIONAL_JUMP)  ; LAB_005bb060
    PUSH 0x3e99999a                     ; 005bb9c1
    PUSH EDX                            ; 005bb9c6
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00478820 ; 005bb9c7
        ;   XREF to: 00478820 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00478820(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 005bb9cc
    MOV EAX,dword ptr [EBX + 0xc284]    ; 005bb9cf
    PUSH 0x5fa5d9                       ; 005bb9d5 | = "zombie-bang-door?.wav"
    MOV ESI,dword ptr [EAX + 0x154]     ; 005bb9da
    PUSH EAX                            ; 005bb9e0
    CALL dword ptr [ESI + 0x2c]         ; 005bb9e1
    ADD ESP,0x8                         ; 005bb9e4
    MOV dword ptr [EBX + 0xc284],0x0    ; 005bb9e7
    JMP 0x005bb060                      ; 005bb9f1
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ESI,dword ptr [EBX + 0xc2f8]    ; 005bb9f6
        ;   Label: LAB_005bb9f6
    PUSH ESI                            ; 005bb9fc
    MOV EDI,dword ptr [EBP + 0x5a]      ; 005bb9fd
    PUSH EDI                            ; 005bba00
    LEA ESI,[EBP + 0xfffffef6]          ; 005bba01
    CALL core_skeleton.cpp_FUN_00569040 ; 005bba07
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + 0xfffffeea]          ; 005bba0c
    ADD ESP,0x8                         ; 005bba12
    LEA EAX,[EBP + 0xfffffeea]          ; 005bba15
    LEA ESI,[EBP + 0xfffffef6]          ; 005bba1b
    PUSH EAX                            ; 005bba21
    MOVSD ES:EDI,ESI                    ; 005bba22
    MOVSD ES:EDI,ESI                    ; 005bba23
    MOVSD ES:EDI,ESI                    ; 005bba24
    PUSH EBX                            ; 005bba25
    LEA ESI,[EBP + 0xfffffc6e]          ; 005bba26
    CALL core_actor.cpp_FUN_00408b40    ; 005bba2c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005bba31
    PUSH 0x0                            ; 005bba34
    PUSH 0x3                            ; 005bba36
    PUSH 0x0                            ; 005bba38
    LEA EAX,[EBP + 0xffffff56]          ; 005bba3a
    LEA EDI,[EBP + 0xffffff56]          ; 005bba40
    PUSH EAX                            ; 005bba46
    MOV EAX,[0x0061dca4]                ; 005bba47 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffc6e]          ; 005bba4c
    PUSH EAX                            ; 005bba52
    MOVSD ES:EDI,ESI                    ; 005bba53
    MOVSD ES:EDI,ESI                    ; 005bba54
    MOVSD ES:EDI,ESI                    ; 005bba55
    CALL core_gore.cpp_FUN_004e6060     ; 005bba56
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005bba5b
    PUSH 0x3f000000                     ; 005bba5e
    CALL core_actor.cpp_FUN_0040cd00    ; 005bba63
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005bba68
    TEST EAX,EAX                        ; 005bba6b
    JZ 0x005bbaad                       ; 005bba6d
        ;   XREF to: 005bbaad (CONDITIONAL_JUMP)  ; LAB_005bbaad
    MOV ESI,0x5fa5ef                    ; 005bba6f | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffada]          ; 005bba74
        ;   Label: LAB_005bba74
    PUSH EDI                            ; 005bba7a
    MOV AL,byte ptr [ESI]               ; 005bba7b | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005fa5ef+2 | s_ghoul_dig_wav_005fa5ff
        ;   Label: LAB_005bba7b
    MOV byte ptr [EDI],AL               ; 005bba7d
    CMP AL,0x0                          ; 005bba7f
    JZ 0x005bba93                       ; 005bba81
        ;   XREF to: 005bba93 (CONDITIONAL_JUMP)  ; LAB_005bba93
    MOV AL,byte ptr [ESI + 0x1]         ; 005bba83 | s_ghoul_eat_wav_005fa5ef+1 | s_ghoul_eat_wav_005fa5ef+3 | s_ghoul_dig_wav_005fa5ff+1
    ADD ESI,0x2                         ; 005bba86
    MOV byte ptr [EDI + 0x1],AL         ; 005bba89
    ADD EDI,0x2                         ; 005bba8c
    CMP AL,0x0                          ; 005bba8f
    JNZ 0x005bba7b                      ; 005bba91
        ;   XREF to: 005bba7b (CONDITIONAL_JUMP)  ; LAB_005bba7b
    POP EDI                             ; 005bba93
        ;   Label: LAB_005bba93
    LEA ESI,[EBP + 0xfffffada]          ; 005bba94
    PUSH ESI                            ; 005bba9a
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bba9b
    PUSH EBX                            ; 005bbaa1
    CALL dword ptr [EAX + 0x2c]         ; 005bbaa2
    ADD ESP,0x8                         ; 005bbaa5
    JMP 0x005bb060                      ; 005bbaa8
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    MOV ESI,0x5fa5ff                    ; 005bbaad | = "ghoul-dig-?.wav"
        ;   Label: LAB_005bbaad
    JMP 0x005bba74                      ; 005bbab2
        ;   XREF to: 005bba74 (UNCONDITIONAL_JUMP)  ; LAB_005bba74
    PUSH 0x5fa60f                       ; 005bbab4 | = "fall-?.wav"
        ;   Label: LAB_005bbab4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bbab9
    PUSH EBX                            ; 005bbabf
    CALL dword ptr [EAX + 0x2c]         ; 005bbac0
    ADD ESP,0x8                         ; 005bbac3
    JMP 0x005bb060                      ; 005bbac6
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    JBE 0x005bb512                      ; 005bbacb
        ;   XREF to: 005bb512 (CONDITIONAL_JUMP)  ; LAB_005bb512
        ;   Label: LAB_005bbacb
    CMP EAX,0xd                         ; 005bbad1
    JC 0x005bb5c1                       ; 005bbad4
        ;   XREF to: 005bb5c1 (CONDITIONAL_JUMP)  ; LAB_005bb5c1
    JBE 0x005bb9b3                      ; 005bbada
        ;   XREF to: 005bb9b3 (CONDITIONAL_JUMP)  ; LAB_005bb9b3
    CMP EAX,0x65                        ; 005bbae0
    JC 0x005bb09d                       ; 005bbae3
        ;   XREF to: 005bb09d (CONDITIONAL_JUMP)  ; LAB_005bb09d
    JBE 0x005bbab4                      ; 005bbae9
        ;   XREF to: 005bbab4 (CONDITIONAL_JUMP)  ; LAB_005bbab4
    CMP EAX,0x29a                       ; 005bbaeb
    JZ 0x005bb9f6                       ; 005bbaf0
        ;   XREF to: 005bb9f6 (CONDITIONAL_JUMP)  ; LAB_005bb9f6
    PUSH ESI                            ; 005bbaf6
    PUSH EBX                            ; 005bbaf7
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005bbaf8
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005bbafd
    JMP 0x005bb060                      ; 005bbb00
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    JBE 0x005bb120                      ; 005bbb05
        ;   XREF to: 005bb120 (CONDITIONAL_JUMP)  ; LAB_005bb120
        ;   Label: LAB_005bbb05
    CMP EAX,0xa                         ; 005bbb0b
    JZ 0x005bb2f0                       ; 005bbb0e
        ;   XREF to: 005bb2f0 (CONDITIONAL_JUMP)  ; LAB_005bb2f0
    PUSH ESI                            ; 005bbb14
    PUSH EBX                            ; 005bbb15
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 005bbb16
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005bbb1b
    JMP 0x005bb060                      ; 005bbb1e
        ;   XREF to: 005bb060 (UNCONDITIONAL_JUMP)  ; LAB_005bb060
    FLD float ptr [EBP + 0x92]          ; 005bbb23
        ;   Label: LAB_005bbb23
    FMUL float ptr [EBX + 0xc1d0]       ; 005bbb29
    SUB ESP,0x4                         ; 005bbb2f
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 005bbb32
    MOV dword ptr [EBX + 0x2524],EAX    ; 005bbb38
    FSTP float ptr [ESP]                ; 005bbb3e
    PUSH EBX                            ; 005bbb41
    CALL core_charactr.cpp_FUN_00435320 ; 005bbb42
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005bbb47
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005bbb4d
    ADD ESP,0x8                         ; 005bbb54
    TEST EDX,EDX                        ; 005bbb57
    JZ 0x005bbd9e                       ; 005bbb59
        ;   XREF to: 005bbd9e (CONDITIONAL_JUMP)  ; LAB_005bbd9e
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005bbb5f
        ;   Label: LAB_005bbb5f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bbb65
    JZ 0x005bbdb2                       ; 005bbb6d
        ;   XREF to: 005bbdb2 (CONDITIONAL_JUMP)  ; LAB_005bbdb2
    LEA EDI,[EBX + 0x158]               ; 005bbb73
        ;   Label: LAB_005bbb73
    PUSH EDI                            ; 005bbb79
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005bbb7a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bbb7f
    MOV ESI,dword ptr [EAX + 0x24]      ; 005bbb82
    PUSH dword ptr [EBP + 0x92]         ; 005bbb85
    XOR EAX,EAX                         ; 005bbb8b
    PUSH EBX                            ; 005bbb8d
    MOV dword ptr [EBP + -0x16],EAX     ; 005bbb8e
    CALL core_charactr.cpp_FUN_00432240 ; 005bbb91
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bbb96
    TEST EAX,EAX                        ; 005bbb99
    JZ 0x005bccca                       ; 005bbb9b
        ;   XREF to: 005bccca (CONDITIONAL_JUMP)  ; LAB_005bccca
    MOV EAX,dword ptr [EBX + 0x273c]    ; 005bbba1
    CMP EAX,0x2                         ; 005bbba7
    JNC 0x005bbe60                      ; 005bbbaa
        ;   XREF to: 005bbe60 (CONDITIONAL_JUMP)  ; LAB_005bbe60
    CMP EAX,0x1                         ; 005bbbb0
    JNZ 0x005bbe6b                      ; 005bbbb3
        ;   XREF to: 005bbe6b (CONDITIONAL_JUMP)  ; LAB_005bbe6b
    CMP ESI,0x1                         ; 005bbbb9
        ;   Label: LAB_005bbbb9
    JZ 0x005bbbc7                       ; 005bbbbc
        ;   XREF to: 005bbbc7 (CONDITIONAL_JUMP)  ; LAB_005bbbc7
    PUSH EBX                            ; 005bbbbe
    CALL core_zombie.cpp_FUN_005bed80   ; 005bbbbf
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bbbc4
    LEA EAX,[EBX + 0x249c]              ; 005bbbc7
        ;   Label: LAB_005bbbc7
    MOV dword ptr [EAX + 0x8],0x0       ; 005bbbcd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bbbd4
    MOV dword ptr [EAX + 0x4],EDX       ; 005bbbd7
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bbbda
    MOV dword ptr [EAX],EDX             ; 005bbbdd
    FLD float ptr [EBX + 0xc1e4]        ; 005bbbdf
        ;   Label: LAB_005bbbdf
    FLDZ                                ; 005bbbe5
    FCOMPP                              ; 005bbbe7
    FNSTSW AX                           ; 005bbbe9
    SAHF                                ; 005bbbeb
    JNC 0x005bbc00                      ; 005bbbec
        ;   XREF to: 005bbc00 (CONDITIONAL_JUMP)  ; LAB_005bbc00
    FLD float ptr [EBX + 0xc1e4]        ; 005bbbee
    FSUB float ptr [EBP + 0x92]         ; 005bbbf4
    FSTP float ptr [EBX + 0xc1e4]       ; 005bbbfa
    LEA EAX,[EBX + 0x158]               ; 005bbc00
        ;   Label: LAB_005bbc00
    PUSH EAX                            ; 005bbc06
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005bbc07
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bbc0c
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bbc0f
    LEA EDX,[EBX + 0x249c]              ; 005bbc12
    MOV dword ptr [EBP + 0x62],EAX      ; 005bbc18
    MOV dword ptr [EBP + 0x56],EDX      ; 005bbc1b
    CMP EAX,0xe                         ; 005bbc1e
    JNZ 0x005bcd62                      ; 005bbc21
        ;   XREF to: 005bcd62 (CONDITIONAL_JUMP)  ; LAB_005bcd62
    MOV EAX,EDX                         ; 005bbc27
    MOV dword ptr [EDX + 0x8],0x0       ; 005bbc29
    MOV ECX,dword ptr [EAX + 0x8]       ; 005bbc30
    MOV dword ptr [EDX + 0x4],ECX       ; 005bbc33
    MOV ECX,dword ptr [EAX + 0x4]       ; 005bbc36
    MOV dword ptr [EDX],ECX             ; 005bbc39
    PUSH EBX                            ; 005bbc3b
        ;   Label: LAB_005bbc3b
    MOV EDI,dword ptr [EBP + 0x62]      ; 005bbc3c
    CALL core_charactr.cpp_FUN_0042e160 ; 005bbc3f
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005bbc44
    CMP EDI,0xe                         ; 005bbc47
    JZ 0x005bbc6a                       ; 005bbc4a
        ;   XREF to: 005bbc6a (CONDITIONAL_JUMP)  ; LAB_005bbc6a
    LEA EAX,[EBX + 0x158]               ; 005bbc4c
    PUSH EAX                            ; 005bbc52
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 005bbc53
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005bbc58
    PUSH dword ptr [EBP + 0x92]         ; 005bbc5b
    PUSH EBX                            ; 005bbc61
    CALL core_charactr.cpp_FUN_00433e80 ; 005bbc62
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bbc67
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 005bbc6a
        ;   Label: LAB_005bbc6a
    JNZ 0x005bbd4f                      ; 005bbc71
        ;   XREF to: 005bbd4f (CONDITIONAL_JUMP)  ; LAB_005bbd4f
    MOV EAX,dword ptr [EBX + 0xc338]    ; 005bbc77
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bbc7d
    JZ 0x005bd0b0                       ; 005bbc85
        ;   XREF to: 005bd0b0 (CONDITIONAL_JUMP)  ; LAB_005bd0b0
    MOV EDI,dword ptr [EBX + 0xc30c]    ; 005bbc8b
    PUSH 0x3e4ccccd                     ; 005bbc91
    PUSH EDI                            ; 005bbc96
    MOV EAX,dword ptr [EBX + 0xc324]    ; 005bbc97
    PUSH EAX                            ; 005bbc9d
    PUSH EBX                            ; 005bbc9e
    CALL core_charactr.cpp_FUN_00430a90 ; 005bbc9f
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc324]    ; 005bbca4
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005bbcaa
    ADD ESP,0x10                        ; 005bbcb1
    TEST EDX,EDX                        ; 005bbcb4
    JZ 0x005bbcd4                       ; 005bbcb6
        ;   XREF to: 005bbcd4 (CONDITIONAL_JUMP)  ; LAB_005bbcd4
    MOV ECX,dword ptr [EBX + 0xc304]    ; 005bbcb8
    PUSH 0x3e4ccccd                     ; 005bbcbe
    PUSH ECX                            ; 005bbcc3
    MOV ESI,dword ptr [EBX + 0xc328]    ; 005bbcc4
    PUSH ESI                            ; 005bbcca
    PUSH EBX                            ; 005bbccb
    CALL core_charactr.cpp_FUN_00430a90 ; 005bbccc
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 005bbcd1
    MOV EDI,dword ptr [EBX + 0xc310]    ; 005bbcd4
        ;   Label: LAB_005bbcd4
    PUSH 0x3e4ccccd                     ; 005bbcda
    PUSH EDI                            ; 005bbcdf
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 005bbce0
    PUSH EAX                            ; 005bbce6
    PUSH EBX                            ; 005bbce7
    CALL core_charactr.cpp_FUN_00430a90 ; 005bbce8
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 005bbced
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005bbcf3
    ADD ESP,0x10                        ; 005bbcfa
    TEST EDX,EDX                        ; 005bbcfd
    JZ 0x005bbd1d                       ; 005bbcff
        ;   XREF to: 005bbd1d (CONDITIONAL_JUMP)  ; LAB_005bbd1d
    MOV ECX,dword ptr [EBX + 0xc308]    ; 005bbd01
    PUSH 0x3e4ccccd                     ; 005bbd07
    PUSH ECX                            ; 005bbd0c
    MOV ESI,dword ptr [EBX + 0xc330]    ; 005bbd0d
    PUSH ESI                            ; 005bbd13
    PUSH EBX                            ; 005bbd14
    CALL core_charactr.cpp_FUN_00430a90 ; 005bbd15
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 005bbd1a
    MOV EDI,dword ptr [EBX + 0xc2f8]    ; 005bbd1d
        ;   Label: LAB_005bbd1d
    PUSH 0x3f333333                     ; 005bbd23
    PUSH EDI                            ; 005bbd28
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 005bbd29
    PUSH EAX                            ; 005bbd2f
        ;   Label: LAB_005bbd2f
    PUSH EBX                            ; 005bbd30
    CALL core_charactr.cpp_FUN_00430b60 ; 005bbd31
        ;   XREF to: 00430b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00430b60(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 005bbd36
    CMP dword ptr [EBX + 0xc334],0x0    ; 005bbd39
    JL 0x005bd0c1                       ; 005bbd40
        ;   XREF to: 005bd0c1 (CONDITIONAL_JUMP)  ; LAB_005bd0c1
    PUSH EBX                            ; 005bbd46
        ;   Label: LAB_005bbd46
    CALL core_charactr.cpp_FUN_00430960 ; 005bbd47
        ;   XREF to: 00430960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430960()
    ADD ESP,0x4                         ; 005bbd4c
    PUSH 0x1                            ; 005bbd4f
        ;   Label: LAB_005bbd4f
    PUSH EBX                            ; 005bbd51
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bbd52
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    MOV EDX,dword ptr [EBP + -0x16]     ; 005bbd57
    ADD ESP,0x8                         ; 005bbd5a
    TEST EDX,EDX                        ; 005bbd5d
    JZ 0x005bafd8                       ; 005bbd5f
        ;   XREF to: 005bafd8 (CONDITIONAL_JUMP)  ; LAB_005bafd8
    TEST EAX,EAX                        ; 005bbd65
    JL 0x005bafd8                       ; 005bbd67
        ;   XREF to: 005bafd8 (CONDITIONAL_JUMP)  ; LAB_005bafd8
    SHL EAX,0x3                         ; 005bbd6d
    MOV EDX,EAX                         ; 005bbd70
    SHL EAX,0x4                         ; 005bbd72
    SUB EAX,EDX                         ; 005bbd75
    ADD EAX,EBX                         ; 005bbd77
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 005bbd79
    TEST ECX,ECX                        ; 005bbd7f
    JZ 0x005bafd8                       ; 005bbd81
        ;   XREF to: 005bafd8 (CONDITIONAL_JUMP)  ; LAB_005bafd8
    PUSH 0x2                            ; 005bbd87
    MOV EDX,dword ptr [ECX + 0x154]     ; 005bbd89
    PUSH ECX                            ; 005bbd8f
    CALL dword ptr [EDX + 0x78]         ; 005bbd90
    ADD ESP,0x8                         ; 005bbd93
    LEA ESP,[EBP + 0x7a]                ; 005bbd96
    POP EBP                             ; 005bbd99
    POP EDI                             ; 005bbd9a
    POP ESI                             ; 005bbd9b
    POP EBX                             ; 005bbd9c
    RET                                 ; 005bbd9d
    MOV EAX,dword ptr [EBX + 0xc328]    ; 005bbd9e
        ;   Label: LAB_005bbd9e
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bbda4
    JNZ 0x005bbb5f                      ; 005bbdac
        ;   XREF to: 005bbb5f (CONDITIONAL_JUMP)  ; LAB_005bbb5f
    FLD float ptr [EBX + 0xc344]        ; 005bbdb2
        ;   Label: LAB_005bbdb2
    FLDZ                                ; 005bbdb8
    FCOMPP                              ; 005bbdba
    FNSTSW AX                           ; 005bbdbc
    SAHF                                ; 005bbdbe
    JA 0x005bbb73                       ; 005bbdbf
        ;   XREF to: 005bbb73 (CONDITIONAL_JUMP)  ; LAB_005bbb73
    FLD float ptr [EBX + 0xc344]        ; 005bbdc5
    FADD float ptr [EBP + 0x92]         ; 005bbdcb
    FST float ptr [EBX + 0xc344]        ; 005bbdd1
    FCOMP double ptr [0x005fa70c]       ; 005bbdd7 | DAT_005fa70c
    FNSTSW AX                           ; 005bbddd
    SAHF                                ; 005bbddf
    JC 0x005bbb73                       ; 005bbde0
        ;   XREF to: 005bbb73 (CONDITIONAL_JUMP)  ; LAB_005bbb73
    LEA EAX,[EBP + 0xfffffa9e]          ; 005bbde6
    PUSH EAX                            ; 005bbdec
    MOV EDI,0x461c3f9a                  ; 005bbded
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 005bbdf2
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffa9e]          ; 005bbdf7
    ADD ESP,0x4                         ; 005bbdfd
    MOV dword ptr [EBP + 0xfffffaa2],EDI ; 005bbe00
    MOV dword ptr [EBP + 0xfffffad2],EBX ; 005bbe06
    MOV dword ptr [EBP + 0xfffffad6],EBX ; 005bbe0c
    PUSH EAX                            ; 005bbe12
    MOV EDX,dword ptr [EBX + 0x154]     ; 005bbe13
    PUSH EBX                            ; 005bbe19
    CALL dword ptr [EDX + 0x108]        ; 005bbe1a
    ADD ESP,0x8                         ; 005bbe20
    MOV dword ptr [EBX + 0xc344],0xbf800000 ; 005bbe23
    JMP 0x005bbb73                      ; 005bbe2d
        ;   XREF to: 005bbb73 (UNCONDITIONAL_JUMP)  ; LAB_005bbb73
    PUSH 0x1                            ; 005bbe32
        ;   Label: LAB_005bbe32
    PUSH 0x0                            ; 005bbe34
    LEA EAX,[EBX + 0x158]               ; 005bbe36
    PUSH EAX                            ; 005bbe3c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bbe3d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bbe42
    PUSH EBX                            ; 005bbe45
    MOV EAX,0x5fa61a                    ; 005bbe46 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 005bbe4b | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00611100]      ; 005bbe4c | g_CConsolePtr
    PUSH EDX                            ; 005bbe52 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bbe53
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bbe58
    JMP 0x005bbbc7                      ; 005bbe5b
        ;   XREF to: 005bbbc7 (UNCONDITIONAL_JUMP)  ; LAB_005bbbc7
    JBE 0x005bbbb9                      ; 005bbe60
        ;   XREF to: 005bbbb9 (CONDITIONAL_JUMP)  ; LAB_005bbbb9
        ;   Label: LAB_005bbe60
    CMP EAX,0x3                         ; 005bbe66
    JZ 0x005bbe32                       ; 005bbe69
        ;   XREF to: 005bbe32 (CONDITIONAL_JUMP)  ; LAB_005bbe32
    PUSH 0x1                            ; 005bbe6b
        ;   Label: LAB_005bbe6b
    PUSH 0x0                            ; 005bbe6d
    LEA EAX,[EBX + 0x158]               ; 005bbe6f
    PUSH EAX                            ; 005bbe75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bbe76
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bbe7b
    JMP 0x005bbbc7                      ; 005bbe7e
        ;   XREF to: 005bbbc7 (UNCONDITIONAL_JUMP)  ; LAB_005bbbc7
    MOV EAX,[0x01d06ab4]                ; 005bbe83 | DAT_01d06ab4
        ;   Label: LAB_005bbe83
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005bbe88
    PUSH EAX                            ; 005bbe8f
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bbe90
    CALL dword ptr [EDX + 0x10c]        ; 005bbe96
    ADD ESP,0x4                         ; 005bbe9c
    TEST EAX,EAX                        ; 005bbe9f
    JZ 0x005bbf70                       ; 005bbea1
        ;   XREF to: 005bbf70 (CONDITIONAL_JUMP)  ; LAB_005bbf70
    FLD float ptr [EBP + -0xe]          ; 005bbea7
        ;   Label: LAB_005bbea7
    FLDZ                                ; 005bbeaa
    FCOMPP                              ; 005bbeac
    FNSTSW AX                           ; 005bbeae
    SAHF                                ; 005bbeb0
    JA 0x005bbbdf                       ; 005bbeb1
        ;   XREF to: 005bbbdf (CONDITIONAL_JUMP)  ; LAB_005bbbdf
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005bbeb7
    JZ 0x005bbbdf                       ; 005bbebe
        ;   XREF to: 005bbbdf (CONDITIONAL_JUMP)  ; LAB_005bbbdf
    FLD float ptr [EBP + 0x6a]          ; 005bbec4
    FMUL float ptr [EBX + 0xc1d0]       ; 005bbec7
    FLD float ptr [EBP + 0x92]          ; 005bbecd
    FLD ST0                             ; 005bbed3
    FMUL float ptr [EBX + 0xc1d0]       ; 005bbed5
    FXCH ST2                            ; 005bbedb
    FMULP                               ; 005bbedd
    SUB ESP,0x4                         ; 005bbedf
    FSTP float ptr [EBX + 0x2524]       ; 005bbee2
    FSTP float ptr [ESP]                ; 005bbee8
    PUSH EBX                            ; 005bbeeb
    CALL core_charactr.cpp_FUN_00435320 ; 005bbeec
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005bbef1
    MOV EAX,dword ptr [EBP + -0xe]      ; 005bbef4
    PUSH 0x3f490fdb                     ; 005bbef7
    XOR EDX,EDX                         ; 005bbefc
    PUSH 0x40400000                     ; 005bbefe
    MOV dword ptr [EBP + -0x56],EDX     ; 005bbf03
    MOV dword ptr [EBP + -0x4e],EAX     ; 005bbf06
    LEA EAX,[EBP + -0x56]               ; 005bbf09
    MOV dword ptr [EBP + -0x52],EDX     ; 005bbf0c
    PUSH EAX                            ; 005bbf0f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bbf10
    PUSH EAX                            ; 005bbf16
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bbf17
    CALL dword ptr [EDX + 0xc4]         ; 005bbf1d
    ADD ESP,0x4                         ; 005bbf23
    PUSH EAX                            ; 005bbf26
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bbf27
    ADD EAX,0x20                        ; 005bbf2d
    PUSH EAX                            ; 005bbf30
    PUSH EBX                            ; 005bbf31
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 005bbf32
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005bbf37
    CMP EAX,0x1                         ; 005bbf3a
    JZ 0x005bbbdf                       ; 005bbf3d
        ;   XREF to: 005bbbdf (CONDITIONAL_JUMP)  ; LAB_005bbbdf
    PUSH EBX                            ; 005bbf43
    PUSH 0x5fa6f1                       ; 005bbf44 | = "%s giving up attack\n"
    MOV ESI,dword ptr [0x00611100]      ; 005bbf49 | g_CConsolePtr
    PUSH ESI                            ; 005bbf4f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bbf50
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bbf55
    PUSH EBX                            ; 005bbf58
    CALL core_zombie.cpp_FUN_005bed80   ; 005bbf59
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bbf5e
    MOV dword ptr [EBX + 0x2508],0x0    ; 005bbf61
    JMP 0x005bbbdf                      ; 005bbf6b
        ;   XREF to: 005bbbdf (UNCONDITIONAL_JUMP)  ; LAB_005bbbdf
    PUSH dword ptr [EBP + 0x92]         ; 005bbf70
        ;   Label: LAB_005bbf70
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bbf76
    PUSH EBX                            ; 005bbf7c
    CALL dword ptr [EAX + 0x144]        ; 005bbf7d
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 005bbf83
    ADD ESP,0x8                         ; 005bbf89
    TEST ECX,ECX                        ; 005bbf8c
    JZ 0x005bbea7                       ; 005bbf8e
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x1                            ; 005bbf94
        ;   Label: LAB_005bbf94
    PUSH 0x0                            ; 005bbf96
    LEA EAX,[EBX + 0x158]               ; 005bbf98
    PUSH EAX                            ; 005bbf9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bbf9f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bbfa4
    JMP 0x005bbea7                      ; 005bbfa7
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [EBX + 0xc354]        ; 005bbfac
        ;   Label: LAB_005bbfac
    FSUB float ptr [EBP + 0x92]         ; 005bbfb2
    FST float ptr [EBX + 0xc354]        ; 005bbfb8
    FLDZ                                ; 005bbfbe
    FCOMPP                              ; 005bbfc0
    FNSTSW AX                           ; 005bbfc2
    SAHF                                ; 005bbfc4
    JC 0x005bbea7                       ; 005bbfc5
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH dword ptr [EBP + 0x92]         ; 005bbfcb
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bbfd1
    PUSH EBX                            ; 005bbfd7
    MOV dword ptr [EBX + 0xc354],0x0    ; 005bbfd8
    CALL dword ptr [EAX + 0x144]        ; 005bbfe2
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005bbfe8
    ADD ESP,0x8                         ; 005bbfee
    TEST EDI,EDI                        ; 005bbff1
    JZ 0x005bbea7                       ; 005bbff3
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [ESI]                 ; 005bbff9
    FSUB float ptr [EDI + 0x20]         ; 005bbffb
    LEA EDX,[EBP + 0xfffffd16]          ; 005bbffe
    FSTP float ptr [EBP + 0xfffffe1e]   ; 005bc004
    FLD float ptr [ESI + 0x4]           ; 005bc00a
    FSUB float ptr [EDI + 0x24]         ; 005bc00d
    LEA EAX,[EBP + 0xfffffe42]          ; 005bc010
    FSTP float ptr [EBP + 0xfffffe22]   ; 005bc016
    FLD float ptr [ESI + 0x8]           ; 005bc01c
    LEA ESI,[EBP + 0xfffffe1e]          ; 005bc01f
    FSUB float ptr [EDI + 0x28]         ; 005bc025
    LEA EDI,[EBP + 0xfffffd16]          ; 005bc028
    FSTP float ptr [EBP + 0xfffffe26]   ; 005bc02e
    MOVSD ES:EDI,ESI                    ; 005bc034
    MOVSD ES:EDI,ESI                    ; 005bc035
    MOVSD ES:EDI,ESI                    ; 005bc036
    CMP EAX,EDX                         ; 005bc037
    JNZ 0x005bc18c                      ; 005bc039
        ;   XREF to: 005bc18c (CONDITIONAL_JUMP)  ; LAB_005bc18c
    FLD float ptr [EBP + 0xfffffe46]    ; 005bc03f
        ;   Label: LAB_005bc03f
    FMUL ST0                            ; 005bc045
    FLD float ptr [EBP + 0xfffffe42]    ; 005bc047
    FMUL ST0                            ; 005bc04d
    FADDP                               ; 005bc04f
    FLD float ptr [EBP + 0xfffffe4a]    ; 005bc051
    FMUL ST0                            ; 005bc057
    FADDP                               ; 005bc059
    FSTP float ptr [EBP + 0x72]         ; 005bc05b
    MOV EAX,dword ptr [EBP + 0x72]      ; 005bc05e
    MOV EDX,dword ptr [0x01cc804c]      ; 005bc061 | DAT_01cc804c
    SAR EAX,0x1                         ; 005bc067
    ADD EAX,EDX                         ; 005bc069
    MOV dword ptr [EBP + -0xa],EAX      ; 005bc06b
    FLD float ptr [EBP + -0xa]          ; 005bc06e
    FCOMP double ptr [0x005fa714]       ; 005bc071 | DAT_005fa714
    FNSTSW AX                           ; 005bc077
    SAHF                                ; 005bc079
    JA 0x005bbea7                       ; 005bc07a
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,dword ptr [EBX + 0x3000]    ; 005bc080
    MOV dword ptr [EBP + 0x6e],EAX      ; 005bc086
    FLD float ptr [EBP + 0x6e]          ; 005bc089
    FCOMP float ptr [EBX + 0x2ffc]      ; 005bc08c
    FNSTSW AX                           ; 005bc092
    SAHF                                ; 005bc094
    JNC 0x005bc0a0                      ; 005bc095
        ;   XREF to: 005bc0a0 (CONDITIONAL_JUMP)  ; LAB_005bc0a0
    MOV EAX,dword ptr [EBX + 0x2490]    ; 005bc097
    MOV dword ptr [EBP + 0x6e],EAX      ; 005bc09d
    FLD float ptr [EBP + 0x6e]          ; 005bc0a0
        ;   Label: LAB_005bc0a0
    FCOMP float ptr [EBX + 0x2ffc]      ; 005bc0a3
    FNSTSW AX                           ; 005bc0a9
    SAHF                                ; 005bc0ab
    JC 0x005bc1b5                       ; 005bc0ac
        ;   XREF to: 005bc1b5 (CONDITIONAL_JUMP)  ; LAB_005bc1b5
    XOR ESI,ESI                         ; 005bc0b2
        ;   Label: LAB_005bc0b2
    MOV dword ptr [EBP + 0x76],ESI      ; 005bc0b4
        ;   Label: LAB_005bc0b4
    FILD dword ptr [EBP + 0x76]         ; 005bc0b7
    FMUL float ptr [0x005fa764]         ; 005bc0ba | DAT_005fa764
    MOV EAX,[0x00622c18]                ; 005bc0c0 | g_CDemonSetPtr
    FMUL float ptr [0x005fa768]         ; 005bc0c5 | DAT_005fa768
    PUSH EAX                            ; 005bc0cb | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x6]         ; 005bc0cc
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005bc0cf
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005bc0d4
    PUSH EBX                            ; 005bc0d7
    MOV EDX,dword ptr [0x00622c18]      ; 005bc0d8 | g_CDemonSetPtr
    PUSH EDX                            ; 005bc0de | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005bc0df
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + -0x6]          ; 005bc0e4
    FLD ST0                             ; 005bc0e7
    FCOS                                ; 005bc0e9
    FXCH                                ; 005bc0eb
    FSIN                                ; 005bc0ed
    FXCH                                ; 005bc0ef
    FLD double ptr [0x005fa76c]         ; 005bc0f1 | DAT_005fa76c
    FXCH                                ; 005bc0f7
    FMUL ST1                            ; 005bc0f9
    FXCH ST2                            ; 005bc0fb
    FMULP                               ; 005bc0fd
    FLD float ptr [EBX + 0x24]          ; 005bc0ff
    ADD ESP,0x8                         ; 005bc102
    FADD float ptr [EBP + 0x6e]         ; 005bc105
    SUB ESP,0x4                         ; 005bc108
    FSTP float ptr [ESP]                ; 005bc10b
    FLD float ptr [EBX + 0x24]          ; 005bc10e
    FADD float ptr [EBX + 0x2ffc]       ; 005bc111
    SUB ESP,0x4                         ; 005bc117
    FSTP float ptr [ESP]                ; 005bc11a
    PUSH dword ptr [EBX + 0x2ff0]       ; 005bc11d
    SUB ESP,0x4                         ; 005bc123
    FXCH                                ; 005bc126
    FSTP float ptr [ESP]                ; 005bc128
    SUB ESP,0x4                         ; 005bc12b
    FSTP float ptr [ESP]                ; 005bc12e
    PUSH dword ptr [EBX + 0x28]         ; 005bc131
    MOV ECX,dword ptr [0x00622c18]      ; 005bc134 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 005bc13a
    PUSH ECX                            ; 005bc13d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 005bc13e
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV EDI,dword ptr [0x00622c18]      ; 005bc143 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 005bc149
    ADD ESP,0x20                        ; 005bc14c
    FLD float ptr [EBP + 0x76]          ; 005bc14f
    PUSH EDI                            ; 005bc152 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0x2]         ; 005bc153
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 005bc156
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    FLD float ptr [EBP + -0x2]          ; 005bc15b
    FLD1                                ; 005bc15e
    ADD ESP,0x4                         ; 005bc160
    FCOMPP                              ; 005bc163
    FNSTSW AX                           ; 005bc165
    SAHF                                ; 005bc167
    JBE 0x005bc1c9                      ; 005bc168
        ;   XREF to: 005bc1c9 (CONDITIONAL_JUMP)  ; LAB_005bc1c9
    CMP ESI,0x4                         ; 005bc16a
        ;   Label: LAB_005bc16a
    JGE 0x005bbf94                      ; 005bc16d
        ;   XREF to: 005bbf94 (CONDITIONAL_JUMP)  ; LAB_005bbf94
    MOV dword ptr [EBX + 0xc354],0x40400000 ; 005bc173
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 005bc17d
    JMP 0x005bbea7                      ; 005bc187
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,dword ptr [EBP + 0xfffffd16] ; 005bc18c
        ;   Label: LAB_005bc18c
    MOV dword ptr [EBP + 0xfffffe42],EAX ; 005bc192
    MOV EAX,dword ptr [EBP + 0xfffffd1a] ; 005bc198
    MOV dword ptr [EBP + 0xfffffe46],EAX ; 005bc19e
    MOV EAX,dword ptr [EBP + 0xfffffd1e] ; 005bc1a4
    MOV dword ptr [EBP + 0xfffffe4a],EAX ; 005bc1aa
    JMP 0x005bc03f                      ; 005bc1b0
        ;   XREF to: 005bc03f (UNCONDITIONAL_JUMP)  ; LAB_005bc03f
    FLD float ptr [EBX + 0x2ffc]        ; 005bc1b5
        ;   Label: LAB_005bc1b5
    FADD double ptr [0x005fa71c]        ; 005bc1bb | DAT_005fa71c
    FSTP float ptr [EBP + 0x6e]         ; 005bc1c1
    JMP 0x005bc0b2                      ; 005bc1c4
        ;   XREF to: 005bc0b2 (UNCONDITIONAL_JUMP)  ; LAB_005bc0b2
    INC ESI                             ; 005bc1c9
        ;   Label: LAB_005bc1c9
    CMP ESI,0x4                         ; 005bc1ca
    JL 0x005bc0b4                       ; 005bc1cd
        ;   XREF to: 005bc0b4 (CONDITIONAL_JUMP)  ; LAB_005bc0b4
    JMP 0x005bc16a                      ; 005bc1d3
        ;   XREF to: 005bc16a (UNCONDITIONAL_JUMP)  ; LAB_005bc16a
    LEA EAX,[EBX + 0xc288]              ; 005bc1d5
        ;   Label: LAB_005bc1d5
    PUSH EAX                            ; 005bc1db
    MOV EDX,dword ptr [0x0061b4d0]      ; 005bc1dc | DAT_0061b4d0
    PUSH EDX                            ; 005bc1e2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005bc1e3
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005bc1e8
    TEST EAX,EAX                        ; 005bc1eb
    JZ 0x005bbea7                       ; 005bc1ed
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [EBX + 0xc350]        ; 005bc1f3
    FSUB float ptr [EBP + 0x92]         ; 005bc1f9
    FST float ptr [EBX + 0xc350]        ; 005bc1ff
    FLDZ                                ; 005bc205
    FCOMPP                              ; 005bc207
    FNSTSW AX                           ; 005bc209
    SAHF                                ; 005bc20b
    JBE 0x005bbea7                      ; 005bc20c
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD1                                ; 005bc212
    XOR ECX,ECX                         ; 005bc214
    MOV dword ptr [EBP + 0x6],ESI       ; 005bc216
    MOV dword ptr [EBP + 0x2],ECX       ; 005bc219
    FADD float ptr [EBX + 0xc350]       ; 005bc21c
    MOV dword ptr [EBP + 0x5e],ECX      ; 005bc222
    FSTP float ptr [EBX + 0xc350]       ; 005bc225
    MOV EAX,[0x00622c18]                ; 005bc22b | g_CDemonSetPtr
        ;   Label: LAB_005bc22b
    MOV EDX,dword ptr [EBP + 0x2]       ; 005bc230
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 005bc233 | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x005bbea7                      ; 005bc239
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    ADD EAX,dword ptr [EBP + 0x5e]      ; 005bc23f
    PUSH EBX                            ; 005bc242
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 005bc243 | g_CDemonSetInstance.field1372332_0x14f0ac
    PUSH ESI                            ; 005bc249
    MOV EAX,dword ptr [ESI + 0x154]     ; 005bc24a
    CALL dword ptr [EAX + 0xe4]         ; 005bc250
    ADD ESP,0x8                         ; 005bc256
    TEST EAX,EAX                        ; 005bc259
    JNZ 0x005bc26f                      ; 005bc25b
        ;   XREF to: 005bc26f (CONDITIONAL_JUMP)  ; LAB_005bc26f
    MOV EDI,dword ptr [EBP + 0x2]       ; 005bc25d
        ;   Label: LAB_005bc25d
    MOV ESI,dword ptr [EBP + 0x5e]      ; 005bc260
    INC EDI                             ; 005bc263
    ADD ESI,0x4                         ; 005bc264
    MOV dword ptr [EBP + 0x2],EDI       ; 005bc267
    MOV dword ptr [EBP + 0x5e],ESI      ; 005bc26a
    JMP 0x005bc22b                      ; 005bc26d
        ;   XREF to: 005bc22b (UNCONDITIONAL_JUMP)  ; LAB_005bc22b
    MOV EAX,dword ptr [EBP + 0x6]       ; 005bc26f
        ;   Label: LAB_005bc26f
    FLD float ptr [ESI + 0x20]          ; 005bc272
    FSUB float ptr [EAX]                ; 005bc275
    FSTP float ptr [EBP + 0xfffffc62]   ; 005bc277
    FLD float ptr [ESI + 0x24]          ; 005bc27d
    FSUB float ptr [EAX + 0x4]          ; 005bc280
    LEA EDI,[EBP + 0xffffff1a]          ; 005bc283
    FSTP float ptr [EBP + 0xfffffc66]   ; 005bc289
    FLD float ptr [ESI + 0x28]          ; 005bc28f
    FSUB float ptr [EAX + 0x8]          ; 005bc292
    LEA ESI,[EBP + 0xfffffc62]          ; 005bc295
    FSTP float ptr [EBP + 0xfffffc6a]   ; 005bc29b
    MOVSD ES:EDI,ESI                    ; 005bc2a1
    MOVSD ES:EDI,ESI                    ; 005bc2a2
    MOVSD ES:EDI,ESI                    ; 005bc2a3
    FLD float ptr [EBP + 0xffffff1e]    ; 005bc2a4
    FABS                                ; 005bc2aa
    FCOMP double ptr [0x005fa77c]       ; 005bc2ac | DAT_005fa77c
    FNSTSW AX                           ; 005bc2b2
    SAHF                                ; 005bc2b4
    JA 0x005bc25d                       ; 005bc2b5
        ;   XREF to: 005bc25d (CONDITIONAL_JUMP)  ; LAB_005bc25d
    FLD float ptr [EBP + 0xffffff1a]    ; 005bc2b7
    FMUL ST0                            ; 005bc2bd
    FLD float ptr [EBP + 0xffffff22]    ; 005bc2bf
    FMUL ST0                            ; 005bc2c5
    FADDP                               ; 005bc2c7
    FSQRT                               ; 005bc2c9
    XOR EDI,EDI                         ; 005bc2cb
    MOV dword ptr [EBP + 0xffffff1e],EDI ; 005bc2cd
    FCOMP float ptr [EBX + 0xc1e0]      ; 005bc2d3
    FNSTSW AX                           ; 005bc2d9
    SAHF                                ; 005bc2db
    JA 0x005bc25d                       ; 005bc2dc
        ;   XREF to: 005bc25d (CONDITIONAL_JUMP)  ; LAB_005bc25d
    PUSH EBX                            ; 005bc2e2
    PUSH 0x5fa644                       ; 005bc2e3 | = "%s rising from the grave\n"
    MOV EAX,[0x00611100]                ; 005bc2e8 | g_CConsolePtr
    PUSH EAX                            ; 005bc2ed | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bc2ee
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bc2f3
    PUSH 0x1                            ; 005bc2f6
    PUSH 0xf                            ; 005bc2f8
    LEA EAX,[EBX + 0x158]               ; 005bc2fa
    PUSH EAX                            ; 005bc300
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc301
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0xc280]    ; 005bc306
    ADD ESP,0xc                         ; 005bc30c
    TEST EDX,EDX                        ; 005bc30f
    JZ 0x005bc322                       ; 005bc311
        ;   XREF to: 005bc322 (CONDITIONAL_JUMP)  ; LAB_005bc322
    PUSH EDX                            ; 005bc313
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0 ; 005bc314
        ;   XREF to: 004e6bf0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 005bc319
    MOV dword ptr [EBX + 0xc280],EDI    ; 005bc31c
    MOV dword ptr [EBX + 0xc1e0],0x42c80000 ; 005bc322
        ;   Label: LAB_005bc322
    JMP 0x005bbea7                      ; 005bc32c
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,dword ptr [EBX + 0xc1d4]    ; 005bc331
        ;   Label: LAB_005bc331
    TEST EAX,EAX                        ; 005bc337
    JNZ 0x005bbea7                      ; 005bc339
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP dword ptr [EBX + 0xdc],0x0      ; 005bc33f
    JNZ 0x005bbea7                      ; 005bc346
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EAX                            ; 005bc34c
    PUSH EDI                            ; 005bc34d
    LEA ESI,[EBP + -0x7a]               ; 005bc34e
    CALL core_skeleton.cpp_FUN_00569040 ; 005bc351
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + -0x62]               ; 005bc356
    ADD ESP,0x8                         ; 005bc359
    LEA EAX,[EBP + -0x62]               ; 005bc35c
    LEA ESI,[EBP + -0x7a]               ; 005bc35f
    PUSH EAX                            ; 005bc362
    MOVSD ES:EDI,ESI                    ; 005bc363
    MOVSD ES:EDI,ESI                    ; 005bc364
    MOVSD ES:EDI,ESI                    ; 005bc365
    PUSH EBX                            ; 005bc366
    LEA ESI,[EBP + 0xffffff02]          ; 005bc367
    CALL core_actor.cpp_FUN_00408b40    ; 005bc36d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005bc372
    PUSH 0x0                            ; 005bc375
    LEA EAX,[EBP + 0xffffff4a]          ; 005bc377
    LEA EDI,[EBP + 0xffffff4a]          ; 005bc37d
    PUSH EAX                            ; 005bc383
    MOV ECX,dword ptr [0x0061dca4]      ; 005bc384 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff02]          ; 005bc38a
    PUSH ECX                            ; 005bc390
    MOVSD ES:EDI,ESI                    ; 005bc391
    MOVSD ES:EDI,ESI                    ; 005bc392
    MOVSD ES:EDI,ESI                    ; 005bc393
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 005bc394
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 005bc399
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 005bc39c
    JMP 0x005bbea7                      ; 005bc3a6
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [EBP + 0x92]          ; 005bc3ab
        ;   Label: LAB_005bc3ab
    FMUL double ptr [0x005fa744]        ; 005bc3b1 | DAT_005fa744
    SUB ESP,0x4                         ; 005bc3b7
    FSTP float ptr [ESP]                ; 005bc3ba
    CALL core_actor.cpp_FUN_0040cd00    ; 005bc3bd
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005bc3c2
    TEST EAX,EAX                        ; 005bc3c5
    JZ 0x005bc3f1                       ; 005bc3c7
        ;   XREF to: 005bc3f1 (CONDITIONAL_JUMP)  ; LAB_005bc3f1
    PUSH 0x0                            ; 005bc3c9
    MOV EAX,0x5fa65e                    ; 005bc3cb | = "pickass"
    PUSH EAX                            ; 005bc3d0 | = "pickass"
    LEA EAX,[EBX + 0x158]               ; 005bc3d1
    PUSH EAX                            ; 005bc3d7
    CALL core_motion.cpp_FUN_00524a00   ; 005bc3d8
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005bc3dd
    PUSH EAX                            ; 005bc3e0
    CALL core_motion.cpp_FUN_005240c0   ; 005bc3e1
        ;   XREF to: 005240c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_005240c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 005bc3e6
    TEST EAX,EAX                        ; 005bc3e9
    JGE 0x005bc48a                      ; 005bc3eb
        ;   XREF to: 005bc48a (CONDITIONAL_JUMP)  ; LAB_005bc48a
    PUSH dword ptr [EBP + 0x92]         ; 005bc3f1
        ;   Label: LAB_005bc3f1
    PUSH EBX                            ; 005bc3f7
    CALL core_enemy.cpp_FUN_004a0fe0    ; 005bc3f8
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bc3fd
    TEST EAX,EAX                        ; 005bc400
    JZ 0x005bc40d                       ; 005bc402
        ;   XREF to: 005bc40d (CONDITIONAL_JUMP)  ; LAB_005bc40d
    PUSH EBX                            ; 005bc404
    CALL core_zombie.cpp_FUN_005bed80   ; 005bc405
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bc40a
    PUSH dword ptr [EBP + 0x92]         ; 005bc40d
        ;   Label: LAB_005bc40d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc413
    PUSH EBX                            ; 005bc419
    CALL dword ptr [EAX + 0x144]        ; 005bc41a
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005bc420
    ADD ESP,0x8                         ; 005bc426
    TEST EDX,EDX                        ; 005bc429
    JNZ 0x005bc433                      ; 005bc42b
        ;   XREF to: 005bc433 (CONDITIONAL_JUMP)  ; LAB_005bc433
    CMP dword ptr [EBP + 0x36],0x0      ; 005bc42d
    JNZ 0x005bc4a2                      ; 005bc431
        ;   XREF to: 005bc4a2 (CONDITIONAL_JUMP)  ; LAB_005bc4a2
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005bc433
        ;   Label: LAB_005bc433
    JZ 0x005bbea7                       ; 005bc43a
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bc440
    CALL core_zombie.cpp_FUN_005bed80   ; 005bc441
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bc446
    MOV EDI,dword ptr [EBX + 0xc34c]    ; 005bc449
    PUSH EDI                            ; 005bc44f
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005bc450
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005bc455
    TEST EAX,EAX                        ; 005bc458
    JNZ 0x005bbea7                      ; 005bc45a
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP dword ptr [EBX + 0xc2f4],0x0    ; 005bc460
    JZ 0x005bc4ec                       ; 005bc467
        ;   XREF to: 005bc4ec (CONDITIONAL_JUMP)  ; LAB_005bc4ec
    PUSH 0x5fa666                       ; 005bc46d | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc472
    PUSH EBX                            ; 005bc478
    CALL dword ptr [EAX + 0x2c]         ; 005bc479
    ADD ESP,0x8                         ; 005bc47c
    MOV dword ptr [EBX + 0xc34c],EAX    ; 005bc47f
    JMP 0x005bbea7                      ; 005bc485
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x1                            ; 005bc48a
        ;   Label: LAB_005bc48a
    PUSH 0x10                           ; 005bc48c
    LEA EAX,[EBX + 0x158]               ; 005bc48e
    PUSH EAX                            ; 005bc494
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc495
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc49a
    JMP 0x005bbea7                      ; 005bc49d
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,[0x01d06ab4]                ; 005bc4a2 | DAT_01d06ab4
        ;   Label: LAB_005bc4a2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005bc4a7
    PUSH EAX                            ; 005bc4ae
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bc4af
    CALL dword ptr [EDX + 0x10c]        ; 005bc4b5
    ADD ESP,0x4                         ; 005bc4bb
    TEST EAX,EAX                        ; 005bc4be
    JZ 0x005bbea7                       ; 005bc4c0
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,[0x0061d95c]                ; 005bc4c6 | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 005bc4cb | g_CGameInstance.field572_0x23c
    MOV EAX,[0x01d06ab4]                ; 005bc4d5 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005bc4da
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 005bc4e1
    JMP 0x005bc433                      ; 005bc4e7
        ;   XREF to: 005bc433 (UNCONDITIONAL_JUMP)  ; LAB_005bc433
    PUSH 0x5fa67a                       ; 005bc4ec | = "zom-a0?.wav"
        ;   Label: LAB_005bc4ec
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc4f1
    PUSH EBX                            ; 005bc4f7
    CALL dword ptr [EAX + 0x2c]         ; 005bc4f8
    ADD ESP,0x8                         ; 005bc4fb
    MOV dword ptr [EBX + 0xc34c],EAX    ; 005bc4fe
    JMP 0x005bbea7                      ; 005bc504
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH dword ptr [EBP + 0x92]         ; 005bc509
        ;   Label: LAB_005bc509
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc50f
    PUSH EBX                            ; 005bc515
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005bc516
    CALL dword ptr [EAX + 0x144]        ; 005bc51c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bc522
    ADD ESP,0x8                         ; 005bc528
    TEST EAX,EAX                        ; 005bc52b
    JNZ 0x005bc576                      ; 005bc52d
        ;   XREF to: 005bc576 (CONDITIONAL_JUMP)  ; LAB_005bc576
    CMP dword ptr [EBP + 0x36],0x0      ; 005bc52f
    JZ 0x005bc576                       ; 005bc533
        ;   XREF to: 005bc576 (CONDITIONAL_JUMP)  ; LAB_005bc576
    MOV EAX,[0x01d06ab4]                ; 005bc535 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005bc53a
    PUSH EAX                            ; 005bc541
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bc542
    CALL dword ptr [EDX + 0x10c]        ; 005bc548
    ADD ESP,0x4                         ; 005bc54e
    TEST EAX,EAX                        ; 005bc551
    JZ 0x005bc576                       ; 005bc553
        ;   XREF to: 005bc576 (CONDITIONAL_JUMP)  ; LAB_005bc576
    MOV EAX,[0x0061d95c]                ; 005bc555 | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 005bc55a | g_CGameInstance.field572_0x23c
    MOV EAX,[0x01d06ab4]                ; 005bc564 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005bc569
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 005bc570
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005bc576
        ;   Label: LAB_005bc576
    JZ 0x005bc5c9                       ; 005bc57d
        ;   XREF to: 005bc5c9 (CONDITIONAL_JUMP)  ; LAB_005bc5c9
    TEST ESI,ESI                        ; 005bc57f
    JNZ 0x005bc5fe                      ; 005bc581
        ;   XREF to: 005bc5fe (CONDITIONAL_JUMP)  ; LAB_005bc5fe
    MOV EDI,dword ptr [EBX + 0xc34c]    ; 005bc587
    PUSH EDI                            ; 005bc58d
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005bc58e
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005bc593
    TEST EAX,EAX                        ; 005bc596
    JNZ 0x005bc5bb                      ; 005bc598
        ;   XREF to: 005bc5bb (CONDITIONAL_JUMP)  ; LAB_005bc5bb
    CMP dword ptr [EBX + 0xc2f4],0x0    ; 005bc59a
    JZ 0x005bc5f7                       ; 005bc5a1
        ;   XREF to: 005bc5f7 (CONDITIONAL_JUMP)  ; LAB_005bc5f7
    PUSH 0x5fa686                       ; 005bc5a3 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bc5a8
        ;   Label: LAB_005bc5a8
    PUSH EBX                            ; 005bc5ae
    CALL dword ptr [EAX + 0x2c]         ; 005bc5af
    ADD ESP,0x8                         ; 005bc5b2
    MOV dword ptr [EBX + 0xc34c],EAX    ; 005bc5b5
    PUSH EBX                            ; 005bc5bb
        ;   Label: LAB_005bc5bb
    CALL core_zombie.cpp_FUN_005bed80   ; 005bc5bc
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bc5c1
    JMP 0x005bbea7                      ; 005bc5c4
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH dword ptr [EBP + 0x92]         ; 005bc5c9
        ;   Label: LAB_005bc5c9
    PUSH EBX                            ; 005bc5cf
    CALL core_enemy.cpp_FUN_004a0fe0    ; 005bc5d0
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bc5d5
    TEST EAX,EAX                        ; 005bc5d8
    JNZ 0x005bbea7                      ; 005bc5da
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x1                            ; 005bc5e0
    PUSH EAX                            ; 005bc5e2
    LEA EAX,[EBX + 0x158]               ; 005bc5e3
    PUSH EAX                            ; 005bc5e9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc5ea
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc5ef
    JMP 0x005bbea7                      ; 005bc5f2
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x5fa69a                       ; 005bc5f7 | = "zom-a0?.wav"
        ;   Label: LAB_005bc5f7
    JMP 0x005bc5a8                      ; 005bc5fc
        ;   XREF to: 005bc5a8 (UNCONDITIONAL_JUMP)  ; LAB_005bc5a8
    MOV EAX,dword ptr [EBX + 0xc328]    ; 005bc5fe
        ;   Label: LAB_005bc5fe
    XOR ESI,ESI                         ; 005bc604
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005bc606
    MOV dword ptr [EBP + 0xe],ESI       ; 005bc60d
    TEST EDI,EDI                        ; 005bc610
    JZ 0x005bc61b                       ; 005bc612
        ;   XREF to: 005bc61b (CONDITIONAL_JUMP)  ; LAB_005bc61b
    MOV dword ptr [EBP + 0xe],0x1       ; 005bc614
    MOV EAX,dword ptr [EBX + 0xc330]    ; 005bc61b
        ;   Label: LAB_005bc61b
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 005bc621
    JZ 0x005bc62e                       ; 005bc629
        ;   XREF to: 005bc62e (CONDITIONAL_JUMP)  ; LAB_005bc62e
    INC dword ptr [EBP + 0xe]           ; 005bc62b
    LEA EAX,[EBX + 0x249c]              ; 005bc62e
        ;   Label: LAB_005bc62e
    PUSH dword ptr [EBP + 0x92]         ; 005bc634
    MOV dword ptr [EAX + 0x8],0x0       ; 005bc63a
    PUSH EBX                            ; 005bc641
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bc642
    MOV dword ptr [EAX + 0x4],EDX       ; 005bc645
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bc648
    MOV dword ptr [EAX],EDX             ; 005bc64b
    CALL core_zombie.cpp_FUN_005bd560   ; 005bc64d
        ;   XREF to: 005bd560 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bd560(CZombie * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005bc652
    TEST EAX,EAX                        ; 005bc655
    JNZ 0x005bbea7                      ; 005bc657
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x1                            ; 005bc65d
    MOV EAX,[0x006083a8]                ; 005bc65f | DAT_006083a8
    PUSH EBX                            ; 005bc664
    MOV dword ptr [EBP + 0x12],EAX      ; 005bc665
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bc668
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bc66d
    MOV dword ptr [EBP + 0x16],EAX      ; 005bc670
    TEST EAX,EAX                        ; 005bc673
    JL 0x005bc744                       ; 005bc675
        ;   XREF to: 005bc744 (CONDITIONAL_JUMP)  ; LAB_005bc744
    SHL EAX,0x3                         ; 005bc67b
    MOV EDX,EAX                         ; 005bc67e
    SHL EAX,0x4                         ; 005bc680
    SUB EAX,EDX                         ; 005bc683
    ADD EAX,EBX                         ; 005bc685
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 005bc687
    TEST ESI,ESI                        ; 005bc68d
    JZ 0x005bc744                       ; 005bc68f
        ;   XREF to: 005bc744 (CONDITIONAL_JUMP)  ; LAB_005bc744
    CMP dword ptr [EBX + 0xc27c],0x1    ; 005bc695
    JNZ 0x005bc744                      ; 005bc69c
        ;   XREF to: 005bc744 (CONDITIONAL_JUMP)  ; LAB_005bc744
    MOV EDX,0x3f800000                  ; 005bc6a2
    MOV EAX,ESI                         ; 005bc6a7
    MOV dword ptr [EBP + 0x22],EDX      ; 005bc6a9
    TEST ESI,ESI                        ; 005bc6ac
    JZ 0x005bc73e                       ; 005bc6ae
        ;   XREF to: 005bc73e (CONDITIONAL_JUMP)  ; LAB_005bc73e
    PUSH ESI                            ; 005bc6b4
    MOV EDX,dword ptr [ESI + 0x154]     ; 005bc6b5
    LEA ESI,[EBP + 0xfffffbba]          ; 005bc6bb
    LEA EDI,[EBP + 0xfffffb42]          ; 005bc6c1
    CALL dword ptr [EDX + 0x1c]         ; 005bc6c7
    MOV ECX,0x6                         ; 005bc6ca
    LEA ESI,[EBP + 0xfffffbba]          ; 005bc6cf
    LEA EAX,[EBP + 0xfffffcce]          ; 005bc6d5
    ADD ESP,0x4                         ; 005bc6db
    MOVSD.REP ES:EDI,ESI                ; 005bc6de
    PUSH EAX                            ; 005bc6e0
    LEA ESI,[EBP + 0xfffffb42]          ; 005bc6e1
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005bc6e7
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 005bc6ec
    FSUB float ptr [EBP + 0xfffffb42]   ; 005bc6ef
    FSTP float ptr [EBP + 0xfffffcce]   ; 005bc6f5
    FLD float ptr [ESI + 0x10]          ; 005bc6fb
    FSUB float ptr [EBP + 0xfffffb46]   ; 005bc6fe
    LEA EDI,[EBP + 0xfffffe5a]          ; 005bc704
    FSTP float ptr [EBP + 0xfffffcd2]   ; 005bc70a
    FLD float ptr [ESI + 0x14]          ; 005bc710
    FSUB float ptr [EBP + 0xfffffb4a]   ; 005bc713
    LEA ESI,[EBP + 0xfffffcce]          ; 005bc719
    FSTP float ptr [EBP + 0xfffffcd6]   ; 005bc71f
    MOVSD ES:EDI,ESI                    ; 005bc725
    MOVSD ES:EDI,ESI                    ; 005bc726
    MOVSD ES:EDI,ESI                    ; 005bc727
    FLD float ptr [EBP + 0xfffffe62]    ; 005bc728
    FMUL double ptr [0x005fa71c]        ; 005bc72e | DAT_005fa71c
    FLD1                                ; 005bc734
    FADDP                               ; 005bc736
    ADD ESP,0x4                         ; 005bc738
    FSTP float ptr [EBP + 0x22]         ; 005bc73b
    MOV EAX,dword ptr [EBP + 0x22]      ; 005bc73e
        ;   Label: LAB_005bc73e
    MOV dword ptr [EBP + 0x12],EAX      ; 005bc741
    PUSH 0x3eb2b8c2                     ; 005bc744
        ;   Label: LAB_005bc744
    PUSH 0x3f8ccccd                     ; 005bc749
    XOR ECX,ECX                         ; 005bc74e
    MOV EAX,dword ptr [EBP + 0x12]      ; 005bc750
    MOV dword ptr [EBP + 0xfffffdca],ECX ; 005bc753
    MOV dword ptr [EBP + 0xfffffdd2],EAX ; 005bc759
    LEA EAX,[EBP + 0xfffffdca]          ; 005bc75f
    MOV dword ptr [EBP + 0xfffffdce],ECX ; 005bc765
    PUSH EAX                            ; 005bc76b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bc76c
    PUSH EAX                            ; 005bc772
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bc773
    CALL dword ptr [EDX + 0xc4]         ; 005bc779
    ADD ESP,0x4                         ; 005bc77f
    PUSH EAX                            ; 005bc782
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bc783
    ADD EAX,0x20                        ; 005bc789
    PUSH EAX                            ; 005bc78c
    PUSH EBX                            ; 005bc78d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 005bc78e
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 005bc793
    ADD ESP,0x18                        ; 005bc799
    MOV dword ptr [EBP + 0x52],EDX      ; 005bc79c
    TEST EAX,EAX                        ; 005bc79f
    JL 0x005bc826                       ; 005bc7a1
        ;   XREF to: 005bc826 (CONDITIONAL_JUMP)  ; LAB_005bc826
    JLE 0x005bc8a6                      ; 005bc7a7
        ;   XREF to: 005bc8a6 (CONDITIONAL_JUMP)  ; LAB_005bc8a6
    CMP dword ptr [EBP + 0xe],0x0       ; 005bc7ad
    JLE 0x005bbea7                      ; 005bc7b1
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [EBX + 0xc1e4]        ; 005bc7b7
    FLDZ                                ; 005bc7bd
    FCOMPP                              ; 005bc7bf
    FNSTSW AX                           ; 005bc7c1
    SAHF                                ; 005bc7c3
    JC 0x005bbea7                       ; 005bc7c4
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bc7ca
    PUSH EAX                            ; 005bc7d0
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bc7d1
    CALL dword ptr [EDX + 0xf4]         ; 005bc7d7
    ADD ESP,0x4                         ; 005bc7dd
    TEST EAX,EAX                        ; 005bc7e0
    JNZ 0x005bbea7                      ; 005bc7e2
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV ESI,dword ptr [EBP + 0x16]      ; 005bc7e8
    TEST ESI,ESI                        ; 005bc7eb
    JL 0x005bc850                       ; 005bc7ed
        ;   XREF to: 005bc850 (CONDITIONAL_JUMP)  ; LAB_005bc850
    LEA EAX,[ESI*0x8 + 0x0]             ; 005bc7ef
    MOV EDX,EAX                         ; 005bc7f6
    SHL EAX,0x4                         ; 005bc7f8
    SUB EAX,EDX                         ; 005bc7fb
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 005bc7fd
    JZ 0x005bc850                       ; 005bc805
        ;   XREF to: 005bc850 (CONDITIONAL_JUMP)  ; LAB_005bc850
    PUSH 0x1                            ; 005bc807
    PUSH 0x2                            ; 005bc809
    MOV EDX,dword ptr [EBP + 0x52]      ; 005bc80b
    PUSH EDX                            ; 005bc80e
        ;   Label: LAB_005bc80e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc80f
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005bc80f
    ADD ESP,0xc                         ; 005bc814
    MOV dword ptr [EBX + 0xc1e4],0x3f4ccccd ; 005bc817
    JMP 0x005bbea7                      ; 005bc821
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bc826
        ;   Label: LAB_005bc826
    PUSH 0x5fa6a6                       ; 005bc827 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00611100]      ; 005bc82c | g_CConsolePtr
    PUSH ECX                            ; 005bc832 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bc833
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bc838
    PUSH 0x1                            ; 005bc83b
    PUSH 0x0                            ; 005bc83d
    MOV ESI,dword ptr [EBP + 0x52]      ; 005bc83f
    PUSH ESI                            ; 005bc842
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc843
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc848
    JMP 0x005bbea7                      ; 005bc84b
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP dword ptr [EBP + 0x36],0x0      ; 005bc850
        ;   Label: LAB_005bc850
    JZ 0x005bc896                       ; 005bc854
        ;   XREF to: 005bc896 (CONDITIONAL_JUMP)  ; LAB_005bc896
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bc856
    PUSH EAX                            ; 005bc85c
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bc85d
    CALL dword ptr [EDX + 0x10c]        ; 005bc863
    ADD ESP,0x4                         ; 005bc869
    TEST EAX,EAX                        ; 005bc86c
    JZ 0x005bc896                       ; 005bc86e
        ;   XREF to: 005bc896 (CONDITIONAL_JUMP)  ; LAB_005bc896
    PUSH 0x3f000000                     ; 005bc870
    CALL core_actor.cpp_FUN_0040cd00    ; 005bc875
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005bc87a
    LEA EDX,[EBX + 0x158]               ; 005bc87d
    TEST EAX,EAX                        ; 005bc883
    JZ 0x005bc88d                       ; 005bc885
        ;   XREF to: 005bc88d (CONDITIONAL_JUMP)  ; LAB_005bc88d
    PUSH 0x1                            ; 005bc887
    PUSH 0x18                           ; 005bc889
    JMP 0x005bc80e                      ; 005bc88b
        ;   XREF to: 005bc80e (UNCONDITIONAL_JUMP)  ; LAB_005bc80e
    PUSH 0x1                            ; 005bc88d
        ;   Label: LAB_005bc88d
    PUSH 0x19                           ; 005bc88f
    JMP 0x005bc80e                      ; 005bc891
        ;   XREF to: 005bc80e (UNCONDITIONAL_JUMP)  ; LAB_005bc80e
    PUSH 0x1                            ; 005bc896
        ;   Label: LAB_005bc896
    PUSH 0x3                            ; 005bc898
    LEA EAX,[EBX + 0x158]               ; 005bc89a
    PUSH EAX                            ; 005bc8a0
    JMP 0x005bc80f                      ; 005bc8a1
        ;   XREF to: 005bc80f (UNCONDITIONAL_JUMP)  ; LAB_005bc80f
    MOV EDI,dword ptr [EBX + 0xc27c]    ; 005bc8a6
        ;   Label: LAB_005bc8a6
    PUSH EDI                            ; 005bc8ac
    PUSH EBX                            ; 005bc8ad
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bc8ae
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    MOV dword ptr [EBP + 0x2e],EAX      ; 005bc8b3
    LEA EAX,[EBX + 0x20]                ; 005bc8b6
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 005bc8b9
    FLD float ptr [EAX]                 ; 005bc8bf
    FSUB float ptr [EDX + 0x20]         ; 005bc8c1
    FSTP float ptr [EBP + 0xfffffbf6]   ; 005bc8c4
    FLD float ptr [EAX + 0x4]           ; 005bc8ca
    FSUB float ptr [EDX + 0x24]         ; 005bc8cd
    LEA ESI,[EBP + 0xfffffbf6]          ; 005bc8d0
    FSTP float ptr [EBP + 0xfffffbfa]   ; 005bc8d6
    FLD float ptr [EAX + 0x8]           ; 005bc8dc
    FSUB float ptr [EDX + 0x28]         ; 005bc8df
    LEA EDI,[EBP + 0xfffffe66]          ; 005bc8e2
    FSTP float ptr [EBP + 0xfffffbfe]   ; 005bc8e8
    MOVSD ES:EDI,ESI                    ; 005bc8ee
    MOVSD ES:EDI,ESI                    ; 005bc8ef
    MOVSD ES:EDI,ESI                    ; 005bc8f0
    FLD float ptr [EBP + 0xfffffe6a]    ; 005bc8f1
    FMUL ST0                            ; 005bc8f7
    FLD float ptr [EBP + 0xfffffe66]    ; 005bc8f9
    FMUL ST0                            ; 005bc8ff
    FADDP                               ; 005bc901
    FLD float ptr [EBP + 0xfffffe6e]    ; 005bc903
    FMUL ST0                            ; 005bc909
    FADDP                               ; 005bc90b
    FSQRT                               ; 005bc90d
    ADD ESP,0x8                         ; 005bc90f
    ADD EDX,0x20                        ; 005bc912
    FCOMP double ptr [0x005fa734]       ; 005bc915 | DAT_005fa734
    FNSTSW AX                           ; 005bc91b
    SAHF                                ; 005bc91d
    JNC 0x005bbea7                      ; 005bc91e
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EDX                            ; 005bc924
    PUSH EBX                            ; 005bc925
    LEA ESI,[EBP + 0xfffffc32]          ; 005bc926
    LEA EDI,[EBP + 0xfffffc4a]          ; 005bc92c
    CALL core_actor.cpp_FUN_00408bb0    ; 005bc932
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffc32]          ; 005bc937
    LEA EAX,[EBP + 0xfffffc4a]          ; 005bc93d
    ADD ESP,0x8                         ; 005bc943
    MOVSD ES:EDI,ESI                    ; 005bc946
    MOVSD ES:EDI,ESI                    ; 005bc947
    MOVSD ES:EDI,ESI                    ; 005bc948
    PUSH EAX                            ; 005bc949
    LEA ESI,[EBP + 0xfffffcf2]          ; 005bc94a
    LEA EDI,[EBP + 0xfffffc0e]          ; 005bc950
    CALL core_vecdir.cpp_FUN_005a7520   ; 005bc956
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffcf2]          ; 005bc95b
    MOVSD ES:EDI,ESI                    ; 005bc961
    MOVSD ES:EDI,ESI                    ; 005bc962
    MOVSD ES:EDI,ESI                    ; 005bc963
    FLD float ptr [EBP + 0xfffffc12]    ; 005bc964
    FABS                                ; 005bc96a
    ADD ESP,0x4                         ; 005bc96c
    FCOMP double ptr [0x005fa73c]       ; 005bc96f | DAT_005fa73c
    FNSTSW AX                           ; 005bc975
    SAHF                                ; 005bc977
    JNC 0x005bbea7                      ; 005bc978
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EAX,dword ptr [EBP + 0x2e]      ; 005bc97e
    TEST EAX,EAX                        ; 005bc981
    JL 0x005bbea7                       ; 005bc983
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 005bc989
    CMP EDX,0x2                         ; 005bc98f
    JC 0x005bbea7                       ; 005bc992
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    SHL EAX,0x3                         ; 005bc998
    MOV ESI,EAX                         ; 005bc99b
    SHL EAX,0x4                         ; 005bc99d
    SUB EAX,ESI                         ; 005bc9a0
    ADD EAX,EBX                         ; 005bc9a2
    CMP EDX,0x2                         ; 005bc9a4
    JA 0x005bca16                       ; 005bc9a7
        ;   XREF to: 005bca16 (CONDITIONAL_JUMP)  ; LAB_005bca16
    CMP dword ptr [EAX + 0x25b0],0x0    ; 005bc9a9
    JZ 0x005bbea7                       ; 005bc9b0
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bc9b6
    PUSH 0x5fa6d3                       ; 005bc9b7 | = "%s lugging\n"
    MOV EAX,[0x00611100]                ; 005bc9bc | g_CConsolePtr
    PUSH EAX                            ; 005bc9c1 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bc9c2
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bc9c7
    PUSH 0x1                            ; 005bc9ca
    PUSH 0xd                            ; 005bc9cc
    MOV EDX,dword ptr [EBP + 0x52]      ; 005bc9ce
    PUSH EDX                            ; 005bc9d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bc9d2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bc9d7
    JMP 0x005bbea7                      ; 005bc9da
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP dword ptr [EAX + 0x25b0],0x0    ; 005bc9df
        ;   Label: LAB_005bc9df
    JZ 0x005bbea7                       ; 005bc9e6
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bc9ec
    PUSH 0x5fa6c7                       ; 005bc9ed | = "%s tossing\n"
    MOV ECX,dword ptr [0x00611100]      ; 005bc9f2 | g_CConsolePtr
    PUSH ECX                            ; 005bc9f8 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bc9f9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bc9fe
    PUSH 0x1                            ; 005bca01
    PUSH 0xb                            ; 005bca03
    MOV ESI,dword ptr [EBP + 0x52]      ; 005bca05
    PUSH ESI                            ; 005bca08
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bca09
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bca0e
    JMP 0x005bbea7                      ; 005bca11
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP EDX,0x3                         ; 005bca16
        ;   Label: LAB_005bca16
    JZ 0x005bc9df                       ; 005bca19
        ;   XREF to: 005bc9df (CONDITIONAL_JUMP)  ; LAB_005bc9df
    JMP 0x005bbea7                      ; 005bca1b
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 005bca20
        ;   Label: LAB_005bca20
    TEST ESI,ESI                        ; 005bca26
    JZ 0x005bc5bb                       ; 005bca28
        ;   XREF to: 005bc5bb (CONDITIONAL_JUMP)  ; LAB_005bc5bb
    PUSH ESI                            ; 005bca2e
    MOV EDX,dword ptr [ESI + 0x154]     ; 005bca2f
    CALL dword ptr [EDX + 0x10c]        ; 005bca35
    ADD ESP,0x4                         ; 005bca3b
    TEST EAX,EAX                        ; 005bca3e
    JG 0x005bc5bb                       ; 005bca40
        ;   XREF to: 005bc5bb (CONDITIONAL_JUMP)  ; LAB_005bc5bb
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bca46
    PUSH EAX                            ; 005bca4c
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bca4d
    CALL dword ptr [EDX + 0xf4]         ; 005bca53
    ADD ESP,0x4                         ; 005bca59
    TEST EAX,EAX                        ; 005bca5c
    JNZ 0x005bca75                      ; 005bca5e
        ;   XREF to: 005bca75 (CONDITIONAL_JUMP)  ; LAB_005bca75
    MOV EDI,0x40400000                  ; 005bca60
    MOV EAX,[0x006083a8]                ; 005bca65 | DAT_006083a8
    MOV dword ptr [EBP + 0x6a],EDI      ; 005bca6a
    MOV dword ptr [EBP + -0xe],EAX      ; 005bca6d
    JMP 0x005bbea7                      ; 005bca70
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP EAX,EBX                         ; 005bca75
        ;   Label: LAB_005bca75
    JZ 0x005bbea7                       ; 005bca77
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bca7d
        ;   Label: LAB_005bca7d
    CALL core_zombie.cpp_FUN_005bed80   ; 005bca7e
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bca83
    JMP 0x005bbea7                      ; 005bca86
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005bca8b
        ;   Label: LAB_005bca8b
    JZ 0x005bca7d                       ; 005bca92
        ;   XREF to: 005bca7d (CONDITIONAL_JUMP)  ; LAB_005bca7d
    PUSH 0x1                            ; 005bca94
    PUSH EBX                            ; 005bca96
    CALL core_zombie.cpp_FUN_005bdec0   ; 005bca97
        ;   XREF to: 005bdec0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_FUN_005bdec0(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 005bca9c
    MOV ESI,EAX                         ; 005bca9f
    TEST EAX,EAX                        ; 005bcaa1
    JL 0x005bcc33                       ; 005bcaa3
        ;   XREF to: 005bcc33 (CONDITIONAL_JUMP)  ; LAB_005bcc33
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bcaa9
    PUSH EAX                            ; 005bcaaf
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bcab0
    CALL dword ptr [EDX + 0x10c]        ; 005bcab6
    ADD ESP,0x4                         ; 005bcabc
    TEST EAX,EAX                        ; 005bcabf
    JG 0x005bcc33                       ; 005bcac1
        ;   XREF to: 005bcc33 (CONDITIONAL_JUMP)  ; LAB_005bcc33
    MOV EAX,ESI                         ; 005bcac7
    SHL EAX,0x3                         ; 005bcac9
    MOV EDX,EAX                         ; 005bcacc
    SHL EAX,0x4                         ; 005bcace
    SUB EAX,EDX                         ; 005bcad1
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 005bcad3
    JZ 0x005bcc33                       ; 005bcadb
        ;   XREF to: 005bcc33 (CONDITIONAL_JUMP)  ; LAB_005bcc33
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bcae1
    PUSH EAX                            ; 005bcae7
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bcae8
    CALL dword ptr [EDX + 0xf4]         ; 005bcaee
    ADD ESP,0x4                         ; 005bcaf4
    TEST EAX,EAX                        ; 005bcaf7
    JNZ 0x005bcc33                      ; 005bcaf9
        ;   XREF to: 005bcc33 (CONDITIONAL_JUMP)  ; LAB_005bcc33
    SHL ESI,0x3                         ; 005bcaff
    MOV EAX,ESI                         ; 005bcb02
    SHL EAX,0x4                         ; 005bcb04
    SUB EAX,ESI                         ; 005bcb07
    MOV ECX,0x3f800000                  ; 005bcb09
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 005bcb0e
    MOV dword ptr [EBP + 0x66],ECX      ; 005bcb15
    TEST EAX,EAX                        ; 005bcb18
    JZ 0x005bcbe3                       ; 005bcb1a
        ;   XREF to: 005bcbe3 (CONDITIONAL_JUMP)  ; LAB_005bcbe3
    PUSH EAX                            ; 005bcb20
    MOV EDX,dword ptr [EAX + 0x154]     ; 005bcb21
    LEA ESI,[EBP + 0xfffffba2]          ; 005bcb27
    LEA EDI,[EBP + 0xfffffb8a]          ; 005bcb2d
    CALL dword ptr [EDX + 0x1c]         ; 005bcb33
    MOV ECX,0x6                         ; 005bcb36
    LEA ESI,[EBP + 0xfffffba2]          ; 005bcb3b
    ADD ESP,0x4                         ; 005bcb41
    MOVSD.REP ES:EDI,ESI                ; 005bcb44
    LEA EAX,[EBP + 0xfffffde2]          ; 005bcb46
    LEA EDI,[EBP + 0xfffffb8a]          ; 005bcb4c
    PUSH EAX                            ; 005bcb52
    LEA ESI,[EDI + 0xc]                 ; 005bcb53
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 005bcb56
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [ESI]                 ; 005bcb5b
    FSUB float ptr [EDI]                ; 005bcb5d
    FSTP float ptr [EBP + 0xfffffde2]   ; 005bcb5f
    FLD float ptr [ESI + 0x4]           ; 005bcb65
    FSUB float ptr [EDI + 0x4]          ; 005bcb68
    FSTP float ptr [EBP + 0xfffffde6]   ; 005bcb6b
    FLD float ptr [ESI + 0x8]           ; 005bcb71
    LEA ESI,[EBP + 0xfffffde2]          ; 005bcb74
    FSUB float ptr [EDI + 0x8]          ; 005bcb7a
    LEA EDI,[EBP + 0xfffffe06]          ; 005bcb7d
    FSTP float ptr [EBP + 0xfffffdea]   ; 005bcb83
    MOVSD ES:EDI,ESI                    ; 005bcb89
    MOVSD ES:EDI,ESI                    ; 005bcb8a
    MOVSD ES:EDI,ESI                    ; 005bcb8b
    LEA EDI,[EBP + 0xfffffd9a]          ; 005bcb8c
    LEA ESI,[EBP + 0xfffffe06]          ; 005bcb92
    MOVSD ES:EDI,ESI                    ; 005bcb98
    MOVSD ES:EDI,ESI                    ; 005bcb99
    MOVSD ES:EDI,ESI                    ; 005bcb9a
    LEA EDI,[EBP + 0xfffffd8e]          ; 005bcb9b
    LEA ESI,[EBP + 0xfffffd9a]          ; 005bcba1
    MOVSD ES:EDI,ESI                    ; 005bcba7
    MOVSD ES:EDI,ESI                    ; 005bcba8
    MOVSD ES:EDI,ESI                    ; 005bcba9
    LEA EDI,[EBP + 0xfffffe12]          ; 005bcbaa
    LEA ESI,[EBP + 0xfffffd8e]          ; 005bcbb0
    MOVSD ES:EDI,ESI                    ; 005bcbb6
    MOVSD ES:EDI,ESI                    ; 005bcbb7
    MOVSD ES:EDI,ESI                    ; 005bcbb8
    LEA EDI,[EBP + 0xfffffd46]          ; 005bcbb9
    LEA ESI,[EBP + 0xfffffe12]          ; 005bcbbf
    MOVSD ES:EDI,ESI                    ; 005bcbc5
    MOVSD ES:EDI,ESI                    ; 005bcbc6
    MOVSD ES:EDI,ESI                    ; 005bcbc7
    FLD float ptr [EBP + 0xfffffd4e]    ; 005bcbc8
    FMUL double ptr [0x005fa71c]        ; 005bcbce | DAT_005fa71c
    FLD float ptr [EBP + 0x66]          ; 005bcbd4
    FXCH                                ; 005bcbd7
    FADD ST0,ST1                        ; 005bcbd9
    ADD ESP,0x4                         ; 005bcbdb
    FSTP ST1                            ; 005bcbde
    FSTP float ptr [EBP + 0x66]         ; 005bcbe0
    MOV EAX,dword ptr [EBP + 0x66]      ; 005bcbe3
        ;   Label: LAB_005bcbe3
    MOV dword ptr [EBP + -0xe],EAX      ; 005bcbe6
    LEA EAX,[EBX + 0x158]               ; 005bcbe9
    PUSH EAX                            ; 005bcbef
    CALL core_motion.cpp_FUN_00525020   ; 005bcbf0
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    FLD1                                ; 005bcbf5
    MOV dword ptr [EBP + 0x76],EAX      ; 005bcbf7
    ADD ESP,0x4                         ; 005bcbfa
    MOV EAX,dword ptr [EBP + 0x76]      ; 005bcbfd
    MOV dword ptr [EBP + 0x32],EAX      ; 005bcc00
    FLD float ptr [EBP + 0x32]          ; 005bcc03
    FSTP double ptr [EBP + -0x3e]       ; 005bcc06
    FCOMP double ptr [EBP + -0x3e]      ; 005bcc09
    FNSTSW AX                           ; 005bcc0c
    SAHF                                ; 005bcc0e
    JA 0x005bbea7                       ; 005bcc0f
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD double ptr [EBP + -0x3e]        ; 005bcc15
    FCOMP double ptr [0x005fa72c]       ; 005bcc18 | DAT_005fa72c
    FNSTSW AX                           ; 005bcc1e
    SAHF                                ; 005bcc20
    JA 0x005bbea7                       ; 005bcc21
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV dword ptr [EBP + -0x16],0x1     ; 005bcc27
    JMP 0x005bbea7                      ; 005bcc2e
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH EBX                            ; 005bcc33
        ;   Label: LAB_005bcc33
    PUSH 0x5fa6df                       ; 005bcc34 | = "%s gave up swing\n"
    MOV EDI,dword ptr [0x00611100]      ; 005bcc39 | g_CConsolePtr
    PUSH EDI                            ; 005bcc3f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 005bcc40
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 005bcc45
    PUSH EBX                            ; 005bcc48
    CALL core_zombie.cpp_FUN_005bed80   ; 005bcc49
        ;   XREF to: 005bed80 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bed80(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005bcc4e
    JMP 0x005bbea7                      ; 005bcc51
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH dword ptr [EBP + 0x92]         ; 005bcc56
        ;   Label: LAB_005bcc56
    MOV EAX,dword ptr [EBX + 0x154]     ; 005bcc5c
    PUSH EBX                            ; 005bcc62
    CALL dword ptr [EAX + 0x144]        ; 005bcc63
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bcc69
    ADD ESP,0x8                         ; 005bcc6f
    TEST EAX,EAX                        ; 005bcc72
    JZ 0x005bbea7                       ; 005bcc74
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [ESI]                 ; 005bcc7a
    FSUB float ptr [EAX + 0x20]         ; 005bcc7c
    FMUL ST0                            ; 005bcc7f
    FLD float ptr [ESI + 0x8]           ; 005bcc81
    FSUB float ptr [EAX + 0x28]         ; 005bcc84
    FMUL ST0                            ; 005bcc87
    MOV EDX,EAX                         ; 005bcc89
    FADDP                               ; 005bcc8b
    ADD EAX,0x20                        ; 005bcc8d
    FSQRT                               ; 005bcc90
    FCOMP double ptr [0x005fa724]       ; 005bcc92 | DAT_005fa724
    FNSTSW AX                           ; 005bcc98
    SAHF                                ; 005bcc9a
    JA 0x005bbea7                       ; 005bcc9b
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    FLD float ptr [EBX + 0x24]          ; 005bcca1
    FSUB float ptr [EDX + 0x24]         ; 005bcca4
    FABS                                ; 005bcca7
    FCOMP double ptr [0x005fa72c]       ; 005bcca9 | DAT_005fa72c
    FNSTSW AX                           ; 005bccaf
    SAHF                                ; 005bccb1
    JA 0x005bbea7                       ; 005bccb2
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    PUSH 0x1                            ; 005bccb8
    PUSH 0x0                            ; 005bccba
    PUSH EDI                            ; 005bccbc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bccbd
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005bccc2
    JMP 0x005bbea7                      ; 005bccc5
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    MOV EDX,0xbf800000                  ; 005bccca
        ;   Label: LAB_005bccca
    MOV ECX,0x3e99999a                  ; 005bcccf
    PUSH EDI                            ; 005bccd4
    MOV dword ptr [EBP + -0xe],EDX      ; 005bccd5
    MOV dword ptr [EBP + 0x6a],ECX      ; 005bccd8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 005bccdb
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005bcce0
    ADD ESP,0x4                         ; 005bcce3
    CMP EAX,0x8                         ; 005bcce6
    JNC 0x005bccfd                      ; 005bcce9
        ;   XREF to: 005bccfd (CONDITIONAL_JUMP)  ; LAB_005bccfd
    CMP EAX,0x1                         ; 005bcceb
    JNC 0x005bcd45                      ; 005bccee
        ;   XREF to: 005bcd45 (CONDITIONAL_JUMP)  ; LAB_005bcd45
    TEST EAX,EAX                        ; 005bccf0
    JZ 0x005bc3ab                       ; 005bccf2
        ;   XREF to: 005bc3ab (CONDITIONAL_JUMP)  ; LAB_005bc3ab
    JMP 0x005bbea7                      ; 005bccf8
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    JBE 0x005bc331                      ; 005bccfd
        ;   XREF to: 005bc331 (CONDITIONAL_JUMP)  ; LAB_005bc331
        ;   Label: LAB_005bccfd
    LEA ESI,[EBX + 0x20]                ; 005bcd03
    CMP EAX,0x18                        ; 005bcd06
    JNC 0x005bcd28                      ; 005bcd09
        ;   XREF to: 005bcd28 (CONDITIONAL_JUMP)  ; LAB_005bcd28
    CMP EAX,0xe                         ; 005bcd0b
    JC 0x005bbea7                       ; 005bcd0e
        ;   XREF to: 005bbea7 (CONDITIONAL_JUMP)  ; LAB_005bbea7
    JBE 0x005bc1d5                      ; 005bcd14
        ;   XREF to: 005bc1d5 (CONDITIONAL_JUMP)  ; LAB_005bc1d5
    CMP EAX,0x14                        ; 005bcd1a
    JZ 0x005bcc56                       ; 005bcd1d
        ;   XREF to: 005bcc56 (CONDITIONAL_JUMP)  ; LAB_005bcc56
    JMP 0x005bbea7                      ; 005bcd23
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    JBE 0x005bbe83                      ; 005bcd28
        ;   XREF to: 005bbe83 (CONDITIONAL_JUMP)  ; LAB_005bbe83
        ;   Label: LAB_005bcd28
    CMP EAX,0x19                        ; 005bcd2e
    JBE 0x005bbe83                      ; 005bcd31
        ;   XREF to: 005bbe83 (CONDITIONAL_JUMP)  ; LAB_005bbe83
    CMP EAX,0x1c                        ; 005bcd37
    JZ 0x005bbfac                       ; 005bcd3a
        ;   XREF to: 005bbfac (CONDITIONAL_JUMP)  ; LAB_005bbfac
    JMP 0x005bbea7                      ; 005bcd40
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    JBE 0x005bc509                      ; 005bcd45
        ;   XREF to: 005bc509 (CONDITIONAL_JUMP)  ; LAB_005bc509
        ;   Label: LAB_005bcd45
    CMP EAX,0x2                         ; 005bcd4b
    JBE 0x005bca8b                      ; 005bcd4e
        ;   XREF to: 005bca8b (CONDITIONAL_JUMP)  ; LAB_005bca8b
    CMP EAX,0x3                         ; 005bcd54
    JZ 0x005bca20                       ; 005bcd57
        ;   XREF to: 005bca20 (CONDITIONAL_JUMP)  ; LAB_005bca20
    JMP 0x005bbea7                      ; 005bcd5d
        ;   XREF to: 005bbea7 (UNCONDITIONAL_JUMP)  ; LAB_005bbea7
    CMP EAX,0xf                         ; 005bcd62
        ;   Label: LAB_005bcd62
    JNZ 0x005bcdc9                      ; 005bcd65
        ;   XREF to: 005bcdc9 (CONDITIONAL_JUMP)  ; LAB_005bcdc9
    PUSH EDX                            ; 005bcd67
    PUSH EBX                            ; 005bcd68
    LEA ESI,[EBP + 0xfffffd5e]          ; 005bcd69
    LEA EDI,[EBP + 0xfffffe96]          ; 005bcd6f
    CALL core_actor.cpp_FUN_00408ac0    ; 005bcd75
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0xfffffd5e]          ; 005bcd7a
    LEA EAX,[EBX + 0x20]                ; 005bcd80
    MOVSD ES:EDI,ESI                    ; 005bcd83
    MOVSD ES:EDI,ESI                    ; 005bcd84
    MOVSD ES:EDI,ESI                    ; 005bcd85
    FLD float ptr [EAX]                 ; 005bcd86
    FADD float ptr [EBP + 0xfffffe96]   ; 005bcd88
    FLD float ptr [EAX + 0x4]           ; 005bcd8e
    FXCH                                ; 005bcd91
    FSTP float ptr [EAX]                ; 005bcd93
    FADD float ptr [EBP + 0xfffffe9a]   ; 005bcd95
    FLD float ptr [EAX + 0x8]           ; 005bcd9b
    FXCH                                ; 005bcd9e
    FSTP float ptr [EAX + 0x4]          ; 005bcda0
    FADD float ptr [EBP + 0xfffffe9e]   ; 005bcda3
    FSTP float ptr [EAX + 0x8]          ; 005bcda9
    MOV EAX,dword ptr [EBP + 0x56]      ; 005bcdac
    MOV dword ptr [EAX + 0x8],0x0       ; 005bcdaf
    ADD ESP,0x8                         ; 005bcdb6
    MOV EDX,dword ptr [EAX + 0x8]       ; 005bcdb9
    MOV dword ptr [EAX + 0x4],EDX       ; 005bcdbc
    MOV EDX,dword ptr [EAX + 0x4]       ; 005bcdbf
    MOV dword ptr [EAX],EDX             ; 005bcdc2
    JMP 0x005bbc3b                      ; 005bcdc4
        ;   XREF to: 005bbc3b (UNCONDITIONAL_JUMP)  ; LAB_005bbc3b
    PUSH EBX                            ; 005bcdc9
        ;   Label: LAB_005bcdc9
    CALL core_charactr.cpp_FUN_0042e120 ; 005bcdca
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005bcdcf
    TEST EAX,EAX                        ; 005bcdd2
    JZ 0x005bbc3b                       ; 005bcdd4
        ;   XREF to: 005bbc3b (CONDITIONAL_JUMP)  ; LAB_005bbc3b
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 005bcdda
    TEST EDI,EDI                        ; 005bcde0
    JZ 0x005bce0e                       ; 005bcde2
        ;   XREF to: 005bce0e (CONDITIONAL_JUMP)  ; LAB_005bce0e
    PUSH EDI                            ; 005bcde4
    MOV EDX,dword ptr [EDI + 0x154]     ; 005bcde5
    CALL dword ptr [EDX + 0xf4]         ; 005bcdeb
    ADD ESP,0x4                         ; 005bcdf1
    CMP EAX,EBX                         ; 005bcdf4
    JNZ 0x005bce0e                      ; 005bcdf6
        ;   XREF to: 005bce0e (CONDITIONAL_JUMP)  ; LAB_005bce0e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 005bcdf8
    PUSH EAX                            ; 005bcdfe
    MOV EDX,dword ptr [0x00622c18]      ; 005bcdff | g_CDemonSetPtr
    PUSH EDX                            ; 005bce05 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 005bce06
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005bce0b
    PUSH dword ptr [EBP + 0x92]         ; 005bce0e
        ;   Label: LAB_005bce0e
    PUSH EBX                            ; 005bce14
    LEA ESI,[EBX + 0x2518]              ; 005bce15
    CALL core_charactr.cpp_FUN_0042d700 ; 005bce1b
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 005bce20
    FMUL float ptr [EBP + 0x92]         ; 005bce22
    FSTP float ptr [EBP + 0xfffffe36]   ; 005bce28
    FLD float ptr [ESI + 0x4]           ; 005bce2e
    FMUL float ptr [EBP + 0x92]         ; 005bce31
    FSTP float ptr [EBP + 0xfffffe3a]   ; 005bce37
    FLD float ptr [ESI + 0x8]           ; 005bce3d
    FMUL float ptr [EBP + 0x92]         ; 005bce40
    LEA EDI,[EBP + -0x4a]               ; 005bce46
    LEA ESI,[EBP + 0xfffffe36]          ; 005bce49
    FSTP float ptr [EBP + 0xfffffe3e]   ; 005bce4f
    MOVSD ES:EDI,ESI                    ; 005bce55
    MOVSD ES:EDI,ESI                    ; 005bce56
    MOVSD ES:EDI,ESI                    ; 005bce57
    LEA EAX,[EBX + 0x250c]              ; 005bce58
    FLD float ptr [EBP + -0x46]         ; 005bce5e
    FLD float ptr [EBP + -0x4a]         ; 005bce61
    FADD float ptr [EAX]                ; 005bce64
    FLD float ptr [EBP + -0x42]         ; 005bce66
    FXCH                                ; 005bce69
    FSTP float ptr [EBP + 0xfffffd3a]   ; 005bce6b
    FXCH                                ; 005bce71
    FADD float ptr [EAX + 0x4]          ; 005bce73
    LEA EDI,[EBP + 0xffffff0e]          ; 005bce76
    FSTP float ptr [EBP + 0xfffffd3e]   ; 005bce7c
    FADD float ptr [EAX + 0x8]          ; 005bce82
    LEA ESI,[EBP + 0xfffffd3a]          ; 005bce85
    FSTP float ptr [EBP + 0xfffffd42]   ; 005bce8b
    MOVSD ES:EDI,ESI                    ; 005bce91
    MOVSD ES:EDI,ESI                    ; 005bce92
    MOVSD ES:EDI,ESI                    ; 005bce93
    LEA EDX,[EBX + 0x249c]              ; 005bce94
    FLD float ptr [EBP + 0xffffff12]    ; 005bce9a
    FLD float ptr [EBP + 0xffffff0e]    ; 005bcea0
    FADD float ptr [EDX]                ; 005bcea6
    FLD float ptr [EBP + 0xffffff16]    ; 005bcea8
    FXCH                                ; 005bceae
    FSTP float ptr [EBP + 0xfffffd6a]   ; 005bceb0
    FXCH                                ; 005bceb6
    FADD float ptr [EDX + 0x4]          ; 005bceb8
    LEA EDI,[EBP + 0xffffff6e]          ; 005bcebb
    FSTP float ptr [EBP + 0xfffffd6e]   ; 005bcec1
    FADD float ptr [EDX + 0x8]          ; 005bcec7
    LEA ESI,[EBP + 0xfffffd6a]          ; 005bceca
    FSTP float ptr [EBP + 0xfffffd72]   ; 005bced0
    MOVSD ES:EDI,ESI                    ; 005bced6
    MOVSD ES:EDI,ESI                    ; 005bced7
    MOVSD ES:EDI,ESI                    ; 005bced8
    MOV dword ptr [EAX + 0x8],0x0       ; 005bced9
    ADD ESP,0x8                         ; 005bcee0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005bcee3
    MOV dword ptr [EAX + 0x4],ECX       ; 005bcee6
    MOV ECX,dword ptr [EAX + 0x4]       ; 005bcee9
    MOV dword ptr [EAX],ECX             ; 005bceec
    MOV dword ptr [EDX + 0x8],0x0       ; 005bceee
    LEA EAX,[EBP + 0xffffff6e]          ; 005bcef5
    FLD float ptr [EDX + 0x8]           ; 005bcefb
    PUSH EAX                            ; 005bcefe
    FST float ptr [EDX + 0x4]           ; 005bceff
    PUSH EBX                            ; 005bcf02
    FSTP float ptr [EDX]                ; 005bcf03
    CALL core_charactr.cpp_FUN_0042d750 ; 005bcf05
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    MOV ECX,dword ptr [EBP + 0x62]      ; 005bcf0a
    ADD ESP,0x8                         ; 005bcf0d
    CMP ECX,0x1                         ; 005bcf10
    JNZ 0x005bbc3b                      ; 005bcf13
        ;   XREF to: 005bbc3b (CONDITIONAL_JUMP)  ; LAB_005bbc3b
    MOV ESI,dword ptr [0x01b68928]      ; 005bcf19 | g_CDoorClassInfo.name_hash
    PUSH ESI                            ; 005bcf1f
    MOV EDI,dword ptr [0x007c6380]      ; 005bcf20 | DAT_007c6380
    PUSH EDI                            ; 005bcf26
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005bcf27
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV dword ptr [EBP + 0x4a],EAX      ; 005bcf2c
    ADD ESP,0x8                         ; 005bcf2f
    MOV dword ptr [EBP + 0x46],EAX      ; 005bcf32
    TEST EAX,EAX                        ; 005bcf35
    JZ 0x005bbc3b                       ; 005bcf37
        ;   XREF to: 005bbc3b (CONDITIONAL_JUMP)  ; LAB_005bbc3b
    MOV EDX,dword ptr [EBP + 0x4a]      ; 005bcf3d
    MOV EAX,dword ptr [EAX + 0x154]     ; 005bcf40
    PUSH EDX                            ; 005bcf46
    LEA ESI,[EBP + 0xfffffb2a]          ; 005bcf47
    LEA EDI,[EBP + 0xfffffbd2]          ; 005bcf4d
    CALL dword ptr [EAX + 0x1c]         ; 005bcf53
    MOV ECX,0x6                         ; 005bcf56
    LEA ESI,[EBP + 0xfffffb2a]          ; 005bcf5b
    MOVSD.REP ES:EDI,ESI                ; 005bcf61
    LEA EAX,[EBP + 0xfffffbd2]          ; 005bcf63
    FLD float ptr [EBP + 0xfffffbd6]    ; 005bcf69
    FLD float ptr [EBP + 0xfffffbd2]    ; 005bcf6f
    FADD float ptr [EAX + 0xc]          ; 005bcf75
    FLD float ptr [EBP + 0xfffffbda]    ; 005bcf78
    FXCH                                ; 005bcf7e
    FSTP float ptr [EBP + 0xfffffc86]   ; 005bcf80
    FXCH                                ; 005bcf86
    FADD float ptr [EAX + 0x10]         ; 005bcf88
    LEA EDI,[EBP + 0xfffffda6]          ; 005bcf8b
    FSTP float ptr [EBP + 0xfffffc8a]   ; 005bcf91
    FADD float ptr [EAX + 0x14]         ; 005bcf97
    LEA ESI,[EBP + 0xfffffc86]          ; 005bcf9a
    FSTP float ptr [EBP + 0xfffffc8e]   ; 005bcfa0
    MOVSD ES:EDI,ESI                    ; 005bcfa6
    MOVSD ES:EDI,ESI                    ; 005bcfa7
    MOVSD ES:EDI,ESI                    ; 005bcfa8
    FLD float ptr [0x005fa74c]          ; 005bcfa9 | DAT_005fa74c
    FLD float ptr [EBP + 0xfffffda6]    ; 005bcfaf
    FMUL ST1                            ; 005bcfb5
    FLD float ptr [EBP + 0xfffffdaa]    ; 005bcfb7
    FMUL ST2                            ; 005bcfbd
    FLD float ptr [EBP + 0xfffffdae]    ; 005bcfbf
    FMULP ST3                           ; 005bcfc5
    ADD ESP,0x4                         ; 005bcfc7
    LEA EAX,[EBP + 0xfffffdd6]          ; 005bcfca
    MOV ECX,dword ptr [EBP + 0x4a]      ; 005bcfd0
    PUSH EAX                            ; 005bcfd3
    LEA EDI,[EBP + 0xfffffdd6]          ; 005bcfd4
    LEA ESI,[EBP + 0xfffffc02]          ; 005bcfda
    FXCH                                ; 005bcfe0
    FSTP float ptr [EBP + 0xfffffc02]   ; 005bcfe2
    FSTP float ptr [EBP + 0xfffffc06]   ; 005bcfe8
    FSTP float ptr [EBP + 0xfffffc0a]   ; 005bcfee
    MOVSD ES:EDI,ESI                    ; 005bcff4
    MOVSD ES:EDI,ESI                    ; 005bcff5
    MOVSD ES:EDI,ESI                    ; 005bcff6
    PUSH ECX                            ; 005bcff7
    LEA ESI,[EBP + 0xfffffeae]          ; 005bcff8
    LEA EDI,[EBP + 0xffffff7a]          ; 005bcffe
    CALL core_actor.cpp_FUN_00408b40    ; 005bd004
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 005bd009
    LEA EAX,[EBP + 0xffffff7a]          ; 005bd00c
    LEA ESI,[EBP + 0xfffffeae]          ; 005bd012
    PUSH EAX                            ; 005bd018
    MOVSD ES:EDI,ESI                    ; 005bd019
    MOVSD ES:EDI,ESI                    ; 005bd01a
    MOVSD ES:EDI,ESI                    ; 005bd01b
    PUSH EBX                            ; 005bd01c
    LEA ESI,[EBP + 0xfffffea2]          ; 005bd01d
    LEA EDI,[EBP + 0xffffff32]          ; 005bd023
    CALL core_actor.cpp_FUN_00408bb0    ; 005bd029
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffea2]          ; 005bd02e
    LEA EAX,[EBP + 0xffffff32]          ; 005bd034
    ADD ESP,0x8                         ; 005bd03a
    MOVSD ES:EDI,ESI                    ; 005bd03d
    MOVSD ES:EDI,ESI                    ; 005bd03e
    MOVSD ES:EDI,ESI                    ; 005bd03f
    PUSH EAX                            ; 005bd040
    LEA ESI,[EBP + 0xfffffd82]          ; 005bd041
    LEA EDI,[EBP + 0xfffffcaa]          ; 005bd047
    CALL core_vecdir.cpp_FUN_005a7520   ; 005bd04d
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffd82]          ; 005bd052
    MOVSD ES:EDI,ESI                    ; 005bd058
    MOVSD ES:EDI,ESI                    ; 005bd059
    MOVSD ES:EDI,ESI                    ; 005bd05a
    FLD float ptr [EBP + 0xfffffcae]    ; 005bd05b
    FABS                                ; 005bd061
    ADD ESP,0x4                         ; 005bd063
    FCOMP double ptr [0x005fa774]       ; 005bd066 | DAT_005fa774
    FNSTSW AX                           ; 005bd06c
    SAHF                                ; 005bd06e
    JNC 0x005bbc3b                      ; 005bd06f
        ;   XREF to: 005bbc3b (CONDITIONAL_JUMP)  ; LAB_005bbc3b
    PUSH 0x3f000000                     ; 005bd075
    CALL core_actor.cpp_FUN_0040cd00    ; 005bd07a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    MOV ESI,0x12                        ; 005bd07f
    ADD ESP,0x4                         ; 005bd084
    TEST EAX,EAX                        ; 005bd087
    JZ 0x005bd090                       ; 005bd089
        ;   XREF to: 005bd090 (CONDITIONAL_JUMP)  ; LAB_005bd090
    MOV ESI,0x13                        ; 005bd08b
    PUSH 0x1                            ; 005bd090
        ;   Label: LAB_005bd090
    PUSH ESI                            ; 005bd092
    LEA EAX,[EBX + 0x158]               ; 005bd093
    PUSH EAX                            ; 005bd099
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005bd09a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x46]      ; 005bd09f
    ADD ESP,0xc                         ; 005bd0a2
    MOV dword ptr [EBX + 0xc284],EAX    ; 005bd0a5
    JMP 0x005bbc3b                      ; 005bd0ab
        ;   XREF to: 005bbc3b (UNCONDITIONAL_JUMP)  ; LAB_005bbc3b
    MOV ECX,dword ptr [EBX + 0xc320]    ; 005bd0b0
        ;   Label: LAB_005bd0b0
    PUSH 0x3f000000                     ; 005bd0b6
    PUSH ECX                            ; 005bd0bb
    JMP 0x005bbd2f                      ; 005bd0bc
        ;   XREF to: 005bbd2f (UNCONDITIONAL_JUMP)  ; LAB_005bbd2f
    MOV EAX,dword ptr [EBX + 0xc338]    ; 005bd0c1
        ;   Label: LAB_005bd0c1
    SHL EAX,0x2                         ; 005bd0c7
    ADD EAX,EBX                         ; 005bd0ca
    CMP dword ptr [EAX + 0x2298],0x0    ; 005bd0cc
    JZ 0x005bbd46                       ; 005bd0d3
        ;   XREF to: 005bbd46 (CONDITIONAL_JUMP)  ; LAB_005bbd46
    MOV dword ptr [EAX + 0x2298],0x0    ; 005bd0d9
    MOV ESI,dword ptr [EBX + 0xc320]    ; 005bd0e3
    PUSH 0x3e4ccccd                     ; 005bd0e9
    PUSH ESI                            ; 005bd0ee
    MOV EDI,dword ptr [EBX + 0xc338]    ; 005bd0ef
    PUSH EDI                            ; 005bd0f5
    PUSH EBX                            ; 005bd0f6
    CALL core_charactr.cpp_FUN_00430a90 ; 005bd0f7
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc338]    ; 005bd0fc
    ADD ESP,0x10                        ; 005bd102
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1 ; 005bd105
    JMP 0x005bbd46                      ; 005bd110
        ;   XREF to: 005bbd46 (UNCONDITIONAL_JUMP)  ; LAB_005bbd46

