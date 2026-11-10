; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_process_FUN_00588ee0(CZombie *this_ptr,float delta_time)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00588e80 = 0058a37d
;   TerminatedCString s_CHASE_2_005d84ff
;   TerminatedCString s_ghoul_eat_wav_005d8507
;   TerminatedCString s_s_picked_up_s_using_hand_005d8517
;   TerminatedCString s_core_zombie_cpp_005d8536
;   undefined4 DAT_005d8549
;   TerminatedCString s_s_lugging_s_005d854e
;   TerminatedCString s_zom_h0_wav_005d855d
;   TerminatedCString s_core_zombie_cpp_005d8569
;   undefined4 DAT_005d857c
;   TerminatedCString s_s_tossing_s_005d8581
;   TerminatedCString s_zom_h0_wav_005d8590
;   TerminatedCString s_ghoul_eat_wav_005d859c
;   undefined4 s_ghoul_eat_wav_005d859c+1
;   undefined4 s_ghoul_eat_wav_005d859c+2
;   ... and 50 more
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588ee0
        ;   Label: core_zombie.cpp_CZombie_process_FUN_00588ee0
    PUSH ESI                            ; 00588ee1
    PUSH EDI                            ; 00588ee2
    PUSH EBP                            ; 00588ee3
    MOV EBP,ESP                         ; 00588ee4
    SUB ESP,0x5b4                       ; 00588ee6
    SUB EBP,0x7a                        ; 00588eec
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00588eef
    FLD float ptr [EBX + 0x3254]        ; 00588ef5
    FLDZ                                ; 00588efb
    FCOMPP                              ; 00588efd
    FNSTSW AX                           ; 00588eff
    SAHF                                ; 00588f01
    JNC 0x00588f1d                      ; 00588f02
        ;   XREF to: 00588f1d (CONDITIONAL_JUMP)  ; LAB_00588f1d
    CMP dword ptr [EBX + 0x3258],0x0    ; 00588f04
    JNZ 0x00588f1d                      ; 00588f0b
        ;   XREF to: 00588f1d (CONDITIONAL_JUMP)  ; LAB_00588f1d
    PUSH EBX                            ; 00588f0d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00588f0e
    CALL dword ptr [EAX + 0xf8]         ; 00588f14
    ADD ESP,0x4                         ; 00588f1a
    PUSH dword ptr [EBP + 0x92]         ; 00588f1d
        ;   Label: LAB_00588f1d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00588f23
    PUSH EBX                            ; 00588f29
    CALL dword ptr [EAX + 0x148]        ; 00588f2a
    ADD ESP,0x8                         ; 00588f30
    TEST EAX,EAX                        ; 00588f33
    JZ 0x00589052                       ; 00588f35
        ;   XREF to: 00589052 (CONDITIONAL_JUMP)  ; LAB_00589052
    XOR ECX,ECX                         ; 00588f3b
    PUSH ECX                            ; 00588f3d
    PUSH 0x5d84ff                       ; 00588f3e | = "CHASE_2"
    LEA EAX,[EBX + 0x158]               ; 00588f43
    PUSH EAX                            ; 00588f49
    MOV dword ptr [EBP + 0x12],ECX      ; 00588f4a
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 00588f4d
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00588f52
    PUSH EAX                            ; 00588f55
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50 ; 00588f56
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findStateIndex_FUN_004fba50(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00588f5b
    CMP EAX,0x2                         ; 00588f5e
    JNZ 0x00588f6a                      ; 00588f61
        ;   XREF to: 00588f6a (CONDITIONAL_JUMP)  ; LAB_00588f6a
    MOV dword ptr [EBP + 0x12],0x1      ; 00588f63
    MOV EDI,dword ptr [EBX + 0x26fc]    ; 00588f6a
        ;   Label: LAB_00588f6a
    TEST EDI,EDI                        ; 00588f70
    JNZ 0x00589004                      ; 00588f72
        ;   XREF to: 00589004 (CONDITIONAL_JUMP)  ; LAB_00589004
    FLD float ptr [EBX + 0xd130]        ; 00588f78
    FLDZ                                ; 00588f7e
    FCOMPP                              ; 00588f80
    FNSTSW AX                           ; 00588f82
    SAHF                                ; 00588f84
    JC 0x00589068                       ; 00588f85
        ;   XREF to: 00589068 (CONDITIONAL_JUMP)  ; LAB_00589068
    FLD float ptr [EBP + 0x92]          ; 00588f8b
        ;   Label: LAB_00588f8b
    LEA EAX,[EBX + 0x158]               ; 00588f91
    FMUL float ptr [EBX + 0xcdcc]       ; 00588f97
    MOV dword ptr [EBP + -0x36],EAX     ; 00588f9d
    LEA EAX,[EBP + 0xfffffbbe]          ; 00588fa0
    ADD EAX,0xc                         ; 00588fa6
    MOV dword ptr [EBP + -0x12],EAX     ; 00588fa9
    LEA EAX,[EBP + 0xfffffb5e]          ; 00588fac
    ADD EAX,0xc                         ; 00588fb2
    FSTP float ptr [EBP + 0x36]         ; 00588fb5
    MOV dword ptr [EBP + -0x6],EAX      ; 00588fb8
    FLD float ptr [EBP + 0x36]          ; 00588fbb
        ;   Label: LAB_00588fbb
    FLDZ                                ; 00588fbe
    FCOMPP                              ; 00588fc0
    FNSTSW AX                           ; 00588fc2
    SAHF                                ; 00588fc4
    JNC 0x00589a3b                      ; 00588fc5
        ;   XREF to: 00589a3b (CONDITIONAL_JUMP)  ; LAB_00589a3b
    LEA EAX,[EBP + 0x36]                ; 00588fcb
    PUSH EAX                            ; 00588fce
    MOV ESI,dword ptr [EBP + -0x36]     ; 00588fcf
    PUSH ESI                            ; 00588fd2
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00588fd3
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00588fd8
    MOV ESI,EAX                         ; 00588fdb
    CMP EAX,0xb                         ; 00588fdd
    JNC 0x005899de                      ; 00588fe0
        ;   XREF to: 005899de (CONDITIONAL_JUMP)  ; LAB_005899de
    CMP EAX,0x5                         ; 00588fe6
    JNC 0x00589a1d                      ; 00588fe9
        ;   XREF to: 00589a1d (CONDITIONAL_JUMP)  ; LAB_00589a1d
    CMP EAX,0x2                         ; 00588fef
    JZ 0x005893fc                       ; 00588ff2
        ;   XREF to: 005893fc (CONDITIONAL_JUMP)  ; LAB_005893fc
    PUSH ESI                            ; 00588ff8
    PUSH EBX                            ; 00588ff9
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00588ffa
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00588fff
    JMP 0x00588fbb                      ; 00589002
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EAX,dword ptr [EDI + 0x154]     ; 00589004
        ;   Label: LAB_00589004
    PUSH 0x0                            ; 0058900a
    MOV dword ptr [EBP + 0x76],EAX      ; 0058900c
    LEA EAX,[EBX + 0x158]               ; 0058900f
    PUSH EAX                            ; 00589015
    LEA ESI,[EBP + 0xfffffe2e]          ; 00589016
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0058901c
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00589021
    LEA EAX,[EBP + 0xfffffdfe]          ; 00589024
    PUSH EAX                            ; 0058902a
    MOV dword ptr [EBP + 0x3a],EDI      ; 0058902b
    LEA EDI,[EBP + 0xfffffdfe]          ; 0058902e
    PUSH EBX                            ; 00589034
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00589035
    LEA ESI,[EBP + 0xfffffe2e]          ; 00589038
    PUSH EAX                            ; 0058903e
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058903f
    MOVSD ES:EDI,ESI                    ; 00589042
    MOVSD ES:EDI,ESI                    ; 00589043
    MOVSD ES:EDI,ESI                    ; 00589044
    CALL dword ptr [EAX + 0x110]        ; 00589045
    ADD ESP,0xc                         ; 0058904b
    TEST EAX,EAX                        ; 0058904e
    JZ 0x0058905a                       ; 00589050
        ;   XREF to: 0058905a (CONDITIONAL_JUMP)  ; LAB_0058905a
    LEA ESP,[EBP + 0x7a]                ; 00589052
        ;   Label: LAB_00589052
    POP EBP                             ; 00589055
    POP EDI                             ; 00589056
    POP ESI                             ; 00589057
    POP EBX                             ; 00589058
    RET                                 ; 00589059
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0058905a
        ;   Label: LAB_0058905a
    LEA ESP,[EBP + 0x7a]                ; 00589060
    POP EBP                             ; 00589063
    POP EDI                             ; 00589064
    POP ESI                             ; 00589065
    POP EBX                             ; 00589066
    RET                                 ; 00589067
    FLD float ptr [EBX + 0xd130]        ; 00589068
        ;   Label: LAB_00589068
    FSUB float ptr [EBP + 0x92]         ; 0058906e
    FSTP float ptr [EBX + 0xd130]       ; 00589074
    JMP 0x00588f8b                      ; 0058907a
        ;   XREF to: 00588f8b (UNCONDITIONAL_JUMP)  ; LAB_00588f8b
    MOV ESI,0x1                         ; 0058907f
        ;   Label: LAB_0058907f
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00589084
    MOV dword ptr [EBP + -0x16],ESI     ; 0058908a
    TEST EDI,EDI                        ; 0058908d
    JNZ 0x005890a6                      ; 0058908f
        ;   XREF to: 005890a6 (CONDITIONAL_JUMP)  ; LAB_005890a6
    PUSH 0x1                            ; 00589091
        ;   Label: LAB_00589091
    PUSH 0x0                            ; 00589093
    MOV EAX,dword ptr [EBP + -0x36]     ; 00589095
    PUSH EAX                            ; 00589098
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00589099
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058909e
    JMP 0x00588fbb                      ; 005890a1
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EAX,[0x005e6778]                ; 005890a6 | DAT_005e6778
        ;   Label: LAB_005890a6
    MOV dword ptr [EBP + -0xe],EAX      ; 005890ab
    XOR EAX,EAX                         ; 005890ae
    MOV dword ptr [EBP + 0xfffffdc2],EAX ; 005890b0
    MOV dword ptr [EBP + 0xfffffdc6],EAX ; 005890b6
    MOV EAX,dword ptr [EBP + -0xe]      ; 005890bc
    MOV dword ptr [EBP + 0xfffffdca],EAX ; 005890bf
    LEA EAX,[EBP + 0xfffffdc2]          ; 005890c5
    PUSH EAX                            ; 005890cb
    PUSH EBX                            ; 005890cc
    LEA ESI,[EBP + 0xfffffdaa]          ; 005890cd
    LEA EDI,[EBP + 0xfffffe9a]          ; 005890d3
    CALL core_actor.cpp_FUN_00408b80    ; 005890d9
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffdaa]          ; 005890de
    MOVSD ES:EDI,ESI                    ; 005890e4
    MOVSD ES:EDI,ESI                    ; 005890e5
    MOVSD ES:EDI,ESI                    ; 005890e6
    FLD float ptr [EBP + 0xfffffe9a]    ; 005890e7
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005890ed
    FLD float ptr [EBP + 0xfffffe9e]    ; 005890f3
    FXCH                                ; 005890f9
    FSUB float ptr [EAX + 0x20]         ; 005890fb
    FLD float ptr [EBP + 0xfffffea2]    ; 005890fe
    FXCH                                ; 00589104
    FSTP float ptr [EBP + 0xffffff42]   ; 00589106
    FXCH                                ; 0058910c
    FSUB float ptr [EAX + 0x24]         ; 0058910e
    LEA EDI,[EBP + 0xfffffee2]          ; 00589111
    FSTP float ptr [EBP + 0xffffff46]   ; 00589117
    FSUB float ptr [EAX + 0x28]         ; 0058911d
    LEA ESI,[EBP + 0xffffff42]          ; 00589120
    FSTP float ptr [EBP + 0xffffff4a]   ; 00589126
    MOVSD ES:EDI,ESI                    ; 0058912c
    MOVSD ES:EDI,ESI                    ; 0058912d
    MOVSD ES:EDI,ESI                    ; 0058912e
    FLD float ptr [EBP + 0xfffffee2]    ; 0058912f
    FMUL ST0                            ; 00589135
    FLD float ptr [EBP + 0xfffffeea]    ; 00589137
    FMUL ST0                            ; 0058913d
    FADDP                               ; 0058913f
    FSQRT                               ; 00589141
    XOR ECX,ECX                         ; 00589143
    ADD ESP,0x8                         ; 00589145
    MOV dword ptr [EBP + 0xfffffee6],ECX ; 00589148
    FLD1                                ; 0058914e
    FCOMPP                              ; 00589150
    FNSTSW AX                           ; 00589152
    SAHF                                ; 00589154
    JC 0x00589091                       ; 00589155
        ;   XREF to: 00589091 (CONDITIONAL_JUMP)  ; LAB_00589091
    MOV EDI,0x40800000                  ; 0058915b
    LEA EAX,[EBP + 0xffffff4e]          ; 00589160
    LEA ESI,[EBP + 0xfffffcba]          ; 00589166
    PUSH EAX                            ; 0058916c
    MOV dword ptr [EBP + 0xffffff4e],ECX ; 0058916d
    MOV dword ptr [EBP + 0xffffff56],ECX ; 00589173
    PUSH EBX                            ; 00589179
    MOV dword ptr [EBP + 0xffffff52],EDI ; 0058917a
    LEA EDI,[EBP + 0xfffffe52]          ; 00589180
    CALL core_actor.cpp_FUN_00408b80    ; 00589186
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffcba]          ; 0058918b
    MOVSD ES:EDI,ESI                    ; 00589191
    MOVSD ES:EDI,ESI                    ; 00589192
    MOVSD ES:EDI,ESI                    ; 00589193
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00589194
    MOV EDX,dword ptr [0x00603b28]      ; 0058919a | g_CDemonSetPtr
    LEA EDI,[EBP + 0xfffffd4a]          ; 005891a0
    LEA ESI,[ESI + 0x20]                ; 005891a6
    ADD ESP,0x8                         ; 005891a9
    MOV EAX,dword ptr [EBP + 0xfffffe56] ; 005891ac
    MOVSD ES:EDI,ESI                    ; 005891b2
    MOVSD ES:EDI,ESI                    ; 005891b3
    MOVSD ES:EDI,ESI                    ; 005891b4
    PUSH EDX                            ; 005891b5 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xfffffd4e],EAX ; 005891b6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005891bc
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005891c1
    PUSH EBX                            ; 005891c4
    MOV ECX,dword ptr [0x00603b28]      ; 005891c5 | g_CDemonSetPtr
    PUSH ECX                            ; 005891cb | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005891cc
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005891d1
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005891d4
    PUSH ESI                            ; 005891da
    MOV EDI,dword ptr [0x00603b28]      ; 005891db | g_CDemonSetPtr
    PUSH EDI                            ; 005891e1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 005891e2
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005891e7
    LEA EAX,[EBP + 0xfffffd4a]          ; 005891ea
    PUSH EAX                            ; 005891f0
    LEA EAX,[EBP + 0xfffffe52]          ; 005891f1
    PUSH EAX                            ; 005891f7
    MOV EAX,[0x00603b28]                ; 005891f8 | g_CDemonSetPtr
    PUSH EAX                            ; 005891fd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 005891fe
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00589203
    TEST EAX,EAX                        ; 00589206
    JZ 0x0058920f                       ; 00589208
        ;   XREF to: 0058920f (CONDITIONAL_JUMP)  ; LAB_0058920f
    XOR EDX,EDX                         ; 0058920a
    MOV dword ptr [EBP + -0x16],EDX     ; 0058920c
    MOV ECX,dword ptr [0x00603b28]      ; 0058920f | g_CDemonSetPtr
        ;   Label: LAB_0058920f
    PUSH ECX                            ; 00589215 | g_CDemonSetInstance
    MOV ESI,dword ptr [EBP + -0x16]     ; 00589216
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00589219
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058921e
    TEST ESI,ESI                        ; 00589221
    JZ 0x00589246                       ; 00589223
        ;   XREF to: 00589246 (CONDITIONAL_JUMP)  ; LAB_00589246
    PUSH 0x0                            ; 00589225
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00589227
    PUSH EBX                            ; 0058922d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0058922e
    PUSH EAX                            ; 00589234
    CALL dword ptr [ESI + 0xec]         ; 00589235
    ADD ESP,0xc                         ; 0058923b
    TEST EAX,EAX                        ; 0058923e
    JZ 0x00589091                       ; 00589240
        ;   XREF to: 00589091 (CONDITIONAL_JUMP)  ; LAB_00589091
    CMP dword ptr [EBP + -0x16],0x0     ; 00589246
        ;   Label: LAB_00589246
    JNZ 0x00588fbb                      ; 0058924a
        ;   XREF to: 00588fbb (CONDITIONAL_JUMP)  ; LAB_00588fbb
    JMP 0x00589091                      ; 00589250
        ;   XREF to: 00589091 (UNCONDITIONAL_JUMP)  ; LAB_00589091
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00589255
        ;   Label: LAB_00589255
    JNZ 0x0058926c                      ; 0058925c
        ;   XREF to: 0058926c (CONDITIONAL_JUMP)  ; LAB_0058926c
    PUSH EBX                            ; 0058925e
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058925f
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00589264
    JMP 0x00588fbb                      ; 00589267
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 0058926c
        ;   Label: LAB_0058926c
    PUSH ESI                            ; 00589272
    MOV EDI,dword ptr [EBP + -0x36]     ; 00589273
    PUSH EDI                            ; 00589276
    LEA ESI,[EBP + -0x5e]               ; 00589277
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0058927a
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA EDI,[EBP + 0xfffffdda]          ; 0058927f
    ADD ESP,0x8                         ; 00589285
    LEA EAX,[EBP + 0xfffffdda]          ; 00589288
    LEA ESI,[EBP + -0x5e]               ; 0058928e
    PUSH EAX                            ; 00589291
    MOVSD ES:EDI,ESI                    ; 00589292
    MOVSD ES:EDI,ESI                    ; 00589293
    MOVSD ES:EDI,ESI                    ; 00589294
    PUSH EBX                            ; 00589295
    LEA ESI,[EBP + 0xfffffcf6]          ; 00589296
    LEA EDI,[EBP + 0xffffff12]          ; 0058929c
    CALL core_actor.cpp_FUN_00408b80    ; 005892a2
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffcf6]          ; 005892a7
    MOVSD ES:EDI,ESI                    ; 005892ad
    MOVSD ES:EDI,ESI                    ; 005892ae
    MOVSD ES:EDI,ESI                    ; 005892af
    MOV EAX,dword ptr [EBX + 0xd124]    ; 005892b0
    ADD ESP,0x8                         ; 005892b6
    TEST EAX,EAX                        ; 005892b9
    JL 0x005892e5                       ; 005892bb
        ;   XREF to: 005892e5 (CONDITIONAL_JUMP)  ; LAB_005892e5
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005892bd
    PUSH EAX                            ; 005892c3
    MOV ESI,dword ptr [EAX + 0x154]     ; 005892c4
    CALL dword ptr [ESI + 0xf4]         ; 005892ca
    ADD ESP,0x4                         ; 005892d0
    CMP EAX,EBX                         ; 005892d3
    JZ 0x0058931e                       ; 005892d5
        ;   XREF to: 0058931e (CONDITIONAL_JUMP)  ; LAB_0058931e
    PUSH EBX                            ; 005892d7
    CALL core_zombie.cpp_FUN_0058cc20   ; 005892d8
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005892dd
    JMP 0x00588fbb                      ; 005892e0
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005892e5
        ;   Label: LAB_005892e5
    FLD float ptr [EBP + 0xffffff12]    ; 005892eb
    FSUB float ptr [EAX + 0x20]         ; 005892f1
    FMUL ST0                            ; 005892f4
    FLD float ptr [EBP + 0xffffff1a]    ; 005892f6
    FSUB float ptr [EAX + 0x28]         ; 005892fc
    FMUL ST0                            ; 005892ff
    FADDP                               ; 00589301
    FSQRT                               ; 00589303
    FCOMP double ptr [0x005d8737]       ; 00589305 | DAT_005d8737
    FNSTSW AX                           ; 0058930b
    SAHF                                ; 0058930d
    JBE 0x0058931e                      ; 0058930e
        ;   XREF to: 0058931e (CONDITIONAL_JUMP)  ; LAB_0058931e
    PUSH EBX                            ; 00589310
    CALL core_zombie.cpp_FUN_0058cc20   ; 00589311
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00589316
    JMP 0x00588fbb                      ; 00589319
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    LEA EAX,[EBP + 0xfffffb02]          ; 0058931e
        ;   Label: LAB_0058931e
    PUSH EAX                            ; 00589324
    LEA EDI,[EBP + 0xfffffb02]          ; 00589325
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0058932b
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 00589330
    ADD ESP,0x4                         ; 00589336
    MOV dword ptr [EBP + 0xfffffb06],EAX ; 00589339
    MOV dword ptr [EBP + 0xfffffb36],EBX ; 0058933f
    MOV dword ptr [EBP + 0xfffffb3a],EBX ; 00589345
    PUSH EDI                            ; 0058934b
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058934c
    PUSH EAX                            ; 00589352
    MOV ESI,dword ptr [EAX + 0x154]     ; 00589353
    CALL dword ptr [ESI + 0x108]        ; 00589359
    FLD float ptr [EBP + 0xfffffb06]    ; 0058935f
    FLDZ                                ; 00589365
    ADD ESP,0x8                         ; 00589367
    FXCH                                ; 0058936a
    FSTP double ptr [EBP + -0x52]       ; 0058936c
    FCOMP double ptr [EBP + -0x52]      ; 0058936f
    FNSTSW AX                           ; 00589372
    SAHF                                ; 00589374
    JNC 0x005893ac                      ; 00589375
        ;   XREF to: 005893ac (CONDITIONAL_JUMP)  ; LAB_005893ac
    FLD double ptr [EBP + -0x52]        ; 00589377
    FMUL double ptr [0x005d8707]        ; 0058937a | DAT_005d8707
    FMUL double ptr [0x005d870f]        ; 00589380 | DAT_005d870f
    PUSH 0x0                            ; 00589386
    CALL crt_math.c_round_FUN_005a3120  ; 00589388
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + -0x3a]       ; 0058938d
    MOV EDX,dword ptr [EBP + -0x3a]     ; 00589390
    PUSH EDX                            ; 00589393
    PUSH 0x0                            ; 00589394
    LEA EAX,[EBP + 0xffffff12]          ; 00589396
    PUSH EAX                            ; 0058939c
    MOV ECX,dword ptr [0x005fed24]      ; 0058939d | g_CGorePtr
    PUSH ECX                            ; 005893a3
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 005893a4
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005893a9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005893ac
        ;   Label: LAB_005893ac
    PUSH EAX                            ; 005893b2
    MOV ESI,dword ptr [EAX + 0x154]     ; 005893b3
    CALL dword ptr [ESI + 0x10c]        ; 005893b9
    ADD ESP,0x4                         ; 005893bf
    TEST EAX,EAX                        ; 005893c2
    JLE 0x005893e5                      ; 005893c4
        ;   XREF to: 005893e5 (CONDITIONAL_JUMP)  ; LAB_005893e5
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 005893c6
    PUSH EAX                            ; 005893cc
    MOV ESI,dword ptr [EAX + 0x154]     ; 005893cd
    CALL dword ptr [ESI + 0xf0]         ; 005893d3
    ADD ESP,0x4                         ; 005893d9
    PUSH EBX                            ; 005893dc
    CALL core_zombie.cpp_FUN_0058cc20   ; 005893dd
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 005893e2
    PUSH 0x5d8507                       ; 005893e5 | = "ghoul-eat-?.wav"
        ;   Label: LAB_005893e5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005893ea
    PUSH EBX                            ; 005893f0
    CALL dword ptr [EAX + 0x2c]         ; 005893f1
    ADD ESP,0x8                         ; 005893f4
    JMP 0x00588fbb                      ; 005893f7
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EDX,dword ptr [EBX + 0xd064]    ; 005893fc
        ;   Label: LAB_005893fc
    TEST EDX,EDX                        ; 00589402
    JZ 0x00588fbb                       ; 00589404
        ;   XREF to: 00588fbb (CONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV ECX,dword ptr [EBX + 0xd068]    ; 0058940a
    PUSH ECX                            ; 00589410
    PUSH EBX                            ; 00589411
    MOV ESI,EDX                         ; 00589412
    MOV dword ptr [EBX + 0xd064],0x0    ; 00589414
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 0058941e
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00589423
    MOV EDI,EAX                         ; 00589426
    TEST EAX,EAX                        ; 00589428
    JL 0x00588fbb                       ; 0058942a
        ;   XREF to: 00588fbb (CONDITIONAL_JUMP)  ; LAB_00588fbb
    PUSH 0x0                            ; 00589430
    PUSH 0x3e4ccccd                     ; 00589432
    PUSH ESI                            ; 00589437
    PUSH EAX                            ; 00589438
    PUSH EBX                            ; 00589439
    CALL core_charactr.cpp_FUN_004319d0 ; 0058943a
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 0058943f
    PUSH EDI                            ; 00589442
    PUSH ESI                            ; 00589443
    PUSH EBX                            ; 00589444
    MOV EAX,0x5d8517                    ; 00589445 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 0058944a | = "%s picked up %s using hand %d\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0058944b | g_CConsolePtr
    PUSH ESI                            ; 00589451 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00589452
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x14                        ; 00589457
    JMP 0x00588fbb                      ; 0058945a
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    PUSH 0x2                            ; 0058945f
        ;   Label: LAB_0058945f
    PUSH EBX                            ; 00589461
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 00589462
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00589467
    MOV ESI,EAX                         ; 0058946a
    TEST EAX,EAX                        ; 0058946c
    JL 0x005894e6                       ; 0058946e
        ;   XREF to: 005894e6 (CONDITIONAL_JUMP)  ; LAB_005894e6
    IMUL EAX,ESI,0x78                   ; 00589470
        ;   Label: LAB_00589470
    ADD EAX,EBX                         ; 00589473
    MOV EDI,dword ptr [EAX + 0x25b0]    ; 00589475
    TEST EDI,EDI                        ; 0058947b
    JZ 0x00588fbb                       ; 0058947d
        ;   XREF to: 00588fbb (CONDITIONAL_JUMP)  ; LAB_00588fbb
    PUSH EDI                            ; 00589483
    PUSH EBX                            ; 00589484
    PUSH 0x5d854e                       ; 00589485 | = "%s lugging %s\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0058948a | g_CConsolePtr
    PUSH ECX                            ; 00589490 | g_CConsoleInstance
    XOR EDI,EDI                         ; 00589491
    CALL engine_console.cpp_FUN_00441ff0 ; 00589493
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EAX,0x40c00000                  ; 00589498
    ADD ESP,0x10                        ; 0058949d
    MOV dword ptr [EBP + 0xfffffce2],EAX ; 005894a0
    LEA EAX,[EBP + 0xfffffcde]          ; 005894a6
    MOV EDX,0x41880000                  ; 005894ac
    PUSH EAX                            ; 005894b1
    MOV dword ptr [EBP + 0xfffffcde],EDI ; 005894b2
    MOV dword ptr [EBP + 0xfffffce6],EDX ; 005894b8
    PUSH ESI                            ; 005894be
    MOV EDI,dword ptr [EBX + 0x154]     ; 005894bf
    PUSH EBX                            ; 005894c5
    CALL dword ptr [EDI + 0x128]        ; 005894c6
    ADD ESP,0xc                         ; 005894cc
    PUSH 0x5d855d                       ; 005894cf | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005894d4
    PUSH EBX                            ; 005894da
    CALL dword ptr [EAX + 0x2c]         ; 005894db
    ADD ESP,0x8                         ; 005894de
    JMP 0x00588fbb                      ; 005894e1
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EDX,0x5d8536                    ; 005894e6 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005894e6
    MOV ECX,0x21b                       ; 005894eb
    PUSH 0x5d8549                       ; 005894f0 | DAT_005d8549
    MOV dword ptr [0x01d71de0],EDX      ; 005894f5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 005894fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00589501
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00589506
    JMP 0x00589470                      ; 00589509
        ;   XREF to: 00589470 (UNCONDITIONAL_JUMP)  ; LAB_00589470
    PUSH 0x3                            ; 0058950e
        ;   Label: LAB_0058950e
    PUSH EBX                            ; 00589510
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 00589511
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 00589516
    MOV dword ptr [EBP + 0xe],EAX       ; 00589519
    TEST EAX,EAX                        ; 0058951c
    JL 0x005895f7                       ; 0058951e
        ;   XREF to: 005895f7 (CONDITIONAL_JUMP)  ; LAB_005895f7
    IMUL EAX,dword ptr [EBP + 0xe],0x78 ; 00589524
        ;   Label: LAB_00589524
    LEA EDX,[EBX + EAX*0x1]             ; 00589528
    MOV dword ptr [EBP + -0x32],EDX     ; 0058952b
    CMP dword ptr [EDX + 0x25b0],0x0    ; 0058952e
    JZ 0x00588fbb                       ; 00589535
        ;   XREF to: 00588fbb (CONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV EAX,dword ptr [EBP + -0x32]     ; 0058953b
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0058953e
    PUSH ECX                            ; 00589544
    PUSH EBX                            ; 00589545
    PUSH 0x5d8581                       ; 00589546 | = "%s tossing %s\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0058954b | g_CConsolePtr
    PUSH ESI                            ; 00589551 | g_CConsoleInstance
    XOR EDI,EDI                         ; 00589552
    CALL engine_console.cpp_FUN_00441ff0 ; 00589554
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EDX,0x3f800000                  ; 00589559
    MOV dword ptr [EBP + 0xfffffe82],EDI ; 0058955e
    MOV dword ptr [EBP + 0xfffffe86],EDI ; 00589564
    MOV dword ptr [EBP + 0xfffffe8a],EDX ; 0058956a
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00589570
    ADD ESP,0x10                        ; 00589576
    TEST ECX,ECX                        ; 00589579
    JNZ 0x0058961f                      ; 0058957b
        ;   XREF to: 0058961f (CONDITIONAL_JUMP)  ; LAB_0058961f
    FLD float ptr [0x005d8703]          ; 00589581 | DAT_005d8703
        ;   Label: LAB_00589581
    FLD float ptr [EBP + 0xfffffe82]    ; 00589587
    FMUL ST1                            ; 0058958d
    FLD float ptr [EBP + 0xfffffe86]    ; 0058958f
    FMUL ST2                            ; 00589595
    FLD float ptr [EBP + 0xfffffe8a]    ; 00589597
    LEA EAX,[EBP + 0xfffffe82]          ; 0058959d
    FMULP ST3                           ; 005895a3
    PUSH EAX                            ; 005895a5
    FXCH                                ; 005895a6
    FSTP float ptr [EBP + 0xfffffe82]   ; 005895a8
    FSTP float ptr [EBP + 0xfffffe86]   ; 005895ae
    FSTP float ptr [EBP + 0xfffffe8a]   ; 005895b4
    MOV EAX,dword ptr [EBP + 0xe]       ; 005895ba
    FLD float ptr [EBP + 0xfffffe86]    ; 005895bd
    PUSH EAX                            ; 005895c3
    FADD float ptr [0x005d8727]         ; 005895c4 | DAT_005d8727
    PUSH EBX                            ; 005895ca
    FSTP float ptr [EBP + 0xfffffe86]   ; 005895cb
    MOV ESI,dword ptr [EBX + 0x154]     ; 005895d1
    CALL dword ptr [ESI + 0x128]        ; 005895d7
    ADD ESP,0xc                         ; 005895dd
    PUSH 0x5d8590                       ; 005895e0 | = "zom-h0?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005895e5
    PUSH EBX                            ; 005895eb
    CALL dword ptr [EAX + 0x2c]         ; 005895ec
    ADD ESP,0x8                         ; 005895ef
    JMP 0x00588fbb                      ; 005895f2
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV ECX,0x5d8569                    ; 005895f7 | = "..\\core\\zombie.cpp"
        ;   Label: LAB_005895f7
    MOV ESI,0x232                       ; 005895fc
    PUSH 0x5d857c                       ; 00589601 | DAT_005d857c
    MOV dword ptr [0x01d71de0],ECX      ; 00589606 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0058960c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00589612
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00589617
    JMP 0x00589524                      ; 0058961a
        ;   XREF to: 00589524 (UNCONDITIONAL_JUMP)  ; LAB_00589524
    MOV EAX,dword ptr [EBP + -0x32]     ; 0058961f
        ;   Label: LAB_0058961f
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 00589622
    PUSH EAX                            ; 00589628
    MOV EDI,dword ptr [EAX + 0x154]     ; 00589629
    LEA ESI,[EBP + 0xfffffbd6]          ; 0058962f
    CALL dword ptr [EDI + 0x1c]         ; 00589635
    MOV ECX,0x6                         ; 00589638
    LEA EDI,[EBP + 0xfffffbbe]          ; 0058963d
    LEA ESI,[EBP + 0xfffffbd6]          ; 00589643
    MOVSD.REP ES:EDI,ESI                ; 00589649
    MOV EAX,dword ptr [EBP + -0x12]     ; 0058964b
    FLD float ptr [EBP + 0xfffffbc2]    ; 0058964e
    FLD float ptr [EBP + 0xfffffbbe]    ; 00589654
    FADD float ptr [EAX]                ; 0058965a
    FLD float ptr [EBP + 0xfffffbc6]    ; 0058965c
    FXCH                                ; 00589662
    FSTP float ptr [EBP + 0xfffffeee]   ; 00589664
    FXCH                                ; 0058966a
    FADD float ptr [EAX + 0x4]          ; 0058966c
    LEA EDI,[EBP + 0xfffffc42]          ; 0058966f
    FSTP float ptr [EBP + 0xfffffef2]   ; 00589675
    FADD float ptr [EAX + 0x8]          ; 0058967b
    LEA ESI,[EBP + 0xfffffeee]          ; 0058967e
    FSTP float ptr [EBP + 0xfffffef6]   ; 00589684
    MOVSD ES:EDI,ESI                    ; 0058968a
    MOVSD ES:EDI,ESI                    ; 0058968b
    MOVSD ES:EDI,ESI                    ; 0058968c
    FLD float ptr [EBP + 0xfffffc42]    ; 0058968d
    FMUL float ptr [0x005d86ff]         ; 00589693 | DAT_005d86ff
    FLD float ptr [EBP + 0xfffffc46]    ; 00589699
    FMUL float ptr [0x005d86ff]         ; 0058969f | DAT_005d86ff
    ADD ESP,0x4                         ; 005896a5
    LEA EAX,[EBP + 0xffffff66]          ; 005896a8
    FLD float ptr [EBP + 0xfffffc4a]    ; 005896ae
    FMUL float ptr [0x005d86ff]         ; 005896b4 | DAT_005d86ff
    PUSH EAX                            ; 005896ba
    LEA EDI,[EBP + 0xffffff66]          ; 005896bb
    LEA ESI,[EBP + 0xfffffe6a]          ; 005896c1
    MOV EAX,dword ptr [EBP + -0x32]     ; 005896c7
    FXCH ST2                            ; 005896ca
    FSTP float ptr [EBP + 0xfffffe6a]   ; 005896cc
    FSTP float ptr [EBP + 0xfffffe6e]   ; 005896d2
    FSTP float ptr [EBP + 0xfffffe72]   ; 005896d8
    MOVSD ES:EDI,ESI                    ; 005896de
    MOVSD ES:EDI,ESI                    ; 005896df
    MOVSD ES:EDI,ESI                    ; 005896e0
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 005896e1
    PUSH ESI                            ; 005896e7
    LEA ESI,[EBP + 0xffffff06]          ; 005896e8
    LEA EDI,[EBP + 0xfffffe46]          ; 005896ee
    CALL core_actor.cpp_FUN_00408b80    ; 005896f4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff06]          ; 005896f9
    MOVSD ES:EDI,ESI                    ; 005896ff
    MOVSD ES:EDI,ESI                    ; 00589700
    MOVSD ES:EDI,ESI                    ; 00589701
    ADD ESP,0x8                         ; 00589702
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00589705
    PUSH EAX                            ; 0058970b
    MOV EDI,dword ptr [EAX + 0x154]     ; 0058970c
    LEA ESI,[EBP + 0xfffffb8e]          ; 00589712
    CALL dword ptr [EDI + 0x1c]         ; 00589718
    MOV ECX,0x6                         ; 0058971b
    LEA EDI,[EBP + 0xfffffb5e]          ; 00589720
    LEA ESI,[EBP + 0xfffffb8e]          ; 00589726
    MOVSD.REP ES:EDI,ESI                ; 0058972c
    MOV EAX,dword ptr [EBP + -0x6]      ; 0058972e
    FLD float ptr [EBP + 0xfffffb62]    ; 00589731
    FLD float ptr [EBP + 0xfffffb5e]    ; 00589737
    FADD float ptr [EAX]                ; 0058973d
    FLD float ptr [EBP + 0xfffffb66]    ; 0058973f
    FXCH                                ; 00589745
    FSTP float ptr [EBP + 0xfffffdb6]   ; 00589747
    FXCH                                ; 0058974d
    FADD float ptr [EAX + 0x4]          ; 0058974f
    LEA EDI,[EBP + 0xfffffed6]          ; 00589752
    FSTP float ptr [EBP + 0xfffffdba]   ; 00589758
    FADD float ptr [EAX + 0x8]          ; 0058975e
    LEA ESI,[EBP + 0xfffffdb6]          ; 00589761
    FSTP float ptr [EBP + 0xfffffdbe]   ; 00589767
    MOVSD ES:EDI,ESI                    ; 0058976d
    MOVSD ES:EDI,ESI                    ; 0058976e
    MOVSD ES:EDI,ESI                    ; 0058976f
    FLD float ptr [EBP + 0xfffffed6]    ; 00589770
    FMUL float ptr [0x005d86ff]         ; 00589776 | DAT_005d86ff
    FLD float ptr [EBP + 0xfffffeda]    ; 0058977c
    FMUL float ptr [0x005d86ff]         ; 00589782 | DAT_005d86ff
    FLD float ptr [EBP + 0xfffffede]    ; 00589788
    FMUL float ptr [0x005d86ff]         ; 0058978e | DAT_005d86ff
    ADD ESP,0x4                         ; 00589794
    LEA EAX,[EBP + 0xfffffde6]          ; 00589797
    LEA EDI,[EBP + 0xfffffde6]          ; 0058979d
    LEA ESI,[EBP + 0xffffff1e]          ; 005897a3
    FXCH ST2                            ; 005897a9
    FSTP float ptr [EBP + 0xffffff1e]   ; 005897ab
    FSTP float ptr [EBP + 0xffffff22]   ; 005897b1
    FSTP float ptr [EBP + 0xffffff26]   ; 005897b7
    MOVSD ES:EDI,ESI                    ; 005897bd
    MOVSD ES:EDI,ESI                    ; 005897be
    MOVSD ES:EDI,ESI                    ; 005897bf
    PUSH EAX                            ; 005897c0
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 005897c1
    PUSH EDI                            ; 005897c7
    LEA ESI,[EBP + 0xfffffea6]          ; 005897c8
    LEA EDI,[EBP + 0xfffffd9e]          ; 005897ce
    CALL core_actor.cpp_FUN_00408b80    ; 005897d4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffea6]          ; 005897d9
    MOVSD ES:EDI,ESI                    ; 005897df
    MOVSD ES:EDI,ESI                    ; 005897e0
    MOVSD ES:EDI,ESI                    ; 005897e1
    FLD float ptr [EBP + 0xfffffd9e]    ; 005897e2
    FLD float ptr [EBP + 0xfffffda2]    ; 005897e8
    FLD float ptr [EBP + 0xfffffda6]    ; 005897ee
    LEA EDI,[EBP + 0xfffffd86]          ; 005897f4
    LEA ESI,[EBP + 0xfffffd7a]          ; 005897fa
    FXCH ST2                            ; 00589800
    FSUB float ptr [EBP + 0xfffffe46]   ; 00589802
    FXCH                                ; 00589808
    FSUB float ptr [EBP + 0xfffffe4a]   ; 0058980a
    FXCH ST2                            ; 00589810
    FSUB float ptr [EBP + 0xfffffe4e]   ; 00589812
    FXCH                                ; 00589818
    FSTP float ptr [EBP + 0xfffffd7a]   ; 0058981a
    FXCH                                ; 00589820
    FSTP float ptr [EBP + 0xfffffd7e]   ; 00589822
    FSTP float ptr [EBP + 0xfffffd82]   ; 00589828
    MOVSD ES:EDI,ESI                    ; 0058982e
    MOVSD ES:EDI,ESI                    ; 0058982f
    MOVSD ES:EDI,ESI                    ; 00589830
    FLD float ptr [EBP + 0xfffffd8a]    ; 00589831
    FMUL ST0                            ; 00589837
    FLD float ptr [EBP + 0xfffffd86]    ; 00589839
    FMUL ST0                            ; 0058983f
    FADDP                               ; 00589841
    FLD float ptr [EBP + 0xfffffd8e]    ; 00589843
    FMUL ST0                            ; 00589849
    FADDP                               ; 0058984b
    FSQRT                               ; 0058984d
    ADD ESP,0x8                         ; 0058984f
    FST float ptr [EBP + -0x26]         ; 00589852
    FLDZ                                ; 00589855
    FCOMPP                              ; 00589857
    FNSTSW AX                           ; 00589859
    SAHF                                ; 0058985b
    JNC 0x00589581                      ; 0058985c
        ;   XREF to: 00589581 (CONDITIONAL_JUMP)  ; LAB_00589581
    LEA EAX,[EBP + 0xfffffd86]          ; 00589862
    PUSH EAX                            ; 00589868
    PUSH EBX                            ; 00589869
    LEA ESI,[EBP + 0xfffffc72]          ; 0058986a
    LEA EDI,[EBP + 0xfffffebe]          ; 00589870
    CALL core_actor.cpp_FUN_00408b40    ; 00589876
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffc72]          ; 0058987b
    MOVSD ES:EDI,ESI                    ; 00589881
    MOVSD ES:EDI,ESI                    ; 00589882
    MOVSD ES:EDI,ESI                    ; 00589883
    FLD1                                ; 00589884
    FLD float ptr [EBP + 0xfffffebe]    ; 00589886
    FXCH                                ; 0058988c
    FDIV float ptr [EBP + -0x26]        ; 0058988e
    FXCH                                ; 00589891
    FMUL ST1                            ; 00589893
    FLD float ptr [EBP + 0xfffffec2]    ; 00589895
    FMUL ST2                            ; 0058989b
    FLD float ptr [EBP + 0xfffffec6]    ; 0058989d
    FMULP ST3                           ; 005898a3
    LEA EDI,[EBP + 0xfffffc66]          ; 005898a5
    LEA ESI,[EBP + 0xfffffc36]          ; 005898ab
    FXCH                                ; 005898b1
    FSTP float ptr [EBP + 0xfffffc36]   ; 005898b3
    FSTP float ptr [EBP + 0xfffffc3a]   ; 005898b9
    FSTP float ptr [EBP + 0xfffffc3e]   ; 005898bf
    MOVSD ES:EDI,ESI                    ; 005898c5
    MOVSD ES:EDI,ESI                    ; 005898c6
    MOVSD ES:EDI,ESI                    ; 005898c7
    LEA EAX,[EBP + 0xfffffc66]          ; 005898c8
    LEA ESI,[EBP + 0xfffffe82]          ; 005898ce
    ADD ESP,0x8                         ; 005898d4
    CMP ESI,EAX                         ; 005898d7
    JZ 0x00589581                       ; 005898d9
        ;   XREF to: 00589581 (CONDITIONAL_JUMP)  ; LAB_00589581
    MOV EAX,dword ptr [EBP + 0xfffffc66] ; 005898df
    MOV dword ptr [EBP + 0xfffffe82],EAX ; 005898e5
    MOV EAX,dword ptr [EBP + 0xfffffc6a] ; 005898eb
    MOV dword ptr [EBP + 0xfffffe86],EAX ; 005898f1
    MOV EAX,dword ptr [EBP + 0xfffffc6e] ; 005898f7
    MOV dword ptr [EBP + 0xfffffe8a],EAX ; 005898fd
    JMP 0x00589581                      ; 00589903
        ;   XREF to: 00589581 (UNCONDITIONAL_JUMP)  ; LAB_00589581
    MOV EDI,dword ptr [EBX + 0xd0e8]    ; 00589908
        ;   Label: LAB_00589908
    PUSH EDI                            ; 0058990e
    MOV EAX,dword ptr [EBP + -0x36]     ; 0058990f
    PUSH EAX                            ; 00589912
    LEA ESI,[EBP + 0xfffffc96]          ; 00589913
    LEA EDI,[EBP + 0xfffffc5a]          ; 00589919
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0058991f
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00589924
    LEA EAX,[EBP + 0xfffffc5a]          ; 00589927
    LEA ESI,[EBP + 0xfffffc96]          ; 0058992d
    PUSH EAX                            ; 00589933
    MOVSD ES:EDI,ESI                    ; 00589934
    MOVSD ES:EDI,ESI                    ; 00589935
    MOVSD ES:EDI,ESI                    ; 00589936
    PUSH EBX                            ; 00589937
    LEA ESI,[EBP + 0xfffffc4e]          ; 00589938
    CALL core_actor.cpp_FUN_00408b80    ; 0058993e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00589943
    PUSH 0x0                            ; 00589946
    PUSH 0x3                            ; 00589948
    PUSH 0x0                            ; 0058994a
    LEA EAX,[EBP + 0xfffffc1e]          ; 0058994c
    LEA EDI,[EBP + 0xfffffc1e]          ; 00589952
    PUSH EAX                            ; 00589958
    MOV EDX,dword ptr [0x005fed24]      ; 00589959 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffc4e]          ; 0058995f
    PUSH EDX                            ; 00589965
    MOVSD ES:EDI,ESI                    ; 00589966
    MOVSD ES:EDI,ESI                    ; 00589967
    MOVSD ES:EDI,ESI                    ; 00589968
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 00589969
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0058996e
    PUSH 0x3f000000                     ; 00589971
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00589976
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0058997b
    TEST EAX,EAX                        ; 0058997e
    JZ 0x005899c0                       ; 00589980
        ;   XREF to: 005899c0 (CONDITIONAL_JUMP)  ; LAB_005899c0
    MOV ESI,0x5d859c                    ; 00589982 | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffb3e]          ; 00589987
        ;   Label: LAB_00589987
    PUSH EDI                            ; 0058998d
    MOV AL,byte ptr [ESI]               ; 0058998e | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005d859c+2 | s_ghoul_dig_wav_005d85ac
        ;   Label: LAB_0058998e
    MOV byte ptr [EDI],AL               ; 00589990
    CMP AL,0x0                          ; 00589992
    JZ 0x005899a6                       ; 00589994
        ;   XREF to: 005899a6 (CONDITIONAL_JUMP)  ; LAB_005899a6
    MOV AL,byte ptr [ESI + 0x1]         ; 00589996 | s_ghoul_eat_wav_005d859c+1 | s_ghoul_eat_wav_005d859c+3 | s_ghoul_dig_wav_005d85ac+1
    ADD ESI,0x2                         ; 00589999
    MOV byte ptr [EDI + 0x1],AL         ; 0058999c
    ADD EDI,0x2                         ; 0058999f
    CMP AL,0x0                          ; 005899a2
    JNZ 0x0058998e                      ; 005899a4
        ;   XREF to: 0058998e (CONDITIONAL_JUMP)  ; LAB_0058998e
    POP EDI                             ; 005899a6
        ;   Label: LAB_005899a6
    LEA EAX,[EBP + 0xfffffb3e]          ; 005899a7
    PUSH EAX                            ; 005899ad
    MOV ESI,dword ptr [EBX + 0x154]     ; 005899ae
    PUSH EBX                            ; 005899b4
    CALL dword ptr [ESI + 0x2c]         ; 005899b5
    ADD ESP,0x8                         ; 005899b8
    JMP 0x00588fbb                      ; 005899bb
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    MOV ESI,0x5d85ac                    ; 005899c0 | = "ghoul-dig-?.wav"
        ;   Label: LAB_005899c0
    JMP 0x00589987                      ; 005899c5
        ;   XREF to: 00589987 (UNCONDITIONAL_JUMP)  ; LAB_00589987
    PUSH 0x5d85bc                       ; 005899c7 | = "fall-?.wav"
        ;   Label: LAB_005899c7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005899cc
    PUSH EBX                            ; 005899d2
    CALL dword ptr [EAX + 0x2c]         ; 005899d3
    ADD ESP,0x8                         ; 005899d6
    JMP 0x00588fbb                      ; 005899d9
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    JBE 0x0058945f                      ; 005899de
        ;   XREF to: 0058945f (CONDITIONAL_JUMP)  ; LAB_0058945f
        ;   Label: LAB_005899de
    CMP EAX,0x65                        ; 005899e4
    JNC 0x00589a01                      ; 005899e7
        ;   XREF to: 00589a01 (CONDITIONAL_JUMP)  ; LAB_00589a01
    CMP EAX,0xc                         ; 005899e9
    JZ 0x0058950e                       ; 005899ec
        ;   XREF to: 0058950e (CONDITIONAL_JUMP)  ; LAB_0058950e
    PUSH ESI                            ; 005899f2
    PUSH EBX                            ; 005899f3
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 005899f4
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005899f9
    JMP 0x00588fbb                      ; 005899fc
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    JBE 0x005899c7                      ; 00589a01
        ;   XREF to: 005899c7 (CONDITIONAL_JUMP)  ; LAB_005899c7
        ;   Label: LAB_00589a01
    CMP EAX,0x29a                       ; 00589a03
    JZ 0x00589908                       ; 00589a08
        ;   XREF to: 00589908 (CONDITIONAL_JUMP)  ; LAB_00589908
    PUSH ESI                            ; 00589a0e
    PUSH EBX                            ; 00589a0f
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00589a10
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00589a15
    JMP 0x00588fbb                      ; 00589a18
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    JBE 0x0058907f                      ; 00589a1d
        ;   XREF to: 0058907f (CONDITIONAL_JUMP)  ; LAB_0058907f
        ;   Label: LAB_00589a1d
    CMP EAX,0xa                         ; 00589a23
    JZ 0x00589255                       ; 00589a26
        ;   XREF to: 00589255 (CONDITIONAL_JUMP)  ; LAB_00589255
    PUSH ESI                            ; 00589a2c
    PUSH EBX                            ; 00589a2d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 00589a2e
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00589a33
    JMP 0x00588fbb                      ; 00589a36
        ;   XREF to: 00588fbb (UNCONDITIONAL_JUMP)  ; LAB_00588fbb
    FLD float ptr [EBP + 0x92]          ; 00589a3b
        ;   Label: LAB_00589a3b
    FMUL float ptr [EBX + 0xcdcc]       ; 00589a41
    SUB ESP,0x4                         ; 00589a47
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00589a4a
    MOV dword ptr [EBX + 0x2524],EAX    ; 00589a50
    FSTP float ptr [ESP]                ; 00589a56
    PUSH EBX                            ; 00589a59
    CALL core_charactr.cpp_FUN_00434850 ; 00589a5a
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV EAX,dword ptr [EBX + 0xd120]    ; 00589a5f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00589a65
    ADD ESP,0x8                         ; 00589a6c
    TEST EDX,EDX                        ; 00589a6f
    JZ 0x00589ccb                       ; 00589a71
        ;   XREF to: 00589ccb (CONDITIONAL_JUMP)  ; LAB_00589ccb
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00589a77
        ;   Label: LAB_00589a77
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00589a7d
    JZ 0x00589cdf                       ; 00589a85
        ;   XREF to: 00589cdf (CONDITIONAL_JUMP)  ; LAB_00589cdf
    LEA EAX,[EBX + 0x158]               ; 00589a8b
        ;   Label: LAB_00589a8b
    PUSH EAX                            ; 00589a91
    MOV dword ptr [EBP + 0x5e],EAX      ; 00589a92
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00589a95
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00589a9a
    PUSH dword ptr [EBP + 0x92]         ; 00589a9d
    XOR EDX,EDX                         ; 00589aa3
    PUSH EBX                            ; 00589aa5
    MOV ESI,dword ptr [EAX + 0x24]      ; 00589aa6
    MOV dword ptr [EBP + -0x1a],EDX     ; 00589aa9
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00589aac
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00589ab1
    TEST EAX,EAX                        ; 00589ab4
    JZ 0x0058ad40                       ; 00589ab6
        ;   XREF to: 0058ad40 (CONDITIONAL_JUMP)  ; LAB_0058ad40
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00589abc
    CMP EAX,0x2                         ; 00589ac2
    JNC 0x00589d8d                      ; 00589ac5
        ;   XREF to: 00589d8d (CONDITIONAL_JUMP)  ; LAB_00589d8d
    CMP EAX,0x1                         ; 00589acb
    JNZ 0x00589d98                      ; 00589ace
        ;   XREF to: 00589d98 (CONDITIONAL_JUMP)  ; LAB_00589d98
    CMP ESI,0x2                         ; 00589ad4
        ;   Label: LAB_00589ad4
    JZ 0x00589ae2                       ; 00589ad7
        ;   XREF to: 00589ae2 (CONDITIONAL_JUMP)  ; LAB_00589ae2
    PUSH EBX                            ; 00589ad9
    CALL core_zombie.cpp_FUN_0058cc20   ; 00589ada
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00589adf
    LEA EAX,[EBX + 0x249c]              ; 00589ae2
        ;   Label: LAB_00589ae2
    MOV dword ptr [EAX + 0x8],0x0       ; 00589ae8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00589aef
    MOV dword ptr [EAX + 0x4],EDX       ; 00589af2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00589af5
    MOV dword ptr [EAX],EDX             ; 00589af8
    FLD float ptr [EBX + 0xcde0]        ; 00589afa
        ;   Label: LAB_00589afa
    FLDZ                                ; 00589b00
    FCOMPP                              ; 00589b02
    FNSTSW AX                           ; 00589b04
    SAHF                                ; 00589b06
    JNC 0x00589b1b                      ; 00589b07
        ;   XREF to: 00589b1b (CONDITIONAL_JUMP)  ; LAB_00589b1b
    FLD float ptr [EBX + 0xcde0]        ; 00589b09
    FSUB float ptr [EBP + 0x92]         ; 00589b0f
    FSTP float ptr [EBX + 0xcde0]       ; 00589b15
    LEA EAX,[EBX + 0x158]               ; 00589b1b
        ;   Label: LAB_00589b1b
    PUSH EAX                            ; 00589b21
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00589b22
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00589b27
    MOV ESI,dword ptr [EAX + 0x24]      ; 00589b2a
    PUSH ESI                            ; 00589b2d
    PUSH 0x5d86b3                       ; 00589b2e | = "State: %d\n"
    MOV EAX,[0x005f1690]                ; 00589b33 | g_CConsolePtr
    PUSH EAX                            ; 00589b38 | g_CConsoleInstance
    MOV dword ptr [EBP + 0x5a],ESI      ; 00589b39
    CALL engine_console.cpp_FUN_00441ff0 ; 00589b3c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    LEA EAX,[EBX + 0x249c]              ; 00589b41
    ADD ESP,0xc                         ; 00589b47
    MOV dword ptr [EBP + 0x52],EAX      ; 00589b4a
    CMP ESI,0xf                         ; 00589b4d
    JNZ 0x0058ad6f                      ; 00589b50
        ;   XREF to: 0058ad6f (CONDITIONAL_JUMP)  ; LAB_0058ad6f
    MOV dword ptr [EAX + 0x8],0x0       ; 00589b56
    MOV EDX,dword ptr [EAX + 0x8]       ; 00589b5d
        ;   Label: LAB_00589b5d
    MOV dword ptr [EAX + 0x4],EDX       ; 00589b60
    MOV EDX,dword ptr [EAX + 0x4]       ; 00589b63
    MOV dword ptr [EAX],EDX             ; 00589b66
    PUSH EBX                            ; 00589b68
        ;   Label: LAB_00589b68
    CALL core_charactr.cpp_FUN_0042cd30 ; 00589b69
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00589b6e
    ADD ESP,0x4                         ; 00589b71
    CMP EAX,0xf                         ; 00589b74
    JZ 0x00589b97                       ; 00589b77
        ;   XREF to: 00589b97 (CONDITIONAL_JUMP)  ; LAB_00589b97
    LEA EAX,[EBX + 0x158]               ; 00589b79
    PUSH EAX                            ; 00589b7f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00589b80
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00589b85
    PUSH dword ptr [EBP + 0x92]         ; 00589b88
    PUSH EBX                            ; 00589b8e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 00589b8f
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00589b94
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 00589b97
        ;   Label: LAB_00589b97
    JNZ 0x00589c7c                      ; 00589b9e
        ;   XREF to: 00589c7c (CONDITIONAL_JUMP)  ; LAB_00589c7c
    MOV EAX,dword ptr [EBX + 0xd128]    ; 00589ba4
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00589baa
    JZ 0x0058af1f                       ; 00589bb2
        ;   XREF to: 0058af1f (CONDITIONAL_JUMP)  ; LAB_0058af1f
    MOV EAX,dword ptr [EBX + 0xd0fc]    ; 00589bb8
    PUSH 0x3e4ccccd                     ; 00589bbe
    PUSH EAX                            ; 00589bc3
    MOV EDX,dword ptr [EBX + 0xd114]    ; 00589bc4
    PUSH EDX                            ; 00589bca
    PUSH EBX                            ; 00589bcb
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00589bcc
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd114]    ; 00589bd1
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00589bd7
    ADD ESP,0x10                        ; 00589bde
    TEST ECX,ECX                        ; 00589be1
    JZ 0x00589c01                       ; 00589be3
        ;   XREF to: 00589c01 (CONDITIONAL_JUMP)  ; LAB_00589c01
    MOV ESI,dword ptr [EBX + 0xd0f4]    ; 00589be5
    PUSH 0x3e4ccccd                     ; 00589beb
    PUSH ESI                            ; 00589bf0
    MOV EDI,dword ptr [EBX + 0xd118]    ; 00589bf1
    PUSH EDI                            ; 00589bf7
    PUSH EBX                            ; 00589bf8
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00589bf9
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00589bfe
    MOV EAX,dword ptr [EBX + 0xd100]    ; 00589c01
        ;   Label: LAB_00589c01
    PUSH 0x3e4ccccd                     ; 00589c07
    PUSH EAX                            ; 00589c0c
    MOV EDX,dword ptr [EBX + 0xd11c]    ; 00589c0d
    PUSH EDX                            ; 00589c13
    PUSH EBX                            ; 00589c14
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00589c15
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 00589c1a
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00589c20
    ADD ESP,0x10                        ; 00589c27
    TEST ECX,ECX                        ; 00589c2a
    JZ 0x00589c4a                       ; 00589c2c
        ;   XREF to: 00589c4a (CONDITIONAL_JUMP)  ; LAB_00589c4a
    MOV ESI,dword ptr [EBX + 0xd0f8]    ; 00589c2e
    PUSH 0x3e4ccccd                     ; 00589c34
    PUSH ESI                            ; 00589c39
    MOV EDI,dword ptr [EBX + 0xd120]    ; 00589c3a
    PUSH EDI                            ; 00589c40
    PUSH EBX                            ; 00589c41
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00589c42
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00589c47
    MOV EAX,dword ptr [EBX + 0xd0e8]    ; 00589c4a
        ;   Label: LAB_00589c4a
    PUSH 0x3f333333                     ; 00589c50
    PUSH EAX                            ; 00589c55
    MOV EDX,dword ptr [EBX + 0xd12c]    ; 00589c56
    PUSH EDX                            ; 00589c5c
    PUSH EBX                            ; 00589c5d
        ;   Label: LAB_00589c5d
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90 ; 00589c5e
        ;   XREF to: 0042fe90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00589c63
    CMP dword ptr [EBX + 0xd124],0x0    ; 00589c66
    JL 0x0058af31                       ; 00589c6d
        ;   XREF to: 0058af31 (CONDITIONAL_JUMP)  ; LAB_0058af31
    PUSH EBX                            ; 00589c73
        ;   Label: LAB_00589c73
    CALL core_charactr.cpp_FUN_0042fc90 ; 00589c74
        ;   XREF to: 0042fc90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fc90()
    ADD ESP,0x4                         ; 00589c79
    PUSH 0x1                            ; 00589c7c
        ;   Label: LAB_00589c7c
    PUSH EBX                            ; 00589c7e
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 00589c7f
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    MOV EDX,dword ptr [EBP + -0x1a]     ; 00589c84
    ADD ESP,0x8                         ; 00589c87
    TEST EDX,EDX                        ; 00589c8a
    JZ 0x00589052                       ; 00589c8c
        ;   XREF to: 00589052 (CONDITIONAL_JUMP)  ; LAB_00589052
    TEST EAX,EAX                        ; 00589c92
    JL 0x00589052                       ; 00589c94
        ;   XREF to: 00589052 (CONDITIONAL_JUMP)  ; LAB_00589052
    SHL EAX,0x3                         ; 00589c9a
    MOV EDX,EAX                         ; 00589c9d
    SHL EAX,0x4                         ; 00589c9f
    SUB EAX,EDX                         ; 00589ca2
    ADD EBX,EAX                         ; 00589ca4
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 00589ca6
    TEST ECX,ECX                        ; 00589cac
    JZ 0x00589052                       ; 00589cae
        ;   XREF to: 00589052 (CONDITIONAL_JUMP)  ; LAB_00589052
    PUSH 0x2                            ; 00589cb4
    MOV EDX,dword ptr [ECX + 0x154]     ; 00589cb6
    PUSH ECX                            ; 00589cbc
    CALL dword ptr [EDX + 0x78]         ; 00589cbd
    ADD ESP,0x8                         ; 00589cc0
    LEA ESP,[EBP + 0x7a]                ; 00589cc3
    POP EBP                             ; 00589cc6
    POP EDI                             ; 00589cc7
    POP ESI                             ; 00589cc8
    POP EBX                             ; 00589cc9
    RET                                 ; 00589cca
    MOV EAX,dword ptr [EBX + 0xd118]    ; 00589ccb
        ;   Label: LAB_00589ccb
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00589cd1
    JNZ 0x00589a77                      ; 00589cd9
        ;   XREF to: 00589a77 (CONDITIONAL_JUMP)  ; LAB_00589a77
    FLD float ptr [EBX + 0xd134]        ; 00589cdf
        ;   Label: LAB_00589cdf
    FLDZ                                ; 00589ce5
    FCOMPP                              ; 00589ce7
    FNSTSW AX                           ; 00589ce9
    SAHF                                ; 00589ceb
    JA 0x00589a8b                       ; 00589cec
        ;   XREF to: 00589a8b (CONDITIONAL_JUMP)  ; LAB_00589a8b
    FLD float ptr [EBX + 0xd134]        ; 00589cf2
    FADD float ptr [EBP + 0x92]         ; 00589cf8
    FST float ptr [EBX + 0xd134]        ; 00589cfe
    FCOMP double ptr [0x005d86bf]       ; 00589d04 | DAT_005d86bf
    FNSTSW AX                           ; 00589d0a
    SAHF                                ; 00589d0c
    JC 0x00589a8b                       ; 00589d0d
        ;   XREF to: 00589a8b (CONDITIONAL_JUMP)  ; LAB_00589a8b
    LEA EAX,[EBP + 0xfffffac6]          ; 00589d13
    PUSH EAX                            ; 00589d19
    MOV EDI,0x461c3f9a                  ; 00589d1a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00589d1f
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffac6]          ; 00589d24
    ADD ESP,0x4                         ; 00589d2a
    MOV dword ptr [EBP + 0xfffffaca],EDI ; 00589d2d
    MOV dword ptr [EBP + 0xfffffafa],EBX ; 00589d33
    MOV dword ptr [EBP + 0xfffffafe],EBX ; 00589d39
    PUSH EAX                            ; 00589d3f
    MOV EDX,dword ptr [EBX + 0x154]     ; 00589d40
    PUSH EBX                            ; 00589d46
    CALL dword ptr [EDX + 0x108]        ; 00589d47
    ADD ESP,0x8                         ; 00589d4d
    MOV dword ptr [EBX + 0xd134],0xbf800000 ; 00589d50
    JMP 0x00589a8b                      ; 00589d5a
        ;   XREF to: 00589a8b (UNCONDITIONAL_JUMP)  ; LAB_00589a8b
    PUSH 0x1                            ; 00589d5f
        ;   Label: LAB_00589d5f
    PUSH 0x0                            ; 00589d61
    LEA EAX,[EBX + 0x158]               ; 00589d63
    PUSH EAX                            ; 00589d69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00589d6a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00589d6f
    PUSH EBX                            ; 00589d72
    MOV EAX,0x5d85c7                    ; 00589d73 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00589d78 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005f1690]      ; 00589d79 | g_CConsolePtr
    PUSH ECX                            ; 00589d7f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00589d80
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00589d85
    JMP 0x00589ae2                      ; 00589d88
        ;   XREF to: 00589ae2 (UNCONDITIONAL_JUMP)  ; LAB_00589ae2
    JBE 0x00589ad4                      ; 00589d8d
        ;   XREF to: 00589ad4 (CONDITIONAL_JUMP)  ; LAB_00589ad4
        ;   Label: LAB_00589d8d
    CMP EAX,0x3                         ; 00589d93
    JZ 0x00589d5f                       ; 00589d96
        ;   XREF to: 00589d5f (CONDITIONAL_JUMP)  ; LAB_00589d5f
    PUSH 0x1                            ; 00589d98
        ;   Label: LAB_00589d98
    PUSH 0x0                            ; 00589d9a
    LEA EAX,[EBX + 0x158]               ; 00589d9c
    PUSH EAX                            ; 00589da2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00589da3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00589da8
    JMP 0x00589ae2                      ; 00589dab
        ;   XREF to: 00589ae2 (UNCONDITIONAL_JUMP)  ; LAB_00589ae2
    MOV EAX,[0x01d5ba14]                ; 00589db0 | DAT_01d5ba14
        ;   Label: caseD_13
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00589db5
    PUSH EAX                            ; 00589dbc
    MOV EDX,dword ptr [EAX + 0x154]     ; 00589dbd
    CALL dword ptr [EDX + 0x10c]        ; 00589dc3
    ADD ESP,0x4                         ; 00589dc9
    TEST EAX,EAX                        ; 00589dcc
    JZ 0x00589ea9                       ; 00589dce
        ;   XREF to: 00589ea9 (CONDITIONAL_JUMP)  ; LAB_00589ea9
    FLD float ptr [EBP + 0x62]          ; 00589dd4
        ;   Label: caseD_6
    FLDZ                                ; 00589dd7
    FCOMPP                              ; 00589dd9
    FNSTSW AX                           ; 00589ddb
    SAHF                                ; 00589ddd
    JA 0x00589afa                       ; 00589dde
        ;   XREF to: 00589afa (CONDITIONAL_JUMP)  ; LAB_00589afa
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00589de4
    JZ 0x00589afa                       ; 00589deb
        ;   XREF to: 00589afa (CONDITIONAL_JUMP)  ; LAB_00589afa
    FLD float ptr [EBP + -0x1e]         ; 00589df1
    FMUL float ptr [EBX + 0xcdcc]       ; 00589df4
    FLD float ptr [EBP + 0x92]          ; 00589dfa
    FLD ST0                             ; 00589e00
    FMUL float ptr [EBX + 0xcdcc]       ; 00589e02
    FXCH ST2                            ; 00589e08
    FMULP                               ; 00589e0a
    SUB ESP,0x4                         ; 00589e0c
    FSTP float ptr [EBX + 0x2524]       ; 00589e0f
    FSTP float ptr [ESP]                ; 00589e15
    PUSH EBX                            ; 00589e18
    CALL core_charactr.cpp_FUN_00434850 ; 00589e19
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00589e1e
    MOV EAX,dword ptr [EBP + 0x62]      ; 00589e21
    PUSH 0x3f490fdb                     ; 00589e24
    XOR ECX,ECX                         ; 00589e29
    PUSH 0x40400000                     ; 00589e2b
    MOV dword ptr [EBP + 0xfffffdce],ECX ; 00589e30
    MOV dword ptr [EBP + 0xfffffdd6],EAX ; 00589e36
    LEA EAX,[EBP + 0xfffffdce]          ; 00589e3c
    MOV dword ptr [EBP + 0xfffffdd2],ECX ; 00589e42
    PUSH EAX                            ; 00589e48
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00589e49
    PUSH EAX                            ; 00589e4f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00589e50
    CALL dword ptr [EDX + 0xc4]         ; 00589e56
    ADD ESP,0x4                         ; 00589e5c
    PUSH EAX                            ; 00589e5f
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00589e60
    ADD EAX,0x20                        ; 00589e66
    PUSH EAX                            ; 00589e69
    PUSH EBX                            ; 00589e6a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00589e6b
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00589e70
    CMP EAX,0x1                         ; 00589e73
    JZ 0x00589afa                       ; 00589e76
        ;   XREF to: 00589afa (CONDITIONAL_JUMP)  ; LAB_00589afa
    PUSH EBX                            ; 00589e7c
    PUSH 0x5d869e                       ; 00589e7d | = "%s giving up attack\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00589e82 | g_CConsolePtr
    PUSH EDI                            ; 00589e88 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00589e89
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00589e8e
    PUSH EBX                            ; 00589e91
    CALL core_zombie.cpp_FUN_0058cc20   ; 00589e92
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 00589e97
    MOV dword ptr [EBX + 0x2508],0x0    ; 00589e9a
    JMP 0x00589afa                      ; 00589ea4
        ;   XREF to: 00589afa (UNCONDITIONAL_JUMP)  ; LAB_00589afa
    PUSH dword ptr [EBP + 0x92]         ; 00589ea9
        ;   Label: LAB_00589ea9
    MOV EAX,dword ptr [EBX + 0x154]     ; 00589eaf
    PUSH EBX                            ; 00589eb5
    CALL dword ptr [EAX + 0x144]        ; 00589eb6
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00589ebc
    ADD ESP,0x8                         ; 00589ec2
    TEST EAX,EAX                        ; 00589ec5
    JZ 0x00589dd4                       ; 00589ec7
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 00589ecd
        ;   Label: LAB_00589ecd
    PUSH 0x0                            ; 00589ecf
    LEA EAX,[EBX + 0x158]               ; 00589ed1
    PUSH EAX                            ; 00589ed7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00589ed8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00589edd
    JMP 0x00589dd4                      ; 00589ee0
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBX + 0xd148]        ; 00589ee5
        ;   Label: caseD_15
    FSUB float ptr [EBP + 0x92]         ; 00589eeb
    FST float ptr [EBX + 0xd148]        ; 00589ef1
    FLDZ                                ; 00589ef7
    FCOMPP                              ; 00589ef9
    FNSTSW AX                           ; 00589efb
    SAHF                                ; 00589efd
    JC 0x00589dd4                       ; 00589efe
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH dword ptr [EBP + 0x92]         ; 00589f04
    MOV EAX,dword ptr [EBX + 0x154]     ; 00589f0a
    PUSH EBX                            ; 00589f10
    MOV dword ptr [EBX + 0xd148],0x0    ; 00589f11
    CALL dword ptr [EAX + 0x144]        ; 00589f1b
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00589f21
    ADD ESP,0x8                         ; 00589f27
    TEST ESI,ESI                        ; 00589f2a
    JZ 0x00589dd4                       ; 00589f2c
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    LEA EAX,[EBX + 0x20]                ; 00589f32
    FLD float ptr [EAX]                 ; 00589f35
    FSUB float ptr [ESI + 0x20]         ; 00589f37
    LEA EDI,[EBP + 0xfffffe5e]          ; 00589f3a
    FSTP float ptr [EBP + -0x6a]        ; 00589f40
    FLD float ptr [EAX + 0x4]           ; 00589f43
    FSUB float ptr [ESI + 0x24]         ; 00589f46
    LEA EDX,[EBP + 0xfffffe5e]          ; 00589f49
    FSTP float ptr [EBP + -0x66]        ; 00589f4f
    FLD float ptr [EAX + 0x8]           ; 00589f52
    LEA EAX,[EBP + 0xfffffe3a]          ; 00589f55
    FSUB float ptr [ESI + 0x28]         ; 00589f5b
    LEA ESI,[EBP + -0x6a]               ; 00589f5e
    FSTP float ptr [EBP + -0x62]        ; 00589f61
    MOVSD ES:EDI,ESI                    ; 00589f64
    MOVSD ES:EDI,ESI                    ; 00589f65
    MOVSD ES:EDI,ESI                    ; 00589f66
    CMP EAX,EDX                         ; 00589f67
    JZ 0x00589f8f                       ; 00589f69
        ;   XREF to: 00589f8f (CONDITIONAL_JUMP)  ; LAB_00589f8f
    MOV EAX,dword ptr [EBP + 0xfffffe5e] ; 00589f6b
    MOV dword ptr [EBP + 0xfffffe3a],EAX ; 00589f71
    MOV EAX,dword ptr [EBP + 0xfffffe62] ; 00589f77
    MOV dword ptr [EBP + 0xfffffe3e],EAX ; 00589f7d
    MOV EAX,dword ptr [EBP + 0xfffffe66] ; 00589f83
    MOV dword ptr [EBP + 0xfffffe42],EAX ; 00589f89
    FLD float ptr [EBP + 0xfffffe3e]    ; 00589f8f
        ;   Label: LAB_00589f8f
    FMUL ST0                            ; 00589f95
    FLD float ptr [EBP + 0xfffffe3a]    ; 00589f97
    FMUL ST0                            ; 00589f9d
    FADDP                               ; 00589f9f
    FLD float ptr [EBP + 0xfffffe42]    ; 00589fa1
    FMUL ST0                            ; 00589fa7
    FADDP                               ; 00589fa9
    FSTP float ptr [EBP + 0x6a]         ; 00589fab
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00589fae
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00589fb1 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00589fb7
    ADD EAX,EDI                         ; 00589fb9
    MOV dword ptr [EBP + 0x6e],EAX      ; 00589fbb
    FLD float ptr [EBP + 0x6e]          ; 00589fbe
    FCOMP double ptr [0x005d86c7]       ; 00589fc1 | DAT_005d86c7
    FNSTSW AX                           ; 00589fc7
    SAHF                                ; 00589fc9
    JA 0x00589dd4                       ; 00589fca
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBX + 0x3280]    ; 00589fd0
    MOV dword ptr [EBP + 0x66],EAX      ; 00589fd6
    FLD float ptr [EBP + 0x66]          ; 00589fd9
    FCOMP float ptr [EBX + 0x327c]      ; 00589fdc
    FNSTSW AX                           ; 00589fe2
    SAHF                                ; 00589fe4
    JNC 0x00589ff0                      ; 00589fe5
        ;   XREF to: 00589ff0 (CONDITIONAL_JUMP)  ; LAB_00589ff0
    MOV EAX,dword ptr [EBX + 0x2490]    ; 00589fe7
    MOV dword ptr [EBP + 0x66],EAX      ; 00589fed
    FLD float ptr [EBP + 0x66]          ; 00589ff0
        ;   Label: LAB_00589ff0
    FCOMP float ptr [EBX + 0x327c]      ; 00589ff3
    FNSTSW AX                           ; 00589ff9
    SAHF                                ; 00589ffb
    JC 0x0058a0dc                       ; 00589ffc
        ;   XREF to: 0058a0dc (CONDITIONAL_JUMP)  ; LAB_0058a0dc
    XOR ESI,ESI                         ; 0058a002
        ;   Label: LAB_0058a002
    MOV dword ptr [EBP + 0x76],ESI      ; 0058a004
        ;   Label: LAB_0058a004
    FILD dword ptr [EBP + 0x76]         ; 0058a007
    FMUL float ptr [0x005d8717]         ; 0058a00a | DAT_005d8717
    MOV EDI,dword ptr [0x00603b28]      ; 0058a010 | g_CDemonSetPtr
    FMUL float ptr [0x005d871b]         ; 0058a016 | DAT_005d871b
    PUSH EDI                            ; 0058a01c | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x72]         ; 0058a01d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0058a020
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058a025
    PUSH EBX                            ; 0058a028
    MOV EAX,[0x00603b28]                ; 0058a029 | g_CDemonSetPtr
    PUSH EAX                            ; 0058a02e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0058a02f
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x72]          ; 0058a034
    FLD ST0                             ; 0058a037
    FCOS                                ; 0058a039
    FXCH                                ; 0058a03b
    FSIN                                ; 0058a03d
    FXCH                                ; 0058a03f
    FLD double ptr [0x005d871f]         ; 0058a041 | DAT_005d871f
    FXCH                                ; 0058a047
    FMUL ST1                            ; 0058a049
    FXCH ST2                            ; 0058a04b
    FMULP                               ; 0058a04d
    FLD float ptr [EBX + 0x24]          ; 0058a04f
    ADD ESP,0x8                         ; 0058a052
    FADD float ptr [EBP + 0x66]         ; 0058a055
    SUB ESP,0x4                         ; 0058a058
    FSTP float ptr [ESP]                ; 0058a05b
    FLD float ptr [EBX + 0x24]          ; 0058a05e
    FADD float ptr [EBX + 0x327c]       ; 0058a061
    SUB ESP,0x4                         ; 0058a067
    FSTP float ptr [ESP]                ; 0058a06a
    PUSH dword ptr [EBX + 0x3270]       ; 0058a06d
    SUB ESP,0x4                         ; 0058a073
    FXCH                                ; 0058a076
    FSTP float ptr [ESP]                ; 0058a078
    SUB ESP,0x4                         ; 0058a07b
    FSTP float ptr [ESP]                ; 0058a07e
    PUSH dword ptr [EBX + 0x28]         ; 0058a081
    MOV EDX,dword ptr [0x00603b28]      ; 0058a084 | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0058a08a
    PUSH EDX                            ; 0058a08d | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_0053de10 ; 0058a08e
        ;   XREF to: 0053de10 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053de10()
    MOV ECX,dword ptr [0x00603b28]      ; 0058a093 | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 0058a099
    ADD ESP,0x20                        ; 0058a09c
    FLD float ptr [EBP + 0x76]          ; 0058a09f
    PUSH ECX                            ; 0058a0a2 | g_CDemonSetInstance
    FSTP float ptr [EBP + -0xa]         ; 0058a0a3
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0058a0a6
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    FLD float ptr [EBP + -0xa]          ; 0058a0ab
    FLD1                                ; 0058a0ae
    ADD ESP,0x4                         ; 0058a0b0
    FCOMPP                              ; 0058a0b3
    FNSTSW AX                           ; 0058a0b5
    SAHF                                ; 0058a0b7
    JBE 0x0058a0f0                      ; 0058a0b8
        ;   XREF to: 0058a0f0 (CONDITIONAL_JUMP)  ; LAB_0058a0f0
    CMP ESI,0x4                         ; 0058a0ba
        ;   Label: LAB_0058a0ba
    JGE 0x00589ecd                      ; 0058a0bd
        ;   XREF to: 00589ecd (CONDITIONAL_JUMP)  ; LAB_00589ecd
    MOV dword ptr [EBX + 0xd148],0x40400000 ; 0058a0c3
    MOV dword ptr [EBX + 0xcde4],0x0    ; 0058a0cd
    JMP 0x00589dd4                      ; 0058a0d7
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBX + 0x327c]        ; 0058a0dc
        ;   Label: LAB_0058a0dc
    FADD double ptr [0x005d86cf]        ; 0058a0e2 | DAT_005d86cf
    FSTP float ptr [EBP + 0x66]         ; 0058a0e8
    JMP 0x0058a002                      ; 0058a0eb
        ;   XREF to: 0058a002 (UNCONDITIONAL_JUMP)  ; LAB_0058a002
    INC ESI                             ; 0058a0f0
        ;   Label: LAB_0058a0f0
    CMP ESI,0x4                         ; 0058a0f1
    JL 0x0058a004                       ; 0058a0f4
        ;   XREF to: 0058a004 (CONDITIONAL_JUMP)  ; LAB_0058a004
    JMP 0x0058a0ba                      ; 0058a0fa
        ;   XREF to: 0058a0ba (UNCONDITIONAL_JUMP)  ; LAB_0058a0ba
    MOV EAX,[0x01d5ba14]                ; 0058a0fc | DAT_01d5ba14
        ;   Label: caseD_16
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058a101
    LEA EAX,[EBX + 0x20]                ; 0058a108
    FLD float ptr [EDX + 0x20]          ; 0058a10b
    FSUB float ptr [EAX]                ; 0058a10e
    FSTP float ptr [EBP + 0xffffff36]   ; 0058a110
    FLD float ptr [EDX + 0x24]          ; 0058a116
    FSUB float ptr [EAX + 0x4]          ; 0058a119
    LEA EDI,[EBP + -0x76]               ; 0058a11c
    FSTP float ptr [EBP + 0xffffff3a]   ; 0058a11f
    FLD float ptr [EDX + 0x28]          ; 0058a125
    FSUB float ptr [EAX + 0x8]          ; 0058a128
    LEA ESI,[EBP + 0xffffff36]          ; 0058a12b
    FSTP float ptr [EBP + 0xffffff3e]   ; 0058a131
    MOVSD ES:EDI,ESI                    ; 0058a137
    MOVSD ES:EDI,ESI                    ; 0058a138
    MOVSD ES:EDI,ESI                    ; 0058a139
    FLD float ptr [EBP + -0x72]         ; 0058a13a
    FMUL ST0                            ; 0058a13d
    FLD float ptr [EBP + -0x76]         ; 0058a13f
    FMUL ST0                            ; 0058a142
    FADDP                               ; 0058a144
    FLD float ptr [EBP + -0x6e]         ; 0058a146
    FMUL ST0                            ; 0058a149
    FADDP                               ; 0058a14b
    FSTP float ptr [EBP + -0x2]         ; 0058a14d
    MOV EAX,dword ptr [EBP + -0x2]      ; 0058a150
    MOV EDX,dword ptr [0x01d1a0a4]      ; 0058a153 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0058a159
    ADD EAX,EDX                         ; 0058a15b
    MOV dword ptr [EBP + 0x2],EAX       ; 0058a15d
    FLD float ptr [EBP + 0x2]           ; 0058a160
    FCOMP float ptr [EBX + 0xd0e4]      ; 0058a163
    FNSTSW AX                           ; 0058a169
    SAHF                                ; 0058a16b
    JNC 0x00589dd4                      ; 0058a16c
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 0058a172
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0058a174
    PUSH 0x17                           ; 0058a177
    FLD float ptr [EBX + 0xcddc]        ; 0058a179
    PUSH ECX                            ; 0058a17f
    FSTP float ptr [EBX + 0xd0e4]       ; 0058a180
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a186
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058a18b
    JMP 0x00589dd4                      ; 0058a18e
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    LEA EAX,[EBX + 0xd074]              ; 0058a193
        ;   Label: caseD_f
    PUSH EAX                            ; 0058a199
    MOV ESI,dword ptr [0x005fba60]      ; 0058a19a | DAT_005fba60
    PUSH ESI                            ; 0058a1a0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0058a1a1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0058a1a6
    TEST EAX,EAX                        ; 0058a1a9
    JZ 0x00589dd4                       ; 0058a1ab
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBX + 0xd144]        ; 0058a1b1
    FSUB float ptr [EBP + 0x92]         ; 0058a1b7
    FST float ptr [EBX + 0xd144]        ; 0058a1bd
    FLDZ                                ; 0058a1c3
    FCOMPP                              ; 0058a1c5
    FNSTSW AX                           ; 0058a1c7
    SAHF                                ; 0058a1c9
    JBE 0x00589dd4                      ; 0058a1ca
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD1                                ; 0058a1d0
    XOR EDI,EDI                         ; 0058a1d2
    LEA EAX,[EBX + 0x20]                ; 0058a1d4
    MOV dword ptr [EBP + 0x6],EDI       ; 0058a1d7
    MOV dword ptr [EBP + 0xa],EAX       ; 0058a1da
    FADD float ptr [EBX + 0xd144]       ; 0058a1dd
    MOV dword ptr [EBP + 0x56],EDI      ; 0058a1e3
    FSTP float ptr [EBX + 0xd144]       ; 0058a1e6
    MOV EAX,[0x00603b28]                ; 0058a1ec | g_CDemonSetPtr
        ;   Label: LAB_0058a1ec
    MOV EDX,dword ptr [EBP + 0x6]       ; 0058a1f1
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0058a1f4 | g_CDemonSetInstance.character_count
    JGE 0x00589dd4                      ; 0058a1fa
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    ADD EAX,dword ptr [EBP + 0x56]      ; 0058a200
    PUSH EBX                            ; 0058a203
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 0058a204 | g_CDemonSetInstance.characters[0]
    PUSH ESI                            ; 0058a20a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058a20b
    CALL dword ptr [EAX + 0xe4]         ; 0058a211
    ADD ESP,0x8                         ; 0058a217
    TEST EAX,EAX                        ; 0058a21a
    JNZ 0x0058a230                      ; 0058a21c
        ;   XREF to: 0058a230 (CONDITIONAL_JUMP)  ; LAB_0058a230
    MOV EAX,dword ptr [EBP + 0x6]       ; 0058a21e
        ;   Label: LAB_0058a21e
    MOV EDI,dword ptr [EBP + 0x56]      ; 0058a221
    INC EAX                             ; 0058a224
    ADD EDI,0x4                         ; 0058a225
    MOV dword ptr [EBP + 0x6],EAX       ; 0058a228
    MOV dword ptr [EBP + 0x56],EDI      ; 0058a22b
    JMP 0x0058a1ec                      ; 0058a22e
        ;   XREF to: 0058a1ec (UNCONDITIONAL_JUMP)  ; LAB_0058a1ec
    MOV EAX,dword ptr [EBP + 0xa]       ; 0058a230
        ;   Label: LAB_0058a230
    FLD float ptr [ESI + 0x20]          ; 0058a233
    FSUB float ptr [EAX]                ; 0058a236
    FSTP float ptr [EBP + 0xfffffdf2]   ; 0058a238
    FLD float ptr [ESI + 0x24]          ; 0058a23e
    FSUB float ptr [EAX + 0x4]          ; 0058a241
    LEA EDI,[EBP + 0xfffffe22]          ; 0058a244
    FSTP float ptr [EBP + 0xfffffdf6]   ; 0058a24a
    FLD float ptr [ESI + 0x28]          ; 0058a250
    FSUB float ptr [EAX + 0x8]          ; 0058a253
    LEA ESI,[EBP + 0xfffffdf2]          ; 0058a256
    FSTP float ptr [EBP + 0xfffffdfa]   ; 0058a25c
    MOVSD ES:EDI,ESI                    ; 0058a262
    MOVSD ES:EDI,ESI                    ; 0058a263
    MOVSD ES:EDI,ESI                    ; 0058a264
    FLD float ptr [EBP + 0xfffffe26]    ; 0058a265
    FABS                                ; 0058a26b
    FCOMP double ptr [0x005d872f]       ; 0058a26d | DAT_005d872f
    FNSTSW AX                           ; 0058a273
    SAHF                                ; 0058a275
    JA 0x0058a21e                       ; 0058a276
        ;   XREF to: 0058a21e (CONDITIONAL_JUMP)  ; LAB_0058a21e
    FLD float ptr [EBP + 0xfffffe22]    ; 0058a278
    FMUL ST0                            ; 0058a27e
    FLD float ptr [EBP + 0xfffffe2a]    ; 0058a280
    FMUL ST0                            ; 0058a286
    XOR EAX,EAX                         ; 0058a288
    FADDP                               ; 0058a28a
    MOV dword ptr [EBP + 0xfffffe26],EAX ; 0058a28c
    FSQRT                               ; 0058a292
    FCOMP float ptr [EBX + 0xcddc]      ; 0058a294
    FNSTSW AX                           ; 0058a29a
    SAHF                                ; 0058a29c
    JA 0x0058a21e                       ; 0058a29d
        ;   XREF to: 0058a21e (CONDITIONAL_JUMP)  ; LAB_0058a21e
    PUSH EBX                            ; 0058a2a3
    PUSH 0x5d85f1                       ; 0058a2a4 | = "%s rising from the grave\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0058a2a9 | g_CConsolePtr
    PUSH EDX                            ; 0058a2af | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058a2b0
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0058a2b5
    PUSH 0x1                            ; 0058a2b8
    PUSH 0x10                           ; 0058a2ba
    LEA EAX,[EBX + 0x158]               ; 0058a2bc
    PUSH EAX                            ; 0058a2c2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a2c3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV ECX,dword ptr [EBX + 0xd06c]    ; 0058a2c8
    ADD ESP,0xc                         ; 0058a2ce
    TEST ECX,ECX                        ; 0058a2d1
    JZ 0x0058a2e8                       ; 0058a2d3
        ;   XREF to: 0058a2e8 (CONDITIONAL_JUMP)  ; LAB_0058a2e8
    PUSH ECX                            ; 0058a2d5
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004cf580 ; 0058a2d6
        ;   XREF to: 004cf580 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004cf580(CGrave * this_ptr)
    ADD ESP,0x4                         ; 0058a2db
    MOV dword ptr [EBX + 0xd06c],0x0    ; 0058a2de
    MOV dword ptr [EBX + 0xcddc],0x42c80000 ; 0058a2e8
        ;   Label: LAB_0058a2e8
    JMP 0x00589dd4                      ; 0058a2f2
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    MOV EDX,dword ptr [EBX + 0xcdd0]    ; 0058a2f7
        ;   Label: caseD_9
    TEST EDX,EDX                        ; 0058a2fd
    JNZ 0x00589dd4                      ; 0058a2ff
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0xdc],0x0      ; 0058a305
    JNZ 0x00589dd4                      ; 0058a30c
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EDX                            ; 0058a312
    PUSH EDI                            ; 0058a313
    LEA ESI,[EBP + 0xffffff2a]          ; 0058a314
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0058a31a
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    LEA EDI,[EBP + 0xfffffd3e]          ; 0058a31f
    ADD ESP,0x8                         ; 0058a325
    LEA EAX,[EBP + 0xfffffd3e]          ; 0058a328
    LEA ESI,[EBP + 0xffffff2a]          ; 0058a32e
    PUSH EAX                            ; 0058a334
    MOVSD ES:EDI,ESI                    ; 0058a335
    MOVSD ES:EDI,ESI                    ; 0058a336
    MOVSD ES:EDI,ESI                    ; 0058a337
    PUSH EBX                            ; 0058a338
    LEA ESI,[EBP + 0xfffffe0a]          ; 0058a339
    LEA EDI,[EBP + 0xfffffd1a]          ; 0058a33f
    CALL core_actor.cpp_FUN_00408b80    ; 0058a345
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0058a34a
    LEA ESI,[EBP + 0xfffffe0a]          ; 0058a34d
    LEA EAX,[EBP + 0xfffffd1a]          ; 0058a353
    PUSH 0x0                            ; 0058a359
    MOVSD ES:EDI,ESI                    ; 0058a35b
    MOVSD ES:EDI,ESI                    ; 0058a35c
    MOVSD ES:EDI,ESI                    ; 0058a35d
    PUSH EAX                            ; 0058a35e
    MOV EDI,dword ptr [0x005fed24]      ; 0058a35f | g_CGorePtr
    PUSH EDI                            ; 0058a365
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0058a366
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0058a36b
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0058a36e
    JMP 0x00589dd4                      ; 0058a378
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH dword ptr [EBP + 0x92]         ; 0058a37d
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058a383
    PUSH EBX                            ; 0058a389
    CALL dword ptr [EAX + 0x144]        ; 0058a38a
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0058a390
    ADD ESP,0x8                         ; 0058a396
    TEST EDX,EDX                        ; 0058a399
    JNZ 0x0058a3a7                      ; 0058a39b
        ;   XREF to: 0058a3a7 (CONDITIONAL_JUMP)  ; LAB_0058a3a7
    CMP dword ptr [EBP + 0x12],0x0      ; 0058a39d
    JNZ 0x0058a4fd                      ; 0058a3a1
        ;   XREF to: 0058a4fd (CONDITIONAL_JUMP)  ; LAB_0058a4fd
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0058a3a7
        ;   Label: LAB_0058a3a7
    TEST ESI,ESI                        ; 0058a3ad
    JZ 0x00589dd4                       ; 0058a3af
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EDX,ESI                         ; 0058a3b5
    LEA EAX,[EBX + 0x20]                ; 0058a3b7
    FLD float ptr [EDX + 0x20]          ; 0058a3ba
    FSUB float ptr [EAX]                ; 0058a3bd
    FSTP float ptr [EBP + 0xfffffefa]   ; 0058a3bf
    FLD float ptr [EDX + 0x24]          ; 0058a3c5
    FSUB float ptr [EAX + 0x4]          ; 0058a3c8
    LEA EDI,[EBP + 0xfffffd62]          ; 0058a3cb
    FSTP float ptr [EBP + 0xfffffefe]   ; 0058a3d1
    FLD float ptr [EDX + 0x28]          ; 0058a3d7
    FSUB float ptr [EAX + 0x8]          ; 0058a3da
    LEA ESI,[EBP + 0xfffffefa]          ; 0058a3dd
    FSTP float ptr [EBP + 0xffffff02]   ; 0058a3e3
    MOVSD ES:EDI,ESI                    ; 0058a3e9
    MOVSD ES:EDI,ESI                    ; 0058a3ea
    MOVSD ES:EDI,ESI                    ; 0058a3eb
    FLD float ptr [EBP + 0xfffffd66]    ; 0058a3ec
    FMUL ST0                            ; 0058a3f2
    FLD float ptr [EBP + 0xfffffd62]    ; 0058a3f4
    FMUL ST0                            ; 0058a3fa
    FADDP                               ; 0058a3fc
    FLD float ptr [EBP + 0xfffffd6a]    ; 0058a3fe
    FMUL ST0                            ; 0058a404
    FADDP                               ; 0058a406
    FSTP float ptr [EBP + 0x1a]         ; 0058a408
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0058a40b
    MOV EDI,dword ptr [0x01d1a0a4]      ; 0058a40e | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0058a414
    ADD EAX,EDI                         ; 0058a416
    FLD float ptr [EBX + 0xd0e4]        ; 0058a418
    MOV dword ptr [EBP + 0x1e],EAX      ; 0058a41e
    MOV dword ptr [EBP + 0x16],EAX      ; 0058a421
    FCOMP float ptr [EBP + 0x1e]        ; 0058a424
    FNSTSW AX                           ; 0058a427
    SAHF                                ; 0058a429
    JC 0x00589dd4                       ; 0058a42a
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBP + 0x92]          ; 0058a430
    FMUL double ptr [0x005d86f7]        ; 0058a436 | DAT_005d86f7
    SUB ESP,0x4                         ; 0058a43c
    MOV EAX,dword ptr [EBX + 0xcddc]    ; 0058a43f
    MOV dword ptr [EBX + 0xd0e4],EAX    ; 0058a445
    FSTP float ptr [ESP]                ; 0058a44b
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0058a44e
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0058a453
    TEST EAX,EAX                        ; 0058a456
    JZ 0x0058a481                       ; 0058a458
        ;   XREF to: 0058a481 (CONDITIONAL_JUMP)  ; LAB_0058a481
    PUSH 0x0                            ; 0058a45a
    PUSH 0x5d860b                       ; 0058a45c | = "pickass"
    LEA ESI,[EBX + 0x158]               ; 0058a461
    PUSH ESI                            ; 0058a467
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004fc310 ; 0058a468
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_004fc310(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058a46d
    PUSH EAX                            ; 0058a470
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0 ; 0058a471
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList * this_ptr, char * motion_name, int error_on_not_found)
    ADD ESP,0xc                         ; 0058a476
    TEST EAX,EAX                        ; 0058a479
    JGE 0x0058a547                      ; 0058a47b
        ;   XREF to: 0058a547 (CONDITIONAL_JUMP)  ; LAB_0058a547
    PUSH dword ptr [EBP + 0x92]         ; 0058a481
        ;   Label: LAB_0058a481
    PUSH EBX                            ; 0058a487
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0058a488
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058a48d
    TEST EAX,EAX                        ; 0058a490
    JZ 0x0058a49d                       ; 0058a492
        ;   XREF to: 0058a49d (CONDITIONAL_JUMP)  ; LAB_0058a49d
    PUSH EBX                            ; 0058a494
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058a495
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058a49a
    FLD float ptr [0x005e6778]          ; 0058a49d | DAT_005e6778
        ;   Label: LAB_0058a49d
    FADD double ptr [0x005d86df]        ; 0058a4a3 | DAT_005d86df
    FLD float ptr [EBP + 0x16]          ; 0058a4a9
    FCOMPP                              ; 0058a4ac
    FNSTSW AX                           ; 0058a4ae
    SAHF                                ; 0058a4b0
    JBE 0x00589dd4                      ; 0058a4b1
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058a4b7
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058a4b8
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058a4bd
    MOV EAX,dword ptr [EBX + 0xd13c]    ; 0058a4c0
    PUSH EAX                            ; 0058a4c6
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058a4c7
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058a4cc
    TEST EAX,EAX                        ; 0058a4cf
    JNZ 0x00589dd4                      ; 0058a4d1
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0xd0e0],0x0    ; 0058a4d7
    JZ 0x0058a559                       ; 0058a4de
        ;   XREF to: 0058a559 (CONDITIONAL_JUMP)  ; LAB_0058a559
    PUSH 0x5d8613                       ; 0058a4e0 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058a4e5
    PUSH EBX                            ; 0058a4eb
    CALL dword ptr [EAX + 0x2c]         ; 0058a4ec
    ADD ESP,0x8                         ; 0058a4ef
    MOV dword ptr [EBX + 0xd13c],EAX    ; 0058a4f2
    JMP 0x00589dd4                      ; 0058a4f8
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,[0x01d5ba14]                ; 0058a4fd | DAT_01d5ba14
        ;   Label: LAB_0058a4fd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058a502
    PUSH EAX                            ; 0058a509
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058a50a
    CALL dword ptr [EDX + 0x10c]        ; 0058a510
    ADD ESP,0x4                         ; 0058a516
    TEST EAX,EAX                        ; 0058a519
    JZ 0x00589dd4                       ; 0058a51b
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,[0x005fe9dc]                ; 0058a521 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 0058a526 | g_CGameInstance.field532_0x244
    MOV EAX,[0x01d5ba14]                ; 0058a530 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058a535
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0058a53c
    JMP 0x0058a3a7                      ; 0058a542
        ;   XREF to: 0058a3a7 (UNCONDITIONAL_JUMP)  ; LAB_0058a3a7
    PUSH 0x1                            ; 0058a547
        ;   Label: LAB_0058a547
    PUSH 0x11                           ; 0058a549
    PUSH ESI                            ; 0058a54b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a54c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058a551
    JMP 0x00589dd4                      ; 0058a554
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x5d8627                       ; 0058a559 | = "zom-a0?.wav"
        ;   Label: LAB_0058a559
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058a55e
    PUSH EBX                            ; 0058a564
    CALL dword ptr [EAX + 0x2c]         ; 0058a565
    ADD ESP,0x8                         ; 0058a568
    MOV dword ptr [EBX + 0xd13c],EAX    ; 0058a56b
    JMP 0x00589dd4                      ; 0058a571
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH dword ptr [EBP + 0x92]         ; 0058a576
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058a57c
    PUSH EBX                            ; 0058a582
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0058a583
    CALL dword ptr [EAX + 0x144]        ; 0058a589
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0058a58f
    ADD ESP,0x8                         ; 0058a595
    TEST EDI,EDI                        ; 0058a598
    JNZ 0x0058a5e3                      ; 0058a59a
        ;   XREF to: 0058a5e3 (CONDITIONAL_JUMP)  ; LAB_0058a5e3
    CMP dword ptr [EBP + 0x12],0x0      ; 0058a59c
    JZ 0x0058a5e3                       ; 0058a5a0
        ;   XREF to: 0058a5e3 (CONDITIONAL_JUMP)  ; LAB_0058a5e3
    MOV EAX,[0x01d5ba14]                ; 0058a5a2 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058a5a7
    PUSH EAX                            ; 0058a5ae
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058a5af
    CALL dword ptr [EDX + 0x10c]        ; 0058a5b5
    ADD ESP,0x4                         ; 0058a5bb
    TEST EAX,EAX                        ; 0058a5be
    JZ 0x0058a5e3                       ; 0058a5c0
        ;   XREF to: 0058a5e3 (CONDITIONAL_JUMP)  ; LAB_0058a5e3
    MOV EAX,[0x005fe9dc]                ; 0058a5c2 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 0058a5c7 | g_CGameInstance.field532_0x244
    MOV EAX,[0x01d5ba14]                ; 0058a5d1 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058a5d6
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0058a5dd
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0058a5e3
        ;   Label: LAB_0058a5e3
    JZ 0x0058a636                       ; 0058a5ea
        ;   XREF to: 0058a636 (CONDITIONAL_JUMP)  ; LAB_0058a636
    TEST ESI,ESI                        ; 0058a5ec
    JNZ 0x0058a66b                      ; 0058a5ee
        ;   XREF to: 0058a66b (CONDITIONAL_JUMP)  ; LAB_0058a66b
    MOV EDI,dword ptr [EBX + 0xd13c]    ; 0058a5f4
    PUSH EDI                            ; 0058a5fa
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058a5fb
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058a600
    TEST EAX,EAX                        ; 0058a603
    JNZ 0x0058a628                      ; 0058a605
        ;   XREF to: 0058a628 (CONDITIONAL_JUMP)  ; LAB_0058a628
    CMP dword ptr [EBX + 0xd0e0],0x0    ; 0058a607
    JZ 0x0058a664                       ; 0058a60e
        ;   XREF to: 0058a664 (CONDITIONAL_JUMP)  ; LAB_0058a664
    PUSH 0x5d8633                       ; 0058a610 | = "f-zombie-alert?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058a615
        ;   Label: LAB_0058a615
    PUSH EBX                            ; 0058a61b
    CALL dword ptr [EAX + 0x2c]         ; 0058a61c
    ADD ESP,0x8                         ; 0058a61f
    MOV dword ptr [EBX + 0xd13c],EAX    ; 0058a622
    PUSH EBX                            ; 0058a628
        ;   Label: LAB_0058a628
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058a629
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058a62e
    JMP 0x00589dd4                      ; 0058a631
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH dword ptr [EBP + 0x92]         ; 0058a636
        ;   Label: LAB_0058a636
    PUSH EBX                            ; 0058a63c
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0058a63d
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058a642
    TEST EAX,EAX                        ; 0058a645
    JNZ 0x00589dd4                      ; 0058a647
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 0058a64d
    PUSH EAX                            ; 0058a64f
    LEA EAX,[EBX + 0x158]               ; 0058a650
    PUSH EAX                            ; 0058a656
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a657
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058a65c
    JMP 0x00589dd4                      ; 0058a65f
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x5d8647                       ; 0058a664 | = "zom-a0?.wav"
        ;   Label: LAB_0058a664
    JMP 0x0058a615                      ; 0058a669
        ;   XREF to: 0058a615 (UNCONDITIONAL_JUMP)  ; LAB_0058a615
    MOV EAX,dword ptr [EBX + 0xd118]    ; 0058a66b
        ;   Label: LAB_0058a66b
    XOR ECX,ECX                         ; 0058a671
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058a673
    MOV dword ptr [EBP + 0x22],ECX      ; 0058a67a
    TEST ESI,ESI                        ; 0058a67d
    JZ 0x0058a688                       ; 0058a67f
        ;   XREF to: 0058a688 (CONDITIONAL_JUMP)  ; LAB_0058a688
    MOV dword ptr [EBP + 0x22],0x1      ; 0058a681
    MOV EAX,dword ptr [EBX + 0xd120]    ; 0058a688
        ;   Label: LAB_0058a688
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058a68e
    JZ 0x0058a69b                       ; 0058a696
        ;   XREF to: 0058a69b (CONDITIONAL_JUMP)  ; LAB_0058a69b
    INC dword ptr [EBP + 0x22]          ; 0058a698
    LEA EAX,[EBX + 0x249c]              ; 0058a69b
        ;   Label: LAB_0058a69b
    PUSH dword ptr [EBP + 0x92]         ; 0058a6a1
    MOV dword ptr [EAX + 0x8],0x0       ; 0058a6a7
    PUSH EBX                            ; 0058a6ae
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058a6af
    MOV dword ptr [EAX + 0x4],EDX       ; 0058a6b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058a6b5
    MOV dword ptr [EAX],EDX             ; 0058a6b8
    CALL core_zombie.cpp_CZombie_processPickup_FUN_0058b3f0 ; 0058a6ba
        ;   XREF to: 0058b3f0 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_processPickup_FUN_0058b3f0(CZombie * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058a6bf
    TEST EAX,EAX                        ; 0058a6c2
    JNZ 0x00589dd4                      ; 0058a6c4
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 0058a6ca
    MOV EAX,[0x005e6778]                ; 0058a6cc | DAT_005e6778
    PUSH EBX                            ; 0058a6d1
    MOV dword ptr [EBP + 0x26],EAX      ; 0058a6d2
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 0058a6d5
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 0058a6da
    MOV dword ptr [EBP + 0x2a],EAX      ; 0058a6dd
    TEST EAX,EAX                        ; 0058a6e0
    JL 0x0058a7b1                       ; 0058a6e2
        ;   XREF to: 0058a7b1 (CONDITIONAL_JUMP)  ; LAB_0058a7b1
    SHL EAX,0x3                         ; 0058a6e8
    MOV EDX,EAX                         ; 0058a6eb
    SHL EAX,0x4                         ; 0058a6ed
    SUB EAX,EDX                         ; 0058a6f0
    ADD EAX,EBX                         ; 0058a6f2
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0058a6f4
    TEST ESI,ESI                        ; 0058a6fa
    JZ 0x0058a7b1                       ; 0058a6fc
        ;   XREF to: 0058a7b1 (CONDITIONAL_JUMP)  ; LAB_0058a7b1
    CMP dword ptr [EBX + 0xd068],0x1    ; 0058a702
    JNZ 0x0058a7b1                      ; 0058a709
        ;   XREF to: 0058a7b1 (CONDITIONAL_JUMP)  ; LAB_0058a7b1
    MOV EDX,0x3f800000                  ; 0058a70f
    MOV EAX,ESI                         ; 0058a714
    MOV dword ptr [EBP + 0x2e],EDX      ; 0058a716
    TEST ESI,ESI                        ; 0058a719
    JZ 0x0058a7ab                       ; 0058a71b
        ;   XREF to: 0058a7ab (CONDITIONAL_JUMP)  ; LAB_0058a7ab
    PUSH ESI                            ; 0058a721
    MOV EDX,dword ptr [ESI + 0x154]     ; 0058a722
    LEA ESI,[EBP + 0xfffffbee]          ; 0058a728
    LEA EDI,[EBP + 0xfffffb76]          ; 0058a72e
    CALL dword ptr [EDX + 0x1c]         ; 0058a734
    MOV ECX,0x6                         ; 0058a737
    LEA ESI,[EBP + 0xfffffbee]          ; 0058a73c
    LEA EAX,[EBP + 0xfffffeb2]          ; 0058a742
    ADD ESP,0x4                         ; 0058a748
    MOVSD.REP ES:EDI,ESI                ; 0058a74b
    PUSH EAX                            ; 0058a74d
    LEA ESI,[EBP + 0xfffffb76]          ; 0058a74e
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058a754
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 0058a759
    FSUB float ptr [EBP + 0xfffffb76]   ; 0058a75c
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0058a762
    FLD float ptr [ESI + 0x10]          ; 0058a768
    FSUB float ptr [EBP + 0xfffffb7a]   ; 0058a76b
    LEA EDI,[EBP + 0xfffffc2a]          ; 0058a771
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0058a777
    FLD float ptr [ESI + 0x14]          ; 0058a77d
    FSUB float ptr [EBP + 0xfffffb7e]   ; 0058a780
    LEA ESI,[EBP + 0xfffffeb2]          ; 0058a786
    FSTP float ptr [EBP + 0xfffffeba]   ; 0058a78c
    MOVSD ES:EDI,ESI                    ; 0058a792
    MOVSD ES:EDI,ESI                    ; 0058a793
    MOVSD ES:EDI,ESI                    ; 0058a794
    FLD float ptr [EBP + 0xfffffc32]    ; 0058a795
    FMUL double ptr [0x005d86cf]        ; 0058a79b | DAT_005d86cf
    FLD1                                ; 0058a7a1
    FADDP                               ; 0058a7a3
    ADD ESP,0x4                         ; 0058a7a5
    FSTP float ptr [EBP + 0x2e]         ; 0058a7a8
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0058a7ab
        ;   Label: LAB_0058a7ab
    MOV dword ptr [EBP + 0x26],EAX      ; 0058a7ae
    PUSH 0x3eb2b8c2                     ; 0058a7b1
        ;   Label: LAB_0058a7b1
    PUSH 0x3f8ccccd                     ; 0058a7b6
    XOR ECX,ECX                         ; 0058a7bb
    MOV EAX,dword ptr [EBP + 0x26]      ; 0058a7bd
    MOV dword ptr [EBP + 0xffffff72],ECX ; 0058a7c0
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0058a7c6
    LEA EAX,[EBP + 0xffffff72]          ; 0058a7cc
    MOV dword ptr [EBP + 0xffffff76],ECX ; 0058a7d2
    PUSH EAX                            ; 0058a7d8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058a7d9
    PUSH EAX                            ; 0058a7df
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058a7e0
    CALL dword ptr [EDX + 0xc4]         ; 0058a7e6
    ADD ESP,0x4                         ; 0058a7ec
    PUSH EAX                            ; 0058a7ef
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058a7f0
    ADD EAX,0x20                        ; 0058a7f6
    PUSH EAX                            ; 0058a7f9
    PUSH EBX                            ; 0058a7fa
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0058a7fb
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 0058a800
    ADD ESP,0x18                        ; 0058a806
    MOV dword ptr [EBP + 0x4e],EDX      ; 0058a809
    TEST EAX,EAX                        ; 0058a80c
    JL 0x0058a893                       ; 0058a80e
        ;   XREF to: 0058a893 (CONDITIONAL_JUMP)  ; LAB_0058a893
    JLE 0x0058a91a                      ; 0058a814
        ;   XREF to: 0058a91a (CONDITIONAL_JUMP)  ; LAB_0058a91a
    CMP dword ptr [EBP + 0x22],0x0      ; 0058a81a
    JLE 0x00589dd4                      ; 0058a81e
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBX + 0xcde0]        ; 0058a824
    FLDZ                                ; 0058a82a
    FCOMPP                              ; 0058a82c
    FNSTSW AX                           ; 0058a82e
    SAHF                                ; 0058a830
    JC 0x00589dd4                       ; 0058a831
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058a837
    PUSH EAX                            ; 0058a83d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058a83e
    CALL dword ptr [EDX + 0xf4]         ; 0058a844
    ADD ESP,0x4                         ; 0058a84a
    TEST EAX,EAX                        ; 0058a84d
    JNZ 0x00589dd4                      ; 0058a84f
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV ESI,dword ptr [EBP + 0x2a]      ; 0058a855
    TEST ESI,ESI                        ; 0058a858
    JL 0x0058a8bd                       ; 0058a85a
        ;   XREF to: 0058a8bd (CONDITIONAL_JUMP)  ; LAB_0058a8bd
    LEA EAX,[ESI*0x8 + 0x0]             ; 0058a85c
    MOV EDX,EAX                         ; 0058a863
    SHL EAX,0x4                         ; 0058a865
    SUB EAX,EDX                         ; 0058a868
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0058a86a
    JZ 0x0058a8bd                       ; 0058a872
        ;   XREF to: 0058a8bd (CONDITIONAL_JUMP)  ; LAB_0058a8bd
    PUSH 0x1                            ; 0058a874
    PUSH 0x4                            ; 0058a876
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0058a878
    PUSH EDX                            ; 0058a87b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a87c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0058a87c
    ADD ESP,0xc                         ; 0058a881
    MOV dword ptr [EBX + 0xcde0],0x3f4ccccd ; 0058a884
    JMP 0x00589dd4                      ; 0058a88e
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058a893
        ;   Label: LAB_0058a893
    PUSH 0x5d8653                       ; 0058a894 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0058a899 | g_CConsolePtr
    PUSH ECX                            ; 0058a89f | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058a8a0
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0058a8a5
    PUSH 0x1                            ; 0058a8a8
    PUSH 0x0                            ; 0058a8aa
    MOV ESI,dword ptr [EBP + 0x4e]      ; 0058a8ac
    PUSH ESI                            ; 0058a8af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058a8b0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058a8b5
    JMP 0x00589dd4                      ; 0058a8b8
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBP + 0x12],0x0      ; 0058a8bd
        ;   Label: LAB_0058a8bd
    JZ 0x0058a90a                       ; 0058a8c1
        ;   XREF to: 0058a90a (CONDITIONAL_JUMP)  ; LAB_0058a90a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058a8c3
    PUSH EAX                            ; 0058a8c9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058a8ca
    CALL dword ptr [EDX + 0x10c]        ; 0058a8d0
    ADD ESP,0x4                         ; 0058a8d6
    TEST EAX,EAX                        ; 0058a8d9
    JZ 0x0058a90a                       ; 0058a8db
        ;   XREF to: 0058a90a (CONDITIONAL_JUMP)  ; LAB_0058a90a
    PUSH 0x3f000000                     ; 0058a8dd
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0058a8e2
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    MOV EDX,EAX                         ; 0058a8e7
    ADD ESP,0x4                         ; 0058a8e9
    LEA EAX,[EBX + 0x158]               ; 0058a8ec
    TEST EDX,EDX                        ; 0058a8f2
    JZ 0x0058a900                       ; 0058a8f4
        ;   XREF to: 0058a900 (CONDITIONAL_JUMP)  ; LAB_0058a900
    PUSH 0x1                            ; 0058a8f6
    PUSH 0x13                           ; 0058a8f8
    PUSH EAX                            ; 0058a8fa
    JMP 0x0058a87c                      ; 0058a8fb
        ;   XREF to: 0058a87c (UNCONDITIONAL_JUMP)  ; LAB_0058a87c
    PUSH 0x1                            ; 0058a900
        ;   Label: LAB_0058a900
    PUSH 0x14                           ; 0058a902
    PUSH EAX                            ; 0058a904
    JMP 0x0058a87c                      ; 0058a905
        ;   XREF to: 0058a87c (UNCONDITIONAL_JUMP)  ; LAB_0058a87c
    PUSH 0x1                            ; 0058a90a
        ;   Label: LAB_0058a90a
    PUSH 0x5                            ; 0058a90c
    LEA EAX,[EBX + 0x158]               ; 0058a90e
    PUSH EAX                            ; 0058a914
    JMP 0x0058a87c                      ; 0058a915
        ;   XREF to: 0058a87c (UNCONDITIONAL_JUMP)  ; LAB_0058a87c
    MOV EDI,dword ptr [EBX + 0xd068]    ; 0058a91a
        ;   Label: LAB_0058a91a
    PUSH EDI                            ; 0058a920
    PUSH EBX                            ; 0058a921
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 0058a922
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    MOV dword ptr [EBP + 0x32],EAX      ; 0058a927
    LEA EAX,[EBX + 0x20]                ; 0058a92a
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0058a92d
    FLD float ptr [EAX]                 ; 0058a933
    FSUB float ptr [EDX + 0x20]         ; 0058a935
    FSTP float ptr [EBP + 0xfffffd92]   ; 0058a938
    FLD float ptr [EAX + 0x4]           ; 0058a93e
    FSUB float ptr [EDX + 0x24]         ; 0058a941
    LEA ESI,[EBP + 0xfffffd92]          ; 0058a944
    FSTP float ptr [EBP + 0xfffffd96]   ; 0058a94a
    FLD float ptr [EAX + 0x8]           ; 0058a950
    FSUB float ptr [EDX + 0x28]         ; 0058a953
    LEA EDI,[EBP + 0xfffffd02]          ; 0058a956
    FSTP float ptr [EBP + 0xfffffd9a]   ; 0058a95c
    MOVSD ES:EDI,ESI                    ; 0058a962
    MOVSD ES:EDI,ESI                    ; 0058a963
    MOVSD ES:EDI,ESI                    ; 0058a964
    FLD float ptr [EBP + 0xfffffd06]    ; 0058a965
    FMUL ST0                            ; 0058a96b
    FLD float ptr [EBP + 0xfffffd02]    ; 0058a96d
    FMUL ST0                            ; 0058a973
    FADDP                               ; 0058a975
    FLD float ptr [EBP + 0xfffffd0a]    ; 0058a977
    FMUL ST0                            ; 0058a97d
    FADDP                               ; 0058a97f
    FSQRT                               ; 0058a981
    ADD ESP,0x8                         ; 0058a983
    ADD EDX,0x20                        ; 0058a986
    FCOMP double ptr [0x005d86e7]       ; 0058a989 | DAT_005d86e7
    FNSTSW AX                           ; 0058a98f
    SAHF                                ; 0058a991
    JNC 0x00589dd4                      ; 0058a992
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EDX                            ; 0058a998
    PUSH EBX                            ; 0058a999
    LEA ESI,[EBP + 0xfffffe16]          ; 0058a99a
    LEA EDI,[EBP + 0xfffffd32]          ; 0058a9a0
    CALL core_actor.cpp_FUN_00408bf0    ; 0058a9a6
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffe16]          ; 0058a9ab
    LEA EAX,[EBP + 0xfffffd32]          ; 0058a9b1
    ADD ESP,0x8                         ; 0058a9b7
    MOVSD ES:EDI,ESI                    ; 0058a9ba
    MOVSD ES:EDI,ESI                    ; 0058a9bb
    MOVSD ES:EDI,ESI                    ; 0058a9bc
    PUSH EAX                            ; 0058a9bd
    LEA ESI,[EBP + 0xfffffd6e]          ; 0058a9be
    LEA EDI,[EBP + 0xfffffca2]          ; 0058a9c4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0058a9ca
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xfffffd6e]          ; 0058a9cf
    MOVSD ES:EDI,ESI                    ; 0058a9d5
    MOVSD ES:EDI,ESI                    ; 0058a9d6
    MOVSD ES:EDI,ESI                    ; 0058a9d7
    FLD float ptr [EBP + 0xfffffca6]    ; 0058a9d8
    FABS                                ; 0058a9de
    ADD ESP,0x4                         ; 0058a9e0
    FCOMP double ptr [0x005d86ef]       ; 0058a9e3 | DAT_005d86ef
    FNSTSW AX                           ; 0058a9e9
    SAHF                                ; 0058a9eb
    JNC 0x00589dd4                      ; 0058a9ec
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBP + 0x32]      ; 0058a9f2
    TEST EAX,EAX                        ; 0058a9f5
    JL 0x00589dd4                       ; 0058a9f7
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV ESI,dword ptr [EBX + 0xd068]    ; 0058a9fd
    CMP ESI,0x2                         ; 0058aa03
    JC 0x00589dd4                       ; 0058aa06
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    SHL EAX,0x3                         ; 0058aa0c
    MOV EDX,EAX                         ; 0058aa0f
    SHL EAX,0x4                         ; 0058aa11
    SUB EAX,EDX                         ; 0058aa14
    ADD EAX,EBX                         ; 0058aa16
    CMP ESI,0x2                         ; 0058aa18
    JA 0x0058aa8a                       ; 0058aa1b
        ;   XREF to: 0058aa8a (CONDITIONAL_JUMP)  ; LAB_0058aa8a
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0058aa1d
    JZ 0x00589dd4                       ; 0058aa24
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058aa2a
    PUSH 0x5d8680                       ; 0058aa2b | = "%s lugging\n"
    MOV EAX,[0x005f1690]                ; 0058aa30 | g_CConsolePtr
    PUSH EAX                            ; 0058aa35 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058aa36
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0058aa3b
    PUSH 0x1                            ; 0058aa3e
    PUSH 0xe                            ; 0058aa40
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0058aa42
    PUSH EDX                            ; 0058aa45
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058aa46
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058aa4b
    JMP 0x00589dd4                      ; 0058aa4e
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0058aa53
        ;   Label: LAB_0058aa53
    JZ 0x00589dd4                       ; 0058aa5a
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058aa60
    PUSH 0x5d8674                       ; 0058aa61 | = "%s tossing\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0058aa66 | g_CConsolePtr
    PUSH ECX                            ; 0058aa6c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058aa6d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0058aa72
    PUSH 0x1                            ; 0058aa75
    PUSH 0xc                            ; 0058aa77
    MOV ESI,dword ptr [EBP + 0x4e]      ; 0058aa79
    PUSH ESI                            ; 0058aa7c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058aa7d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058aa82
    JMP 0x00589dd4                      ; 0058aa85
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP ESI,0x3                         ; 0058aa8a
        ;   Label: LAB_0058aa8a
    JZ 0x0058aa53                       ; 0058aa8d
        ;   XREF to: 0058aa53 (CONDITIONAL_JUMP)  ; LAB_0058aa53
    JMP 0x00589dd4                      ; 0058aa8f
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058aa94
        ;   Label: caseD_5
    TEST EAX,EAX                        ; 0058aa9a
    JZ 0x0058a628                       ; 0058aa9c
        ;   XREF to: 0058a628 (CONDITIONAL_JUMP)  ; LAB_0058a628
    PUSH EAX                            ; 0058aaa2
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058aaa3
    CALL dword ptr [EDX + 0x10c]        ; 0058aaa9
    ADD ESP,0x4                         ; 0058aaaf
    TEST EAX,EAX                        ; 0058aab2
    JG 0x0058a628                       ; 0058aab4
        ;   XREF to: 0058a628 (CONDITIONAL_JUMP)  ; LAB_0058a628
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058aaba
    PUSH EAX                            ; 0058aac0
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058aac1
    CALL dword ptr [EDX + 0xf4]         ; 0058aac7
    ADD ESP,0x4                         ; 0058aacd
    TEST EAX,EAX                        ; 0058aad0
    JNZ 0x0058aae9                      ; 0058aad2
        ;   XREF to: 0058aae9 (CONDITIONAL_JUMP)  ; LAB_0058aae9
    MOV EDX,0x40400000                  ; 0058aad4
    MOV EAX,[0x005e6778]                ; 0058aad9 | DAT_005e6778
    MOV dword ptr [EBP + -0x1e],EDX     ; 0058aade
    MOV dword ptr [EBP + 0x62],EAX      ; 0058aae1
    JMP 0x00589dd4                      ; 0058aae4
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP EAX,EBX                         ; 0058aae9
        ;   Label: LAB_0058aae9
    JZ 0x00589dd4                       ; 0058aaeb
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058aaf1
        ;   Label: LAB_0058aaf1
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058aaf2
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058aaf7
    JMP 0x00589dd4                      ; 0058aafa
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0058aaff
        ;   Label: caseD_4
    JZ 0x0058aaf1                       ; 0058ab06
        ;   XREF to: 0058aaf1 (CONDITIONAL_JUMP)  ; LAB_0058aaf1
    PUSH 0x1                            ; 0058ab08
    PUSH EBX                            ; 0058ab0a
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50 ; 0058ab0b
        ;   XREF to: 0058bd50 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_getPickupHandIndex_FUN_0058bd50(CZombie * this_ptr, int object_shape_type)
    ADD ESP,0x8                         ; 0058ab10
    MOV ESI,EAX                         ; 0058ab13
    TEST EAX,EAX                        ; 0058ab15
    JL 0x0058aca9                       ; 0058ab17
        ;   XREF to: 0058aca9 (CONDITIONAL_JUMP)  ; LAB_0058aca9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058ab1d
    PUSH EAX                            ; 0058ab23
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058ab24
    CALL dword ptr [EDX + 0x10c]        ; 0058ab2a
    ADD ESP,0x4                         ; 0058ab30
    TEST EAX,EAX                        ; 0058ab33
    JG 0x0058aca9                       ; 0058ab35
        ;   XREF to: 0058aca9 (CONDITIONAL_JUMP)  ; LAB_0058aca9
    MOV EAX,ESI                         ; 0058ab3b
    SHL EAX,0x3                         ; 0058ab3d
    MOV EDX,EAX                         ; 0058ab40
    SHL EAX,0x4                         ; 0058ab42
    SUB EAX,EDX                         ; 0058ab45
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0058ab47
    JZ 0x0058aca9                       ; 0058ab4f
        ;   XREF to: 0058aca9 (CONDITIONAL_JUMP)  ; LAB_0058aca9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058ab55
    PUSH EAX                            ; 0058ab5b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058ab5c
    CALL dword ptr [EDX + 0xf4]         ; 0058ab62
    ADD ESP,0x4                         ; 0058ab68
    TEST EAX,EAX                        ; 0058ab6b
    JNZ 0x0058aca9                      ; 0058ab6d
        ;   XREF to: 0058aca9 (CONDITIONAL_JUMP)  ; LAB_0058aca9
    MOV EAX,ESI                         ; 0058ab73
    SHL EAX,0x3                         ; 0058ab75
    MOV EDX,EAX                         ; 0058ab78
    SHL EAX,0x4                         ; 0058ab7a
    SUB EAX,EDX                         ; 0058ab7d
    MOV EDX,0x3f800000                  ; 0058ab7f
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 0058ab84
    MOV dword ptr [EBP + 0x42],EDX      ; 0058ab8b
    TEST EAX,EAX                        ; 0058ab8e
    JZ 0x0058ac59                       ; 0058ab90
        ;   XREF to: 0058ac59 (CONDITIONAL_JUMP)  ; LAB_0058ac59
    PUSH EAX                            ; 0058ab96
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058ab97
    LEA ESI,[EBP + 0xfffffc06]          ; 0058ab9d
    LEA EDI,[EBP + 0xfffffba6]          ; 0058aba3
    CALL dword ptr [EDX + 0x1c]         ; 0058aba9
    MOV ECX,0x6                         ; 0058abac
    LEA ESI,[EBP + 0xfffffc06]          ; 0058abb1
    ADD ESP,0x4                         ; 0058abb7
    MOVSD.REP ES:EDI,ESI                ; 0058abba
    LEA EAX,[EBP + 0xfffffcea]          ; 0058abbc
    LEA ESI,[EBP + 0xfffffba6]          ; 0058abc2
    PUSH EAX                            ; 0058abc8
    LEA EDI,[ESI + 0xc]                 ; 0058abc9
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 0058abcc
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [EDI]                 ; 0058abd1
    FSUB float ptr [ESI]                ; 0058abd3
    FSTP float ptr [EBP + 0xfffffcea]   ; 0058abd5
    FLD float ptr [EDI + 0x4]           ; 0058abdb
    FSUB float ptr [ESI + 0x4]          ; 0058abde
    FSTP float ptr [EBP + 0xfffffcee]   ; 0058abe1
    FLD float ptr [EDI + 0x8]           ; 0058abe7
    LEA EDI,[EBP + 0xfffffe8e]          ; 0058abea
    FSUB float ptr [ESI + 0x8]          ; 0058abf0
    LEA ESI,[EBP + 0xfffffcea]          ; 0058abf3
    FSTP float ptr [EBP + 0xfffffcf2]   ; 0058abf9
    MOVSD ES:EDI,ESI                    ; 0058abff
    MOVSD ES:EDI,ESI                    ; 0058ac00
    MOVSD ES:EDI,ESI                    ; 0058ac01
    LEA EDI,[EBP + 0xfffffeca]          ; 0058ac02
    LEA ESI,[EBP + 0xfffffe8e]          ; 0058ac08
    MOVSD ES:EDI,ESI                    ; 0058ac0e
    MOVSD ES:EDI,ESI                    ; 0058ac0f
    MOVSD ES:EDI,ESI                    ; 0058ac10
    LEA EDI,[EBP + 0xffffff5a]          ; 0058ac11
    LEA ESI,[EBP + 0xfffffeca]          ; 0058ac17
    MOVSD ES:EDI,ESI                    ; 0058ac1d
    MOVSD ES:EDI,ESI                    ; 0058ac1e
    MOVSD ES:EDI,ESI                    ; 0058ac1f
    LEA EDI,[EBP + 0xfffffd26]          ; 0058ac20
    LEA ESI,[EBP + 0xffffff5a]          ; 0058ac26
    MOVSD ES:EDI,ESI                    ; 0058ac2c
    MOVSD ES:EDI,ESI                    ; 0058ac2d
    MOVSD ES:EDI,ESI                    ; 0058ac2e
    LEA EDI,[EBP + 0xfffffc7e]          ; 0058ac2f
    LEA ESI,[EBP + 0xfffffd26]          ; 0058ac35
    MOVSD ES:EDI,ESI                    ; 0058ac3b
    MOVSD ES:EDI,ESI                    ; 0058ac3c
    MOVSD ES:EDI,ESI                    ; 0058ac3d
    FLD float ptr [EBP + 0xfffffc86]    ; 0058ac3e
    FMUL double ptr [0x005d86cf]        ; 0058ac44 | DAT_005d86cf
    FLD float ptr [EBP + 0x42]          ; 0058ac4a
    FXCH                                ; 0058ac4d
    FADD ST0,ST1                        ; 0058ac4f
    ADD ESP,0x4                         ; 0058ac51
    FSTP ST1                            ; 0058ac54
    FSTP float ptr [EBP + 0x42]         ; 0058ac56
    MOV EAX,dword ptr [EBP + 0x42]      ; 0058ac59
        ;   Label: LAB_0058ac59
    MOV dword ptr [EBP + 0x62],EAX      ; 0058ac5c
    LEA EAX,[EBX + 0x158]               ; 0058ac5f
    PUSH EAX                            ; 0058ac65
    CALL core_motion.cpp_FUN_004fc930   ; 0058ac66
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD1                                ; 0058ac6b
    MOV dword ptr [EBP + 0x76],EAX      ; 0058ac6d
    ADD ESP,0x4                         ; 0058ac70
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058ac73
    MOV dword ptr [EBP + 0x3e],EAX      ; 0058ac76
    FLD float ptr [EBP + 0x3e]          ; 0058ac79
    FSTP double ptr [EBP + -0x4a]       ; 0058ac7c
    FCOMP double ptr [EBP + -0x4a]      ; 0058ac7f
    FNSTSW AX                           ; 0058ac82
    SAHF                                ; 0058ac84
    JA 0x00589dd4                       ; 0058ac85
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD double ptr [EBP + -0x4a]        ; 0058ac8b
    FCOMP double ptr [0x005d86df]       ; 0058ac8e | DAT_005d86df
    FNSTSW AX                           ; 0058ac94
    SAHF                                ; 0058ac96
    JA 0x00589dd4                       ; 0058ac97
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    MOV dword ptr [EBP + -0x1a],0x1     ; 0058ac9d
    JMP 0x00589dd4                      ; 0058aca4
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH EBX                            ; 0058aca9
        ;   Label: LAB_0058aca9
    PUSH 0x5d868c                       ; 0058acaa | = "%s gave up swing\n"
    MOV ESI,dword ptr [0x005f1690]      ; 0058acaf | g_CConsolePtr
    PUSH ESI                            ; 0058acb5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058acb6
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 0058acbb
    PUSH EBX                            ; 0058acbe
    CALL core_zombie.cpp_FUN_0058cc20   ; 0058acbf
        ;   XREF to: 0058cc20 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0058cc20(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058acc4
    JMP 0x00589dd4                      ; 0058acc7
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    PUSH dword ptr [EBP + 0x92]         ; 0058accc
        ;   Label: caseD_12
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058acd2
    PUSH EBX                            ; 0058acd8
    CALL dword ptr [EAX + 0x144]        ; 0058acd9
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0058acdf
    ADD ESP,0x8                         ; 0058ace5
    TEST EDX,EDX                        ; 0058ace8
    JZ 0x00589dd4                       ; 0058acea
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    LEA ESI,[EBX + 0x20]                ; 0058acf0
    LEA EAX,[EDX + 0x20]                ; 0058acf3
    FLD float ptr [ESI]                 ; 0058acf6
    FSUB float ptr [EAX]                ; 0058acf8
    FMUL ST0                            ; 0058acfa
    FLD float ptr [ESI + 0x8]           ; 0058acfc
    FSUB float ptr [EAX + 0x8]          ; 0058acff
    FMUL ST0                            ; 0058ad02
    FADDP                               ; 0058ad04
    FSQRT                               ; 0058ad06
    FCOMP double ptr [0x005d86d7]       ; 0058ad08 | DAT_005d86d7
    FNSTSW AX                           ; 0058ad0e
    SAHF                                ; 0058ad10
    JA 0x00589dd4                       ; 0058ad11
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    FLD float ptr [EBX + 0x24]          ; 0058ad17
    FSUB float ptr [EDX + 0x24]         ; 0058ad1a
    FABS                                ; 0058ad1d
    FCOMP double ptr [0x005d86df]       ; 0058ad1f | DAT_005d86df
    FNSTSW AX                           ; 0058ad25
    SAHF                                ; 0058ad27
    JA 0x00589dd4                       ; 0058ad28
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    PUSH 0x1                            ; 0058ad2e
    PUSH 0x0                            ; 0058ad30
    PUSH EDI                            ; 0058ad32
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058ad33
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058ad38
    JMP 0x00589dd4                      ; 0058ad3b
        ;   XREF to: 00589dd4 (UNCONDITIONAL_JUMP)  ; caseD_11
    MOV ECX,0xbf800000                  ; 0058ad40
        ;   Label: LAB_0058ad40
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0058ad45
    MOV ESI,0x3e99999a                  ; 0058ad48
    PUSH EDI                            ; 0058ad4d
    MOV dword ptr [EBP + 0x62],ECX      ; 0058ad4e
    MOV dword ptr [EBP + -0x1e],ESI     ; 0058ad51
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058ad54
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058ad59
    ADD ESP,0x4                         ; 0058ad5c
    CMP EAX,0x16                        ; 0058ad5f
    JA 0x00589dd4                       ; 0058ad62
        ;   XREF to: 00589dd4 (CONDITIONAL_JUMP)  ; caseD_11
    JMP dword ptr [EAX*0x4 + 0x588e80]  ; 0058ad68 | caseD_0 | caseD_3 | caseD_4
        ;   Label: switchD
    CMP ESI,0x10                        ; 0058ad6f
        ;   Label: LAB_0058ad6f
    JNZ 0x0058adcb                      ; 0058ad72
        ;   XREF to: 0058adcb (CONDITIONAL_JUMP)  ; LAB_0058adcb
    PUSH EAX                            ; 0058ad74
    PUSH EBX                            ; 0058ad75
    LEA ESI,[EBP + 0xfffffd56]          ; 0058ad76
    LEA EDI,[EBP + 0xfffffc8a]          ; 0058ad7c
    CALL core_actor.cpp_FUN_00408b00    ; 0058ad82
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xfffffd56]          ; 0058ad87
    LEA EAX,[EBX + 0x20]                ; 0058ad8d
    MOVSD ES:EDI,ESI                    ; 0058ad90
    MOVSD ES:EDI,ESI                    ; 0058ad91
    MOVSD ES:EDI,ESI                    ; 0058ad92
    FLD float ptr [EAX]                 ; 0058ad93
    FADD float ptr [EBP + 0xfffffc8a]   ; 0058ad95
    FLD float ptr [EAX + 0x4]           ; 0058ad9b
    FXCH                                ; 0058ad9e
    FSTP float ptr [EAX]                ; 0058ada0
    FADD float ptr [EBP + 0xfffffc8e]   ; 0058ada2
    FLD float ptr [EAX + 0x8]           ; 0058ada8
    FXCH                                ; 0058adab
    FSTP float ptr [EAX + 0x4]          ; 0058adad
    FADD float ptr [EBP + 0xfffffc92]   ; 0058adb0
    FSTP float ptr [EAX + 0x8]          ; 0058adb6
    MOV EAX,dword ptr [EBP + 0x52]      ; 0058adb9
    MOV dword ptr [EAX + 0x8],0x0       ; 0058adbc
    ADD ESP,0x8                         ; 0058adc3
    JMP 0x00589b5d                      ; 0058adc6
        ;   XREF to: 00589b5d (UNCONDITIONAL_JUMP)  ; LAB_00589b5d
    PUSH EBX                            ; 0058adcb
        ;   Label: LAB_0058adcb
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 0058adcc
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058add1
    TEST EAX,EAX                        ; 0058add4
    JZ 0x00589b68                       ; 0058add6
        ;   XREF to: 00589b68 (CONDITIONAL_JUMP)  ; LAB_00589b68
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0058addc
    TEST EDX,EDX                        ; 0058ade2
    JZ 0x0058ae12                       ; 0058ade4
        ;   XREF to: 0058ae12 (CONDITIONAL_JUMP)  ; LAB_0058ae12
    MOV EAX,EDX                         ; 0058ade6
    PUSH EAX                            ; 0058ade8
    MOV EDX,dword ptr [EDX + 0x154]     ; 0058ade9
    CALL dword ptr [EDX + 0xf4]         ; 0058adef
    ADD ESP,0x4                         ; 0058adf5
    CMP EAX,EBX                         ; 0058adf8
    JNZ 0x0058ae12                      ; 0058adfa
        ;   XREF to: 0058ae12 (CONDITIONAL_JUMP)  ; LAB_0058ae12
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058adfc
    PUSH ECX                            ; 0058ae02
    MOV ESI,dword ptr [0x00603b28]      ; 0058ae03 | g_CDemonSetPtr
    PUSH ESI                            ; 0058ae09 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0058ae0a
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058ae0f
    PUSH dword ptr [EBP + 0x92]         ; 0058ae12
        ;   Label: LAB_0058ae12
    PUSH EBX                            ; 0058ae18
    LEA ESI,[EBX + 0x2518]              ; 0058ae19
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0058ae1f
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 0058ae24
    FMUL float ptr [EBP + 0x92]         ; 0058ae26
    FSTP float ptr [EBP + 0xffffff7e]   ; 0058ae2c
    FLD float ptr [ESI + 0x4]           ; 0058ae32
    FMUL float ptr [EBP + 0x92]         ; 0058ae35
    FSTP float ptr [EBP + -0x7e]        ; 0058ae3b
    FLD float ptr [ESI + 0x8]           ; 0058ae3e
    FMUL float ptr [EBP + 0x92]         ; 0058ae41
    LEA EDI,[EBP + 0xfffffcd2]          ; 0058ae47
    LEA ESI,[EBP + 0xffffff7e]          ; 0058ae4d
    FSTP float ptr [EBP + -0x7a]        ; 0058ae53
    MOVSD ES:EDI,ESI                    ; 0058ae56
    MOVSD ES:EDI,ESI                    ; 0058ae57
    MOVSD ES:EDI,ESI                    ; 0058ae58
    LEA EDX,[EBX + 0x250c]              ; 0058ae59
    FLD float ptr [EBP + 0xfffffcd6]    ; 0058ae5f
    FLD float ptr [EBP + 0xfffffcd2]    ; 0058ae65
    FADD float ptr [EDX]                ; 0058ae6b
    FLD float ptr [EBP + 0xfffffcda]    ; 0058ae6d
    FXCH                                ; 0058ae73
    FSTP float ptr [EBP + 0xfffffd0e]   ; 0058ae75
    FXCH                                ; 0058ae7b
    FADD float ptr [EDX + 0x4]          ; 0058ae7d
    LEA EDI,[EBP + 0xfffffcae]          ; 0058ae80
    FSTP float ptr [EBP + 0xfffffd12]   ; 0058ae86
    FADD float ptr [EDX + 0x8]          ; 0058ae8c
    LEA ESI,[EBP + 0xfffffd0e]          ; 0058ae8f
    FSTP float ptr [EBP + 0xfffffd16]   ; 0058ae95
    MOVSD ES:EDI,ESI                    ; 0058ae9b
    MOVSD ES:EDI,ESI                    ; 0058ae9c
    MOVSD ES:EDI,ESI                    ; 0058ae9d
    LEA EAX,[EBX + 0x249c]              ; 0058ae9e
    FLD float ptr [EBP + 0xfffffcb2]    ; 0058aea4
    FLD float ptr [EBP + 0xfffffcae]    ; 0058aeaa
    FADD float ptr [EAX]                ; 0058aeb0
    FLD float ptr [EBP + 0xfffffcb6]    ; 0058aeb2
    FXCH                                ; 0058aeb8
    FSTP float ptr [EBP + 0xfffffe76]   ; 0058aeba
    FXCH                                ; 0058aec0
    FADD float ptr [EAX + 0x4]          ; 0058aec2
    LEA EDI,[EBP + 0xfffffcc6]          ; 0058aec5
    FSTP float ptr [EBP + 0xfffffe7a]   ; 0058aecb
    FADD float ptr [EAX + 0x8]          ; 0058aed1
    LEA ESI,[EBP + 0xfffffe76]          ; 0058aed4
    FSTP float ptr [EBP + 0xfffffe7e]   ; 0058aeda
    MOVSD ES:EDI,ESI                    ; 0058aee0
    MOVSD ES:EDI,ESI                    ; 0058aee1
    MOVSD ES:EDI,ESI                    ; 0058aee2
    MOV dword ptr [EDX + 0x8],0x0       ; 0058aee3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058aeea
    MOV dword ptr [EDX + 0x4],ECX       ; 0058aeed
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058aef0
    MOV dword ptr [EDX],ECX             ; 0058aef3
    MOV dword ptr [EAX + 0x8],0x0       ; 0058aef5
    ADD ESP,0x8                         ; 0058aefc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058aeff
    MOV dword ptr [EAX + 0x4],EDX       ; 0058af02
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058af05
    MOV dword ptr [EAX],EDX             ; 0058af08
    LEA EAX,[EBP + 0xfffffcc6]          ; 0058af0a
    PUSH EAX                            ; 0058af10
    PUSH EBX                            ; 0058af11
    CALL core_charactr.cpp_FUN_0042c230 ; 0058af12
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058af17
    JMP 0x00589b68                      ; 0058af1a
        ;   XREF to: 00589b68 (UNCONDITIONAL_JUMP)  ; LAB_00589b68
    MOV ESI,dword ptr [EBX + 0xd110]    ; 0058af1f
        ;   Label: LAB_0058af1f
    PUSH 0x3f000000                     ; 0058af25
    PUSH ESI                            ; 0058af2a
    PUSH EAX                            ; 0058af2b
    JMP 0x00589c5d                      ; 0058af2c
        ;   XREF to: 00589c5d (UNCONDITIONAL_JUMP)  ; LAB_00589c5d
    MOV EAX,dword ptr [EBX + 0xd128]    ; 0058af31
        ;   Label: LAB_0058af31
    SHL EAX,0x2                         ; 0058af37
    ADD EAX,EBX                         ; 0058af3a
    CMP dword ptr [EAX + 0x2298],0x0    ; 0058af3c
    JZ 0x00589c73                       ; 0058af43
        ;   XREF to: 00589c73 (CONDITIONAL_JUMP)  ; LAB_00589c73
    MOV dword ptr [EAX + 0x2298],0x0    ; 0058af49
    MOV EDI,dword ptr [EBX + 0xd110]    ; 0058af53
    PUSH 0x3e4ccccd                     ; 0058af59
    PUSH EDI                            ; 0058af5e
    MOV EAX,dword ptr [EBX + 0xd128]    ; 0058af5f
    PUSH EAX                            ; 0058af65
    PUSH EBX                            ; 0058af66
    CALL core_charactr.cpp_FUN_0042fdc0 ; 0058af67
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd128]    ; 0058af6c
    ADD ESP,0x10                        ; 0058af72
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1 ; 0058af75
    JMP 0x00589c73                      ; 0058af80
        ;   XREF to: 00589c73 (UNCONDITIONAL_JUMP)  ; LAB_00589c73

