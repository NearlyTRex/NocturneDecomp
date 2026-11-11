; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_carved_cpp_CCarved_process_FUN_00428ae0(CCarved *this_ptr,float delta_time)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00428a80 = 00429c0a
;   TerminatedCString s_ghoul_eat_wav_005d52dd
;   TerminatedCString s_s_picked_up_s_using_hand_005d52ed
;   TerminatedCString s_core_carved_cpp_005d530c
;   undefined4 DAT_005d531f
;   TerminatedCString s_s_lugging_s_005d5324
;   TerminatedCString s_carved_groan_wav_005d5333
;   TerminatedCString s_core_carved_cpp_005d5345
;   undefined4 DAT_005d5358
;   TerminatedCString s_s_tossing_s_005d535d
;   TerminatedCString s_carved_groan_wav_005d536c
;   TerminatedCString s_zombie_bang_door_wav_005d537e
;   TerminatedCString s_ghoul_eat_wav_005d5394
;   undefined4 s_ghoul_eat_wav_005d5394+1
;   undefined4 s_ghoul_eat_wav_005d5394+2
;   ... and 37 more
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_carved.cpp_FUN_0042a930
;   core_carved.cpp_FUN_0042b290
;   core_carved.cpp_FUN_0042be20
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   ... and 31 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428ae0
        ;   Label: core_carved.cpp_CCarved_process_FUN_00428ae0
    PUSH ESI                            ; 00428ae1
    PUSH EDI                            ; 00428ae2
    PUSH EBP                            ; 00428ae3
    MOV EBP,ESP                         ; 00428ae4
    SUB ESP,0x4c0                       ; 00428ae6
    SUB EBP,0x7a                        ; 00428aec
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00428aef
    PUSH dword ptr [EBP + 0x92]         ; 00428af5
    PUSH EBX                            ; 00428afb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 00428afc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00428b01
    TEST EAX,EAX                        ; 00428b04
    JZ 0x00428bc0                       ; 00428b06
        ;   XREF to: 00428bc0 (CONDITIONAL_JUMP)  ; LAB_00428bc0
    MOV EAX,dword ptr [EBX + 0xc2cc]    ; 00428b0c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00428b12
    JZ 0x00428bd7                       ; 00428b1a
        ;   XREF to: 00428bd7 (CONDITIONAL_JUMP)  ; LAB_00428bd7
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 00428b20
        ;   Label: LAB_00428b20
    TEST ECX,ECX                        ; 00428b26
    JNZ 0x00428c14                      ; 00428b28
        ;   XREF to: 00428c14 (CONDITIONAL_JUMP)  ; LAB_00428c14
    FLD float ptr [EBX + 0xc2d4]        ; 00428b2e
    FLDZ                                ; 00428b34
    FCOMPP                              ; 00428b36
    FNSTSW AX                           ; 00428b38
    SAHF                                ; 00428b3a
    JC 0x00428c74                       ; 00428b3b
        ;   XREF to: 00428c74 (CONDITIONAL_JUMP)  ; LAB_00428c74
    FLD float ptr [EBP + 0x92]          ; 00428b41
        ;   Label: LAB_00428b41
    LEA EAX,[EBP + 0xfffffc9a]          ; 00428b47
    FMUL float ptr [EBX + 0xc1d0]       ; 00428b4d
    ADD EAX,0xc                         ; 00428b53
    FMUL float ptr [EBX + 0xc2f0]       ; 00428b56
    MOV dword ptr [EBP + 0x62],EAX      ; 00428b5c
    LEA EAX,[EBP + 0xfffffc82]          ; 00428b5f
    ADD EAX,0xc                         ; 00428b65
    MOV dword ptr [EBP + 0x6a],EAX      ; 00428b68
    LEA EAX,[EBX + 0x158]               ; 00428b6b
    FSTP float ptr [EBP + 0x2a]         ; 00428b71
    MOV dword ptr [EBP + 0x66],EAX      ; 00428b74
    FLD float ptr [EBP + 0x2a]          ; 00428b77
        ;   Label: LAB_00428b77
    FLDZ                                ; 00428b7a
    FCOMPP                              ; 00428b7c
    FNSTSW AX                           ; 00428b7e
    SAHF                                ; 00428b80
    JNC 0x00429656                      ; 00428b81
        ;   XREF to: 00429656 (CONDITIONAL_JUMP)  ; LAB_00429656
    LEA EAX,[EBP + 0x2a]                ; 00428b87
    PUSH EAX                            ; 00428b8a
    MOV EAX,dword ptr [EBP + 0x66]      ; 00428b8b
    PUSH EAX                            ; 00428b8e
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00428b8f
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00428b94
    MOV ESI,EAX                         ; 00428b97
    CMP EAX,0xb                         ; 00428b99
    JNC 0x004295fe                      ; 00428b9c
        ;   XREF to: 004295fe (CONDITIONAL_JUMP)  ; LAB_004295fe
    CMP EAX,0x5                         ; 00428ba2
    JNC 0x00429638                      ; 00428ba5
        ;   XREF to: 00429638 (CONDITIONAL_JUMP)  ; LAB_00429638
    CMP EAX,0x2                         ; 00428bab
    JZ 0x00429015                       ; 00428bae
        ;   XREF to: 00429015 (CONDITIONAL_JUMP)  ; LAB_00429015
    PUSH ESI                            ; 00428bb4
        ;   Label: LAB_00428bb4
    PUSH EBX                            ; 00428bb5
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00428bb6
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00428bbb
    JMP 0x00428b77                      ; 00428bbe
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EDI,dword ptr [EBX + 0xc2e0]    ; 00428bc0
        ;   Label: LAB_00428bc0
    PUSH EDI                            ; 00428bc6
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00428bc7
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00428bcc
    LEA ESP,[EBP + 0x7a]                ; 00428bcf
        ;   Label: LAB_00428bcf
    POP EBP                             ; 00428bd2
    POP EDI                             ; 00428bd3
    POP ESI                             ; 00428bd4
    POP EBX                             ; 00428bd5
    RET                                 ; 00428bd6
    PUSH EBX                            ; 00428bd7
        ;   Label: LAB_00428bd7
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428bd8
    CALL dword ptr [EAX + 0x10c]        ; 00428bde
    ADD ESP,0x4                         ; 00428be4
    TEST EAX,EAX                        ; 00428be7
    JNZ 0x00428b20                      ; 00428be9
        ;   XREF to: 00428b20 (CONDITIONAL_JUMP)  ; LAB_00428b20
    PUSH 0x1                            ; 00428bef
    PUSH 0x2                            ; 00428bf1
    PUSH EAX                            ; 00428bf3
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00428bf4
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00428bf9
    ADD EAX,0x13                        ; 00428bfc
    PUSH EAX                            ; 00428bff
    LEA EAX,[EBX + 0x158]               ; 00428c00
    PUSH EAX                            ; 00428c06
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00428c07
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00428c0c
    JMP 0x00428b20                      ; 00428c0f
        ;   XREF to: 00428b20 (UNCONDITIONAL_JUMP)  ; LAB_00428b20
    MOV EAX,dword ptr [ECX + 0x154]     ; 00428c14
        ;   Label: LAB_00428c14
    PUSH 0x0                            ; 00428c1a
    MOV dword ptr [EBP + 0x76],EAX      ; 00428c1c
    LEA EAX,[EBX + 0x158]               ; 00428c1f
    LEA ESI,[EBP + 0xfffffef2]          ; 00428c25
    PUSH EAX                            ; 00428c2b
    LEA EDI,[EBP + 0xfffffec2]          ; 00428c2c
    MOV dword ptr [EBP + 0x22],ECX      ; 00428c32
    CALL core_skeleton.cpp_FUN_00569130 ; 00428c35
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00428c3a
    LEA EAX,[EBP + 0xfffffec2]          ; 00428c3d
    LEA ESI,[EBP + 0xfffffef2]          ; 00428c43
    PUSH EAX                            ; 00428c49
    MOVSD ES:EDI,ESI                    ; 00428c4a
    MOVSD ES:EDI,ESI                    ; 00428c4b
    MOVSD ES:EDI,ESI                    ; 00428c4c
    PUSH EBX                            ; 00428c4d
    MOV ESI,dword ptr [EBP + 0x22]      ; 00428c4e
    MOV EAX,dword ptr [EBP + 0x76]      ; 00428c51
    PUSH ESI                            ; 00428c54
    CALL dword ptr [EAX + 0x110]        ; 00428c55
    ADD ESP,0xc                         ; 00428c5b
    TEST EAX,EAX                        ; 00428c5e
    JNZ 0x00428bcf                      ; 00428c60
        ;   XREF to: 00428bcf (CONDITIONAL_JUMP)  ; LAB_00428bcf
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00428c66
    LEA ESP,[EBP + 0x7a]                ; 00428c6c
    POP EBP                             ; 00428c6f
    POP EDI                             ; 00428c70
    POP ESI                             ; 00428c71
    POP EBX                             ; 00428c72
    RET                                 ; 00428c73
    FLD float ptr [EBX + 0xc2d4]        ; 00428c74
        ;   Label: LAB_00428c74
    FSUB float ptr [EBP + 0x92]         ; 00428c7a
    FSTP float ptr [EBX + 0xc2d4]       ; 00428c80
    JMP 0x00428b41                      ; 00428c86
        ;   XREF to: 00428b41 (UNCONDITIONAL_JUMP)  ; LAB_00428b41
    MOV EDX,0x1                         ; 00428c8b
        ;   Label: LAB_00428c8b
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00428c90
    MOV dword ptr [EBP + 0x72],EDX      ; 00428c96
    TEST ECX,ECX                        ; 00428c99
    JNZ 0x00428cab                      ; 00428c9b
        ;   XREF to: 00428cab (CONDITIONAL_JUMP)  ; LAB_00428cab
    PUSH EBX                            ; 00428c9d
        ;   Label: LAB_00428c9d
    CALL core_carved.cpp_FUN_0042be20   ; 00428c9e
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428ca3
    JMP 0x00428b77                      ; 00428ca6
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EAX,[0x005fd468]                ; 00428cab | DAT_005fd468
        ;   Label: LAB_00428cab
    MOV dword ptr [EBP + 0xfffffd4a],EAX ; 00428cb0
    LEA EAX,[EBP + 0xfffffd42]          ; 00428cb6
    XOR ESI,ESI                         ; 00428cbc
    PUSH EAX                            ; 00428cbe
    MOV dword ptr [EBP + 0xfffffd42],ESI ; 00428cbf
    MOV dword ptr [EBP + 0xfffffd46],ESI ; 00428cc5
    PUSH EBX                            ; 00428ccb
    LEA ESI,[EBP + 0xfffffdf6]          ; 00428ccc
    LEA EDI,[EBP + 0xfffffdde]          ; 00428cd2
    CALL core_actor.cpp_FUN_00408b40    ; 00428cd8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffdf6]          ; 00428cdd
    MOVSD ES:EDI,ESI                    ; 00428ce3
    MOVSD ES:EDI,ESI                    ; 00428ce4
    MOVSD ES:EDI,ESI                    ; 00428ce5
    FLD float ptr [EBP + 0xfffffdde]    ; 00428ce6
    FLD float ptr [EBP + 0xfffffde2]    ; 00428cec
    FLD float ptr [EBP + 0xfffffde6]    ; 00428cf2
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428cf8
    LEA EDI,[EBP + -0x6]                ; 00428cfe
    LEA ESI,[EBP + 0xfffffe9e]          ; 00428d01
    FXCH ST2                            ; 00428d07
    FSUB float ptr [EAX + 0x20]         ; 00428d09
    FXCH                                ; 00428d0c
    FSUB float ptr [EAX + 0x24]         ; 00428d0e
    FXCH ST2                            ; 00428d11
    FSUB float ptr [EAX + 0x28]         ; 00428d13
    FXCH                                ; 00428d16
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00428d18
    FXCH                                ; 00428d1e
    FSTP float ptr [EBP + 0xfffffea2]   ; 00428d20
    FSTP float ptr [EBP + 0xfffffea6]   ; 00428d26
    MOVSD ES:EDI,ESI                    ; 00428d2c
    MOVSD ES:EDI,ESI                    ; 00428d2d
    MOVSD ES:EDI,ESI                    ; 00428d2e
    FLD float ptr [EBP + -0x6]          ; 00428d2f
    FMUL ST0                            ; 00428d32
    FLD float ptr [EBP + 0x2]           ; 00428d34
    FMUL ST0                            ; 00428d37
    XOR EAX,EAX                         ; 00428d39
    FADDP                               ; 00428d3b
    MOV dword ptr [EBP + -0x2],EAX      ; 00428d3d
    FSQRT                               ; 00428d40
    ADD ESP,0x8                         ; 00428d42
    FLD1                                ; 00428d45
    FCOMPP                              ; 00428d47
    FNSTSW AX                           ; 00428d49
    SAHF                                ; 00428d4b
    JC 0x00428c9d                       ; 00428d4c
        ;   XREF to: 00428c9d (CONDITIONAL_JUMP)  ; LAB_00428c9d
    CMP dword ptr [EBP + 0x72],0x0      ; 00428d52
    JZ 0x00428e18                       ; 00428d56
        ;   XREF to: 00428e18 (CONDITIONAL_JUMP)  ; LAB_00428e18
    MOV ESI,0x40800000                  ; 00428d5c
    LEA EAX,[EBP + 0xffffff16]          ; 00428d61
    LEA EDI,[EBP + -0x1e]               ; 00428d67
    XOR ECX,ECX                         ; 00428d6a
    PUSH EAX                            ; 00428d6c
    MOV dword ptr [EBP + 0xffffff16],ECX ; 00428d6d
    MOV dword ptr [EBP + 0xffffff1a],ESI ; 00428d73
    PUSH EBX                            ; 00428d79
    LEA ESI,[EBP + 0xffffff46]          ; 00428d7a
    MOV dword ptr [EBP + 0xffffff1e],ECX ; 00428d80
    CALL core_actor.cpp_FUN_00408b40    ; 00428d86
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff46]          ; 00428d8b
    MOVSD ES:EDI,ESI                    ; 00428d91
    MOVSD ES:EDI,ESI                    ; 00428d92
    MOVSD ES:EDI,ESI                    ; 00428d93
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00428d94
    LEA EDI,[EBP + 0xffffff2e]          ; 00428d9a
    LEA ESI,[ESI + 0x20]                ; 00428da0
    MOV EAX,dword ptr [EBP + -0x1a]     ; 00428da3
    MOVSD ES:EDI,ESI                    ; 00428da6
    MOVSD ES:EDI,ESI                    ; 00428da7
    MOVSD ES:EDI,ESI                    ; 00428da8
    ADD ESP,0x8                         ; 00428da9
    MOV dword ptr [EBP + 0xffffff32],EAX ; 00428dac
    MOV EAX,[0x00622c18]                ; 00428db2 | g_CDemonSetPtr
    PUSH EAX                            ; 00428db7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00428db8
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00428dbd
    PUSH EBX                            ; 00428dc0
    MOV EDX,dword ptr [0x00622c18]      ; 00428dc1 | g_CDemonSetPtr
    PUSH EDX                            ; 00428dc7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00428dc8
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00428dcd
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 00428dd0
    PUSH ECX                            ; 00428dd6
    MOV ESI,dword ptr [0x00622c18]      ; 00428dd7 | g_CDemonSetPtr
    PUSH ESI                            ; 00428ddd | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00428dde
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00428de3
    LEA EAX,[EBP + 0xffffff2e]          ; 00428de6
    PUSH EAX                            ; 00428dec
    LEA EAX,[EBP + -0x1e]               ; 00428ded
    PUSH EAX                            ; 00428df0
    MOV EDI,dword ptr [0x00622c18]      ; 00428df1 | g_CDemonSetPtr
    PUSH EDI                            ; 00428df7 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 00428df8
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00428dfd
    TEST EAX,EAX                        ; 00428e00
    JZ 0x00428e09                       ; 00428e02
        ;   XREF to: 00428e09 (CONDITIONAL_JUMP)  ; LAB_00428e09
    XOR EAX,EAX                         ; 00428e04
    MOV dword ptr [EBP + 0x72],EAX      ; 00428e06
    MOV EDX,dword ptr [0x00622c18]      ; 00428e09 | g_CDemonSetPtr
        ;   Label: LAB_00428e09
    PUSH EDX                            ; 00428e0f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00428e10
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00428e15
    CMP dword ptr [EBP + 0x72],0x0      ; 00428e18
        ;   Label: LAB_00428e18
    JZ 0x00428e3f                       ; 00428e1c
        ;   XREF to: 00428e3f (CONDITIONAL_JUMP)  ; LAB_00428e3f
    PUSH 0x0                            ; 00428e1e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428e20
    PUSH EBX                            ; 00428e26
    MOV ESI,dword ptr [EAX + 0x154]     ; 00428e27
    PUSH EAX                            ; 00428e2d
    CALL dword ptr [ESI + 0xec]         ; 00428e2e
    ADD ESP,0xc                         ; 00428e34
    TEST EAX,EAX                        ; 00428e37
    JZ 0x00428c9d                       ; 00428e39
        ;   XREF to: 00428c9d (CONDITIONAL_JUMP)  ; LAB_00428c9d
    CMP dword ptr [EBP + 0x72],0x0      ; 00428e3f
        ;   Label: LAB_00428e3f
    JNZ 0x00428b77                      ; 00428e43
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH EBX                            ; 00428e49
    CALL core_carved.cpp_FUN_0042be20   ; 00428e4a
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428e4f
    JMP 0x00428b77                      ; 00428e52
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00428e57
        ;   Label: LAB_00428e57
    JNZ 0x00428e6e                      ; 00428e5e
        ;   XREF to: 00428e6e (CONDITIONAL_JUMP)  ; LAB_00428e6e
    PUSH EBX                            ; 00428e60
    CALL core_carved.cpp_FUN_0042be20   ; 00428e61
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428e66
    JMP 0x00428b77                      ; 00428e69
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 00428e6e
        ;   Label: LAB_00428e6e
    PUSH EDX                            ; 00428e74
    MOV ECX,dword ptr [EBP + 0x66]      ; 00428e75
    PUSH ECX                            ; 00428e78
    LEA ESI,[EBP + 0xfffffd5a]          ; 00428e79
    LEA EDI,[EBP + 0xfffffd4e]          ; 00428e7f
    CALL core_skeleton.cpp_FUN_00569040 ; 00428e85
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00428e8a
    LEA EAX,[EBP + 0xfffffd4e]          ; 00428e8d
    LEA ESI,[EBP + 0xfffffd5a]          ; 00428e93
    PUSH EAX                            ; 00428e99
    MOVSD ES:EDI,ESI                    ; 00428e9a
    MOVSD ES:EDI,ESI                    ; 00428e9b
    MOVSD ES:EDI,ESI                    ; 00428e9c
    PUSH EBX                            ; 00428e9d
    LEA ESI,[EBP + 0xfffffe26]          ; 00428e9e
    LEA EDI,[EBP + 0xfffffdba]          ; 00428ea4
    CALL core_actor.cpp_FUN_00408b40    ; 00428eaa
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe26]          ; 00428eaf
    MOVSD ES:EDI,ESI                    ; 00428eb5
    MOVSD ES:EDI,ESI                    ; 00428eb6
    MOVSD ES:EDI,ESI                    ; 00428eb7
    MOV ESI,dword ptr [EBX + 0xc2c8]    ; 00428eb8
    ADD ESP,0x8                         ; 00428ebe
    TEST ESI,ESI                        ; 00428ec1
    JL 0x00428eed                       ; 00428ec3
        ;   XREF to: 00428eed (CONDITIONAL_JUMP)  ; LAB_00428eed
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428ec5
    PUSH EAX                            ; 00428ecb
    MOV ESI,dword ptr [EAX + 0x154]     ; 00428ecc
    CALL dword ptr [ESI + 0xf4]         ; 00428ed2
    ADD ESP,0x4                         ; 00428ed8
    CMP EAX,EBX                         ; 00428edb
    JZ 0x00428f26                       ; 00428edd
        ;   XREF to: 00428f26 (CONDITIONAL_JUMP)  ; LAB_00428f26
    PUSH EBX                            ; 00428edf
    CALL core_carved.cpp_FUN_0042be20   ; 00428ee0
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428ee5
    JMP 0x00428b77                      ; 00428ee8
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428eed
        ;   Label: LAB_00428eed
    FLD float ptr [EBP + 0xfffffdba]    ; 00428ef3
    FSUB float ptr [EAX + 0x20]         ; 00428ef9
    FMUL ST0                            ; 00428efc
    FLD float ptr [EBP + 0xfffffdc2]    ; 00428efe
    FSUB float ptr [EAX + 0x28]         ; 00428f04
    FMUL ST0                            ; 00428f07
    FADDP                               ; 00428f09
    FSQRT                               ; 00428f0b
    FCOMP double ptr [0x005d548d]       ; 00428f0d | DAT_005d548d
    FNSTSW AX                           ; 00428f13
    SAHF                                ; 00428f15
    JBE 0x00428f26                      ; 00428f16
        ;   XREF to: 00428f26 (CONDITIONAL_JUMP)  ; LAB_00428f26
    PUSH EBX                            ; 00428f18
    CALL core_carved.cpp_FUN_0042be20   ; 00428f19
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428f1e
    JMP 0x00428b77                      ; 00428f21
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    LEA EAX,[EBP + 0xfffffbba]          ; 00428f26
        ;   Label: LAB_00428f26
    PUSH EAX                            ; 00428f2c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00428f2d
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00428f32
    PUSH 0x41c80000                     ; 00428f35
    PUSH 0x41700000                     ; 00428f3a
    LEA ESI,[EBP + 0xfffffbba]          ; 00428f3f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00428f45
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00428f4a
    ADD ESP,0x8                         ; 00428f4d
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 00428f50
    MOV dword ptr [EBP + 0xfffffbf2],EBX ; 00428f56
    FLD float ptr [EBP + 0x76]          ; 00428f5c
    PUSH ESI                            ; 00428f5f
    FSTP float ptr [EBP + 0xfffffbbe]   ; 00428f60
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428f66
    PUSH EAX                            ; 00428f6c
    MOV EDI,dword ptr [EAX + 0x154]     ; 00428f6d
    CALL dword ptr [EDI + 0x108]        ; 00428f73
    FLD float ptr [EBP + 0xfffffbbe]    ; 00428f79
    FLDZ                                ; 00428f7f
    ADD ESP,0x8                         ; 00428f81
    FXCH                                ; 00428f84
    FSTP double ptr [EBP + 0x6]         ; 00428f86
    FCOMP double ptr [EBP + 0x6]        ; 00428f89
    FNSTSW AX                           ; 00428f8c
    SAHF                                ; 00428f8e
    JNC 0x00428fc5                      ; 00428f8f
        ;   XREF to: 00428fc5 (CONDITIONAL_JUMP)  ; LAB_00428fc5
    FLD double ptr [EBP + 0x6]          ; 00428f91
    FMUL double ptr [0x005d54c5]        ; 00428f94 | DAT_005d54c5
    FMUL double ptr [0x005d54cd]        ; 00428f9a | DAT_005d54cd
    PUSH 0x0                            ; 00428fa0
    CALL crt_math.c_round_FUN_005c03a0  ; 00428fa2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x1e]        ; 00428fa7
    MOV EDI,dword ptr [EBP + 0x1e]      ; 00428faa
    PUSH EDI                            ; 00428fad
    PUSH 0x0                            ; 00428fae
    LEA EAX,[EBP + 0xfffffdba]          ; 00428fb0
    PUSH EAX                            ; 00428fb6
    MOV EAX,[0x0061dca4]                ; 00428fb7 | g_CGorePtr
    PUSH EAX                            ; 00428fbc
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 00428fbd
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00428fc2
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428fc5
        ;   Label: LAB_00428fc5
    PUSH EAX                            ; 00428fcb
    MOV ESI,dword ptr [EAX + 0x154]     ; 00428fcc
    CALL dword ptr [ESI + 0x10c]        ; 00428fd2
    ADD ESP,0x4                         ; 00428fd8
    TEST EAX,EAX                        ; 00428fdb
    JLE 0x00428ffe                      ; 00428fdd
        ;   XREF to: 00428ffe (CONDITIONAL_JUMP)  ; LAB_00428ffe
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00428fdf
    PUSH EAX                            ; 00428fe5
    MOV ESI,dword ptr [EAX + 0x154]     ; 00428fe6
    CALL dword ptr [ESI + 0xf0]         ; 00428fec
    ADD ESP,0x4                         ; 00428ff2
    PUSH EBX                            ; 00428ff5
    CALL core_carved.cpp_FUN_0042be20   ; 00428ff6
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00428ffb
    PUSH 0x5d52dd                       ; 00428ffe | = "ghoul-eat-?.wav"
        ;   Label: LAB_00428ffe
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429003
    PUSH EBX                            ; 00429009
    CALL dword ptr [EAX + 0x2c]         ; 0042900a
    ADD ESP,0x8                         ; 0042900d
    JMP 0x00428b77                      ; 00429010
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EDI,dword ptr [EBX + 0xc278]    ; 00429015
        ;   Label: LAB_00429015
    TEST EDI,EDI                        ; 0042901b
    JZ 0x00428b77                       ; 0042901d
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 00429023
    PUSH EAX                            ; 00429029
    PUSH EBX                            ; 0042902a
    MOV dword ptr [EBX + 0xc278],0x0    ; 0042902b
    CALL core_carved.cpp_FUN_0042b290   ; 00429035
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    ADD ESP,0x8                         ; 0042903a
    MOV ESI,EAX                         ; 0042903d
    TEST EAX,EAX                        ; 0042903f
    JL 0x00428b77                       ; 00429041
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH 0x0                            ; 00429047
    PUSH 0x3e4ccccd                     ; 00429049
    PUSH EDI                            ; 0042904e
    PUSH EAX                            ; 0042904f
    PUSH EBX                            ; 00429050
    CALL core_charactr.cpp_FUN_004325b0 ; 00429051
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 00429056
    PUSH ESI                            ; 00429059
    PUSH EDI                            ; 0042905a
    PUSH EBX                            ; 0042905b
    MOV EAX,0x5d52ed                    ; 0042905c | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 00429061 | = "%s picked up %s using hand %d\n"
    MOV EDX,dword ptr [0x00611100]      ; 00429062 | g_CConsolePtr
    PUSH EDX                            ; 00429068 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00429069
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0x14                        ; 0042906e
    JMP 0x00428b77                      ; 00429071
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH 0x2                            ; 00429076
        ;   Label: LAB_00429076
    PUSH EBX                            ; 00429078
    CALL core_carved.cpp_FUN_0042b290   ; 00429079
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    ADD ESP,0x8                         ; 0042907e
    MOV ESI,EAX                         ; 00429081
    TEST EAX,EAX                        ; 00429083
    JL 0x004290fc                       ; 00429085
        ;   XREF to: 004290fc (CONDITIONAL_JUMP)  ; LAB_004290fc
    IMUL EAX,ESI,0x78                   ; 00429087
        ;   Label: LAB_00429087
    ADD EAX,EBX                         ; 0042908a
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 0042908c
    TEST ECX,ECX                        ; 00429092
    JZ 0x00428b77                       ; 00429094
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH ECX                            ; 0042909a
    PUSH EBX                            ; 0042909b
    PUSH 0x5d5324                       ; 0042909c | = "%s lugging %s\n"
    MOV EAX,[0x00611100]                ; 004290a1 | g_CConsolePtr
    PUSH EAX                            ; 004290a6 | g_CConsoleInstance
    MOV EDI,0x41880000                  ; 004290a7
    CALL engine_console.cpp_FUN_00445430 ; 004290ac
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV ECX,0x40c00000                  ; 004290b1
    ADD ESP,0x10                        ; 004290b6
    MOV dword ptr [EBP + 0xfffffe0a],EDI ; 004290b9
    LEA EDI,[EBP + 0xfffffe02]          ; 004290bf
    XOR EDX,EDX                         ; 004290c5
    PUSH EDI                            ; 004290c7
    MOV dword ptr [EBP + 0xfffffe02],EDX ; 004290c8
    MOV dword ptr [EBP + 0xfffffe06],ECX ; 004290ce
    PUSH ESI                            ; 004290d4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004290d5
    PUSH EBX                            ; 004290db
    CALL dword ptr [EAX + 0x128]        ; 004290dc
    ADD ESP,0xc                         ; 004290e2
    PUSH 0x5d5333                       ; 004290e5 | = "carved-groan?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004290ea
    PUSH EBX                            ; 004290f0
    CALL dword ptr [EAX + 0x2c]         ; 004290f1
    ADD ESP,0x8                         ; 004290f4
    JMP 0x00428b77                      ; 004290f7
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EAX,0x5d530c                    ; 004290fc | = "..\\core\\carved.cpp"
        ;   Label: LAB_004290fc
    MOV EDX,0x1de                       ; 00429101
    PUSH 0x5d531f                       ; 00429106 | DAT_005d531f
    MOV [0x01d1d400],EAX                ; 0042910b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00429110 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00429116
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0042911b
    JMP 0x00429087                      ; 0042911e
        ;   XREF to: 00429087 (UNCONDITIONAL_JUMP)  ; LAB_00429087
    PUSH 0x3                            ; 00429123
        ;   Label: LAB_00429123
    PUSH EBX                            ; 00429125
    CALL core_carved.cpp_FUN_0042b290   ; 00429126
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    ADD ESP,0x8                         ; 0042912b
    MOV dword ptr [EBP + 0x5a],EAX      ; 0042912e
    TEST EAX,EAX                        ; 00429131
    JL 0x00429204                       ; 00429133
        ;   XREF to: 00429204 (CONDITIONAL_JUMP)  ; LAB_00429204
    IMUL EAX,dword ptr [EBP + 0x5a],0x78 ; 00429139
        ;   Label: LAB_00429139
    LEA EDX,[EBX + EAX*0x1]             ; 0042913d
    MOV EDI,dword ptr [EDX + 0x25b0]    ; 00429140
    MOV dword ptr [EBP + 0x6e],EDX      ; 00429146
    TEST EDI,EDI                        ; 00429149
    JZ 0x00428b77                       ; 0042914b
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH EDI                            ; 00429151
    PUSH EBX                            ; 00429152
    PUSH 0x5d535d                       ; 00429153 | = "%s tossing %s\n"
    MOV ECX,dword ptr [0x00611100]      ; 00429158 | g_CConsolePtr
    PUSH ECX                            ; 0042915e | g_CConsoleInstance
    XOR ESI,ESI                         ; 0042915f
    CALL engine_console.cpp_FUN_00445430 ; 00429161
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    MOV EAX,0x3f800000                  ; 00429166
    MOV dword ptr [EBP + 0xfffffece],ESI ; 0042916b
    MOV dword ptr [EBP + 0xfffffed2],ESI ; 00429171
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 00429177
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0042917d
    ADD ESP,0x10                        ; 00429183
    TEST EDX,EDX                        ; 00429186
    JNZ 0x0042922c                      ; 00429188
        ;   XREF to: 0042922c (CONDITIONAL_JUMP)  ; LAB_0042922c
    FLD float ptr [0x005d54c1]          ; 0042918e | DAT_005d54c1
        ;   Label: LAB_0042918e
    FLD float ptr [EBP + 0xfffffece]    ; 00429194
    FMUL ST1                            ; 0042919a
    FLD float ptr [EBP + 0xfffffed2]    ; 0042919c
    FMUL ST2                            ; 004291a2
    FLD float ptr [EBP + 0xfffffed6]    ; 004291a4
    FMULP ST3                           ; 004291aa
    LEA EAX,[EBP + 0xfffffece]          ; 004291ac
    MOV EDI,dword ptr [EBP + 0x5a]      ; 004291b2
    PUSH EAX                            ; 004291b5
    FXCH                                ; 004291b6
    FSTP float ptr [EBP + 0xfffffece]   ; 004291b8
    FSTP float ptr [EBP + 0xfffffed2]   ; 004291be
    FSTP float ptr [EBP + 0xfffffed6]   ; 004291c4
    FLD float ptr [EBP + 0xfffffed2]    ; 004291ca
    PUSH EDI                            ; 004291d0
    FADD float ptr [0x005d54d5]         ; 004291d1 | DAT_005d54d5
    PUSH EBX                            ; 004291d7
    FSTP float ptr [EBP + 0xfffffed2]   ; 004291d8
    MOV ESI,dword ptr [EBX + 0x154]     ; 004291de
    CALL dword ptr [ESI + 0x128]        ; 004291e4
    ADD ESP,0xc                         ; 004291ea
    PUSH 0x5d536c                       ; 004291ed | = "carved-groan?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004291f2
    PUSH EBX                            ; 004291f8
    CALL dword ptr [EAX + 0x2c]         ; 004291f9
    ADD ESP,0x8                         ; 004291fc
    JMP 0x00428b77                      ; 004291ff
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EDX,0x5d5345                    ; 00429204 | = "..\\core\\carved.cpp"
        ;   Label: LAB_00429204
    MOV ECX,0x1f5                       ; 00429209
    PUSH 0x5d5358                       ; 0042920e | DAT_005d5358
    MOV dword ptr [0x01d1d400],EDX      ; 00429213 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00429219 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0042921f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00429224
    JMP 0x00429139                      ; 00429227
        ;   XREF to: 00429139 (UNCONDITIONAL_JUMP)  ; LAB_00429139
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0042922c
        ;   Label: LAB_0042922c
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 0042922f
    PUSH EAX                            ; 00429235
    MOV EDI,dword ptr [EAX + 0x154]     ; 00429236
    LEA ESI,[EBP + 0xfffffce2]          ; 0042923c
    CALL dword ptr [EDI + 0x1c]         ; 00429242
    MOV ECX,0x6                         ; 00429245
    LEA EDI,[EBP + 0xfffffc9a]          ; 0042924a
    LEA ESI,[EBP + 0xfffffce2]          ; 00429250
    MOVSD.REP ES:EDI,ESI                ; 00429256
    MOV EAX,dword ptr [EBP + 0x62]      ; 00429258
    FLD float ptr [EBP + 0xfffffc9a]    ; 0042925b
    FLD float ptr [EBP + 0xfffffc9e]    ; 00429261
    FLD float ptr [EBP + 0xfffffca2]    ; 00429267
    LEA EDI,[EBP + -0x36]               ; 0042926d
    LEA ESI,[EBP + -0x5a]               ; 00429270
    FXCH ST2                            ; 00429273
    FADD float ptr [EAX]                ; 00429275
    FXCH                                ; 00429277
    FADD float ptr [EAX + 0x4]          ; 00429279
    FXCH ST2                            ; 0042927c
    FADD float ptr [EAX + 0x8]          ; 0042927e
    FXCH                                ; 00429281
    FSTP float ptr [EBP + -0x5a]        ; 00429283
    FXCH                                ; 00429286
    FSTP float ptr [EBP + -0x56]        ; 00429288
    FSTP float ptr [EBP + -0x52]        ; 0042928b
    MOVSD ES:EDI,ESI                    ; 0042928e
    MOVSD ES:EDI,ESI                    ; 0042928f
    MOVSD ES:EDI,ESI                    ; 00429290
    FLD float ptr [EBP + -0x36]         ; 00429291
    FMUL float ptr [0x005d54bd]         ; 00429294 | DAT_005d54bd
    FLD float ptr [EBP + -0x32]         ; 0042929a
    FMUL float ptr [0x005d54bd]         ; 0042929d | DAT_005d54bd
    ADD ESP,0x4                         ; 004292a3
    LEA EAX,[EBP + -0x66]               ; 004292a6
    FLD float ptr [EBP + -0x2e]         ; 004292a9
    FMUL float ptr [0x005d54bd]         ; 004292ac | DAT_005d54bd
    PUSH EAX                            ; 004292b2
    LEA EDI,[EBP + -0x66]               ; 004292b3
    LEA ESI,[EBP + 0xffffff3a]          ; 004292b6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004292bc
    FXCH ST2                            ; 004292bf
    FSTP float ptr [EBP + 0xffffff3a]   ; 004292c1
    FSTP float ptr [EBP + 0xffffff3e]   ; 004292c7
    FSTP float ptr [EBP + 0xffffff42]   ; 004292cd
    MOVSD ES:EDI,ESI                    ; 004292d3
    MOVSD ES:EDI,ESI                    ; 004292d4
    MOVSD ES:EDI,ESI                    ; 004292d5
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 004292d6
    PUSH ECX                            ; 004292dc
    LEA ESI,[EBP + -0x72]               ; 004292dd
    LEA EDI,[EBP + 0xfffffd8a]          ; 004292e0
    CALL core_actor.cpp_FUN_00408b40    ; 004292e6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + -0x72]               ; 004292eb
    MOVSD ES:EDI,ESI                    ; 004292ee
    MOVSD ES:EDI,ESI                    ; 004292ef
    MOVSD ES:EDI,ESI                    ; 004292f0
    ADD ESP,0x8                         ; 004292f1
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004292f4
    PUSH EAX                            ; 004292fa
    MOV EDI,dword ptr [EAX + 0x154]     ; 004292fb
    LEA ESI,[EBP + 0xfffffcca]          ; 00429301
    CALL dword ptr [EDI + 0x1c]         ; 00429307
    MOV ECX,0x6                         ; 0042930a
    LEA EDI,[EBP + 0xfffffc82]          ; 0042930f
    LEA ESI,[EBP + 0xfffffcca]          ; 00429315
    MOVSD.REP ES:EDI,ESI                ; 0042931b
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0042931d
    FLD float ptr [EBP + 0xfffffc82]    ; 00429320
    FLD float ptr [EBP + 0xfffffc86]    ; 00429326
    FLD float ptr [EBP + 0xfffffc8a]    ; 0042932c
    LEA EDI,[EBP + 0xfffffda2]          ; 00429332
    LEA ESI,[EBP + -0x12]               ; 00429338
    FXCH ST2                            ; 0042933b
    FADD float ptr [EAX]                ; 0042933d
    FXCH                                ; 0042933f
    FADD float ptr [EAX + 0x4]          ; 00429341
    FXCH ST2                            ; 00429344
    FADD float ptr [EAX + 0x8]          ; 00429346
    FXCH                                ; 00429349
    FSTP float ptr [EBP + -0x12]        ; 0042934b
    FXCH                                ; 0042934e
    FSTP float ptr [EBP + -0xe]         ; 00429350
    FSTP float ptr [EBP + -0xa]         ; 00429353
    MOVSD ES:EDI,ESI                    ; 00429356
    MOVSD ES:EDI,ESI                    ; 00429357
    MOVSD ES:EDI,ESI                    ; 00429358
    FLD float ptr [EBP + 0xfffffda2]    ; 00429359
    FMUL float ptr [0x005d54bd]         ; 0042935f | DAT_005d54bd
    FLD float ptr [EBP + 0xfffffda6]    ; 00429365
    FMUL float ptr [0x005d54bd]         ; 0042936b | DAT_005d54bd
    FLD float ptr [EBP + 0xfffffdaa]    ; 00429371
    FMUL float ptr [0x005d54bd]         ; 00429377 | DAT_005d54bd
    ADD ESP,0x4                         ; 0042937d
    LEA EAX,[EBP + 0xfffffdea]          ; 00429380
    LEA EDI,[EBP + 0xfffffdea]          ; 00429386
    LEA ESI,[EBP + 0xfffffe62]          ; 0042938c
    FXCH ST2                            ; 00429392
    FSTP float ptr [EBP + 0xfffffe62]   ; 00429394
    FSTP float ptr [EBP + 0xfffffe66]   ; 0042939a
    FSTP float ptr [EBP + 0xfffffe6a]   ; 004293a0
    MOVSD ES:EDI,ESI                    ; 004293a6
    MOVSD ES:EDI,ESI                    ; 004293a7
    MOVSD ES:EDI,ESI                    ; 004293a8
    PUSH EAX                            ; 004293a9
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 004293aa
    PUSH ESI                            ; 004293b0
    LEA ESI,[EBP + 0xfffffd7e]          ; 004293b1
    LEA EDI,[EBP + -0x7e]               ; 004293b7
    CALL core_actor.cpp_FUN_00408b40    ; 004293ba
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffd7e]          ; 004293bf
    MOVSD ES:EDI,ESI                    ; 004293c5
    MOVSD ES:EDI,ESI                    ; 004293c6
    MOVSD ES:EDI,ESI                    ; 004293c7
    FLD float ptr [EBP + -0x7e]         ; 004293c8
    FLD float ptr [EBP + -0x7a]         ; 004293cb
    FLD float ptr [EBP + -0x76]         ; 004293ce
    LEA EDI,[EBP + 0xffffff22]          ; 004293d1
    LEA ESI,[EBP + 0xfffffdc6]          ; 004293d7
    FXCH ST2                            ; 004293dd
    FSUB float ptr [EBP + 0xfffffd8a]   ; 004293df
    FXCH                                ; 004293e5
    FSUB float ptr [EBP + 0xfffffd8e]   ; 004293e7
    FXCH ST2                            ; 004293ed
    FSUB float ptr [EBP + 0xfffffd92]   ; 004293ef
    FXCH                                ; 004293f5
    FSTP float ptr [EBP + 0xfffffdc6]   ; 004293f7
    FXCH                                ; 004293fd
    FSTP float ptr [EBP + 0xfffffdca]   ; 004293ff
    FSTP float ptr [EBP + 0xfffffdce]   ; 00429405
    MOVSD ES:EDI,ESI                    ; 0042940b
    MOVSD ES:EDI,ESI                    ; 0042940c
    MOVSD ES:EDI,ESI                    ; 0042940d
    FLD float ptr [EBP + 0xffffff26]    ; 0042940e
    FMUL ST0                            ; 00429414
    FLD float ptr [EBP + 0xffffff22]    ; 00429416
    FMUL ST0                            ; 0042941c
    FADDP                               ; 0042941e
    FLD float ptr [EBP + 0xffffff2a]    ; 00429420
    FMUL ST0                            ; 00429426
    FADDP                               ; 00429428
    FSQRT                               ; 0042942a
    ADD ESP,0x8                         ; 0042942c
    FST float ptr [EBP + 0x5e]          ; 0042942f
    FLDZ                                ; 00429432
    FCOMPP                              ; 00429434
    FNSTSW AX                           ; 00429436
    SAHF                                ; 00429438
    JNC 0x0042918e                      ; 00429439
        ;   XREF to: 0042918e (CONDITIONAL_JUMP)  ; LAB_0042918e
    LEA EAX,[EBP + 0xffffff22]          ; 0042943f
    PUSH EAX                            ; 00429445
    PUSH EBX                            ; 00429446
    LEA ESI,[EBP + 0xfffffd36]          ; 00429447
    LEA EDI,[EBP + 0xfffffe6e]          ; 0042944d
    CALL core_actor.cpp_FUN_00408b00    ; 00429453
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xfffffd36]          ; 00429458
    MOVSD ES:EDI,ESI                    ; 0042945e
    MOVSD ES:EDI,ESI                    ; 0042945f
    MOVSD ES:EDI,ESI                    ; 00429460
    FLD1                                ; 00429461
    FLD float ptr [EBP + 0xfffffe6e]    ; 00429463
    FXCH                                ; 00429469
    FDIV float ptr [EBP + 0x5e]         ; 0042946b
    FXCH                                ; 0042946e
    FMUL ST1                            ; 00429470
    FLD float ptr [EBP + 0xfffffe72]    ; 00429472
    FMUL ST2                            ; 00429478
    FLD float ptr [EBP + 0xfffffe76]    ; 0042947a
    FMULP ST3                           ; 00429480
    LEA EDI,[EBP + 0xffffff5e]          ; 00429482
    LEA ESI,[EBP + 0xfffffe92]          ; 00429488
    FXCH                                ; 0042948e
    FSTP float ptr [EBP + 0xfffffe92]   ; 00429490
    FSTP float ptr [EBP + 0xfffffe96]   ; 00429496
    FSTP float ptr [EBP + 0xfffffe9a]   ; 0042949c
    MOVSD ES:EDI,ESI                    ; 004294a2
    MOVSD ES:EDI,ESI                    ; 004294a3
    MOVSD ES:EDI,ESI                    ; 004294a4
    LEA EAX,[EBP + 0xffffff5e]          ; 004294a5
    LEA ESI,[EBP + 0xfffffece]          ; 004294ab
    ADD ESP,0x8                         ; 004294b1
    CMP ESI,EAX                         ; 004294b4
    JZ 0x0042918e                       ; 004294b6
        ;   XREF to: 0042918e (CONDITIONAL_JUMP)  ; LAB_0042918e
    MOV EAX,dword ptr [EBP + 0xffffff5e] ; 004294bc
    MOV dword ptr [EBP + 0xfffffece],EAX ; 004294c2
    MOV EAX,dword ptr [EBP + 0xffffff62] ; 004294c8
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 004294ce
    MOV EAX,dword ptr [EBP + 0xffffff66] ; 004294d4
    MOV dword ptr [EBP + 0xfffffed6],EAX ; 004294da
    JMP 0x0042918e                      ; 004294e0
        ;   XREF to: 0042918e (UNCONDITIONAL_JUMP)  ; LAB_0042918e
    MOV EDI,dword ptr [EBX + 0xc280]    ; 004294e5
        ;   Label: LAB_004294e5
    TEST EDI,EDI                        ; 004294eb
    JZ 0x00428b77                       ; 004294ed
        ;   XREF to: 00428b77 (CONDITIONAL_JUMP)  ; LAB_00428b77
    PUSH 0x3e99999a                     ; 004294f3
    PUSH EDI                            ; 004294f8
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00478820 ; 004294f9
        ;   XREF to: 00478820 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00478820(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 004294fe
    MOV EAX,dword ptr [EBX + 0xc280]    ; 00429501
    PUSH 0x5d537e                       ; 00429507 | = "zombie-bang-door?.wav"
    MOV ESI,dword ptr [EAX + 0x154]     ; 0042950c
    PUSH EAX                            ; 00429512
    CALL dword ptr [ESI + 0x2c]         ; 00429513
    ADD ESP,0x8                         ; 00429516
    MOV dword ptr [EBX + 0xc280],0x0    ; 00429519
    JMP 0x00428b77                      ; 00429523
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 00429528
        ;   Label: LAB_00429528
    PUSH EDX                            ; 0042952e
    MOV ECX,dword ptr [EBP + 0x66]      ; 0042952f
    PUSH ECX                            ; 00429532
    LEA ESI,[EBP + 0xfffffe7a]          ; 00429533
    LEA EDI,[EBP + 0xfffffeda]          ; 00429539
    CALL core_skeleton.cpp_FUN_00569040 ; 0042953f
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00429544
    LEA EAX,[EBP + 0xfffffeda]          ; 00429547
    LEA ESI,[EBP + 0xfffffe7a]          ; 0042954d
    PUSH EAX                            ; 00429553
    MOVSD ES:EDI,ESI                    ; 00429554
    MOVSD ES:EDI,ESI                    ; 00429555
    MOVSD ES:EDI,ESI                    ; 00429556
    PUSH EBX                            ; 00429557
    LEA ESI,[EBP + 0xfffffd96]          ; 00429558
    CALL core_actor.cpp_FUN_00408b40    ; 0042955e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00429563
    PUSH 0x0                            ; 00429566
    LEA EDI,[EBP + 0xfffffd66]          ; 00429568
    PUSH 0x3                            ; 0042956e
    LEA ESI,[EBP + 0xfffffd96]          ; 00429570
    LEA EAX,[EBP + 0xfffffd66]          ; 00429576
    PUSH 0x0                            ; 0042957c
    MOVSD ES:EDI,ESI                    ; 0042957e
    MOVSD ES:EDI,ESI                    ; 0042957f
    MOVSD ES:EDI,ESI                    ; 00429580
    PUSH EAX                            ; 00429581
    MOV ESI,dword ptr [0x0061dca4]      ; 00429582 | g_CGorePtr
    PUSH ESI                            ; 00429588
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 00429589
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0042958e
    PUSH 0x3f000000                     ; 00429591
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00429596
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0042959b
    TEST EAX,EAX                        ; 0042959e
    JZ 0x004295e0                       ; 004295a0
        ;   XREF to: 004295e0 (CONDITIONAL_JUMP)  ; LAB_004295e0
    MOV ESI,0x5d5394                    ; 004295a2 | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffc32]          ; 004295a7
        ;   Label: LAB_004295a7
    PUSH EDI                            ; 004295ad
    MOV AL,byte ptr [ESI]               ; 004295ae | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005d5394+2 | s_ghoul_dig_wav_005d53a4
        ;   Label: LAB_004295ae
    MOV byte ptr [EDI],AL               ; 004295b0
    CMP AL,0x0                          ; 004295b2
    JZ 0x004295c6                       ; 004295b4
        ;   XREF to: 004295c6 (CONDITIONAL_JUMP)  ; LAB_004295c6
    MOV AL,byte ptr [ESI + 0x1]         ; 004295b6 | s_ghoul_eat_wav_005d5394+1 | s_ghoul_eat_wav_005d5394+3 | s_ghoul_dig_wav_005d53a4+1
    ADD ESI,0x2                         ; 004295b9
    MOV byte ptr [EDI + 0x1],AL         ; 004295bc
    ADD EDI,0x2                         ; 004295bf
    CMP AL,0x0                          ; 004295c2
    JNZ 0x004295ae                      ; 004295c4
        ;   XREF to: 004295ae (CONDITIONAL_JUMP)  ; LAB_004295ae
    POP EDI                             ; 004295c6
        ;   Label: LAB_004295c6
    LEA ESI,[EBP + 0xfffffc32]          ; 004295c7
    PUSH ESI                            ; 004295cd
    MOV EAX,dword ptr [EBX + 0x154]     ; 004295ce
    PUSH EBX                            ; 004295d4
    CALL dword ptr [EAX + 0x2c]         ; 004295d5
    ADD ESP,0x8                         ; 004295d8
    JMP 0x00428b77                      ; 004295db
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    MOV ESI,0x5d53a4                    ; 004295e0 | = "ghoul-dig-?.wav"
        ;   Label: LAB_004295e0
    JMP 0x004295a7                      ; 004295e5
        ;   XREF to: 004295a7 (UNCONDITIONAL_JUMP)  ; LAB_004295a7
    PUSH 0x5d53b4                       ; 004295e7 | = "fall-?.wav"
        ;   Label: LAB_004295e7
    MOV EAX,dword ptr [EBX + 0x154]     ; 004295ec
    PUSH EBX                            ; 004295f2
    CALL dword ptr [EAX + 0x2c]         ; 004295f3
    ADD ESP,0x8                         ; 004295f6
    JMP 0x00428b77                      ; 004295f9
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    JBE 0x00429076                      ; 004295fe
        ;   XREF to: 00429076 (CONDITIONAL_JUMP)  ; LAB_00429076
        ;   Label: LAB_004295fe
    CMP EAX,0xd                         ; 00429604
    JC 0x00429123                       ; 00429607
        ;   XREF to: 00429123 (CONDITIONAL_JUMP)  ; LAB_00429123
    JBE 0x004294e5                      ; 0042960d
        ;   XREF to: 004294e5 (CONDITIONAL_JUMP)  ; LAB_004294e5
    CMP EAX,0x65                        ; 00429613
    JC 0x00428bb4                       ; 00429616
        ;   XREF to: 00428bb4 (CONDITIONAL_JUMP)  ; LAB_00428bb4
    JBE 0x004295e7                      ; 0042961c
        ;   XREF to: 004295e7 (CONDITIONAL_JUMP)  ; LAB_004295e7
    CMP EAX,0x29a                       ; 0042961e
    JZ 0x00429528                       ; 00429623
        ;   XREF to: 00429528 (CONDITIONAL_JUMP)  ; LAB_00429528
    PUSH ESI                            ; 00429629
    PUSH EBX                            ; 0042962a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0042962b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00429630
    JMP 0x00428b77                      ; 00429633
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    JBE 0x00428c8b                      ; 00429638
        ;   XREF to: 00428c8b (CONDITIONAL_JUMP)  ; LAB_00428c8b
        ;   Label: LAB_00429638
    CMP EAX,0xa                         ; 0042963e
    JZ 0x00428e57                       ; 00429641
        ;   XREF to: 00428e57 (CONDITIONAL_JUMP)  ; LAB_00428e57
    PUSH ESI                            ; 00429647
    PUSH EBX                            ; 00429648
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00429649
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0042964e
    JMP 0x00428b77                      ; 00429651
        ;   XREF to: 00428b77 (UNCONDITIONAL_JUMP)  ; LAB_00428b77
    FLD float ptr [EBP + 0x92]          ; 00429656
        ;   Label: LAB_00429656
    FMUL float ptr [EBX + 0xc1d0]       ; 0042965c
    SUB ESP,0x4                         ; 00429662
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00429665
    MOV dword ptr [EBX + 0x2524],EAX    ; 0042966b
    FSTP float ptr [ESP]                ; 00429671
    PUSH EBX                            ; 00429674
    CALL core_charactr.cpp_FUN_00435320 ; 00429675
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 0042967a
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00429680
    ADD ESP,0x8                         ; 00429687
    TEST EDX,EDX                        ; 0042968a
    JZ 0x004299b4                       ; 0042968c
        ;   XREF to: 004299b4 (CONDITIONAL_JUMP)  ; LAB_004299b4
    MOV EAX,dword ptr [EBX + 0xc2d0]    ; 00429692
        ;   Label: LAB_00429692
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00429698
    JZ 0x004299c8                       ; 004296a0
        ;   XREF to: 004299c8 (CONDITIONAL_JUMP)  ; LAB_004299c8
    LEA ESI,[EBX + 0x158]               ; 004296a6
        ;   Label: LAB_004296a6
    PUSH ESI                            ; 004296ac
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 004296ad
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004296b2
    PUSH dword ptr [EBP + 0x92]         ; 004296b5
    XOR EAX,EAX                         ; 004296bb
    PUSH EBX                            ; 004296bd
    MOV dword ptr [EBP + 0x36],EAX      ; 004296be
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 004296c1
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004296c6
    TEST EAX,EAX                        ; 004296c9
    JZ 0x0042a4b0                       ; 004296cb
        ;   XREF to: 0042a4b0 (CONDITIONAL_JUMP)  ; LAB_0042a4b0
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004296d1
    CMP EAX,0x2                         ; 004296d7
    JNC 0x00429a76                      ; 004296da
        ;   XREF to: 00429a76 (CONDITIONAL_JUMP)  ; LAB_00429a76
    CMP EAX,0x1                         ; 004296e0
    JNZ 0x00429a81                      ; 004296e3
        ;   XREF to: 00429a81 (CONDITIONAL_JUMP)  ; LAB_00429a81
    PUSH EBX                            ; 004296e9
        ;   Label: LAB_004296e9
    CALL core_carved.cpp_FUN_0042be20   ; 004296ea
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 004296ef
    FLD float ptr [EBX + 0xc1e4]        ; 004296f2
        ;   Label: LAB_004296f2
    FLDZ                                ; 004296f8
    FCOMPP                              ; 004296fa
    FNSTSW AX                           ; 004296fc
    SAHF                                ; 004296fe
    JNC 0x00429713                      ; 004296ff
        ;   XREF to: 00429713 (CONDITIONAL_JUMP)  ; LAB_00429713
    FLD float ptr [EBX + 0xc1e4]        ; 00429701
    FSUB float ptr [EBP + 0x92]         ; 00429707
    FSTP float ptr [EBX + 0xc1e4]       ; 0042970d
    PUSH EBX                            ; 00429713
        ;   Label: LAB_00429713
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 00429714
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00429719
    TEST EAX,EAX                        ; 0042971c
    JZ 0x00429865                       ; 0042971e
        ;   XREF to: 00429865 (CONDITIONAL_JUMP)  ; LAB_00429865
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 00429724
    TEST EDI,EDI                        ; 0042972a
    JZ 0x00429758                       ; 0042972c
        ;   XREF to: 00429758 (CONDITIONAL_JUMP)  ; LAB_00429758
    PUSH EDI                            ; 0042972e
    MOV EDX,dword ptr [EDI + 0x154]     ; 0042972f
    CALL dword ptr [EDX + 0xf4]         ; 00429735
    ADD ESP,0x4                         ; 0042973b
    CMP EAX,EBX                         ; 0042973e
    JNZ 0x00429758                      ; 00429740
        ;   XREF to: 00429758 (CONDITIONAL_JUMP)  ; LAB_00429758
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00429742
    PUSH EAX                            ; 00429748
    MOV EDX,dword ptr [0x00622c18]      ; 00429749 | g_CDemonSetPtr
    PUSH EDX                            ; 0042974f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00429750
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00429755
    PUSH dword ptr [EBP + 0x92]         ; 00429758
        ;   Label: LAB_00429758
    PUSH EBX                            ; 0042975e
    LEA ESI,[EBX + 0x2518]              ; 0042975f
    CALL core_charactr.cpp_FUN_0042d700 ; 00429765
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 0042976a
    FMUL float ptr [EBP + 0x92]         ; 0042976c
    FLD float ptr [ESI + 0x4]           ; 00429772
    FMUL float ptr [EBP + 0x92]         ; 00429775
    FLD float ptr [ESI + 0x8]           ; 0042977b
    FMUL float ptr [EBP + 0x92]         ; 0042977e
    LEA EDI,[EBP + 0xffffff0a]          ; 00429784
    LEA ESI,[EBP + -0x2a]               ; 0042978a
    FXCH ST2                            ; 0042978d
    FSTP float ptr [EBP + -0x2a]        ; 0042978f
    FSTP float ptr [EBP + -0x26]        ; 00429792
    FSTP float ptr [EBP + -0x22]        ; 00429795
    MOVSD ES:EDI,ESI                    ; 00429798
    MOVSD ES:EDI,ESI                    ; 00429799
    MOVSD ES:EDI,ESI                    ; 0042979a
    LEA EAX,[EBX + 0x250c]              ; 0042979b
    FLD float ptr [EBP + 0xffffff0a]    ; 004297a1
    FLD float ptr [EBP + 0xffffff0e]    ; 004297a7
    FLD float ptr [EBP + 0xffffff12]    ; 004297ad
    LEA EDI,[EBP + 0xfffffe86]          ; 004297b3
    LEA ESI,[EBP + 0xffffff76]          ; 004297b9
    FXCH ST2                            ; 004297bf
    FADD float ptr [EAX]                ; 004297c1
    FXCH                                ; 004297c3
    FADD float ptr [EAX + 0x4]          ; 004297c5
    FXCH ST2                            ; 004297c8
    FADD float ptr [EAX + 0x8]          ; 004297ca
    FXCH                                ; 004297cd
    FSTP float ptr [EBP + 0xffffff76]   ; 004297cf
    FXCH                                ; 004297d5
    FSTP float ptr [EBP + 0xffffff7a]   ; 004297d7
    FSTP float ptr [EBP + 0xffffff7e]   ; 004297dd
    MOVSD ES:EDI,ESI                    ; 004297e3
    MOVSD ES:EDI,ESI                    ; 004297e4
    MOVSD ES:EDI,ESI                    ; 004297e5
    LEA EDX,[EBX + 0x249c]              ; 004297e6
    FLD float ptr [EBP + 0xfffffe86]    ; 004297ec
    FLD float ptr [EBP + 0xfffffe8a]    ; 004297f2
    FLD float ptr [EBP + 0xfffffe8e]    ; 004297f8
    LEA EDI,[EBP + 0xfffffdae]          ; 004297fe
    LEA ESI,[EBP + 0xfffffee6]          ; 00429804
    FXCH ST2                            ; 0042980a
    FADD float ptr [EDX]                ; 0042980c
    FXCH                                ; 0042980e
    FADD float ptr [EDX + 0x4]          ; 00429810
    FXCH ST2                            ; 00429813
    FADD float ptr [EDX + 0x8]          ; 00429815
    FXCH                                ; 00429818
    FSTP float ptr [EBP + 0xfffffee6]   ; 0042981a
    FXCH                                ; 00429820
    FSTP float ptr [EBP + 0xfffffeea]   ; 00429822
    FSTP float ptr [EBP + 0xfffffeee]   ; 00429828
    MOVSD ES:EDI,ESI                    ; 0042982e
    MOVSD ES:EDI,ESI                    ; 0042982f
    MOVSD ES:EDI,ESI                    ; 00429830
    MOV dword ptr [EAX + 0x8],0x0       ; 00429831
    ADD ESP,0x8                         ; 00429838
    MOV ECX,dword ptr [EAX + 0x8]       ; 0042983b
    MOV dword ptr [EAX + 0x4],ECX       ; 0042983e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00429841
    MOV dword ptr [EAX],ECX             ; 00429844
    MOV dword ptr [EDX + 0x8],0x0       ; 00429846
    LEA EAX,[EBP + 0xfffffdae]          ; 0042984d
    FLD float ptr [EDX + 0x8]           ; 00429853
    PUSH EAX                            ; 00429856
    FST float ptr [EDX + 0x4]           ; 00429857
    PUSH EBX                            ; 0042985a
    FSTP float ptr [EDX]                ; 0042985b
    CALL core_charactr.cpp_FUN_0042d750 ; 0042985d
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00429862
    PUSH EBX                            ; 00429865
        ;   Label: LAB_00429865
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00429866
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042986b
    LEA EAX,[EBX + 0x158]               ; 0042986e
    PUSH EAX                            ; 00429874
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00429875
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042987a
    PUSH dword ptr [EBP + 0x92]         ; 0042987d
    PUSH EBX                            ; 00429883
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00429884
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBX + 0xc1d4]    ; 00429889
    ADD ESP,0x8                         ; 0042988f
    TEST ECX,ECX                        ; 00429892
    JNZ 0x00429965                      ; 00429894
        ;   XREF to: 00429965 (CONDITIONAL_JUMP)  ; LAB_00429965
    MOV EAX,dword ptr [EBX + 0xc2cc]    ; 0042989a
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004298a0
    JZ 0x0042a4dc                       ; 004298a8
        ;   XREF to: 0042a4dc (CONDITIONAL_JUMP)  ; LAB_0042a4dc
    MOV EDX,dword ptr [EBX + 0xc2a0]    ; 004298ae
    PUSH 0x3e4ccccd                     ; 004298b4
    PUSH EDX                            ; 004298b9
    MOV ECX,dword ptr [EBX + 0xc2b8]    ; 004298ba
    PUSH ECX                            ; 004298c0
    PUSH EBX                            ; 004298c1
    CALL core_charactr.cpp_FUN_00430a90 ; 004298c2
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc2b8]    ; 004298c7
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004298cd
    ADD ESP,0x10                        ; 004298d4
    TEST ESI,ESI                        ; 004298d7
    JZ 0x004298f7                       ; 004298d9
        ;   XREF to: 004298f7 (CONDITIONAL_JUMP)  ; LAB_004298f7
    MOV EDI,dword ptr [EBX + 0xc298]    ; 004298db
    PUSH 0x3e4ccccd                     ; 004298e1
    PUSH EDI                            ; 004298e6
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 004298e7
    PUSH EAX                            ; 004298ed
    PUSH EBX                            ; 004298ee
    CALL core_charactr.cpp_FUN_00430a90 ; 004298ef
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 004298f4
    MOV EDX,dword ptr [EBX + 0xc2a4]    ; 004298f7
        ;   Label: LAB_004298f7
    PUSH 0x3e4ccccd                     ; 004298fd
    PUSH EDX                            ; 00429902
    MOV ECX,dword ptr [EBX + 0xc2c0]    ; 00429903
    PUSH ECX                            ; 00429909
    PUSH EBX                            ; 0042990a
    CALL core_charactr.cpp_FUN_00430a90 ; 0042990b
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc2c0]    ; 00429910
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00429916
    ADD ESP,0x10                        ; 0042991d
    TEST ESI,ESI                        ; 00429920
    JZ 0x00429940                       ; 00429922
        ;   XREF to: 00429940 (CONDITIONAL_JUMP)  ; LAB_00429940
    MOV EDI,dword ptr [EBX + 0xc29c]    ; 00429924
    PUSH 0x3e4ccccd                     ; 0042992a
    PUSH EDI                            ; 0042992f
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00429930
    PUSH EAX                            ; 00429936
    PUSH EBX                            ; 00429937
    CALL core_charactr.cpp_FUN_00430a90 ; 00429938
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 0042993d
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 00429940
        ;   Label: LAB_00429940
    PUSH 0x3f333333                     ; 00429946
    PUSH EDX                            ; 0042994b
    MOV ECX,dword ptr [EBX + 0xc2d0]    ; 0042994c
    PUSH ECX                            ; 00429952
    PUSH EBX                            ; 00429953
        ;   Label: LAB_00429953
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60 ; 00429954
        ;   XREF to: 00430b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00429959
    PUSH EBX                            ; 0042995c
    CALL core_charactr.cpp_FUN_00430960 ; 0042995d
        ;   XREF to: 00430960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430960()
    ADD ESP,0x4                         ; 00429962
    PUSH 0x1                            ; 00429965
        ;   Label: LAB_00429965
    PUSH EBX                            ; 00429967
    MOV ESI,dword ptr [EBP + 0x36]      ; 00429968
    CALL core_carved.cpp_FUN_0042b290   ; 0042996b
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    ADD ESP,0x8                         ; 00429970
    TEST ESI,ESI                        ; 00429973
    JZ 0x00428bcf                       ; 00429975
        ;   XREF to: 00428bcf (CONDITIONAL_JUMP)  ; LAB_00428bcf
    TEST EAX,EAX                        ; 0042997b
    JL 0x00428bcf                       ; 0042997d
        ;   XREF to: 00428bcf (CONDITIONAL_JUMP)  ; LAB_00428bcf
    SHL EAX,0x3                         ; 00429983
    MOV EDX,EAX                         ; 00429986
    SHL EAX,0x4                         ; 00429988
    SUB EAX,EDX                         ; 0042998b
    ADD EBX,EAX                         ; 0042998d
    MOV EDI,dword ptr [EBX + 0x25b0]    ; 0042998f
    TEST EDI,EDI                        ; 00429995
    JZ 0x00428bcf                       ; 00429997
        ;   XREF to: 00428bcf (CONDITIONAL_JUMP)  ; LAB_00428bcf
    PUSH 0x2                            ; 0042999d
    MOV EDX,dword ptr [EDI + 0x154]     ; 0042999f
    PUSH EDI                            ; 004299a5
    CALL dword ptr [EDX + 0x78]         ; 004299a6
    ADD ESP,0x8                         ; 004299a9
    LEA ESP,[EBP + 0x7a]                ; 004299ac
    POP EBP                             ; 004299af
    POP EDI                             ; 004299b0
    POP ESI                             ; 004299b1
    POP EBX                             ; 004299b2
    RET                                 ; 004299b3
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 004299b4
        ;   Label: LAB_004299b4
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004299ba
    JNZ 0x00429692                      ; 004299c2
        ;   XREF to: 00429692 (CONDITIONAL_JUMP)  ; LAB_00429692
    FLD float ptr [EBX + 0xc2d8]        ; 004299c8
        ;   Label: LAB_004299c8
    FLDZ                                ; 004299ce
    FCOMPP                              ; 004299d0
    FNSTSW AX                           ; 004299d2
    SAHF                                ; 004299d4
    JA 0x004296a6                       ; 004299d5
        ;   XREF to: 004296a6 (CONDITIONAL_JUMP)  ; LAB_004296a6
    FLD float ptr [EBX + 0xc2d8]        ; 004299db
    FADD float ptr [EBP + 0x92]         ; 004299e1
    FST float ptr [EBX + 0xc2d8]        ; 004299e7
    FCOMP double ptr [0x005d5485]       ; 004299ed | DAT_005d5485
    FNSTSW AX                           ; 004299f3
    SAHF                                ; 004299f5
    JC 0x004296a6                       ; 004299f6
        ;   XREF to: 004296a6 (CONDITIONAL_JUMP)  ; LAB_004296a6
    LEA EAX,[EBP + 0xfffffbf6]          ; 004299fc
    PUSH EAX                            ; 00429a02
    MOV EDI,0x461c3f9a                  ; 00429a03
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00429a08
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    LEA EAX,[EBP + 0xfffffbf6]          ; 00429a0d
    ADD ESP,0x4                         ; 00429a13
    MOV dword ptr [EBP + 0xfffffbfa],EDI ; 00429a16
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 00429a1c
    MOV dword ptr [EBP + 0xfffffc2e],EBX ; 00429a22
    PUSH EAX                            ; 00429a28
    MOV EDX,dword ptr [EBX + 0x154]     ; 00429a29
    PUSH EBX                            ; 00429a2f
    CALL dword ptr [EDX + 0x108]        ; 00429a30
    ADD ESP,0x8                         ; 00429a36
    MOV dword ptr [EBX + 0xc2d8],0xbf800000 ; 00429a39
    JMP 0x004296a6                      ; 00429a43
        ;   XREF to: 004296a6 (UNCONDITIONAL_JUMP)  ; LAB_004296a6
    PUSH 0x1                            ; 00429a48
        ;   Label: LAB_00429a48
    PUSH 0x0                            ; 00429a4a
    LEA EAX,[EBX + 0x158]               ; 00429a4c
    PUSH EAX                            ; 00429a52
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00429a53
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00429a58
    PUSH EBX                            ; 00429a5b
    MOV EAX,0x5d53bf                    ; 00429a5c | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00429a61 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 00429a62 | g_CConsolePtr
    PUSH ESI                            ; 00429a68 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00429a69
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00429a6e
    JMP 0x004296f2                      ; 00429a71
        ;   XREF to: 004296f2 (UNCONDITIONAL_JUMP)  ; LAB_004296f2
    JBE 0x004296e9                      ; 00429a76
        ;   XREF to: 004296e9 (CONDITIONAL_JUMP)  ; LAB_004296e9
        ;   Label: LAB_00429a76
    CMP EAX,0x3                         ; 00429a7c
    JZ 0x00429a48                       ; 00429a7f
        ;   XREF to: 00429a48 (CONDITIONAL_JUMP)  ; LAB_00429a48
    PUSH 0x1                            ; 00429a81
        ;   Label: LAB_00429a81
    PUSH 0x2                            ; 00429a83
    PUSH 0x0                            ; 00429a85
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00429a87
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429a8c
    PUSH EAX                            ; 00429a8f
    LEA EAX,[EBX + 0x158]               ; 00429a90
    PUSH EAX                            ; 00429a96
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00429a97
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00429a9c
    JMP 0x004296f2                      ; 00429a9f
        ;   XREF to: 004296f2 (UNCONDITIONAL_JUMP)  ; LAB_004296f2
    MOV EDI,dword ptr [EBX + 0xc1d4]    ; 00429aa4
        ;   Label: caseD_16
    TEST EDI,EDI                        ; 00429aaa
    JNZ 0x00429b35                      ; 00429aac
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    CMP dword ptr [EBX + 0xdc],0x0      ; 00429ab2
    JNZ 0x00429b35                      ; 00429ab9
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EDI                            ; 00429abb
    PUSH ESI                            ; 00429abc
    LEA ESI,[EBP + 0xfffffe4a]          ; 00429abd
    LEA EDI,[EBP + 0xfffffe3e]          ; 00429ac3
    CALL core_skeleton.cpp_FUN_00569040 ; 00429ac9
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00429ace
    LEA EAX,[EBP + 0xfffffe3e]          ; 00429ad1
    LEA ESI,[EBP + 0xfffffe4a]          ; 00429ad7
    PUSH EAX                            ; 00429add
    MOVSD ES:EDI,ESI                    ; 00429ade
    MOVSD ES:EDI,ESI                    ; 00429adf
    MOVSD ES:EDI,ESI                    ; 00429ae0
    PUSH EBX                            ; 00429ae1
    LEA ESI,[EBP + 0xffffff52]          ; 00429ae2
    CALL core_actor.cpp_FUN_00408b40    ; 00429ae8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00429aed
    PUSH 0x0                            ; 00429af0
    LEA EAX,[EBP + 0xfffffe32]          ; 00429af2
    LEA EDI,[EBP + 0xfffffe32]          ; 00429af8
    PUSH EAX                            ; 00429afe
    MOV EDX,dword ptr [0x0061dca4]      ; 00429aff | g_CGorePtr
    LEA ESI,[EBP + 0xffffff52]          ; 00429b05
    PUSH EDX                            ; 00429b0b
    MOVSD ES:EDI,ESI                    ; 00429b0c
    MOVSD ES:EDI,ESI                    ; 00429b0d
    MOVSD ES:EDI,ESI                    ; 00429b0e
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 00429b0f
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00429b14
    PUSH 0x5d53e9                       ; 00429b17 | = "CarvedDead"
    MOV ECX,dword ptr [0x0061b4d0]      ; 00429b1c | DAT_0061b4d0
    PUSH ECX                            ; 00429b22
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 00429b23
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 00429b2d
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00429b32
    FLD float ptr [EBP + 0x52]          ; 00429b35
        ;   Label: caseD_d
    FLDZ                                ; 00429b38
    FCOMPP                              ; 00429b3a
    FNSTSW AX                           ; 00429b3c
    SAHF                                ; 00429b3e
    JA 0x004296f2                       ; 00429b3f
        ;   XREF to: 004296f2 (CONDITIONAL_JUMP)  ; LAB_004296f2
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00429b45
    JZ 0x004296f2                       ; 00429b4c
        ;   XREF to: 004296f2 (CONDITIONAL_JUMP)  ; LAB_004296f2
    FLD float ptr [EBP + 0x32]          ; 00429b52
    FMUL float ptr [EBX + 0xc1d0]       ; 00429b55
    FLD float ptr [EBP + 0x92]          ; 00429b5b
    FLD ST0                             ; 00429b61
    FMUL float ptr [EBX + 0xc1d0]       ; 00429b63
    FXCH ST2                            ; 00429b69
    FMULP                               ; 00429b6b
    SUB ESP,0x4                         ; 00429b6d
    FSTP float ptr [EBX + 0x2524]       ; 00429b70
    FSTP float ptr [ESP]                ; 00429b76
    PUSH EBX                            ; 00429b79
    CALL core_charactr.cpp_FUN_00435320 ; 00429b7a
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    XOR EAX,EAX                         ; 00429b7f
    ADD ESP,0x8                         ; 00429b81
    MOV dword ptr [EBP + 0xfffffd12],EAX ; 00429b84
    MOV dword ptr [EBP + 0xfffffd16],EAX ; 00429b8a
    MOV EAX,dword ptr [EBP + 0x52]      ; 00429b90
    PUSH 0x3f490fdb                     ; 00429b93
    MOV dword ptr [EBP + 0xfffffd1a],EAX ; 00429b98
    LEA EAX,[EBP + 0xfffffd12]          ; 00429b9e
    PUSH 0x40400000                     ; 00429ba4
    PUSH EAX                            ; 00429ba9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00429baa
    PUSH EAX                            ; 00429bb0
    MOV EDX,dword ptr [EAX + 0x154]     ; 00429bb1
    CALL dword ptr [EDX + 0xc4]         ; 00429bb7
    ADD ESP,0x4                         ; 00429bbd
    PUSH EAX                            ; 00429bc0
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00429bc1
    ADD EAX,0x20                        ; 00429bc7
    PUSH EAX                            ; 00429bca
    PUSH EBX                            ; 00429bcb
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 00429bcc
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00429bd1
    CMP EAX,0x1                         ; 00429bd4
    JZ 0x004296f2                       ; 00429bd7
        ;   XREF to: 004296f2 (CONDITIONAL_JUMP)  ; LAB_004296f2
    PUSH EBX                            ; 00429bdd
    PUSH 0x5d5469                       ; 00429bde | = "%s giving up attack\n"
    MOV ECX,dword ptr [0x00611100]      ; 00429be3 | g_CConsolePtr
    PUSH ECX                            ; 00429be9 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00429bea
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 00429bef
    PUSH EBX                            ; 00429bf2
    CALL core_carved.cpp_FUN_0042be20   ; 00429bf3
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00429bf8
    MOV dword ptr [EBX + 0x2508],0x0    ; 00429bfb
    JMP 0x004296f2                      ; 00429c05
        ;   XREF to: 004296f2 (UNCONDITIONAL_JUMP)  ; LAB_004296f2
    FLD float ptr [EBP + 0x92]          ; 00429c0a
        ;   Label: caseD_0
    FMUL double ptr [0x005d54b5]        ; 00429c10 | DAT_005d54b5
    SUB ESP,0x4                         ; 00429c16
    FSTP float ptr [ESP]                ; 00429c19
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00429c1c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00429c21
    TEST EAX,EAX                        ; 00429c24
    JNZ 0x00429cb2                      ; 00429c26
        ;   XREF to: 00429cb2 (CONDITIONAL_JUMP)  ; LAB_00429cb2
    PUSH dword ptr [EBP + 0x92]         ; 00429c2c
    PUSH EBX                            ; 00429c32
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00429c33
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00429c38
    TEST EAX,EAX                        ; 00429c3b
    JZ 0x00429c48                       ; 00429c3d
        ;   XREF to: 00429c48 (CONDITIONAL_JUMP)  ; LAB_00429c48
    PUSH EBX                            ; 00429c3f
    CALL core_carved.cpp_FUN_0042be20   ; 00429c40
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00429c45
    PUSH dword ptr [EBP + 0x92]         ; 00429c48
        ;   Label: LAB_00429c48
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429c4e
    PUSH EBX                            ; 00429c54
    CALL dword ptr [EAX + 0x144]        ; 00429c55
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00429c5b
    ADD ESP,0x8                         ; 00429c61
    TEST EDX,EDX                        ; 00429c64
    JZ 0x00429cd5                       ; 00429c66
        ;   XREF to: 00429cd5 (CONDITIONAL_JUMP)  ; LAB_00429cd5
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00429c68
        ;   Label: LAB_00429c68
    JZ 0x00429b35                       ; 00429c6f
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 00429c75
    CALL core_carved.cpp_FUN_0042be20   ; 00429c76
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00429c7b
    MOV ESI,dword ptr [EBX + 0xc2e0]    ; 00429c7e
    PUSH ESI                            ; 00429c84
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00429c85
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00429c8a
    TEST EAX,EAX                        ; 00429c8d
    JNZ 0x00429b35                      ; 00429c8f
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x5d53f4                       ; 00429c95 | = "carved-groan?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429c9a
    PUSH EBX                            ; 00429ca0
    CALL dword ptr [EAX + 0x2c]         ; 00429ca1
    ADD ESP,0x8                         ; 00429ca4
    MOV dword ptr [EBX + 0xc2e0],EAX    ; 00429ca7
    JMP 0x00429b35                      ; 00429cad
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00429cb2
        ;   Label: LAB_00429cb2
    PUSH 0x2                            ; 00429cb4
    PUSH 0x0                            ; 00429cb6
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00429cb8
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429cbd
    PUSH EAX                            ; 00429cc0
    LEA EAX,[EBX + 0x158]               ; 00429cc1
    PUSH EAX                            ; 00429cc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00429cc8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00429ccd
    JMP 0x00429b35                      ; 00429cd0
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,[0x01d06ab4]                ; 00429cd5 | DAT_01d06ab4
        ;   Label: LAB_00429cd5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00429cda
    PUSH EAX                            ; 00429ce1
    MOV EDX,dword ptr [EAX + 0x154]     ; 00429ce2
    CALL dword ptr [EDX + 0x10c]        ; 00429ce8
    ADD ESP,0x4                         ; 00429cee
    TEST EAX,EAX                        ; 00429cf1
    JZ 0x00429b35                       ; 00429cf3
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,[0x0061d95c]                ; 00429cf9 | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 00429cfe | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d06ab4]                ; 00429d08 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00429d0d
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 00429d14
    JMP 0x00429c68                      ; 00429d1a
        ;   XREF to: 00429c68 (UNCONDITIONAL_JUMP)  ; LAB_00429c68
    FLD float ptr [EBX + 0xc2ec]        ; 00429d1f
        ;   Label: caseD_3
    FSUB float ptr [EBP + 0x92]         ; 00429d25
    FLDZ                                ; 00429d2b
    FXCH                                ; 00429d2d
    FSTP float ptr [EBX + 0xc2ec]       ; 00429d2f
    FCOMP float ptr [EBX + 0xc2ec]      ; 00429d35
    FNSTSW AX                           ; 00429d3b
    SAHF                                ; 00429d3d
    JC 0x00429d57                       ; 00429d3e
        ;   XREF to: 00429d57 (CONDITIONAL_JUMP)  ; LAB_00429d57
    MOV EAX,dword ptr [EBX + 0xc2e0]    ; 00429d40
    PUSH EAX                            ; 00429d46
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00429d47
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00429d4c
    TEST EAX,EAX                        ; 00429d4f
    JZ 0x00429e0c                       ; 00429d51
        ;   XREF to: 00429e0c (CONDITIONAL_JUMP)  ; LAB_00429e0c
    PUSH dword ptr [EBP + 0x92]         ; 00429d57
        ;   Label: LAB_00429d57
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429d5d
    PUSH EBX                            ; 00429d63
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00429d64
    CALL dword ptr [EAX + 0x144]        ; 00429d6a
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00429d70
    ADD ESP,0x8                         ; 00429d76
    TEST EDX,EDX                        ; 00429d79
    JNZ 0x00429dbe                      ; 00429d7b
        ;   XREF to: 00429dbe (CONDITIONAL_JUMP)  ; LAB_00429dbe
    MOV EAX,[0x01d06ab4]                ; 00429d7d | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00429d82
    PUSH EAX                            ; 00429d89
    MOV EDX,dword ptr [EAX + 0x154]     ; 00429d8a
    CALL dword ptr [EDX + 0x10c]        ; 00429d90
    ADD ESP,0x4                         ; 00429d96
    TEST EAX,EAX                        ; 00429d99
    JZ 0x00429dbe                       ; 00429d9b
        ;   XREF to: 00429dbe (CONDITIONAL_JUMP)  ; LAB_00429dbe
    MOV EAX,[0x0061d95c]                ; 00429d9d | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 00429da2 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d06ab4]                ; 00429dac | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00429db1
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 00429db8
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00429dbe
        ;   Label: LAB_00429dbe
    JZ 0x00429e47                       ; 00429dc5
        ;   XREF to: 00429e47 (CONDITIONAL_JUMP)  ; LAB_00429e47
    TEST ESI,ESI                        ; 00429dcb
    JNZ 0x00429e80                      ; 00429dcd
        ;   XREF to: 00429e80 (CONDITIONAL_JUMP)  ; LAB_00429e80
    MOV EAX,dword ptr [EBX + 0xc2e0]    ; 00429dd3
    PUSH EAX                            ; 00429dd9
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00429dda
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00429ddf
    TEST EAX,EAX                        ; 00429de2
    JNZ 0x00429dfe                      ; 00429de4
        ;   XREF to: 00429dfe (CONDITIONAL_JUMP)  ; LAB_00429dfe
    PUSH 0x5d5418                       ; 00429de6 | = "carved-groan?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429deb
    PUSH EBX                            ; 00429df1
    CALL dword ptr [EAX + 0x2c]         ; 00429df2
    ADD ESP,0x8                         ; 00429df5
    MOV dword ptr [EBX + 0xc2e0],EAX    ; 00429df8
    PUSH EBX                            ; 00429dfe
        ;   Label: LAB_00429dfe
    CALL core_carved.cpp_FUN_0042be20   ; 00429dff
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00429e04
    JMP 0x00429b35                      ; 00429e07
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x40c00000                     ; 00429e0c
        ;   Label: LAB_00429e0c
    PUSH 0x40400000                     ; 00429e11
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00429e16
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    ADD ESP,0x8                         ; 00429e1b
    MOV dword ptr [EBP + 0x76],EAX      ; 00429e1e
    PUSH 0x5d5406                       ; 00429e21 | = "carved-groan?.wav"
    FLD float ptr [EBP + 0x76]          ; 00429e26
    MOV EAX,dword ptr [EBX + 0x154]     ; 00429e29
    PUSH EBX                            ; 00429e2f
    FSTP float ptr [EBX + 0xc2ec]       ; 00429e30
    CALL dword ptr [EAX + 0x2c]         ; 00429e36
    ADD ESP,0x8                         ; 00429e39
    MOV dword ptr [EBX + 0xc2e0],EAX    ; 00429e3c
    JMP 0x00429d57                      ; 00429e42
        ;   XREF to: 00429d57 (UNCONDITIONAL_JUMP)  ; LAB_00429d57
    PUSH dword ptr [EBP + 0x92]         ; 00429e47
        ;   Label: LAB_00429e47
    PUSH EBX                            ; 00429e4d
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 00429e4e
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00429e53
    TEST EAX,EAX                        ; 00429e56
    JNZ 0x00429b35                      ; 00429e58
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00429e5e
    PUSH 0x2                            ; 00429e60
    PUSH EAX                            ; 00429e62
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00429e63
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429e68
    PUSH EAX                            ; 00429e6b
    LEA EAX,[EBX + 0x158]               ; 00429e6c
    PUSH EAX                            ; 00429e72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00429e73
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00429e78
    JMP 0x00429b35                      ; 00429e7b
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x32                           ; 00429e80
        ;   Label: LAB_00429e80
    PUSH 0x0                            ; 00429e82
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00429e84
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00429e89
    CMP EAX,0x1                         ; 00429e8c
    JNZ 0x00429e9a                      ; 00429e8f
        ;   XREF to: 00429e9a (CONDITIONAL_JUMP)  ; LAB_00429e9a
    PUSH EBX                            ; 00429e91
    CALL core_carved.cpp_FUN_0042be20   ; 00429e92
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 00429e97
    MOV EAX,dword ptr [EBX + 0xc2bc]    ; 00429e9a
        ;   Label: LAB_00429e9a
    XOR ESI,ESI                         ; 00429ea0
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00429ea2
    MOV dword ptr [EBP + 0x56],ESI      ; 00429ea9
    TEST EDI,EDI                        ; 00429eac
    JZ 0x00429eb7                       ; 00429eae
        ;   XREF to: 00429eb7 (CONDITIONAL_JUMP)  ; LAB_00429eb7
    MOV dword ptr [EBP + 0x56],0x1      ; 00429eb0
    MOV EAX,dword ptr [EBX + 0xc2c4]    ; 00429eb7
        ;   Label: LAB_00429eb7
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00429ebd
    JZ 0x00429eca                       ; 00429ec5
        ;   XREF to: 00429eca (CONDITIONAL_JUMP)  ; LAB_00429eca
    INC dword ptr [EBP + 0x56]          ; 00429ec7
    PUSH dword ptr [EBP + 0x92]         ; 00429eca
        ;   Label: LAB_00429eca
    PUSH EBX                            ; 00429ed0
    CALL core_carved.cpp_FUN_0042a930   ; 00429ed1
        ;   XREF to: 0042a930 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042a930()
    ADD ESP,0x8                         ; 00429ed6
    TEST EAX,EAX                        ; 00429ed9
    JNZ 0x00429b35                      ; 00429edb
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00429ee1
    MOV EAX,[0x005fd468]                ; 00429ee3 | DAT_005fd468
    PUSH EBX                            ; 00429ee8
    MOV dword ptr [EBP + 0x4a],EAX      ; 00429ee9
    CALL core_carved.cpp_FUN_0042b290   ; 00429eec
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    ADD ESP,0x8                         ; 00429ef1
    MOV dword ptr [EBP + 0x3e],EAX      ; 00429ef4
    TEST EAX,EAX                        ; 00429ef7
    JL 0x00429fc8                       ; 00429ef9
        ;   XREF to: 00429fc8 (CONDITIONAL_JUMP)  ; LAB_00429fc8
    SHL EAX,0x3                         ; 00429eff
    MOV EDX,EAX                         ; 00429f02
    SHL EAX,0x4                         ; 00429f04
    SUB EAX,EDX                         ; 00429f07
    ADD EAX,EBX                         ; 00429f09
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 00429f0b
    TEST ESI,ESI                        ; 00429f11
    JZ 0x00429fc8                       ; 00429f13
        ;   XREF to: 00429fc8 (CONDITIONAL_JUMP)  ; LAB_00429fc8
    CMP dword ptr [EBX + 0xc27c],0x1    ; 00429f19
    JNZ 0x00429fc8                      ; 00429f20
        ;   XREF to: 00429fc8 (CONDITIONAL_JUMP)  ; LAB_00429fc8
    MOV EDX,0x3f800000                  ; 00429f26
    MOV EAX,ESI                         ; 00429f2b
    MOV dword ptr [EBP + 0x3a],EDX      ; 00429f2d
    TEST ESI,ESI                        ; 00429f30
    JZ 0x00429fc2                       ; 00429f32
        ;   XREF to: 00429fc2 (CONDITIONAL_JUMP)  ; LAB_00429fc2
    PUSH ESI                            ; 00429f38
    MOV EDX,dword ptr [ESI + 0x154]     ; 00429f39
    LEA ESI,[EBP + 0xfffffcb2]          ; 00429f3f
    LEA EDI,[EBP + 0xfffffc6a]          ; 00429f45
    CALL dword ptr [EDX + 0x1c]         ; 00429f4b
    MOV ECX,0x6                         ; 00429f4e
    LEA ESI,[EBP + 0xfffffcb2]          ; 00429f53
    LEA EAX,[EBP + 0xfffffd72]          ; 00429f59
    ADD ESP,0x4                         ; 00429f5f
    MOVSD.REP ES:EDI,ESI                ; 00429f62
    PUSH EAX                            ; 00429f64
    LEA ESI,[EBP + 0xfffffc6a]          ; 00429f65
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 00429f6b
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 00429f70
    FSUB float ptr [EBP + 0xfffffc6a]   ; 00429f73
    FSTP float ptr [EBP + 0xfffffd72]   ; 00429f79
    FLD float ptr [ESI + 0x10]          ; 00429f7f
    FSUB float ptr [EBP + 0xfffffc6e]   ; 00429f82
    LEA EDI,[EBP + 0xfffffdd2]          ; 00429f88
    FSTP float ptr [EBP + 0xfffffd76]   ; 00429f8e
    FLD float ptr [ESI + 0x14]          ; 00429f94
    FSUB float ptr [EBP + 0xfffffc72]   ; 00429f97
    LEA ESI,[EBP + 0xfffffd72]          ; 00429f9d
    FSTP float ptr [EBP + 0xfffffd7a]   ; 00429fa3
    MOVSD ES:EDI,ESI                    ; 00429fa9
    MOVSD ES:EDI,ESI                    ; 00429faa
    MOVSD ES:EDI,ESI                    ; 00429fab
    FLD float ptr [EBP + 0xfffffdda]    ; 00429fac
    FMUL double ptr [0x005d5495]        ; 00429fb2 | DAT_005d5495
    FLD1                                ; 00429fb8
    FADDP                               ; 00429fba
    ADD ESP,0x4                         ; 00429fbc
    FSTP float ptr [EBP + 0x3a]         ; 00429fbf
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00429fc2
        ;   Label: LAB_00429fc2
    MOV dword ptr [EBP + 0x4a],EAX      ; 00429fc5
    PUSH 0x3f32b8c2                     ; 00429fc8
        ;   Label: LAB_00429fc8
    PUSH 0x3f666666                     ; 00429fcd
    XOR ECX,ECX                         ; 00429fd2
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00429fd4
    MOV dword ptr [EBP + 0xfffffefe],ECX ; 00429fd7
    MOV dword ptr [EBP + 0xffffff06],EAX ; 00429fdd
    LEA EAX,[EBP + 0xfffffefe]          ; 00429fe3
    MOV dword ptr [EBP + 0xffffff02],ECX ; 00429fe9
    PUSH EAX                            ; 00429fef
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00429ff0
    PUSH EAX                            ; 00429ff6
    MOV EDX,dword ptr [EAX + 0x154]     ; 00429ff7
    CALL dword ptr [EDX + 0xc4]         ; 00429ffd
    ADD ESP,0x4                         ; 0042a003
    PUSH EAX                            ; 0042a006
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a007
    ADD EAX,0x20                        ; 0042a00d
    PUSH EAX                            ; 0042a010
    PUSH EBX                            ; 0042a011
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0042a012
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 0042a017
    ADD ESP,0x18                        ; 0042a01d
    MOV dword ptr [EBP + 0x4e],EDX      ; 0042a020
    TEST EAX,EAX                        ; 0042a023
    JL 0x0042a0c0                       ; 0042a025
        ;   XREF to: 0042a0c0 (CONDITIONAL_JUMP)  ; LAB_0042a0c0
    JLE 0x0042a102                      ; 0042a02b
        ;   XREF to: 0042a102 (CONDITIONAL_JUMP)  ; LAB_0042a102
    CMP dword ptr [EBP + 0x56],0x0      ; 0042a031
    JLE 0x00429b35                      ; 0042a035
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    FLD float ptr [EBX + 0xc1e4]        ; 0042a03b
    FLDZ                                ; 0042a041
    FCOMPP                              ; 0042a043
    FNSTSW AX                           ; 0042a045
    SAHF                                ; 0042a047
    JC 0x00429b35                       ; 0042a048
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a04e
    PUSH EAX                            ; 0042a054
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a055
    CALL dword ptr [EDX + 0xf4]         ; 0042a05b
    ADD ESP,0x4                         ; 0042a061
    TEST EAX,EAX                        ; 0042a064
    JNZ 0x00429b35                      ; 0042a066
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a06c
    PUSH EAX                            ; 0042a072
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a073
    CALL dword ptr [EDX + 0x10c]        ; 0042a079
    ADD ESP,0x4                         ; 0042a07f
    TEST EAX,EAX                        ; 0042a082
    JNZ 0x0042a0b1                      ; 0042a084
        ;   XREF to: 0042a0b1 (CONDITIONAL_JUMP)  ; LAB_0042a0b1
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0042a086
    TEST EAX,EAX                        ; 0042a089
    JL 0x0042a0f5                       ; 0042a08b
        ;   XREF to: 0042a0f5 (CONDITIONAL_JUMP)  ; LAB_0042a0f5
    SHL EAX,0x3                         ; 0042a08d
    MOV EDX,EAX                         ; 0042a090
    SHL EAX,0x4                         ; 0042a092
    SUB EAX,EDX                         ; 0042a095
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0042a097
    JZ 0x0042a0f5                       ; 0042a09f
        ;   XREF to: 0042a0f5 (CONDITIONAL_JUMP)  ; LAB_0042a0f5
    PUSH 0x1                            ; 0042a0a1
    PUSH 0xb                            ; 0042a0a3
    MOV ECX,dword ptr [EBP + 0x4e]      ; 0042a0a5
    PUSH ECX                            ; 0042a0a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042a0a9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0042a0a9
    ADD ESP,0xc                         ; 0042a0ae
    MOV dword ptr [EBX + 0xc1e4],0x3f4ccccd ; 0042a0b1
        ;   Label: LAB_0042a0b1
    JMP 0x00429b35                      ; 0042a0bb
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042a0c0
        ;   Label: LAB_0042a0c0
    PUSH 0x5d542a                       ; 0042a0c1 | = "%s gave up chase - I'm confused\n"
    MOV ESI,dword ptr [0x00611100]      ; 0042a0c6 | g_CConsolePtr
    PUSH ESI                            ; 0042a0cc | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0042a0cd
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 0042a0d2
    PUSH 0x1                            ; 0042a0d5
    PUSH 0x2                            ; 0042a0d7
    PUSH 0x0                            ; 0042a0d9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042a0db
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042a0e0
    PUSH EAX                            ; 0042a0e3
    MOV EDI,dword ptr [EBP + 0x4e]      ; 0042a0e4
    PUSH EDI                            ; 0042a0e7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042a0e8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042a0ed
    JMP 0x00429b35                      ; 0042a0f0
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 0042a0f5
        ;   Label: LAB_0042a0f5
    PUSH 0xc                            ; 0042a0f7
    LEA EAX,[EBX + 0x158]               ; 0042a0f9
    PUSH EAX                            ; 0042a0ff
    JMP 0x0042a0a9                      ; 0042a100
        ;   XREF to: 0042a0a9 (UNCONDITIONAL_JUMP)  ; LAB_0042a0a9
    MOV EDI,dword ptr [EBX + 0xc27c]    ; 0042a102
        ;   Label: LAB_0042a102
    PUSH EDI                            ; 0042a108
    PUSH EBX                            ; 0042a109
    LEA ESI,[EBP + -0x4e]               ; 0042a10a
    CALL core_carved.cpp_FUN_0042b290   ; 0042a10d
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    MOV dword ptr [EBP + 0x42],EAX      ; 0042a112
    LEA EAX,[EBX + 0x20]                ; 0042a115
    LEA EDI,[EBP + 0xffffff6a]          ; 0042a118
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0042a11e
    FLD float ptr [EAX]                 ; 0042a124
    FLD float ptr [EAX + 0x4]           ; 0042a126
    FLD float ptr [EAX + 0x8]           ; 0042a129
    FXCH ST2                            ; 0042a12c
    FSUB float ptr [EDX + 0x20]         ; 0042a12e
    FXCH                                ; 0042a131
    FSUB float ptr [EDX + 0x24]         ; 0042a133
    FXCH ST2                            ; 0042a136
    FSUB float ptr [EDX + 0x28]         ; 0042a138
    FXCH                                ; 0042a13b
    FSTP float ptr [EBP + -0x4e]        ; 0042a13d
    FXCH                                ; 0042a140
    FSTP float ptr [EBP + -0x4a]        ; 0042a142
    FSTP float ptr [EBP + -0x46]        ; 0042a145
    MOVSD ES:EDI,ESI                    ; 0042a148
    MOVSD ES:EDI,ESI                    ; 0042a149
    MOVSD ES:EDI,ESI                    ; 0042a14a
    FLD float ptr [EBP + 0xffffff6e]    ; 0042a14b
    FMUL ST0                            ; 0042a151
    FLD float ptr [EBP + 0xffffff6a]    ; 0042a153
    FMUL ST0                            ; 0042a159
    FADDP                               ; 0042a15b
    FLD float ptr [EBP + 0xffffff72]    ; 0042a15d
    FMUL ST0                            ; 0042a163
    FADDP                               ; 0042a165
    FSQRT                               ; 0042a167
    ADD ESP,0x8                         ; 0042a169
    ADD EDX,0x20                        ; 0042a16c
    FCOMP double ptr [0x005d54a5]       ; 0042a16f | DAT_005d54a5
    FNSTSW AX                           ; 0042a175
    SAHF                                ; 0042a177
    JNC 0x00429b35                      ; 0042a178
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EDX                            ; 0042a17e
    PUSH EBX                            ; 0042a17f
    LEA ESI,[EBP + 0xfffffeaa]          ; 0042a180
    LEA EDI,[EBP + 0xfffffe0e]          ; 0042a186
    CALL core_actor.cpp_FUN_00408bb0    ; 0042a18c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffeaa]          ; 0042a191
    LEA EAX,[EBP + 0xfffffe0e]          ; 0042a197
    ADD ESP,0x8                         ; 0042a19d
    MOVSD ES:EDI,ESI                    ; 0042a1a0
    MOVSD ES:EDI,ESI                    ; 0042a1a1
    MOVSD ES:EDI,ESI                    ; 0042a1a2
    PUSH EAX                            ; 0042a1a3
    LEA ESI,[EBP + 0xfffffeb6]          ; 0042a1a4
    LEA EDI,[EBP + 0xfffffe1a]          ; 0042a1aa
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0042a1b0
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xfffffeb6]          ; 0042a1b5
    MOVSD ES:EDI,ESI                    ; 0042a1bb
    MOVSD ES:EDI,ESI                    ; 0042a1bc
    MOVSD ES:EDI,ESI                    ; 0042a1bd
    FLD float ptr [EBP + 0xfffffe1e]    ; 0042a1be
    FABS                                ; 0042a1c4
    ADD ESP,0x4                         ; 0042a1c6
    FCOMP double ptr [0x005d54ad]       ; 0042a1c9 | DAT_005d54ad
    FNSTSW AX                           ; 0042a1cf
    SAHF                                ; 0042a1d1
    JNC 0x00429b35                      ; 0042a1d2
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    CMP dword ptr [EBP + 0x42],0x0      ; 0042a1d8
    JL 0x00429b35                       ; 0042a1dc
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 0042a1e2
    CMP EAX,0x2                         ; 0042a1e8
    JC 0x00429b35                       ; 0042a1eb
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    JBE 0x00429b35                      ; 0042a1f1
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    CMP EAX,0x3                         ; 0042a1f7
    JNZ 0x00429b35                      ; 0042a1fa
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBP + 0x42]      ; 0042a200
    SHL EAX,0x3                         ; 0042a203
    MOV EDX,EAX                         ; 0042a206
    SHL EAX,0x4                         ; 0042a208
    SUB EAX,EDX                         ; 0042a20b
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0042a20d
    JZ 0x00429b35                       ; 0042a215
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042a21b
    PUSH 0x5d544b                       ; 0042a21c | = "%s tossing\n"
    MOV ECX,dword ptr [0x00611100]      ; 0042a221 | g_CConsolePtr
    PUSH ECX                            ; 0042a227 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0042a228
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 0042a22d
    PUSH 0x1                            ; 0042a230
    PUSH 0x1a                           ; 0042a232
    MOV ESI,dword ptr [EBP + 0x4e]      ; 0042a234
    PUSH ESI                            ; 0042a237
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042a238
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042a23d
    JMP 0x00429b35                      ; 0042a240
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0042a245
        ;   Label: caseD_c
    TEST ESI,ESI                        ; 0042a24b
    JZ 0x0042a30b                       ; 0042a24d
        ;   XREF to: 0042a30b (CONDITIONAL_JUMP)  ; LAB_0042a30b
    PUSH ESI                            ; 0042a253
    MOV EDX,dword ptr [ESI + 0x154]     ; 0042a254
    CALL dword ptr [EDX + 0x10c]        ; 0042a25a
    ADD ESP,0x4                         ; 0042a260
    TEST EAX,EAX                        ; 0042a263
    JG 0x0042a30b                       ; 0042a265
        ;   XREF to: 0042a30b (CONDITIONAL_JUMP)  ; LAB_0042a30b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a26b
    PUSH EAX                            ; 0042a271
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a272
    CALL dword ptr [EDX + 0xf4]         ; 0042a278
    ADD ESP,0x4                         ; 0042a27e
    TEST EAX,EAX                        ; 0042a281
    JNZ 0x0042a319                      ; 0042a283
        ;   XREF to: 0042a319 (CONDITIONAL_JUMP)  ; LAB_0042a319
    MOV EDI,0x40400000                  ; 0042a289
    MOV EAX,[0x005fd468]                ; 0042a28e | DAT_005fd468
    MOV dword ptr [EBP + 0x32],EDI      ; 0042a293
    MOV dword ptr [EBP + 0x52],EAX      ; 0042a296
    LEA EDI,[EBP + 0xfffffd1e]          ; 0042a299
        ;   Label: LAB_0042a299
    LEA EAX,[EBX + 0x20]                ; 0042a29f
    LEA ESI,[EBP + 0xfffffe56]          ; 0042a2a2
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0042a2a8
    FLD float ptr [EAX]                 ; 0042a2ae
    FLD float ptr [EAX + 0x4]           ; 0042a2b0
    FLD float ptr [EAX + 0x8]           ; 0042a2b3
    FXCH ST2                            ; 0042a2b6
    FSUB float ptr [EDX + 0x20]         ; 0042a2b8
    FXCH                                ; 0042a2bb
    FSUB float ptr [EDX + 0x24]         ; 0042a2bd
    FXCH ST2                            ; 0042a2c0
    FSUB float ptr [EDX + 0x28]         ; 0042a2c2
    FXCH                                ; 0042a2c5
    FSTP float ptr [EBP + 0xfffffe56]   ; 0042a2c7
    FXCH                                ; 0042a2cd
    FSTP float ptr [EBP + 0xfffffe5a]   ; 0042a2cf
    FSTP float ptr [EBP + 0xfffffe5e]   ; 0042a2d5
    MOVSD ES:EDI,ESI                    ; 0042a2db
    MOVSD ES:EDI,ESI                    ; 0042a2dc
    MOVSD ES:EDI,ESI                    ; 0042a2dd
    FLD float ptr [EBP + 0xfffffd22]    ; 0042a2de
    FMUL ST0                            ; 0042a2e4
    FLD float ptr [EBP + 0xfffffd1e]    ; 0042a2e6
    FMUL ST0                            ; 0042a2ec
    FADDP                               ; 0042a2ee
    FLD float ptr [EBP + 0xfffffd26]    ; 0042a2f0
    FMUL ST0                            ; 0042a2f6
    FADDP                               ; 0042a2f8
    FSQRT                               ; 0042a2fa
    FCOMP double ptr [0x005d548d]       ; 0042a2fc | DAT_005d548d
    FNSTSW AX                           ; 0042a302
    SAHF                                ; 0042a304
    JBE 0x00429b35                      ; 0042a305
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042a30b
        ;   Label: LAB_0042a30b
    CALL core_carved.cpp_FUN_0042be20   ; 0042a30c
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 0042a311
    JMP 0x00429b35                      ; 0042a314
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    CMP EAX,EBX                         ; 0042a319
        ;   Label: LAB_0042a319
    JZ 0x0042a299                       ; 0042a31b
        ;   XREF to: 0042a299 (CONDITIONAL_JUMP)  ; LAB_0042a299
    PUSH EBX                            ; 0042a321
    CALL core_carved.cpp_FUN_0042be20   ; 0042a322
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 0042a327
    JMP 0x0042a299                      ; 0042a32a
        ;   XREF to: 0042a299 (UNCONDITIONAL_JUMP)  ; LAB_0042a299
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 0042a32f
        ;   Label: caseD_b
    JZ 0x0042a30b                       ; 0042a336
        ;   XREF to: 0042a30b (CONDITIONAL_JUMP)  ; LAB_0042a30b
    PUSH 0x1                            ; 0042a338
    PUSH EBX                            ; 0042a33a
    CALL core_carved.cpp_FUN_0042b290   ; 0042a33b
        ;   XREF to: 0042b290 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042b290()
    MOV ESI,EAX                         ; 0042a340
    ADD ESP,0x8                         ; 0042a342
    TEST EAX,EAX                        ; 0042a345
    JL 0x0042a48d                       ; 0042a347
        ;   XREF to: 0042a48d (CONDITIONAL_JUMP)  ; LAB_0042a48d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a34d
    PUSH EAX                            ; 0042a353
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a354
    CALL dword ptr [EDX + 0x10c]        ; 0042a35a
    ADD ESP,0x4                         ; 0042a360
    TEST EAX,EAX                        ; 0042a363
    JG 0x0042a48d                       ; 0042a365
        ;   XREF to: 0042a48d (CONDITIONAL_JUMP)  ; LAB_0042a48d
    SHL ESI,0x3                         ; 0042a36b
    MOV EAX,ESI                         ; 0042a36e
    SHL EAX,0x4                         ; 0042a370
    SUB EAX,ESI                         ; 0042a373
    LEA ESI,[EBX + EAX*0x1]             ; 0042a375
    CMP dword ptr [ESI + 0x25b0],0x0    ; 0042a378
    JZ 0x0042a48d                       ; 0042a37f
        ;   XREF to: 0042a48d (CONDITIONAL_JUMP)  ; LAB_0042a48d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042a385
    PUSH EAX                            ; 0042a38b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a38c
    CALL dword ptr [EDX + 0xf4]         ; 0042a392
    ADD ESP,0x4                         ; 0042a398
    TEST EAX,EAX                        ; 0042a39b
    JNZ 0x0042a48d                      ; 0042a39d
        ;   XREF to: 0042a48d (CONDITIONAL_JUMP)  ; LAB_0042a48d
    MOV ECX,0x3f800000                  ; 0042a3a3
    MOV EAX,dword ptr [ESI + 0x25b0]    ; 0042a3a8
    MOV dword ptr [EBP + 0x46],ECX      ; 0042a3ae
    TEST EAX,EAX                        ; 0042a3b1
    JZ 0x0042a43d                       ; 0042a3b3
        ;   XREF to: 0042a43d (CONDITIONAL_JUMP)  ; LAB_0042a43d
    PUSH EAX                            ; 0042a3b9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042a3ba
    LEA ESI,[EBP + 0xfffffcfa]          ; 0042a3c0
    LEA EDI,[EBP + 0xfffffc52]          ; 0042a3c6
    CALL dword ptr [EDX + 0x1c]         ; 0042a3cc
    MOV ECX,0x6                         ; 0042a3cf
    LEA ESI,[EBP + 0xfffffcfa]          ; 0042a3d4
    LEA EAX,[EBP + 0xfffffd2a]          ; 0042a3da
    ADD ESP,0x4                         ; 0042a3e0
    MOVSD.REP ES:EDI,ESI                ; 0042a3e3
    PUSH EAX                            ; 0042a3e5
    LEA ESI,[EBP + 0xfffffc52]          ; 0042a3e6
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0042a3ec
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 0042a3f1
    FSUB float ptr [EBP + 0xfffffc52]   ; 0042a3f4
    FSTP float ptr [EBP + 0xfffffd2a]   ; 0042a3fa
    FLD float ptr [ESI + 0x10]          ; 0042a400
    FSUB float ptr [EBP + 0xfffffc56]   ; 0042a403
    LEA EDI,[EBP + -0x42]               ; 0042a409
    FSTP float ptr [EBP + 0xfffffd2e]   ; 0042a40c
    FLD float ptr [ESI + 0x14]          ; 0042a412
    FSUB float ptr [EBP + 0xfffffc5a]   ; 0042a415
    LEA ESI,[EBP + 0xfffffd2a]          ; 0042a41b
    FSTP float ptr [EBP + 0xfffffd32]   ; 0042a421
    MOVSD ES:EDI,ESI                    ; 0042a427
    MOVSD ES:EDI,ESI                    ; 0042a428
    MOVSD ES:EDI,ESI                    ; 0042a429
    FLD float ptr [EBP + -0x3a]         ; 0042a42a
    FMUL double ptr [0x005d5495]        ; 0042a42d | DAT_005d5495
    FLD1                                ; 0042a433
    FADDP                               ; 0042a435
    ADD ESP,0x4                         ; 0042a437
    FSTP float ptr [EBP + 0x46]         ; 0042a43a
    MOV EAX,dword ptr [EBP + 0x46]      ; 0042a43d
        ;   Label: LAB_0042a43d
    MOV dword ptr [EBP + 0x52],EAX      ; 0042a440
    LEA EAX,[EBX + 0x158]               ; 0042a443
    PUSH EAX                            ; 0042a449
    CALL core_motion.cpp_FUN_00525020   ; 0042a44a
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    FLD1                                ; 0042a44f
    MOV dword ptr [EBP + 0x76],EAX      ; 0042a451
    ADD ESP,0x4                         ; 0042a454
    MOV EAX,dword ptr [EBP + 0x76]      ; 0042a457
    MOV dword ptr [EBP + 0x2e],EAX      ; 0042a45a
    FLD float ptr [EBP + 0x2e]          ; 0042a45d
    FSTP double ptr [EBP + 0xe]         ; 0042a460
    FCOMP double ptr [EBP + 0xe]        ; 0042a463
    FNSTSW AX                           ; 0042a466
    SAHF                                ; 0042a468
    JA 0x00429b35                       ; 0042a469
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    FLD double ptr [EBP + 0xe]          ; 0042a46f
    FCOMP double ptr [0x005d549d]       ; 0042a472 | DAT_005d549d
    FNSTSW AX                           ; 0042a478
    SAHF                                ; 0042a47a
    JA 0x00429b35                       ; 0042a47b
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    MOV dword ptr [EBP + 0x36],0x1      ; 0042a481
    JMP 0x00429b35                      ; 0042a488
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042a48d
        ;   Label: LAB_0042a48d
    PUSH 0x5d5457                       ; 0042a48e | = "%s gave up swing\n"
    MOV EDI,dword ptr [0x00611100]      ; 0042a493 | g_CConsolePtr
    PUSH EDI                            ; 0042a499 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 0042a49a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    ADD ESP,0xc                         ; 0042a49f
    PUSH EBX                            ; 0042a4a2
    CALL core_carved.cpp_FUN_0042be20   ; 0042a4a3
        ;   XREF to: 0042be20 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_0042be20()
    ADD ESP,0x4                         ; 0042a4a8
    JMP 0x00429b35                      ; 0042a4ab
        ;   XREF to: 00429b35 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV EDX,0xbf800000                  ; 0042a4b0
        ;   Label: LAB_0042a4b0
    MOV ECX,0x3e99999a                  ; 0042a4b5
    PUSH ESI                            ; 0042a4ba
    MOV dword ptr [EBP + 0x52],EDX      ; 0042a4bb
    MOV dword ptr [EBP + 0x32],ECX      ; 0042a4be
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0042a4c1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0042a4c6
    ADD ESP,0x4                         ; 0042a4c9
    CMP EAX,0x16                        ; 0042a4cc
    JA 0x00429b35                       ; 0042a4cf
        ;   XREF to: 00429b35 (CONDITIONAL_JUMP)  ; caseD_15
    JMP dword ptr [EAX*0x4 + 0x428a80]  ; 0042a4d5 | caseD_2 | caseD_a | caseD_b
        ;   Label: switchD
    MOV EDI,dword ptr [EBX + 0xc2b4]    ; 0042a4dc
        ;   Label: LAB_0042a4dc
    PUSH 0x3f000000                     ; 0042a4e2
    PUSH EDI                            ; 0042a4e7
    PUSH EAX                            ; 0042a4e8
    JMP 0x00429953                      ; 0042a4e9
        ;   XREF to: 00429953 (UNCONDITIONAL_JUMP)  ; LAB_00429953

