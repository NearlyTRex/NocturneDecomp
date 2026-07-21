; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_004a7858 = 004a7ce0
;   undefined4 s_%s_confused_while_walking_to_scr_0058498f+1
;   string s_gargoyle-alive?.wav_005849ba
;   string s_gargoyle-stone.wav_005849ce
;   string s_gargoyle-stone.wav_005849e1
;   undefined4 DAT_005849f8
;   undefined4 DAT_00584a00
;   undefined4 DAT_00584a08
;   undefined4 DAT_0059df3c
;   undefined4 DAT_0059df48
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01bd1d80
;   undefined4 DAT_01c78b20
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7870
        ;   Label: core_gargoyle.cpp_CGargoyle_process_FUN_004a7870
    PUSH ESI                            ; 004a7871
    PUSH EDI                            ; 004a7872
    PUSH EBP                            ; 004a7873
    MOV EBP,ESP                         ; 004a7874
    SUB ESP,0xf4                        ; 004a7876
    SUB EBP,0x7a                        ; 004a787c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004a787f
    PUSH dword ptr [EBP + 0x92]         ; 004a7885
    PUSH EBX                            ; 004a788b
    CALL FUN_004259f0                   ; 004a788c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259f0()
    ADD ESP,0x8                         ; 004a7891
    TEST EAX,EAX                        ; 004a7894
    JZ 0x004a78ea                       ; 004a7896
        ;   XREF to: 004a78ea (CONDITIONAL_JUMP)  ; LAB_004a78ea
    LEA EAX,[EBX + 0x23a4]              ; 004a7898
        ;   Label: LAB_004a7898
    MOV dword ptr [EAX + 0x8],0x0       ; 004a789e
    FLD float ptr [EBP + 0x92]          ; 004a78a5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004a78ab
    MOV dword ptr [EAX + 0x4],EDX       ; 004a78ae
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a78b1
    MOV dword ptr [EAX],EDX             ; 004a78b4
    FMUL float ptr [EBX + 0xbc8c]       ; 004a78b6
    LEA ESI,[EBX + 0x150]               ; 004a78bc
    FSTP float ptr [EBP + 0x5e]         ; 004a78c2
    FLD float ptr [EBP + 0x5e]          ; 004a78c5
        ;   Label: LAB_004a78c5
    FLDZ                                ; 004a78c8
    FCOMPP                              ; 004a78ca
    FNSTSW AX                           ; 004a78cc
    SAHF                                ; 004a78ce
    JNC 0x004a790e                      ; 004a78cf
        ;   XREF to: 004a790e (CONDITIONAL_JUMP)  ; LAB_004a790e
    LEA EAX,[EBP + 0x5e]                ; 004a78d1
    PUSH EAX                            ; 004a78d4
    PUSH ESI                            ; 004a78d5
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004a78d6
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 004a78db
    PUSH EAX                            ; 004a78de
    PUSH EBX                            ; 004a78df
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004a78e0
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004a78e5
    JMP 0x004a78c5                      ; 004a78e8
        ;   XREF to: 004a78c5 (UNCONDITIONAL_JUMP)  ; LAB_004a78c5
    LEA EAX,[EBX + 0x150]               ; 004a78ea
        ;   Label: LAB_004a78ea
    PUSH EAX                            ; 004a78f0
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004a78f1
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004a78f6
    ADD ESP,0x4                         ; 004a78f9
    CMP EAX,0x8                         ; 004a78fc
    JZ 0x004a7906                       ; 004a78ff
        ;   XREF to: 004a7906 (CONDITIONAL_JUMP)  ; LAB_004a7906
    CMP EAX,0x5                         ; 004a7901
    JNZ 0x004a7898                      ; 004a7904
        ;   XREF to: 004a7898 (CONDITIONAL_JUMP)  ; LAB_004a7898
    LEA ESP,[EBP + 0x7a]                ; 004a7906
        ;   Label: LAB_004a7906
    POP EBP                             ; 004a7909
    POP EDI                             ; 004a790a
    POP ESI                             ; 004a790b
    POP EBX                             ; 004a790c
    RET                                 ; 004a790d
    FLD float ptr [EBX + 0xbc8c]        ; 004a790e
        ;   Label: LAB_004a790e
    FLD float ptr [EBP + 0x92]          ; 004a7914
    FMUL double ptr [0x005849f8]        ; 004a791a | DAT_005849f8
    FMULP                               ; 004a7920
    FLD float ptr [EBX + 0x23ac]        ; 004a7922
    PUSH ESI                            ; 004a7928
    FSTP float ptr [EBX + 0x242c]       ; 004a7929
    FSTP float ptr [EBX + 0x2430]       ; 004a792f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004a7935
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 004a793a
    PUSH dword ptr [EBP + 0x92]         ; 004a793d
    MOV EDI,dword ptr [EAX + 0x24]      ; 004a7943
    PUSH EBX                            ; 004a7946
    MOV dword ptr [EBP + 0x62],EDI      ; 004a7947
    CALL FUN_00428c00                   ; 004a794a
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428c00()
    ADD ESP,0x8                         ; 004a794f
    TEST EAX,EAX                        ; 004a7952
    JZ 0x004a8186                       ; 004a7954
        ;   XREF to: 004a8186 (CONDITIONAL_JUMP)  ; LAB_004a8186
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004a795a
    CMP EAX,0x2                         ; 004a7960
    JNC 0x004a7bbc                      ; 004a7963
        ;   XREF to: 004a7bbc (CONDITIONAL_JUMP)  ; LAB_004a7bbc
    CMP EAX,0x1                         ; 004a7969
    JNZ 0x004a7bc7                      ; 004a796c
        ;   XREF to: 004a7bc7 (CONDITIONAL_JUMP)  ; LAB_004a7bc7
    PUSH 0x1                            ; 004a7972
        ;   Label: LAB_004a7972
    PUSH 0x1                            ; 004a7974
    LEA EAX,[EBX + 0x150]               ; 004a7976
        ;   Label: LAB_004a7976
    PUSH EAX                            ; 004a797c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a797d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7982
        ;   Label: LAB_004a7982
    LEA EAX,[EBX + 0x23a4]              ; 004a7985
    MOV dword ptr [EAX + 0x8],0x0       ; 004a798b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004a7992
    MOV dword ptr [EAX + 0x4],EDX       ; 004a7995
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a7998
    MOV dword ptr [EAX],EDX             ; 004a799b
    FLD float ptr [EBX + 0xbca0]        ; 004a799d
        ;   Label: caseD_4
    FLDZ                                ; 004a79a3
    FCOMPP                              ; 004a79a5
    FNSTSW AX                           ; 004a79a7
    SAHF                                ; 004a79a9
    JNC 0x004a79be                      ; 004a79aa
        ;   XREF to: 004a79be (CONDITIONAL_JUMP)  ; LAB_004a79be
    FLD float ptr [EBX + 0xbca0]        ; 004a79ac
    FSUB float ptr [EBP + 0x92]         ; 004a79b2
    FSTP float ptr [EBX + 0xbca0]       ; 004a79b8
    PUSH EBX                            ; 004a79be
        ;   Label: LAB_004a79be
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004a79bf
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 004a79c4
    TEST EAX,EAX                        ; 004a79c7
    JZ 0x004a7a87                       ; 004a79c9
        ;   XREF to: 004a7a87 (CONDITIONAL_JUMP)  ; LAB_004a7a87
    FLD float ptr [EBP + 0x92]          ; 004a79cf
    FLD ST0                             ; 004a79d5
    FMUL double ptr [0x00584a08]        ; 004a79d7 | DAT_00584a08
    FLD float ptr [EBX + 0x2424]        ; 004a79dd
    FXCH                                ; 004a79e3
    FSUBR ST0,ST1                       ; 004a79e5
    LEA EDX,[EBX + 0x2420]              ; 004a79e7
    FSTP ST1                            ; 004a79ed
    FSTP float ptr [EBX + 0x2424]       ; 004a79ef
    FLD float ptr [EDX]                 ; 004a79f5
    FMUL ST1                            ; 004a79f7
    FSTP float ptr [EBP + -0xe]         ; 004a79f9
    FLD float ptr [EDX + 0x4]           ; 004a79fc
    FMUL ST1                            ; 004a79ff
    LEA ESI,[EBX + 0x2414]              ; 004a7a01
    FSTP float ptr [EBP + -0xa]         ; 004a7a07
    FMUL float ptr [EDX + 0x8]          ; 004a7a0a
    LEA EAX,[EBX + 0x23a4]              ; 004a7a0d
    FLD float ptr [EBP + -0xe]          ; 004a7a13
    FXCH                                ; 004a7a16
    FSTP float ptr [EBP + -0x6]         ; 004a7a18
    FADD float ptr [ESI]                ; 004a7a1b
    FLD float ptr [EBP + -0xa]          ; 004a7a1d
    FXCH                                ; 004a7a20
    FSTP float ptr [EBP + 0x16]         ; 004a7a22
    FADD float ptr [ESI + 0x4]          ; 004a7a25
    FLD float ptr [EBP + -0x6]          ; 004a7a28
    FXCH                                ; 004a7a2b
    FSTP float ptr [EBP + 0x1a]         ; 004a7a2d
    FADD float ptr [ESI + 0x8]          ; 004a7a30
    FLD float ptr [EBP + 0x16]          ; 004a7a33
    FXCH                                ; 004a7a36
    FSTP float ptr [EBP + 0x1e]         ; 004a7a38
    FADD float ptr [EAX]                ; 004a7a3b
    FLD float ptr [EBP + 0x1a]          ; 004a7a3d
    FXCH                                ; 004a7a40
    FSTP float ptr [EBP + -0x26]        ; 004a7a42
    FADD float ptr [EAX + 0x4]          ; 004a7a45
    FLD float ptr [EBP + 0x1e]          ; 004a7a48
    FXCH                                ; 004a7a4b
    FSTP float ptr [EBP + -0x22]        ; 004a7a4d
    FADD float ptr [EAX + 0x8]          ; 004a7a50
    FSTP float ptr [EBP + -0x1e]        ; 004a7a53
    MOV dword ptr [ESI + 0x8],0x0       ; 004a7a56
    MOV EDX,dword ptr [ESI + 0x8]       ; 004a7a5d
    MOV dword ptr [ESI + 0x4],EDX       ; 004a7a60
    MOV EDX,dword ptr [ESI + 0x4]       ; 004a7a63
    MOV dword ptr [ESI],EDX             ; 004a7a66
    MOV dword ptr [EAX + 0x8],0x0       ; 004a7a68
    MOV EDX,dword ptr [EAX + 0x8]       ; 004a7a6f
    MOV dword ptr [EAX + 0x4],EDX       ; 004a7a72
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a7a75
    MOV dword ptr [EAX],EDX             ; 004a7a78
    LEA EAX,[EBP + -0x26]               ; 004a7a7a
    PUSH EAX                            ; 004a7a7d
    PUSH EBX                            ; 004a7a7e
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004a7a7f
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004a7a84
    PUSH EBX                            ; 004a7a87
        ;   Label: LAB_004a7a87
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 004a7a88
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 004a7a8d
    LEA EAX,[EBX + 0x150]               ; 004a7a90
    PUSH EAX                            ; 004a7a96
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 004a7a97
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 004a7a9c
    PUSH dword ptr [EBP + 0x92]         ; 004a7a9f
    PUSH EBX                            ; 004a7aa5
    MOV ESI,dword ptr [EBP + 0x62]      ; 004a7aa6
    CALL FUN_0042a150                   ; 004a7aa9
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a150()
    ADD ESP,0x8                         ; 004a7aae
    CMP ESI,0x5                         ; 004a7ab1
    JNZ 0x004a8196                      ; 004a7ab4
        ;   XREF to: 004a8196 (CONDITIONAL_JUMP)  ; LAB_004a8196
    MOV EAX,dword ptr [EBX + 0xbd54]    ; 004a7aba
    SHL EAX,0x8                         ; 004a7ac0
    MOV dword ptr [EBX + 0xbd6c],EAX    ; 004a7ac3
    MOV EAX,dword ptr [EBX + 0xbd58]    ; 004a7ac9
    SHL EAX,0x8                         ; 004a7acf
    MOV dword ptr [EBX + 0xbd70],EAX    ; 004a7ad2
    MOV EAX,dword ptr [EBX + 0xbd5c]    ; 004a7ad8
    SHL EAX,0x8                         ; 004a7ade
    MOV dword ptr [EBX + 0xbd74],EAX    ; 004a7ae1
    MOV EDI,dword ptr [EBX + 0xbd6c]    ; 004a7ae7
        ;   Label: LAB_004a7ae7
    MOV EAX,dword ptr [EBX + 0x108]     ; 004a7aed
    CMP EAX,EDI                         ; 004a7af3
    JGE 0x004a81b9                      ; 004a7af5
        ;   XREF to: 004a81b9 (CONDITIONAL_JUMP)  ; LAB_004a81b9
    MOV EAX,[0x01bd1d80]                ; 004a7afb | DAT_01bd1d80
    MOV EDI,dword ptr [EBX + 0x108]     ; 004a7b00
    ADD EDI,EAX                         ; 004a7b06
    MOV EDX,dword ptr [EBX + 0xbd6c]    ; 004a7b08
    MOV dword ptr [EBX + 0x108],EDI     ; 004a7b0e
    CMP EDI,EDX                         ; 004a7b14
    JLE 0x004a7b1e                      ; 004a7b16
        ;   XREF to: 004a7b1e (CONDITIONAL_JUMP)  ; LAB_004a7b1e
    MOV dword ptr [EBX + 0x108],EDX     ; 004a7b18
    MOV ECX,dword ptr [EBX + 0xbd70]    ; 004a7b1e
        ;   Label: LAB_004a7b1e
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004a7b24
    CMP EAX,ECX                         ; 004a7b2a
    JGE 0x004a81eb                      ; 004a7b2c
        ;   XREF to: 004a81eb (CONDITIONAL_JUMP)  ; LAB_004a81eb
    MOV EAX,[0x01bd1d80]                ; 004a7b32 | DAT_01bd1d80
    MOV ECX,dword ptr [EBX + 0x10c]     ; 004a7b37
    ADD ECX,EAX                         ; 004a7b3d
    MOV ESI,dword ptr [EBX + 0xbd70]    ; 004a7b3f
    MOV dword ptr [EBX + 0x10c],ECX     ; 004a7b45
    CMP ECX,ESI                         ; 004a7b4b
    JLE 0x004a7b55                      ; 004a7b4d
        ;   XREF to: 004a7b55 (CONDITIONAL_JUMP)  ; LAB_004a7b55
    MOV dword ptr [EBX + 0x10c],ESI     ; 004a7b4f
    MOV EDI,dword ptr [EBX + 0xbd74]    ; 004a7b55
        ;   Label: LAB_004a7b55
    MOV EAX,dword ptr [EBX + 0x110]     ; 004a7b5b
    CMP EAX,EDI                         ; 004a7b61
    JGE 0x004a821d                      ; 004a7b63
        ;   XREF to: 004a821d (CONDITIONAL_JUMP)  ; LAB_004a821d
    MOV EAX,[0x01bd1d80]                ; 004a7b69 | DAT_01bd1d80
    MOV EDI,dword ptr [EBX + 0x110]     ; 004a7b6e
    ADD EDI,EAX                         ; 004a7b74
    MOV EDX,dword ptr [EBX + 0xbd74]    ; 004a7b76
    MOV dword ptr [EBX + 0x110],EDI     ; 004a7b7c
    CMP EDI,EDX                         ; 004a7b82
    JLE 0x004a7906                      ; 004a7b84
        ;   XREF to: 004a7906 (CONDITIONAL_JUMP)  ; LAB_004a7906
    MOV dword ptr [EBX + 0x110],EDX     ; 004a7b8a
    LEA ESP,[EBP + 0x7a]                ; 004a7b90
    POP EBP                             ; 004a7b93
    POP EDI                             ; 004a7b94
    POP ESI                             ; 004a7b95
    POP EBX                             ; 004a7b96
    RET                                 ; 004a7b97
    PUSH 0x1                            ; 004a7b98
        ;   Label: LAB_004a7b98
    PUSH 0x0                            ; 004a7b9a
    PUSH ESI                            ; 004a7b9c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7b9d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7ba2
    PUSH EBX                            ; 004a7ba5
    PUSH 0x584990                       ; 004a7ba6 | s_%s_confused_while_walking_to_scr_0058498f+1
    MOV ECX,dword ptr [0x005ad350]      ; 004a7bab | PTR_DAT_005ad350
    PUSH ECX                            ; 004a7bb1 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004a7bb2
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004a7982                      ; 004a7bb7
        ;   XREF to: 004a7982 (UNCONDITIONAL_JUMP)  ; LAB_004a7982
    JBE 0x004a7972                      ; 004a7bbc
        ;   XREF to: 004a7972 (CONDITIONAL_JUMP)  ; LAB_004a7972
        ;   Label: LAB_004a7bbc
    CMP EAX,0x3                         ; 004a7bc2
    JZ 0x004a7b98                       ; 004a7bc5
        ;   XREF to: 004a7b98 (CONDITIONAL_JUMP)  ; LAB_004a7b98
    PUSH 0x1                            ; 004a7bc7
        ;   Label: LAB_004a7bc7
    PUSH 0x0                            ; 004a7bc9
    JMP 0x004a7976                      ; 004a7bcb
        ;   XREF to: 004a7976 (UNCONDITIONAL_JUMP)  ; LAB_004a7976
    LEA EAX,[EBP + -0x7a]               ; 004a7bd0
        ;   Label: caseD_3
    PUSH EAX                            ; 004a7bd3
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004a7bd4
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 004a7bd9
    PUSH 0x40a00000                     ; 004a7bdc
    PUSH 0x40400000                     ; 004a7be1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004a7be6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 004a7beb
    ADD ESP,0x8                         ; 004a7bee
    LEA EAX,[EBP + -0x7a]               ; 004a7bf1
    MOV EDX,dword ptr [0x01c78b20]      ; 004a7bf4 | DAT_01c78b20
    PUSH EAX                            ; 004a7bfa
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a7bfb
    MOV dword ptr [EBP + -0x46],EBX     ; 004a7c02
    SUB EAX,EDX                         ; 004a7c05
    MOV dword ptr [EBP + -0x42],EBX     ; 004a7c07
    SHL EAX,0x4                         ; 004a7c0a
    LEA EDX,[EBX + 0xfd0]               ; 004a7c0d
    ADD EAX,EDX                         ; 004a7c13
    PUSH 0x3ecccccd                     ; 004a7c15
    PUSH EAX                            ; 004a7c1a
    PUSH 0x2dd1184                      ; 004a7c1b | DAT_02dd1184
    LEA EAX,[EBP + -0x2]                ; 004a7c20
    FLD float ptr [EBP + 0x76]          ; 004a7c23
    PUSH EAX                            ; 004a7c26
    FSTP float ptr [EBP + -0x76]        ; 004a7c27
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 004a7c2a
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 004a7c2f
    PUSH EAX                            ; 004a7c32
    LEA EAX,[EBP + -0x32]               ; 004a7c33
    PUSH EAX                            ; 004a7c36
    PUSH EBX                            ; 004a7c37
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004a7c38
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004a7c3d
    PUSH EAX                            ; 004a7c40
    PUSH EBX                            ; 004a7c41
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 004a7c42
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 004a7c47
    JMP 0x004a799d                      ; 004a7c4a
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004a7c4f
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7c55
    PUSH EBX                            ; 004a7c5b
    CALL dword ptr [EAX + 0x13c]        ; 004a7c5c
    ADD ESP,0x8                         ; 004a7c62
    PUSH EBX                            ; 004a7c65
    CALL core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710 ; 004a7c66
        ;   XREF to: 004a7710 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710()
    ADD ESP,0x4                         ; 004a7c6b
    TEST EAX,EAX                        ; 004a7c6e
    JZ 0x004a799d                       ; 004a7c70
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xbd7c]        ; 004a7c76
    FSUB float ptr [EBP + 0x92]         ; 004a7c7c
    FST float ptr [EBX + 0xbd7c]        ; 004a7c82
    FLDZ                                ; 004a7c88
    FCOMPP                              ; 004a7c8a
    FNSTSW AX                           ; 004a7c8c
    SAHF                                ; 004a7c8e
    JBE 0x004a799d                      ; 004a7c8f
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a7c95
    PUSH 0x0                            ; 004a7c97
    PUSH ESI                            ; 004a7c99
    MOV dword ptr [EBX + 0xbd7c],0x0    ; 004a7c9a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7ca4
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7ca9
    MOV EDX,dword ptr [EBX + 0xbd68]    ; 004a7cac
    PUSH EDX                            ; 004a7cb2
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004a7cb3
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004a7cb8
    TEST EAX,EAX                        ; 004a7cbb
    JNZ 0x004a799d                      ; 004a7cbd
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5849ba                       ; 004a7cc3 | = "gargoyle-alive?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7cc8
    PUSH EBX                            ; 004a7cce
    CALL dword ptr [EAX + 0x24]         ; 004a7ccf
    ADD ESP,0x8                         ; 004a7cd2
    MOV dword ptr [EBX + 0xbd68],EAX    ; 004a7cd5
    JMP 0x004a799d                      ; 004a7cdb
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004a7ce0
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7ce6
    PUSH EBX                            ; 004a7cec
    CALL dword ptr [EAX + 0x13c]        ; 004a7ced
    ADD ESP,0x8                         ; 004a7cf3
    PUSH EBX                            ; 004a7cf6
    CALL core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710 ; 004a7cf7
        ;   XREF to: 004a7710 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710()
    ADD ESP,0x4                         ; 004a7cfc
    TEST EAX,EAX                        ; 004a7cff
    JZ 0x004a7dab                       ; 004a7d01
        ;   XREF to: 004a7dab (CONDITIONAL_JUMP)  ; LAB_004a7dab
    CMP dword ptr [EBX + 0xbd78],0x0    ; 004a7d07
    JNZ 0x004a7d99                      ; 004a7d0e
        ;   XREF to: 004a7d99 (CONDITIONAL_JUMP)  ; LAB_004a7d99
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004a7d14
    TEST EDX,EDX                        ; 004a7d1a
    JZ 0x004a7e89                       ; 004a7d1c
        ;   XREF to: 004a7e89 (CONDITIONAL_JUMP)  ; LAB_004a7e89
    MOV EAX,EDX                         ; 004a7d22
    LEA EDX,[EBX + 0x20]                ; 004a7d24
    FLD float ptr [EAX + 0x20]          ; 004a7d27
    FSUB float ptr [EDX]                ; 004a7d2a
    FSTP float ptr [EBP + -0x1a]        ; 004a7d2c
    FLD float ptr [EAX + 0x24]          ; 004a7d2f
    FSUB float ptr [EDX + 0x4]          ; 004a7d32
    FST float ptr [EBP + -0x16]         ; 004a7d35
    FMUL float ptr [EBP + -0x16]        ; 004a7d38
    FLD float ptr [EBP + -0x1a]         ; 004a7d3b
    FMUL ST0                            ; 004a7d3e
    FLD float ptr [EAX + 0x28]          ; 004a7d40
    FSUB float ptr [EDX + 0x8]          ; 004a7d43
    FXCH                                ; 004a7d46
    FADDP ST2,ST0                       ; 004a7d48
    FST float ptr [EBP + -0x12]         ; 004a7d4a
    FMUL float ptr [EBP + -0x12]        ; 004a7d4d
    FADDP                               ; 004a7d50
    FSQRT                               ; 004a7d52
    FSTP float ptr [EBP + 0x72]         ; 004a7d54
    MOV EAX,dword ptr [EBP + 0x72]      ; 004a7d57
    FLD float ptr [EBP + 0x72]          ; 004a7d5a
    MOV dword ptr [EBP + 0x6e],EAX      ; 004a7d5d
    FCOMP float ptr [0x0059df3c]        ; 004a7d60 | DAT_0059df3c
    FNSTSW AX                           ; 004a7d66
    SAHF                                ; 004a7d68
    JC 0x004a7e07                       ; 004a7d69
        ;   XREF to: 004a7e07 (CONDITIONAL_JUMP)  ; LAB_004a7e07
    FLD float ptr [EBP + 0x6e]          ; 004a7d6f
        ;   Label: LAB_004a7d6f
    FCOMP float ptr [EBX + 0xbc9c]      ; 004a7d72
    FNSTSW AX                           ; 004a7d78
    SAHF                                ; 004a7d7a
    JNC 0x004a799d                      ; 004a7d7b
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0x6e]          ; 004a7d81
    LEA ESI,[EBX + 0x150]               ; 004a7d84
    FCOMP float ptr [0x0059df48]        ; 004a7d8a | DAT_0059df48
    FNSTSW AX                           ; 004a7d90
    SAHF                                ; 004a7d92
    JNC 0x004a7e54                      ; 004a7d93
        ;   XREF to: 004a7e54 (CONDITIONAL_JUMP)  ; LAB_004a7e54
    PUSH 0x1                            ; 004a7d99
        ;   Label: LAB_004a7d99
    PUSH 0x1                            ; 004a7d9b
    PUSH ESI                            ; 004a7d9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7d9e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7da3
    JMP 0x004a799d                      ; 004a7da6
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004a7dab
        ;   Label: LAB_004a7dab
    PUSH 0x0                            ; 004a7db0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004a7db2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    ADD ESP,0x8                         ; 004a7db7
    PUSH 0x1                            ; 004a7dba
    MOV dword ptr [EBP + 0x76],EAX      ; 004a7dbc
    PUSH 0x5                            ; 004a7dbf
    FLD float ptr [EBP + 0x76]          ; 004a7dc1
    PUSH ESI                            ; 004a7dc4
    FSTP float ptr [EBX + 0xbd7c]       ; 004a7dc5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7dcb
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7dd0
    MOV EDI,dword ptr [EBX + 0xbd68]    ; 004a7dd3
    PUSH EDI                            ; 004a7dd9
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004a7dda
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004a7ddf
    TEST EAX,EAX                        ; 004a7de2
    JNZ 0x004a799d                      ; 004a7de4
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5849ce                       ; 004a7dea | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7def
    PUSH EBX                            ; 004a7df5
    CALL dword ptr [EAX + 0x24]         ; 004a7df6
    ADD ESP,0x8                         ; 004a7df9
    MOV dword ptr [EBX + 0xbd68],EAX    ; 004a7dfc
    JMP 0x004a799d                      ; 004a7e02
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + -0x1a]               ; 004a7e07
        ;   Label: LAB_004a7e07
    PUSH EAX                            ; 004a7e0a
    LEA EAX,[EBP + 0x22]                ; 004a7e0b
    PUSH EAX                            ; 004a7e0e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004a7e0f
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0x26]          ; 004a7e14
    ADD ESP,0x8                         ; 004a7e17
    FSUB float ptr [EBX + 0x34]         ; 004a7e1a
    SUB ESP,0x4                         ; 004a7e1d
    FSTP float ptr [ESP]                ; 004a7e20
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004a7e23
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004a7e28
    FLD float ptr [EBP + 0x76]          ; 004a7e2b
    FABS                                ; 004a7e2e
    ADD ESP,0x4                         ; 004a7e30
    FCOMP double ptr [0x00584a00]       ; 004a7e33 | DAT_00584a00
    FNSTSW AX                           ; 004a7e39
    SAHF                                ; 004a7e3b
    JNC 0x004a7d6f                      ; 004a7e3c
        ;   XREF to: 004a7d6f (CONDITIONAL_JUMP)  ; LAB_004a7d6f
    PUSH 0x1                            ; 004a7e42
    PUSH 0x3                            ; 004a7e44
    PUSH ESI                            ; 004a7e46
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7e47
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7e4c
    JMP 0x004a7d6f                      ; 004a7e4f
        ;   XREF to: 004a7d6f (UNCONDITIONAL_JUMP)  ; LAB_004a7d6f
    PUSH 0x3dcccccd                     ; 004a7e54
        ;   Label: LAB_004a7e54
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004a7e59
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004a7e5e
    TEST EAX,EAX                        ; 004a7e61
    JZ 0x004a7e77                       ; 004a7e63
        ;   XREF to: 004a7e77 (CONDITIONAL_JUMP)  ; LAB_004a7e77
    PUSH 0x1                            ; 004a7e65
    PUSH 0x4                            ; 004a7e67
    PUSH ESI                            ; 004a7e69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7e6a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7e6f
    JMP 0x004a799d                      ; 004a7e72
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a7e77
        ;   Label: LAB_004a7e77
    PUSH 0x2                            ; 004a7e79
    PUSH ESI                            ; 004a7e7b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7e7c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7e81
    JMP 0x004a799d                      ; 004a7e84
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004a7e89
        ;   Label: LAB_004a7e89
    PUSH EBX                            ; 004a7e8f
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004a7e90
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004a7e95
    TEST EAX,EAX                        ; 004a7e98
    JZ 0x004a799d                       ; 004a7e9a
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a7ea0
    PUSH 0x1                            ; 004a7ea2
    PUSH ESI                            ; 004a7ea4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7ea5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7eaa
    JMP 0x004a799d                      ; 004a7ead
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004a7eb2
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7eb8
    PUSH EBX                            ; 004a7ebe
    CALL dword ptr [EAX + 0x13c]        ; 004a7ebf
    ADD ESP,0x8                         ; 004a7ec5
    PUSH EBX                            ; 004a7ec8
    CALL core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710 ; 004a7ec9
        ;   XREF to: 004a7710 (UNCONDITIONAL_CALL)  ; undefined core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710()
    ADD ESP,0x4                         ; 004a7ece
    LEA ESI,[EBX + 0x150]               ; 004a7ed1
    TEST EAX,EAX                        ; 004a7ed7
    JZ 0x004a7f25                       ; 004a7ed9
        ;   XREF to: 004a7f25 (CONDITIONAL_JUMP)  ; LAB_004a7f25
    MOV EDI,dword ptr [EBX + 0xbd78]    ; 004a7edb
    LEA EAX,[EBX + 0x23a4]              ; 004a7ee1
    TEST EDI,EDI                        ; 004a7ee7
    JNZ 0x004a7f81                      ; 004a7ee9
        ;   XREF to: 004a7f81 (CONDITIONAL_JUMP)  ; LAB_004a7f81
    CMP dword ptr [EBX + 0xbca4],0x0    ; 004a7eef
    JNZ 0x004a7fec                      ; 004a7ef6
        ;   XREF to: 004a7fec (CONDITIONAL_JUMP)  ; LAB_004a7fec
    PUSH dword ptr [EBP + 0x92]         ; 004a7efc
    PUSH EBX                            ; 004a7f02
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 004a7f03
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 004a7f08
    TEST EAX,EAX                        ; 004a7f0b
    JZ 0x004a7fdb                       ; 004a7f0d
        ;   XREF to: 004a7fdb (CONDITIONAL_JUMP)  ; LAB_004a7fdb
    PUSH 0x1                            ; 004a7f13
    PUSH 0x1                            ; 004a7f15
    PUSH ESI                            ; 004a7f17
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7f18
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7f1d
    JMP 0x004a799d                      ; 004a7f20
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004a7f25
        ;   Label: LAB_004a7f25
    PUSH 0x0                            ; 004a7f2a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004a7f2c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    ADD ESP,0x8                         ; 004a7f31
    PUSH 0x1                            ; 004a7f34
    MOV dword ptr [EBP + 0x76],EAX      ; 004a7f36
    PUSH 0x5                            ; 004a7f39
    FLD float ptr [EBP + 0x76]          ; 004a7f3b
    PUSH ESI                            ; 004a7f3e
    FSTP float ptr [EBX + 0xbd7c]       ; 004a7f3f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7f45
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7f4a
    MOV ECX,dword ptr [EBX + 0xbd68]    ; 004a7f4d
    PUSH ECX                            ; 004a7f53
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004a7f54
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004a7f59
    TEST EAX,EAX                        ; 004a7f5c
    JNZ 0x004a799d                      ; 004a7f5e
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5849e1                       ; 004a7f64 | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004a7f69
    PUSH EBX                            ; 004a7f6f
    CALL dword ptr [EAX + 0x24]         ; 004a7f70
    ADD ESP,0x8                         ; 004a7f73
    MOV dword ptr [EBX + 0xbd68],EAX    ; 004a7f76
    JMP 0x004a799d                      ; 004a7f7c
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004a7f81
        ;   Label: LAB_004a7f81
    PUSH 0x3f000000                     ; 004a7f86
    MOV dword ptr [EAX + 0x8],0x0       ; 004a7f8b
    XOR EDX,EDX                         ; 004a7f92
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a7f94
    MOV dword ptr [EAX + 0x4],ECX       ; 004a7f97
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a7f9a
    MOV dword ptr [EAX],ECX             ; 004a7f9d
    LEA EAX,[EBP + 0x46]                ; 004a7f9f
    MOV dword ptr [EBP + 0x46],EDX      ; 004a7fa2
    MOV dword ptr [EBP + 0x4a],EDX      ; 004a7fa5
    MOV dword ptr [EBP + 0x4e],EDX      ; 004a7fa8
    PUSH EAX                            ; 004a7fab
    MOV EAX,dword ptr [EBX + 0xbd60]    ; 004a7fac
    PUSH EAX                            ; 004a7fb2
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004a7fb3
    CALL dword ptr [EDX + 0xbc]         ; 004a7fb9
    ADD ESP,0x4                         ; 004a7fbf
    PUSH EAX                            ; 004a7fc2
    MOV EAX,dword ptr [EBX + 0xbd60]    ; 004a7fc3
    ADD EAX,0x20                        ; 004a7fc9
    PUSH EAX                            ; 004a7fcc
    PUSH EBX                            ; 004a7fcd
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004a7fce
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004a7fd3
    JMP 0x004a799d                      ; 004a7fd6
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a7fdb
        ;   Label: LAB_004a7fdb
    PUSH EDI                            ; 004a7fdd
    PUSH ESI                            ; 004a7fde
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a7fdf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a7fe4
    JMP 0x004a799d                      ; 004a7fe7
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004a7fec
        ;   Label: LAB_004a7fec
    PUSH 0x3f000000                     ; 004a7ff1
    MOV dword ptr [EAX + 0x8],EDI       ; 004a7ff6
    MOV EDX,dword ptr [0x0059df3c]      ; 004a7ff9 | DAT_0059df3c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a7fff
    MOV dword ptr [EAX + 0x4],ECX       ; 004a8002
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a8005
    MOV dword ptr [EAX],ECX             ; 004a8008
    LEA EAX,[EBP + 0xa]                 ; 004a800a
    MOV dword ptr [EBP + 0xa],EDI       ; 004a800d
    MOV dword ptr [EBP + 0xe],EDI       ; 004a8010
    MOV dword ptr [EBP + 0x12],EDX      ; 004a8013
    PUSH EAX                            ; 004a8016
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004a8017
    PUSH EAX                            ; 004a801d
    MOV dword ptr [EBP + 0x6a],EDX      ; 004a801e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004a8021
    CALL dword ptr [EDX + 0xbc]         ; 004a8027
    ADD ESP,0x4                         ; 004a802d
    PUSH EAX                            ; 004a8030
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004a8031
    ADD EAX,0x20                        ; 004a8037
    PUSH EAX                            ; 004a803a
    PUSH EBX                            ; 004a803b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004a803c
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 004a8041
    TEST EAX,EAX                        ; 004a8044
    JL 0x004a799d                       ; 004a8046
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBX + 0x20]                ; 004a804c
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004a804f
    FLD float ptr [EAX]                 ; 004a8055
    FSUB float ptr [EDX + 0x20]         ; 004a8057
    FSTP float ptr [EBP + 0x2e]         ; 004a805a
    FLD float ptr [EAX + 0x4]           ; 004a805d
    FSUB float ptr [EDX + 0x24]         ; 004a8060
    FLD float ptr [EBP + 0x2e]          ; 004a8063
    FXCH                                ; 004a8066
    FSTP float ptr [EBP + 0x32]         ; 004a8068
    FLD float ptr [EAX + 0x8]           ; 004a806b
    FSUB float ptr [EDX + 0x28]         ; 004a806e
    FXCH                                ; 004a8071
    FMUL float ptr [EBP + 0x2e]         ; 004a8073
    FXCH                                ; 004a8076
    FST float ptr [EBP + 0x36]          ; 004a8078
    FMUL float ptr [EBP + 0x36]         ; 004a807b
    FADDP                               ; 004a807e
    FSQRT                               ; 004a8080
    MOV dword ptr [EBP + 0x32],EDI      ; 004a8082
    FSTP float ptr [EBP + 0x5a]         ; 004a8085
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004a8088
    FLD float ptr [EBP + 0x5a]          ; 004a808b
    MOV dword ptr [EBP + 0x66],EAX      ; 004a808e
    FCOMP float ptr [0x0059df48]        ; 004a8091 | DAT_0059df48
    FNSTSW AX                           ; 004a8097
    SAHF                                ; 004a8099
    JBE 0x004a80be                      ; 004a809a
        ;   XREF to: 004a80be (CONDITIONAL_JUMP)  ; LAB_004a80be
    PUSH 0x3dcccccd                     ; 004a809c
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004a80a1
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 004a80a6
    TEST EAX,EAX                        ; 004a80a9
    JZ 0x004a817d                       ; 004a80ab
        ;   XREF to: 004a817d (CONDITIONAL_JUMP)  ; LAB_004a817d
    PUSH 0x1                            ; 004a80b1
    PUSH 0x4                            ; 004a80b3
    PUSH ESI                            ; 004a80b5
        ;   Label: LAB_004a80b5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a80b6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a80bb
    FLD float ptr [EBP + 0x66]          ; 004a80be
        ;   Label: LAB_004a80be
    FCOMP float ptr [EBP + 0x6a]        ; 004a80c1
    FNSTSW AX                           ; 004a80c4
    SAHF                                ; 004a80c6
    JA 0x004a8153                       ; 004a80c7
        ;   XREF to: 004a8153 (CONDITIONAL_JUMP)  ; LAB_004a8153
    FLD float ptr [EBX + 0xbca0]        ; 004a80cd
    FLDZ                                ; 004a80d3
    FCOMPP                              ; 004a80d5
    FNSTSW AX                           ; 004a80d7
    SAHF                                ; 004a80d9
    JC 0x004a8153                       ; 004a80da
        ;   XREF to: 004a8153 (CONDITIONAL_JUMP)  ; LAB_004a8153
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004a80dc
    LEA EAX,[EBX + 0x20]                ; 004a80e2
    FLD float ptr [ESI + 0x20]          ; 004a80e5
    FSUB float ptr [EAX]                ; 004a80e8
    FSTP float ptr [EBP + 0x3a]         ; 004a80ea
    FLD float ptr [ESI + 0x24]          ; 004a80ed
    FSUB float ptr [EAX + 0x4]          ; 004a80f0
    FSTP float ptr [EBP + 0x3e]         ; 004a80f3
    FLD float ptr [ESI + 0x28]          ; 004a80f6
    FSUB float ptr [EAX + 0x8]          ; 004a80f9
    LEA EAX,[EBP + 0x3a]                ; 004a80fc
    PUSH EAX                            ; 004a80ff
    LEA EAX,[EBP + -0x3e]               ; 004a8100
    PUSH EAX                            ; 004a8103
    FSTP float ptr [EBP + 0x42]         ; 004a8104
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004a8107
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + -0x3a]         ; 004a810c
    ADD ESP,0x8                         ; 004a810f
    FSUB float ptr [EBX + 0x34]         ; 004a8112
    SUB ESP,0x4                         ; 004a8115
    FSTP float ptr [ESP]                ; 004a8118
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004a811b
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004a8120
    FLD float ptr [EBP + 0x76]          ; 004a8123
    FABS                                ; 004a8126
    ADD ESP,0x4                         ; 004a8128
    FCOMP double ptr [0x00584a00]       ; 004a812b | DAT_00584a00
    FNSTSW AX                           ; 004a8131
    SAHF                                ; 004a8133
    JNC 0x004a8153                      ; 004a8134
        ;   XREF to: 004a8153 (CONDITIONAL_JUMP)  ; LAB_004a8153
    PUSH 0x1                            ; 004a8136
    PUSH 0x3                            ; 004a8138
    LEA EAX,[EBX + 0x150]               ; 004a813a
    PUSH EAX                            ; 004a8140
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a8141
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a8146
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 004a8149
    FLD float ptr [EBP + 0x66]          ; 004a8153
        ;   Label: LAB_004a8153
    FCOMP float ptr [EBX + 0xbc9c]      ; 004a8156
    FNSTSW AX                           ; 004a815c
    SAHF                                ; 004a815e
    JBE 0x004a799d                      ; 004a815f
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a8165
    PUSH 0x0                            ; 004a8167
    LEA EAX,[EBX + 0x150]               ; 004a8169
    PUSH EAX                            ; 004a816f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004a8170
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004a8175
    JMP 0x004a799d                      ; 004a8178
        ;   XREF to: 004a799d (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004a817d
        ;   Label: LAB_004a817d
    PUSH 0x2                            ; 004a817f
    JMP 0x004a80b5                      ; 004a8181
        ;   XREF to: 004a80b5 (UNCONDITIONAL_JUMP)  ; LAB_004a80b5
    CMP EDI,0x5                         ; 004a8186
        ;   Label: LAB_004a8186
    JA 0x004a799d                       ; 004a8189
        ;   XREF to: 004a799d (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x4a7858]  ; 004a818f | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xbd70],0xffff ; 004a8196
        ;   Label: LAB_004a8196
    MOV dword ptr [EBX + 0xbd74],0xffff ; 004a81a0
    MOV dword ptr [EBX + 0xbd6c],0xffff ; 004a81aa
    JMP 0x004a7ae7                      ; 004a81b4
        ;   XREF to: 004a7ae7 (UNCONDITIONAL_JUMP)  ; LAB_004a7ae7
    JLE 0x004a7b1e                      ; 004a81b9
        ;   XREF to: 004a7b1e (CONDITIONAL_JUMP)  ; LAB_004a7b1e
        ;   Label: LAB_004a81b9
    MOV EAX,[0x01bd1d80]                ; 004a81bf | DAT_01bd1d80
    MOV ECX,dword ptr [EBX + 0x108]     ; 004a81c4
    SUB ECX,EAX                         ; 004a81ca
    MOV ESI,dword ptr [EBX + 0xbd6c]    ; 004a81cc
    MOV dword ptr [EBX + 0x108],ECX     ; 004a81d2
    CMP ECX,ESI                         ; 004a81d8
    JGE 0x004a7b1e                      ; 004a81da
        ;   XREF to: 004a7b1e (CONDITIONAL_JUMP)  ; LAB_004a7b1e
    MOV dword ptr [EBX + 0x108],ESI     ; 004a81e0
    JMP 0x004a7b1e                      ; 004a81e6
        ;   XREF to: 004a7b1e (UNCONDITIONAL_JUMP)  ; LAB_004a7b1e
    JLE 0x004a7b55                      ; 004a81eb
        ;   XREF to: 004a7b55 (CONDITIONAL_JUMP)  ; LAB_004a7b55
        ;   Label: LAB_004a81eb
    MOV EAX,[0x01bd1d80]                ; 004a81f1 | DAT_01bd1d80
    MOV EDI,dword ptr [EBX + 0x10c]     ; 004a81f6
    SUB EDI,EAX                         ; 004a81fc
    MOV EDX,dword ptr [EBX + 0xbd70]    ; 004a81fe
    MOV dword ptr [EBX + 0x10c],EDI     ; 004a8204
    CMP EDI,EDX                         ; 004a820a
    JGE 0x004a7b55                      ; 004a820c
        ;   XREF to: 004a7b55 (CONDITIONAL_JUMP)  ; LAB_004a7b55
    MOV dword ptr [EBX + 0x10c],EDX     ; 004a8212
    JMP 0x004a7b55                      ; 004a8218
        ;   XREF to: 004a7b55 (UNCONDITIONAL_JUMP)  ; LAB_004a7b55
    JLE 0x004a7906                      ; 004a821d
        ;   XREF to: 004a7906 (CONDITIONAL_JUMP)  ; LAB_004a7906
        ;   Label: LAB_004a821d
    MOV EAX,[0x01bd1d80]                ; 004a8223 | DAT_01bd1d80
    MOV ECX,dword ptr [EBX + 0x110]     ; 004a8228
    SUB ECX,EAX                         ; 004a822e
    MOV ESI,dword ptr [EBX + 0xbd74]    ; 004a8230
    MOV dword ptr [EBX + 0x110],ECX     ; 004a8236
    CMP ECX,ESI                         ; 004a823c
    JGE 0x004a7906                      ; 004a823e
        ;   XREF to: 004a7906 (CONDITIONAL_JUMP)  ; LAB_004a7906
    MOV dword ptr [EBX + 0x110],ESI     ; 004a8244
    LEA ESP,[EBP + 0x7a]                ; 004a824a
    POP EBP                             ; 004a824d
    POP EDI                             ; 004a824e
    POP ESI                             ; 004a824f
    POP EBX                             ; 004a8250
    RET                                 ; 004a8251

