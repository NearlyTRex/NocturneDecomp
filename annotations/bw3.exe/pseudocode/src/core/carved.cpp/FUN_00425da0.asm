; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_00425da0(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00425d40 = 00426ec6
;   TerminatedCString s_ghoul_eat_wav_005b7abf
;   TerminatedCString s_s_picked_up_s_using_hand_005b7acf
;   TerminatedCString s_core_carved_cpp_005b7aee
;   undefined4 DAT_005b7b01
;   TerminatedCString s_s_lugging_s_005b7b06
;   TerminatedCString s_demn_taunt_wav_005b7b15
;   TerminatedCString s_core_carved_cpp_005b7b29
;   undefined4 DAT_005b7b3c
;   TerminatedCString s_s_tossing_s_005b7b41
;   TerminatedCString s_demn_taunt_wav_005b7b50
;   TerminatedCString s_zombie_bang_door_wav_005b7b64
;   TerminatedCString s_ghoul_eat_wav_005b7b7a
;   undefined4 s_ghoul_eat_wav_005b7b7a+1
;   undefined4 s_ghoul_eat_wav_005b7b7a+2
;   ... and 38 more
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d220
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cf40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_carved.cpp_FUN_00427bc0
;   core_carved.cpp_FUN_00428520
;   core_carved.cpp_FUN_00429090
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042cd30
;   ... and 30 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425da0
        ;   Label: core_carved.cpp_FUN_00425da0
    PUSH ESI                            ; 00425da1
    PUSH EDI                            ; 00425da2
    PUSH EBP                            ; 00425da3
    MOV EBP,ESP                         ; 00425da4
    SUB ESP,0x4c0                       ; 00425da6
    SUB EBP,0x7a                        ; 00425dac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00425daf
    PUSH dword ptr [EBP + 0x92]         ; 00425db5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00425dbb
    PUSH EBX                            ; 00425dc1
    CALL dword ptr [EAX + 0x148]        ; 00425dc2
    ADD ESP,0x8                         ; 00425dc8
    TEST EAX,EAX                        ; 00425dcb
    JZ 0x00425e87                       ; 00425dcd
        ;   XREF to: 00425e87 (CONDITIONAL_JUMP)  ; LAB_00425e87
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 00425dd3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00425dd9
    JZ 0x00425e9e                       ; 00425de1
        ;   XREF to: 00425e9e (CONDITIONAL_JUMP)  ; LAB_00425e9e
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 00425de7
        ;   Label: LAB_00425de7
    TEST ECX,ECX                        ; 00425ded
    JNZ 0x00425edb                      ; 00425def
        ;   XREF to: 00425edb (CONDITIONAL_JUMP)  ; LAB_00425edb
    FLD float ptr [EBX + 0xd0c0]        ; 00425df5
    FLDZ                                ; 00425dfb
    FCOMPP                              ; 00425dfd
    FNSTSW AX                           ; 00425dff
    SAHF                                ; 00425e01
    JC 0x00425f3b                       ; 00425e02
        ;   XREF to: 00425f3b (CONDITIONAL_JUMP)  ; LAB_00425f3b
    FLD float ptr [EBP + 0x92]          ; 00425e08
        ;   Label: LAB_00425e08
    LEA EAX,[EBP + 0xfffffce2]          ; 00425e0e
    FMUL float ptr [EBX + 0xcdcc]       ; 00425e14
    ADD EAX,0xc                         ; 00425e1a
    FMUL float ptr [EBX + 0xd0d8]       ; 00425e1d
    MOV dword ptr [EBP + 0x62],EAX      ; 00425e23
    LEA EAX,[EBP + 0xfffffc9a]          ; 00425e26
    ADD EAX,0xc                         ; 00425e2c
    MOV dword ptr [EBP + 0x6a],EAX      ; 00425e2f
    LEA EAX,[EBX + 0x158]               ; 00425e32
    FSTP float ptr [EBP + 0x22]         ; 00425e38
    MOV dword ptr [EBP + 0x66],EAX      ; 00425e3b
    FLD float ptr [EBP + 0x22]          ; 00425e3e
        ;   Label: LAB_00425e3e
    FLDZ                                ; 00425e41
    FCOMPP                              ; 00425e43
    FNSTSW AX                           ; 00425e45
    SAHF                                ; 00425e47
    JNC 0x0042691a                      ; 00425e48
        ;   XREF to: 0042691a (CONDITIONAL_JUMP)  ; LAB_0042691a
    LEA EAX,[EBP + 0x22]                ; 00425e4e
    PUSH EAX                            ; 00425e51
    MOV ESI,dword ptr [EBP + 0x66]      ; 00425e52
    PUSH ESI                            ; 00425e55
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00425e56
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00425e5b
    MOV ESI,EAX                         ; 00425e5e
    CMP EAX,0xb                         ; 00425e60
    JNC 0x004268c2                      ; 00425e63
        ;   XREF to: 004268c2 (CONDITIONAL_JUMP)  ; LAB_004268c2
    CMP EAX,0x5                         ; 00425e69
    JNC 0x004268fc                      ; 00425e6c
        ;   XREF to: 004268fc (CONDITIONAL_JUMP)  ; LAB_004268fc
    CMP EAX,0x2                         ; 00425e72
    JZ 0x004262d0                       ; 00425e75
        ;   XREF to: 004262d0 (CONDITIONAL_JUMP)  ; LAB_004262d0
    PUSH ESI                            ; 00425e7b
        ;   Label: LAB_00425e7b
    PUSH EBX                            ; 00425e7c
    CALL core_charactr.cpp_FUN_00433fb0 ; 00425e7d
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00425e82
    JMP 0x00425e3e                      ; 00425e85
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EDI,dword ptr [EBX + 0xd0cc]    ; 00425e87
        ;   Label: LAB_00425e87
    PUSH EDI                            ; 00425e8d
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00425e8e
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00425e93
    LEA ESP,[EBP + 0x7a]                ; 00425e96
        ;   Label: LAB_00425e96
    POP EBP                             ; 00425e99
    POP EDI                             ; 00425e9a
    POP ESI                             ; 00425e9b
    POP EBX                             ; 00425e9c
    RET                                 ; 00425e9d
    PUSH EBX                            ; 00425e9e
        ;   Label: LAB_00425e9e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00425e9f
    CALL dword ptr [EAX + 0x10c]        ; 00425ea5
    ADD ESP,0x4                         ; 00425eab
    TEST EAX,EAX                        ; 00425eae
    JNZ 0x00425de7                      ; 00425eb0
        ;   XREF to: 00425de7 (CONDITIONAL_JUMP)  ; LAB_00425de7
    PUSH 0x1                            ; 00425eb6
    PUSH 0x2                            ; 00425eb8
    PUSH EAX                            ; 00425eba
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00425ebb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00425ec0
    ADD EAX,0x13                        ; 00425ec3
    PUSH EAX                            ; 00425ec6
    LEA EAX,[EBX + 0x158]               ; 00425ec7
    PUSH EAX                            ; 00425ecd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00425ece
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00425ed3
    JMP 0x00425de7                      ; 00425ed6
        ;   XREF to: 00425de7 (UNCONDITIONAL_JUMP)  ; LAB_00425de7
    MOV EAX,dword ptr [ECX + 0x154]     ; 00425edb
        ;   Label: LAB_00425edb
    PUSH 0x0                            ; 00425ee1
    MOV dword ptr [EBP + 0x76],EAX      ; 00425ee3
    LEA EAX,[EBX + 0x158]               ; 00425ee6
    LEA ESI,[EBP + 0xfffffefe]          ; 00425eec
    PUSH EAX                            ; 00425ef2
    LEA EDI,[EBP + 0xfffffece]          ; 00425ef3
    MOV dword ptr [EBP + 0x26],ECX      ; 00425ef9
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00425efc
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00425f01
    LEA EAX,[EBP + 0xfffffece]          ; 00425f04
    LEA ESI,[EBP + 0xfffffefe]          ; 00425f0a
    PUSH EAX                            ; 00425f10
    MOVSD ES:EDI,ESI                    ; 00425f11
    MOVSD ES:EDI,ESI                    ; 00425f12
    MOVSD ES:EDI,ESI                    ; 00425f13
    PUSH EBX                            ; 00425f14
    MOV ESI,dword ptr [EBP + 0x26]      ; 00425f15
    MOV EAX,dword ptr [EBP + 0x76]      ; 00425f18
    PUSH ESI                            ; 00425f1b
    CALL dword ptr [EAX + 0x110]        ; 00425f1c
    ADD ESP,0xc                         ; 00425f22
    TEST EAX,EAX                        ; 00425f25
    JNZ 0x00425e96                      ; 00425f27
        ;   XREF to: 00425e96 (CONDITIONAL_JUMP)  ; LAB_00425e96
    MOV dword ptr [EBX + 0x26fc],EAX    ; 00425f2d
    LEA ESP,[EBP + 0x7a]                ; 00425f33
    POP EBP                             ; 00425f36
    POP EDI                             ; 00425f37
    POP ESI                             ; 00425f38
    POP EBX                             ; 00425f39
    RET                                 ; 00425f3a
    FLD float ptr [EBX + 0xd0c0]        ; 00425f3b
        ;   Label: LAB_00425f3b
    FSUB float ptr [EBP + 0x92]         ; 00425f41
    FSTP float ptr [EBX + 0xd0c0]       ; 00425f47
    JMP 0x00425e08                      ; 00425f4d
        ;   XREF to: 00425e08 (UNCONDITIONAL_JUMP)  ; LAB_00425e08
    MOV EDI,0x1                         ; 00425f52
        ;   Label: LAB_00425f52
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00425f57
    MOV dword ptr [EBP + 0x72],EDI      ; 00425f5d
    TEST EAX,EAX                        ; 00425f60
    JNZ 0x00425f72                      ; 00425f62
        ;   XREF to: 00425f72 (CONDITIONAL_JUMP)  ; LAB_00425f72
    PUSH EBX                            ; 00425f64
        ;   Label: LAB_00425f64
    CALL core_carved.cpp_FUN_00429090   ; 00425f65
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00425f6a
    JMP 0x00425e3e                      ; 00425f6d
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EAX,[0x005dcf48]                ; 00425f72 | DAT_005dcf48
        ;   Label: LAB_00425f72
    MOV dword ptr [EBP + 0xfffffd56],EAX ; 00425f77
    LEA EAX,[EBP + 0xfffffd4e]          ; 00425f7d
    LEA ESI,[EBP + 0xfffffe02]          ; 00425f83
    PUSH EAX                            ; 00425f89
    LEA EDI,[EBP + 0xfffffdea]          ; 00425f8a
    XOR EDX,EDX                         ; 00425f90
    PUSH EBX                            ; 00425f92
    MOV dword ptr [EBP + 0xfffffd4e],EDX ; 00425f93
    MOV dword ptr [EBP + 0xfffffd52],EDX ; 00425f99
    CALL core_actor.cpp_FUN_00408b80    ; 00425f9f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffe02]          ; 00425fa4
    MOVSD ES:EDI,ESI                    ; 00425faa
    MOVSD ES:EDI,ESI                    ; 00425fab
    MOVSD ES:EDI,ESI                    ; 00425fac
    FLD float ptr [EBP + 0xfffffdea]    ; 00425fad
    FLD float ptr [EBP + 0xfffffdee]    ; 00425fb3
    FLD float ptr [EBP + 0xfffffdf2]    ; 00425fb9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00425fbf
    LEA EDI,[EBP + -0x4e]               ; 00425fc5
    LEA ESI,[EBP + 0xfffffd2a]          ; 00425fc8
    FXCH ST2                            ; 00425fce
    FSUB float ptr [EAX + 0x20]         ; 00425fd0
    FXCH                                ; 00425fd3
    FSUB float ptr [EAX + 0x24]         ; 00425fd5
    FXCH ST2                            ; 00425fd8
    FSUB float ptr [EAX + 0x28]         ; 00425fda
    FXCH                                ; 00425fdd
    FSTP float ptr [EBP + 0xfffffd2a]   ; 00425fdf
    FXCH                                ; 00425fe5
    FSTP float ptr [EBP + 0xfffffd2e]   ; 00425fe7
    FSTP float ptr [EBP + 0xfffffd32]   ; 00425fed
    MOVSD ES:EDI,ESI                    ; 00425ff3
    MOVSD ES:EDI,ESI                    ; 00425ff4
    MOVSD ES:EDI,ESI                    ; 00425ff5
    FLD float ptr [EBP + -0x4e]         ; 00425ff6
    FMUL ST0                            ; 00425ff9
    FLD float ptr [EBP + -0x46]         ; 00425ffb
    FMUL ST0                            ; 00425ffe
    FADDP                               ; 00426000
    FSQRT                               ; 00426002
    XOR ESI,ESI                         ; 00426004
    ADD ESP,0x8                         ; 00426006
    MOV dword ptr [EBP + -0x4a],ESI     ; 00426009
    FLD1                                ; 0042600c
    FCOMPP                              ; 0042600e
    FNSTSW AX                           ; 00426010
    SAHF                                ; 00426012
    JC 0x00425f64                       ; 00426013
        ;   XREF to: 00425f64 (CONDITIONAL_JUMP)  ; LAB_00425f64
    CMP dword ptr [EBP + 0x72],0x0      ; 00426019
    JZ 0x004260d2                       ; 0042601d
        ;   XREF to: 004260d2 (CONDITIONAL_JUMP)  ; LAB_004260d2
    MOV EDX,0x40800000                  ; 00426023
    LEA EAX,[EBP + -0x7e]               ; 00426028
    LEA EDI,[EBP + -0x36]               ; 0042602b
    PUSH EAX                            ; 0042602e
    MOV dword ptr [EBP + -0x7e],ESI     ; 0042602f
    MOV dword ptr [EBP + -0x76],ESI     ; 00426032
    PUSH EBX                            ; 00426035
    LEA ESI,[EBP + 0xffffff16]          ; 00426036
    MOV dword ptr [EBP + -0x7a],EDX     ; 0042603c
    CALL core_actor.cpp_FUN_00408b80    ; 0042603f
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff16]          ; 00426044
    MOVSD ES:EDI,ESI                    ; 0042604a
    MOVSD ES:EDI,ESI                    ; 0042604b
    MOVSD ES:EDI,ESI                    ; 0042604c
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0042604d
    LEA EDI,[EBP + 0xffffff46]          ; 00426053
    LEA ESI,[ESI + 0x20]                ; 00426059
    MOVSD ES:EDI,ESI                    ; 0042605c
    MOVSD ES:EDI,ESI                    ; 0042605d
    MOVSD ES:EDI,ESI                    ; 0042605e
    ADD ESP,0x8                         ; 0042605f
    MOV ESI,dword ptr [0x00603b28]      ; 00426062 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + -0x32]     ; 00426068
    PUSH ESI                            ; 0042606b | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 0042606c
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 00426072
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00426077
    PUSH EBX                            ; 0042607a
    MOV EDI,dword ptr [0x00603b28]      ; 0042607b | g_CDemonSetPtr
    PUSH EDI                            ; 00426081 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00426082
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00426087
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0042608a
    PUSH EAX                            ; 00426090
    MOV EDX,dword ptr [0x00603b28]      ; 00426091 | g_CDemonSetPtr
    PUSH EDX                            ; 00426097 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00426098
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042609d
    LEA EAX,[EBP + 0xffffff46]          ; 004260a0
    PUSH EAX                            ; 004260a6
    LEA EAX,[EBP + -0x36]               ; 004260a7
    PUSH EAX                            ; 004260aa
    MOV ECX,dword ptr [0x00603b28]      ; 004260ab | g_CDemonSetPtr
    PUSH ECX                            ; 004260b1 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0 ; 004260b2
        ;   XREF to: 0053cbf0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004260b7
    TEST EAX,EAX                        ; 004260ba
    JZ 0x004260c3                       ; 004260bc
        ;   XREF to: 004260c3 (CONDITIONAL_JUMP)  ; LAB_004260c3
    XOR ESI,ESI                         ; 004260be
    MOV dword ptr [EBP + 0x72],ESI      ; 004260c0
    MOV EDI,dword ptr [0x00603b28]      ; 004260c3 | g_CDemonSetPtr
        ;   Label: LAB_004260c3
    PUSH EDI                            ; 004260c9 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 004260ca
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004260cf
    CMP dword ptr [EBP + 0x72],0x0      ; 004260d2
        ;   Label: LAB_004260d2
    JZ 0x004260f9                       ; 004260d6
        ;   XREF to: 004260f9 (CONDITIONAL_JUMP)  ; LAB_004260f9
    PUSH 0x0                            ; 004260d8
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004260da
    PUSH EBX                            ; 004260e0
    MOV ESI,dword ptr [EAX + 0x154]     ; 004260e1
    PUSH EAX                            ; 004260e7
    CALL dword ptr [ESI + 0xec]         ; 004260e8
    ADD ESP,0xc                         ; 004260ee
    TEST EAX,EAX                        ; 004260f1
    JZ 0x00425f64                       ; 004260f3
        ;   XREF to: 00425f64 (CONDITIONAL_JUMP)  ; LAB_00425f64
    CMP dword ptr [EBP + 0x72],0x0      ; 004260f9
        ;   Label: LAB_004260f9
    JNZ 0x00425e3e                      ; 004260fd
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH EBX                            ; 00426103
    CALL core_carved.cpp_FUN_00429090   ; 00426104
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00426109
    JMP 0x00425e3e                      ; 0042610c
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00426111
        ;   Label: LAB_00426111
    JNZ 0x00426128                      ; 00426118
        ;   XREF to: 00426128 (CONDITIONAL_JUMP)  ; LAB_00426128
    PUSH EBX                            ; 0042611a
    CALL core_carved.cpp_FUN_00429090   ; 0042611b
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00426120
    JMP 0x00425e3e                      ; 00426123
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EDI,dword ptr [EBX + 0xd078]    ; 00426128
        ;   Label: LAB_00426128
    PUSH EDI                            ; 0042612e
    MOV EAX,dword ptr [EBP + 0x66]      ; 0042612f
    PUSH EAX                            ; 00426132
    LEA ESI,[EBP + 0xfffffd66]          ; 00426133
    LEA EDI,[EBP + 0xfffffd1e]          ; 00426139
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0042613f
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00426144
    LEA EAX,[EBP + 0xfffffd1e]          ; 00426147
    LEA ESI,[EBP + 0xfffffd66]          ; 0042614d
    PUSH EAX                            ; 00426153
    MOVSD ES:EDI,ESI                    ; 00426154
    MOVSD ES:EDI,ESI                    ; 00426155
    MOVSD ES:EDI,ESI                    ; 00426156
    PUSH EBX                            ; 00426157
    LEA ESI,[EBP + 0xfffffd36]          ; 00426158
    LEA EDI,[EBP + 0xfffffd7e]          ; 0042615e
    CALL core_actor.cpp_FUN_00408b80    ; 00426164
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffd36]          ; 00426169
    MOVSD ES:EDI,ESI                    ; 0042616f
    MOVSD ES:EDI,ESI                    ; 00426170
    MOVSD ES:EDI,ESI                    ; 00426171
    MOV EDX,dword ptr [EBX + 0xd0b4]    ; 00426172
    ADD ESP,0x8                         ; 00426178
    TEST EDX,EDX                        ; 0042617b
    JL 0x004261a7                       ; 0042617d
        ;   XREF to: 004261a7 (CONDITIONAL_JUMP)  ; LAB_004261a7
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0042617f
    PUSH EAX                            ; 00426185
    MOV ESI,dword ptr [EAX + 0x154]     ; 00426186
    CALL dword ptr [ESI + 0xf4]         ; 0042618c
    ADD ESP,0x4                         ; 00426192
    CMP EAX,EBX                         ; 00426195
    JZ 0x004261e0                       ; 00426197
        ;   XREF to: 004261e0 (CONDITIONAL_JUMP)  ; LAB_004261e0
    PUSH EBX                            ; 00426199
    CALL core_carved.cpp_FUN_00429090   ; 0042619a
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 0042619f
    JMP 0x00425e3e                      ; 004261a2
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004261a7
        ;   Label: LAB_004261a7
    FLD float ptr [EBP + 0xfffffd7e]    ; 004261ad
    FSUB float ptr [EAX + 0x20]         ; 004261b3
    FMUL ST0                            ; 004261b6
    FLD float ptr [EBP + 0xfffffd86]    ; 004261b8
    FSUB float ptr [EAX + 0x28]         ; 004261be
    FMUL ST0                            ; 004261c1
    FADDP                               ; 004261c3
    FSQRT                               ; 004261c5
    FCOMP double ptr [0x005b7c87]       ; 004261c7 | DAT_005b7c87
    FNSTSW AX                           ; 004261cd
    SAHF                                ; 004261cf
    JBE 0x004261e0                      ; 004261d0
        ;   XREF to: 004261e0 (CONDITIONAL_JUMP)  ; LAB_004261e0
    PUSH EBX                            ; 004261d2
    CALL core_carved.cpp_FUN_00429090   ; 004261d3
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 004261d8
    JMP 0x00425e3e                      ; 004261db
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    LEA EAX,[EBP + 0xfffffbf6]          ; 004261e0
        ;   Label: LAB_004261e0
    PUSH EAX                            ; 004261e6
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 004261e7
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004261ec
    PUSH 0x41c80000                     ; 004261ef
    PUSH 0x41700000                     ; 004261f4
    LEA ESI,[EBP + 0xfffffbf6]          ; 004261f9
    CALL core_actor.cpp_FUN_0040ce40    ; 004261ff
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 00426204
    ADD ESP,0x8                         ; 00426207
    MOV dword ptr [EBP + 0xfffffc2a],EBX ; 0042620a
    MOV dword ptr [EBP + 0xfffffc2e],EBX ; 00426210
    FLD float ptr [EBP + 0x76]          ; 00426216
    PUSH ESI                            ; 00426219
    FSTP float ptr [EBP + 0xfffffbfa]   ; 0042621a
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00426220
    PUSH EAX                            ; 00426226
    MOV EDI,dword ptr [EAX + 0x154]     ; 00426227
    CALL dword ptr [EDI + 0x108]        ; 0042622d
    FLD float ptr [EBP + 0xfffffbfa]    ; 00426233
    FLDZ                                ; 00426239
    ADD ESP,0x8                         ; 0042623b
    FXCH                                ; 0042623e
    FSTP double ptr [EBP + 0xe]         ; 00426240
    FCOMP double ptr [EBP + 0xe]        ; 00426243
    FNSTSW AX                           ; 00426246
    SAHF                                ; 00426248
    JNC 0x00426280                      ; 00426249
        ;   XREF to: 00426280 (CONDITIONAL_JUMP)  ; LAB_00426280
    FLD double ptr [EBP + 0xe]          ; 0042624b
    FMUL double ptr [0x005b7cbf]        ; 0042624e | DAT_005b7cbf
    FMUL double ptr [0x005b7cc7]        ; 00426254 | DAT_005b7cc7
    PUSH 0x0                            ; 0042625a
    CALL crt_math.c_round_FUN_005a3120  ; 0042625c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBP + 0x1e]        ; 00426261
    MOV ECX,dword ptr [EBP + 0x1e]      ; 00426264
    PUSH ECX                            ; 00426267
    PUSH 0x0                            ; 00426268
    LEA EAX,[EBP + 0xfffffd7e]          ; 0042626a
    PUSH EAX                            ; 00426270
    MOV ESI,dword ptr [0x005fed24]      ; 00426271 | g_CGorePtr
    PUSH ESI                            ; 00426277
    CALL core_gore.cpp_FUN_004ce9c0     ; 00426278
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0042627d
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00426280
        ;   Label: LAB_00426280
    PUSH EAX                            ; 00426286
    MOV ESI,dword ptr [EAX + 0x154]     ; 00426287
    CALL dword ptr [ESI + 0x10c]        ; 0042628d
    ADD ESP,0x4                         ; 00426293
    TEST EAX,EAX                        ; 00426296
    JLE 0x004262b9                      ; 00426298
        ;   XREF to: 004262b9 (CONDITIONAL_JUMP)  ; LAB_004262b9
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0042629a
    PUSH EAX                            ; 004262a0
    MOV ESI,dword ptr [EAX + 0x154]     ; 004262a1
    CALL dword ptr [ESI + 0xf0]         ; 004262a7
    ADD ESP,0x4                         ; 004262ad
    PUSH EBX                            ; 004262b0
    CALL core_carved.cpp_FUN_00429090   ; 004262b1
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 004262b6
    PUSH 0x5b7abf                       ; 004262b9 | = "ghoul-eat-?.wav"
        ;   Label: LAB_004262b9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004262be
    PUSH EBX                            ; 004262c4
    CALL dword ptr [EAX + 0x2c]         ; 004262c5
    ADD ESP,0x8                         ; 004262c8
    JMP 0x00425e3e                      ; 004262cb
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV ECX,dword ptr [EBX + 0xd064]    ; 004262d0
        ;   Label: LAB_004262d0
    TEST ECX,ECX                        ; 004262d6
    JZ 0x00425e3e                       ; 004262d8
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV ESI,dword ptr [EBX + 0xd068]    ; 004262de
    PUSH ESI                            ; 004262e4
    PUSH EBX                            ; 004262e5
    MOV EDI,ECX                         ; 004262e6
    MOV dword ptr [EBX + 0xd064],0x0    ; 004262e8
    CALL core_carved.cpp_FUN_00428520   ; 004262f2
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    ADD ESP,0x8                         ; 004262f7
    MOV ESI,EAX                         ; 004262fa
    TEST EAX,EAX                        ; 004262fc
    JL 0x00425e3e                       ; 004262fe
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH 0x0                            ; 00426304
    PUSH 0x3e4ccccd                     ; 00426306
    PUSH EDI                            ; 0042630b
    PUSH EAX                            ; 0042630c
    PUSH EBX                            ; 0042630d
    CALL core_charactr.cpp_FUN_004319d0 ; 0042630e
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 00426313
    PUSH ESI                            ; 00426316
    PUSH EDI                            ; 00426317
    PUSH EBX                            ; 00426318
    MOV EAX,0x5b7acf                    ; 00426319 | = "%s picked up %s using hand %d\n"
    PUSH EAX                            ; 0042631e | = "%s picked up %s using hand %d\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0042631f | g_CConsolePtr
    PUSH EDI                            ; 00426325 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00426326
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x14                        ; 0042632b
    JMP 0x00425e3e                      ; 0042632e
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH 0x2                            ; 00426333
        ;   Label: LAB_00426333
    PUSH EBX                            ; 00426335
    CALL core_carved.cpp_FUN_00428520   ; 00426336
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    ADD ESP,0x8                         ; 0042633b
    MOV ESI,EAX                         ; 0042633e
    TEST EAX,EAX                        ; 00426340
    JL 0x004263ba                       ; 00426342
        ;   XREF to: 004263ba (CONDITIONAL_JUMP)  ; LAB_004263ba
    IMUL EAX,ESI,0x78                   ; 00426344
        ;   Label: LAB_00426344
    ADD EAX,EBX                         ; 00426347
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 00426349
    TEST EDX,EDX                        ; 0042634f
    JZ 0x00425e3e                       ; 00426351
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH EDX                            ; 00426357
    PUSH EBX                            ; 00426358
    PUSH 0x5b7b06                       ; 00426359 | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 0042635e | g_CConsolePtr
    PUSH EDI                            ; 00426364 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00426365
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    MOV EDX,0x40c00000                  ; 0042636a
    MOV ECX,0x41880000                  ; 0042636f
    ADD ESP,0x10                        ; 00426374
    XOR EAX,EAX                         ; 00426377
    LEA EDI,[EBP + 0xfffffda2]          ; 00426379
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 0042637f
    PUSH EDI                            ; 00426385
    MOV dword ptr [EBP + 0xfffffda6],EDX ; 00426386
    MOV dword ptr [EBP + 0xfffffdaa],ECX ; 0042638c
    PUSH ESI                            ; 00426392
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426393
    PUSH EBX                            ; 00426399
    CALL dword ptr [EAX + 0x128]        ; 0042639a
    ADD ESP,0xc                         ; 004263a0
    PUSH 0x5b7b15                       ; 004263a3 | = "demn_taunt__???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004263a8
    PUSH EBX                            ; 004263ae
    CALL dword ptr [EAX + 0x2c]         ; 004263af
    ADD ESP,0x8                         ; 004263b2
    JMP 0x00425e3e                      ; 004263b5
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV ECX,0x5b7aee                    ; 004263ba | = "..\\core\\carved.cpp"
        ;   Label: LAB_004263ba
    MOV EDI,0x1e6                       ; 004263bf
    PUSH 0x5b7b01                       ; 004263c4 | DAT_005b7b01
    MOV dword ptr [0x01d71de0],ECX      ; 004263c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004263cf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004263d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004263da
    JMP 0x00426344                      ; 004263dd
        ;   XREF to: 00426344 (UNCONDITIONAL_JUMP)  ; LAB_00426344
    PUSH 0x3                            ; 004263e2
        ;   Label: LAB_004263e2
    PUSH EBX                            ; 004263e4
    CALL core_carved.cpp_FUN_00428520   ; 004263e5
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    ADD ESP,0x8                         ; 004263ea
    MOV dword ptr [EBP + 0x5a],EAX      ; 004263ed
    TEST EAX,EAX                        ; 004263f0
    JL 0x004264c3                       ; 004263f2
        ;   XREF to: 004264c3 (CONDITIONAL_JUMP)  ; LAB_004264c3
    IMUL EAX,dword ptr [EBP + 0x5a],0x78 ; 004263f8
        ;   Label: LAB_004263f8
    LEA EDX,[EBX + EAX*0x1]             ; 004263fc
    MOV ECX,dword ptr [EDX + 0x25b0]    ; 004263ff
    MOV dword ptr [EBP + 0x6e],EDX      ; 00426405
    TEST ECX,ECX                        ; 00426408
    JZ 0x00425e3e                       ; 0042640a
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH ECX                            ; 00426410
    PUSH EBX                            ; 00426411
    PUSH 0x5b7b41                       ; 00426412 | = "%s tossing %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00426417 | g_CConsolePtr
    PUSH EDI                            ; 0042641d | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0042641e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    XOR EAX,EAX                         ; 00426423
    MOV ECX,0x3f800000                  ; 00426425
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 0042642a
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 00426430
    MOV dword ptr [EBP + 0xfffffeee],ECX ; 00426436
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0042643c
    ADD ESP,0x10                        ; 00426442
    TEST ESI,ESI                        ; 00426445
    JNZ 0x004264ea                      ; 00426447
        ;   XREF to: 004264ea (CONDITIONAL_JUMP)  ; LAB_004264ea
    FLD float ptr [0x005b7cbb]          ; 0042644d | DAT_005b7cbb
        ;   Label: LAB_0042644d
    FLD float ptr [EBP + 0xfffffee6]    ; 00426453
    FMUL ST1                            ; 00426459
    FLD float ptr [EBP + 0xfffffeea]    ; 0042645b
    FMUL ST2                            ; 00426461
    FLD float ptr [EBP + 0xfffffeee]    ; 00426463
    FMULP ST3                           ; 00426469
    LEA ESI,[EBP + 0xfffffee6]          ; 0042646b
    MOV EDX,dword ptr [EBP + 0x5a]      ; 00426471
    PUSH ESI                            ; 00426474
    FXCH                                ; 00426475
    FSTP float ptr [EBP + 0xfffffee6]   ; 00426477
    FSTP float ptr [EBP + 0xfffffeea]   ; 0042647d
    FSTP float ptr [EBP + 0xfffffeee]   ; 00426483
    FLD float ptr [EBP + 0xfffffeea]    ; 00426489
    PUSH EDX                            ; 0042648f
    FADD float ptr [0x005b7ccf]         ; 00426490 | DAT_005b7ccf
    PUSH EBX                            ; 00426496
    FSTP float ptr [EBP + 0xfffffeea]   ; 00426497
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042649d
    CALL dword ptr [EAX + 0x128]        ; 004264a3
    ADD ESP,0xc                         ; 004264a9
    PUSH 0x5b7b50                       ; 004264ac | = "demn_taunt__???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004264b1
    PUSH EBX                            ; 004264b7
    CALL dword ptr [EAX + 0x2c]         ; 004264b8
    ADD ESP,0x8                         ; 004264bb
    JMP 0x00425e3e                      ; 004264be
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EDI,0x5b7b29                    ; 004264c3 | = "..\\core\\carved.cpp"
        ;   Label: LAB_004264c3
    MOV EAX,0x1fd                       ; 004264c8
    PUSH 0x5b7b3c                       ; 004264cd | DAT_005b7b3c
    MOV dword ptr [0x01d71de0],EDI      ; 004264d2 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004264d8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004264dd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004264e2
    JMP 0x004263f8                      ; 004264e5
        ;   XREF to: 004263f8 (UNCONDITIONAL_JUMP)  ; LAB_004263f8
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004264ea
        ;   Label: LAB_004264ea
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 004264ed
    PUSH EAX                            ; 004264f3
    MOV EDI,dword ptr [EAX + 0x154]     ; 004264f4
    LEA ESI,[EBP + 0xfffffcb2]          ; 004264fa
    CALL dword ptr [EDI + 0x1c]         ; 00426500
    MOV ECX,0x6                         ; 00426503
    LEA EDI,[EBP + 0xfffffce2]          ; 00426508
    LEA ESI,[EBP + 0xfffffcb2]          ; 0042650e
    MOVSD.REP ES:EDI,ESI                ; 00426514
    MOV EAX,dword ptr [EBP + 0x62]      ; 00426516
    FLD float ptr [EBP + 0xfffffce2]    ; 00426519
    FLD float ptr [EBP + 0xfffffce6]    ; 0042651f
    FLD float ptr [EBP + 0xfffffcea]    ; 00426525
    LEA EDI,[EBP + -0x42]               ; 0042652b
    LEA ESI,[EBP + 0xffffff2e]          ; 0042652e
    FXCH ST2                            ; 00426534
    FADD float ptr [EAX]                ; 00426536
    FXCH                                ; 00426538
    FADD float ptr [EAX + 0x4]          ; 0042653a
    FXCH ST2                            ; 0042653d
    FADD float ptr [EAX + 0x8]          ; 0042653f
    FXCH                                ; 00426542
    FSTP float ptr [EBP + 0xffffff2e]   ; 00426544
    FXCH                                ; 0042654a
    FSTP float ptr [EBP + 0xffffff32]   ; 0042654c
    FSTP float ptr [EBP + 0xffffff36]   ; 00426552
    MOVSD ES:EDI,ESI                    ; 00426558
    MOVSD ES:EDI,ESI                    ; 00426559
    MOVSD ES:EDI,ESI                    ; 0042655a
    FLD float ptr [EBP + -0x42]         ; 0042655b
    FMUL float ptr [0x005b7cb7]         ; 0042655e | DAT_005b7cb7
    FLD float ptr [EBP + -0x3e]         ; 00426564
    FMUL float ptr [0x005b7cb7]         ; 00426567 | DAT_005b7cb7
    ADD ESP,0x4                         ; 0042656d
    LEA EAX,[EBP + 0xfffffeaa]          ; 00426570
    FLD float ptr [EBP + -0x3a]         ; 00426576
    FMUL float ptr [0x005b7cb7]         ; 00426579 | DAT_005b7cb7
    PUSH EAX                            ; 0042657f
    LEA EDI,[EBP + 0xfffffeaa]          ; 00426580
    LEA ESI,[EBP + 0xffffff3a]          ; 00426586
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0042658c
    FXCH ST2                            ; 0042658f
    FSTP float ptr [EBP + 0xffffff3a]   ; 00426591
    FSTP float ptr [EBP + 0xffffff3e]   ; 00426597
    FSTP float ptr [EBP + 0xffffff42]   ; 0042659d
    MOVSD ES:EDI,ESI                    ; 004265a3
    MOVSD ES:EDI,ESI                    ; 004265a4
    MOVSD ES:EDI,ESI                    ; 004265a5
    MOV EDI,dword ptr [EAX + 0x25b0]    ; 004265a6
    PUSH EDI                            ; 004265ac
    LEA ESI,[EBP + -0x66]               ; 004265ad
    LEA EDI,[EBP + -0x72]               ; 004265b0
    CALL core_actor.cpp_FUN_00408b80    ; 004265b3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + -0x66]               ; 004265b8
    MOVSD ES:EDI,ESI                    ; 004265bb
    MOVSD ES:EDI,ESI                    ; 004265bc
    MOVSD ES:EDI,ESI                    ; 004265bd
    ADD ESP,0x8                         ; 004265be
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004265c1
    PUSH EAX                            ; 004265c7
    MOV EDI,dword ptr [EAX + 0x154]     ; 004265c8
    LEA ESI,[EBP + 0xfffffcfa]          ; 004265ce
    CALL dword ptr [EDI + 0x1c]         ; 004265d4
    MOV ECX,0x6                         ; 004265d7
    LEA EDI,[EBP + 0xfffffc9a]          ; 004265dc
    LEA ESI,[EBP + 0xfffffcfa]          ; 004265e2
    MOVSD.REP ES:EDI,ESI                ; 004265e8
    MOV EAX,dword ptr [EBP + 0x6a]      ; 004265ea
    FLD float ptr [EBP + 0xfffffc9a]    ; 004265ed
    FLD float ptr [EBP + 0xfffffc9e]    ; 004265f3
    FLD float ptr [EBP + 0xfffffca2]    ; 004265f9
    LEA EDI,[EBP + 0xfffffdae]          ; 004265ff
    LEA ESI,[EBP + -0x6]                ; 00426605
    FXCH ST2                            ; 00426608
    FADD float ptr [EAX]                ; 0042660a
    FXCH                                ; 0042660c
    FADD float ptr [EAX + 0x4]          ; 0042660e
    FXCH ST2                            ; 00426611
    FADD float ptr [EAX + 0x8]          ; 00426613
    FXCH                                ; 00426616
    FSTP float ptr [EBP + -0x6]         ; 00426618
    FXCH                                ; 0042661b
    FSTP float ptr [EBP + -0x2]         ; 0042661d
    FSTP float ptr [EBP + 0x2]          ; 00426620
    MOVSD ES:EDI,ESI                    ; 00426623
    MOVSD ES:EDI,ESI                    ; 00426624
    MOVSD ES:EDI,ESI                    ; 00426625
    FLD float ptr [EBP + 0xfffffdae]    ; 00426626
    FMUL float ptr [0x005b7cb7]         ; 0042662c | DAT_005b7cb7
    FLD float ptr [EBP + 0xfffffdb2]    ; 00426632
    FMUL float ptr [0x005b7cb7]         ; 00426638 | DAT_005b7cb7
    FLD float ptr [EBP + 0xfffffdb6]    ; 0042663e
    FMUL float ptr [0x005b7cb7]         ; 00426644 | DAT_005b7cb7
    ADD ESP,0x4                         ; 0042664a
    LEA EAX,[EBP + 0xfffffdf6]          ; 0042664d
    LEA EDI,[EBP + 0xfffffdf6]          ; 00426653
    LEA ESI,[EBP + 0xfffffe6e]          ; 00426659
    FXCH ST2                            ; 0042665f
    FSTP float ptr [EBP + 0xfffffe6e]   ; 00426661
    FSTP float ptr [EBP + 0xfffffe72]   ; 00426667
    FSTP float ptr [EBP + 0xfffffe76]   ; 0042666d
    MOVSD ES:EDI,ESI                    ; 00426673
    MOVSD ES:EDI,ESI                    ; 00426674
    MOVSD ES:EDI,ESI                    ; 00426675
    PUSH EAX                            ; 00426676
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00426677
    PUSH EAX                            ; 0042667d
    LEA ESI,[EBP + 0xfffffd8a]          ; 0042667e
    LEA EDI,[EBP + 0xffffff52]          ; 00426684
    CALL core_actor.cpp_FUN_00408b80    ; 0042668a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xfffffd8a]          ; 0042668f
    MOVSD ES:EDI,ESI                    ; 00426695
    MOVSD ES:EDI,ESI                    ; 00426696
    MOVSD ES:EDI,ESI                    ; 00426697
    FLD float ptr [EBP + 0xffffff52]    ; 00426698
    FLD float ptr [EBP + 0xffffff56]    ; 0042669e
    FLD float ptr [EBP + 0xffffff5a]    ; 004266a4
    LEA EDI,[EBP + 0xfffffe0e]          ; 004266aa
    LEA ESI,[EBP + 0xfffffdd2]          ; 004266b0
    FXCH ST2                            ; 004266b6
    FSUB float ptr [EBP + -0x72]        ; 004266b8
    FXCH                                ; 004266bb
    FSUB float ptr [EBP + -0x6e]        ; 004266bd
    FXCH ST2                            ; 004266c0
    FSUB float ptr [EBP + -0x6a]        ; 004266c2
    FXCH                                ; 004266c5
    FSTP float ptr [EBP + 0xfffffdd2]   ; 004266c7
    FXCH                                ; 004266cd
    FSTP float ptr [EBP + 0xfffffdd6]   ; 004266cf
    FSTP float ptr [EBP + 0xfffffdda]   ; 004266d5
    MOVSD ES:EDI,ESI                    ; 004266db
    MOVSD ES:EDI,ESI                    ; 004266dc
    MOVSD ES:EDI,ESI                    ; 004266dd
    FLD float ptr [EBP + 0xfffffe12]    ; 004266de
    FMUL ST0                            ; 004266e4
    FLD float ptr [EBP + 0xfffffe0e]    ; 004266e6
    FMUL ST0                            ; 004266ec
    FADDP                               ; 004266ee
    FLD float ptr [EBP + 0xfffffe16]    ; 004266f0
    FMUL ST0                            ; 004266f6
    FADDP                               ; 004266f8
    FSQRT                               ; 004266fa
    ADD ESP,0x8                         ; 004266fc
    FST float ptr [EBP + 0x5e]          ; 004266ff
    FLDZ                                ; 00426702
    FCOMPP                              ; 00426704
    FNSTSW AX                           ; 00426706
    SAHF                                ; 00426708
    JNC 0x0042644d                      ; 00426709
        ;   XREF to: 0042644d (CONDITIONAL_JUMP)  ; LAB_0042644d
    LEA EAX,[EBP + 0xfffffe0e]          ; 0042670f
    PUSH EAX                            ; 00426715
    PUSH EBX                            ; 00426716
    LEA ESI,[EBP + 0xfffffd96]          ; 00426717
    LEA EDI,[EBP + 0xfffffe7a]          ; 0042671d
    CALL core_actor.cpp_FUN_00408b40    ; 00426723
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffd96]          ; 00426728
    MOVSD ES:EDI,ESI                    ; 0042672e
    MOVSD ES:EDI,ESI                    ; 0042672f
    MOVSD ES:EDI,ESI                    ; 00426730
    FLD1                                ; 00426731
    FLD float ptr [EBP + 0xfffffe7a]    ; 00426733
    FXCH                                ; 00426739
    FDIV float ptr [EBP + 0x5e]         ; 0042673b
    FXCH                                ; 0042673e
    FMUL ST1                            ; 00426740
    FLD float ptr [EBP + 0xfffffe7e]    ; 00426742
    FMUL ST2                            ; 00426748
    FLD float ptr [EBP + 0xfffffe82]    ; 0042674a
    FMULP ST3                           ; 00426750
    LEA EDI,[EBP + 0xffffff6a]          ; 00426752
    LEA ESI,[EBP + 0xfffffe9e]          ; 00426758
    FXCH                                ; 0042675e
    FSTP float ptr [EBP + 0xfffffe9e]   ; 00426760
    FSTP float ptr [EBP + 0xfffffea2]   ; 00426766
    FSTP float ptr [EBP + 0xfffffea6]   ; 0042676c
    MOVSD ES:EDI,ESI                    ; 00426772
    MOVSD ES:EDI,ESI                    ; 00426773
    MOVSD ES:EDI,ESI                    ; 00426774
    LEA EAX,[EBP + 0xffffff6a]          ; 00426775
    LEA ESI,[EBP + 0xfffffee6]          ; 0042677b
    ADD ESP,0x8                         ; 00426781
    CMP ESI,EAX                         ; 00426784
    JZ 0x0042644d                       ; 00426786
        ;   XREF to: 0042644d (CONDITIONAL_JUMP)  ; LAB_0042644d
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 0042678c
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 00426792
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 00426798
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 0042679e
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 004267a4
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 004267aa
    JMP 0x0042644d                      ; 004267b0
        ;   XREF to: 0042644d (UNCONDITIONAL_JUMP)  ; LAB_0042644d
    MOV ECX,dword ptr [EBX + 0xd06c]    ; 004267b5
        ;   Label: LAB_004267b5
    TEST ECX,ECX                        ; 004267bb
    JZ 0x00425e3e                       ; 004267bd
        ;   XREF to: 00425e3e (CONDITIONAL_JUMP)  ; LAB_00425e3e
    PUSH 0x3e99999a                     ; 004267c3
    PUSH ECX                            ; 004267c8
    CALL core_door.cpp_CDoor_setSwingRange_FUN_00465060 ; 004267c9
        ;   XREF to: 00465060 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_setSwingRange_FUN_00465060(CDoor * this_ptr, float swing_range)
    ADD ESP,0x8                         ; 004267ce
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 004267d1
    PUSH 0x5b7b64                       ; 004267d7 | = "zombie-bang-door?.wav"
    MOV ESI,dword ptr [EAX + 0x154]     ; 004267dc
    PUSH EAX                            ; 004267e2
    CALL dword ptr [ESI + 0x2c]         ; 004267e3
    ADD ESP,0x8                         ; 004267e6
    MOV dword ptr [EBX + 0xd06c],0x0    ; 004267e9
    JMP 0x00425e3e                      ; 004267f3
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV EDI,dword ptr [EBX + 0xd078]    ; 004267f8
        ;   Label: LAB_004267f8
    PUSH EDI                            ; 004267fe
    MOV EAX,dword ptr [EBP + 0x66]      ; 004267ff
    PUSH EAX                            ; 00426802
    LEA ESI,[EBP + -0x12]               ; 00426803
    LEA EDI,[EBP + -0x1e]               ; 00426806
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00426809
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0042680e
    LEA EAX,[EBP + -0x1e]               ; 00426811
    LEA ESI,[EBP + -0x12]               ; 00426814
    PUSH EAX                            ; 00426817
    MOVSD ES:EDI,ESI                    ; 00426818
    MOVSD ES:EDI,ESI                    ; 00426819
    MOVSD ES:EDI,ESI                    ; 0042681a
    PUSH EBX                            ; 0042681b
    LEA ESI,[EBP + 0xfffffe1a]          ; 0042681c
    CALL core_actor.cpp_FUN_00408b80    ; 00426822
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00426827
    PUSH 0x0                            ; 0042682a
    PUSH 0x3                            ; 0042682c
    PUSH 0x0                            ; 0042682e
    LEA EAX,[EBP + 0xfffffd72]          ; 00426830
    LEA EDI,[EBP + 0xfffffd72]          ; 00426836
    PUSH EAX                            ; 0042683c
    MOV EDX,dword ptr [0x005fed24]      ; 0042683d | g_CGorePtr
    LEA ESI,[EBP + 0xfffffe1a]          ; 00426843
    PUSH EDX                            ; 00426849
    MOVSD ES:EDI,ESI                    ; 0042684a
    MOVSD ES:EDI,ESI                    ; 0042684b
    MOVSD ES:EDI,ESI                    ; 0042684c
    CALL core_gore.cpp_FUN_004ce9c0     ; 0042684d
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00426852
    PUSH 0x3f000000                     ; 00426855
    CALL core_actor.cpp_FUN_0040cf40    ; 0042685a
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0042685f
    TEST EAX,EAX                        ; 00426862
    JZ 0x004268a4                       ; 00426864
        ;   XREF to: 004268a4 (CONDITIONAL_JUMP)  ; LAB_004268a4
    MOV ESI,0x5b7b7a                    ; 00426866 | = "ghoul-eat-?.wav"
    LEA EDI,[EBP + 0xfffffc32]          ; 0042686b
        ;   Label: LAB_0042686b
    PUSH EDI                            ; 00426871
    MOV AL,byte ptr [ESI]               ; 00426872 | = "ghoul-eat-?.wav" | s_ghoul_eat_wav_005b7b7a+2 | s_ghoul_dig_wav_005b7b8a
        ;   Label: LAB_00426872
    MOV byte ptr [EDI],AL               ; 00426874
    CMP AL,0x0                          ; 00426876
    JZ 0x0042688a                       ; 00426878
        ;   XREF to: 0042688a (CONDITIONAL_JUMP)  ; LAB_0042688a
    MOV AL,byte ptr [ESI + 0x1]         ; 0042687a | s_ghoul_eat_wav_005b7b7a+1 | s_ghoul_eat_wav_005b7b7a+3 | s_ghoul_dig_wav_005b7b8a+1
    ADD ESI,0x2                         ; 0042687d
    MOV byte ptr [EDI + 0x1],AL         ; 00426880
    ADD EDI,0x2                         ; 00426883
    CMP AL,0x0                          ; 00426886
    JNZ 0x00426872                      ; 00426888
        ;   XREF to: 00426872 (CONDITIONAL_JUMP)  ; LAB_00426872
    POP EDI                             ; 0042688a
        ;   Label: LAB_0042688a
    LEA ESI,[EBP + 0xfffffc32]          ; 0042688b
    PUSH ESI                            ; 00426891
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426892
    PUSH EBX                            ; 00426898
    CALL dword ptr [EAX + 0x2c]         ; 00426899
    ADD ESP,0x8                         ; 0042689c
    JMP 0x00425e3e                      ; 0042689f
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    MOV ESI,0x5b7b8a                    ; 004268a4 | = "ghoul-dig-?.wav"
        ;   Label: LAB_004268a4
    JMP 0x0042686b                      ; 004268a9
        ;   XREF to: 0042686b (UNCONDITIONAL_JUMP)  ; LAB_0042686b
    PUSH 0x5b7b9a                       ; 004268ab | = "fall-?.wav"
        ;   Label: LAB_004268ab
    MOV EAX,dword ptr [EBX + 0x154]     ; 004268b0
    PUSH EBX                            ; 004268b6
    CALL dword ptr [EAX + 0x2c]         ; 004268b7
    ADD ESP,0x8                         ; 004268ba
    JMP 0x00425e3e                      ; 004268bd
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    JBE 0x00426333                      ; 004268c2
        ;   XREF to: 00426333 (CONDITIONAL_JUMP)  ; LAB_00426333
        ;   Label: LAB_004268c2
    CMP EAX,0xd                         ; 004268c8
    JC 0x004263e2                       ; 004268cb
        ;   XREF to: 004263e2 (CONDITIONAL_JUMP)  ; LAB_004263e2
    JBE 0x004267b5                      ; 004268d1
        ;   XREF to: 004267b5 (CONDITIONAL_JUMP)  ; LAB_004267b5
    CMP EAX,0x65                        ; 004268d7
    JC 0x00425e7b                       ; 004268da
        ;   XREF to: 00425e7b (CONDITIONAL_JUMP)  ; LAB_00425e7b
    JBE 0x004268ab                      ; 004268e0
        ;   XREF to: 004268ab (CONDITIONAL_JUMP)  ; LAB_004268ab
    CMP EAX,0x29a                       ; 004268e2
    JZ 0x004267f8                       ; 004268e7
        ;   XREF to: 004267f8 (CONDITIONAL_JUMP)  ; LAB_004267f8
    PUSH ESI                            ; 004268ed
    PUSH EBX                            ; 004268ee
    CALL core_charactr.cpp_FUN_00433fb0 ; 004268ef
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004268f4
    JMP 0x00425e3e                      ; 004268f7
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    JBE 0x00425f52                      ; 004268fc
        ;   XREF to: 00425f52 (CONDITIONAL_JUMP)  ; LAB_00425f52
        ;   Label: LAB_004268fc
    CMP EAX,0xa                         ; 00426902
    JZ 0x00426111                       ; 00426905
        ;   XREF to: 00426111 (CONDITIONAL_JUMP)  ; LAB_00426111
    PUSH ESI                            ; 0042690b
    PUSH EBX                            ; 0042690c
    CALL core_charactr.cpp_FUN_00433fb0 ; 0042690d
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00426912
    JMP 0x00425e3e                      ; 00426915
        ;   XREF to: 00425e3e (UNCONDITIONAL_JUMP)  ; LAB_00425e3e
    FLD float ptr [EBP + 0x92]          ; 0042691a
        ;   Label: LAB_0042691a
    FMUL float ptr [EBX + 0xcdcc]       ; 00426920
    SUB ESP,0x4                         ; 00426926
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00426929
    MOV dword ptr [EBX + 0x2524],EAX    ; 0042692f
    FSTP float ptr [ESP]                ; 00426935
    PUSH EBX                            ; 00426938
    CALL core_charactr.cpp_FUN_00434850 ; 00426939
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 0042693e
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00426944
    ADD ESP,0x8                         ; 0042694b
    TEST EDX,EDX                        ; 0042694e
    JZ 0x00426c71                       ; 00426950
        ;   XREF to: 00426c71 (CONDITIONAL_JUMP)  ; LAB_00426c71
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 00426956
        ;   Label: LAB_00426956
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042695c
    JZ 0x00426c85                       ; 00426964
        ;   XREF to: 00426c85 (CONDITIONAL_JUMP)  ; LAB_00426c85
    LEA ESI,[EBX + 0x158]               ; 0042696a
        ;   Label: LAB_0042696a
    PUSH ESI                            ; 00426970
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00426971
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00426976
    PUSH dword ptr [EBP + 0x92]         ; 00426979
    XOR EAX,EAX                         ; 0042697f
    PUSH EBX                            ; 00426981
    MOV dword ptr [EBP + 0x42],EAX      ; 00426982
    CALL core_charactr.cpp_FUN_00431660 ; 00426985
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0042698a
    TEST EAX,EAX                        ; 0042698d
    JZ 0x00427741                       ; 0042698f
        ;   XREF to: 00427741 (CONDITIONAL_JUMP)  ; LAB_00427741
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00426995
    CMP EAX,0x2                         ; 0042699b
    JNC 0x00426d32                      ; 0042699e
        ;   XREF to: 00426d32 (CONDITIONAL_JUMP)  ; LAB_00426d32
    CMP EAX,0x1                         ; 004269a4
    JNZ 0x00426d3d                      ; 004269a7
        ;   XREF to: 00426d3d (CONDITIONAL_JUMP)  ; LAB_00426d3d
    PUSH EBX                            ; 004269ad
        ;   Label: LAB_004269ad
    CALL core_carved.cpp_FUN_00429090   ; 004269ae
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 004269b3
    FLD float ptr [EBX + 0xcde0]        ; 004269b6
        ;   Label: LAB_004269b6
    FLDZ                                ; 004269bc
    FCOMPP                              ; 004269be
    FNSTSW AX                           ; 004269c0
    SAHF                                ; 004269c2
    JNC 0x004269d7                      ; 004269c3
        ;   XREF to: 004269d7 (CONDITIONAL_JUMP)  ; LAB_004269d7
    FLD float ptr [EBX + 0xcde0]        ; 004269c5
    FSUB float ptr [EBP + 0x92]         ; 004269cb
    FSTP float ptr [EBX + 0xcde0]       ; 004269d1
    PUSH EBX                            ; 004269d7
        ;   Label: LAB_004269d7
    CALL core_charactr.cpp_FUN_0042ccf0 ; 004269d8
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004269dd
    TEST EAX,EAX                        ; 004269e0
    JZ 0x00426b22                       ; 004269e2
        ;   XREF to: 00426b22 (CONDITIONAL_JUMP)  ; LAB_00426b22
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004269e8
    TEST EDX,EDX                        ; 004269ee
    JZ 0x00426a1e                       ; 004269f0
        ;   XREF to: 00426a1e (CONDITIONAL_JUMP)  ; LAB_00426a1e
    MOV EAX,EDX                         ; 004269f2
    PUSH EAX                            ; 004269f4
    MOV EDX,dword ptr [EDX + 0x154]     ; 004269f5
    CALL dword ptr [EDX + 0xf4]         ; 004269fb
    ADD ESP,0x4                         ; 00426a01
    CMP EAX,EBX                         ; 00426a04
    JNZ 0x00426a1e                      ; 00426a06
        ;   XREF to: 00426a1e (CONDITIONAL_JUMP)  ; LAB_00426a1e
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00426a08
    PUSH ECX                            ; 00426a0e
    MOV ESI,dword ptr [0x00603b28]      ; 00426a0f | g_CDemonSetPtr
    PUSH ESI                            ; 00426a15 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 00426a16
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00426a1b
    PUSH dword ptr [EBP + 0x92]         ; 00426a1e
        ;   Label: LAB_00426a1e
    PUSH EBX                            ; 00426a24
    LEA ESI,[EBX + 0x2518]              ; 00426a25
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00426a2b
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    FLD float ptr [ESI]                 ; 00426a30
    FMUL float ptr [EBP + 0x92]         ; 00426a32
    FLD float ptr [ESI + 0x4]           ; 00426a38
    FMUL float ptr [EBP + 0x92]         ; 00426a3b
    FLD float ptr [ESI + 0x8]           ; 00426a41
    FMUL float ptr [EBP + 0x92]         ; 00426a44
    LEA EDI,[EBP + 0xfffffe92]          ; 00426a4a
    LEA ESI,[EBP + 0xffffff22]          ; 00426a50
    FXCH ST2                            ; 00426a56
    FSTP float ptr [EBP + 0xffffff22]   ; 00426a58
    FSTP float ptr [EBP + 0xffffff26]   ; 00426a5e
    FSTP float ptr [EBP + 0xffffff2a]   ; 00426a64
    MOVSD ES:EDI,ESI                    ; 00426a6a
    MOVSD ES:EDI,ESI                    ; 00426a6b
    MOVSD ES:EDI,ESI                    ; 00426a6c
    LEA EDX,[EBX + 0x250c]              ; 00426a6d
    FLD float ptr [EBP + 0xfffffe92]    ; 00426a73
    FLD float ptr [EBP + 0xfffffe96]    ; 00426a79
    FLD float ptr [EBP + 0xfffffe9a]    ; 00426a7f
    LEA EDI,[EBP + -0x5a]               ; 00426a85
    LEA ESI,[EBP + -0x2a]               ; 00426a88
    FXCH ST2                            ; 00426a8b
    FADD float ptr [EDX]                ; 00426a8d
    FXCH                                ; 00426a8f
    FADD float ptr [EDX + 0x4]          ; 00426a91
    FXCH ST2                            ; 00426a94
    FADD float ptr [EDX + 0x8]          ; 00426a96
    FXCH                                ; 00426a99
    FSTP float ptr [EBP + -0x2a]        ; 00426a9b
    FXCH                                ; 00426a9e
    FSTP float ptr [EBP + -0x26]        ; 00426aa0
    FSTP float ptr [EBP + -0x22]        ; 00426aa3
    MOVSD ES:EDI,ESI                    ; 00426aa6
    MOVSD ES:EDI,ESI                    ; 00426aa7
    MOVSD ES:EDI,ESI                    ; 00426aa8
    LEA EAX,[EBX + 0x249c]              ; 00426aa9
    FLD float ptr [EBP + -0x5a]         ; 00426aaf
    FLD float ptr [EBP + -0x56]         ; 00426ab2
    FLD float ptr [EBP + -0x52]         ; 00426ab5
    LEA EDI,[EBP + 0xfffffdba]          ; 00426ab8
    LEA ESI,[EBP + 0xfffffef2]          ; 00426abe
    FXCH ST2                            ; 00426ac4
    FADD float ptr [EAX]                ; 00426ac6
    FXCH                                ; 00426ac8
    FADD float ptr [EAX + 0x4]          ; 00426aca
    FXCH ST2                            ; 00426acd
    FADD float ptr [EAX + 0x8]          ; 00426acf
    FXCH                                ; 00426ad2
    FSTP float ptr [EBP + 0xfffffef2]   ; 00426ad4
    FXCH                                ; 00426ada
    FSTP float ptr [EBP + 0xfffffef6]   ; 00426adc
    FSTP float ptr [EBP + 0xfffffefa]   ; 00426ae2
    MOVSD ES:EDI,ESI                    ; 00426ae8
    MOVSD ES:EDI,ESI                    ; 00426ae9
    MOVSD ES:EDI,ESI                    ; 00426aea
    MOV dword ptr [EDX + 0x8],0x0       ; 00426aeb
    MOV ECX,dword ptr [EDX + 0x8]       ; 00426af2
    MOV dword ptr [EDX + 0x4],ECX       ; 00426af5
    MOV ECX,dword ptr [EDX + 0x4]       ; 00426af8
    MOV dword ptr [EDX],ECX             ; 00426afb
    MOV dword ptr [EAX + 0x8],0x0       ; 00426afd
    ADD ESP,0x8                         ; 00426b04
    MOV EDX,dword ptr [EAX + 0x8]       ; 00426b07
    MOV dword ptr [EAX + 0x4],EDX       ; 00426b0a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00426b0d
    MOV dword ptr [EAX],EDX             ; 00426b10
    LEA EAX,[EBP + 0xfffffdba]          ; 00426b12
    PUSH EAX                            ; 00426b18
    PUSH EBX                            ; 00426b19
    CALL core_charactr.cpp_FUN_0042c230 ; 00426b1a
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00426b1f
    PUSH EBX                            ; 00426b22
        ;   Label: LAB_00426b22
    CALL core_charactr.cpp_FUN_0042cd30 ; 00426b23
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00426b28
    LEA EAX,[EBX + 0x158]               ; 00426b2b
    PUSH EAX                            ; 00426b31
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 00426b32
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426b37
    PUSH dword ptr [EBP + 0x92]         ; 00426b3a
    PUSH EBX                            ; 00426b40
    CALL core_charactr.cpp_FUN_00433350 ; 00426b41
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433350(CCharacter * this_ptr, float delta_time)
    MOV EDI,dword ptr [EBX + 0xcdd0]    ; 00426b46
    ADD ESP,0x8                         ; 00426b4c
    TEST EDI,EDI                        ; 00426b4f
    JNZ 0x00426c22                      ; 00426b51
        ;   XREF to: 00426c22 (CONDITIONAL_JUMP)  ; LAB_00426c22
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 00426b57
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00426b5d
    JZ 0x0042776d                       ; 00426b65
        ;   XREF to: 0042776d (CONDITIONAL_JUMP)  ; LAB_0042776d
    MOV EDI,dword ptr [EBX + 0xd08c]    ; 00426b6b
    PUSH 0x3e4ccccd                     ; 00426b71
    PUSH EDI                            ; 00426b76
    MOV EAX,dword ptr [EBX + 0xd0a4]    ; 00426b77
    PUSH EAX                            ; 00426b7d
    PUSH EBX                            ; 00426b7e
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00426b7f
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd0a4]    ; 00426b84
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00426b8a
    ADD ESP,0x10                        ; 00426b91
    TEST EDX,EDX                        ; 00426b94
    JZ 0x00426bb4                       ; 00426b96
        ;   XREF to: 00426bb4 (CONDITIONAL_JUMP)  ; LAB_00426bb4
    MOV ECX,dword ptr [EBX + 0xd084]    ; 00426b98
    PUSH 0x3e4ccccd                     ; 00426b9e
    PUSH ECX                            ; 00426ba3
    MOV ESI,dword ptr [EBX + 0xd0a8]    ; 00426ba4
    PUSH ESI                            ; 00426baa
    PUSH EBX                            ; 00426bab
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00426bac
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00426bb1
    MOV EDI,dword ptr [EBX + 0xd090]    ; 00426bb4
        ;   Label: LAB_00426bb4
    PUSH 0x3e4ccccd                     ; 00426bba
    PUSH EDI                            ; 00426bbf
    MOV EAX,dword ptr [EBX + 0xd0ac]    ; 00426bc0
    PUSH EAX                            ; 00426bc6
    PUSH EBX                            ; 00426bc7
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00426bc8
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    MOV EAX,dword ptr [EBX + 0xd0ac]    ; 00426bcd
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00426bd3
    ADD ESP,0x10                        ; 00426bda
    TEST EDX,EDX                        ; 00426bdd
    JZ 0x00426bfd                       ; 00426bdf
        ;   XREF to: 00426bfd (CONDITIONAL_JUMP)  ; LAB_00426bfd
    MOV ECX,dword ptr [EBX + 0xd088]    ; 00426be1
    PUSH 0x3e4ccccd                     ; 00426be7
    PUSH ECX                            ; 00426bec
    MOV ESI,dword ptr [EBX + 0xd0b0]    ; 00426bed
    PUSH ESI                            ; 00426bf3
    PUSH EBX                            ; 00426bf4
    CALL core_charactr.cpp_FUN_0042fdc0 ; 00426bf5
        ;   XREF to: 0042fdc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fdc0()
    ADD ESP,0x10                        ; 00426bfa
    MOV EDI,dword ptr [EBX + 0xd078]    ; 00426bfd
        ;   Label: LAB_00426bfd
    PUSH 0x3f333333                     ; 00426c03
    PUSH EDI                            ; 00426c08
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 00426c09
    PUSH EAX                            ; 00426c0f
        ;   Label: LAB_00426c0f
    PUSH EBX                            ; 00426c10
    CALL core_charactr.cpp_FUN_0042fe90 ; 00426c11
        ;   XREF to: 0042fe90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042fe90(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00426c16
    PUSH EBX                            ; 00426c19
    CALL core_charactr.cpp_FUN_0042fc90 ; 00426c1a
        ;   XREF to: 0042fc90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042fc90()
    ADD ESP,0x4                         ; 00426c1f
    PUSH 0x1                            ; 00426c22
        ;   Label: LAB_00426c22
    PUSH EBX                            ; 00426c24
    CALL core_carved.cpp_FUN_00428520   ; 00426c25
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    MOV EDX,dword ptr [EBP + 0x42]      ; 00426c2a
    ADD ESP,0x8                         ; 00426c2d
    TEST EDX,EDX                        ; 00426c30
    JZ 0x00425e96                       ; 00426c32
        ;   XREF to: 00425e96 (CONDITIONAL_JUMP)  ; LAB_00425e96
    TEST EAX,EAX                        ; 00426c38
    JL 0x00425e96                       ; 00426c3a
        ;   XREF to: 00425e96 (CONDITIONAL_JUMP)  ; LAB_00425e96
    SHL EAX,0x3                         ; 00426c40
    MOV EDX,EAX                         ; 00426c43
    SHL EAX,0x4                         ; 00426c45
    SUB EAX,EDX                         ; 00426c48
    ADD EBX,EAX                         ; 00426c4a
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 00426c4c
    TEST ECX,ECX                        ; 00426c52
    JZ 0x00425e96                       ; 00426c54
        ;   XREF to: 00425e96 (CONDITIONAL_JUMP)  ; LAB_00425e96
    PUSH 0x2                            ; 00426c5a
    MOV EDX,dword ptr [ECX + 0x154]     ; 00426c5c
    PUSH ECX                            ; 00426c62
    CALL dword ptr [EDX + 0x78]         ; 00426c63
    ADD ESP,0x8                         ; 00426c66
    LEA ESP,[EBP + 0x7a]                ; 00426c69
    POP EBP                             ; 00426c6c
    POP EDI                             ; 00426c6d
    POP ESI                             ; 00426c6e
    POP EBX                             ; 00426c6f
    RET                                 ; 00426c70
    MOV EAX,dword ptr [EBX + 0xd0a8]    ; 00426c71
        ;   Label: LAB_00426c71
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00426c77
    JNZ 0x00426956                      ; 00426c7f
        ;   XREF to: 00426956 (CONDITIONAL_JUMP)  ; LAB_00426956
    FLD float ptr [EBX + 0xd0c4]        ; 00426c85
        ;   Label: LAB_00426c85
    FLDZ                                ; 00426c8b
    FCOMPP                              ; 00426c8d
    FNSTSW AX                           ; 00426c8f
    SAHF                                ; 00426c91
    JA 0x0042696a                       ; 00426c92
        ;   XREF to: 0042696a (CONDITIONAL_JUMP)  ; LAB_0042696a
    FLD float ptr [EBX + 0xd0c4]        ; 00426c98
    FADD float ptr [EBP + 0x92]         ; 00426c9e
    FST float ptr [EBX + 0xd0c4]        ; 00426ca4
    FCOMP double ptr [0x005b7c7f]       ; 00426caa | DAT_005b7c7f
    FNSTSW AX                           ; 00426cb0
    SAHF                                ; 00426cb2
    JC 0x0042696a                       ; 00426cb3
        ;   XREF to: 0042696a (CONDITIONAL_JUMP)  ; LAB_0042696a
    LEA EAX,[EBP + 0xfffffbba]          ; 00426cb9
    PUSH EAX                            ; 00426cbf
    MOV EDI,0x461c3f9a                  ; 00426cc0
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 00426cc5
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    LEA EDX,[EBP + 0xfffffbba]          ; 00426cca
    ADD ESP,0x4                         ; 00426cd0
    MOV dword ptr [EBP + 0xfffffbbe],EDI ; 00426cd3
    MOV dword ptr [EBP + 0xfffffbee],EBX ; 00426cd9
    MOV dword ptr [EBP + 0xfffffbf2],EBX ; 00426cdf
    PUSH EDX                            ; 00426ce5
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426ce6
    PUSH EBX                            ; 00426cec
    CALL dword ptr [EAX + 0x108]        ; 00426ced
    ADD ESP,0x8                         ; 00426cf3
    MOV dword ptr [EBX + 0xd0c4],0xbf800000 ; 00426cf6
    JMP 0x0042696a                      ; 00426d00
        ;   XREF to: 0042696a (UNCONDITIONAL_JUMP)  ; LAB_0042696a
    PUSH 0x1                            ; 00426d05
        ;   Label: LAB_00426d05
    PUSH 0x0                            ; 00426d07
    LEA EAX,[EBX + 0x158]               ; 00426d09
    PUSH EAX                            ; 00426d0f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00426d10
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00426d15
    PUSH EBX                            ; 00426d18
    MOV EAX,0x5b7ba5                    ; 00426d19 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00426d1e | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005f1690]                ; 00426d1f | g_CConsolePtr
    PUSH EAX                            ; 00426d24 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00426d25
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00426d2a
    JMP 0x004269b6                      ; 00426d2d
        ;   XREF to: 004269b6 (UNCONDITIONAL_JUMP)  ; LAB_004269b6
    JBE 0x004269ad                      ; 00426d32
        ;   XREF to: 004269ad (CONDITIONAL_JUMP)  ; LAB_004269ad
        ;   Label: LAB_00426d32
    CMP EAX,0x3                         ; 00426d38
    JZ 0x00426d05                       ; 00426d3b
        ;   XREF to: 00426d05 (CONDITIONAL_JUMP)  ; LAB_00426d05
    PUSH 0x1                            ; 00426d3d
        ;   Label: LAB_00426d3d
    PUSH 0x2                            ; 00426d3f
    PUSH 0x0                            ; 00426d41
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00426d43
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00426d48
    PUSH EAX                            ; 00426d4b
    LEA EAX,[EBX + 0x158]               ; 00426d4c
    PUSH EAX                            ; 00426d52
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00426d53
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00426d58
    JMP 0x004269b6                      ; 00426d5b
        ;   XREF to: 004269b6 (UNCONDITIONAL_JUMP)  ; LAB_004269b6
    MOV EDI,dword ptr [EBX + 0xcdd0]    ; 00426d60
        ;   Label: caseD_16
    TEST EDI,EDI                        ; 00426d66
    JNZ 0x00426df1                      ; 00426d68
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    CMP dword ptr [EBX + 0xdc],0x0      ; 00426d6e
    JNZ 0x00426df1                      ; 00426d75
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EDI                            ; 00426d77
    PUSH ESI                            ; 00426d78
    LEA ESI,[EBP + 0xfffffe56]          ; 00426d79
    LEA EDI,[EBP + 0xfffffe4a]          ; 00426d7f
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 00426d85
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 00426d8a
    LEA EAX,[EBP + 0xfffffe4a]          ; 00426d8d
    LEA ESI,[EBP + 0xfffffe56]          ; 00426d93
    PUSH EAX                            ; 00426d99
    MOVSD ES:EDI,ESI                    ; 00426d9a
    MOVSD ES:EDI,ESI                    ; 00426d9b
    MOVSD ES:EDI,ESI                    ; 00426d9c
    PUSH EBX                            ; 00426d9d
    LEA ESI,[EBP + 0xffffff5e]          ; 00426d9e
    CALL core_actor.cpp_FUN_00408b80    ; 00426da4
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00426da9
    PUSH 0x0                            ; 00426dac
    LEA EAX,[EBP + 0xfffffe3e]          ; 00426dae
    LEA EDI,[EBP + 0xfffffe3e]          ; 00426db4
    PUSH EAX                            ; 00426dba
    MOV EDX,dword ptr [0x005fed24]      ; 00426dbb | g_CGorePtr
    LEA ESI,[EBP + 0xffffff5e]          ; 00426dc1
    PUSH EDX                            ; 00426dc7
    MOVSD ES:EDI,ESI                    ; 00426dc8
    MOVSD ES:EDI,ESI                    ; 00426dc9
    MOVSD ES:EDI,ESI                    ; 00426dca
    CALL core_gore.cpp_FUN_004cec40     ; 00426dcb
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00426dd0
    PUSH 0x5b7bcf                       ; 00426dd3 | = "CarvedDead"
    MOV ECX,dword ptr [0x005fba60]      ; 00426dd8 | DAT_005fba60
    PUSH ECX                            ; 00426dde
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00426ddf
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00426de9
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00426dee
    FLD float ptr [EBP + 0x56]          ; 00426df1
        ;   Label: caseD_d
    FLDZ                                ; 00426df4
    FCOMPP                              ; 00426df6
    FNSTSW AX                           ; 00426df8
    SAHF                                ; 00426dfa
    JA 0x004269b6                       ; 00426dfb
        ;   XREF to: 004269b6 (CONDITIONAL_JUMP)  ; LAB_004269b6
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00426e01
    JZ 0x004269b6                       ; 00426e08
        ;   XREF to: 004269b6 (CONDITIONAL_JUMP)  ; LAB_004269b6
    FLD float ptr [EBP + 0x4a]          ; 00426e0e
    FMUL float ptr [EBX + 0xcdcc]       ; 00426e11
    FLD float ptr [EBP + 0x92]          ; 00426e17
    FLD ST0                             ; 00426e1d
    FMUL float ptr [EBX + 0xcdcc]       ; 00426e1f
    FXCH ST2                            ; 00426e25
    FMULP                               ; 00426e27
    SUB ESP,0x4                         ; 00426e29
    FSTP float ptr [EBX + 0x2524]       ; 00426e2c
    FSTP float ptr [ESP]                ; 00426e32
    PUSH EBX                            ; 00426e35
    CALL core_charactr.cpp_FUN_00434850 ; 00426e36
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00426e3b
    MOV EAX,dword ptr [EBP + 0x56]      ; 00426e3e
    PUSH 0x3f490fdb                     ; 00426e41
    XOR ECX,ECX                         ; 00426e46
    PUSH 0x40400000                     ; 00426e48
    MOV dword ptr [EBP + 0xfffffd12],ECX ; 00426e4d
    MOV dword ptr [EBP + 0xfffffd1a],EAX ; 00426e53
    LEA EAX,[EBP + 0xfffffd12]          ; 00426e59
    MOV dword ptr [EBP + 0xfffffd16],ECX ; 00426e5f
    PUSH EAX                            ; 00426e65
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00426e66
    PUSH EAX                            ; 00426e6c
    MOV EDX,dword ptr [EAX + 0x154]     ; 00426e6d
    CALL dword ptr [EDX + 0xc4]         ; 00426e73
    ADD ESP,0x4                         ; 00426e79
    PUSH EAX                            ; 00426e7c
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00426e7d
    ADD EAX,0x20                        ; 00426e83
    PUSH EAX                            ; 00426e86
    PUSH EBX                            ; 00426e87
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00426e88
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00426e8d
    CMP EAX,0x1                         ; 00426e90
    JZ 0x004269b6                       ; 00426e93
        ;   XREF to: 004269b6 (CONDITIONAL_JUMP)  ; LAB_004269b6
    PUSH EBX                            ; 00426e99
    PUSH 0x5b7c65                       ; 00426e9a | = "%s giving up attack\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00426e9f | g_CConsolePtr
    PUSH EDI                            ; 00426ea5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00426ea6
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00426eab
    PUSH EBX                            ; 00426eae
    CALL core_carved.cpp_FUN_00429090   ; 00426eaf
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00426eb4
    MOV dword ptr [EBX + 0x2508],0x0    ; 00426eb7
    JMP 0x004269b6                      ; 00426ec1
        ;   XREF to: 004269b6 (UNCONDITIONAL_JUMP)  ; LAB_004269b6
    FLD float ptr [EBP + 0x92]          ; 00426ec6
        ;   Label: caseD_0
    FMUL double ptr [0x005b7caf]        ; 00426ecc | DAT_005b7caf
    SUB ESP,0x4                         ; 00426ed2
    FSTP float ptr [ESP]                ; 00426ed5
    CALL core_actor.cpp_FUN_0040cf40    ; 00426ed8
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00426edd
    TEST EAX,EAX                        ; 00426ee0
    JNZ 0x00426f7b                      ; 00426ee2
        ;   XREF to: 00426f7b (CONDITIONAL_JUMP)  ; LAB_00426f7b
    PUSH dword ptr [EBP + 0x92]         ; 00426ee8
    PUSH EBX                            ; 00426eee
    CALL core_enemy.cpp_FUN_00489ff0    ; 00426eef
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00426ef4
    TEST EAX,EAX                        ; 00426ef7
    JZ 0x00426f04                       ; 00426ef9
        ;   XREF to: 00426f04 (CONDITIONAL_JUMP)  ; LAB_00426f04
    PUSH EBX                            ; 00426efb
    CALL core_carved.cpp_FUN_00429090   ; 00426efc
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00426f01
    PUSH dword ptr [EBP + 0x92]         ; 00426f04
        ;   Label: LAB_00426f04
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426f0a
    PUSH EBX                            ; 00426f10
    CALL dword ptr [EAX + 0x144]        ; 00426f11
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00426f17
    ADD ESP,0x8                         ; 00426f1d
    TEST ECX,ECX                        ; 00426f20
    JZ 0x00426f9e                       ; 00426f22
        ;   XREF to: 00426f9e (CONDITIONAL_JUMP)  ; LAB_00426f9e
    CMP dword ptr [EBX + 0xcde4],0x0    ; 00426f24
        ;   Label: LAB_00426f24
    JZ 0x00426df1                       ; 00426f2b
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 00426f31
    CALL core_carved.cpp_FUN_00429090   ; 00426f32
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00426f37
    MOV EDI,dword ptr [EBX + 0xd0cc]    ; 00426f3a
    PUSH EDI                            ; 00426f40
    CALL sound_sndmain.cpp_FUN_00556700 ; 00426f41
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00426f46
    TEST EAX,EAX                        ; 00426f49
    JNZ 0x00426df1                      ; 00426f4b
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    CMP dword ptr [EBX + 0xd074],0x0    ; 00426f51
    JZ 0x00426fe8                       ; 00426f58
        ;   XREF to: 00426fe8 (CONDITIONAL_JUMP)  ; LAB_00426fe8
    PUSH 0x5b7bda                       ; 00426f5e | = "demn_chase_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426f63
    PUSH EBX                            ; 00426f69
    CALL dword ptr [EAX + 0x2c]         ; 00426f6a
    ADD ESP,0x8                         ; 00426f6d
    MOV dword ptr [EBX + 0xd0cc],EAX    ; 00426f70
    JMP 0x00426df1                      ; 00426f76
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00426f7b
        ;   Label: LAB_00426f7b
    PUSH 0x2                            ; 00426f7d
    PUSH 0x0                            ; 00426f7f
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00426f81
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00426f86
    PUSH EAX                            ; 00426f89
    LEA EAX,[EBX + 0x158]               ; 00426f8a
    PUSH EAX                            ; 00426f90
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00426f91
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00426f96
    JMP 0x00426df1                      ; 00426f99
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,[0x01d5ba14]                ; 00426f9e | DAT_01d5ba14
        ;   Label: LAB_00426f9e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00426fa3
    PUSH EAX                            ; 00426faa
    MOV EDX,dword ptr [EAX + 0x154]     ; 00426fab
    CALL dword ptr [EDX + 0x10c]        ; 00426fb1
    ADD ESP,0x4                         ; 00426fb7
    TEST EAX,EAX                        ; 00426fba
    JZ 0x00426df1                       ; 00426fbc
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,[0x005fe9dc]                ; 00426fc2 | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00426fc7 | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 00426fd1 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00426fd6
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00426fdd
    JMP 0x00426f24                      ; 00426fe3
        ;   XREF to: 00426f24 (UNCONDITIONAL_JUMP)  ; LAB_00426f24
    PUSH 0x5b7bed                       ; 00426fe8 | = "demn_chase_???.wav"
        ;   Label: LAB_00426fe8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00426fed
    PUSH EBX                            ; 00426ff3
    CALL dword ptr [EAX + 0x2c]         ; 00426ff4
    ADD ESP,0x8                         ; 00426ff7
    MOV dword ptr [EBX + 0xd0cc],EAX    ; 00426ffa
    JMP 0x00426df1                      ; 00427000
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH dword ptr [EBP + 0x92]         ; 00427005
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042700b
    PUSH EBX                            ; 00427011
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00427012
    CALL dword ptr [EAX + 0x144]        ; 00427018
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0042701e
    ADD ESP,0x8                         ; 00427024
    TEST EAX,EAX                        ; 00427027
    JNZ 0x0042706c                      ; 00427029
        ;   XREF to: 0042706c (CONDITIONAL_JUMP)  ; LAB_0042706c
    MOV EAX,[0x01d5ba14]                ; 0042702b | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00427030
    PUSH EAX                            ; 00427037
    MOV EDX,dword ptr [EAX + 0x154]     ; 00427038
    CALL dword ptr [EDX + 0x10c]        ; 0042703e
    ADD ESP,0x4                         ; 00427044
    TEST EAX,EAX                        ; 00427047
    JZ 0x0042706c                       ; 00427049
        ;   XREF to: 0042706c (CONDITIONAL_JUMP)  ; LAB_0042706c
    MOV EAX,[0x005fe9dc]                ; 0042704b | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00427050 | g_CGameInstance.field580_0x244
    MOV EAX,[0x01d5ba14]                ; 0042705a | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0042705f
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00427066
    CMP dword ptr [EBX + 0xcde4],0x0    ; 0042706c
        ;   Label: LAB_0042706c
    JZ 0x004270bf                       ; 00427073
        ;   XREF to: 004270bf (CONDITIONAL_JUMP)  ; LAB_004270bf
    TEST ESI,ESI                        ; 00427075
    JNZ 0x004270ff                      ; 00427077
        ;   XREF to: 004270ff (CONDITIONAL_JUMP)  ; LAB_004270ff
    MOV EAX,dword ptr [EBX + 0xd0cc]    ; 0042707d
    PUSH EAX                            ; 00427083
    CALL sound_sndmain.cpp_FUN_00556700 ; 00427084
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00427089
    TEST EAX,EAX                        ; 0042708c
    JNZ 0x004270b1                      ; 0042708e
        ;   XREF to: 004270b1 (CONDITIONAL_JUMP)  ; LAB_004270b1
    CMP dword ptr [EBX + 0xd074],0x0    ; 00427090
    JZ 0x004270f8                       ; 00427097
        ;   XREF to: 004270f8 (CONDITIONAL_JUMP)  ; LAB_004270f8
    PUSH 0x5b7c00                       ; 00427099 | = "demn_chase_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042709e
        ;   Label: LAB_0042709e
    PUSH EBX                            ; 004270a4
    CALL dword ptr [EAX + 0x2c]         ; 004270a5
    ADD ESP,0x8                         ; 004270a8
    MOV dword ptr [EBX + 0xd0cc],EAX    ; 004270ab
    PUSH EBX                            ; 004270b1
        ;   Label: LAB_004270b1
    CALL core_carved.cpp_FUN_00429090   ; 004270b2
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 004270b7
    JMP 0x00426df1                      ; 004270ba
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH dword ptr [EBP + 0x92]         ; 004270bf
        ;   Label: LAB_004270bf
    PUSH EBX                            ; 004270c5
    CALL core_enemy.cpp_FUN_00489ff0    ; 004270c6
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004270cb
    TEST EAX,EAX                        ; 004270ce
    JNZ 0x00426df1                      ; 004270d0
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 004270d6
    PUSH 0x2                            ; 004270d8
    PUSH EAX                            ; 004270da
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004270db
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004270e0
    PUSH EAX                            ; 004270e3
    LEA EAX,[EBX + 0x158]               ; 004270e4
    PUSH EAX                            ; 004270ea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004270eb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004270f0
    JMP 0x00426df1                      ; 004270f3
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x5b7c13                       ; 004270f8 | = "demn_chase_???.wav"
        ;   Label: LAB_004270f8
    JMP 0x0042709e                      ; 004270fd
        ;   XREF to: 0042709e (UNCONDITIONAL_JUMP)  ; LAB_0042709e
    PUSH 0x32                           ; 004270ff
        ;   Label: LAB_004270ff
    PUSH 0x0                            ; 00427101
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00427103
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00427108
    CMP EAX,0x1                         ; 0042710b
    JNZ 0x00427119                      ; 0042710e
        ;   XREF to: 00427119 (CONDITIONAL_JUMP)  ; LAB_00427119
    PUSH EBX                            ; 00427110
    CALL core_carved.cpp_FUN_00429090   ; 00427111
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00427116
    MOV EAX,dword ptr [EBX + 0xd0a8]    ; 00427119
        ;   Label: LAB_00427119
    XOR ECX,ECX                         ; 0042711f
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00427121
    MOV dword ptr [EBP + 0x52],ECX      ; 00427128
    TEST ESI,ESI                        ; 0042712b
    JZ 0x00427136                       ; 0042712d
        ;   XREF to: 00427136 (CONDITIONAL_JUMP)  ; LAB_00427136
    MOV dword ptr [EBP + 0x52],0x1      ; 0042712f
    MOV EAX,dword ptr [EBX + 0xd0b0]    ; 00427136
        ;   Label: LAB_00427136
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042713c
    JZ 0x00427149                       ; 00427144
        ;   XREF to: 00427149 (CONDITIONAL_JUMP)  ; LAB_00427149
    INC dword ptr [EBP + 0x52]          ; 00427146
    PUSH dword ptr [EBP + 0x92]         ; 00427149
        ;   Label: LAB_00427149
    PUSH EBX                            ; 0042714f
    CALL core_carved.cpp_FUN_00427bc0   ; 00427150
        ;   XREF to: 00427bc0 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00427bc0()
    ADD ESP,0x8                         ; 00427155
    TEST EAX,EAX                        ; 00427158
    JNZ 0x00426df1                      ; 0042715a
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00427160
    MOV EAX,[0x005dcf48]                ; 00427162 | DAT_005dcf48
    PUSH EBX                            ; 00427167
    MOV dword ptr [EBP + 0x32],EAX      ; 00427168
    CALL core_carved.cpp_FUN_00428520   ; 0042716b
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    ADD ESP,0x8                         ; 00427170
    MOV dword ptr [EBP + 0x3a],EAX      ; 00427173
    TEST EAX,EAX                        ; 00427176
    JL 0x00427247                       ; 00427178
        ;   XREF to: 00427247 (CONDITIONAL_JUMP)  ; LAB_00427247
    SHL EAX,0x3                         ; 0042717e
    MOV EDX,EAX                         ; 00427181
    SHL EAX,0x4                         ; 00427183
    SUB EAX,EDX                         ; 00427186
    ADD EAX,EBX                         ; 00427188
    MOV ESI,dword ptr [EAX + 0x25b0]    ; 0042718a
    TEST ESI,ESI                        ; 00427190
    JZ 0x00427247                       ; 00427192
        ;   XREF to: 00427247 (CONDITIONAL_JUMP)  ; LAB_00427247
    CMP dword ptr [EBX + 0xd068],0x1    ; 00427198
    JNZ 0x00427247                      ; 0042719f
        ;   XREF to: 00427247 (CONDITIONAL_JUMP)  ; LAB_00427247
    MOV EDX,0x3f800000                  ; 004271a5
    MOV EAX,ESI                         ; 004271aa
    MOV dword ptr [EBP + 0x36],EDX      ; 004271ac
    TEST ESI,ESI                        ; 004271af
    JZ 0x00427241                       ; 004271b1
        ;   XREF to: 00427241 (CONDITIONAL_JUMP)  ; LAB_00427241
    PUSH ESI                            ; 004271b7
    MOV EDX,dword ptr [ESI + 0x154]     ; 004271b8
    LEA ESI,[EBP + 0xfffffc52]          ; 004271be
    LEA EDI,[EBP + 0xfffffc82]          ; 004271c4
    CALL dword ptr [EDX + 0x1c]         ; 004271ca
    MOV ECX,0x6                         ; 004271cd
    LEA ESI,[EBP + 0xfffffc52]          ; 004271d2
    LEA EAX,[EBP + 0xfffffe86]          ; 004271d8
    ADD ESP,0x4                         ; 004271de
    MOVSD.REP ES:EDI,ESI                ; 004271e1
    PUSH EAX                            ; 004271e3
    LEA ESI,[EBP + 0xfffffc82]          ; 004271e4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 004271ea
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 004271ef
    FSUB float ptr [EBP + 0xfffffc82]   ; 004271f2
    FSTP float ptr [EBP + 0xfffffe86]   ; 004271f8
    FLD float ptr [ESI + 0x10]          ; 004271fe
    FSUB float ptr [EBP + 0xfffffc86]   ; 00427201
    LEA EDI,[EBP + 0xfffffdde]          ; 00427207
    FSTP float ptr [EBP + 0xfffffe8a]   ; 0042720d
    FLD float ptr [ESI + 0x14]          ; 00427213
    FSUB float ptr [EBP + 0xfffffc8a]   ; 00427216
    LEA ESI,[EBP + 0xfffffe86]          ; 0042721c
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00427222
    MOVSD ES:EDI,ESI                    ; 00427228
    MOVSD ES:EDI,ESI                    ; 00427229
    MOVSD ES:EDI,ESI                    ; 0042722a
    FLD float ptr [EBP + 0xfffffde6]    ; 0042722b
    FMUL double ptr [0x005b7c8f]        ; 00427231 | DAT_005b7c8f
    FLD1                                ; 00427237
    FADDP                               ; 00427239
    ADD ESP,0x4                         ; 0042723b
    FSTP float ptr [EBP + 0x36]         ; 0042723e
    MOV EAX,dword ptr [EBP + 0x36]      ; 00427241
        ;   Label: LAB_00427241
    MOV dword ptr [EBP + 0x32],EAX      ; 00427244
    PUSH 0x3f32b8c2                     ; 00427247
        ;   Label: LAB_00427247
    PUSH 0x3f666666                     ; 0042724c
    XOR ECX,ECX                         ; 00427251
    MOV EAX,dword ptr [EBP + 0x32]      ; 00427253
    MOV dword ptr [EBP + 0xfffffe62],ECX ; 00427256
    MOV dword ptr [EBP + 0xfffffe6a],EAX ; 0042725c
    LEA EAX,[EBP + 0xfffffe62]          ; 00427262
    MOV dword ptr [EBP + 0xfffffe66],ECX ; 00427268
    PUSH EAX                            ; 0042726e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0042726f
    PUSH EAX                            ; 00427275
    MOV EDX,dword ptr [EAX + 0x154]     ; 00427276
    CALL dword ptr [EDX + 0xc4]         ; 0042727c
    ADD ESP,0x4                         ; 00427282
    PUSH EAX                            ; 00427285
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00427286
    ADD EAX,0x20                        ; 0042728c
    PUSH EAX                            ; 0042728f
    PUSH EBX                            ; 00427290
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00427291
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 00427296
    ADD ESP,0x18                        ; 0042729c
    MOV dword ptr [EBP + 0x4e],EDX      ; 0042729f
    TEST EAX,EAX                        ; 004272a2
    JL 0x0042733f                       ; 004272a4
        ;   XREF to: 0042733f (CONDITIONAL_JUMP)  ; LAB_0042733f
    JLE 0x00427381                      ; 004272aa
        ;   XREF to: 00427381 (CONDITIONAL_JUMP)  ; LAB_00427381
    CMP dword ptr [EBP + 0x52],0x0      ; 004272b0
    JLE 0x00426df1                      ; 004272b4
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    FLD float ptr [EBX + 0xcde0]        ; 004272ba
    FLDZ                                ; 004272c0
    FCOMPP                              ; 004272c2
    FNSTSW AX                           ; 004272c4
    SAHF                                ; 004272c6
    JC 0x00426df1                       ; 004272c7
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004272cd
    PUSH EAX                            ; 004272d3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004272d4
    CALL dword ptr [EDX + 0xf4]         ; 004272da
    ADD ESP,0x4                         ; 004272e0
    TEST EAX,EAX                        ; 004272e3
    JNZ 0x00426df1                      ; 004272e5
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004272eb
    PUSH EAX                            ; 004272f1
    MOV EDX,dword ptr [EAX + 0x154]     ; 004272f2
    CALL dword ptr [EDX + 0x10c]        ; 004272f8
    ADD ESP,0x4                         ; 004272fe
    TEST EAX,EAX                        ; 00427301
    JNZ 0x00427330                      ; 00427303
        ;   XREF to: 00427330 (CONDITIONAL_JUMP)  ; LAB_00427330
    MOV EAX,dword ptr [EBP + 0x3a]      ; 00427305
    TEST EAX,EAX                        ; 00427308
    JL 0x00427374                       ; 0042730a
        ;   XREF to: 00427374 (CONDITIONAL_JUMP)  ; LAB_00427374
    SHL EAX,0x3                         ; 0042730c
    MOV EDX,EAX                         ; 0042730f
    SHL EAX,0x4                         ; 00427311
    SUB EAX,EDX                         ; 00427314
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 00427316
    JZ 0x00427374                       ; 0042731e
        ;   XREF to: 00427374 (CONDITIONAL_JUMP)  ; LAB_00427374
    PUSH 0x1                            ; 00427320
    PUSH 0xb                            ; 00427322
    MOV ECX,dword ptr [EBP + 0x4e]      ; 00427324
    PUSH ECX                            ; 00427327
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00427328
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00427328
    ADD ESP,0xc                         ; 0042732d
    MOV dword ptr [EBX + 0xcde0],0x3f4ccccd ; 00427330
        ;   Label: LAB_00427330
    JMP 0x00426df1                      ; 0042733a
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042733f
        ;   Label: LAB_0042733f
    PUSH 0x5b7c26                       ; 00427340 | = "%s gave up chase - I'm confused\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00427345 | g_CConsolePtr
    PUSH ESI                            ; 0042734b | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0042734c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00427351
    PUSH 0x1                            ; 00427354
    PUSH 0x2                            ; 00427356
    PUSH 0x0                            ; 00427358
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0042735a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042735f
    PUSH EAX                            ; 00427362
    MOV EDI,dword ptr [EBP + 0x4e]      ; 00427363
    PUSH EDI                            ; 00427366
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00427367
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042736c
    JMP 0x00426df1                      ; 0042736f
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH 0x1                            ; 00427374
        ;   Label: LAB_00427374
    PUSH 0xc                            ; 00427376
    LEA EAX,[EBX + 0x158]               ; 00427378
    PUSH EAX                            ; 0042737e
    JMP 0x00427328                      ; 0042737f
        ;   XREF to: 00427328 (UNCONDITIONAL_JUMP)  ; LAB_00427328
    MOV EDI,dword ptr [EBX + 0xd068]    ; 00427381
        ;   Label: LAB_00427381
    PUSH EDI                            ; 00427387
    PUSH EBX                            ; 00427388
    LEA ESI,[EBP + 0xfffffeda]          ; 00427389
    CALL core_carved.cpp_FUN_00428520   ; 0042738f
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    MOV dword ptr [EBP + 0x3e],EAX      ; 00427394
    LEA EAX,[EBX + 0x20]                ; 00427397
    LEA EDI,[EBP + 0xffffff76]          ; 0042739a
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 004273a0
    FLD float ptr [EAX]                 ; 004273a6
    FLD float ptr [EAX + 0x4]           ; 004273a8
    FLD float ptr [EAX + 0x8]           ; 004273ab
    FXCH ST2                            ; 004273ae
    FSUB float ptr [EDX + 0x20]         ; 004273b0
    FXCH                                ; 004273b3
    FSUB float ptr [EDX + 0x24]         ; 004273b5
    FXCH ST2                            ; 004273b8
    FSUB float ptr [EDX + 0x28]         ; 004273ba
    FXCH                                ; 004273bd
    FSTP float ptr [EBP + 0xfffffeda]   ; 004273bf
    FXCH                                ; 004273c5
    FSTP float ptr [EBP + 0xfffffede]   ; 004273c7
    FSTP float ptr [EBP + 0xfffffee2]   ; 004273cd
    MOVSD ES:EDI,ESI                    ; 004273d3
    MOVSD ES:EDI,ESI                    ; 004273d4
    MOVSD ES:EDI,ESI                    ; 004273d5
    FLD float ptr [EBP + 0xffffff7a]    ; 004273d6
    FMUL ST0                            ; 004273dc
    FLD float ptr [EBP + 0xffffff76]    ; 004273de
    FMUL ST0                            ; 004273e4
    FADDP                               ; 004273e6
    FLD float ptr [EBP + 0xffffff7e]    ; 004273e8
    FMUL ST0                            ; 004273ee
    FADDP                               ; 004273f0
    FSQRT                               ; 004273f2
    ADD ESP,0x8                         ; 004273f4
    ADD EDX,0x20                        ; 004273f7
    FCOMP double ptr [0x005b7c9f]       ; 004273fa | DAT_005b7c9f
    FNSTSW AX                           ; 00427400
    SAHF                                ; 00427402
    JNC 0x00426df1                      ; 00427403
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EDX                            ; 00427409
    PUSH EBX                            ; 0042740a
    LEA ESI,[EBP + 0xfffffe32]          ; 0042740b
    LEA EDI,[EBP + 0xffffff0a]          ; 00427411
    CALL core_actor.cpp_FUN_00408bf0    ; 00427417
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[EBP + 0xfffffe32]          ; 0042741c
    LEA EAX,[EBP + 0xffffff0a]          ; 00427422
    ADD ESP,0x8                         ; 00427428
    MOVSD ES:EDI,ESI                    ; 0042742b
    MOVSD ES:EDI,ESI                    ; 0042742c
    MOVSD ES:EDI,ESI                    ; 0042742d
    PUSH EAX                            ; 0042742e
    LEA ESI,[EBP + 0xfffffec2]          ; 0042742f
    LEA EDI,[EBP + 0xfffffe26]          ; 00427435
    CALL core_vecdir.cpp_FUN_00576250   ; 0042743b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[EBP + 0xfffffec2]          ; 00427440
    MOVSD ES:EDI,ESI                    ; 00427446
    MOVSD ES:EDI,ESI                    ; 00427447
    MOVSD ES:EDI,ESI                    ; 00427448
    FLD float ptr [EBP + 0xfffffe2a]    ; 00427449
    FABS                                ; 0042744f
    ADD ESP,0x4                         ; 00427451
    FCOMP double ptr [0x005b7ca7]       ; 00427454 | DAT_005b7ca7
    FNSTSW AX                           ; 0042745a
    SAHF                                ; 0042745c
    JNC 0x00426df1                      ; 0042745d
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    CMP dword ptr [EBP + 0x3e],0x0      ; 00427463
    JL 0x00426df1                       ; 00427467
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBX + 0xd068]    ; 0042746d
    CMP EAX,0x2                         ; 00427473
    JC 0x00426df1                       ; 00427476
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    JBE 0x00426df1                      ; 0042747c
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    CMP EAX,0x3                         ; 00427482
    JNZ 0x00426df1                      ; 00427485
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0042748b
    SHL EAX,0x3                         ; 0042748e
    MOV EDX,EAX                         ; 00427491
    SHL EAX,0x4                         ; 00427493
    SUB EAX,EDX                         ; 00427496
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 00427498
    JZ 0x00426df1                       ; 004274a0
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 004274a6
    PUSH 0x5b7c47                       ; 004274a7 | = "%s tossing\n"
    MOV ECX,dword ptr [0x005f1690]      ; 004274ac | g_CConsolePtr
    PUSH ECX                            ; 004274b2 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 004274b3
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 004274b8
    PUSH 0x1                            ; 004274bb
    PUSH 0x1a                           ; 004274bd
    MOV ESI,dword ptr [EBP + 0x4e]      ; 004274bf
    PUSH ESI                            ; 004274c2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 004274c3
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004274c8
    JMP 0x00426df1                      ; 004274cb
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 004274d0
        ;   Label: caseD_c
    TEST ESI,ESI                        ; 004274d6
    JZ 0x00427596                       ; 004274d8
        ;   XREF to: 00427596 (CONDITIONAL_JUMP)  ; LAB_00427596
    PUSH ESI                            ; 004274de
    MOV EDX,dword ptr [ESI + 0x154]     ; 004274df
    CALL dword ptr [EDX + 0x10c]        ; 004274e5
    ADD ESP,0x4                         ; 004274eb
    TEST EAX,EAX                        ; 004274ee
    JG 0x00427596                       ; 004274f0
        ;   XREF to: 00427596 (CONDITIONAL_JUMP)  ; LAB_00427596
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004274f6
    PUSH EAX                            ; 004274fc
    MOV EDX,dword ptr [EAX + 0x154]     ; 004274fd
    CALL dword ptr [EDX + 0xf4]         ; 00427503
    ADD ESP,0x4                         ; 00427509
    TEST EAX,EAX                        ; 0042750c
    JNZ 0x004275a4                      ; 0042750e
        ;   XREF to: 004275a4 (CONDITIONAL_JUMP)  ; LAB_004275a4
    MOV EDI,0x40400000                  ; 00427514
    MOV EAX,[0x005dcf48]                ; 00427519 | DAT_005dcf48
    MOV dword ptr [EBP + 0x4a],EDI      ; 0042751e
    MOV dword ptr [EBP + 0x56],EAX      ; 00427521
    LEA EDI,[EBP + 0xfffffdc6]          ; 00427524
        ;   Label: LAB_00427524
    LEA EAX,[EBX + 0x20]                ; 0042752a
    LEA ESI,[EBP + 0xfffffd5a]          ; 0042752d
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00427533
    FLD float ptr [EAX]                 ; 00427539
    FLD float ptr [EAX + 0x4]           ; 0042753b
    FLD float ptr [EAX + 0x8]           ; 0042753e
    FXCH ST2                            ; 00427541
    FSUB float ptr [EDX + 0x20]         ; 00427543
    FXCH                                ; 00427546
    FSUB float ptr [EDX + 0x24]         ; 00427548
    FXCH ST2                            ; 0042754b
    FSUB float ptr [EDX + 0x28]         ; 0042754d
    FXCH                                ; 00427550
    FSTP float ptr [EBP + 0xfffffd5a]   ; 00427552
    FXCH                                ; 00427558
    FSTP float ptr [EBP + 0xfffffd5e]   ; 0042755a
    FSTP float ptr [EBP + 0xfffffd62]   ; 00427560
    MOVSD ES:EDI,ESI                    ; 00427566
    MOVSD ES:EDI,ESI                    ; 00427567
    MOVSD ES:EDI,ESI                    ; 00427568
    FLD float ptr [EBP + 0xfffffdca]    ; 00427569
    FMUL ST0                            ; 0042756f
    FLD float ptr [EBP + 0xfffffdc6]    ; 00427571
    FMUL ST0                            ; 00427577
    FADDP                               ; 00427579
    FLD float ptr [EBP + 0xfffffdce]    ; 0042757b
    FMUL ST0                            ; 00427581
    FADDP                               ; 00427583
    FSQRT                               ; 00427585
    FCOMP double ptr [0x005b7c87]       ; 00427587 | DAT_005b7c87
    FNSTSW AX                           ; 0042758d
    SAHF                                ; 0042758f
    JBE 0x00426df1                      ; 00427590
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 00427596
        ;   Label: LAB_00427596
    CALL core_carved.cpp_FUN_00429090   ; 00427597
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 0042759c
    JMP 0x00426df1                      ; 0042759f
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    CMP EAX,EBX                         ; 004275a4
        ;   Label: LAB_004275a4
    JZ 0x00427524                       ; 004275a6
        ;   XREF to: 00427524 (CONDITIONAL_JUMP)  ; LAB_00427524
    PUSH EBX                            ; 004275ac
    CALL core_carved.cpp_FUN_00429090   ; 004275ad
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 004275b2
    JMP 0x00427524                      ; 004275b5
        ;   XREF to: 00427524 (UNCONDITIONAL_JUMP)  ; LAB_00427524
    CMP dword ptr [EBX + 0xcde4],0x0    ; 004275ba
        ;   Label: caseD_b
    JZ 0x00427596                       ; 004275c1
        ;   XREF to: 00427596 (CONDITIONAL_JUMP)  ; LAB_00427596
    PUSH 0x1                            ; 004275c3
    PUSH EBX                            ; 004275c5
    CALL core_carved.cpp_FUN_00428520   ; 004275c6
        ;   XREF to: 00428520 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428520()
    MOV ESI,EAX                         ; 004275cb
    ADD ESP,0x8                         ; 004275cd
    TEST EAX,EAX                        ; 004275d0
    JL 0x0042771e                       ; 004275d2
        ;   XREF to: 0042771e (CONDITIONAL_JUMP)  ; LAB_0042771e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004275d8
    PUSH EAX                            ; 004275de
    MOV EDX,dword ptr [EAX + 0x154]     ; 004275df
    CALL dword ptr [EDX + 0x10c]        ; 004275e5
    ADD ESP,0x4                         ; 004275eb
    TEST EAX,EAX                        ; 004275ee
    JG 0x0042771e                       ; 004275f0
        ;   XREF to: 0042771e (CONDITIONAL_JUMP)  ; LAB_0042771e
    SHL ESI,0x3                         ; 004275f6
    MOV EAX,ESI                         ; 004275f9
    SHL EAX,0x4                         ; 004275fb
    SUB EAX,ESI                         ; 004275fe
    LEA ESI,[EBX + EAX*0x1]             ; 00427600
    CMP dword ptr [ESI + 0x25b0],0x0    ; 00427603
    JZ 0x0042771e                       ; 0042760a
        ;   XREF to: 0042771e (CONDITIONAL_JUMP)  ; LAB_0042771e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00427610
    PUSH EAX                            ; 00427616
    MOV EDX,dword ptr [EAX + 0x154]     ; 00427617
    CALL dword ptr [EDX + 0xf4]         ; 0042761d
    ADD ESP,0x4                         ; 00427623
    TEST EAX,EAX                        ; 00427626
    JNZ 0x0042771e                      ; 00427628
        ;   XREF to: 0042771e (CONDITIONAL_JUMP)  ; LAB_0042771e
    MOV ECX,0x3f800000                  ; 0042762e
    MOV EAX,dword ptr [ESI + 0x25b0]    ; 00427633
    MOV dword ptr [EBP + 0x46],ECX      ; 00427639
    TEST EAX,EAX                        ; 0042763c
    JZ 0x004276ce                       ; 0042763e
        ;   XREF to: 004276ce (CONDITIONAL_JUMP)  ; LAB_004276ce
    PUSH EAX                            ; 00427644
    MOV EDX,dword ptr [EAX + 0x154]     ; 00427645
    LEA ESI,[EBP + 0xfffffcca]          ; 0042764b
    LEA EDI,[EBP + 0xfffffc6a]          ; 00427651
    CALL dword ptr [EDX + 0x1c]         ; 00427657
    MOV ECX,0x6                         ; 0042765a
    LEA ESI,[EBP + 0xfffffcca]          ; 0042765f
    LEA EAX,[EBP + 0xfffffd42]          ; 00427665
    ADD ESP,0x4                         ; 0042766b
    MOVSD.REP ES:EDI,ESI                ; 0042766e
    PUSH EAX                            ; 00427670
    LEA ESI,[EBP + 0xfffffc6a]          ; 00427671
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d220 ; 00427677
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d220(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 0042767c
    FSUB float ptr [EBP + 0xfffffc6a]   ; 0042767f
    FSTP float ptr [EBP + 0xfffffd42]   ; 00427685
    FLD float ptr [ESI + 0x10]          ; 0042768b
    FSUB float ptr [EBP + 0xfffffc6e]   ; 0042768e
    LEA EDI,[EBP + 0xfffffeb6]          ; 00427694
    FSTP float ptr [EBP + 0xfffffd46]   ; 0042769a
    FLD float ptr [ESI + 0x14]          ; 004276a0
    FSUB float ptr [EBP + 0xfffffc72]   ; 004276a3
    LEA ESI,[EBP + 0xfffffd42]          ; 004276a9
    FSTP float ptr [EBP + 0xfffffd4a]   ; 004276af
    MOVSD ES:EDI,ESI                    ; 004276b5
    MOVSD ES:EDI,ESI                    ; 004276b6
    MOVSD ES:EDI,ESI                    ; 004276b7
    FLD float ptr [EBP + 0xfffffebe]    ; 004276b8
    FMUL double ptr [0x005b7c8f]        ; 004276be | DAT_005b7c8f
    FLD1                                ; 004276c4
    FADDP                               ; 004276c6
    ADD ESP,0x4                         ; 004276c8
    FSTP float ptr [EBP + 0x46]         ; 004276cb
    MOV EAX,dword ptr [EBP + 0x46]      ; 004276ce
        ;   Label: LAB_004276ce
    MOV dword ptr [EBP + 0x56],EAX      ; 004276d1
    LEA EAX,[EBX + 0x158]               ; 004276d4
    PUSH EAX                            ; 004276da
    CALL core_motion.cpp_FUN_004fc930   ; 004276db
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    FLD1                                ; 004276e0
    MOV dword ptr [EBP + 0x76],EAX      ; 004276e2
    ADD ESP,0x4                         ; 004276e5
    MOV EAX,dword ptr [EBP + 0x76]      ; 004276e8
    MOV dword ptr [EBP + 0x2e],EAX      ; 004276eb
    FLD float ptr [EBP + 0x2e]          ; 004276ee
    FSTP double ptr [EBP + 0x6]         ; 004276f1
    FCOMP double ptr [EBP + 0x6]        ; 004276f4
    FNSTSW AX                           ; 004276f7
    SAHF                                ; 004276f9
    JA 0x00426df1                       ; 004276fa
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    FLD double ptr [EBP + 0x6]          ; 00427700
    FCOMP double ptr [0x005b7c97]       ; 00427703 | DAT_005b7c97
    FNSTSW AX                           ; 00427709
    SAHF                                ; 0042770b
    JA 0x00426df1                       ; 0042770c
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    MOV dword ptr [EBP + 0x42],0x1      ; 00427712
    JMP 0x00426df1                      ; 00427719
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    PUSH EBX                            ; 0042771e
        ;   Label: LAB_0042771e
    PUSH 0x5b7c53                       ; 0042771f | = "%s gave up swing\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00427724 | g_CConsolePtr
    PUSH EDI                            ; 0042772a | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0042772b
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00427730
    PUSH EBX                            ; 00427733
    CALL core_carved.cpp_FUN_00429090   ; 00427734
        ;   XREF to: 00429090 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00429090()
    ADD ESP,0x4                         ; 00427739
    JMP 0x00426df1                      ; 0042773c
        ;   XREF to: 00426df1 (UNCONDITIONAL_JUMP)  ; caseD_15
    MOV EDX,0xbf800000                  ; 00427741
        ;   Label: LAB_00427741
    MOV ECX,0x3e99999a                  ; 00427746
    PUSH ESI                            ; 0042774b
    MOV dword ptr [EBP + 0x56],EDX      ; 0042774c
    MOV dword ptr [EBP + 0x4a],ECX      ; 0042774f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00427752
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00427757
    ADD ESP,0x4                         ; 0042775a
    CMP EAX,0x16                        ; 0042775d
    JA 0x00426df1                       ; 00427760
        ;   XREF to: 00426df1 (CONDITIONAL_JUMP)  ; caseD_15
    JMP dword ptr [EAX*0x4 + 0x425d40]  ; 00427766 | caseD_2 | caseD_a | caseD_b
        ;   Label: switchD
    MOV ECX,dword ptr [EBX + 0xd0a0]    ; 0042776d
        ;   Label: LAB_0042776d
    PUSH 0x3f000000                     ; 00427773
    PUSH ECX                            ; 00427778
    JMP 0x00426c0f                      ; 00427779
        ;   XREF to: 00426c0f (UNCONDITIONAL_JUMP)  ; LAB_00426c0f

