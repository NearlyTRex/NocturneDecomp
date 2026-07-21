; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_CZombieDog_process_FUN_00454750(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
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
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00454728 = 00454b1a
;   string s_%s_confused_while_walking_to_scr_0057cf51
;   string s_dog5.wav_0057cf7b
;   string s_dog5.wav_0057cf84
;   string s_%s_gave_up_chase_-_I'm_confused_0057cf8d
;   undefined4 DAT_0057cfae
;   undefined4 DAT_0057cfb6
;   undefined4 DAT_0057cfbe
;   undefined4 DAT_0057cfc6
;   undefined4 DAT_0059c0d8
;   undefined4 DAT_0059c0e4
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b96c4
;   undefined4 DAT_005be368
;   undefined4 DAT_005bed68
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454750
        ;   Label: core_dog.cpp_CZombieDog_process_FUN_00454750
    PUSH ESI                            ; 00454751
    PUSH EDI                            ; 00454752
    PUSH EBP                            ; 00454753
    MOV EBP,ESP                         ; 00454754
    SUB ESP,0xd0                        ; 00454756
    SUB EBP,0x7a                        ; 0045475c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0045475f
    PUSH dword ptr [EBP + 0x92]         ; 00454765
    PUSH EBX                            ; 0045476b
    CALL FUN_004259f0                   ; 0045476c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004259f0()
    ADD ESP,0x8                         ; 00454771
    TEST EAX,EAX                        ; 00454774
    JZ 0x004549a4                       ; 00454776
        ;   XREF to: 004549a4 (CONDITIONAL_JUMP)  ; LAB_004549a4
    LEA EAX,[EBX + 0x23a4]              ; 0045477c
    MOV dword ptr [EAX + 0x8],0x0       ; 00454782
    FLD float ptr [EBP + 0x92]          ; 00454789
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045478f
    MOV dword ptr [EAX + 0x4],EDX       ; 00454792
    MOV EDX,dword ptr [EAX + 0x4]       ; 00454795
    MOV dword ptr [EAX],EDX             ; 00454798
    FMUL float ptr [EBX + 0xbc8c]       ; 0045479a
    LEA ESI,[EBX + 0x150]               ; 004547a0
    FSTP float ptr [EBP + 0x6a]         ; 004547a6
    FLD float ptr [EBP + 0x6a]          ; 004547a9
        ;   Label: LAB_004547a9
    FLDZ                                ; 004547ac
    FCOMPP                              ; 004547ae
    FNSTSW AX                           ; 004547b0
    SAHF                                ; 004547b2
    JC 0x004549ac                       ; 004547b3
        ;   XREF to: 004549ac (CONDITIONAL_JUMP)  ; LAB_004549ac
    PUSH ESI                            ; 004547b9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004547ba
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    FLD float ptr [EBX + 0xbc8c]        ; 004547bf
    FLD float ptr [EBP + 0x92]          ; 004547c5
    FMUL double ptr [0x0057cfae]        ; 004547cb | DAT_0057cfae
    FMULP                               ; 004547d1
    FLD float ptr [EBX + 0x23ac]        ; 004547d3
    ADD ESP,0x4                         ; 004547d9
    MOV EAX,dword ptr [EAX + 0x24]      ; 004547dc
    FSTP float ptr [EBX + 0x242c]       ; 004547df
    MOV EDI,EAX                         ; 004547e5
    FSTP float ptr [EBX + 0x2430]       ; 004547e7
    CMP EAX,0x2                         ; 004547ed
    JNZ 0x00454808                      ; 004547f0
        ;   XREF to: 00454808 (CONDITIONAL_JUMP)  ; LAB_00454808
    FLD float ptr [EBX + 0x2430]        ; 004547f2
    FLD ST0                             ; 004547f8
    FMUL double ptr [0x0057cfb6]        ; 004547fa | DAT_0057cfb6
    FSTP ST1                            ; 00454800
    FSTP float ptr [EBX + 0x2430]       ; 00454802
    PUSH dword ptr [EBP + 0x92]         ; 00454808
        ;   Label: LAB_00454808
    PUSH EBX                            ; 0045480e
    CALL FUN_00428c00                   ; 0045480f
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428c00()
    ADD ESP,0x8                         ; 00454814
    TEST EAX,EAX                        ; 00454817
    JZ 0x00454daa                       ; 00454819
        ;   XREF to: 00454daa (CONDITIONAL_JUMP)  ; LAB_00454daa
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 0045481f
    CMP EAX,0x2                         ; 00454825
    JNC 0x004549f2                      ; 00454828
        ;   XREF to: 004549f2 (CONDITIONAL_JUMP)  ; LAB_004549f2
    CMP EAX,0x1                         ; 0045482e
    JNZ 0x004549fd                      ; 00454831
        ;   XREF to: 004549fd (CONDITIONAL_JUMP)  ; LAB_004549fd
    PUSH 0x1                            ; 00454837
        ;   Label: LAB_00454837
    PUSH 0x1                            ; 00454839
    LEA EAX,[EBX + 0x150]               ; 0045483b
        ;   Label: LAB_0045483b
    PUSH EAX                            ; 00454841
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454842
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454847
        ;   Label: LAB_00454847
    LEA EAX,[EBX + 0x23a4]              ; 0045484a
    MOV dword ptr [EAX + 0x8],0x0       ; 00454850
    MOV EDX,dword ptr [EAX + 0x8]       ; 00454857
    MOV dword ptr [EAX + 0x4],EDX       ; 0045485a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045485d
    MOV dword ptr [EAX],EDX             ; 00454860
    FLD float ptr [EBX + 0xbca0]        ; 00454862
        ;   Label: caseD_5
    FLDZ                                ; 00454868
    FCOMPP                              ; 0045486a
    FNSTSW AX                           ; 0045486c
    SAHF                                ; 0045486e
    JNC 0x00454883                      ; 0045486f
        ;   XREF to: 00454883 (CONDITIONAL_JUMP)  ; LAB_00454883
    FLD float ptr [EBX + 0xbca0]        ; 00454871
    FSUB float ptr [EBP + 0x92]         ; 00454877
    FSTP float ptr [EBX + 0xbca0]       ; 0045487d
    PUSH EBX                            ; 00454883
        ;   Label: LAB_00454883
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 00454884
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isOnGround_FUN_00425960()
    ADD ESP,0x4                         ; 00454889
    TEST EAX,EAX                        ; 0045488c
    JZ 0x0045497d                       ; 0045488e
        ;   XREF to: 0045497d (CONDITIONAL_JUMP)  ; LAB_0045497d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00454894
    TEST EAX,EAX                        ; 0045489a
    JZ 0x004548c8                       ; 0045489c
        ;   XREF to: 004548c8 (CONDITIONAL_JUMP)  ; LAB_004548c8
    PUSH EAX                            ; 0045489e
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0045489f
    CALL dword ptr [EDX + 0xec]         ; 004548a5
    ADD ESP,0x4                         ; 004548ab
    CMP EAX,EBX                         ; 004548ae
    JNZ 0x004548c8                      ; 004548b0
        ;   XREF to: 004548c8 (CONDITIONAL_JUMP)  ; LAB_004548c8
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004548b2
    PUSH EDX                            ; 004548b8
    MOV ECX,dword ptr [0x005be368]      ; 004548b9 | DAT_005be368
    PUSH ECX                            ; 004548bf | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 004548c0
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 004548c5
    FLD float ptr [EBP + 0x92]          ; 004548c8
        ;   Label: LAB_004548c8
    FLD ST0                             ; 004548ce
    FMUL double ptr [0x0057cfc6]        ; 004548d0 | DAT_0057cfc6
    FLD float ptr [EBX + 0x2424]        ; 004548d6
    FXCH                                ; 004548dc
    FSUBR ST0,ST1                       ; 004548de
    LEA EDX,[EBX + 0x2420]              ; 004548e0
    FSTP ST1                            ; 004548e6
    FSTP float ptr [EBX + 0x2424]       ; 004548e8
    FLD float ptr [EDX]                 ; 004548ee
    FMUL ST1                            ; 004548f0
    FSTP float ptr [EBP + 0x22]         ; 004548f2
    FLD float ptr [EDX + 0x4]           ; 004548f5
    FMUL ST1                            ; 004548f8
    LEA EAX,[EBX + 0x2414]              ; 004548fa
    FSTP float ptr [EBP + 0x26]         ; 00454900
    FMUL float ptr [EDX + 0x8]          ; 00454903
    LEA ESI,[EBX + 0x23a4]              ; 00454906
    FLD float ptr [EBP + 0x22]          ; 0045490c
    FXCH                                ; 0045490f
    FSTP float ptr [EBP + 0x2a]         ; 00454911
    FADD float ptr [EAX]                ; 00454914
    FLD float ptr [EBP + 0x26]          ; 00454916
    FXCH                                ; 00454919
    FSTP float ptr [EBP + 0x52]         ; 0045491b
    FADD float ptr [EAX + 0x4]          ; 0045491e
    FLD float ptr [EBP + 0x2a]          ; 00454921
    FXCH                                ; 00454924
    FSTP float ptr [EBP + 0x56]         ; 00454926
    FADD float ptr [EAX + 0x8]          ; 00454929
    FLD float ptr [EBP + 0x52]          ; 0045492c
    FXCH                                ; 0045492f
    FSTP float ptr [EBP + 0x5a]         ; 00454931
    FADD float ptr [ESI]                ; 00454934
    FLD float ptr [EBP + 0x56]          ; 00454936
    FXCH                                ; 00454939
    FSTP float ptr [EBP + 0xa]          ; 0045493b
    FADD float ptr [ESI + 0x4]          ; 0045493e
    FLD float ptr [EBP + 0x5a]          ; 00454941
    FXCH                                ; 00454944
    FSTP float ptr [EBP + 0xe]          ; 00454946
    FADD float ptr [ESI + 0x8]          ; 00454949
    FSTP float ptr [EBP + 0x12]         ; 0045494c
    MOV dword ptr [EAX + 0x8],0x0       ; 0045494f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00454956
    MOV dword ptr [EAX + 0x4],EDX       ; 00454959
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045495c
    MOV dword ptr [EAX],EDX             ; 0045495f
    MOV dword ptr [ESI + 0x8],0x0       ; 00454961
    LEA EAX,[EBP + 0xa]                 ; 00454968
    FLD float ptr [ESI + 0x8]           ; 0045496b
    PUSH EAX                            ; 0045496e
    FST float ptr [ESI + 0x4]           ; 0045496f
    PUSH EBX                            ; 00454972
    FSTP float ptr [ESI]                ; 00454973
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00454975
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 0045497a
    PUSH EBX                            ; 0045497d
        ;   Label: LAB_0045497d
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 0045497e
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 00454983
    LEA EAX,[EBX + 0x150]               ; 00454986
    PUSH EAX                            ; 0045498c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 0045498d
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 00454992
    PUSH dword ptr [EBP + 0x92]         ; 00454995
    PUSH EBX                            ; 0045499b
    CALL FUN_0042a150                   ; 0045499c
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0042a150()
    ADD ESP,0x8                         ; 004549a1
    LEA ESP,[EBP + 0x7a]                ; 004549a4
        ;   Label: LAB_004549a4
    POP EBP                             ; 004549a7
    POP EDI                             ; 004549a8
    POP ESI                             ; 004549a9
    POP EBX                             ; 004549aa
    RET                                 ; 004549ab
    LEA EAX,[EBP + 0x6a]                ; 004549ac
        ;   Label: LAB_004549ac
    PUSH EAX                            ; 004549af
    PUSH ESI                            ; 004549b0
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 004549b1
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 004549b6
    PUSH EAX                            ; 004549b9
    PUSH EBX                            ; 004549ba
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 004549bb
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 004549c0
    JMP 0x004547a9                      ; 004549c3
        ;   XREF to: 004547a9 (UNCONDITIONAL_JUMP)  ; LAB_004547a9
    PUSH 0x1                            ; 004549c8
        ;   Label: LAB_004549c8
    PUSH 0x0                            ; 004549ca
    LEA EAX,[EBX + 0x150]               ; 004549cc
    PUSH EAX                            ; 004549d2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004549d3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004549d8
    PUSH EBX                            ; 004549db
    PUSH 0x57cf51                       ; 004549dc | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x005ad350]      ; 004549e1 | PTR_DAT_005ad350
    PUSH EDI                            ; 004549e7 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004549e8
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00454847                      ; 004549ed
        ;   XREF to: 00454847 (UNCONDITIONAL_JUMP)  ; LAB_00454847
    JBE 0x00454837                      ; 004549f2
        ;   XREF to: 00454837 (CONDITIONAL_JUMP)  ; LAB_00454837
        ;   Label: LAB_004549f2
    CMP EAX,0x3                         ; 004549f8
    JZ 0x004549c8                       ; 004549fb
        ;   XREF to: 004549c8 (CONDITIONAL_JUMP)  ; LAB_004549c8
    PUSH 0x1                            ; 004549fd
        ;   Label: LAB_004549fd
    PUSH 0x0                            ; 004549ff
    JMP 0x0045483b                      ; 00454a01
        ;   XREF to: 0045483b (UNCONDITIONAL_JUMP)  ; LAB_0045483b
    LEA EAX,[EBP + -0x56]               ; 00454a06
        ;   Label: caseD_3
    PUSH EAX                            ; 00454a09
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00454a0a
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00454a0f
    PUSH 0x41700000                     ; 00454a12
    PUSH 0x40e00000                     ; 00454a17
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00454a1c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00454a21
    MOV dword ptr [EBP + -0x22],EBX     ; 00454a24
    MOV dword ptr [EBP + -0x1e],EBX     ; 00454a27
    ADD ESP,0x8                         ; 00454a2a
    FLD float ptr [EBP + 0x76]          ; 00454a2d
    LEA EAX,[EBP + -0x56]               ; 00454a30
    FSTP float ptr [EBP + -0x52]        ; 00454a33
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 00454a36
    PUSH EAX                            ; 00454a3c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00454a3d
    SUB EAX,EDX                         ; 00454a44
    SHL EAX,0x4                         ; 00454a46
    LEA EDX,[EBX + 0xfd0]               ; 00454a49
    ADD EAX,EDX                         ; 00454a4f
    PUSH 0x3f333333                     ; 00454a51
    PUSH EAX                            ; 00454a56
    PUSH 0x2dd1184                      ; 00454a57 | DAT_02dd1184
    LEA EAX,[EBP + -0xe]                ; 00454a5c
    PUSH EAX                            ; 00454a5f
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00454a60
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00454a65
    PUSH EAX                            ; 00454a68
    LEA EAX,[EBP + -0x2]                ; 00454a69
    PUSH EAX                            ; 00454a6c
    PUSH EBX                            ; 00454a6d
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00454a6e
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00454a73
    PUSH EAX                            ; 00454a76
    PUSH EBX                            ; 00454a77
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00454a78
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 00454a7d
    MOV EDI,dword ptr [EBX + 0xbd2c]    ; 00454a80
    PUSH EDI                            ; 00454a86
    MOV EAX,[0x005bed68]                ; 00454a87 | DAT_005bed68
    PUSH EAX                            ; 00454a8c
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 00454a8d
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0()
    ADD ESP,0x8                         ; 00454a92
    TEST EAX,EAX                        ; 00454a95
    JNZ 0x00454862                      ; 00454a97
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x57cf7b                       ; 00454a9d | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00454aa2
    PUSH EBX                            ; 00454aa8
    CALL dword ptr [EAX + 0x24]         ; 00454aa9
    ADD ESP,0x8                         ; 00454aac
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 00454aaf
    JMP 0x00454862                      ; 00454ab5
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xbc90],0x0    ; 00454aba
        ;   Label: caseD_7
    JNZ 0x00454862                      ; 00454ac1
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    CMP dword ptr [EBX + 0xdc],0x0      ; 00454ac7
    JNZ 0x00454862                      ; 00454ace
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH EAX                            ; 00454ad4
    LEA EAX,[EBP + 0x3a]                ; 00454ad5
    PUSH EAX                            ; 00454ad8
    LEA EAX,[EBX + 0x150]               ; 00454ad9
    PUSH EAX                            ; 00454adf
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00454ae0
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00454ae5
    PUSH EAX                            ; 00454ae8
    LEA EAX,[EBP + 0x46]                ; 00454ae9
    PUSH EAX                            ; 00454aec
    PUSH EBX                            ; 00454aed
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00454aee
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00454af3
    PUSH 0x0                            ; 00454af6
    LEA EAX,[EBP + 0x46]                ; 00454af8
    PUSH EAX                            ; 00454afb
    MOV ESI,dword ptr [0x005b96c4]      ; 00454afc | DAT_005b96c4
    PUSH ESI                            ; 00454b02
    CALL FUN_004b0480                   ; 00454b03
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0xc                         ; 00454b08
    MOV dword ptr [EBX + 0xbc90],0x1    ; 00454b0b
    JMP 0x00454862                      ; 00454b15
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00454b1a
        ;   Label: caseD_0
    PUSH EBX                            ; 00454b20
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00454b21
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 00454b26
    LEA ESI,[EBX + 0x150]               ; 00454b29
    TEST EAX,EAX                        ; 00454b2f
    JZ 0x00454b45                       ; 00454b31
        ;   XREF to: 00454b45 (CONDITIONAL_JUMP)  ; LAB_00454b45
    PUSH 0x1                            ; 00454b33
    PUSH 0x1                            ; 00454b35
    PUSH ESI                            ; 00454b37
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454b38
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454b3d
    JMP 0x00454862                      ; 00454b40
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00454b45
        ;   Label: LAB_00454b45
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00454b4b
    PUSH EBX                            ; 00454b51
    CALL dword ptr [EAX + 0x13c]        ; 00454b52
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00454b58
    ADD ESP,0x8                         ; 00454b5e
    TEST EAX,EAX                        ; 00454b61
    JZ 0x00454862                       ; 00454b63
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    LEA EDX,[EBX + 0x20]                ; 00454b69
    FLD float ptr [EAX + 0x20]          ; 00454b6c
    FSUB float ptr [EDX]                ; 00454b6f
    FSTP float ptr [EBP + 0x16]         ; 00454b71
    FLD float ptr [EAX + 0x24]          ; 00454b74
    FSUB float ptr [EDX + 0x4]          ; 00454b77
    FST float ptr [EBP + 0x1a]          ; 00454b7a
    FMUL float ptr [EBP + 0x1a]         ; 00454b7d
    FLD float ptr [EBP + 0x16]          ; 00454b80
    FMUL ST0                            ; 00454b83
    FLD float ptr [EAX + 0x28]          ; 00454b85
    FSUB float ptr [EDX + 0x8]          ; 00454b88
    FXCH                                ; 00454b8b
    FADDP ST2,ST0                       ; 00454b8d
    FST float ptr [EBP + 0x1e]          ; 00454b8f
    FMUL float ptr [EBP + 0x1e]         ; 00454b92
    FADDP                               ; 00454b95
    FSTP float ptr [EBP + 0x66]         ; 00454b97
    MOV EAX,dword ptr [EBP + 0x66]      ; 00454b9a
    MOV EDX,dword ptr [0x01c7070c]      ; 00454b9d | DAT_01c7070c
    SAR EAX,0x1                         ; 00454ba3
    ADD EAX,EDX                         ; 00454ba5
    MOV dword ptr [EBP + 0x72],EAX      ; 00454ba7
    FLD float ptr [EBP + 0x72]          ; 00454baa
    FCOMP float ptr [0x0059c0e4]        ; 00454bad | DAT_0059c0e4
    FNSTSW AX                           ; 00454bb3
    SAHF                                ; 00454bb5
    JC 0x00454c00                       ; 00454bb6
        ;   XREF to: 00454c00 (CONDITIONAL_JUMP)  ; LAB_00454c00
    PUSH 0x1                            ; 00454bb8
    PUSH 0x2                            ; 00454bba
    PUSH ESI                            ; 00454bbc
        ;   Label: LAB_00454bbc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454bbd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454bc2
    MOV ECX,dword ptr [EBX + 0xbd2c]    ; 00454bc5
    PUSH ECX                            ; 00454bcb
    MOV ESI,dword ptr [0x005bed68]      ; 00454bcc | DAT_005bed68
    PUSH ESI                            ; 00454bd2
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0 ; 00454bd3
        ;   XREF to: 0052eba0 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_isSoundPlaying_FUN_0052eba0()
    ADD ESP,0x8                         ; 00454bd8
    TEST EAX,EAX                        ; 00454bdb
    JNZ 0x00454862                      ; 00454bdd
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x57cf84                       ; 00454be3 | = "dog5.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00454be8
    PUSH EBX                            ; 00454bee
    CALL dword ptr [EAX + 0x24]         ; 00454bef
    ADD ESP,0x8                         ; 00454bf2
    MOV dword ptr [EBX + 0xbd2c],EAX    ; 00454bf5
    JMP 0x00454862                      ; 00454bfb
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00454c00
        ;   Label: LAB_00454c00
    PUSH 0x1                            ; 00454c02
    JMP 0x00454bbc                      ; 00454c04
        ;   XREF to: 00454bbc (UNCONDITIONAL_JUMP)  ; LAB_00454bbc
    PUSH dword ptr [EBP + 0x92]         ; 00454c06
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00454c0c
    PUSH EBX                            ; 00454c12
    CALL dword ptr [EAX + 0x13c]        ; 00454c13
    ADD ESP,0x8                         ; 00454c19
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 00454c1c
    LEA ESI,[EBX + 0x150]               ; 00454c22
    TEST EDX,EDX                        ; 00454c28
    JZ 0x00454d47                       ; 00454c2a
        ;   XREF to: 00454d47 (CONDITIONAL_JUMP)  ; LAB_00454d47
    MOV EAX,EDX                         ; 00454c30
    LEA EDX,[EBX + 0x20]                ; 00454c32
    FLD float ptr [EDX]                 ; 00454c35
    FSUB float ptr [EAX + 0x20]         ; 00454c37
    FSTP float ptr [EBP + 0x2e]         ; 00454c3a
    FLD float ptr [EDX + 0x4]           ; 00454c3d
    FSUB float ptr [EAX + 0x24]         ; 00454c40
    FST float ptr [EBP + 0x32]          ; 00454c43
    FMUL float ptr [EBP + 0x32]         ; 00454c46
    FLD float ptr [EBP + 0x2e]          ; 00454c49
    FMUL ST0                            ; 00454c4c
    FLD float ptr [EDX + 0x8]           ; 00454c4e
    FSUB float ptr [EAX + 0x28]         ; 00454c51
    FXCH                                ; 00454c54
    FADDP ST2,ST0                       ; 00454c56
    FST float ptr [EBP + 0x36]          ; 00454c58
    FMUL float ptr [EBP + 0x36]         ; 00454c5b
    FADDP                               ; 00454c5e
    FSQRT                               ; 00454c60
    FCOMP float ptr [0x0059c0e4]        ; 00454c62 | DAT_0059c0e4
    FNSTSW AX                           ; 00454c68
    SAHF                                ; 00454c6a
    JBE 0x00454c7e                      ; 00454c6b
        ;   XREF to: 00454c7e (CONDITIONAL_JUMP)  ; LAB_00454c7e
    CMP EDI,0x1                         ; 00454c6d
    JNZ 0x00454c7e                      ; 00454c70
        ;   XREF to: 00454c7e (CONDITIONAL_JUMP)  ; LAB_00454c7e
    PUSH EDI                            ; 00454c72
    PUSH 0x2                            ; 00454c73
    PUSH ESI                            ; 00454c75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454c76
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454c7b
    MOV EAX,[0x0059c0d8]                ; 00454c7e | DAT_0059c0d8
        ;   Label: LAB_00454c7e
    PUSH 0x3e32b8c2                     ; 00454c83
    MOV dword ptr [EBP + 0x6e],EAX      ; 00454c88
    LEA EAX,[EBX + 0x23a4]              ; 00454c8b
    PUSH 0x3f000000                     ; 00454c91
    MOV dword ptr [EAX + 0x8],0x0       ; 00454c96
    XOR ECX,ECX                         ; 00454c9d
    MOV EDX,dword ptr [EAX + 0x8]       ; 00454c9f
    MOV dword ptr [EAX + 0x4],EDX       ; 00454ca2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00454ca5
    MOV dword ptr [EAX],EDX             ; 00454ca8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00454caa
    MOV dword ptr [EBP + -0x1a],ECX     ; 00454cad
    MOV dword ptr [EBP + -0x12],EAX     ; 00454cb0
    LEA EAX,[EBP + -0x1a]               ; 00454cb3
    MOV dword ptr [EBP + -0x16],ECX     ; 00454cb6
    PUSH EAX                            ; 00454cb9
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00454cba
    PUSH EAX                            ; 00454cc0
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00454cc1
    CALL dword ptr [EDX + 0xbc]         ; 00454cc7
    ADD ESP,0x4                         ; 00454ccd
    PUSH EAX                            ; 00454cd0
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00454cd1
    ADD EAX,0x20                        ; 00454cd7
    PUSH EAX                            ; 00454cda
    PUSH EBX                            ; 00454cdb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00454cdc
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 00454ce1
    LEA ESI,[EBX + 0x150]               ; 00454ce4
    TEST EAX,EAX                        ; 00454cea
    JL 0x00454d7d                       ; 00454cec
        ;   XREF to: 00454d7d (CONDITIONAL_JUMP)  ; LAB_00454d7d
    JLE 0x00454862                      ; 00454cf2
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0xbca0]        ; 00454cf8
    FLDZ                                ; 00454cfe
    FCOMPP                              ; 00454d00
    FNSTSW AX                           ; 00454d02
    SAHF                                ; 00454d04
    JC 0x00454862                       ; 00454d05
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x3f800000                     ; 00454d0b
    PUSH 0x0                            ; 00454d10
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00454d12
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00454d17
    ADD ESP,0x8                         ; 00454d1a
    FLD float ptr [EBP + 0x76]          ; 00454d1d
    FCOMP double ptr [0x0057cfbe]       ; 00454d20 | DAT_0057cfbe
    FNSTSW AX                           ; 00454d26
    SAHF                                ; 00454d28
    JA 0x00454da4                       ; 00454d29
        ;   XREF to: 00454da4 (CONDITIONAL_JUMP)  ; LAB_00454da4
    PUSH 0x1                            ; 00454d2b
    PUSH 0x4                            ; 00454d2d
    PUSH ESI                            ; 00454d2f
        ;   Label: LAB_00454d2f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454d30
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454d35
    MOV dword ptr [EBX + 0xbca0],0x40200000 ; 00454d38
    JMP 0x00454862                      ; 00454d42
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH dword ptr [EBP + 0x92]         ; 00454d47
        ;   Label: LAB_00454d47
    PUSH EBX                            ; 00454d4d
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00454d4e
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 00454d53
    TEST EAX,EAX                        ; 00454d56
    JZ 0x00454d6c                       ; 00454d58
        ;   XREF to: 00454d6c (CONDITIONAL_JUMP)  ; LAB_00454d6c
    PUSH 0x1                            ; 00454d5a
    PUSH 0x1                            ; 00454d5c
    PUSH ESI                            ; 00454d5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454d5f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454d64
    JMP 0x00454862                      ; 00454d67
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00454d6c
        ;   Label: LAB_00454d6c
    PUSH EAX                            ; 00454d6e
    PUSH ESI                            ; 00454d6f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454d70
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454d75
    JMP 0x00454862                      ; 00454d78
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH EBX                            ; 00454d7d
        ;   Label: LAB_00454d7d
    PUSH 0x57cf8d                       ; 00454d7e | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x005ad350]      ; 00454d83 | PTR_DAT_005ad350
    PUSH EDI                            ; 00454d89 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00454d8a
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00454d8f
    PUSH 0x1                            ; 00454d92
    PUSH 0x0                            ; 00454d94
    PUSH ESI                            ; 00454d96
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00454d97
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00454d9c
    JMP 0x00454862                      ; 00454d9f
        ;   XREF to: 00454862 (UNCONDITIONAL_JUMP)  ; caseD_6
    PUSH 0x1                            ; 00454da4
        ;   Label: LAB_00454da4
    PUSH 0x3                            ; 00454da6
    JMP 0x00454d2f                      ; 00454da8
        ;   XREF to: 00454d2f (UNCONDITIONAL_JUMP)  ; LAB_00454d2f
    CMP EDI,0x7                         ; 00454daa
        ;   Label: LAB_00454daa
    JA 0x00454862                       ; 00454dad
        ;   XREF to: 00454862 (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EDI*0x4 + 0x454728]  ; 00454db3 | caseD_0 | caseD_2 | caseD_4
        ;   Label: switchD

