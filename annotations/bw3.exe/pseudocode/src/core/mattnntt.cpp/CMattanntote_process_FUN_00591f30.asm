; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00591ee4 = 00592b1e
;   TerminatedCString s_mann_firestaff_wav_005d9065
;   TerminatedCString s_mann_stand_wav_005d9078
;   TerminatedCString s_mann_chasewalk_wav_005d9087
;   TerminatedCString s_mann_chasefast_wav_005d909a
;   TerminatedCString s_mann_attack_wav_005d90ad
;   TerminatedCString s_mann_attack1_wav_005d90bd
;   TerminatedCString s_mann_attack2_wav_005d90ce
;   TerminatedCString s_mann_attack3_wav_005d90df
;   TerminatedCString s_mann_pain_wav_005d90f0
;   TerminatedCString s_mann_die_wav_005d90fe
;   TerminatedCString s_mann_warning_wav_005d910b
;   TerminatedCString s_mann_appear_wav_005d911c
;   TerminatedCString s_mann_disappear_wav_005d912c
;   TerminatedCString s_State_d_005d913f
;   ... and 24 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042fbd0
;   core_charactr.cpp_FUN_00434850
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591f30
        ;   Label: core_mattnntt.cpp_CMattanntote_process_FUN_00591f30
    PUSH ESI                            ; 00591f31
    PUSH EDI                            ; 00591f32
    PUSH EBP                            ; 00591f33
    MOV EBP,ESP                         ; 00591f34
    SUB ESP,0x314                       ; 00591f36
    SUB EBP,0x7a                        ; 00591f3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00591f3f
    PUSH dword ptr [EBP + 0x92]         ; 00591f45
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591f4b
    PUSH EBX                            ; 00591f51
    CALL dword ptr [EAX + 0x148]        ; 00591f52
    ADD ESP,0x8                         ; 00591f58
    TEST EAX,EAX                        ; 00591f5b
    JZ 0x005936d2                       ; 00591f5d
        ;   XREF to: 005936d2 (CONDITIONAL_JUMP)  ; LAB_005936d2
    FLD float ptr [EBX + 0xd054]        ; 00591f63
    FLDZ                                ; 00591f69
    FCOMPP                              ; 00591f6b
    FNSTSW AX                           ; 00591f6d
    SAHF                                ; 00591f6f
    JC 0x00592550                       ; 00591f70
        ;   XREF to: 00592550 (CONDITIONAL_JUMP)  ; LAB_00592550
    FLD float ptr [EBX + 0xd064]        ; 00591f76
        ;   Label: LAB_00591f76
    FADD float ptr [EBP + 0x92]         ; 00591f7c
    FST float ptr [EBX + 0xd064]        ; 00591f82
    FCOMP float ptr [EBX + 0xd06c]      ; 00591f88
    FNSTSW AX                           ; 00591f8e
    SAHF                                ; 00591f90
    JNC 0x00592567                      ; 00591f91
        ;   XREF to: 00592567 (CONDITIONAL_JUMP)  ; LAB_00592567
    MOV EDX,dword ptr [EBX + 0xd07c]    ; 00591f97
        ;   Label: LAB_00591f97
    PUSH EDX                            ; 00591f9d
    LEA EAX,[EBX + 0x158]               ; 00591f9e
    LEA ESI,[EBP + -0x2a]               ; 00591fa4
    PUSH EAX                            ; 00591fa7
    LEA EDI,[EBP + 0xfffffe7a]          ; 00591fa8
    MOV dword ptr [EBP + 0x76],EAX      ; 00591fae
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00591fb1
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00591fb6
    LEA EAX,[EBP + 0xfffffe7a]          ; 00591fb9
    LEA ESI,[EBP + -0x2a]               ; 00591fbf
    PUSH EAX                            ; 00591fc2
    MOVSD ES:EDI,ESI                    ; 00591fc3
    MOVSD ES:EDI,ESI                    ; 00591fc4
    MOVSD ES:EDI,ESI                    ; 00591fc5
    PUSH EBX                            ; 00591fc6
    LEA ESI,[EBP + 0xfffffdc6]          ; 00591fc7
    LEA EDI,[EBP + 0xfffffeaa]          ; 00591fcd
    CALL core_actor.cpp_FUN_00408b80    ; 00591fd3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffdc6]          ; 00591fd8
    MOVSD ES:EDI,ESI                    ; 00591fde
    MOVSD ES:EDI,ESI                    ; 00591fdf
    MOVSD ES:EDI,ESI                    ; 00591fe0
    LEA EDX,[EBX + 0xd0d8]              ; 00591fe1
    MOV EAX,dword ptr [EBP + 0xfffffeaa] ; 00591fe7
    MOV dword ptr [EDX],EAX             ; 00591fed
    MOV EAX,dword ptr [EBP + 0xfffffeae] ; 00591fef
    MOV dword ptr [EDX + 0x4],EAX       ; 00591ff5
    MOV EAX,dword ptr [EBP + 0xfffffeb2] ; 00591ff8
    MOV dword ptr [EDX + 0x8],EAX       ; 00591ffe
    ADD ESP,0x8                         ; 00592001
    MOV ESI,dword ptr [EBX + 0xd080]    ; 00592004
    PUSH ESI                            ; 0059200a
    MOV EDI,dword ptr [EBP + 0x76]      ; 0059200b
    PUSH EDI                            ; 0059200e
    LEA ESI,[EBP + 0xffffff0a]          ; 0059200f
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00592015
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA EDI,[EBP + 0xfffffe86]          ; 0059201a
    ADD ESP,0x8                         ; 00592020
    LEA EAX,[EBP + 0xfffffe86]          ; 00592023
    LEA ESI,[EBP + 0xffffff0a]          ; 00592029
    PUSH EAX                            ; 0059202f
    MOVSD ES:EDI,ESI                    ; 00592030
    MOVSD ES:EDI,ESI                    ; 00592031
    MOVSD ES:EDI,ESI                    ; 00592032
    PUSH EBX                            ; 00592033
    LEA ESI,[EBP + 0xfffffdea]          ; 00592034
    LEA EDI,[EBP + 0xfffffe3e]          ; 0059203a
    CALL core_actor.cpp_FUN_00408b80    ; 00592040
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffdea]          ; 00592045
    MOVSD ES:EDI,ESI                    ; 0059204b
    MOVSD ES:EDI,ESI                    ; 0059204c
    MOVSD ES:EDI,ESI                    ; 0059204d
    LEA EDX,[EBX + 0xd37c]              ; 0059204e
    MOV EAX,dword ptr [EBP + 0xfffffe3e] ; 00592054
    MOV dword ptr [EDX],EAX             ; 0059205a
    MOV EAX,dword ptr [EBP + 0xfffffe42] ; 0059205c
    MOV dword ptr [EDX + 0x4],EAX       ; 00592062
    MOV EAX,dword ptr [EBP + 0xfffffe46] ; 00592065
    MOV dword ptr [EDX + 0x8],EAX       ; 0059206b
    ADD ESP,0x8                         ; 0059206e
    MOV EAX,dword ptr [EBX + 0xd088]    ; 00592071
    PUSH EAX                            ; 00592077
    MOV EDX,dword ptr [EBP + 0x76]      ; 00592078
    PUSH EDX                            ; 0059207b
    LEA ESI,[EBP + 0xfffffe02]          ; 0059207c
    LEA EDI,[EBP + 0xffffff16]          ; 00592082
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00592088
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 0059208d
    LEA EAX,[EBP + 0xffffff16]          ; 00592090
    LEA ESI,[EBP + 0xfffffe02]          ; 00592096
    PUSH EAX                            ; 0059209c
    MOVSD ES:EDI,ESI                    ; 0059209d
    MOVSD ES:EDI,ESI                    ; 0059209e
    MOVSD ES:EDI,ESI                    ; 0059209f
    PUSH EBX                            ; 005920a0
    LEA ESI,[EBP + 0xfffffe0e]          ; 005920a1
    LEA EDI,[EBP + 0xfffffeda]          ; 005920a7
    CALL core_actor.cpp_FUN_00408b80    ; 005920ad
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffe0e]          ; 005920b2
    MOVSD ES:EDI,ESI                    ; 005920b8
    MOVSD ES:EDI,ESI                    ; 005920b9
    MOVSD ES:EDI,ESI                    ; 005920ba
    LEA EDX,[EBX + 0xd620]              ; 005920bb
    MOV EAX,dword ptr [EBP + 0xfffffeda] ; 005920c1
    MOV dword ptr [EDX],EAX             ; 005920c7
    MOV EAX,dword ptr [EBP + 0xfffffede] ; 005920c9
    MOV dword ptr [EDX + 0x4],EAX       ; 005920cf
    MOV EAX,dword ptr [EBP + 0xfffffee2] ; 005920d2
    MOV dword ptr [EDX + 0x8],EAX       ; 005920d8
    ADD ESP,0x8                         ; 005920db
    MOV ECX,dword ptr [EBX + 0xd084]    ; 005920de
    PUSH ECX                            ; 005920e4
    MOV ESI,dword ptr [EBP + 0x76]      ; 005920e5
    PUSH ESI                            ; 005920e8
    LEA ESI,[EBP + 0xffffff2e]          ; 005920e9
    LEA EDI,[EBP + 0xfffffe9e]          ; 005920ef
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005920f5
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 005920fa
    LEA EAX,[EBP + 0xfffffe9e]          ; 005920fd
    LEA ESI,[EBP + 0xffffff2e]          ; 00592103
    PUSH EAX                            ; 00592109
    MOVSD ES:EDI,ESI                    ; 0059210a
    MOVSD ES:EDI,ESI                    ; 0059210b
    MOVSD ES:EDI,ESI                    ; 0059210c
    PUSH EBX                            ; 0059210d
    LEA ESI,[EBP + 0xffffff52]          ; 0059210e
    LEA EDI,[EBP + 0xfffffda2]          ; 00592114
    CALL core_actor.cpp_FUN_00408b80    ; 0059211a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff52]          ; 0059211f
    ADD ESP,0x8                         ; 00592125
    MOVSD ES:EDI,ESI                    ; 00592128
    MOVSD ES:EDI,ESI                    ; 00592129
    MOVSD ES:EDI,ESI                    ; 0059212a
    LEA EDX,[EBX + 0xd8c4]              ; 0059212b
    MOV EAX,dword ptr [EBP + 0xfffffda2] ; 00592131
    LEA EDI,[EBX + 0xd0b8]              ; 00592137
    MOV dword ptr [EDX],EAX             ; 0059213d
    MOV EAX,dword ptr [EBP + 0xfffffda6] ; 0059213f
    MOV ESI,EDI                         ; 00592145
    MOV dword ptr [EDX + 0x4],EAX       ; 00592147
    MOV EAX,dword ptr [EBP + 0xfffffdaa] ; 0059214a
    ADD EDI,0x1fb0                      ; 00592150
    MOV dword ptr [EDX + 0x8],EAX       ; 00592156
    PUSH dword ptr [EBP + 0x92]         ; 00592159
        ;   Label: LAB_00592159
    MOV EAX,dword ptr [ESI + 0x154]     ; 0059215f
    PUSH ESI                            ; 00592165
    CALL dword ptr [EAX + 0xc]          ; 00592166
    ADD ESI,0x2a4                       ; 00592169
    ADD ESP,0x8                         ; 0059216f
    CMP ESI,EDI                         ; 00592172
    JNZ 0x00592159                      ; 00592174
        ;   XREF to: 00592159 (CONDITIONAL_JUMP)  ; LAB_00592159
    CMP dword ptr [EBX + 0xd0a0],0x0    ; 00592176
    JNZ 0x0059218c                      ; 0059217d
        ;   XREF to: 0059218c (CONDITIONAL_JUMP)  ; LAB_0059218c
    CMP dword ptr [EBX + 0xd09c],0x0    ; 0059217f
    JZ 0x00592578                       ; 00592186
        ;   XREF to: 00592578 (CONDITIONAL_JUMP)  ; LAB_00592578
    FLD float ptr [EBX + 0xd090]        ; 0059218c
        ;   Label: LAB_0059218c
    FLDZ                                ; 00592192
    FCOMPP                              ; 00592194
    FNSTSW AX                           ; 00592196
    SAHF                                ; 00592198
    JNC 0x00592282                      ; 00592199
        ;   XREF to: 00592282 (CONDITIONAL_JUMP)  ; LAB_00592282
    FLD float ptr [EBX + 0xd090]        ; 0059219f
    FSUB float ptr [EBP + 0x92]         ; 005921a5
    FLDZ                                ; 005921ab
    FCOMPP                              ; 005921ad
    FNSTSW AX                           ; 005921af
    SAHF                                ; 005921b1
    JC 0x00592282                       ; 005921b2
        ;   XREF to: 00592282 (CONDITIONAL_JUMP)  ; LAB_00592282
    LEA EDI,[EBP + -0x7e]               ; 005921b8
    LEA ECX,[EBX + 0x20]                ; 005921bb
    LEA ESI,[EBP + -0x66]               ; 005921be
    MOV EDX,dword ptr [0x01d5ba14]      ; 005921c1 | DAT_01d5ba14
    FLD float ptr [ECX]                 ; 005921c7
    SHL EDX,0x2                         ; 005921c9
    FLD float ptr [ECX + 0x4]           ; 005921cc
    MOV EAX,dword ptr [EDX + 0x1d5ba04] ; 005921cf
    FLD float ptr [ECX + 0x8]           ; 005921d5
    FXCH ST2                            ; 005921d8
    FSUB float ptr [EAX + 0x20]         ; 005921da
    FXCH                                ; 005921dd
    FSUB float ptr [EAX + 0x24]         ; 005921df
    FXCH ST2                            ; 005921e2
    FSUB float ptr [EAX + 0x28]         ; 005921e4
    FXCH                                ; 005921e7
    FSTP float ptr [EBP + -0x66]        ; 005921e9
    FXCH                                ; 005921ec
    FSTP float ptr [EBP + -0x62]        ; 005921ee
    FSTP float ptr [EBP + -0x5e]        ; 005921f1
    MOVSD ES:EDI,ESI                    ; 005921f4
    MOVSD ES:EDI,ESI                    ; 005921f5
    MOVSD ES:EDI,ESI                    ; 005921f6
    FLD float ptr [EBP + -0x7a]         ; 005921f7
    FMUL ST0                            ; 005921fa
    FLD float ptr [EBP + -0x7e]         ; 005921fc
    FMUL ST0                            ; 005921ff
    FADDP                               ; 00592201
    FLD float ptr [EBP + -0x76]         ; 00592203
    FMUL ST0                            ; 00592206
    FADDP                               ; 00592208
    MOV dword ptr [EBP + 0x3e],ECX      ; 0059220a
    FSTP float ptr [EBP + 0x22]         ; 0059220d
    MOV EAX,dword ptr [EBP + 0x22]      ; 00592210
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00592213 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00592219
    ADD EAX,ECX                         ; 0059221b
    MOV dword ptr [EBP + 0x6],EAX       ; 0059221d
    FLD float ptr [EBP + 0x6]           ; 00592220
    FCOMP double ptr [0x005d91b3]       ; 00592223 | DAT_005d91b3
    FNSTSW AX                           ; 00592229
    SAHF                                ; 0059222b
    JC 0x00592669                       ; 0059222c
        ;   XREF to: 00592669 (CONDITIONAL_JUMP)  ; LAB_00592669
    FLD float ptr [EBX + 0xcdcc]        ; 00592232
    FADD float ptr [0x005d91bb]         ; 00592238 | DAT_005d91bb
    MOV dword ptr [EBX + 0xd090],0x0    ; 0059223e
    FSTP float ptr [EBX + 0xcdcc]       ; 00592248
    MOV EAX,dword ptr [EDX + 0x1d5ba04] ; 0059224e
    PUSH EAX                            ; 00592254
    MOV EDX,dword ptr [EAX + 0x154]     ; 00592255
    CALL dword ptr [EDX + 0x10c]        ; 0059225b
    LEA EDX,[EBX + 0x158]               ; 00592261
    ADD ESP,0x4                         ; 00592267
    MOV dword ptr [EBP + 0x36],EDX      ; 0059226a
    TEST EAX,EAX                        ; 0059226d
    JZ 0x005925a3                       ; 0059226f
        ;   XREF to: 005925a3 (CONDITIONAL_JUMP)  ; LAB_005925a3
    PUSH 0x1                            ; 00592275
    PUSH 0xd                            ; 00592277
    PUSH EDX                            ; 00592279
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059227a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0059227a
    ADD ESP,0xc                         ; 0059227f
    FLD float ptr [EBX + 0xd094]        ; 00592282
        ;   Label: LAB_00592282
    FSUB float ptr [EBP + 0x92]         ; 00592288
    FST float ptr [EBX + 0xd094]        ; 0059228e
    FLDZ                                ; 00592294
    FCOMPP                              ; 00592296
    FNSTSW AX                           ; 00592298
    SAHF                                ; 0059229a
    JBE 0x005922a7                      ; 0059229b
        ;   XREF to: 005922a7 (CONDITIONAL_JUMP)  ; LAB_005922a7
    MOV dword ptr [EBX + 0xd094],0x0    ; 0059229d
    FLD float ptr [EBX + 0xd090]        ; 005922a7
        ;   Label: LAB_005922a7
    FSUB float ptr [EBP + 0x92]         ; 005922ad
    FST float ptr [EBX + 0xd090]        ; 005922b3
    FLDZ                                ; 005922b9
    FCOMPP                              ; 005922bb
    FNSTSW AX                           ; 005922bd
    SAHF                                ; 005922bf
    JA 0x00592678                       ; 005922c0
        ;   XREF to: 00592678 (CONDITIONAL_JUMP)  ; LAB_00592678
    FLD float ptr [EBP + 0x92]          ; 005922c6
        ;   Label: LAB_005922c6
    LEA EAX,[EBX + 0x2518]              ; 005922cc
    FMUL float ptr [EBX + 0xcdcc]       ; 005922d2
    MOV dword ptr [EBP + 0x5a],EAX      ; 005922d8
    LEA EAX,[EBX + 0x250c]              ; 005922db
    MOV dword ptr [EBP + 0x5e],EAX      ; 005922e1
    LEA EAX,[EBX + 0x249c]              ; 005922e4
    MOV dword ptr [EBP + 0x62],EAX      ; 005922ea
    LEA EAX,[EBX + 0x158]               ; 005922ed
    MOV dword ptr [EBP + 0x6a],EAX      ; 005922f3
    LEA EAX,[EBX + 0x20]                ; 005922f6
    MOV dword ptr [EBP + 0x66],EAX      ; 005922f9
    LEA EAX,[EBX + 0xd0ac]              ; 005922fc
    FSTP float ptr [EBP + 0x3a]         ; 00592302
    MOV dword ptr [EBP + 0x6e],EAX      ; 00592305
    FLD float ptr [EBP + 0x3a]          ; 00592308
        ;   Label: LAB_00592308
    FLDZ                                ; 0059230b
    FCOMPP                              ; 0059230d
    FNSTSW AX                           ; 0059230f
    SAHF                                ; 00592311
    JNC 0x00593694                      ; 00592312
        ;   XREF to: 00593694 (CONDITIONAL_JUMP)  ; LAB_00593694
    LEA EAX,[EBP + 0x3a]                ; 00592318
    PUSH EAX                            ; 0059231b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0059231c
    PUSH ESI                            ; 0059231f
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00592320
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    MOV EDI,EAX                         ; 00592325
    LEA ESI,[EAX*0x4 + 0x0]             ; 00592327
    ADD ESP,0x8                         ; 0059232e
    ADD ESI,EBX                         ; 00592331
    CMP EAX,0x451                       ; 00592333
    JNC 0x00592982                      ; 00592338
        ;   XREF to: 00592982 (CONDITIONAL_JUMP)  ; LAB_00592982
    CMP EAX,0x44d                       ; 0059233e
    JNC 0x005929f5                      ; 00592343
        ;   XREF to: 005929f5 (CONDITIONAL_JUMP)  ; LAB_005929f5
    CMP EAX,0x3e9                       ; 00592349
    JNC 0x00592a40                      ; 0059234e
        ;   XREF to: 00592a40 (CONDITIONAL_JUMP)  ; LAB_00592a40
    FLD float ptr [EBP + 0x92]          ; 00592354
        ;   Label: LAB_00592354
    FMUL float ptr [EBX + 0xcdcc]       ; 0059235a
    FMUL double ptr [0x005d91cb]        ; 00592360 | DAT_005d91cb
    SUB ESP,0x4                         ; 00592366
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00592369
    MOV dword ptr [EBX + 0x2524],EAX    ; 0059236f
    FSTP float ptr [ESP]                ; 00592375
    PUSH EBX                            ; 00592378
    CALL core_charactr.cpp_FUN_00434850 ; 00592379
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0059237e
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00592381
    PUSH EDX                            ; 00592384
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00592385
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0059238a
    MOV ESI,dword ptr [EAX + 0x24]      ; 0059238d
    PUSH ESI                            ; 00592390
    PUSH 0x5d913f                       ; 00592391 | = "State: %d\n"
    MOV ECX,dword ptr [0x005f1690]      ; 00592396 | g_CConsolePtr
    PUSH ECX                            ; 0059239c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0059239d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005923a2
    PUSH dword ptr [EBP + 0x92]         ; 005923a5
    PUSH EBX                            ; 005923ab
    MOV EDI,ESI                         ; 005923ac
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 005923ae
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005923b3
    TEST EAX,EAX                        ; 005923b6
    JZ 0x00593658                       ; 005923b8
        ;   XREF to: 00593658 (CONDITIONAL_JUMP)  ; LAB_00593658
    MOV EAX,dword ptr [EBX + 0x273c]    ; 005923be
    CMP EAX,0x2                         ; 005923c4
    JNC 0x00592a81                      ; 005923c7
        ;   XREF to: 00592a81 (CONDITIONAL_JUMP)  ; LAB_00592a81
    CMP EAX,0x1                         ; 005923cd
    JNZ 0x00592a8c                      ; 005923d0
        ;   XREF to: 00592a8c (CONDITIONAL_JUMP)  ; LAB_00592a8c
    CMP EDI,0x2                         ; 005923d6
        ;   Label: LAB_005923d6
    JZ 0x005923e4                       ; 005923d9
        ;   XREF to: 005923e4 (CONDITIONAL_JUMP)  ; LAB_005923e4
    PUSH EBX                            ; 005923db
    CALL core_mattnntt.cpp_FUN_00593a90 ; 005923dc
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 005923e1
    MOV EAX,dword ptr [EBP + 0x62]      ; 005923e4
        ;   Label: LAB_005923e4
    MOV dword ptr [EAX + 0x8],0x0       ; 005923e7
    MOV EDX,dword ptr [EAX + 0x8]       ; 005923ee
    MOV dword ptr [EAX + 0x4],EDX       ; 005923f1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005923f4
    MOV dword ptr [EAX],EDX             ; 005923f7
    FLD float ptr [EBX + 0xcde0]        ; 005923f9
        ;   Label: caseD_7
    FLDZ                                ; 005923ff
    FCOMPP                              ; 00592401
    FNSTSW AX                           ; 00592403
    SAHF                                ; 00592405
    JNC 0x0059241a                      ; 00592406
        ;   XREF to: 0059241a (CONDITIONAL_JUMP)  ; LAB_0059241a
    FLD float ptr [EBX + 0xcde0]        ; 00592408
    FSUB float ptr [EBP + 0x92]         ; 0059240e
    FSTP float ptr [EBX + 0xcde0]       ; 00592414
    MOV EAX,[0x01d5ba14]                ; 0059241a | DAT_01d5ba14
        ;   Label: LAB_0059241a
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059241f
    PUSH EAX                            ; 00592426
    MOV EDX,dword ptr [EAX + 0x154]     ; 00592427
    CALL dword ptr [EDX + 0x10c]        ; 0059242d
    ADD ESP,0x4                         ; 00592433
    TEST EAX,EAX                        ; 00592436
    JNZ 0x00593668                      ; 00592438
        ;   XREF to: 00593668 (CONDITIONAL_JUMP)  ; LAB_00593668
    PUSH dword ptr [EBP + 0x92]         ; 0059243e
        ;   Label: LAB_0059243e
    PUSH EBX                            ; 00592444
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00592445
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0059244a
    FLD float ptr [EAX]                 ; 0059244d
    FMUL float ptr [EBP + 0x92]         ; 0059244f
    FLD float ptr [EAX + 0x4]           ; 00592455
    FMUL float ptr [EBP + 0x92]         ; 00592458
    FLD float ptr [EAX + 0x8]           ; 0059245e
    FMUL float ptr [EBP + 0x92]         ; 00592461
    LEA EDI,[EBP + 0xfffffdd2]          ; 00592467
    LEA ESI,[EBP + 0xfffffd8a]          ; 0059246d
    FXCH ST2                            ; 00592473
    FSTP float ptr [EBP + 0xfffffd8a]   ; 00592475
    FSTP float ptr [EBP + 0xfffffd8e]   ; 0059247b
    FSTP float ptr [EBP + 0xfffffd92]   ; 00592481
    MOVSD ES:EDI,ESI                    ; 00592487
    MOVSD ES:EDI,ESI                    ; 00592488
    MOVSD ES:EDI,ESI                    ; 00592489
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0059248a
    FLD float ptr [EBP + 0xfffffdd2]    ; 0059248d
    FLD float ptr [EBP + 0xfffffdd6]    ; 00592493
    FLD float ptr [EBP + 0xfffffdda]    ; 00592499
    LEA EDI,[EBP + 0xffffff22]          ; 0059249f
    LEA ESI,[EBP + 0xfffffdba]          ; 005924a5
    FXCH ST2                            ; 005924ab
    FADD float ptr [EAX]                ; 005924ad
    FXCH                                ; 005924af
    FADD float ptr [EAX + 0x4]          ; 005924b1
    FXCH ST2                            ; 005924b4
    FADD float ptr [EAX + 0x8]          ; 005924b6
    FXCH                                ; 005924b9
    FSTP float ptr [EBP + 0xfffffdba]   ; 005924bb
    FXCH                                ; 005924c1
    FSTP float ptr [EBP + 0xfffffdbe]   ; 005924c3
    FSTP float ptr [EBP + 0xfffffdc2]   ; 005924c9
    MOVSD ES:EDI,ESI                    ; 005924cf
    MOVSD ES:EDI,ESI                    ; 005924d0
    MOVSD ES:EDI,ESI                    ; 005924d1
    MOV EAX,dword ptr [EBP + 0x62]      ; 005924d2
    FLD float ptr [EBP + 0xffffff22]    ; 005924d5
    FLD float ptr [EBP + 0xffffff26]    ; 005924db
    FLD float ptr [EBP + 0xffffff2a]    ; 005924e1
    LEA EDI,[EBP + 0xfffffdde]          ; 005924e7
    LEA ESI,[EBP + -0x4e]               ; 005924ed
    FXCH ST2                            ; 005924f0
    FADD float ptr [EAX]                ; 005924f2
    FXCH                                ; 005924f4
    FADD float ptr [EAX + 0x4]          ; 005924f6
    FXCH ST2                            ; 005924f9
    FADD float ptr [EAX + 0x8]          ; 005924fb
    FXCH                                ; 005924fe
    FSTP float ptr [EBP + -0x4e]        ; 00592500
    FXCH                                ; 00592503
    FSTP float ptr [EBP + -0x4a]        ; 00592505
    FSTP float ptr [EBP + -0x46]        ; 00592508
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0059250b
    MOVSD ES:EDI,ESI                    ; 0059250e
    MOVSD ES:EDI,ESI                    ; 0059250f
    MOVSD ES:EDI,ESI                    ; 00592510
    MOV dword ptr [EAX + 0x8],0x0       ; 00592511
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592518
    MOV dword ptr [EAX + 0x4],EDX       ; 0059251b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059251e
    MOV dword ptr [EAX],EDX             ; 00592521
    MOV EAX,dword ptr [EBP + 0x62]      ; 00592523
    MOV dword ptr [EAX + 0x8],0x0       ; 00592526
    ADD ESP,0x8                         ; 0059252d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592530
    MOV dword ptr [EAX + 0x4],EDX       ; 00592533
    MOV EDX,dword ptr [EAX + 0x4]       ; 00592536
    MOV dword ptr [EAX],EDX             ; 00592539
    LEA EAX,[EBP + 0xfffffdde]          ; 0059253b
    PUSH EAX                            ; 00592541
    PUSH EBX                            ; 00592542
    CALL core_charactr.cpp_FUN_0042c230 ; 00592543
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00592548
    JMP 0x00592308                      ; 0059254b
        ;   XREF to: 00592308 (UNCONDITIONAL_JUMP)  ; LAB_00592308
    FLD float ptr [EBX + 0xd054]        ; 00592550
        ;   Label: LAB_00592550
    FSUB float ptr [EBP + 0x92]         ; 00592556
    FSTP float ptr [EBX + 0xd054]       ; 0059255c
    JMP 0x00591f76                      ; 00592562
        ;   XREF to: 00591f76 (UNCONDITIONAL_JUMP)  ; LAB_00591f76
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 00592567
        ;   Label: LAB_00592567
    MOV dword ptr [EBX + 0xd064],EAX    ; 0059256d
    JMP 0x00591f97                      ; 00592573
        ;   XREF to: 00591f97 (UNCONDITIONAL_JUMP)  ; LAB_00591f97
    FLD float ptr [EBX + 0xcdcc]        ; 00592578
        ;   Label: LAB_00592578
    MOV dword ptr [EBX + 0xd09c],0x1    ; 0059257e
    FADD float ptr [0x005d91ab]         ; 00592588 | DAT_005d91ab
    MOV dword ptr [EBX + 0xd098],0x1    ; 0059258e
    FSTP float ptr [EBX + 0xcdcc]       ; 00592598
    JMP 0x0059218c                      ; 0059259e
        ;   XREF to: 0059218c (UNCONDITIONAL_JUMP)  ; LAB_0059218c
    MOV EAX,[0x01d5ba14]                ; 005925a3 | DAT_01d5ba14
        ;   Label: LAB_005925a3
    MOV EDX,dword ptr [EBP + 0x3e]      ; 005925a8
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005925ab
    LEA EDI,[EBP + -0x12]               ; 005925b2
    LEA ESI,[EBP + 0xffffff46]          ; 005925b5
    FLD float ptr [EAX + 0x24]          ; 005925bb
    FLD float ptr [EAX + 0x28]          ; 005925be
    FLD float ptr [EAX + 0x20]          ; 005925c1
    LEA EAX,[EBP + -0x12]               ; 005925c4
    FSUB float ptr [EDX]                ; 005925c7
    FXCH ST2                            ; 005925c9
    FSUB float ptr [EDX + 0x4]          ; 005925cb
    FXCH                                ; 005925ce
    FSUB float ptr [EDX + 0x8]          ; 005925d0
    FXCH ST2                            ; 005925d3
    FSTP float ptr [EBP + 0xffffff46]   ; 005925d5
    FSTP float ptr [EBP + 0xffffff4a]   ; 005925db
    FSTP float ptr [EBP + 0xffffff4e]   ; 005925e1
    MOVSD ES:EDI,ESI                    ; 005925e7
    MOVSD ES:EDI,ESI                    ; 005925e8
    MOVSD ES:EDI,ESI                    ; 005925e9
    PUSH EAX                            ; 005925ea
    LEA ESI,[EBP + 0xfffffd66]          ; 005925eb
    LEA EDI,[EBP + -0x72]               ; 005925f1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 005925f4
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffd66]          ; 005925f9
    MOVSD ES:EDI,ESI                    ; 005925ff
    MOVSD ES:EDI,ESI                    ; 00592600
    MOVSD ES:EDI,ESI                    ; 00592601
    ADD ESP,0x4                         ; 00592602
    FLD float ptr [EBP + -0x6e]         ; 00592605
    FSUB float ptr [EBX + 0x34]         ; 00592608
    SUB ESP,0x4                         ; 0059260b
    FSTP float ptr [ESP]                ; 0059260e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00592611
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    FLD float ptr [EBP + -0x72]         ; 00592616
    ADD ESP,0x4                         ; 00592619
    MOV dword ptr [EBP + 0x76],EAX      ; 0059261c
    SUB ESP,0x4                         ; 0059261f
    FSUB float ptr [EBX + 0x30]         ; 00592622
    FLD float ptr [EBP + 0x76]          ; 00592625
    FXCH                                ; 00592628
    FSTP float ptr [ESP]                ; 0059262a
    FSTP float ptr [EBP + 0x72]         ; 0059262d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00592630
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    FLD float ptr [EBX + 0x34]          ; 00592635
    FLD float ptr [EBX + 0x30]          ; 00592638
    MOV dword ptr [EBP + 0x76],EAX      ; 0059263b
    ADD ESP,0x4                         ; 0059263e
    FLD float ptr [EBP + 0x76]          ; 00592641
    FXCH ST2                            ; 00592644
    FADD float ptr [EBP + 0x72]         ; 00592646
    PUSH EBX                            ; 00592649
    FXCH                                ; 0059264a
    FADDP ST2,ST0                       ; 0059264c
    FSTP float ptr [EBX + 0x34]         ; 0059264e
    FSTP float ptr [EBX + 0x30]         ; 00592651
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 00592654
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00592659
    PUSH 0x1                            ; 0059265c
    PUSH 0xd                            ; 0059265e
    MOV ESI,dword ptr [EBP + 0x36]      ; 00592660
    PUSH ESI                            ; 00592663
    JMP 0x0059227a                      ; 00592664
        ;   XREF to: 0059227a (UNCONDITIONAL_JUMP)  ; LAB_0059227a
    MOV dword ptr [EBX + 0xd090],0x3f000000 ; 00592669
        ;   Label: LAB_00592669
    JMP 0x00592282                      ; 00592673
        ;   XREF to: 00592282 (UNCONDITIONAL_JUMP)  ; LAB_00592282
    MOV dword ptr [EBX + 0xd08c],0x0    ; 00592678
        ;   Label: LAB_00592678
    FLD float ptr [EBX + 0xd090]        ; 00592682
    MOV dword ptr [EBX + 0xd098],0x0    ; 00592688
    FCOMP double ptr [0x005d91c3]       ; 00592692 | DAT_005d91c3
    FNSTSW AX                           ; 00592698
    SAHF                                ; 0059269a
    JNC 0x005922c6                      ; 0059269b
        ;   XREF to: 005922c6 (CONDITIONAL_JUMP)  ; LAB_005922c6
    MOV dword ptr [EBX + 0xd090],0x0    ; 005926a1
    MOV dword ptr [EBX + 0xd09c],0x0    ; 005926ab
    JMP 0x005922c6                      ; 005926b5
        ;   XREF to: 005922c6 (UNCONDITIONAL_JUMP)  ; LAB_005922c6
    MOV EAX,[0x02d0c150]                ; 005926ba | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_005926ba
    PUSH EAX                            ; 005926bf
    MOV EDX,dword ptr [EBX + 0x2628]    ; 005926c0
    PUSH EDX                            ; 005926c6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005926c7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005926cc
    MOV ESI,EAX                         ; 005926cf
    TEST EAX,EAX                        ; 005926d1
    JZ 0x00592354                       ; 005926d3
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    MOV ECX,dword ptr [0x00603b28]      ; 005926d9 | g_CDemonSetPtr
    PUSH ECX                            ; 005926df | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005926e0
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005926e5
    MOV EAX,dword ptr [ESI + 0x568]     ; 005926e8
    MOV dword ptr [ESI + 0x304],EBX     ; 005926ee
    MOV dword ptr [EBP + 0x42],EAX      ; 005926f4
    PUSH ESI                            ; 005926f7
    MOV EAX,dword ptr [ESI + 0x154]     ; 005926f8
    MOV dword ptr [ESI + 0x568],0x64    ; 005926fe
    CALL dword ptr [EAX + 0xe8]         ; 00592708
    ADD ESP,0x4                         ; 0059270e
    TEST EAX,EAX                        ; 00592711
    JZ 0x00592739                       ; 00592713
        ;   XREF to: 00592739 (CONDITIONAL_JUMP)  ; LAB_00592739
    PUSH ESI                            ; 00592715
    MOV EAX,dword ptr [ESI + 0x154]     ; 00592716
    CALL dword ptr [EAX + 0xe4]         ; 0059271c
    ADD ESP,0x4                         ; 00592722
    MOV EAX,dword ptr [EBX + EDI*0x4 + 0xdf38] ; 00592725
    PUSH EAX                            ; 0059272c
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059272d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00592732
    TEST EAX,EAX                        ; 00592735
    JZ 0x00592747                       ; 00592737
        ;   XREF to: 00592747 (CONDITIONAL_JUMP)  ; LAB_00592747
    MOV EAX,dword ptr [EBP + 0x42]      ; 00592739
        ;   Label: LAB_00592739
    MOV dword ptr [ESI + 0x568],EAX     ; 0059273c
    JMP 0x00592354                      ; 00592742
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV ECX,0x5d9065                    ; 00592747 | = "mann_firestaff.wav"
        ;   Label: LAB_00592747
    PUSH ECX                            ; 0059274c | = "mann_firestaff.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 0059274d
    PUSH EBX                            ; 00592753
    CALL dword ptr [EDX + 0x2c]         ; 00592754
    ADD ESP,0x8                         ; 00592757
    MOV dword ptr [EBX + EDI*0x4 + 0xdf38],EAX ; 0059275a
    MOV EAX,dword ptr [EBP + 0x42]      ; 00592761
    MOV dword ptr [ESI + 0x568],EAX     ; 00592764
    JMP 0x00592354                      ; 0059276a
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0xdf38] ; 0059276f
        ;   Label: LAB_0059276f
    PUSH ESI                            ; 00592776
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592777
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059277c
    TEST EAX,EAX                        ; 0059277f
    JNZ 0x00592354                      ; 00592781
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,0x5d9078                    ; 00592787 | = "mann_stand.wav"
    PUSH EDX                            ; 0059278c | = "mann_stand.wav"
    MOV ECX,dword ptr [EBX + 0x154]     ; 0059278d
    PUSH EBX                            ; 00592793
    CALL dword ptr [ECX + 0x2c]         ; 00592794
    ADD ESP,0x8                         ; 00592797
    MOV dword ptr [EBX + EDI*0x4 + 0xdf38],EAX ; 0059279a
    JMP 0x00592354                      ; 005927a1
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xdf38] ; 005927a6
        ;   Label: LAB_005927a6
    PUSH ECX                            ; 005927ad
    CALL sound_sndmain.cpp_FUN_00556700 ; 005927ae
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005927b3
    TEST EAX,EAX                        ; 005927b6
    JNZ 0x00592354                      ; 005927b8
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,0x5d9087                    ; 005927be | = "mann_chasewalk.wav"
    PUSH EDX                            ; 005927c3 | = "mann_chasewalk.wav"
    MOV ECX,dword ptr [EBX + 0x154]     ; 005927c4
    PUSH EBX                            ; 005927ca
    CALL dword ptr [ECX + 0x2c]         ; 005927cb
    ADD ESP,0x8                         ; 005927ce
    MOV dword ptr [EBX + EDI*0x4 + 0xdf38],EAX ; 005927d1
    JMP 0x00592354                      ; 005927d8
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xdf38] ; 005927dd
        ;   Label: LAB_005927dd
    PUSH EDX                            ; 005927e4
    CALL sound_sndmain.cpp_FUN_00556700 ; 005927e5
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005927ea
    TEST EAX,EAX                        ; 005927ed
    JNZ 0x00592354                      ; 005927ef
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,0x5d909a                    ; 005927f5 | = "mann_chasefast.wav"
    PUSH EDX                            ; 005927fa | = "mann_chasefast.wav"
    MOV ECX,dword ptr [EBX + 0x154]     ; 005927fb
    PUSH EBX                            ; 00592801
    CALL dword ptr [ECX + 0x2c]         ; 00592802
    ADD ESP,0x8                         ; 00592805
    MOV dword ptr [EBX + EDI*0x4 + 0xdf38],EAX ; 00592808
    JMP 0x00592354                      ; 0059280f
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EAX,dword ptr [ESI + 0xdf38]    ; 00592814
        ;   Label: LAB_00592814
    PUSH EAX                            ; 0059281a
    CALL sound_sndmain.cpp_FUN_00556700 ; 0059281b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00592820
    TEST EAX,EAX                        ; 00592823
    JNZ 0x00592354                      ; 00592825
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,0x5d90ad                    ; 0059282b | = "mann_attack.wav"
    PUSH EDX                            ; 00592830 | = "mann_attack.wav"
    MOV ECX,dword ptr [EBX + 0x154]     ; 00592831
    PUSH EBX                            ; 00592837
    CALL dword ptr [ECX + 0x2c]         ; 00592838
    ADD ESP,0x8                         ; 0059283b
    MOV dword ptr [EBX + EDI*0x4 + 0xdf38],EAX ; 0059283e
    JMP 0x00592354                      ; 00592845
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,dword ptr [ESI + 0xdf38]    ; 0059284a
        ;   Label: LAB_0059284a
    PUSH EDX                            ; 00592850
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592851
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00592856
    TEST EAX,EAX                        ; 00592859
    JNZ 0x00592354                      ; 0059285b
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d90ce                       ; 00592861 | = "mann_attack2.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592866
    PUSH EBX                            ; 0059286c
    CALL dword ptr [EAX + 0x2c]         ; 0059286d
    ADD ESP,0x8                         ; 00592870
    MOV dword ptr [ESI + 0xdf38],EAX    ; 00592873
    JMP 0x00592354                      ; 00592879
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EAX,dword ptr [ESI + 0xdf38]    ; 0059287e
        ;   Label: LAB_0059287e
    PUSH EAX                            ; 00592884
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592885
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059288a
    TEST EAX,EAX                        ; 0059288d
    JNZ 0x00592354                      ; 0059288f
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d90df                       ; 00592895 | = "mann_attack3.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059289a
    PUSH EBX                            ; 005928a0
    CALL dword ptr [EAX + 0x2c]         ; 005928a1
    ADD ESP,0x8                         ; 005928a4
    MOV dword ptr [ESI + 0xdf38],EAX    ; 005928a7
    JMP 0x00592354                      ; 005928ad
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV ECX,dword ptr [ESI + 0xdf38]    ; 005928b2
        ;   Label: LAB_005928b2
    PUSH ECX                            ; 005928b8
    CALL sound_sndmain.cpp_FUN_00556700 ; 005928b9
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005928be
    TEST EAX,EAX                        ; 005928c1
    JNZ 0x00592354                      ; 005928c3
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d90fe                       ; 005928c9 | = "mann_die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005928ce
    PUSH EBX                            ; 005928d4
    CALL dword ptr [EAX + 0x2c]         ; 005928d5
    ADD ESP,0x8                         ; 005928d8
    MOV dword ptr [ESI + 0xdf38],EAX    ; 005928db
    JMP 0x00592354                      ; 005928e1
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDX,dword ptr [ESI + 0xdf38]    ; 005928e6
        ;   Label: LAB_005928e6
    PUSH EDX                            ; 005928ec
    CALL sound_sndmain.cpp_FUN_00556700 ; 005928ed
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005928f2
    TEST EAX,EAX                        ; 005928f5
    JNZ 0x00592354                      ; 005928f7
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d910b                       ; 005928fd | = "mann_warning.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592902
    PUSH EBX                            ; 00592908
    CALL dword ptr [EAX + 0x2c]         ; 00592909
    ADD ESP,0x8                         ; 0059290c
    MOV dword ptr [ESI + 0xdf38],EAX    ; 0059290f
    JMP 0x00592354                      ; 00592915
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EAX,dword ptr [ESI + 0xdf38]    ; 0059291a
        ;   Label: LAB_0059291a
    PUSH EAX                            ; 00592920
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592921
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00592926
    TEST EAX,EAX                        ; 00592929
    JNZ 0x00592354                      ; 0059292b
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d911c                       ; 00592931 | = "mann_appear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592936
    PUSH EBX                            ; 0059293c
    CALL dword ptr [EAX + 0x2c]         ; 0059293d
    ADD ESP,0x8                         ; 00592940
    MOV dword ptr [ESI + 0xdf38],EAX    ; 00592943
    JMP 0x00592354                      ; 00592949
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    MOV EDI,dword ptr [ESI + 0xdf38]    ; 0059294e
        ;   Label: LAB_0059294e
    PUSH EDI                            ; 00592954
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592955
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0059295a
    TEST EAX,EAX                        ; 0059295d
    JNZ 0x00592354                      ; 0059295f
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d912c                       ; 00592965 | = "mann_disappear.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059296a
    PUSH EBX                            ; 00592970
    CALL dword ptr [EAX + 0x2c]         ; 00592971
    ADD ESP,0x8                         ; 00592974
    MOV dword ptr [ESI + 0xdf38],EAX    ; 00592977
    JMP 0x00592354                      ; 0059297d
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    JBE 0x0059284a                      ; 00592982
        ;   XREF to: 0059284a (CONDITIONAL_JUMP)  ; LAB_0059284a
        ;   Label: LAB_00592982
    CMP EAX,0x454                       ; 00592988
    JNC 0x005929ce                      ; 0059298d
        ;   XREF to: 005929ce (CONDITIONAL_JUMP)  ; LAB_005929ce
    CMP EAX,0x452                       ; 0059298f
    JBE 0x0059287e                      ; 00592994
        ;   XREF to: 0059287e (CONDITIONAL_JUMP)  ; LAB_0059287e
    MOV EDI,dword ptr [ESI + 0xdf38]    ; 0059299a
    PUSH EDI                            ; 005929a0
    CALL sound_sndmain.cpp_FUN_00556700 ; 005929a1
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005929a6
    TEST EAX,EAX                        ; 005929a9
    JNZ 0x00592354                      ; 005929ab
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d90f0                       ; 005929b1 | = "mann_pain.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005929b6
    PUSH EBX                            ; 005929bc
    CALL dword ptr [EAX + 0x2c]         ; 005929bd
    ADD ESP,0x8                         ; 005929c0
    MOV dword ptr [ESI + 0xdf38],EAX    ; 005929c3
    JMP 0x00592354                      ; 005929c9
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    JBE 0x005928b2                      ; 005929ce
        ;   XREF to: 005928b2 (CONDITIONAL_JUMP)  ; LAB_005928b2
        ;   Label: LAB_005929ce
    CMP EAX,0x456                       ; 005929d4
    JC 0x005928e6                       ; 005929d9
        ;   XREF to: 005928e6 (CONDITIONAL_JUMP)  ; LAB_005928e6
    JBE 0x0059291a                      ; 005929df
        ;   XREF to: 0059291a (CONDITIONAL_JUMP)  ; LAB_0059291a
    CMP EAX,0x457                       ; 005929e5
    JZ 0x0059294e                       ; 005929ea
        ;   XREF to: 0059294e (CONDITIONAL_JUMP)  ; LAB_0059294e
    JMP 0x00592354                      ; 005929f0
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    JBE 0x005927a6                      ; 005929f5
        ;   XREF to: 005927a6 (CONDITIONAL_JUMP)  ; LAB_005927a6
        ;   Label: LAB_005929f5
    CMP EAX,0x44f                       ; 005929fb
    JC 0x005927dd                       ; 00592a00
        ;   XREF to: 005927dd (CONDITIONAL_JUMP)  ; LAB_005927dd
    JBE 0x00592814                      ; 00592a06
        ;   XREF to: 00592814 (CONDITIONAL_JUMP)  ; LAB_00592814
    MOV ECX,dword ptr [ESI + 0xdf38]    ; 00592a0c
    PUSH ECX                            ; 00592a12
    CALL sound_sndmain.cpp_FUN_00556700 ; 00592a13
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00592a18
    TEST EAX,EAX                        ; 00592a1b
    JNZ 0x00592354                      ; 00592a1d
        ;   XREF to: 00592354 (CONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x5d90bd                       ; 00592a23 | = "mann_attack1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592a28
    PUSH EBX                            ; 00592a2e
    CALL dword ptr [EAX + 0x2c]         ; 00592a2f
    ADD ESP,0x8                         ; 00592a32
    MOV dword ptr [ESI + 0xdf38],EAX    ; 00592a35
    JMP 0x00592354                      ; 00592a3b
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    JBE 0x005926ba                      ; 00592a40
        ;   XREF to: 005926ba (CONDITIONAL_JUMP)  ; LAB_005926ba
        ;   Label: LAB_00592a40
    CMP EAX,0x44c                       ; 00592a46
    JZ 0x0059276f                       ; 00592a4b
        ;   XREF to: 0059276f (CONDITIONAL_JUMP)  ; LAB_0059276f
    JMP 0x00592354                      ; 00592a51
        ;   XREF to: 00592354 (UNCONDITIONAL_JUMP)  ; LAB_00592354
    PUSH 0x1                            ; 00592a56
        ;   Label: LAB_00592a56
    PUSH 0x0                            ; 00592a58
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00592a5a
    PUSH EDX                            ; 00592a5d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00592a5e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592a63
    PUSH EBX                            ; 00592a66
    MOV EAX,0x5d914a                    ; 00592a67 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00592a6c | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 00592a6d | g_CConsolePtr
    PUSH ECX                            ; 00592a73 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00592a74
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00592a79
    JMP 0x005923e4                      ; 00592a7c
        ;   XREF to: 005923e4 (UNCONDITIONAL_JUMP)  ; LAB_005923e4
    JBE 0x005923d6                      ; 00592a81
        ;   XREF to: 005923d6 (CONDITIONAL_JUMP)  ; LAB_005923d6
        ;   Label: LAB_00592a81
    CMP EAX,0x3                         ; 00592a87
    JZ 0x00592a56                       ; 00592a8a
        ;   XREF to: 00592a56 (CONDITIONAL_JUMP)  ; LAB_00592a56
    PUSH 0x1                            ; 00592a8c
        ;   Label: LAB_00592a8c
    PUSH 0x0                            ; 00592a8e
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00592a90
    PUSH ESI                            ; 00592a93
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00592a94
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592a99
    JMP 0x005923e4                      ; 00592a9c
        ;   XREF to: 005923e4 (UNCONDITIONAL_JUMP)  ; LAB_005923e4
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 00592aa1
        ;   Label: caseD_9
    JNZ 0x005923f9                      ; 00592aa8
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00592aae
    TEST EAX,EAX                        ; 00592ab4
    JNZ 0x005923f9                      ; 00592ab6
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EAX                            ; 00592abc
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00592abd
    PUSH EDX                            ; 00592ac0
    LEA ESI,[EBP + -0x1e]               ; 00592ac1
    LEA EDI,[EBP + 0xffffff5e]          ; 00592ac4
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00592aca
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00592acf
    LEA EAX,[EBP + 0xffffff5e]          ; 00592ad2
    LEA ESI,[EBP + -0x1e]               ; 00592ad8
    PUSH EAX                            ; 00592adb
    MOVSD ES:EDI,ESI                    ; 00592adc
    MOVSD ES:EDI,ESI                    ; 00592add
    MOVSD ES:EDI,ESI                    ; 00592ade
    PUSH EBX                            ; 00592adf
    LEA ESI,[EBP + 0xffffff76]          ; 00592ae0
    CALL core_actor.cpp_FUN_00408b80    ; 00592ae6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00592aeb
    PUSH 0x0                            ; 00592aee
    LEA EAX,[EBP + -0x6]                ; 00592af0
    LEA EDI,[EBP + -0x6]                ; 00592af3
    PUSH EAX                            ; 00592af6
    MOV ECX,dword ptr [0x005fed24]      ; 00592af7 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff76]          ; 00592afd
    PUSH ECX                            ; 00592b03
    MOVSD ES:EDI,ESI                    ; 00592b04
    MOVSD ES:EDI,ESI                    ; 00592b05
    MOVSD ES:EDI,ESI                    ; 00592b06
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00592b07
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00592b0c
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00592b0f
    JMP 0x005923f9                      ; 00592b19
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x01d5ba14]                ; 00592b1e | DAT_01d5ba14
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x66]      ; 00592b23
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592b26
    LEA EDI,[EBP + 0xfffffd72]          ; 00592b2d
    LEA ESI,[EBP + 0xfffffe1a]          ; 00592b33
    FLD float ptr [EAX + 0x24]          ; 00592b39
    FLD float ptr [EAX + 0x28]          ; 00592b3c
    FLD float ptr [EAX + 0x20]          ; 00592b3f
    LEA EAX,[EBP + 0xfffffe6e]          ; 00592b42
    FSUB float ptr [EDX]                ; 00592b48
    FXCH ST2                            ; 00592b4a
    FSUB float ptr [EDX + 0x4]          ; 00592b4c
    FXCH                                ; 00592b4f
    FSUB float ptr [EDX + 0x8]          ; 00592b51
    FXCH ST2                            ; 00592b54
    FSTP float ptr [EBP + 0xfffffe1a]   ; 00592b56
    FSTP float ptr [EBP + 0xfffffe1e]   ; 00592b5c
    FSTP float ptr [EBP + 0xfffffe22]   ; 00592b62
    LEA EDX,[EBP + 0xfffffd72]          ; 00592b68
    MOVSD ES:EDI,ESI                    ; 00592b6e
    MOVSD ES:EDI,ESI                    ; 00592b6f
    MOVSD ES:EDI,ESI                    ; 00592b70
    CMP EAX,EDX                         ; 00592b71
    JZ 0x00592b99                       ; 00592b73
        ;   XREF to: 00592b99 (CONDITIONAL_JUMP)  ; LAB_00592b99
    MOV EAX,dword ptr [EBP + 0xfffffd72] ; 00592b75
    MOV dword ptr [EBP + 0xfffffe6e],EAX ; 00592b7b
    MOV EAX,dword ptr [EBP + 0xfffffd76] ; 00592b81
    MOV dword ptr [EBP + 0xfffffe72],EAX ; 00592b87
    MOV EAX,dword ptr [EBP + 0xfffffd7a] ; 00592b8d
    MOV dword ptr [EBP + 0xfffffe76],EAX ; 00592b93
    FLD float ptr [EBX + 0xcde0]        ; 00592b99
        ;   Label: LAB_00592b99
    FLDZ                                ; 00592b9f
    FCOMPP                              ; 00592ba1
    FNSTSW AX                           ; 00592ba3
    SAHF                                ; 00592ba5
    JNC 0x00592bef                      ; 00592ba6
        ;   XREF to: 00592bef (CONDITIONAL_JUMP)  ; LAB_00592bef
    FLD float ptr [EBP + 0xfffffe72]    ; 00592ba8
    FMUL ST0                            ; 00592bae
    FLD float ptr [EBP + 0xfffffe6e]    ; 00592bb0
    FMUL ST0                            ; 00592bb6
    FADDP                               ; 00592bb8
    FLD float ptr [EBP + 0xfffffe76]    ; 00592bba
    FMUL ST0                            ; 00592bc0
    FADDP                               ; 00592bc2
    FSTP float ptr [EBP + 0xa]          ; 00592bc4
    MOV EAX,dword ptr [EBP + 0xa]       ; 00592bc7
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00592bca | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00592bd0
    ADD EAX,EDI                         ; 00592bd2
    MOV dword ptr [EBP + 0xe],EAX       ; 00592bd4
    FLD float ptr [EBP + 0xe]           ; 00592bd7
    FLD float ptr [0x005e7388]          ; 00592bda | DAT_005e7388
    FLD1                                ; 00592be0
    FADDP                               ; 00592be2
    FCOMPP                              ; 00592be4
    FNSTSW AX                           ; 00592be6
    SAHF                                ; 00592be8
    JA 0x005923f9                       ; 00592be9
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x01d5ba14]                ; 00592bef | DAT_01d5ba14
        ;   Label: LAB_00592bef
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592bf4
    PUSH EAX                            ; 00592bfb
    MOV EDX,dword ptr [EAX + 0x154]     ; 00592bfc
    CALL dword ptr [EDX + 0x10c]        ; 00592c02
    ADD ESP,0x4                         ; 00592c08
    TEST EAX,EAX                        ; 00592c0b
    JNZ 0x005923f9                      ; 00592c0d
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00592c13
    PUSH EBX                            ; 00592c19
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00592c1a
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00592c1f
    TEST EAX,EAX                        ; 00592c22
    JZ 0x00592c2f                       ; 00592c24
        ;   XREF to: 00592c2f (CONDITIONAL_JUMP)  ; LAB_00592c2f
    PUSH EBX                            ; 00592c26
    CALL core_mattnntt.cpp_FUN_00593a90 ; 00592c27
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 00592c2c
    PUSH dword ptr [EBP + 0x92]         ; 00592c2f
        ;   Label: LAB_00592c2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592c35
    PUSH EBX                            ; 00592c3b
    CALL dword ptr [EAX + 0x144]        ; 00592c3c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00592c42
    ADD ESP,0x8                         ; 00592c48
    TEST EAX,EAX                        ; 00592c4b
    JNZ 0x00592c94                      ; 00592c4d
        ;   XREF to: 00592c94 (CONDITIONAL_JUMP)  ; LAB_00592c94
    MOV EAX,[0x01d5ba14]                ; 00592c4f | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592c54
    PUSH EAX                            ; 00592c5b
    MOV EDX,dword ptr [EAX + 0x154]     ; 00592c5c
    CALL dword ptr [EDX + 0x10c]        ; 00592c62
    ADD ESP,0x4                         ; 00592c68
    TEST EAX,EAX                        ; 00592c6b
    JZ 0x005923f9                       ; 00592c6d
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x005fe9dc]                ; 00592c73 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00592c78 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d5ba14]                ; 00592c82 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592c87
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00592c8e
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00592c94
        ;   Label: LAB_00592c94
    JZ 0x005923f9                       ; 00592c9b
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBP + 0xfffffe6e]          ; 00592ca1
    LEA ESI,[EBP + 0xfffffdf6]          ; 00592ca7
    PUSH EAX                            ; 00592cad
    MOV dword ptr [EBX + 0xd0a8],0x0    ; 00592cae
    LEA EDI,[EBP + 0xfffffdae]          ; 00592cb8
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00592cbe
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffdf6]          ; 00592cc3
    MOVSD ES:EDI,ESI                    ; 00592cc9
    MOVSD ES:EDI,ESI                    ; 00592cca
    MOVSD ES:EDI,ESI                    ; 00592ccb
    ADD ESP,0x4                         ; 00592ccc
    FLD float ptr [EBP + 0xfffffdb2]    ; 00592ccf
    FSUB float ptr [EBX + 0x34]         ; 00592cd5
    SUB ESP,0x4                         ; 00592cd8
    FSTP float ptr [ESP]                ; 00592cdb
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00592cde
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00592ce3
    FLD float ptr [EBP + 0x76]          ; 00592ce6
    FABS                                ; 00592ce9
    ADD ESP,0x4                         ; 00592ceb
    FCOMP double ptr [0x005d91e3]       ; 00592cee | DAT_005d91e3
    FNSTSW AX                           ; 00592cf4
    SAHF                                ; 00592cf6
    JNC 0x00592da8                      ; 00592cf7
        ;   XREF to: 00592da8 (CONDITIONAL_JUMP)  ; LAB_00592da8
    FLD float ptr [EBX + 0xcde0]        ; 00592cfd
    FLDZ                                ; 00592d03
    FCOMPP                              ; 00592d05
    FNSTSW AX                           ; 00592d07
    SAHF                                ; 00592d09
    JC 0x00592da8                       ; 00592d0a
        ;   XREF to: 00592da8 (CONDITIONAL_JUMP)  ; LAB_00592da8
    FLD float ptr [EBP + 0xfffffe72]    ; 00592d10
    FMUL ST0                            ; 00592d16
    FLD float ptr [EBP + 0xfffffe6e]    ; 00592d18
    FMUL ST0                            ; 00592d1e
    FADDP                               ; 00592d20
    FLD float ptr [EBP + 0xfffffe76]    ; 00592d22
    FMUL ST0                            ; 00592d28
    FADDP                               ; 00592d2a
    FSTP float ptr [EBP + 0x12]         ; 00592d2c
    MOV EAX,dword ptr [EBP + 0x12]      ; 00592d2f
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00592d32 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00592d38
    ADD EAX,ECX                         ; 00592d3a
    MOV dword ptr [EBP + 0x16],EAX      ; 00592d3c
    FLD float ptr [EBP + 0x16]          ; 00592d3f
    FLD float ptr [0x005e7388]          ; 00592d42 | DAT_005e7388
    FLD1                                ; 00592d48
    FADDP                               ; 00592d4a
    FCOMPP                              ; 00592d4c
    FNSTSW AX                           ; 00592d4e
    SAHF                                ; 00592d50
    JBE 0x00592da8                      ; 00592d51
        ;   XREF to: 00592da8 (CONDITIONAL_JUMP)  ; LAB_00592da8
    PUSH 0x64                           ; 00592d53
    PUSH 0x0                            ; 00592d55
    MOV dword ptr [EBX + 0xd0a8],0x1    ; 00592d57
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00592d61
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00592d66
    CMP EAX,0x4b                        ; 00592d69
    JGE 0x00592d8d                      ; 00592d6c
        ;   XREF to: 00592d8d (CONDITIONAL_JUMP)  ; LAB_00592d8d
    PUSH 0x1                            ; 00592d6e
    PUSH 0x3                            ; 00592d70
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00592d72
    PUSH EAX                            ; 00592d75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00592d76
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00592d76
    ADD ESP,0xc                         ; 00592d7b
    MOV dword ptr [EBX + 0xcde0],0x40400000 ; 00592d7e
    JMP 0x005923f9                      ; 00592d88
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    JL 0x00592d9e                       ; 00592d8d
        ;   XREF to: 00592d9e (CONDITIONAL_JUMP)  ; LAB_00592d9e
        ;   Label: LAB_00592d8d
    CMP EAX,0x5a                        ; 00592d8f
    JG 0x00592d9e                       ; 00592d92
        ;   XREF to: 00592d9e (CONDITIONAL_JUMP)  ; LAB_00592d9e
    PUSH 0x1                            ; 00592d94
    PUSH 0x4                            ; 00592d96
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00592d98
    PUSH EDI                            ; 00592d9b
    JMP 0x00592d76                      ; 00592d9c
        ;   XREF to: 00592d76 (UNCONDITIONAL_JUMP)  ; LAB_00592d76
    PUSH 0x1                            ; 00592d9e
        ;   Label: LAB_00592d9e
    PUSH 0x5                            ; 00592da0
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00592da2
    PUSH ESI                            ; 00592da5
    JMP 0x00592d76                      ; 00592da6
        ;   XREF to: 00592d76 (UNCONDITIONAL_JUMP)  ; LAB_00592d76
    PUSH EBX                            ; 00592da8
        ;   Label: LAB_00592da8
    CALL core_mattnntt.cpp_FUN_00593a90 ; 00592da9
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 00592dae
    JMP 0x005923f9                      ; 00592db1
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x01d5ba14]                ; 00592db6 | DAT_01d5ba14
        ;   Label: caseD_1
    MOV EDX,dword ptr [EBP + 0x66]      ; 00592dbb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592dbe
    LEA EDI,[EBP + -0x42]               ; 00592dc5
    LEA ESI,[EBP + 0xfffffe26]          ; 00592dc8
    FLD float ptr [EAX + 0x24]          ; 00592dce
    FLD float ptr [EAX + 0x28]          ; 00592dd1
    FLD float ptr [EAX + 0x20]          ; 00592dd4
    LEA EAX,[EBP + 0xfffffe62]          ; 00592dd7
    FSUB float ptr [EDX]                ; 00592ddd
    FXCH ST2                            ; 00592ddf
    FSUB float ptr [EDX + 0x4]          ; 00592de1
    FXCH                                ; 00592de4
    FSUB float ptr [EDX + 0x8]          ; 00592de6
    FXCH ST2                            ; 00592de9
    FSTP float ptr [EBP + 0xfffffe26]   ; 00592deb
    FSTP float ptr [EBP + 0xfffffe2a]   ; 00592df1
    FSTP float ptr [EBP + 0xfffffe2e]   ; 00592df7
    LEA EDX,[EBP + -0x42]               ; 00592dfd
    MOVSD ES:EDI,ESI                    ; 00592e00
    MOVSD ES:EDI,ESI                    ; 00592e01
    MOVSD ES:EDI,ESI                    ; 00592e02
    CMP EAX,EDX                         ; 00592e03
    JZ 0x00592e22                       ; 00592e05
        ;   XREF to: 00592e22 (CONDITIONAL_JUMP)  ; LAB_00592e22
    MOV EAX,dword ptr [EBP + -0x42]     ; 00592e07
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 00592e0a
    MOV EAX,dword ptr [EBP + -0x3e]     ; 00592e10
    MOV dword ptr [EBP + 0xfffffe66],EAX ; 00592e13
    MOV EAX,dword ptr [EBP + -0x3a]     ; 00592e19
    MOV dword ptr [EBP + 0xfffffe6a],EAX ; 00592e1c
    FLD float ptr [EBX + 0xcde0]        ; 00592e22
        ;   Label: LAB_00592e22
    FLDZ                                ; 00592e28
    FCOMPP                              ; 00592e2a
    FNSTSW AX                           ; 00592e2c
    SAHF                                ; 00592e2e
    JNC 0x00592e82                      ; 00592e2f
        ;   XREF to: 00592e82 (CONDITIONAL_JUMP)  ; LAB_00592e82
    FLD float ptr [EBP + 0xfffffe66]    ; 00592e31
    FMUL ST0                            ; 00592e37
    FLD float ptr [EBP + 0xfffffe62]    ; 00592e39
    FMUL ST0                            ; 00592e3f
    FADDP                               ; 00592e41
    FLD float ptr [EBP + 0xfffffe6a]    ; 00592e43
    FMUL ST0                            ; 00592e49
    FADDP                               ; 00592e4b
    FSTP float ptr [EBP + 0x1a]         ; 00592e4d
    MOV EAX,dword ptr [EBP + 0x1a]      ; 00592e50
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00592e53 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00592e59
    ADD EAX,ECX                         ; 00592e5b
    MOV dword ptr [EBP + 0x1e],EAX      ; 00592e5d
    FLD float ptr [EBP + 0x1e]          ; 00592e60
    FLD float ptr [0x005e7388]          ; 00592e63 | DAT_005e7388
    FLD1                                ; 00592e69
    FADDP                               ; 00592e6b
    FCOMPP                              ; 00592e6d
    FNSTSW AX                           ; 00592e6f
    SAHF                                ; 00592e71
    JBE 0x00592e82                      ; 00592e72
        ;   XREF to: 00592e82 (CONDITIONAL_JUMP)  ; LAB_00592e82
    MOV ESI,dword ptr [EBX + 0xd0a8]    ; 00592e74
    TEST ESI,ESI                        ; 00592e7a
    JZ 0x00592f1d                       ; 00592e7c
        ;   XREF to: 00592f1d (CONDITIONAL_JUMP)  ; LAB_00592f1d
    PUSH dword ptr [EBP + 0x92]         ; 00592e82
        ;   Label: LAB_00592e82
    MOV EAX,dword ptr [EBX + 0x154]     ; 00592e88
    PUSH EBX                            ; 00592e8e
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00592e8f
    CALL dword ptr [EAX + 0x144]        ; 00592e95
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00592e9b
    ADD ESP,0x8                         ; 00592ea1
    TEST EDX,EDX                        ; 00592ea4
    JNZ 0x00592ee9                      ; 00592ea6
        ;   XREF to: 00592ee9 (CONDITIONAL_JUMP)  ; LAB_00592ee9
    MOV EAX,[0x01d5ba14]                ; 00592ea8 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592ead
    PUSH EAX                            ; 00592eb4
    MOV EDX,dword ptr [EAX + 0x154]     ; 00592eb5
    CALL dword ptr [EDX + 0x10c]        ; 00592ebb
    ADD ESP,0x4                         ; 00592ec1
    TEST EAX,EAX                        ; 00592ec4
    JZ 0x00592ee9                       ; 00592ec6
        ;   XREF to: 00592ee9 (CONDITIONAL_JUMP)  ; LAB_00592ee9
    MOV EAX,[0x005fe9dc]                ; 00592ec8 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00592ecd | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d5ba14]                ; 00592ed7 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00592edc
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00592ee3
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00592ee9
        ;   Label: LAB_00592ee9
    JNZ 0x00592f45                      ; 00592ef0
        ;   XREF to: 00592f45 (CONDITIONAL_JUMP)  ; LAB_00592f45
    PUSH dword ptr [EBP + 0x92]         ; 00592ef2
    PUSH EBX                            ; 00592ef8
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 00592ef9
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00592efe
    TEST EAX,EAX                        ; 00592f01
    JNZ 0x005923f9                      ; 00592f03
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00592f09
    PUSH EAX                            ; 00592f0b
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00592f0c
    PUSH ESI                            ; 00592f0f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00592f10
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592f15
    JMP 0x005923f9                      ; 00592f18
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x5d9174                       ; 00592f1d | = "Going to Stand\n"
        ;   Label: LAB_00592f1d
    MOV EDI,dword ptr [0x005f1690]      ; 00592f22 | g_CConsolePtr
    PUSH EDI                            ; 00592f28 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00592f29
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00592f2e
    PUSH 0x1                            ; 00592f31
    PUSH ESI                            ; 00592f33
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00592f34
    PUSH EAX                            ; 00592f37
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00592f38
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00592f3d
    JMP 0x005923f9                      ; 00592f40
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    TEST ESI,ESI                        ; 00592f45
        ;   Label: LAB_00592f45
    JNZ 0x00592f57                      ; 00592f47
        ;   XREF to: 00592f57 (CONDITIONAL_JUMP)  ; LAB_00592f57
    PUSH EBX                            ; 00592f49
    CALL core_mattnntt.cpp_FUN_00593a90 ; 00592f4a
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 00592f4f
    JMP 0x005923f9                      ; 00592f52
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBP + 0x62]      ; 00592f57
        ;   Label: LAB_00592f57
    MOV dword ptr [EAX + 0x8],0x0       ; 00592f5a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00592f61
    MOV dword ptr [EAX + 0x4],EDX       ; 00592f64
    MOV EDX,dword ptr [EAX + 0x4]       ; 00592f67
    MOV dword ptr [EAX],EDX             ; 00592f6a
    MOV ESI,dword ptr [EBX + 0xd08c]    ; 00592f6c
    TEST ESI,ESI                        ; 00592f72
    JZ 0x005930df                       ; 00592f74
        ;   XREF to: 005930df (CONDITIONAL_JUMP)  ; LAB_005930df
    FLD float ptr [EBX + 0xd094]        ; 00592f7a
    FLDZ                                ; 00592f80
    FCOMPP                              ; 00592f82
    FNSTSW AX                           ; 00592f84
    SAHF                                ; 00592f86
    JC 0x00593090                       ; 00592f87
        ;   XREF to: 00593090 (CONDITIONAL_JUMP)  ; LAB_00593090
    PUSH 0x40a00000                     ; 00592f8d
    PUSH 0xc0a00000                     ; 00592f92
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00592f97
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    ADD ESP,0x8                         ; 00592f9c
    PUSH 0x40a00000                     ; 00592f9f
    PUSH 0xc0a00000                     ; 00592fa4
    MOV dword ptr [EBP + 0x2a],EAX      ; 00592fa9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00592fac
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00592fb1
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00592fb4
    FLD float ptr [EBP + 0x76]          ; 00592fb7
    MOV EAX,dword ptr [EBP + 0x2a]      ; 00592fba
    FSTP float ptr [EBP + 0x4a]         ; 00592fbd
    MOV dword ptr [EBP + 0x2e],EAX      ; 00592fc0
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00592fc3
    ADD ESP,0x8                         ; 00592fc6
    MOV dword ptr [EBP + -0x5a],EAX     ; 00592fc9
    MOV EAX,dword ptr [EBP + 0x2e]      ; 00592fcc
    XOR ECX,ECX                         ; 00592fcf
    MOV dword ptr [EBP + -0x52],EAX     ; 00592fd1
    LEA EAX,[EBP + -0x5a]               ; 00592fd4
    MOV dword ptr [EBP + -0x56],ECX     ; 00592fd7
    CMP EAX,ESI                         ; 00592fda
    JZ 0x00592fef                       ; 00592fdc
        ;   XREF to: 00592fef (CONDITIONAL_JUMP)  ; LAB_00592fef
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00592fde
    MOV dword ptr [ESI],EAX             ; 00592fe1
    MOV EAX,dword ptr [EBP + -0x56]     ; 00592fe3
    MOV dword ptr [ESI + 0x4],EAX       ; 00592fe6
    MOV EAX,dword ptr [EBP + -0x52]     ; 00592fe9
    MOV dword ptr [ESI + 0x8],EAX       ; 00592fec
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00592fef
        ;   Label: LAB_00592fef
    FLD float ptr [EAX + 0x4]           ; 00592ff2
    FMUL ST0                            ; 00592ff5
    FLD float ptr [EAX]                 ; 00592ff7
    FMUL ST0                            ; 00592ff9
    FADDP                               ; 00592ffb
    FLD float ptr [EAX + 0x8]           ; 00592ffd
    FMUL ST0                            ; 00593000
    FADDP                               ; 00593002
    FSQRT                               ; 00593004
    FLDZ                                ; 00593006
    FXCH                                ; 00593008
    FSTP float ptr [EBP + 0x46]         ; 0059300a
    FCOMP float ptr [EBP + 0x46]        ; 0059300d
    FNSTSW AX                           ; 00593010
    SAHF                                ; 00593012
    JNC 0x005930c5                      ; 00593013
        ;   XREF to: 005930c5 (CONDITIONAL_JUMP)  ; LAB_005930c5
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00593019
    FLD1                                ; 0059301c
    FLD float ptr [EAX]                 ; 0059301e
    FXCH                                ; 00593020
    FDIV float ptr [EBP + 0x46]         ; 00593022
    FXCH                                ; 00593025
    FMUL ST1                            ; 00593027
    FLD float ptr [EAX + 0x4]           ; 00593029
    FMUL ST2                            ; 0059302c
    FLD float ptr [EAX + 0x8]           ; 0059302e
    FMULP ST3                           ; 00593031
    FXCH                                ; 00593033
    FSTP float ptr [EAX]                ; 00593035
    FSTP float ptr [EAX + 0x4]          ; 00593037
    FSTP float ptr [EAX + 0x8]          ; 0059303a
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059303d
        ;   Label: LAB_0059303d
    FLD float ptr [0x005d91d7]          ; 00593040 | DAT_005d91d7
    FLD float ptr [EAX]                 ; 00593046
    FMUL ST1                            ; 00593048
    FLD float ptr [EAX + 0x4]           ; 0059304a
    FMUL ST2                            ; 0059304d
    FLD float ptr [EAX + 0x8]           ; 0059304f
    FMULP ST3                           ; 00593052
    FXCH                                ; 00593054
    FSTP float ptr [EAX]                ; 00593056
    FSTP float ptr [EAX + 0x4]          ; 00593058
    FSTP float ptr [EAX + 0x8]          ; 0059305b
    MOV EAX,[0x01d5ba14]                ; 0059305e | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00593063
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0059306a
    FLD float ptr [EAX + 0x20]          ; 0059306d
    FADD float ptr [EDX]                ; 00593070
    FSTP float ptr [EDX]                ; 00593072
    FLD float ptr [EAX + 0x24]          ; 00593074
    FADD float ptr [EDX + 0x4]          ; 00593077
    FSTP float ptr [EDX + 0x4]          ; 0059307a
    FLD float ptr [EAX + 0x28]          ; 0059307d
    FADD float ptr [EDX + 0x8]          ; 00593080
    FSTP float ptr [EDX + 0x8]          ; 00593083
    MOV dword ptr [EBX + 0xd094],0x3f800000 ; 00593086
    PUSH 0x0                            ; 00593090
        ;   Label: LAB_00593090
    LEA EAX,[EBP + 0xfffffe32]          ; 00593092
    PUSH 0x3e4ccccd                     ; 00593098
    PUSH EAX                            ; 0059309d
    XOR EDI,EDI                         ; 0059309e
    PUSH EDI                            ; 005930a0
    MOV ECX,dword ptr [EBP + 0x6e]      ; 005930a1
    PUSH ECX                            ; 005930a4
    MOV dword ptr [EBP + 0xfffffe32],EDI ; 005930a5
    PUSH EBX                            ; 005930ab
    MOV dword ptr [EBP + 0xfffffe36],EDI ; 005930ac
    MOV dword ptr [EBP + 0xfffffe3a],EDI ; 005930b2
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 005930b8
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005930bd
    JMP 0x005923f9                      ; 005930c0
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005930c5
        ;   Label: LAB_005930c5
    MOV dword ptr [EAX + 0x8],0x0       ; 005930c8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005930cf
    MOV dword ptr [EAX + 0x4],EDX       ; 005930d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 005930d5
    MOV dword ptr [EAX],EDX             ; 005930d8
    JMP 0x0059303d                      ; 005930da
        ;   XREF to: 0059303d (UNCONDITIONAL_JUMP)  ; LAB_0059303d
    PUSH 0x3eb2b8c2                     ; 005930df
        ;   Label: LAB_005930df
    PUSH 0x3e4ccccd                     ; 005930e4
    MOV EDX,dword ptr [0x005e7388]      ; 005930e9 | DAT_005e7388
    MOV EAX,[0x01d5ba14]                ; 005930ef | DAT_01d5ba14
    MOV dword ptr [EBP + -0x2e],EDX     ; 005930f4
    LEA EDX,[EBP + -0x36]               ; 005930f7
    MOV dword ptr [EBP + -0x36],ESI     ; 005930fa
    PUSH EDX                            ; 005930fd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005930fe
    MOV dword ptr [EBP + -0x32],ESI     ; 00593105
    PUSH EAX                            ; 00593108
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593109
    CALL dword ptr [EDX + 0xc4]         ; 0059310f
    ADD ESP,0x4                         ; 00593115
    PUSH EAX                            ; 00593118
    MOV EAX,[0x01d5ba14]                ; 00593119 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059311e
    ADD EAX,0x20                        ; 00593125
    PUSH EAX                            ; 00593128
    PUSH EBX                            ; 00593129
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0059312a
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0059312f
    TEST EAX,EAX                        ; 00593132
    JL 0x00593220                       ; 00593134
        ;   XREF to: 00593220 (CONDITIONAL_JUMP)  ; LAB_00593220
    JLE 0x005923f9                      ; 0059313a
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBP + 0x66]      ; 00593140
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00593143
    LEA EDI,[EBP + 0xfffffeb6]          ; 00593149
    LEA ESI,[EBP + 0xfffffefe]          ; 0059314f
    FLD float ptr [EAX + 0x24]          ; 00593155
    FLD float ptr [EAX + 0x28]          ; 00593158
    FLD float ptr [EAX + 0x20]          ; 0059315b
    LEA EAX,[EBP + 0xfffffeb6]          ; 0059315e
    FSUB float ptr [EDX]                ; 00593164
    FXCH ST2                            ; 00593166
    FSUB float ptr [EDX + 0x4]          ; 00593168
    FXCH                                ; 0059316b
    FSUB float ptr [EDX + 0x8]          ; 0059316d
    FXCH ST2                            ; 00593170
    FSTP float ptr [EBP + 0xfffffefe]   ; 00593172
    FSTP float ptr [EBP + 0xffffff02]   ; 00593178
    FSTP float ptr [EBP + 0xffffff06]   ; 0059317e
    MOVSD ES:EDI,ESI                    ; 00593184
    MOVSD ES:EDI,ESI                    ; 00593185
    MOVSD ES:EDI,ESI                    ; 00593186
    PUSH EAX                            ; 00593187
    LEA ESI,[EBP + 0xfffffee6]          ; 00593188
    LEA EDI,[EBP + 0xfffffec2]          ; 0059318e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 00593194
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffee6]          ; 00593199
    MOVSD ES:EDI,ESI                    ; 0059319f
    MOVSD ES:EDI,ESI                    ; 005931a0
    MOVSD ES:EDI,ESI                    ; 005931a1
    ADD ESP,0x4                         ; 005931a2
    FLD float ptr [EBP + 0xfffffec6]    ; 005931a5
    FSUB float ptr [EBX + 0x34]         ; 005931ab
    SUB ESP,0x4                         ; 005931ae
    FSTP float ptr [ESP]                ; 005931b1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 005931b4
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 005931b9
    FLD float ptr [EBP + 0x76]          ; 005931bc
    FABS                                ; 005931bf
    ADD ESP,0x4                         ; 005931c1
    FCOMP double ptr [0x005d91e3]       ; 005931c4 | DAT_005d91e3
    FNSTSW AX                           ; 005931ca
    SAHF                                ; 005931cc
    JNC 0x005923f9                      ; 005931cd
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBX + 0xcde0]        ; 005931d3
    FLDZ                                ; 005931d9
    FCOMPP                              ; 005931db
    FNSTSW AX                           ; 005931dd
    SAHF                                ; 005931df
    JC 0x005923f9                       ; 005931e0
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x64                           ; 005931e6
    PUSH 0x0                            ; 005931e8
    MOV dword ptr [EBX + 0xd0a8],0x1    ; 005931ea
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005931f4
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005931f9
    CMP EAX,0x4b                        ; 005931fc
    JGE 0x00593248                      ; 005931ff
        ;   XREF to: 00593248 (CONDITIONAL_JUMP)  ; LAB_00593248
    PUSH 0x1                            ; 00593201
    PUSH 0x3                            ; 00593203
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00593205
    PUSH EDI                            ; 00593208
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00593209
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00593209
    ADD ESP,0xc                         ; 0059320e
    MOV dword ptr [EBX + 0xcde0],0x40400000 ; 00593211
    JMP 0x005923f9                      ; 0059321b
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH EBX                            ; 00593220
        ;   Label: LAB_00593220
    PUSH 0x5d9184                       ; 00593221 | = "%s gave up chase - I'm confused\n"
    MOV EAX,[0x005f1690]                ; 00593226 | g_CConsolePtr
    PUSH EAX                            ; 0059322b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0059322c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00593231
    PUSH 0x1                            ; 00593234
    PUSH ESI                            ; 00593236
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00593237
    PUSH EDX                            ; 0059323a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059323b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00593240
    JMP 0x005923f9                      ; 00593243
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    JL 0x00593259                       ; 00593248
        ;   XREF to: 00593259 (CONDITIONAL_JUMP)  ; LAB_00593259
        ;   Label: LAB_00593248
    CMP EAX,0x5a                        ; 0059324a
    JG 0x00593259                       ; 0059324d
        ;   XREF to: 00593259 (CONDITIONAL_JUMP)  ; LAB_00593259
    PUSH 0x1                            ; 0059324f
    PUSH 0x4                            ; 00593251
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00593253
    PUSH ESI                            ; 00593256
    JMP 0x00593209                      ; 00593257
        ;   XREF to: 00593209 (UNCONDITIONAL_JUMP)  ; LAB_00593209
    PUSH 0x1                            ; 00593259
        ;   Label: LAB_00593259
    PUSH 0x5                            ; 0059325b
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0059325d
    PUSH ECX                            ; 00593260
    JMP 0x00593209                      ; 00593261
        ;   XREF to: 00593209 (UNCONDITIONAL_JUMP)  ; LAB_00593209
    PUSH dword ptr [EBP + 0x92]         ; 00593263
        ;   Label: caseD_6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00593269
    PUSH EBX                            ; 0059326f
    CALL dword ptr [EAX + 0x144]        ; 00593270
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00593276
    ADD ESP,0x8                         ; 0059327c
    TEST ESI,ESI                        ; 0059327f
    JNZ 0x005923f9                      ; 00593281
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EBX                            ; 00593287
    CALL core_mattnntt.cpp_FUN_00593a90 ; 00593288
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 0059328d
    JMP 0x005923f9                      ; 00593290
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00593295
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059329b
    PUSH EBX                            ; 005932a1
    CALL dword ptr [EAX + 0x144]        ; 005932a2
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 005932a8
    ADD ESP,0x8                         ; 005932ae
    TEST EDI,EDI                        ; 005932b1
    JNZ 0x005932c3                      ; 005932b3
        ;   XREF to: 005932c3 (CONDITIONAL_JUMP)  ; LAB_005932c3
    PUSH EBX                            ; 005932b5
    CALL core_mattnntt.cpp_FUN_00593a90 ; 005932b6
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 005932bb
    JMP 0x005923f9                      ; 005932be
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBP + 0x66]      ; 005932c3
        ;   Label: LAB_005932c3
    LEA EDI,[EBP + 0xffffff6a]          ; 005932c6
    LEA ESI,[EBP + 0xfffffd7e]          ; 005932cc
    MOV EAX,[0x01d5ba14]                ; 005932d2 | DAT_01d5ba14
    FLD float ptr [EDX + 0x4]           ; 005932d7
    FLD float ptr [EDX + 0x8]           ; 005932da
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005932dd
    FLD float ptr [EDX]                 ; 005932e4
    LEA EDX,[EBP + 0xffffff3a]          ; 005932e6
    FSUB float ptr [EAX + 0x20]         ; 005932ec
    FXCH ST2                            ; 005932ef
    FSUB float ptr [EAX + 0x24]         ; 005932f1
    FXCH                                ; 005932f4
    FSUB float ptr [EAX + 0x28]         ; 005932f6
    FXCH ST2                            ; 005932f9
    FSTP float ptr [EBP + 0xfffffd7e]   ; 005932fb
    FSTP float ptr [EBP + 0xfffffd82]   ; 00593301
    FSTP float ptr [EBP + 0xfffffd86]   ; 00593307
    LEA EAX,[EBP + 0xffffff6a]          ; 0059330d
    MOVSD ES:EDI,ESI                    ; 00593313
    MOVSD ES:EDI,ESI                    ; 00593314
    MOVSD ES:EDI,ESI                    ; 00593315
    CMP EDX,EAX                         ; 00593316
    JZ 0x0059333e                       ; 00593318
        ;   XREF to: 0059333e (CONDITIONAL_JUMP)  ; LAB_0059333e
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 0059331a
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 00593320
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 00593326
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 0059332c
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 00593332
    MOV dword ptr [EBP + 0xffffff42],EAX ; 00593338
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0059333e
        ;   Label: LAB_0059333e
    PUSH EAX                            ; 00593341
    CALL core_motion.cpp_FUN_004fc930   ; 00593342
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00593347
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059334a
    MOV dword ptr [EBP + 0x52],EAX      ; 0059334d
    MOV EDX,dword ptr [EBP + 0x52]      ; 00593350
    ADD ESP,0x4                         ; 00593353
    CMP EDX,0x40400000                  ; 00593356
    JL 0x005923f9                       ; 0059335c
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    CMP EDX,0x40800000                  ; 00593362
    JG 0x005923f9                       ; 00593368
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x2                            ; 0059336e
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00593370
    PUSH EAX                            ; 00593376
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593377
    CALL dword ptr [EDX + 0x78]         ; 0059337d
    ADD ESP,0x8                         ; 00593380
    JMP 0x005923f9                      ; 00593383
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00593388
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059338e
    PUSH EBX                            ; 00593394
    CALL dword ptr [EAX + 0x144]        ; 00593395
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0059339b
    ADD ESP,0x8                         ; 005933a1
    TEST ESI,ESI                        ; 005933a4
    JNZ 0x005933b6                      ; 005933a6
        ;   XREF to: 005933b6 (CONDITIONAL_JUMP)  ; LAB_005933b6
    PUSH EBX                            ; 005933a8
    CALL core_mattnntt.cpp_FUN_00593a90 ; 005933a9
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 005933ae
    JMP 0x005923f9                      ; 005933b1
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBP + 0x66]      ; 005933b6
        ;   Label: LAB_005933b6
    LEA EDI,[EBP + 0xfffffef2]          ; 005933b9
    LEA ESI,[EBP + 0xfffffd96]          ; 005933bf
    MOV EAX,[0x01d5ba14]                ; 005933c5 | DAT_01d5ba14
    FLD float ptr [EDX]                 ; 005933ca
    FLD float ptr [EDX + 0x4]           ; 005933cc
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005933cf
    FLD float ptr [EDX + 0x8]           ; 005933d6
    FXCH ST2                            ; 005933d9
    FSUB float ptr [EAX + 0x20]         ; 005933db
    FXCH                                ; 005933de
    FSUB float ptr [EAX + 0x24]         ; 005933e0
    FXCH ST2                            ; 005933e3
    FSUB float ptr [EAX + 0x28]         ; 005933e5
    FXCH                                ; 005933e8
    FSTP float ptr [EBP + 0xfffffd96]   ; 005933ea
    FXCH                                ; 005933f0
    FSTP float ptr [EBP + 0xfffffd9a]   ; 005933f2
    FSTP float ptr [EBP + 0xfffffd9e]   ; 005933f8
    MOVSD ES:EDI,ESI                    ; 005933fe
    MOVSD ES:EDI,ESI                    ; 005933ff
    MOVSD ES:EDI,ESI                    ; 00593400
    LEA EAX,[EBP + 0xfffffef2]          ; 00593401
    LEA ESI,[EBP + 0xfffffece]          ; 00593407
    CMP ESI,EAX                         ; 0059340d
    JZ 0x00593435                       ; 0059340f
        ;   XREF to: 00593435 (CONDITIONAL_JUMP)  ; LAB_00593435
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 00593411
    MOV dword ptr [EBP + 0xfffffece],EAX ; 00593417
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 0059341d
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 00593423
    MOV EAX,dword ptr [EBP + 0xfffffefa] ; 00593429
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 0059342f
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00593435
        ;   Label: LAB_00593435
    PUSH EDI                            ; 00593438
    CALL core_motion.cpp_FUN_004fc930   ; 00593439
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059343e
    MOV EAX,dword ptr [EBP + 0x76]      ; 00593441
    MOV dword ptr [EBP + 0x56],EAX      ; 00593444
    MOV EDX,dword ptr [EBP + 0x56]      ; 00593447
    ADD ESP,0x4                         ; 0059344a
    CMP EDX,0x3f800000                  ; 0059344d
    JL 0x005923f9                       ; 00593453
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBP + 0x56]          ; 00593459
    FCOMP float ptr [0x005d91d3]        ; 0059345c | DAT_005d91d3
    FNSTSW AX                           ; 00593462
    SAHF                                ; 00593464
    JA 0x005923f9                       ; 00593465
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x2                            ; 0059346b
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0059346d
    PUSH EAX                            ; 00593473
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593474
    CALL dword ptr [EDX + 0x78]         ; 0059347a
    ADD ESP,0x8                         ; 0059347d
    JMP 0x005923f9                      ; 00593480
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00593485
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059348b
    PUSH EBX                            ; 00593491
    CALL dword ptr [EAX + 0x144]        ; 00593492
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00593498
    ADD ESP,0x8                         ; 0059349e
    TEST ESI,ESI                        ; 005934a1
    JNZ 0x005934b3                      ; 005934a3
        ;   XREF to: 005934b3 (CONDITIONAL_JUMP)  ; LAB_005934b3
    PUSH EBX                            ; 005934a5
    CALL core_mattnntt.cpp_FUN_00593a90 ; 005934a6
        ;   XREF to: 00593a90 (UNCONDITIONAL_CALL)  ; undefined core_mattnntt.cpp_FUN_00593a90()
    ADD ESP,0x4                         ; 005934ab
    JMP 0x005923f9                      ; 005934ae
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBP + 0x66]      ; 005934b3
        ;   Label: LAB_005934b3
    LEA EDI,[EBP + 0xfffffe92]          ; 005934b6
    LEA ESI,[EBP + 0xfffffe4a]          ; 005934bc
    MOV EAX,[0x01d5ba14]                ; 005934c2 | DAT_01d5ba14
    FLD float ptr [EDX + 0x4]           ; 005934c7
    FLD float ptr [EDX + 0x8]           ; 005934ca
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 005934cd
    FLD float ptr [EDX]                 ; 005934d4
    LEA EDX,[EBP + 0xfffffe92]          ; 005934d6
    FSUB float ptr [EAX + 0x20]         ; 005934dc
    FXCH ST2                            ; 005934df
    FSUB float ptr [EAX + 0x24]         ; 005934e1
    FXCH                                ; 005934e4
    FSUB float ptr [EAX + 0x28]         ; 005934e6
    FXCH ST2                            ; 005934e9
    FSTP float ptr [EBP + 0xfffffe4a]   ; 005934eb
    FSTP float ptr [EBP + 0xfffffe4e]   ; 005934f1
    FSTP float ptr [EBP + 0xfffffe52]   ; 005934f7
    LEA EAX,[EBP + 0xfffffe56]          ; 005934fd
    MOVSD ES:EDI,ESI                    ; 00593503
    MOVSD ES:EDI,ESI                    ; 00593504
    MOVSD ES:EDI,ESI                    ; 00593505
    CMP EAX,EDX                         ; 00593506
    JZ 0x0059352e                       ; 00593508
        ;   XREF to: 0059352e (CONDITIONAL_JUMP)  ; LAB_0059352e
    MOV EAX,dword ptr [EBP + 0xfffffe92] ; 0059350a
    MOV dword ptr [EBP + 0xfffffe56],EAX ; 00593510
    MOV EAX,dword ptr [EBP + 0xfffffe96] ; 00593516
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 0059351c
    MOV EAX,dword ptr [EBP + 0xfffffe9a] ; 00593522
    MOV dword ptr [EBP + 0xfffffe5e],EAX ; 00593528
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0059352e
        ;   Label: LAB_0059352e
    PUSH EDI                            ; 00593531
    CALL core_motion.cpp_FUN_004fc930   ; 00593532
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00593537
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059353a
    MOV dword ptr [EBP + 0x4e],EAX      ; 0059353d
    MOV EDX,dword ptr [EBP + 0x4e]      ; 00593540
    ADD ESP,0x4                         ; 00593543
    CMP EDX,0x40400000                  ; 00593546
    JL 0x005923f9                       ; 0059354c
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    CMP EDX,0x40800000                  ; 00593552
    JG 0x005923f9                       ; 00593558
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x2                            ; 0059355e
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00593560
    PUSH EAX                            ; 00593566
    MOV ESI,dword ptr [EAX + 0x154]     ; 00593567
    CALL dword ptr [ESI + 0x78]         ; 0059356d
    ADD ESP,0x8                         ; 00593570
    JMP 0x005923f9                      ; 00593573
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x01d5ba14]                ; 00593578 | DAT_01d5ba14
        ;   Label: caseD_d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059357d
    PUSH EAX                            ; 00593584
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593585
    CALL dword ptr [EDX + 0x10c]        ; 0059358b
    ADD ESP,0x4                         ; 00593591
    TEST EAX,EAX                        ; 00593594
    JZ 0x005935d1                       ; 00593596
        ;   XREF to: 005935d1 (CONDITIONAL_JUMP)  ; caseD_e
    MOV ECX,dword ptr [EBP + 0x6a]      ; 00593598
    PUSH ECX                            ; 0059359b
    CALL core_motion.cpp_FUN_004fc930   ; 0059359c
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 005935a1
    ADD ESP,0x4                         ; 005935a4
    FLD float ptr [EBP + 0x76]          ; 005935a7
    FCOMP double ptr [0x005d91db]       ; 005935aa | DAT_005d91db
    FNSTSW AX                           ; 005935b0
    SAHF                                ; 005935b2
    JBE 0x005923f9                      ; 005935b3
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x0                            ; 005935b9
    PUSH 0x5d91a5                       ; 005935bb | = "stand"
    MOV ESI,dword ptr [EBP + 0x6a]      ; 005935c0
    PUSH ESI                            ; 005935c3
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0 ; 005935c4
        ;   XREF to: 004fc3f0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005935c9
    JMP 0x005923f9                      ; 005935cc
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xd068]    ; 005935d1
        ;   Label: caseD_e
    TEST EAX,EAX                        ; 005935d7
    JNZ 0x005923f9                      ; 005935d9
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x40000000                     ; 005935df
    PUSH EAX                            ; 005935e4
    PUSH 0x42480000                     ; 005935e5
    PUSH EAX                            ; 005935ea
    PUSH EAX                            ; 005935eb
    MOV EDX,dword ptr [EBP + 0x66]      ; 005935ec
    PUSH EDX                            ; 005935ef
    MOV dword ptr [EBX + 0xd068],0x1    ; 005935f0
    PUSH EBX                            ; 005935fa
    MOV dword ptr [EBX + 0xd064],EAX    ; 005935fb
    CALL core_charactr.cpp_FUN_0042fbd0 ; 00593601
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    ADD ESP,0x1c                        ; 00593606
    JMP 0x005923f9                      ; 00593609
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ESI,dword ptr [EBX + 0xd068]    ; 0059360e
        ;   Label: caseD_f
    CMP ESI,0x1                         ; 00593614
    JNZ 0x005923f9                      ; 00593617
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x40000000                     ; 0059361d
    PUSH EAX                            ; 00593622
    PUSH 0x42480000                     ; 00593623
    PUSH EAX                            ; 00593628
    PUSH EAX                            ; 00593629
    MOV EDI,dword ptr [EBP + 0x66]      ; 0059362a
    PUSH EDI                            ; 0059362d
    MOV dword ptr [EBX + 0xd064],EAX    ; 0059362e
    PUSH EBX                            ; 00593634
    MOV dword ptr [EBX + 0xd068],EAX    ; 00593635
    CALL core_charactr.cpp_FUN_0042fbd0 ; 0059363b
        ;   XREF to: 0042fbd0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fbd0()
    MOV dword ptr [EBX + 0xd090],0x40800000 ; 00593640
    ADD ESP,0x1c                        ; 0059364a
    MOV dword ptr [EBX + 0xd08c],ESI    ; 0059364d
    JMP 0x005923f9                      ; 00593653
        ;   XREF to: 005923f9 (UNCONDITIONAL_JUMP)  ; caseD_c
    CMP ESI,0xf                         ; 00593658
        ;   Label: LAB_00593658
    JA 0x005923f9                       ; 0059365b
        ;   XREF to: 005923f9 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [ESI*0x4 + 0x591ee4]  ; 00593661 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    CMP dword ptr [EBX + 0xd0a4],0x0    ; 00593668
        ;   Label: LAB_00593668
    JNZ 0x0059243e                      ; 0059366f
        ;   XREF to: 0059243e (CONDITIONAL_JUMP)  ; LAB_0059243e
    PUSH 0x1                            ; 00593675
    PUSH 0xd                            ; 00593677
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00593679
    PUSH EAX                            ; 0059367c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059367d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00593682
    MOV dword ptr [EBX + 0xd0a4],0x1    ; 00593685
    JMP 0x0059243e                      ; 0059368f
        ;   XREF to: 0059243e (UNCONDITIONAL_JUMP)  ; LAB_0059243e
    PUSH EBX                            ; 00593694
        ;   Label: LAB_00593694
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00593695
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059369a
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0059369d
    PUSH EAX                            ; 005936a0
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005936a1
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005936a6
    PUSH dword ptr [EBP + 0x92]         ; 005936a9
    PUSH EBX                            ; 005936af
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005936b0
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005936b5
    MOV EDX,dword ptr [0x02d0c150]      ; 005936b8 | g_CWeaponClassInfo.name_hash
    PUSH EDX                            ; 005936be
    MOV ECX,dword ptr [EBX + 0x2628]    ; 005936bf
    PUSH ECX                            ; 005936c5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005936c6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005936cb
    TEST EAX,EAX                        ; 005936ce
    JNZ 0x005936da                      ; 005936d0
        ;   XREF to: 005936da (CONDITIONAL_JUMP)  ; LAB_005936da
    LEA ESP,[EBP + 0x7a]                ; 005936d2
        ;   Label: LAB_005936d2
    POP EBP                             ; 005936d5
    POP EDI                             ; 005936d6
    POP ESI                             ; 005936d7
    POP EBX                             ; 005936d8
    RET                                 ; 005936d9
    PUSH dword ptr [EBP + 0x92]         ; 005936da
        ;   Label: LAB_005936da
    MOV EDX,dword ptr [EAX + 0x154]     ; 005936e0
    PUSH EAX                            ; 005936e6
    CALL dword ptr [EDX + 0xc]          ; 005936e7
    ADD ESP,0x8                         ; 005936ea
    LEA ESP,[EBP + 0x7a]                ; 005936ed
    POP EBP                             ; 005936f0
    POP EDI                             ; 005936f1
    POP ESI                             ; 005936f2
    POP EBX                             ; 005936f3
    RET                                 ; 005936f4

