; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_larva_cpp_FUN_004fda40(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_larva_blow1_wav_005e6bbb
;   TerminatedCString s_s_confused_while_walking_005e6bcb
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005e6bf5
;   TerminatedCString s_slime_wav_f_f_005e6c16
;   undefined4 DAT_005e6c2b
;   undefined4 DAT_005e6c33
;   undefined4 DAT_005e6c3b
;   undefined4 DAT_005e6c43
;   undefined4 DAT_005e6c4b
;   undefined4 DAT_005e6c53
;   undefined4 DAT_005e6c5b
;   undefined4 DAT_00602d1c
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061c010
;   CGore* g_CGorePtr = 01cd0e3c
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cd60
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e120
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00435320
;   core_enemy.cpp_FUN_004a0fe0
;   core_fire.cpp_FUN_004b5e00
;   core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fda40
        ;   Label: core_larva.cpp_FUN_004fda40
    PUSH ESI                            ; 004fda41
    PUSH EDI                            ; 004fda42
    PUSH EBP                            ; 004fda43
    MOV EBP,ESP                         ; 004fda44
    SUB ESP,0x274                       ; 004fda46
    SUB EBP,0x7a                        ; 004fda4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004fda4f
    PUSH dword ptr [EBP + 0x92]         ; 004fda55
    PUSH EBX                            ; 004fda5b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 004fda5c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fda61
    TEST EAX,EAX                        ; 004fda64
    JZ 0x004fdcf7                       ; 004fda66
        ;   XREF to: 004fdcf7 (CONDITIONAL_JUMP)  ; LAB_004fdcf7
    LEA EAX,[EBX + 0x249c]              ; 004fda6c
    MOV dword ptr [EAX + 0x8],0x0       ; 004fda72
    FLD float ptr [EBP + 0x92]          ; 004fda79
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fda7f
    MOV dword ptr [EAX + 0x4],EDX       ; 004fda82
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fda85
    MOV dword ptr [EAX],EDX             ; 004fda88
    LEA EAX,[EBX + 0x20]                ; 004fda8a
    FMUL float ptr [EBX + 0xc1d0]       ; 004fda8d
    MOV dword ptr [EBP + 0x66],EAX      ; 004fda93
    LEA EAX,[EBX + 0x158]               ; 004fda96
    FSTP float ptr [EBP + 0x3a]         ; 004fda9c
    MOV dword ptr [EBP + 0x5a],EAX      ; 004fda9f
    FLD float ptr [EBP + 0x3a]          ; 004fdaa2
        ;   Label: LAB_004fdaa2
    FLDZ                                ; 004fdaa5
    FCOMPP                              ; 004fdaa7
    FNSTSW AX                           ; 004fdaa9
    SAHF                                ; 004fdaab
    JC 0x004fdf1d                       ; 004fdaac
        ;   XREF to: 004fdf1d (CONDITIONAL_JUMP)  ; LAB_004fdf1d
    FLD float ptr [EBP + 0x92]          ; 004fdab2
    FMUL float ptr [EBX + 0xc1d0]       ; 004fdab8
    SUB ESP,0x4                         ; 004fdabe
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004fdac1
    MOV dword ptr [EBX + 0x2524],EAX    ; 004fdac7
    FSTP float ptr [ESP]                ; 004fdacd
    PUSH EBX                            ; 004fdad0
    CALL core_charactr.cpp_FUN_00435320 ; 004fdad1
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 004fdad6
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004fdad9
    PUSH EDX                            ; 004fdadc
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004fdadd
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004fdae2
    PUSH dword ptr [EBP + 0x92]         ; 004fdae5
    MOV ESI,dword ptr [EAX + 0x24]      ; 004fdaeb
    PUSH EBX                            ; 004fdaee
    MOV dword ptr [EBP + 0x4e],ESI      ; 004fdaef
    CALL core_charactr.cpp_FUN_00432240 ; 004fdaf2
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fdaf7
    TEST EAX,EAX                        ; 004fdafa
    JZ 0x004fe389                       ; 004fdafc
        ;   XREF to: 004fe389 (CONDITIONAL_JUMP)  ; LAB_004fe389
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004fdb02
    CMP EAX,0x2                         ; 004fdb08
    JNC 0x004fdf62                      ; 004fdb0b
        ;   XREF to: 004fdf62 (CONDITIONAL_JUMP)  ; LAB_004fdf62
    CMP EAX,0x1                         ; 004fdb11
    JNZ 0x004fdf6d                      ; 004fdb14
        ;   XREF to: 004fdf6d (CONDITIONAL_JUMP)  ; LAB_004fdf6d
    PUSH 0x1                            ; 004fdb1a
        ;   Label: LAB_004fdb1a
    PUSH 0x1                            ; 004fdb1c
    LEA EAX,[EBX + 0x158]               ; 004fdb1e
        ;   Label: LAB_004fdb1e
    PUSH EAX                            ; 004fdb24
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fdb25
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fdb2a
        ;   Label: LAB_004fdb2a
    LEA EAX,[EBX + 0x249c]              ; 004fdb2d
    MOV dword ptr [EAX + 0x8],0x0       ; 004fdb33
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fdb3a
    MOV dword ptr [EAX + 0x4],EDX       ; 004fdb3d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fdb40
    MOV dword ptr [EAX],EDX             ; 004fdb43
    FLD float ptr [EBX + 0xc1e4]        ; 004fdb45
        ;   Label: LAB_004fdb45
    FLDZ                                ; 004fdb4b
    FCOMPP                              ; 004fdb4d
    FNSTSW AX                           ; 004fdb4f
    SAHF                                ; 004fdb51
    JNC 0x004fdb66                      ; 004fdb52
        ;   XREF to: 004fdb66 (CONDITIONAL_JUMP)  ; LAB_004fdb66
    FLD float ptr [EBX + 0xc1e4]        ; 004fdb54
    FSUB float ptr [EBP + 0x92]         ; 004fdb5a
    FSTP float ptr [EBX + 0xc1e4]       ; 004fdb60
    CMP dword ptr [EBP + 0x4e],0x1      ; 004fdb66
        ;   Label: LAB_004fdb66
    JNZ 0x004fe436                      ; 004fdb6a
        ;   XREF to: 004fe436 (CONDITIONAL_JUMP)  ; LAB_004fe436
    MOV EDX,dword ptr [EBX + 0xc270]    ; 004fdb70
    PUSH EDX                            ; 004fdb76
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004fdb77
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004fdb7c
    TEST EAX,EAX                        ; 004fdb7f
    JZ 0x004fe3af                       ; 004fdb81
        ;   XREF to: 004fe3af (CONDITIONAL_JUMP)  ; LAB_004fe3af
    PUSH EBX                            ; 004fdb87
        ;   Label: LAB_004fdb87
    CALL core_charactr.cpp_FUN_0042e120 ; 004fdb88
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fdb8d
    TEST EAX,EAX                        ; 004fdb90
    JZ 0x004fdcd0                       ; 004fdb92
        ;   XREF to: 004fdcd0 (CONDITIONAL_JUMP)  ; LAB_004fdcd0
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 004fdb98
    TEST ECX,ECX                        ; 004fdb9e
    JZ 0x004fdbcc                       ; 004fdba0
        ;   XREF to: 004fdbcc (CONDITIONAL_JUMP)  ; LAB_004fdbcc
    PUSH ECX                            ; 004fdba2
    MOV EDX,dword ptr [ECX + 0x154]     ; 004fdba3
    CALL dword ptr [EDX + 0xf4]         ; 004fdba9
    ADD ESP,0x4                         ; 004fdbaf
    CMP EAX,EBX                         ; 004fdbb2
    JNZ 0x004fdbcc                      ; 004fdbb4
        ;   XREF to: 004fdbcc (CONDITIONAL_JUMP)  ; LAB_004fdbcc
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004fdbb6
    PUSH ESI                            ; 004fdbbc
    MOV EDI,dword ptr [0x00622c18]      ; 004fdbbd | g_CDemonSetPtr
    PUSH EDI                            ; 004fdbc3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004fdbc4
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fdbc9
    PUSH dword ptr [EBP + 0x92]         ; 004fdbcc
        ;   Label: LAB_004fdbcc
    PUSH EBX                            ; 004fdbd2
    LEA ESI,[EBX + 0x2518]              ; 004fdbd3
    CALL core_charactr.cpp_FUN_0042d700 ; 004fdbd9
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 004fdbde
    FMUL float ptr [EBP + 0x92]         ; 004fdbe0
    FLD float ptr [ESI + 0x4]           ; 004fdbe6
    FMUL float ptr [EBP + 0x92]         ; 004fdbe9
    FLD float ptr [ESI + 0x8]           ; 004fdbef
    FMUL float ptr [EBP + 0x92]         ; 004fdbf2
    LEA EDI,[EBP + 0xffffff22]          ; 004fdbf8
    LEA ESI,[EBP + 0xfffffefe]          ; 004fdbfe
    FXCH ST2                            ; 004fdc04
    FSTP float ptr [EBP + 0xfffffefe]   ; 004fdc06
    FSTP float ptr [EBP + 0xffffff02]   ; 004fdc0c
    FSTP float ptr [EBP + 0xffffff06]   ; 004fdc12
    MOVSD ES:EDI,ESI                    ; 004fdc18
    MOVSD ES:EDI,ESI                    ; 004fdc19
    MOVSD ES:EDI,ESI                    ; 004fdc1a
    LEA EDX,[EBX + 0x250c]              ; 004fdc1b
    FLD float ptr [EBP + 0xffffff22]    ; 004fdc21
    FLD float ptr [EBP + 0xffffff26]    ; 004fdc27
    FLD float ptr [EBP + 0xffffff2a]    ; 004fdc2d
    LEA EDI,[EBP + 0xffffff16]          ; 004fdc33
    LEA ESI,[EBP + -0x6]                ; 004fdc39
    FXCH ST2                            ; 004fdc3c
    FADD float ptr [EDX]                ; 004fdc3e
    FXCH                                ; 004fdc40
    FADD float ptr [EDX + 0x4]          ; 004fdc42
    FXCH ST2                            ; 004fdc45
    FADD float ptr [EDX + 0x8]          ; 004fdc47
    FXCH                                ; 004fdc4a
    FSTP float ptr [EBP + -0x6]         ; 004fdc4c
    FXCH                                ; 004fdc4f
    FSTP float ptr [EBP + -0x2]         ; 004fdc51
    FSTP float ptr [EBP + 0x2]          ; 004fdc54
    MOVSD ES:EDI,ESI                    ; 004fdc57
    MOVSD ES:EDI,ESI                    ; 004fdc58
    MOVSD ES:EDI,ESI                    ; 004fdc59
    LEA EAX,[EBX + 0x249c]              ; 004fdc5a
    FLD float ptr [EBP + 0xffffff16]    ; 004fdc60
    FLD float ptr [EBP + 0xffffff1a]    ; 004fdc66
    FLD float ptr [EBP + 0xffffff1e]    ; 004fdc6c
    LEA EDI,[EBP + 0xffffff2e]          ; 004fdc72
    LEA ESI,[EBP + -0x36]               ; 004fdc78
    FXCH ST2                            ; 004fdc7b
    FADD float ptr [EAX]                ; 004fdc7d
    FXCH                                ; 004fdc7f
    FADD float ptr [EAX + 0x4]          ; 004fdc81
    FXCH ST2                            ; 004fdc84
    FADD float ptr [EAX + 0x8]          ; 004fdc86
    FXCH                                ; 004fdc89
    FSTP float ptr [EBP + -0x36]        ; 004fdc8b
    FXCH                                ; 004fdc8e
    FSTP float ptr [EBP + -0x32]        ; 004fdc90
    FSTP float ptr [EBP + -0x2e]        ; 004fdc93
    MOVSD ES:EDI,ESI                    ; 004fdc96
    MOVSD ES:EDI,ESI                    ; 004fdc97
    MOVSD ES:EDI,ESI                    ; 004fdc98
    MOV dword ptr [EDX + 0x8],0x0       ; 004fdc99
    MOV ECX,dword ptr [EDX + 0x8]       ; 004fdca0
    MOV dword ptr [EDX + 0x4],ECX       ; 004fdca3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004fdca6
    MOV dword ptr [EDX],ECX             ; 004fdca9
    MOV dword ptr [EAX + 0x8],0x0       ; 004fdcab
    ADD ESP,0x8                         ; 004fdcb2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fdcb5
    MOV dword ptr [EAX + 0x4],EDX       ; 004fdcb8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fdcbb
    MOV dword ptr [EAX],EDX             ; 004fdcbe
    LEA EAX,[EBP + 0xffffff2e]          ; 004fdcc0
    PUSH EAX                            ; 004fdcc6
    PUSH EBX                            ; 004fdcc7
    CALL core_charactr.cpp_FUN_0042d750 ; 004fdcc8
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004fdccd
    PUSH EBX                            ; 004fdcd0
        ;   Label: LAB_004fdcd0
    CALL core_charactr.cpp_FUN_0042e160 ; 004fdcd1
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fdcd6
    LEA EAX,[EBX + 0x158]               ; 004fdcd9
    PUSH EAX                            ; 004fdcdf
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 004fdce0
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fdce5
    PUSH dword ptr [EBP + 0x92]         ; 004fdce8
    PUSH EBX                            ; 004fdcee
    CALL core_charactr.cpp_FUN_00433e80 ; 004fdcef
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fdcf4
    LEA ESP,[EBP + 0x7a]                ; 004fdcf7
        ;   Label: LAB_004fdcf7
    POP EBP                             ; 004fdcfa
    POP EDI                             ; 004fdcfb
    POP ESI                             ; 004fdcfc
    POP EBX                             ; 004fdcfd
    RET                                 ; 004fdcfe
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004fdcff
        ;   Label: LAB_004fdcff
    TEST EDX,EDX                        ; 004fdd05
    JZ 0x004fdaa2                       ; 004fdd07
        ;   XREF to: 004fdaa2 (CONDITIONAL_JUMP)  ; LAB_004fdaa2
    MOV EAX,EDX                         ; 004fdd0d
    LEA EDI,[EBP + -0x4e]               ; 004fdd0f
    LEA ESI,[EBP + 0x6]                 ; 004fdd12
    FLD float ptr [EAX + 0x20]          ; 004fdd15
    FLD float ptr [EAX + 0x24]          ; 004fdd18
    MOV EDX,dword ptr [EBP + 0x66]      ; 004fdd1b
    FLD float ptr [EAX + 0x28]          ; 004fdd1e
    FXCH ST2                            ; 004fdd21
    FSUB float ptr [EDX]                ; 004fdd23
    FXCH                                ; 004fdd25
    FSUB float ptr [EDX + 0x4]          ; 004fdd27
    FXCH ST2                            ; 004fdd2a
    FSUB float ptr [EDX + 0x8]          ; 004fdd2c
    FXCH                                ; 004fdd2f
    FSTP float ptr [EBP + 0x6]          ; 004fdd31
    FXCH                                ; 004fdd34
    FSTP float ptr [EBP + 0xa]          ; 004fdd36
    FSTP float ptr [EBP + 0xe]          ; 004fdd39
    MOVSD ES:EDI,ESI                    ; 004fdd3c
    MOVSD ES:EDI,ESI                    ; 004fdd3d
    MOVSD ES:EDI,ESI                    ; 004fdd3e
    LEA EAX,[EBP + -0x72]               ; 004fdd3f
    LEA ESI,[EBP + -0x4e]               ; 004fdd42
    CMP EAX,ESI                         ; 004fdd45
    JZ 0x004fdd5b                       ; 004fdd47
        ;   XREF to: 004fdd5b (CONDITIONAL_JUMP)  ; LAB_004fdd5b
    MOV EAX,dword ptr [EBP + -0x4e]     ; 004fdd49
    MOV dword ptr [EBP + -0x72],EAX     ; 004fdd4c
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004fdd4f
    MOV dword ptr [EBP + -0x6e],EAX     ; 004fdd52
    MOV EAX,dword ptr [EBP + -0x46]     ; 004fdd55
    MOV dword ptr [EBP + -0x6a],EAX     ; 004fdd58
    FLD float ptr [EBP + -0x6e]         ; 004fdd5b
        ;   Label: LAB_004fdd5b
    PUSH 0x40000000                     ; 004fdd5e
    FADD float ptr [0x005e6c4b]         ; 004fdd63 | DAT_005e6c4b
    PUSH 0xc0000000                     ; 004fdd69
    FSTP float ptr [EBP + -0x6e]        ; 004fdd6e
    CALL core_actor.cpp_FUN_0040cc00    ; 004fdd71
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fdd76
    ADD ESP,0x8                         ; 004fdd79
    FLD float ptr [EBP + 0x76]          ; 004fdd7c
    PUSH 0x40000000                     ; 004fdd7f
    FADD float ptr [EBP + -0x72]        ; 004fdd84
    PUSH 0xc0000000                     ; 004fdd87
    FSTP float ptr [EBP + -0x72]        ; 004fdd8c
    CALL core_actor.cpp_FUN_0040cc00    ; 004fdd8f
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    FLD double ptr [0x005e6c53]         ; 004fdd94 | DAT_005e6c53
    FLD ST0                             ; 004fdd9a
    MOV dword ptr [EBP + 0x76],EAX      ; 004fdd9c
    FSIN                                ; 004fdd9f
    FLD double ptr [0x005e6c5b]         ; 004fdda1 | DAT_005e6c5b
    FPTAN                               ; 004fdda7
    FSTP ST0                            ; 004fdda9
    FLD float ptr [EBP + 0x76]          ; 004fddab
    FADD float ptr [EBP + -0x6a]        ; 004fddae
    FST float ptr [EBP + -0x6a]         ; 004fddb1
    FLD float ptr [EBP + -0x72]         ; 004fddb4
    CALL crt_math.c_atan2_FUN_005c1d69  ; 004fddb7
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FLD float ptr [EBP + -0x6a]         ; 004fddbc
    FMUL ST0                            ; 004fddbf
    FLD float ptr [EBP + -0x72]         ; 004fddc1
    FMUL ST0                            ; 004fddc4
    FADDP                               ; 004fddc6
    FSQRT                               ; 004fddc8
    FXCH ST4                            ; 004fddca
    FCOS                                ; 004fddcc
    FLD ST1                             ; 004fddce
    FSIN                                ; 004fddd0
    FXCH ST2                            ; 004fddd2
    FCOS                                ; 004fddd4
    FXCH ST5                            ; 004fddd6
    FSTP double ptr [EBP + 0x26]        ; 004fddd8
    FXCH ST2                            ; 004fdddb
    FMUL double ptr [EBP + 0x26]        ; 004fdddd
    FSUB float ptr [EBP + -0x6e]        ; 004fdde0
    FLD ST2                             ; 004fdde3
    FMUL float ptr [0x005e6c4b]         ; 004fdde5 | DAT_005e6c4b
    FLD double ptr [EBP + 0x26]         ; 004fddeb
    FMUL double ptr [0x005e6c43]        ; 004fddee | DAT_005e6c43
    FXCH                                ; 004fddf4
    FMUL ST4                            ; 004fddf6
    FXCH                                ; 004fddf8
    FMUL double ptr [EBP + 0x26]        ; 004fddfa
    FXCH                                ; 004fddfd
    FMULP ST2                           ; 004fddff
    FXCH ST2                            ; 004fde01
    FMUL ST3                            ; 004fde03
    ADD ESP,0x8                         ; 004fde05
    FXCH ST5                            ; 004fde08
    FMULP ST3                           ; 004fde0a
    FXCH                                ; 004fde0c
    FSTP float ptr [EBP + 0x5e]         ; 004fde0e
    FXCH ST2                            ; 004fde11
    FCHS                                ; 004fde13
    FSTP float ptr [EBP + 0xffffff3e]   ; 004fde15
    FXCH                                ; 004fde1b
    FST float ptr [EBP + 0x62]          ; 004fde1d
    FLDZ                                ; 004fde20
    FXCH ST3                            ; 004fde22
    FSTP float ptr [EBP + 0xffffff3a]   ; 004fde24
    FXCH                                ; 004fde2a
    FSTP float ptr [EBP + 0xffffff42]   ; 004fde2c
    FXCH                                ; 004fde32
    FCOMPP                              ; 004fde34
    FNSTSW AX                           ; 004fde36
    SAHF                                ; 004fde38
    JNC 0x004fdaa2                      ; 004fde39
        ;   XREF to: 004fdaa2 (CONDITIONAL_JUMP)  ; LAB_004fdaa2
    FLD float ptr [EBP + 0x5e]          ; 004fde3f
    FDIV float ptr [EBP + 0x62]         ; 004fde42
    FSQRT                               ; 004fde45
    FLD float ptr [EBP + 0xffffff3a]    ; 004fde47
    FXCH                                ; 004fde4d
    FSTP float ptr [EBP + 0x6a]         ; 004fde4f
    FMUL float ptr [EBP + 0x6a]         ; 004fde52
    FLD float ptr [EBP + 0xffffff3e]    ; 004fde55
    FMUL float ptr [EBP + 0x6a]         ; 004fde5b
    FLD float ptr [EBP + 0xffffff42]    ; 004fde5e
    FMUL float ptr [EBP + 0x6a]         ; 004fde64
    LEA EDI,[EBP + -0x2a]               ; 004fde67
    LEA ESI,[EBP + 0xffffff76]          ; 004fde6a
    FXCH ST2                            ; 004fde70
    FSTP float ptr [EBP + 0xffffff76]   ; 004fde72
    FSTP float ptr [EBP + 0xffffff7a]   ; 004fde78
    FSTP float ptr [EBP + 0xffffff7e]   ; 004fde7e
    MOVSD ES:EDI,ESI                    ; 004fde84
    MOVSD ES:EDI,ESI                    ; 004fde85
    MOVSD ES:EDI,ESI                    ; 004fde86
    LEA EAX,[EBP + 0xffffff3a]          ; 004fde87
    LEA ESI,[EBP + -0x2a]               ; 004fde8d
    CMP EAX,ESI                         ; 004fde90
    JZ 0x004fdeaf                       ; 004fde92
        ;   XREF to: 004fdeaf (CONDITIONAL_JUMP)  ; LAB_004fdeaf
    MOV EAX,dword ptr [EBP + -0x2a]     ; 004fde94
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 004fde97
    MOV EAX,dword ptr [EBP + -0x26]     ; 004fde9d
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 004fdea0
    MOV EAX,dword ptr [EBP + -0x22]     ; 004fdea6
    MOV dword ptr [EBP + 0xffffff42],EAX ; 004fdea9
    MOV ESI,0x3f000000                  ; 004fdeaf
        ;   Label: LAB_004fdeaf
    MOV EDI,0x3f800000                  ; 004fdeb4
    LEA EAX,[EBP + -0x1e]               ; 004fdeb9
    XOR ECX,ECX                         ; 004fdebc
    PUSH EAX                            ; 004fdebe
    MOV dword ptr [EBP + -0x1e],ECX     ; 004fdebf
    MOV dword ptr [EBP + -0x1a],ESI     ; 004fdec2
    PUSH EBX                            ; 004fdec5
    LEA ESI,[EBP + 0xffffff46]          ; 004fdec6
    MOV dword ptr [EBP + -0x16],EDI     ; 004fdecc
    CALL core_actor.cpp_FUN_00408b40    ; 004fdecf
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004fded4
    PUSH 0x0                            ; 004fded7
    PUSH 0x2                            ; 004fded9
    LEA EAX,[EBP + 0xffffff3a]          ; 004fdedb
    PUSH EAX                            ; 004fdee1
    LEA EAX,[EBP + 0xffffff6a]          ; 004fdee2
    LEA EDI,[EBP + 0xffffff6a]          ; 004fdee8
    PUSH EAX                            ; 004fdeee
    MOV EAX,[0x0061c010]                ; 004fdeef | DAT_0061c010
    LEA ESI,[EBP + 0xffffff46]          ; 004fdef4
    PUSH EAX                            ; 004fdefa
    MOVSD ES:EDI,ESI                    ; 004fdefb
    MOVSD ES:EDI,ESI                    ; 004fdefc
    MOVSD ES:EDI,ESI                    ; 004fdefd
    CALL core_fire.cpp_FUN_004b5e00     ; 004fdefe
        ;   XREF to: 004b5e00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b5e00(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004fdf03
    PUSH 0x5e6bbb                       ; 004fdf06 | = "larva-blow1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fdf0b
    PUSH EBX                            ; 004fdf11
    CALL dword ptr [EAX + 0x2c]         ; 004fdf12
    ADD ESP,0x8                         ; 004fdf15
    JMP 0x004fdaa2                      ; 004fdf18
        ;   XREF to: 004fdaa2 (UNCONDITIONAL_JUMP)  ; LAB_004fdaa2
    LEA EAX,[EBP + 0x3a]                ; 004fdf1d
        ;   Label: LAB_004fdf1d
    PUSH EAX                            ; 004fdf20
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004fdf21
    PUSH EAX                            ; 004fdf24
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004fdf25
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004fdf2a
    CMP EAX,0x64                        ; 004fdf2d
    JZ 0x004fdcff                       ; 004fdf30
        ;   XREF to: 004fdcff (CONDITIONAL_JUMP)  ; LAB_004fdcff
    JMP 0x004fdaa2                      ; 004fdf36
        ;   XREF to: 004fdaa2 (UNCONDITIONAL_JUMP)  ; LAB_004fdaa2
    PUSH 0x1                            ; 004fdf3b
        ;   Label: LAB_004fdf3b
    PUSH 0x0                            ; 004fdf3d
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004fdf3f
    PUSH ECX                            ; 004fdf42
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fdf43
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fdf48
    PUSH EBX                            ; 004fdf4b
    PUSH 0x5e6bcb                       ; 004fdf4c | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 004fdf51 | g_CConsolePtr
    PUSH ESI                            ; 004fdf57 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004fdf58
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x004fdb2a                      ; 004fdf5d
        ;   XREF to: 004fdb2a (UNCONDITIONAL_JUMP)  ; LAB_004fdb2a
    JBE 0x004fdb1a                      ; 004fdf62
        ;   XREF to: 004fdb1a (CONDITIONAL_JUMP)  ; LAB_004fdb1a
        ;   Label: LAB_004fdf62
    CMP EAX,0x3                         ; 004fdf68
    JZ 0x004fdf3b                       ; 004fdf6b
        ;   XREF to: 004fdf3b (CONDITIONAL_JUMP)  ; LAB_004fdf3b
    PUSH 0x1                            ; 004fdf6d
        ;   Label: LAB_004fdf6d
    PUSH 0x0                            ; 004fdf6f
    JMP 0x004fdb1e                      ; 004fdf71
        ;   XREF to: 004fdb1e (UNCONDITIONAL_JUMP)  ; LAB_004fdb1e
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 004fdf76
        ;   Label: LAB_004fdf76
    JNZ 0x004fdb45                      ; 004fdf7d
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    CMP dword ptr [EBX + 0xdc],0x0      ; 004fdf83
    JNZ 0x004fdb45                      ; 004fdf8a
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH EAX                            ; 004fdf90
    MOV EDI,dword ptr [EBP + 0x5a]      ; 004fdf91
    PUSH EDI                            ; 004fdf94
    LEA ESI,[EBP + 0xfffffeda]          ; 004fdf95
    CALL core_skeleton.cpp_FUN_00569040 ; 004fdf9b
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + -0x5a]               ; 004fdfa0
    ADD ESP,0x8                         ; 004fdfa3
    LEA EAX,[EBP + -0x5a]               ; 004fdfa6
    LEA ESI,[EBP + 0xfffffeda]          ; 004fdfa9
    PUSH EAX                            ; 004fdfaf
    MOVSD ES:EDI,ESI                    ; 004fdfb0
    MOVSD ES:EDI,ESI                    ; 004fdfb1
    MOVSD ES:EDI,ESI                    ; 004fdfb2
    PUSH EBX                            ; 004fdfb3
    LEA ESI,[EBP + 0xfffffece]          ; 004fdfb4
    CALL core_actor.cpp_FUN_00408b40    ; 004fdfba
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004fdfbf
    PUSH 0x1                            ; 004fdfc2
    LEA EAX,[EBP + 0xffffff5e]          ; 004fdfc4
    LEA EDI,[EBP + 0xffffff5e]          ; 004fdfca
    PUSH EAX                            ; 004fdfd0
    MOV EAX,[0x0061dca4]                ; 004fdfd1 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffece]          ; 004fdfd6
    PUSH EAX                            ; 004fdfdc
    MOVSD ES:EDI,ESI                    ; 004fdfdd
    MOVSD ES:EDI,ESI                    ; 004fdfde
    MOVSD ES:EDI,ESI                    ; 004fdfdf
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 004fdfe0
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004fdfe5
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 004fdfe8
    JMP 0x004fdb45                      ; 004fdff2
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH dword ptr [EBP + 0x92]         ; 004fdff7
        ;   Label: LAB_004fdff7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fdffd
    PUSH EBX                            ; 004fe003
    CALL dword ptr [EAX + 0x144]        ; 004fe004
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004fe00a
    ADD ESP,0x8                         ; 004fe010
    TEST ESI,ESI                        ; 004fe013
    JNZ 0x004fe043                      ; 004fe015
        ;   XREF to: 004fe043 (CONDITIONAL_JUMP)  ; LAB_004fe043
    PUSH dword ptr [EBP + 0x92]         ; 004fe017
    PUSH EBX                            ; 004fe01d
    CALL core_enemy.cpp_FUN_004a0fe0    ; 004fe01e
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe023
    TEST EAX,EAX                        ; 004fe026
    JZ 0x004fdb45                       ; 004fe028
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH 0x1                            ; 004fe02e
    PUSH 0x1                            ; 004fe030
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004fe032
    PUSH EDX                            ; 004fe035
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe036
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe03b
    JMP 0x004fdb45                      ; 004fe03e
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    MOV EAX,ESI                         ; 004fe043
        ;   Label: LAB_004fe043
    MOV EDX,dword ptr [EBP + 0x66]      ; 004fe045
    LEA EDI,[EBP + -0x7e]               ; 004fe048
    FLD float ptr [EAX + 0x20]          ; 004fe04b
    FLD float ptr [EAX + 0x24]          ; 004fe04e
    FLD float ptr [EAX + 0x28]          ; 004fe051
    LEA ESI,[EBP + 0xffffff52]          ; 004fe054
    FXCH ST2                            ; 004fe05a
    FSUB float ptr [EDX]                ; 004fe05c
    FXCH                                ; 004fe05e
    FSUB float ptr [EDX + 0x4]          ; 004fe060
    FXCH ST2                            ; 004fe063
    FSUB float ptr [EDX + 0x8]          ; 004fe065
    FXCH                                ; 004fe068
    FSTP float ptr [EBP + 0xffffff52]   ; 004fe06a
    FXCH                                ; 004fe070
    FSTP float ptr [EBP + 0xffffff56]   ; 004fe072
    FSTP float ptr [EBP + 0xffffff5a]   ; 004fe078
    MOVSD ES:EDI,ESI                    ; 004fe07e
    MOVSD ES:EDI,ESI                    ; 004fe07f
    MOVSD ES:EDI,ESI                    ; 004fe080
    FLD float ptr [EBP + -0x7a]         ; 004fe081
    FMUL ST0                            ; 004fe084
    FLD float ptr [EBP + -0x7e]         ; 004fe086
    FMUL ST0                            ; 004fe089
    FADDP                               ; 004fe08b
    FLD float ptr [EBP + -0x76]         ; 004fe08d
    FMUL ST0                            ; 004fe090
    FADDP                               ; 004fe092
    FSTP float ptr [EBP + 0x6e]         ; 004fe094
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004fe097
    MOV EDI,dword ptr [0x01cc804c]      ; 004fe09a | DAT_01cc804c
    SAR EAX,0x1                         ; 004fe0a0
    ADD EAX,EDI                         ; 004fe0a2
    MOV dword ptr [EBP + 0x52],EAX      ; 004fe0a4
    LEA EAX,[EBP + -0x7e]               ; 004fe0a7
    PUSH EAX                            ; 004fe0aa
    LEA ESI,[EBP + -0x42]               ; 004fe0ab
    LEA EDI,[EBP + 0xffffff0a]          ; 004fe0ae
    CALL core_vecdir.cpp_FUN_005a7520   ; 004fe0b4
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + -0x42]               ; 004fe0b9
    MOVSD ES:EDI,ESI                    ; 004fe0bc
    MOVSD ES:EDI,ESI                    ; 004fe0bd
    MOVSD ES:EDI,ESI                    ; 004fe0be
    ADD ESP,0x4                         ; 004fe0bf
    FLD float ptr [EBP + 0xffffff0e]    ; 004fe0c2
    FSUB float ptr [EBX + 0x34]         ; 004fe0c8
    SUB ESP,0x4                         ; 004fe0cb
    FSTP float ptr [ESP]                ; 004fe0ce
    CALL core_actor.cpp_FUN_0040cd60    ; 004fe0d1
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe0d6
    FLD float ptr [EBP + 0x76]          ; 004fe0d9
    FABS                                ; 004fe0dc
    ADD ESP,0x4                         ; 004fe0de
    FCOMP double ptr [0x005e6c2b]       ; 004fe0e1 | DAT_005e6c2b
    FNSTSW AX                           ; 004fe0e7
    SAHF                                ; 004fe0e9
    JNC 0x004fe140                      ; 004fe0ea
        ;   XREF to: 004fe140 (CONDITIONAL_JUMP)  ; LAB_004fe140
    FLD float ptr [EBP + 0x52]          ; 004fe0ec
    FCOMP double ptr [0x005e6c33]       ; 004fe0ef | DAT_005e6c33
    FNSTSW AX                           ; 004fe0f5
    SAHF                                ; 004fe0f7
    JA 0x004fe140                       ; 004fe0f8
        ;   XREF to: 004fe140 (CONDITIONAL_JUMP)  ; LAB_004fe140
    FLD float ptr [EBX + 0xc1e4]        ; 004fe0fa
    FLDZ                                ; 004fe100
    FCOMPP                              ; 004fe102
    FNSTSW AX                           ; 004fe104
    SAHF                                ; 004fe106
    JC 0x004fdb45                       ; 004fe107
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH 0x1                            ; 004fe10d
    PUSH 0x2                            ; 004fe10f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004fe111
    PUSH EAX                            ; 004fe114
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe115
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe11a
    PUSH 0x41f00000                     ; 004fe11d
    PUSH 0x41700000                     ; 004fe122
    CALL core_actor.cpp_FUN_0040cc00    ; 004fe127
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe12c
    ADD ESP,0x8                         ; 004fe12f
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fe132
    MOV dword ptr [EBX + 0xc1e4],EAX    ; 004fe135
    JMP 0x004fdb45                      ; 004fe13b
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH 0x1                            ; 004fe140
        ;   Label: LAB_004fe140
    PUSH 0x1                            ; 004fe142
    LEA EAX,[EBX + 0x158]               ; 004fe144
    PUSH EAX                            ; 004fe14a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe14b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe150
    JMP 0x004fdb45                      ; 004fe153
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH dword ptr [EBP + 0x92]         ; 004fe158
        ;   Label: LAB_004fe158
    MOV EAX,dword ptr [EBX + 0x154]     ; 004fe15e
    PUSH EBX                            ; 004fe164
    CALL dword ptr [EAX + 0x144]        ; 004fe165
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004fe16b
    ADD ESP,0x8                         ; 004fe171
    TEST EDX,EDX                        ; 004fe174
    JNZ 0x004fe1a3                      ; 004fe176
        ;   XREF to: 004fe1a3 (CONDITIONAL_JUMP)  ; LAB_004fe1a3
    PUSH dword ptr [EBP + 0x92]         ; 004fe178
    PUSH EBX                            ; 004fe17e
    CALL core_enemy.cpp_FUN_004a0fe0    ; 004fe17f
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe184
    TEST EAX,EAX                        ; 004fe187
    JNZ 0x004fdb45                      ; 004fe189
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH 0x1                            ; 004fe18f
    PUSH EAX                            ; 004fe191
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004fe192
    PUSH ECX                            ; 004fe195
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe196
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe19b
    JMP 0x004fdb45                      ; 004fe19e
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    MOV EAX,[0x00602d1c]                ; 004fe1a3 | DAT_00602d1c
        ;   Label: LAB_004fe1a3
    PUSH 0x3e32b8c2                     ; 004fe1a8
    MOV dword ptr [EBP + 0x72],EAX      ; 004fe1ad
    LEA EAX,[EBX + 0x249c]              ; 004fe1b0
    PUSH 0x3f000000                     ; 004fe1b6
    MOV dword ptr [EAX + 0x8],0x0       ; 004fe1bb
    XOR ECX,ECX                         ; 004fe1c2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fe1c4
    MOV dword ptr [EAX + 0x4],EDX       ; 004fe1c7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fe1ca
    MOV dword ptr [EAX],EDX             ; 004fe1cd
    MOV EAX,dword ptr [EBP + 0x72]      ; 004fe1cf
    MOV dword ptr [EBP + 0x12],ECX      ; 004fe1d2
    MOV dword ptr [EBP + 0x1a],EAX      ; 004fe1d5
    LEA EAX,[EBP + 0x12]                ; 004fe1d8
    MOV dword ptr [EBP + 0x16],ECX      ; 004fe1db
    PUSH EAX                            ; 004fe1de
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004fe1df
    PUSH EAX                            ; 004fe1e5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004fe1e6
    CALL dword ptr [EDX + 0xc4]         ; 004fe1ec
    ADD ESP,0x4                         ; 004fe1f2
    PUSH EAX                            ; 004fe1f5
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004fe1f6
    ADD EAX,0x20                        ; 004fe1fc
    PUSH EAX                            ; 004fe1ff
    PUSH EBX                            ; 004fe200
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 004fe201
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004fe206
    TEST EAX,EAX                        ; 004fe209
    JL 0x004fe35f                       ; 004fe20b
        ;   XREF to: 004fe35f (CONDITIONAL_JUMP)  ; LAB_004fe35f
    FLD float ptr [EBX + 0xc1e4]        ; 004fe211
        ;   Label: LAB_004fe211
    FLDZ                                ; 004fe217
    FCOMPP                              ; 004fe219
    FNSTSW AX                           ; 004fe21b
    SAHF                                ; 004fe21d
    JC 0x004fdb45                       ; 004fe21e
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    LEA EDI,[EBP + 0xfffffee6]          ; 004fe224
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004fe22a
    LEA ESI,[EBP + 0xfffffef2]          ; 004fe230
    LEA EAX,[EBX + 0x20]                ; 004fe236
    FLD float ptr [EDX + 0x20]          ; 004fe239
    FLD float ptr [EDX + 0x24]          ; 004fe23c
    FLD float ptr [EDX + 0x28]          ; 004fe23f
    FXCH ST2                            ; 004fe242
    FSUB float ptr [EAX]                ; 004fe244
    FXCH                                ; 004fe246
    FSUB float ptr [EAX + 0x4]          ; 004fe248
    FXCH ST2                            ; 004fe24b
    FSUB float ptr [EAX + 0x8]          ; 004fe24d
    FXCH                                ; 004fe250
    FSTP float ptr [EBP + 0xfffffef2]   ; 004fe252
    FXCH                                ; 004fe258
    FSTP float ptr [EBP + 0xfffffef6]   ; 004fe25a
    FSTP float ptr [EBP + 0xfffffefa]   ; 004fe260
    MOVSD ES:EDI,ESI                    ; 004fe266
    MOVSD ES:EDI,ESI                    ; 004fe267
    MOVSD ES:EDI,ESI                    ; 004fe268
    FLD float ptr [EBP + 0xfffffeea]    ; 004fe269
    FMUL ST0                            ; 004fe26f
    FLD float ptr [EBP + 0xfffffee6]    ; 004fe271
    FMUL ST0                            ; 004fe277
    FADDP                               ; 004fe279
    FLD float ptr [EBP + 0xfffffeee]    ; 004fe27b
    FMUL ST0                            ; 004fe281
    FADDP                               ; 004fe283
    FSTP float ptr [EBP + 0x3e]         ; 004fe285
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004fe288
    MOV EDX,dword ptr [0x01cc804c]      ; 004fe28b | DAT_01cc804c
    SAR EAX,0x1                         ; 004fe291
    ADD EAX,EDX                         ; 004fe293
    MOV dword ptr [EBP + 0x42],EAX      ; 004fe295
    FLD float ptr [EBP + 0x42]          ; 004fe298
    FCOMP float ptr [EBX + 0xc1e0]      ; 004fe29b
    FNSTSW AX                           ; 004fe2a1
    SAHF                                ; 004fe2a3
    JNC 0x004fdb45                      ; 004fe2a4
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    LEA EAX,[EBP + 0xfffffee6]          ; 004fe2aa
    PUSH EAX                            ; 004fe2b0
    LEA ESI,[EBP + -0x12]               ; 004fe2b1
    LEA EDI,[EBP + -0x66]               ; 004fe2b4
    CALL core_vecdir.cpp_FUN_005a7520   ; 004fe2b7
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[EBP + -0x12]               ; 004fe2bc
    LEA EAX,[EBP + -0x66]               ; 004fe2bf
    LEA EDX,[EBP + 0xfffffee6]          ; 004fe2c2
    ADD ESP,0x4                         ; 004fe2c8
    MOVSD ES:EDI,ESI                    ; 004fe2cb
    MOVSD ES:EDI,ESI                    ; 004fe2cc
    MOVSD ES:EDI,ESI                    ; 004fe2cd
    CMP EDX,EAX                         ; 004fe2ce
    JZ 0x004fe2ed                       ; 004fe2d0
        ;   XREF to: 004fe2ed (CONDITIONAL_JUMP)  ; LAB_004fe2ed
    MOV EAX,dword ptr [EBP + -0x66]     ; 004fe2d2
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 004fe2d5
    MOV EAX,dword ptr [EBP + -0x62]     ; 004fe2db
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004fe2de
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004fe2e4
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 004fe2e7
    PUSH dword ptr [EBP + 0xfffffeea]   ; 004fe2ed
        ;   Label: LAB_004fe2ed
    CALL core_actor.cpp_FUN_0040cd60    ; 004fe2f3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe2f8
    ADD ESP,0x4                         ; 004fe2fb
    FLD float ptr [EBP + 0x76]          ; 004fe2fe
    PUSH dword ptr [EBX + 0x34]         ; 004fe301
    FSTP float ptr [EBP + 0x56]         ; 004fe304
    CALL core_actor.cpp_FUN_0040cd60    ; 004fe307
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe30c
    ADD ESP,0x4                         ; 004fe30f
    FLD float ptr [EBP + 0x76]          ; 004fe312
    FSUBR float ptr [EBP + 0x56]        ; 004fe315
    SUB ESP,0x4                         ; 004fe318
    FSTP float ptr [ESP]                ; 004fe31b
    CALL core_actor.cpp_FUN_0040cd60    ; 004fe31e
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe323
    FLD float ptr [EBP + 0x76]          ; 004fe326
    FABS                                ; 004fe329
    ADD ESP,0x4                         ; 004fe32b
    FCOMP double ptr [0x005e6c2b]       ; 004fe32e | DAT_005e6c2b
    FNSTSW AX                           ; 004fe334
    SAHF                                ; 004fe336
    JNC 0x004fdb45                      ; 004fe337
        ;   XREF to: 004fdb45 (CONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH 0x1                            ; 004fe33d
    PUSH 0x2                            ; 004fe33f
    LEA EAX,[EBX + 0x158]               ; 004fe341
    PUSH EAX                            ; 004fe347
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe348
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe34d
    MOV dword ptr [EBX + 0xc1e4],0x40c00000 ; 004fe350
    JMP 0x004fdb45                      ; 004fe35a
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    PUSH EBX                            ; 004fe35f
        ;   Label: LAB_004fe35f
    PUSH 0x5e6bf5                       ; 004fe360 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00611100]      ; 004fe365 | g_CConsolePtr
    PUSH EDI                            ; 004fe36b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 004fe36c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 004fe371
    PUSH 0x1                            ; 004fe374
    PUSH 0x0                            ; 004fe376
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004fe378
    PUSH EAX                            ; 004fe37b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004fe37c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe381
    JMP 0x004fe211                      ; 004fe384
        ;   XREF to: 004fe211 (UNCONDITIONAL_JUMP)  ; LAB_004fe211
    CMP ESI,0x1                         ; 004fe389
        ;   Label: LAB_004fe389
    JNC 0x004fe39b                      ; 004fe38c
        ;   XREF to: 004fe39b (CONDITIONAL_JUMP)  ; LAB_004fe39b
    TEST ESI,ESI                        ; 004fe38e
    JZ 0x004fdff7                       ; 004fe390
        ;   XREF to: 004fdff7 (CONDITIONAL_JUMP)  ; LAB_004fdff7
    JMP 0x004fdb45                      ; 004fe396
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    JBE 0x004fe158                      ; 004fe39b
        ;   XREF to: 004fe158 (CONDITIONAL_JUMP)  ; LAB_004fe158
        ;   Label: LAB_004fe39b
    CMP ESI,0x5                         ; 004fe3a1
    JZ 0x004fdf76                       ; 004fe3a4
        ;   XREF to: 004fdf76 (CONDITIONAL_JUMP)  ; LAB_004fdf76
    JMP 0x004fdb45                      ; 004fe3aa
        ;   XREF to: 004fdb45 (UNCONDITIONAL_JUMP)  ; LAB_004fdb45
    FLD float ptr [EBX + 0x27b8]        ; 004fe3af
        ;   Label: LAB_004fe3af
    FLDLN2                              ; 004fe3b5
    FXCH                                ; 004fe3b7
    FYL2X                               ; 004fe3b9
    FMUL double ptr [0x005e6c3b]        ; 004fe3bb | DAT_005e6c3b
    FLD1                                ; 004fe3c1
    FLDL2E                              ; 004fe3c3
    FMUL ST2                            ; 004fe3c5
    FST ST2                             ; 004fe3c7
    FPREM                               ; 004fe3c9
    F2XM1                               ; 004fe3cb
    FADDP                               ; 004fe3cd
    FSCALE                              ; 004fe3cf
    FSTP ST1                            ; 004fe3d1
    PUSH 0x3f8147ae                     ; 004fe3d3
    PUSH 0x3f7d70a4                     ; 004fe3d8
    FSTP double ptr [EBP + 0x1e]        ; 004fe3dd
    CALL core_actor.cpp_FUN_0040cc00    ; 004fe3e0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe3e5
    ADD ESP,0x8                         ; 004fe3e8
    FLD float ptr [EBP + 0x76]          ; 004fe3eb
    FMUL double ptr [EBP + 0x1e]        ; 004fe3ee
    SUB ESP,0x8                         ; 004fe3f1
    FSTP double ptr [ESP]               ; 004fe3f4
    SUB ESP,0x8                         ; 004fe3f7
    FLD float ptr [EBX + 0x27b8]        ; 004fe3fa
    FSTP double ptr [ESP]               ; 004fe400
    PUSH 0x5e6c16                       ; 004fe403 | = "slime.wav @%f *%f"
    LEA EAX,[EBP + 0xfffffe06]          ; 004fe408
    PUSH EAX                            ; 004fe40e
    CALL crt_unknown.c_FUN_005bfb40     ; 004fe40f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x18                        ; 004fe414
    LEA EAX,[EBP + 0xfffffe06]          ; 004fe417
    PUSH EAX                            ; 004fe41d
    MOV EDX,dword ptr [EBX + 0x154]     ; 004fe41e
    PUSH EBX                            ; 004fe424
    CALL dword ptr [EDX + 0x30]         ; 004fe425
    ADD ESP,0x8                         ; 004fe428
    MOV dword ptr [EBX + 0xc270],EAX    ; 004fe42b
    JMP 0x004fdb87                      ; 004fe431
        ;   XREF to: 004fdb87 (UNCONDITIONAL_JUMP)  ; LAB_004fdb87
    MOV EAX,dword ptr [EBX + 0xc270]    ; 004fe436
        ;   Label: LAB_004fe436
    PUSH EAX                            ; 004fe43c
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004fe43d
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004fe442
    JMP 0x004fdb87                      ; 004fe445
        ;   XREF to: 004fdb87 (UNCONDITIONAL_JUMP)  ; LAB_004fdb87

