; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batman_cpp_CBatman_process_FUN_00413800(CBatman *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x188]:1  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined        Stack[-0x14c]:1  local_14c
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined        Stack[-0x134]:1  local_134
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
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
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_004137b8 = 00413d61
;   undefined1* switchdataD_004137c8 = 00413f53
;   TerminatedCString s_s_confused_while_walking_00578c00
;   TerminatedCString s_batman_disappear_wav_00578c2a
;   TerminatedCString s_batman_alert_wav_00578c3f
;   TerminatedCString s_CHero_00578c50
;   TerminatedCString s_batman_disappear_wav_00578c56
;   TerminatedCString s_batman_attack_wav_00578c6b
;   double DOUBLE_00578c7f = 3.14159265350000
;   double DOUBLE_00578c87 = 0.523598775583333
;   double DOUBLE_00578c8f = 32
;   double DOUBLE_00578c97 = 5
;   float FLOAT_0059a14c = 3.5
;   float FLOAT_0059a158 = 1
;   void* PTR_DAT_005ad350 = 0077ad0c
;   ... and 12 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413800
        ;   Label: core_batman.cpp_CBatman_process_FUN_00413800
    PUSH ESI                            ; 00413801
    PUSH EDI                            ; 00413802
    PUSH EBP                            ; 00413803
    MOV EBP,ESP                         ; 00413804
    SUB ESP,0x178                       ; 00413806
    SUB EBP,0x7a                        ; 0041380c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041380f
    PUSH dword ptr [EBP + 0x92]         ; 00413815
    PUSH EBX                            ; 0041381b
    CALL core_charactr.cpp_FUN_004259f0 ; 0041381c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413821
    TEST EAX,EAX                        ; 00413824
    JZ 0x00413a3a                       ; 00413826
        ;   XREF to: 00413a3a (CONDITIONAL_JUMP)  ; LAB_00413a3a
    LEA EAX,[EBX + 0x23a4]              ; 0041382c
    MOV dword ptr [EAX + 0x8],0x0       ; 00413832
    FLD float ptr [EBP + 0x92]          ; 00413839
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041383f
    MOV dword ptr [EAX + 0x4],EDX       ; 00413842
    MOV EDX,dword ptr [EAX + 0x4]       ; 00413845
    MOV dword ptr [EAX],EDX             ; 00413848
    FMUL float ptr [EBX + 0xbc8c]       ; 0041384a
    LEA ESI,[EBX + 0x150]               ; 00413850
    FSTP float ptr [EBP + 0x4e]         ; 00413856
    FLD float ptr [EBP + 0x4e]          ; 00413859
        ;   Label: LAB_00413859
    FLDZ                                ; 0041385c
    FCOMPP                              ; 0041385e
    FNSTSW AX                           ; 00413860
    SAHF                                ; 00413862
    JC 0x00413a42                       ; 00413863
        ;   XREF to: 00413a42 (CONDITIONAL_JUMP)  ; LAB_00413a42
    FLD float ptr [EBX + 0xbc8c]        ; 00413869
    FLD float ptr [EBP + 0x92]          ; 0041386f
    FMUL double ptr [0x00578c7f]        ; 00413875 | DOUBLE_00578c7f
    FMULP                               ; 0041387b
    FLD float ptr [EBX + 0x23ac]        ; 0041387d
    LEA EDI,[EBX + 0x150]               ; 00413883
    FSTP float ptr [EBX + 0x242c]       ; 00413889
    PUSH EDI                            ; 0041388f
    FSTP float ptr [EBX + 0x2430]       ; 00413890
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00413896
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0041389b
    PUSH dword ptr [EBP + 0x92]         ; 0041389e
    MOV ESI,dword ptr [EAX + 0x24]      ; 004138a4
    PUSH EBX                            ; 004138a7
    MOV dword ptr [EBP + 0x62],ESI      ; 004138a8
    CALL core_charactr.cpp_FUN_00428c00 ; 004138ab
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004138b0
    TEST EAX,EAX                        ; 004138b3
    JZ 0x0041432c                       ; 004138b5
        ;   XREF to: 0041432c (CONDITIONAL_JUMP)  ; LAB_0041432c
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004138bb
    CMP EAX,0x2                         ; 004138c1
    JNC 0x00413a88                      ; 004138c4
        ;   XREF to: 00413a88 (CONDITIONAL_JUMP)  ; LAB_00413a88
    CMP EAX,0x1                         ; 004138ca
    JNZ 0x00413a93                      ; 004138cd
        ;   XREF to: 00413a93 (CONDITIONAL_JUMP)  ; LAB_00413a93
    PUSH 0x1                            ; 004138d3
        ;   Label: LAB_004138d3
    PUSH 0x1                            ; 004138d5
    LEA EAX,[EBX + 0x150]               ; 004138d7
        ;   Label: LAB_004138d7
    PUSH EAX                            ; 004138dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004138de
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004138e3
        ;   Label: LAB_004138e3
    LEA EAX,[EBX + 0x23a4]              ; 004138e6
    MOV dword ptr [EAX + 0x8],0x0       ; 004138ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 004138f3
    MOV dword ptr [EAX + 0x4],EDX       ; 004138f6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004138f9
    MOV dword ptr [EAX],EDX             ; 004138fc
    MOV EAX,EAX                         ; 004138fe
    FLD float ptr [EBX + 0xbca0]        ; 00413900
        ;   Label: default
    FLDZ                                ; 00413906
    FCOMPP                              ; 00413908
    FNSTSW AX                           ; 0041390a
    SAHF                                ; 0041390c
    JNC 0x00413921                      ; 0041390d
        ;   XREF to: 00413921 (CONDITIONAL_JUMP)  ; LAB_00413921
    FLD float ptr [EBX + 0xbca0]        ; 0041390f
    FSUB float ptr [EBP + 0x92]         ; 00413915
    FSTP float ptr [EBX + 0xbca0]       ; 0041391b
    PUSH EBX                            ; 00413921
        ;   Label: LAB_00413921
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 00413922
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413927
    TEST EAX,EAX                        ; 0041392a
    JZ 0x00413a03                       ; 0041392c
        ;   XREF to: 00413a03 (CONDITIONAL_JUMP)  ; LAB_00413a03
    CMP dword ptr [EBP + 0x62],0x9      ; 00413932
    JZ 0x00413a03                       ; 00413936
        ;   XREF to: 00413a03 (CONDITIONAL_JUMP)  ; LAB_00413a03
    FLD float ptr [EBP + 0x92]          ; 0041393c
    FLD ST0                             ; 00413942
    FMUL double ptr [0x00578c8f]        ; 00413944 | DOUBLE_00578c8f
    FLD float ptr [EBX + 0x2424]        ; 0041394a
    FXCH                                ; 00413950
    FSUBR ST0,ST1                       ; 00413952
    LEA EDI,[EBX + 0x2420]              ; 00413954
    FSTP ST1                            ; 0041395a
    FSTP float ptr [EBX + 0x2424]       ; 0041395c
    FLD float ptr [EDI]                 ; 00413962
    FMUL ST1                            ; 00413964
    FSTP float ptr [EBP + -0x56]        ; 00413966
    FLD float ptr [EDI + 0x4]           ; 00413969
    FMUL ST1                            ; 0041396c
    LEA EAX,[EBX + 0x2414]              ; 0041396e
    FSTP float ptr [EBP + -0x52]        ; 00413974
    FMUL float ptr [EDI + 0x8]          ; 00413977
    LEA ESI,[EBX + 0x23a4]              ; 0041397a
    FLD float ptr [EBP + -0x56]         ; 00413980
    FXCH                                ; 00413983
    FSTP float ptr [EBP + -0x4e]        ; 00413985
    FADD float ptr [EAX]                ; 00413988
    FLD float ptr [EBP + -0x52]         ; 0041398a
    FXCH                                ; 0041398d
    FSTP float ptr [EBP + 0xffffff4a]   ; 0041398f
    FADD float ptr [EAX + 0x4]          ; 00413995
    FLD float ptr [EBP + -0x4e]         ; 00413998
    FXCH                                ; 0041399b
    FSTP float ptr [EBP + 0xffffff4e]   ; 0041399d
    FADD float ptr [EAX + 0x8]          ; 004139a3
    FLD float ptr [EBP + 0xffffff4a]    ; 004139a6
    FXCH                                ; 004139ac
    FSTP float ptr [EBP + 0xffffff52]   ; 004139ae
    FADD float ptr [ESI]                ; 004139b4
    FLD float ptr [EBP + 0xffffff4e]    ; 004139b6
    FXCH                                ; 004139bc
    FSTP float ptr [EBP + -0x4a]        ; 004139be
    FADD float ptr [ESI + 0x4]          ; 004139c1
    FLD float ptr [EBP + 0xffffff52]    ; 004139c4
    FXCH                                ; 004139ca
    FSTP float ptr [EBP + -0x46]        ; 004139cc
    FADD float ptr [ESI + 0x8]          ; 004139cf
    FSTP float ptr [EBP + -0x42]        ; 004139d2
    MOV dword ptr [EAX + 0x8],0x0       ; 004139d5
    MOV EDX,dword ptr [EAX + 0x8]       ; 004139dc
    MOV dword ptr [EAX + 0x4],EDX       ; 004139df
    MOV EDX,dword ptr [EAX + 0x4]       ; 004139e2
    MOV dword ptr [EAX],EDX             ; 004139e5
    MOV dword ptr [ESI + 0x8],0x0       ; 004139e7
    LEA EAX,[EBP + -0x4a]               ; 004139ee
    FLD float ptr [ESI + 0x8]           ; 004139f1
    PUSH EAX                            ; 004139f4
    FST float ptr [ESI + 0x4]           ; 004139f5
    PUSH EBX                            ; 004139f8
    FSTP float ptr [ESI]                ; 004139f9
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004139fb
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00413a00
    CMP dword ptr [EBP + 0x62],0xd      ; 00413a03
        ;   Label: LAB_00413a03
    JZ 0x00413a13                       ; 00413a07
        ;   XREF to: 00413a13 (CONDITIONAL_JUMP)  ; LAB_00413a13
    MOV dword ptr [EBX + 0xbdc0],0x0    ; 00413a09
    PUSH EBX                            ; 00413a13
        ;   Label: LAB_00413a13
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00413a14
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00413a19
    LEA EAX,[EBX + 0x150]               ; 00413a1c
    PUSH EAX                            ; 00413a22
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00413a23
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00413a28
    PUSH dword ptr [EBP + 0x92]         ; 00413a2b
    PUSH EBX                            ; 00413a31
    CALL core_charactr.cpp_FUN_0042a150 ; 00413a32
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413a37
    LEA ESP,[EBP + 0x7a]                ; 00413a3a
        ;   Label: LAB_00413a3a
    POP EBP                             ; 00413a3d
    POP EDI                             ; 00413a3e
    POP ESI                             ; 00413a3f
    POP EBX                             ; 00413a40
    RET                                 ; 00413a41
    LEA EAX,[EBP + 0x4e]                ; 00413a42
        ;   Label: LAB_00413a42
    PUSH EAX                            ; 00413a45
    PUSH ESI                            ; 00413a46
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00413a47
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00413a4c
    PUSH EAX                            ; 00413a4f
    PUSH EBX                            ; 00413a50
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00413a51
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00413a56
    JMP 0x00413859                      ; 00413a59
        ;   XREF to: 00413859 (UNCONDITIONAL_JUMP)  ; LAB_00413859
    PUSH 0x1                            ; 00413a5e
        ;   Label: LAB_00413a5e
    PUSH 0x0                            ; 00413a60
    LEA EAX,[EBX + 0x150]               ; 00413a62
    PUSH EAX                            ; 00413a68
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413a69
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413a6e
    PUSH EBX                            ; 00413a71
    MOV EAX,0x578c00                    ; 00413a72 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00413a77 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 00413a78 | PTR_DAT_005ad350
    PUSH EAX                            ; 00413a7d | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00413a7e
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x004138e3                      ; 00413a83
        ;   XREF to: 004138e3 (UNCONDITIONAL_JUMP)  ; LAB_004138e3
    JBE 0x004138d3                      ; 00413a88
        ;   XREF to: 004138d3 (CONDITIONAL_JUMP)  ; LAB_004138d3
        ;   Label: LAB_00413a88
    CMP EAX,0x3                         ; 00413a8e
    JZ 0x00413a5e                       ; 00413a91
        ;   XREF to: 00413a5e (CONDITIONAL_JUMP)  ; LAB_00413a5e
    PUSH 0x1                            ; 00413a93
        ;   Label: LAB_00413a93
    PUSH 0x0                            ; 00413a95
    JMP 0x004138d7                      ; 00413a97
        ;   XREF to: 004138d7 (UNCONDITIONAL_JUMP)  ; LAB_004138d7
    FLD float ptr [EBX + 0xbdc4]        ; 00413a9c
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 00413aa2
    FST float ptr [EBX + 0xbdc4]        ; 00413aa8
    FCOMP float ptr [0x0059a158]        ; 00413aae | FLOAT_0059a158
    FNSTSW AX                           ; 00413ab4
    SAHF                                ; 00413ab6
    JBE 0x00413ace                      ; 00413ab7
        ;   XREF to: 00413ace (CONDITIONAL_JUMP)  ; LAB_00413ace
    MOV dword ptr [EBX + 0xbdc0],0x2    ; 00413ab9
    MOV EAX,[0x0059a158]                ; 00413ac3 | FLOAT_0059a158
    MOV dword ptr [EBX + 0xbdc4],EAX    ; 00413ac8
    MOV ECX,0x40400000                  ; 00413ace
        ;   Label: LAB_00413ace
    LEA EDI,[EBX + 0x150]               ; 00413ad3
    XOR EDX,EDX                         ; 00413ad9
    XOR ESI,ESI                         ; 00413adb
    MOV dword ptr [EBP + -0x32],EDX     ; 00413add
    PUSH EDI                            ; 00413ae0
    MOV dword ptr [EBP + -0x2e],ECX     ; 00413ae1
    MOV dword ptr [EBP + -0x2a],EDX     ; 00413ae4
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00413ae7
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00413aec
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00413aef
    MOV dword ptr [EBP + 0x6a],EAX      ; 00413af5
    TEST EDX,EDX                        ; 00413af8
    JLE 0x00413900                      ; 00413afa
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH ESI                            ; 00413b00
        ;   Label: LAB_00413b00
    LEA EAX,[EBP + 0xffffff6e]          ; 00413b01
    PUSH EAX                            ; 00413b07
    PUSH EDI                            ; 00413b08
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00413b09
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00413b0e
    PUSH EAX                            ; 00413b11
    LEA EAX,[EBP + 0xffffff3e]          ; 00413b12
    PUSH EAX                            ; 00413b18
    PUSH EBX                            ; 00413b19
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00413b1a
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413b1f
    PUSH 0xffff                         ; 00413b22
    LEA EAX,[EBP + -0x32]               ; 00413b27
    PUSH EAX                            ; 00413b2a
    LEA EAX,[EBP + 0xffffff3e]          ; 00413b2b
    PUSH 0x3f000000                     ; 00413b31
    PUSH EAX                            ; 00413b36
    MOV EAX,[0x005b80f0]                ; 00413b37 | DAT_005b80f0
    PUSH EAX                            ; 00413b3c
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00413b3d
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00413b42
    INC ESI                             ; 00413b45
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00413b46
    ADD ESP,0x14                        ; 00413b4c
    CMP ESI,EDX                         ; 00413b4f
    JL 0x00413b00                       ; 00413b51
        ;   XREF to: 00413b00 (CONDITIONAL_JUMP)  ; LAB_00413b00
    JMP 0x00413900                      ; 00413b53
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,0x1                         ; 00413b58
        ;   Label: caseD_2
    LEA EDI,[EBX + 0xbdc8]              ; 00413b5d
    XOR ESI,ESI                         ; 00413b63
    MOV dword ptr [EBP + 0x5a],ECX      ; 00413b65
    MOV dword ptr [EBP + 0x72],ESI      ; 00413b68
    MOV dword ptr [EBP + 0x6e],ESI      ; 00413b6b
    MOV EAX,[0x005be368]                ; 00413b6e | DAT_005be368
        ;   Label: LAB_00413b6e
    MOV ESI,dword ptr [EBP + 0x72]      ; 00413b73
    CMP ESI,dword ptr [EAX + 0x14ecb0]  ; 00413b76 | DAT_01fa5f34
    JGE 0x00413bf6                      ; 00413b7c
        ;   XREF to: 00413bf6 (CONDITIONAL_JUMP)  ; LAB_00413bf6
    ADD EAX,dword ptr [EBP + 0x6e]      ; 00413b82
    MOV ESI,dword ptr [EAX + 0x14ecb4]  ; 00413b85 | DAT_01fa5f38 | DAT_01fa5f3c
    TEST ESI,ESI                        ; 00413b8b
    JNZ 0x00413ba1                      ; 00413b8d
        ;   XREF to: 00413ba1 (CONDITIONAL_JUMP)  ; LAB_00413ba1
    MOV ESI,dword ptr [EBP + 0x72]      ; 00413b8f
        ;   Label: LAB_00413b8f
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00413b92
    INC ESI                             ; 00413b95
    ADD ECX,0x4                         ; 00413b96
    MOV dword ptr [EBP + 0x72],ESI      ; 00413b99
    MOV dword ptr [EBP + 0x6e],ECX      ; 00413b9c
    JMP 0x00413b6e                      ; 00413b9f
        ;   XREF to: 00413b6e (UNCONDITIONAL_JUMP)  ; LAB_00413b6e
    CMP ESI,EBX                         ; 00413ba1
        ;   Label: LAB_00413ba1
    JZ 0x00413b8f                       ; 00413ba3
        ;   XREF to: 00413b8f (CONDITIONAL_JUMP)  ; LAB_00413b8f
    PUSH ESI                            ; 00413ba5
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00413ba6
    CALL dword ptr [EAX + 0x104]        ; 00413bac
    ADD ESP,0x4                         ; 00413bb2
    TEST EAX,EAX                        ; 00413bb5
    JG 0x00413b8f                       ; 00413bb7
        ;   XREF to: 00413b8f (CONDITIONAL_JUMP)  ; LAB_00413b8f
    FLD float ptr [ESI + 0x20]          ; 00413bb9
    FSUB float ptr [EDI]                ; 00413bbc
    FSTP float ptr [EBP + 0x3a]         ; 00413bbe
    FLD float ptr [ESI + 0x24]          ; 00413bc1
    FSUB float ptr [EDI + 0x4]          ; 00413bc4
    FST float ptr [EBP + 0x3e]          ; 00413bc7
    FMUL float ptr [EBP + 0x3e]         ; 00413bca
    FLD float ptr [EBP + 0x3a]          ; 00413bcd
    FMUL ST0                            ; 00413bd0
    FLD float ptr [ESI + 0x28]          ; 00413bd2
    FSUB float ptr [EDI + 0x8]          ; 00413bd5
    FXCH                                ; 00413bd8
    FADDP ST2,ST0                       ; 00413bda
    FST float ptr [EBP + 0x42]          ; 00413bdc
    FMUL float ptr [EBP + 0x42]         ; 00413bdf
    FADDP                               ; 00413be2
    FSQRT                               ; 00413be4
    FCOMP double ptr [0x00578c97]       ; 00413be6 | DOUBLE_00578c97
    FNSTSW AX                           ; 00413bec
    SAHF                                ; 00413bee
    JNC 0x00413b8f                      ; 00413bef
        ;   XREF to: 00413b8f (CONDITIONAL_JUMP)  ; LAB_00413b8f
    JMP 0x00413900                      ; 00413bf1
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    CMP dword ptr [EBP + 0x5a],0x0      ; 00413bf6
        ;   Label: LAB_00413bf6
    JZ 0x00413900                       ; 00413bfa
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [0x0059a158]          ; 00413c00 | FLOAT_0059a158
    MOV dword ptr [EBX + 0xbdc0],0x3    ; 00413c06
    LEA EAX,[EBX + 0x20]                ; 00413c10
    FSTP float ptr [EBX + 0xbdc4]       ; 00413c13
    MOV EDX,dword ptr [EDI]             ; 00413c19
    MOV dword ptr [EAX],EDX             ; 00413c1b
    MOV EDX,dword ptr [EDI + 0x4]       ; 00413c1d
    MOV dword ptr [EAX + 0x4],EDX       ; 00413c20
    MOV EDX,dword ptr [EDI + 0x8]       ; 00413c23
    MOV dword ptr [EAX + 0x8],EDX       ; 00413c26
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00413c29
    TEST ESI,ESI                        ; 00413c2f
    JZ 0x00413c82                       ; 00413c31
        ;   XREF to: 00413c82 (CONDITIONAL_JUMP)  ; LAB_00413c82
    FLD float ptr [ESI + 0x20]          ; 00413c33
    FSUB float ptr [EAX]                ; 00413c36
    FSTP float ptr [EBP + -0x1a]        ; 00413c38
    FLD float ptr [ESI + 0x24]          ; 00413c3b
    FSUB float ptr [EAX + 0x4]          ; 00413c3e
    FSTP float ptr [EBP + -0x16]        ; 00413c41
    FLD float ptr [ESI + 0x28]          ; 00413c44
    FSUB float ptr [EAX + 0x8]          ; 00413c47
    LEA EAX,[EBP + -0x1a]               ; 00413c4a
    PUSH EAX                            ; 00413c4d
    LEA EAX,[EBP + -0x26]               ; 00413c4e
    LEA ESI,[EBX + 0x30]                ; 00413c51
    PUSH EAX                            ; 00413c54
    FSTP float ptr [EBP + -0x12]        ; 00413c55
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00413c58
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00413c5d
    CMP ESI,EAX                         ; 00413c60
    JZ 0x00413c74                       ; 00413c62
        ;   XREF to: 00413c74 (CONDITIONAL_JUMP)  ; LAB_00413c74
    MOV EDX,dword ptr [EAX]             ; 00413c64
    MOV dword ptr [ESI],EDX             ; 00413c66
    MOV EDX,dword ptr [EAX + 0x4]       ; 00413c68
    MOV dword ptr [ESI + 0x4],EDX       ; 00413c6b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00413c6e
    MOV dword ptr [ESI + 0x8],EDX       ; 00413c71
    MOV dword ptr [EBX + 0x38],0x0      ; 00413c74
        ;   Label: LAB_00413c74
    MOV dword ptr [EBX + 0x30],0x0      ; 00413c7b
    PUSH 0x578c2a                       ; 00413c82 | = "batman-disappear.wav"
        ;   Label: LAB_00413c82
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00413c87
    PUSH EBX                            ; 00413c8d
    CALL dword ptr [EAX + 0x24]         ; 00413c8e
    ADD ESP,0x8                         ; 00413c91
    JMP 0x00413900                      ; 00413c94
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,0x40400000                  ; 00413c99
        ;   Label: caseD_3
    PUSH EDI                            ; 00413c9e
    XOR EDX,EDX                         ; 00413c9f
    XOR ESI,ESI                         ; 00413ca1
    MOV dword ptr [EBP + 0x22],EDX      ; 00413ca3
    MOV dword ptr [EBP + 0x26],ECX      ; 00413ca6
    MOV dword ptr [EBP + 0x2a],EDX      ; 00413ca9
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 00413cac
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00413cb1
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00413cb4
    MOV dword ptr [EBP + 0x66],EAX      ; 00413cba
    TEST EDX,EDX                        ; 00413cbd
    JLE 0x00413d20                      ; 00413cbf
        ;   XREF to: 00413d20 (CONDITIONAL_JUMP)  ; LAB_00413d20
    PUSH ESI                            ; 00413cc1
        ;   Label: LAB_00413cc1
    LEA EAX,[EBP + 0xffffff62]          ; 00413cc2
    PUSH EAX                            ; 00413cc8
    PUSH EDI                            ; 00413cc9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00413cca
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00413ccf
    PUSH EAX                            ; 00413cd2
    LEA EAX,[EBP + 0xffffff56]          ; 00413cd3
    PUSH EAX                            ; 00413cd9
    PUSH EBX                            ; 00413cda
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00413cdb
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413ce0
    PUSH 0xffff                         ; 00413ce3
    LEA EAX,[EBP + 0x22]                ; 00413ce8
    PUSH EAX                            ; 00413ceb
    LEA EAX,[EBP + 0xffffff56]          ; 00413cec
    PUSH 0x3f000000                     ; 00413cf2
    PUSH EAX                            ; 00413cf7
    MOV EDX,dword ptr [0x005b80f0]      ; 00413cf8 | DAT_005b80f0
    PUSH EDX                            ; 00413cfe
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0 ; 00413cff
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    MOV EAX,dword ptr [EBP + 0x66]      ; 00413d04
    INC ESI                             ; 00413d07
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00413d08
    ADD ESP,0x14                        ; 00413d0e
    CMP ESI,ECX                         ; 00413d11
    JL 0x00413cc1                       ; 00413d13
        ;   XREF to: 00413cc1 (CONDITIONAL_JUMP)  ; LAB_00413cc1
    LEA EAX,[EAX]                       ; 00413d15
    LEA EDX,[EDX]                       ; 00413d1b
    MOV EBX,EBX                         ; 00413d1e
    FLD float ptr [EBX + 0xbdc4]        ; 00413d20
        ;   Label: LAB_00413d20
    FSUB float ptr [EBP + 0x92]         ; 00413d26
    FST float ptr [EBX + 0xbdc4]        ; 00413d2c
    FLDZ                                ; 00413d32
    FCOMPP                              ; 00413d34
    FNSTSW AX                           ; 00413d36
    SAHF                                ; 00413d38
    JBE 0x00413900                      ; 00413d39
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    MOV dword ptr [EBX + 0xbdc4],0x0    ; 00413d3f
    PUSH EBX                            ; 00413d49
    MOV dword ptr [EBX + 0xbdc0],0x0    ; 00413d4a
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780 ; 00413d54
        ;   XREF to: 00413780 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00413d59
    JMP 0x00413900                      ; 00413d5c
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413d61
        ;   Label: caseD_0
    PUSH 0x0                            ; 00413d63
    PUSH EDI                            ; 00413d65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413d66
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413d6b
    JMP 0x00413900                      ; 00413d6e
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xbdc0]    ; 00413d73
        ;   Label: caseD_d
    CMP EAX,0x3                         ; 00413d79
    JA 0x00413900                       ; 00413d7c
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [EAX*0x4 + 0x4137b8]  ; 00413d82 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xbc90],0x0    ; 00413d89
        ;   Label: caseD_8
    JNZ 0x00413900                      ; 00413d90
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    MOV ESI,dword ptr [EBX + 0xdc]      ; 00413d96
    TEST ESI,ESI                        ; 00413d9c
    JNZ 0x00413900                      ; 00413d9e
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH EAX                            ; 00413da4
    LEA EAX,[EBP + -0x62]               ; 00413da5
    PUSH EAX                            ; 00413da8
    PUSH EDI                            ; 00413da9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00413daa
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00413daf
    PUSH EAX                            ; 00413db2
    LEA EAX,[EBP + 0x16]                ; 00413db3
    PUSH EAX                            ; 00413db6
    PUSH EBX                            ; 00413db7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00413db8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413dbd
    PUSH ESI                            ; 00413dc0
    LEA EAX,[EBP + 0x16]                ; 00413dc1
    PUSH EAX                            ; 00413dc4
    MOV EDI,dword ptr [0x005b96c4]      ; 00413dc5 | INT_005b96c4
    PUSH EDI                            ; 00413dcb
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 00413dcc
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00413dd1
    MOV dword ptr [EBX + 0xbc90],0x1    ; 00413dd4
    JMP 0x00413900                      ; 00413dde
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00413de3
        ;   Label: caseD_9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00413de9
    PUSH EBX                            ; 00413def
    CALL dword ptr [EAX + 0x13c]        ; 00413df0
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00413df6
    ADD ESP,0x8                         ; 00413dfc
    TEST ECX,ECX                        ; 00413dff
    JZ 0x00413e78                       ; 00413e01
        ;   XREF to: 00413e78 (CONDITIONAL_JUMP)  ; LAB_00413e78
    PUSH 0x1                            ; 00413e03
        ;   Label: LAB_00413e03
    PUSH 0xb                            ; 00413e05
    LEA EAX,[EBX + 0x150]               ; 00413e07
    PUSH EAX                            ; 00413e0d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413e0e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413e13
    MOV EDI,dword ptr [EBX + 0xbdd8]    ; 00413e16
    PUSH EDI                            ; 00413e1c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00413e1d
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00413e22
    TEST EAX,EAX                        ; 00413e25
    JNZ 0x00413900                      ; 00413e27
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,dword ptr [EBX + 0xbddc]    ; 00413e2d
    PUSH EAX                            ; 00413e33
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00413e34
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00413e39
    TEST EAX,EAX                        ; 00413e3c
    JNZ 0x00413900                      ; 00413e3e
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    MOV EDX,dword ptr [EBX + 0xbdd4]    ; 00413e44
    PUSH EDX                            ; 00413e4a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00413e4b
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00413e50
    TEST EAX,EAX                        ; 00413e53
    JNZ 0x00413900                      ; 00413e55
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x578c3f                       ; 00413e5b | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00413e60
    PUSH EBX                            ; 00413e66
    CALL dword ptr [EAX + 0x24]         ; 00413e67
    ADD ESP,0x8                         ; 00413e6a
    MOV dword ptr [EBX + 0xbdd4],EAX    ; 00413e6d
    JMP 0x00413900                      ; 00413e73
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBX + 0xbd24]              ; 00413e78
        ;   Label: LAB_00413e78
    PUSH EAX                            ; 00413e7e
    MOV ESI,dword ptr [0x005b7650]      ; 00413e7f | DAT_005b7650
    PUSH ESI                            ; 00413e85
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00413e86
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00413e8b
    TEST EAX,EAX                        ; 00413e8e
    JNZ 0x00413e03                      ; 00413e90
        ;   XREF to: 00413e03 (CONDITIONAL_JUMP)  ; LAB_00413e03
    JMP 0x00413900                      ; 00413e96
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    FLD float ptr [EBX + 0x240c]        ; 00413e9b
        ;   Label: caseD_b
    FLD1                                ; 00413ea1
    FADDP                               ; 00413ea3
    FLD float ptr [EBX + 0x24]          ; 00413ea5
    FCOMPP                              ; 00413ea8
    FNSTSW AX                           ; 00413eaa
    SAHF                                ; 00413eac
    JNC 0x00413900                      ; 00413ead
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413eb3
    PUSH 0xc                            ; 00413eb5
    PUSH EDI                            ; 00413eb7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413eb8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413ebd
    JMP 0x00413900                      ; 00413ec0
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    LEA EAX,[EBP + 0xffffff02]          ; 00413ec5
        ;   Label: caseD_3
    PUSH EAX                            ; 00413ecb
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00413ecc
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00413ed1
    PUSH 0x41700000                     ; 00413ed4
    PUSH 0x40e00000                     ; 00413ed9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00413ede
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00413ee3
    ADD ESP,0x8                         ; 00413ee6
    LEA EAX,[EBP + 0xffffff02]          ; 00413ee9
    MOV ESI,dword ptr [0x00764610]      ; 00413eef | DAT_00764610
    PUSH EAX                            ; 00413ef5
    LEA EAX,[ESI*0x4 + 0x0]             ; 00413ef6
    MOV dword ptr [EBP + 0xffffff36],EBX ; 00413efd
    SUB EAX,ESI                         ; 00413f03
    MOV dword ptr [EBP + 0xffffff3a],EBX ; 00413f05
    SHL EAX,0x4                         ; 00413f0b
    LEA ESI,[EBX + 0xfd0]               ; 00413f0e
    ADD EAX,ESI                         ; 00413f14
    PUSH 0x3ecccccd                     ; 00413f16
    PUSH EAX                            ; 00413f1b
    PUSH 0x2dd1184                      ; 00413f1c | DAT_02dd1184
    LEA EAX,[EBP + -0x7a]               ; 00413f21
    FLD float ptr [EBP + 0x76]          ; 00413f24
    PUSH EAX                            ; 00413f27
    FSTP float ptr [EBP + 0xffffff06]   ; 00413f28
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00413f2e
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00413f33
    PUSH EAX                            ; 00413f36
    LEA EAX,[EBP + -0x6e]               ; 00413f37
    PUSH EAX                            ; 00413f3a
    PUSH EBX                            ; 00413f3b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00413f3c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413f41
    PUSH EAX                            ; 00413f44
    PUSH EBX                            ; 00413f45
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00413f46
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00413f4b
    JMP 0x00413900                      ; 00413f4e
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 00413f53
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00413f59
    PUSH EBX                            ; 00413f5f
    CALL dword ptr [EAX + 0x13c]        ; 00413f60
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00413f66
    ADD ESP,0x8                         ; 00413f6c
    TEST ESI,ESI                        ; 00413f6f
    JNZ 0x00413f9c                      ; 00413f71
        ;   XREF to: 00413f9c (CONDITIONAL_JUMP)  ; LAB_00413f9c
    PUSH dword ptr [EBP + 0x92]         ; 00413f73
    PUSH EBX                            ; 00413f79
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00413f7a
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00413f7f
    TEST EAX,EAX                        ; 00413f82
    JZ 0x00413900                       ; 00413f84
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00413f8a
    PUSH 0x1                            ; 00413f8c
    PUSH EDI                            ; 00413f8e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413f8f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413f94
    JMP 0x00413900                      ; 00413f97
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x3e800000                     ; 00413f9c
        ;   Label: LAB_00413f9c
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00413fa1
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 00413fa6
    TEST EAX,EAX                        ; 00413fa9
    JNZ 0x0041404a                      ; 00413fab
        ;   XREF to: 0041404a (CONDITIONAL_JUMP)  ; LAB_0041404a
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00413fb1
        ;   Label: LAB_00413fb1
    LEA EAX,[EBX + 0x20]                ; 00413fb7
    FLD float ptr [ESI + 0x20]          ; 00413fba
    FSUB float ptr [EAX]                ; 00413fbd
    FSTP float ptr [EBP + -0x3e]        ; 00413fbf
    FLD float ptr [ESI + 0x24]          ; 00413fc2
    FSUB float ptr [EAX + 0x4]          ; 00413fc5
    FST float ptr [EBP + -0x3a]         ; 00413fc8
    FMUL float ptr [EBP + -0x3a]        ; 00413fcb
    FLD float ptr [EBP + -0x3e]         ; 00413fce
    FMUL ST0                            ; 00413fd1
    FLD float ptr [ESI + 0x28]          ; 00413fd3
    FSUB float ptr [EAX + 0x8]          ; 00413fd6
    FXCH                                ; 00413fd9
    FADDP ST2,ST0                       ; 00413fdb
    FST float ptr [EBP + -0x36]         ; 00413fdd
    FMUL float ptr [EBP + -0x36]        ; 00413fe0
    FADDP                               ; 00413fe3
    FSQRT                               ; 00413fe5
    FCOMP float ptr [0x0059a14c]        ; 00413fe7 | FLOAT_0059a14c
    FNSTSW AX                           ; 00413fed
    SAHF                                ; 00413fef
    JNC 0x0041403c                      ; 00413ff0
        ;   XREF to: 0041403c (CONDITIONAL_JUMP)  ; LAB_0041403c
    LEA EAX,[EBP + -0x3e]               ; 00413ff2
    PUSH EAX                            ; 00413ff5
    LEA EAX,[EBP + 0xa]                 ; 00413ff6
    PUSH EAX                            ; 00413ff9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00413ffa
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xe]           ; 00413fff
    ADD ESP,0x8                         ; 00414002
    FSUB float ptr [EBX + 0x34]         ; 00414005
    SUB ESP,0x4                         ; 00414008
    FSTP float ptr [ESP]                ; 0041400b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0041400e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00414013
    FLD float ptr [EBP + 0x76]          ; 00414016
    FABS                                ; 00414019
    ADD ESP,0x4                         ; 0041401b
    FCOMP double ptr [0x00578c87]       ; 0041401e | DOUBLE_00578c87
    FNSTSW AX                           ; 00414024
    SAHF                                ; 00414026
    JNC 0x0041403c                      ; 00414027
        ;   XREF to: 0041403c (CONDITIONAL_JUMP)  ; LAB_0041403c
    PUSH 0x1                            ; 00414029
    PUSH 0x3                            ; 0041402b
    LEA EAX,[EBX + 0x150]               ; 0041402d
    PUSH EAX                            ; 00414033
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00414034
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00414039
    PUSH EBX                            ; 0041403c
        ;   Label: LAB_0041403c
    CALL core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780 ; 0041403d
        ;   XREF to: 00413780 (UNCONDITIONAL_CALL)  ; void core_batman.cpp_CBatman_pickRandomMovementState_FUN_00413780(CBatman * this_ptr)
    ADD ESP,0x4                         ; 00414042
    JMP 0x00413900                      ; 00414045
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x578c50                       ; 0041404a | = "CHero"
        ;   Label: LAB_0041404a
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0041404f
    PUSH EDI                            ; 00414055
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00414056
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041405b
    TEST EAX,EAX                        ; 0041405e
    JZ 0x00413fb1                       ; 00414060
        ;   XREF to: 00413fb1 (CONDITIONAL_JUMP)  ; LAB_00413fb1
    XOR EDI,EDI                         ; 00414066
    XOR ESI,ESI                         ; 00414068
    MOV EAX,[0x005be368]                ; 0041406a | DAT_005be368
        ;   Label: LAB_0041406a
    CMP ESI,dword ptr [EAX + 0x150bf4]  ; 0041406f | DAT_01fa7e78
    JGE 0x004140a1                      ; 00414075
        ;   XREF to: 004140a1 (CONDITIONAL_JUMP)  ; LAB_004140a1
    MOV EDX,dword ptr [0x00764670]      ; 00414077 | g_CBatmanActorType_00764638.name_hash
    PUSH EDX                            ; 0041407d
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0x150bf8] ; 0041407e
    PUSH ECX                            ; 00414085
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00414086
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0041408b
    TEST EAX,EAX                        ; 0041408e
    JNZ 0x00414098                      ; 00414090
        ;   XREF to: 00414098 (CONDITIONAL_JUMP)  ; LAB_00414098
    INC ESI                             ; 00414092
        ;   Label: LAB_00414092
    ADD EDI,0x4                         ; 00414093
    JMP 0x0041406a                      ; 00414096
        ;   XREF to: 0041406a (UNCONDITIONAL_JUMP)  ; LAB_0041406a
    CMP dword ptr [EAX + 0xbdc0],0x0    ; 00414098
        ;   Label: LAB_00414098
    JZ 0x00414092                       ; 0041409f
        ;   XREF to: 00414092 (CONDITIONAL_JUMP)  ; LAB_00414092
    MOV EAX,[0x005be368]                ; 004140a1 | DAT_005be368
        ;   Label: LAB_004140a1
    CMP ESI,dword ptr [EAX + 0x150bf4]  ; 004140a6 | DAT_01fa7e78
    JNZ 0x00413fb1                      ; 004140ac
        ;   XREF to: 00413fb1 (CONDITIONAL_JUMP)  ; LAB_00413fb1
    PUSH 0x1                            ; 004140b2
    PUSH 0xd                            ; 004140b4
    LEA EAX,[EBX + 0x150]               ; 004140b6
    PUSH EAX                            ; 004140bc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004140bd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004140c2
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 004140c5
    LEA EAX,[EBX + 0xbdc8]              ; 004140cb
    ADD ESI,0x20                        ; 004140d1
    MOV dword ptr [EBX + 0xbdc0],0x1    ; 004140d4
    CMP EAX,ESI                         ; 004140de
    JZ 0x004140f2                       ; 004140e0
        ;   XREF to: 004140f2 (CONDITIONAL_JUMP)  ; LAB_004140f2
    MOV EDX,dword ptr [ESI]             ; 004140e2
    MOV dword ptr [EAX],EDX             ; 004140e4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004140e6
    MOV dword ptr [EAX + 0x4],EDX       ; 004140e9
    MOV EDX,dword ptr [ESI + 0x8]       ; 004140ec
    MOV dword ptr [EAX + 0x8],EDX       ; 004140ef
    PUSH 0x578c56                       ; 004140f2 | = "batman-disappear.wav"
        ;   Label: LAB_004140f2
    MOV ESI,0xd                         ; 004140f7
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004140fc
    PUSH EBX                            ; 00414102
    MOV dword ptr [EBX + 0xbdc4],0x0    ; 00414103
    MOV dword ptr [EBP + 0x62],ESI      ; 0041410d
    CALL dword ptr [EAX + 0x24]         ; 00414110
    ADD ESP,0x8                         ; 00414113
    JMP 0x00413900                      ; 00414116
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH dword ptr [EBP + 0x92]         ; 0041411b
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00414121
    PUSH EBX                            ; 00414127
    CALL dword ptr [EAX + 0x13c]        ; 00414128
    ADD ESP,0x8                         ; 0041412e
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00414131
    LEA EDI,[EBX + 0x150]               ; 00414137
    TEST EAX,EAX                        ; 0041413d
    JNZ 0x00414177                      ; 0041413f
        ;   XREF to: 00414177 (CONDITIONAL_JUMP)  ; LAB_00414177
    PUSH dword ptr [EBP + 0x92]         ; 00414141
    PUSH EBX                            ; 00414147
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00414148
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041414d
    TEST EAX,EAX                        ; 00414150
    JZ 0x00414166                       ; 00414152
        ;   XREF to: 00414166 (CONDITIONAL_JUMP)  ; LAB_00414166
    PUSH 0x1                            ; 00414154
    PUSH 0x1                            ; 00414156
    PUSH EDI                            ; 00414158
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00414159
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041415e
    JMP 0x00413900                      ; 00414161
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 00414166
        ;   Label: LAB_00414166
    PUSH EAX                            ; 00414168
    PUSH EDI                            ; 00414169
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041416a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041416f
    JMP 0x00413900                      ; 00414172
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV EAX,[0x0059a14c]                ; 00414177 | FLOAT_0059a14c
        ;   Label: LAB_00414177
    PUSH 0x3e32b8c2                     ; 0041417c
    MOV dword ptr [EBP + 0x5e],EAX      ; 00414181
    LEA EAX,[EBX + 0x23a4]              ; 00414184
    PUSH 0x3f000000                     ; 0041418a
    MOV dword ptr [EAX + 0x8],0x0       ; 0041418f
    XOR EDX,EDX                         ; 00414196
    MOV ECX,dword ptr [EAX + 0x8]       ; 00414198
    MOV dword ptr [EAX + 0x4],ECX       ; 0041419b
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041419e
    MOV dword ptr [EAX],ECX             ; 004141a1
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004141a3
    MOV dword ptr [EBP + 0xffffff7a],EDX ; 004141a6
    MOV dword ptr [EBP + -0x7e],EAX     ; 004141ac
    LEA EAX,[EBP + 0xffffff7a]          ; 004141af
    MOV dword ptr [EBP + 0xffffff7e],EDX ; 004141b5
    PUSH EAX                            ; 004141bb
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004141bc
    PUSH EAX                            ; 004141c2
    MOV ESI,dword ptr [EAX + 0x14c]     ; 004141c3
    CALL dword ptr [ESI + 0xbc]         ; 004141c9
    ADD ESP,0x4                         ; 004141cf
    PUSH EAX                            ; 004141d2
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004141d3
    ADD EAX,0x20                        ; 004141d9
    PUSH EAX                            ; 004141dc
    PUSH EBX                            ; 004141dd
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004141de
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004141e3
    TEST EAX,EAX                        ; 004141e6
    JL 0x00413900                       ; 004141e8
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    LEA ESI,[EBX + 0x20]                ; 004141ee
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004141f1
    FLD float ptr [ESI]                 ; 004141f7
    FSUB float ptr [EAX + 0x20]         ; 004141f9
    FSTP float ptr [EBP + -0x2]         ; 004141fc
    FLD float ptr [ESI + 0x4]           ; 004141ff
    FSUB float ptr [EAX + 0x24]         ; 00414202
    FLD float ptr [EBP + -0x2]          ; 00414205
    FXCH                                ; 00414208
    FSTP float ptr [EBP + 0x2]          ; 0041420a
    FLD float ptr [ESI + 0x8]           ; 0041420d
    FSUB float ptr [EAX + 0x28]         ; 00414210
    FXCH                                ; 00414213
    FMUL float ptr [EBP + -0x2]         ; 00414215
    FXCH                                ; 00414218
    FST float ptr [EBP + 0x6]           ; 0041421a
    FMUL float ptr [EBP + 0x6]          ; 0041421d
    XOR EAX,EAX                         ; 00414220
    FADDP                               ; 00414222
    MOV dword ptr [EBP + 0x2],EAX       ; 00414224
    FSQRT                               ; 00414227
    FSTP float ptr [EBP + 0x52]         ; 00414229
    MOV EAX,dword ptr [EBP + 0x52]      ; 0041422c
    FLD float ptr [EBP + 0x52]          ; 0041422f
    MOV dword ptr [EBP + 0x56],EAX      ; 00414232
    FCOMP float ptr [EBP + 0x5e]        ; 00414235
    FNSTSW AX                           ; 00414238
    SAHF                                ; 0041423a
    JA 0x004142d5                       ; 0041423b
        ;   XREF to: 004142d5 (CONDITIONAL_JUMP)  ; LAB_004142d5
    FLD float ptr [EBX + 0xbca0]        ; 00414241
    FLDZ                                ; 00414247
    FCOMPP                              ; 00414249
    FNSTSW AX                           ; 0041424b
    SAHF                                ; 0041424d
    JC 0x004142d5                       ; 0041424e
        ;   XREF to: 004142d5 (CONDITIONAL_JUMP)  ; LAB_004142d5
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00414254
    FLD float ptr [EAX + 0x20]          ; 0041425a
    FSUB float ptr [ESI]                ; 0041425d
    FSTP float ptr [EBP + 0x2e]         ; 0041425f
    FLD float ptr [EAX + 0x24]          ; 00414262
    FSUB float ptr [ESI + 0x4]          ; 00414265
    FSTP float ptr [EBP + 0x32]         ; 00414268
    FLD float ptr [EAX + 0x28]          ; 0041426b
    LEA EAX,[EBP + 0x2e]                ; 0041426e
    PUSH EAX                            ; 00414271
    LEA EAX,[EBP + -0xe]                ; 00414272
    FSUB float ptr [ESI + 0x8]          ; 00414275
    PUSH EAX                            ; 00414278
    FSTP float ptr [EBP + 0x36]         ; 00414279
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0041427c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + -0xa]          ; 00414281
    ADD ESP,0x8                         ; 00414284
    FSUB float ptr [EBX + 0x34]         ; 00414287
    SUB ESP,0x4                         ; 0041428a
    FSTP float ptr [ESP]                ; 0041428d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00414290
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 00414295
    FLD float ptr [EBP + 0x76]          ; 00414298
    FABS                                ; 0041429b
    ADD ESP,0x4                         ; 0041429d
    FCOMP double ptr [0x00578c87]       ; 004142a0 | DOUBLE_00578c87
    FNSTSW AX                           ; 004142a6
    SAHF                                ; 004142a8
    JNC 0x004142d5                      ; 004142a9
        ;   XREF to: 004142d5 (CONDITIONAL_JUMP)  ; LAB_004142d5
    PUSH 0x1                            ; 004142ab
    PUSH 0x3                            ; 004142ad
    PUSH EDI                            ; 004142af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004142b0
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004142b5
    MOV EDX,dword ptr [EBX + 0xbdd8]    ; 004142b8
    PUSH EDX                            ; 004142be
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 004142bf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004142c9
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004142ce
    TEST EAX,EAX                        ; 004142d1
    JZ 0x004142ff                       ; 004142d3
        ;   XREF to: 004142ff (CONDITIONAL_JUMP)  ; LAB_004142ff
    FLD float ptr [EBP + 0x56]          ; 004142d5
        ;   Label: LAB_004142d5
    FCOMP float ptr [EBX + 0xbc9c]      ; 004142d8
    FNSTSW AX                           ; 004142de
    SAHF                                ; 004142e0
    JBE 0x00413900                      ; 004142e1
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    PUSH 0x1                            ; 004142e7
    PUSH 0x0                            ; 004142e9
    LEA EAX,[EBX + 0x150]               ; 004142eb
    PUSH EAX                            ; 004142f1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004142f2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004142f7
    JMP 0x00413900                      ; 004142fa
        ;   XREF to: 00413900 (UNCONDITIONAL_JUMP)  ; caseD_c
    MOV ECX,dword ptr [EBX + 0xbddc]    ; 004142ff
        ;   Label: LAB_004142ff
    PUSH ECX                            ; 00414305
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00414306
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0041430b
    TEST EAX,EAX                        ; 0041430e
    JNZ 0x004142d5                      ; 00414310
        ;   XREF to: 004142d5 (CONDITIONAL_JUMP)  ; LAB_004142d5
    PUSH 0x578c6b                       ; 00414312 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00414317
    PUSH EBX                            ; 0041431d
    CALL dword ptr [EAX + 0x24]         ; 0041431e
    ADD ESP,0x8                         ; 00414321
    MOV dword ptr [EBX + 0xbddc],EAX    ; 00414324
    JMP 0x004142d5                      ; 0041432a
        ;   XREF to: 004142d5 (UNCONDITIONAL_JUMP)  ; LAB_004142d5
    CMP ESI,0xd                         ; 0041432c
        ;   Label: LAB_0041432c
    JA 0x00413900                       ; 0041432f
        ;   XREF to: 00413900 (CONDITIONAL_JUMP)  ; caseD_c
    JMP dword ptr [ESI*0x4 + 0x4137c8]  ; 00414335 | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD

