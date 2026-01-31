; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004d2ea0(CGabriella *this_ptr,float delta_time)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined        Stack[-0x1dc]:1  local_1dc
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x130]:1  local_130
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x70]:1  local_70
; undefined8       Stack[-0x64]:8  local_64
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   void* switchdataD_004d2e8c = 004d400d
;   TerminatedCString s_s_confused_while_walking_0062ae13
;   TerminatedCString s_flashlit_wav_0062ae3d
;   TerminatedCString s_draw_f_wav_1_5_0062ae4a
;   TerminatedCString s_undraw_s_wav_7_0062ae5b
;   double DOUBLE_0062ae6d = 12.5663706140000
;   double DOUBLE_0062ae75 = 0.333333333333333
;   float FLOAT_0062ae7d = 0.5
;   double DOUBLE_0062ae85 = 3
;   double DOUBLE_0062ae8d = 5
;   double DOUBLE_0062ae95 = 0.785398163375000
;   double DOUBLE_0062ae9d = 3.14159265350000
;   double DOUBLE_0062aea5 = -1.57079632675000
;   float FLOAT_0062aead = 3.141593
;   double DOUBLE_0062aeb5 = 1.57079632675000
;   ... and 27 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_ammobox.cpp_CAmmoBox_FUN_00411690
;   core_boxactor.cpp_CBoxActor_FUN_00422390
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_cloth.cpp_FUN_0043ab80
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2ea0
        ;   Label: core_gabriela.cpp_CGabriella_process_FUN_004d2ea0
    PUSH ESI                            ; 004d2ea1
    PUSH EDI                            ; 004d2ea2
    PUSH EBP                            ; 004d2ea3
    MOV EBP,ESP                         ; 004d2ea4
    SUB ESP,0x1cc                       ; 004d2ea6
    SUB EBP,0x7a                        ; 004d2eac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004d2eaf
    PUSH dword ptr [EBP + 0x92]         ; 004d2eb5
    PUSH EBX                            ; 004d2ebb
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 004d2ebc
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d2ec1
    TEST EAX,EAX                        ; 004d2ec4
    JZ 0x004d3700                       ; 004d2ec6
        ;   XREF to: 004d3700 (CONDITIONAL_JUMP)  ; LAB_004d3700
    CMP dword ptr [EBX + 0xbe28],0x2    ; 004d2ecc
    JZ 0x004d3708                       ; 004d2ed3
        ;   XREF to: 004d3708 (CONDITIONAL_JUMP)  ; LAB_004d3708
    FLD float ptr [EBX + 0xbe24]        ; 004d2ed9
        ;   Label: LAB_004d2ed9
    FSUB float ptr [EBP + 0x92]         ; 004d2edf
    FST float ptr [EBX + 0xbe24]        ; 004d2ee5
    FLDZ                                ; 004d2eeb
    FCOMPP                              ; 004d2eed
    FNSTSW AX                           ; 004d2eef
    SAHF                                ; 004d2ef1
    JBE 0x004d2efe                      ; 004d2ef2
        ;   XREF to: 004d2efe (CONDITIONAL_JUMP)  ; LAB_004d2efe
    MOV dword ptr [EBX + 0xbe24],0x0    ; 004d2ef4
    LEA EAX,[EBP + 0xffffff7e]          ; 004d2efe
        ;   Label: LAB_004d2efe
    PUSH EAX                            ; 004d2f04
    PUSH EBX                            ; 004d2f05
    CALL core_gabriela.cpp_FUN_004d4cf0 ; 004d2f06
        ;   XREF to: 004d4cf0 (UNCONDITIONAL_CALL)  ; float * core_gabriela.cpp_FUN_004d4cf0()
    ADD ESP,0x8                         ; 004d2f0b
    PUSH EAX                            ; 004d2f0e
    LEA EAX,[EBP + 0xffffff06]          ; 004d2f0f
    PUSH EAX                            ; 004d2f15
    PUSH EBX                            ; 004d2f16
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d2f17
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d2f1c
    XOR ESI,ESI                         ; 004d2f1f
    LEA EAX,[EBX + 0x23ac]              ; 004d2f21
    PUSH dword ptr [EBP + 0x92]         ; 004d2f27
    MOV dword ptr [EAX + 0x8],0x0       ; 004d2f2d
    PUSH EBX                            ; 004d2f34
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d2f35
    MOV dword ptr [EAX + 0x4],EDX       ; 004d2f38
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d2f3b
    MOV dword ptr [EAX],EDX             ; 004d2f3e
    CALL core_gabriela.cpp_CGabriella_FUN_004d4890 ; 004d2f40
        ;   XREF to: 004d4890 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_CGabriella_FUN_004d4890(CGabriella * this_ptr)
    FLD float ptr [EBX + 0x243c]        ; 004d2f45
    FLDZ                                ; 004d2f4b
    ADD ESP,0x8                         ; 004d2f4d
    FCOMPP                              ; 004d2f50
    FNSTSW AX                           ; 004d2f52
    SAHF                                ; 004d2f54
    JC 0x004d2f5c                       ; 004d2f55
        ;   XREF to: 004d2f5c (CONDITIONAL_JUMP)  ; LAB_004d2f5c
    MOV ESI,0x1                         ; 004d2f57
    CMP dword ptr [EBX + 0x2598],0x0    ; 004d2f5c
        ;   Label: LAB_004d2f5c
    JZ 0x004d2f6a                       ; 004d2f63
        ;   XREF to: 004d2f6a (CONDITIONAL_JUMP)  ; LAB_004d2f6a
    MOV ESI,0x1                         ; 004d2f65
    CMP dword ptr [EBX + 0x1fba4],0x0   ; 004d2f6a
        ;   Label: LAB_004d2f6a
    JZ 0x004d2f78                       ; 004d2f71
        ;   XREF to: 004d2f78 (CONDITIONAL_JUMP)  ; LAB_004d2f78
    MOV ESI,0x1                         ; 004d2f73
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 004d2f78
        ;   Label: LAB_004d2f78
    JZ 0x004d2f86                       ; 004d2f7f
        ;   XREF to: 004d2f86 (CONDITIONAL_JUMP)  ; LAB_004d2f86
    MOV ESI,0x1                         ; 004d2f81
    PUSH 0x8                            ; 004d2f86
        ;   Label: LAB_004d2f86
    LEA EAX,[EBX + 0x158]               ; 004d2f88
    PUSH EAX                            ; 004d2f8e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d2f8f
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d2f94
    ADD ESP,0x8                         ; 004d2f97
    FLD float ptr [EBP + 0x76]          ; 004d2f9a
    FLDZ                                ; 004d2f9d
    FCOMPP                              ; 004d2f9f
    FNSTSW AX                           ; 004d2fa1
    SAHF                                ; 004d2fa3
    JNC 0x004d2fab                      ; 004d2fa4
        ;   XREF to: 004d2fab (CONDITIONAL_JUMP)  ; LAB_004d2fab
    MOV ESI,0x1                         ; 004d2fa6
    PUSH 0xb                            ; 004d2fab
        ;   Label: LAB_004d2fab
    LEA EAX,[EBX + 0x158]               ; 004d2fad
    PUSH EAX                            ; 004d2fb3
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d2fb4
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d2fb9
    ADD ESP,0x8                         ; 004d2fbc
    FLD float ptr [EBP + 0x76]          ; 004d2fbf
    FLDZ                                ; 004d2fc2
    FCOMPP                              ; 004d2fc4
    FNSTSW AX                           ; 004d2fc6
    SAHF                                ; 004d2fc8
    JNC 0x004d2fd0                      ; 004d2fc9
        ;   XREF to: 004d2fd0 (CONDITIONAL_JUMP)  ; LAB_004d2fd0
    MOV ESI,0x1                         ; 004d2fcb
    PUSH 0xc                            ; 004d2fd0
        ;   Label: LAB_004d2fd0
    LEA EAX,[EBX + 0x158]               ; 004d2fd2
    PUSH EAX                            ; 004d2fd8
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d2fd9
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d2fde
    ADD ESP,0x8                         ; 004d2fe1
    FLD float ptr [EBP + 0x76]          ; 004d2fe4
    FLDZ                                ; 004d2fe7
    FCOMPP                              ; 004d2fe9
    FNSTSW AX                           ; 004d2feb
    SAHF                                ; 004d2fed
    JNC 0x004d2ff5                      ; 004d2fee
        ;   XREF to: 004d2ff5 (CONDITIONAL_JUMP)  ; LAB_004d2ff5
    MOV ESI,0x1                         ; 004d2ff0
    PUSH 0x12                           ; 004d2ff5
        ;   Label: LAB_004d2ff5
    LEA EAX,[EBX + 0x158]               ; 004d2ff7
    PUSH EAX                            ; 004d2ffd
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d2ffe
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3003
    ADD ESP,0x8                         ; 004d3006
    FLD float ptr [EBP + 0x76]          ; 004d3009
    FLDZ                                ; 004d300c
    FCOMPP                              ; 004d300e
    FNSTSW AX                           ; 004d3010
    SAHF                                ; 004d3012
    JNC 0x004d301a                      ; 004d3013
        ;   XREF to: 004d301a (CONDITIONAL_JUMP)  ; LAB_004d301a
    MOV ESI,0x1                         ; 004d3015
    MOV dword ptr [EBX + 0x2438],0x0    ; 004d301a
        ;   Label: LAB_004d301a
    MOV ECX,dword ptr [EBX + 0x2410]    ; 004d3024
    XOR EDX,EDX                         ; 004d302a
    MOV dword ptr [EBX + 0x2434],0x0    ; 004d302c
    MOV dword ptr [EBP + 0x6a],EDX      ; 004d3036
    TEST ECX,ECX                        ; 004d3039
    JZ 0x004d3120                       ; 004d303b
        ;   XREF to: 004d3120 (CONDITIONAL_JUMP)  ; LAB_004d3120
    PUSH 0x1                            ; 004d3041
    LEA EDI,[EBX + 0x158]               ; 004d3043
    PUSH EDI                            ; 004d3049
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d304a
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d304f
    ADD ESP,0x8                         ; 004d3052
    FLD float ptr [EBP + 0x76]          ; 004d3055
    FMUL float ptr [0x02d7b808]         ; 004d3058 | FLOAT_02d7b808
    PUSH 0x2                            ; 004d305e
    FADD float ptr [EBX + 0x2434]       ; 004d3060
    PUSH EDI                            ; 004d3066
    FSTP float ptr [EBX + 0x2434]       ; 004d3067
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d306d
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3072
    ADD ESP,0x8                         ; 004d3075
    FLD float ptr [EBP + 0x76]          ; 004d3078
    FMUL float ptr [0x02d7b80c]         ; 004d307b | FLOAT_02d7b80c
    PUSH 0x3                            ; 004d3081
    FADD float ptr [EBX + 0x2434]       ; 004d3083
    PUSH EDI                            ; 004d3089
    FSTP float ptr [EBX + 0x2434]       ; 004d308a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d3090
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3095
    ADD ESP,0x8                         ; 004d3098
    FLD float ptr [EBP + 0x76]          ; 004d309b
    FMUL float ptr [0x02d7b810]         ; 004d309e | FLOAT_02d7b810
    PUSH 0x14                           ; 004d30a4
    FSUBR float ptr [EBX + 0x2434]      ; 004d30a6
    PUSH EDI                            ; 004d30ac
    FSTP float ptr [EBX + 0x2434]       ; 004d30ad
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d30b3
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d30b8
    ADD ESP,0x8                         ; 004d30bb
    FLD float ptr [EBP + 0x76]          ; 004d30be
    FMUL float ptr [0x0065e7e8]         ; 004d30c1 | FLOAT_0065e7e8
    PUSH 0x15                           ; 004d30c7
    FLDZ                                ; 004d30c9
    FSUBRP                              ; 004d30cb
    PUSH EDI                            ; 004d30cd
    FSTP float ptr [EBP + 0x6a]         ; 004d30ce
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d30d1
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    FLD float ptr [EBP + 0x92]          ; 004d30d6
    MOV dword ptr [EBP + 0x76],EAX      ; 004d30dc
    FMUL double ptr [0x0062ae6d]        ; 004d30df | DOUBLE_0062ae6d
    FLD float ptr [EBP + 0x76]          ; 004d30e5
    FMUL float ptr [0x0065e7e8]         ; 004d30e8 | FLOAT_0065e7e8
    ADD ESP,0x8                         ; 004d30ee
    MOV EAX,[0x0067b654]                ; 004d30f1 | g_CGamePtr
    FXCH                                ; 004d30f6
    FSTP float ptr [EBX + 0x2438]       ; 004d30f8
    FADD float ptr [EBP + 0x6a]         ; 004d30fe
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d3101 | DAT_02d81cc4
    FSTP float ptr [EBP + 0x6a]         ; 004d3107
    TEST EDI,EDI                        ; 004d310a
    JZ 0x004d3120                       ; 004d310c
        ;   XREF to: 004d3120 (CONDITIONAL_JUMP)  ; LAB_004d3120
    FLD float ptr [EBX + 0x2438]        ; 004d310e
    FMUL double ptr [0x0062ae75]        ; 004d3114 | DOUBLE_0062ae75
    FSTP float ptr [EBX + 0x2438]       ; 004d311a
    FLD float ptr [EBP + 0x92]          ; 004d3120
        ;   Label: LAB_004d3120
    FLD float ptr [EBX + 0x2434]        ; 004d3126
    FMUL ST1                            ; 004d312c
    FLD float ptr [EBP + 0x6a]          ; 004d312e
    FMULP ST2                           ; 004d3131
    MOV EAX,dword ptr [EBX + 0x1fbac]   ; 004d3133
    FXCH                                ; 004d3139
    FSTP float ptr [EBP + 0x6a]         ; 004d313b
    FSTP float ptr [EBX + 0x2434]       ; 004d313e
    TEST EAX,EAX                        ; 004d3144
    JZ 0x004d3723                       ; 004d3146
        ;   XREF to: 004d3723 (CONDITIONAL_JUMP)  ; LAB_004d3723
    ADD EAX,0x2d4                       ; 004d314c
    PUSH EAX                            ; 004d3151
    LEA EAX,[EBP + 0xffffff5a]          ; 004d3152
    PUSH EAX                            ; 004d3158
    MOV EDI,dword ptr [EBX + 0x1fbac]   ; 004d3159
    PUSH EDI                            ; 004d315f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d3160
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EBX + 0x24]          ; 004d3165
    ADD ESP,0xc                         ; 004d3168
    FCOMP float ptr [EAX + 0x4]         ; 004d316b
    FNSTSW AX                           ; 004d316e
    SAHF                                ; 004d3170
    JBE 0x004d321d                      ; 004d3171
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    XOR EAX,EAX                         ; 004d3177
    MOV dword ptr [EBX + 0x1fbac],0x0   ; 004d3179
    MOV dword ptr [EBP + -0x6a],EAX     ; 004d3183
    LEA EAX,[EBP + -0x6a]               ; 004d3186
    MOV EDX,0x3f000000                  ; 004d3189
    PUSH EAX                            ; 004d318e
    LEA EAX,[EBP + -0x3a]               ; 004d318f
    MOV ECX,0x40800000                  ; 004d3192
    PUSH EAX                            ; 004d3197
    PUSH EBX                            ; 004d3198
    MOV dword ptr [EBP + -0x66],EDX     ; 004d3199
    MOV dword ptr [EBP + -0x62],ECX     ; 004d319c
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004d319f
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004d31a4
    LEA EAX,[EBX + 0x20]                ; 004d31a6
    FLD float ptr [EDX]                 ; 004d31a9
    FADD float ptr [EAX]                ; 004d31ab
    FSTP float ptr [EAX]                ; 004d31ad
    FLD float ptr [EDX + 0x4]           ; 004d31af
    FADD float ptr [EAX + 0x4]          ; 004d31b2
    ADD ESP,0xc                         ; 004d31b5
    FSTP float ptr [EAX + 0x4]          ; 004d31b8
    FLD float ptr [EDX + 0x8]           ; 004d31bb
    FADD float ptr [EAX + 0x8]          ; 004d31be
    PUSH 0x0                            ; 004d31c1
    FSTP float ptr [EAX + 0x8]          ; 004d31c3
    PUSH dword ptr [EBX + 0x2ddc]       ; 004d31c6
    MOV EDX,dword ptr [EBX + 0x154]     ; 004d31cc
    PUSH EBX                            ; 004d31d2
    CALL dword ptr [EDX + 0x38]         ; 004d31d3
    MOV dword ptr [EBP + 0x76],EAX      ; 004d31d6
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d31d9
    MOV dword ptr [EBX + 0x2414],EAX    ; 004d31dc
    FLD float ptr [EBX + 0x2414]        ; 004d31e2
    FADD double ptr [0x0062aec5]        ; 004d31e8 | DOUBLE_0062aec5
    ADD ESP,0xc                         ; 004d31ee
    FLD float ptr [EBX + 0x24]          ; 004d31f1
    FCOMPP                              ; 004d31f4
    FNSTSW AX                           ; 004d31f6
    SAHF                                ; 004d31f8
    JNC 0x004d371c                      ; 004d31f9
        ;   XREF to: 004d371c (CONDITIONAL_JUMP)  ; LAB_004d371c
    MOV EAX,0x1                         ; 004d31ff
    PUSH 0x1                            ; 004d3204
        ;   Label: LAB_004d3204
    PUSH 0x0                            ; 004d3206
    MOV dword ptr [EBX + 0x2410],EAX    ; 004d3208
    LEA EAX,[EBX + 0x158]               ; 004d320e
        ;   Label: LAB_004d320e
    PUSH EAX                            ; 004d3214
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d3215
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_004d3215
    ADD ESP,0xc                         ; 004d321a
        ;   Label: LAB_004d321a
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 004d321d
        ;   Label: LAB_004d321d
    JZ 0x004d3c64                       ; 004d3224
        ;   XREF to: 004d3c64 (CONDITIONAL_JUMP)  ; LAB_004d3c64
    LEA EDI,[EBX + 0x23ac]              ; 004d322a
    PUSH EDI                            ; 004d3230
    LEA EAX,[EBP + 0x1a]                ; 004d3231
    PUSH EAX                            ; 004d3234
    PUSH EBX                            ; 004d3235
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004d3236
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    MOV EDX,EAX                         ; 004d323b
    LEA EAX,[EBX + 0x20]                ; 004d323d
    FLD float ptr [EDX]                 ; 004d3240
    FADD float ptr [EAX]                ; 004d3242
    FSTP float ptr [EAX]                ; 004d3244
    FLD float ptr [EDX + 0x4]           ; 004d3246
    FADD float ptr [EAX + 0x4]          ; 004d3249
    FSTP float ptr [EAX + 0x4]          ; 004d324c
    FLD float ptr [EDX + 0x8]           ; 004d324f
    FADD float ptr [EAX + 0x8]          ; 004d3252
    FSTP float ptr [EAX + 0x8]          ; 004d3255
    MOV dword ptr [EDI + 0x8],0x0       ; 004d3258
    ADD ESP,0xc                         ; 004d325f
    MOV EAX,dword ptr [EDI + 0x8]       ; 004d3262
    MOV dword ptr [EDI + 0x4],EAX       ; 004d3265
    MOV EAX,dword ptr [EDI + 0x4]       ; 004d3268
    MOV dword ptr [EDI],EAX             ; 004d326b
    PUSH EBX                            ; 004d326d
        ;   Label: LAB_004d326d
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 004d326e
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d3273
    TEST ESI,ESI                        ; 004d3276
    JZ 0x004d3ddc                       ; 004d3278
        ;   XREF to: 004d3ddc (CONDITIONAL_JUMP)  ; LAB_004d3ddc
    MOV ECX,dword ptr [0x00822c84]      ; 004d327e | g_CLightActorClassInfo.name_hash
        ;   Label: LAB_004d327e
    PUSH ECX                            ; 004d3284
    MOV EDI,dword ptr [EBX + 0x24b4]    ; 004d3285
    PUSH EDI                            ; 004d328b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d328c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d3291
    MOV EDI,EAX                         ; 004d3294
    TEST EAX,EAX                        ; 004d3296
    JZ 0x004d3338                       ; 004d3298
        ;   XREF to: 004d3338 (CONDITIONAL_JUMP)  ; LAB_004d3338
    CMP dword ptr [EBX + 0xbe40],0x0    ; 004d329e
    JZ 0x004d32af                       ; 004d32a5
        ;   XREF to: 004d32af (CONDITIONAL_JUMP)  ; LAB_004d32af
    TEST ESI,ESI                        ; 004d32a7
    JZ 0x004d3e28                       ; 004d32a9
        ;   XREF to: 004d3e28 (CONDITIONAL_JUMP)  ; LAB_004d3e28
    CMP dword ptr [EDI + 0x2324],0x0    ; 004d32af
        ;   Label: LAB_004d32af
    JZ 0x004d3338                       ; 004d32b6
        ;   XREF to: 004d3338 (CONDITIONAL_JUMP)  ; LAB_004d3338
    FLD float ptr [EBX + 0xbe54]        ; 004d32bc
    FMUL double ptr [0x0062ae9d]        ; 004d32c2 | DOUBLE_0062ae9d
    FMUL double ptr [0x0062aed5]        ; 004d32c8 | DOUBLE_0062aed5
    FMUL float ptr [EBP + 0x92]         ; 004d32ce
    FLD float ptr [EBX + 0x1fbe8]       ; 004d32d4
    FXCH                                ; 004d32da
    FADD ST0,ST1                        ; 004d32dc
    PUSH EBX                            ; 004d32de
    FSTP ST1                            ; 004d32df
    FSTP float ptr [EBX + 0x1fbe8]      ; 004d32e1
    CALL core_gabriela.cpp_FUN_004d4c90 ; 004d32e7
        ;   XREF to: 004d4c90 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d4c90()
    MOV dword ptr [EBP + 0x76],EAX      ; 004d32ec
    ADD ESP,0x4                         ; 004d32ef
    FLD float ptr [EBP + 0x76]          ; 004d32f2
    PUSH EBX                            ; 004d32f5
    FSTP float ptr [EBP + 0x42]         ; 004d32f6
    CALL core_gabriela.cpp_FUN_004d4ce0 ; 004d32f9
        ;   XREF to: 004d4ce0 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d4ce0()
    FLD float ptr [EBX + 0x1fbe8]       ; 004d32fe
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3304
    ADD ESP,0x4                         ; 004d3307
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d330a
    MOV dword ptr [EBP + 0x3e],EAX      ; 004d330d
    FCOMP float ptr [EBP + 0x42]        ; 004d3310
    FNSTSW AX                           ; 004d3313
    SAHF                                ; 004d3315
    JNC 0x004d3321                      ; 004d3316
        ;   XREF to: 004d3321 (CONDITIONAL_JUMP)  ; LAB_004d3321
    MOV EAX,dword ptr [EBP + 0x42]      ; 004d3318
    MOV dword ptr [EBX + 0x1fbe8],EAX   ; 004d331b
    FLD float ptr [EBX + 0x1fbe8]       ; 004d3321
        ;   Label: LAB_004d3321
    FCOMP float ptr [EBP + 0x3e]        ; 004d3327
    FNSTSW AX                           ; 004d332a
    SAHF                                ; 004d332c
    JBE 0x004d3338                      ; 004d332d
        ;   XREF to: 004d3338 (CONDITIONAL_JUMP)  ; LAB_004d3338
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004d332f
    MOV dword ptr [EBX + 0x1fbe8],EAX   ; 004d3332
    TEST byte ptr [EBX + 0x1fbd4],0x1   ; 004d3338
        ;   Label: LAB_004d3338
    JZ 0x004d3e61                       ; 004d333f
        ;   XREF to: 004d3e61 (CONDITIONAL_JUMP)  ; LAB_004d3e61
    FLD float ptr [EBP + 0x92]          ; 004d3345
    FDIV float ptr [0x0065e7a8]         ; 004d334b | FLOAT_0065e7a8
    FADD float ptr [EBX + 0x1fbd8]      ; 004d3351
    FST float ptr [EBX + 0x1fbd8]       ; 004d3357
    FLD1                                ; 004d335d
    FCOMPP                              ; 004d335f
    FNSTSW AX                           ; 004d3361
    SAHF                                ; 004d3363
    JNC 0x004d3370                      ; 004d3364
        ;   XREF to: 004d3370 (CONDITIONAL_JUMP)  ; LAB_004d3370
    MOV dword ptr [EBX + 0x1fbd8],0x3f800000 ; 004d3366
    TEST byte ptr [EBX + 0x1fbd4],0x2   ; 004d3370
        ;   Label: LAB_004d3370
    JZ 0x004d3e95                       ; 004d3377
        ;   XREF to: 004d3e95 (CONDITIONAL_JUMP)  ; LAB_004d3e95
    FLD float ptr [EBP + 0x92]          ; 004d337d
    FDIV float ptr [0x0065e7a8]         ; 004d3383 | FLOAT_0065e7a8
    MOV EAX,dword ptr [EBX + 0x1fbdc]   ; 004d3389
    MOV dword ptr [EBP + 0x46],EAX      ; 004d338f
    FADD float ptr [EBP + 0x46]         ; 004d3392
    FST float ptr [EBX + 0x1fbdc]       ; 004d3395
    FLD1                                ; 004d339b
    FCOMPP                              ; 004d339d
    FNSTSW AX                           ; 004d339f
    SAHF                                ; 004d33a1
    JNC 0x004d33ae                      ; 004d33a2
        ;   XREF to: 004d33ae (CONDITIONAL_JUMP)  ; LAB_004d33ae
    MOV dword ptr [EBX + 0x1fbdc],0x3f800000 ; 004d33a4
    FLD float ptr [0x0065e7b4]          ; 004d33ae | FLOAT_0065e7b4
        ;   Label: LAB_004d33ae
    FADD double ptr [0x0062aee5]        ; 004d33b4 | DOUBLE_0062aee5
    FLD float ptr [EBP + 0x46]          ; 004d33ba
    FXCH                                ; 004d33bd
    FSTP float ptr [EBP + 0x4a]         ; 004d33bf
    FCOMP float ptr [EBP + 0x4a]        ; 004d33c2
    FNSTSW AX                           ; 004d33c5
    SAHF                                ; 004d33c7
    JA 0x004d33f9                       ; 004d33c8
        ;   XREF to: 004d33f9 (CONDITIONAL_JUMP)  ; LAB_004d33f9
    FLD float ptr [EBX + 0x1fbdc]       ; 004d33ca
    FCOMP float ptr [EBP + 0x4a]        ; 004d33d0
    FNSTSW AX                           ; 004d33d3
    SAHF                                ; 004d33d5
    JBE 0x004d33f9                      ; 004d33d6
        ;   XREF to: 004d33f9 (CONDITIONAL_JUMP)  ; LAB_004d33f9
    MOV ECX,dword ptr [0x0067b654]      ; 004d33d8 | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 004d33de | g_CGameInstance
    CALL core_game.cpp_CGame_FUN_004e0bb0 ; 004d33df
        ;   XREF to: 004e0bb0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_FUN_004e0bb0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d33e4
    PUSH 0x62ae4a                       ; 004d33e7 | = "draw-f.wav @ 1.5"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d33ec
        ;   Label: LAB_004d33ec
    PUSH EBX                            ; 004d33f2
    CALL dword ptr [EAX + 0x24]         ; 004d33f3
    ADD ESP,0x8                         ; 004d33f6
    TEST byte ptr [EBX + 0x1fbd4],0x3   ; 004d33f9
        ;   Label: LAB_004d33f9
    JZ 0x004d3f02                       ; 004d3400
        ;   XREF to: 004d3f02 (CONDITIONAL_JUMP)  ; LAB_004d3f02
    FLD float ptr [EBP + 0x92]          ; 004d3406
    FDIV float ptr [0x0065e7a8]         ; 004d340c | FLOAT_0065e7a8
    FADD float ptr [EBX + 0x1fbe0]      ; 004d3412
    FST float ptr [EBX + 0x1fbe0]       ; 004d3418
    FLD1                                ; 004d341e
    FCOMPP                              ; 004d3420
    FNSTSW AX                           ; 004d3422
    SAHF                                ; 004d3424
    JNC 0x004d3431                      ; 004d3425
        ;   XREF to: 004d3431 (CONDITIONAL_JUMP)  ; LAB_004d3431
    MOV dword ptr [EBX + 0x1fbe0],0x3f800000 ; 004d3427
    TEST ESI,ESI                        ; 004d3431
        ;   Label: LAB_004d3431
    JZ 0x004d3f36                       ; 004d3433
        ;   XREF to: 004d3f36 (CONDITIONAL_JUMP)  ; LAB_004d3f36
    FLD float ptr [EBP + 0x92]          ; 004d3439
    FDIV float ptr [0x0065e7ac]         ; 004d343f | FLOAT_0065e7ac
    FMUL double ptr [0x0062ae85]        ; 004d3445 | DOUBLE_0062ae85
    FSUBR float ptr [EBX + 0x1fbe4]     ; 004d344b
        ;   Label: LAB_004d344b
    FSTP float ptr [EBX + 0x1fbe4]      ; 004d3451
        ;   Label: LAB_004d3451
    FLD float ptr [EBX + 0x1fbe4]       ; 004d3457
    FLDZ                                ; 004d345d
    FCOMPP                              ; 004d345f
    FNSTSW AX                           ; 004d3461
    SAHF                                ; 004d3463
    JBE 0x004d3470                      ; 004d3464
        ;   XREF to: 004d3470 (CONDITIONAL_JUMP)  ; LAB_004d3470
    MOV dword ptr [EBX + 0x1fbe4],0x0   ; 004d3466
    FLD float ptr [EBX + 0x1fbe4]       ; 004d3470
        ;   Label: LAB_004d3470
    FCOMP double ptr [0x0062aeed]       ; 004d3476 | DOUBLE_0062aeed
    FNSTSW AX                           ; 004d347c
    SAHF                                ; 004d347e
    JBE 0x004d348b                      ; 004d347f
        ;   XREF to: 004d348b (CONDITIONAL_JUMP)  ; LAB_004d348b
    MOV dword ptr [EBX + 0x1fbe4],0x3f666666 ; 004d3481
    PUSH ESI                            ; 004d348b
        ;   Label: LAB_004d348b
    PUSH dword ptr [EBP + 0x92]         ; 004d348c
    PUSH EBX                            ; 004d3492
    CALL core_gabriela.cpp_FUN_004d6540 ; 004d3493
        ;   XREF to: 004d6540 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d6540()
    FLD float ptr [EBP + 0x92]          ; 004d3498
    FDIV float ptr [0x0065e7bc]         ; 004d349e | FLOAT_0065e7bc
    FSUBR float ptr [EBX + 0x1fc0c]     ; 004d34a4
    ADD ESP,0xc                         ; 004d34aa
    FST float ptr [EBX + 0x1fc0c]       ; 004d34ad
    FLDZ                                ; 004d34b3
    FCOMPP                              ; 004d34b5
    FNSTSW AX                           ; 004d34b7
    SAHF                                ; 004d34b9
    JC 0x004d34ce                       ; 004d34ba
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    MOV dword ptr [EBX + 0x1fc0c],0x0   ; 004d34bc
    TEST ESI,ESI                        ; 004d34c6
    JZ 0x004d3f82                       ; 004d34c8
        ;   XREF to: 004d3f82 (CONDITIONAL_JUMP)  ; LAB_004d3f82
    PUSH EBX                            ; 004d34ce
        ;   Label: LAB_004d34ce
    CALL core_gabriela.cpp_FUN_004d4d80 ; 004d34cf
        ;   XREF to: 004d4d80 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d4d80()
    ADD ESP,0x4                         ; 004d34d4
    TEST ESI,ESI                        ; 004d34d7
    SETZ AL                             ; 004d34d9
    AND EAX,0xff                        ; 004d34dc
    PUSH EAX                            ; 004d34e1
    PUSH dword ptr [EBP + 0x92]         ; 004d34e2
    PUSH EBX                            ; 004d34e8
    CALL core_gabriela.cpp_FUN_004d6d40 ; 004d34e9
        ;   XREF to: 004d6d40 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d6d40()
    ADD ESP,0xc                         ; 004d34ee
    PUSH dword ptr [EBP + 0x92]         ; 004d34f1
    PUSH EBX                            ; 004d34f7
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 004d34f8
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d34fd
    PUSH 0xd                            ; 004d3500
    LEA ESI,[EBX + 0x158]               ; 004d3502
    PUSH ESI                            ; 004d3508
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20 ; 004d3509
        ;   XREF to: 0052dd20 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_getStateBlendWeight_FUN_0052dd20(CMotionController * this_ptr, int desired_state_index)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d350e
    ADD ESP,0x8                         ; 004d3511
    FLD float ptr [EBP + 0x76]          ; 004d3514
    FLDZ                                ; 004d3517
    FCOMPP                              ; 004d3519
    FNSTSW AX                           ; 004d351b
    SAHF                                ; 004d351d
    JNC 0x004d4074                      ; 004d351e
        ;   XREF to: 004d4074 (CONDITIONAL_JUMP)  ; LAB_004d4074
    PUSH ESI                            ; 004d3524
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 004d3525
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d352a
    ADD ESP,0x4                         ; 004d352d
    FLD float ptr [EBP + 0x76]          ; 004d3530
    FLD1                                ; 004d3533
    FCOMPP                              ; 004d3535
    FNSTSW AX                           ; 004d3537
    SAHF                                ; 004d3539
    JNC 0x004d35ec                      ; 004d353a
        ;   XREF to: 004d35ec (CONDITIONAL_JUMP)  ; LAB_004d35ec
    MOV EAX,[0x008229e8]                ; 004d3540 | g_CBoxActorClassInfo.name_hash
    PUSH EAX                            ; 004d3545
    MOV EDX,dword ptr [EBX + 0x1fba4]   ; 004d3546
    PUSH EDX                            ; 004d354c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d354d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004d3552
    ADD ESP,0x8                         ; 004d3554
    TEST EAX,EAX                        ; 004d3557
    JZ 0x004d35ec                       ; 004d3559
        ;   XREF to: 004d35ec (CONDITIONAL_JUMP)  ; LAB_004d35ec
    LEA EAX,[EBP + 0xe]                 ; 004d355f
    PUSH EAX                            ; 004d3562
    PUSH EBX                            ; 004d3563
    CALL core_gabriela.cpp_FUN_004d4cf0 ; 004d3564
        ;   XREF to: 004d4cf0 (UNCONDITIONAL_CALL)  ; float * core_gabriela.cpp_FUN_004d4cf0()
    ADD ESP,0x8                         ; 004d3569
    LEA EAX,[EBP + 0xe]                 ; 004d356c
    PUSH EAX                            ; 004d356f
    LEA EAX,[EBP + 0xffffff1e]          ; 004d3570
    PUSH EAX                            ; 004d3576
    PUSH EBX                            ; 004d3577
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d3578
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EBP + 0xffffff1e]    ; 004d357d
    FLD float ptr [EBP + 0xffffff26]    ; 004d3583
    LEA EAX,[EBP + 0xfffffefa]          ; 004d3589
    ADD ESP,0xc                         ; 004d358f
    XOR ECX,ECX                         ; 004d3592
    FXCH                                ; 004d3594
    FSUB float ptr [EBP + 0xffffff06]   ; 004d3596
    PUSH EAX                            ; 004d359c
    FXCH                                ; 004d359d
    FSUB float ptr [EBP + 0xffffff0e]   ; 004d359f
    LEA EAX,[EBP + 0xffffff36]          ; 004d35a5
    MOV dword ptr [EBP + 0xfffffefe],ECX ; 004d35ab
    PUSH EAX                            ; 004d35b1
    FXCH                                ; 004d35b2
    FSTP float ptr [EBP + 0xfffffefa]   ; 004d35b4
    PUSH EBX                            ; 004d35ba
    FSTP float ptr [EBP + 0xffffff02]   ; 004d35bb
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004d35c1
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    FLD float ptr [EAX + 0x8]           ; 004d35c6
    FLDZ                                ; 004d35c9
    ADD ESP,0xc                         ; 004d35cb
    FCOMPP                              ; 004d35ce
    FNSTSW AX                           ; 004d35d0
    SAHF                                ; 004d35d2
    JNC 0x004d35ec                      ; 004d35d3
        ;   XREF to: 004d35ec (CONDITIONAL_JUMP)  ; LAB_004d35ec
    LEA EAX,[EBP + 0xfffffefa]          ; 004d35d5
    PUSH EAX                            ; 004d35db
    LEA EAX,[EBP + 0xffffff06]          ; 004d35dc
    PUSH EAX                            ; 004d35e2
    PUSH ESI                            ; 004d35e3
    CALL core_boxactor.cpp_CBoxActor_FUN_00422390 ; 004d35e4
        ;   XREF to: 00422390 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_FUN_00422390(CBoxActor * this_ptr)
    ADD ESP,0xc                         ; 004d35e9
    PUSH dword ptr [EBP + 0x92]         ; 004d35ec
        ;   Label: LAB_004d35ec
    PUSH EBX                            ; 004d35f2
    CALL core_gabriela.cpp_FUN_004d5550 ; 004d35f3
        ;   XREF to: 004d5550 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d5550()
    MOV ESI,dword ptr [EBX + 0x1fbec]   ; 004d35f8
    ADD ESP,0x8                         ; 004d35fe
    CMP ESI,0x3                         ; 004d3601
    JNZ 0x004d4145                      ; 004d3604
        ;   XREF to: 004d4145 (CONDITIONAL_JUMP)  ; LAB_004d4145
    MOV EDI,dword ptr [0x02ceed20]      ; 004d360a | g_CDynamiteClassInfo.name_hash
    LEA EAX,[EBX + 0x1f738]             ; 004d3610
    PUSH EDI                            ; 004d3616
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d3617
    PUSH EAX                            ; 004d361d
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d361e
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d3623
    MOV ESI,EAX                         ; 004d3626
    TEST EAX,EAX                        ; 004d3628
    JNZ 0x004d4082                      ; 004d362a
        ;   XREF to: 004d4082 (CONDITIONAL_JUMP)  ; LAB_004d4082
    MOV dword ptr [EBX + 0x1fbec],0x2   ; 004d3630
    FLD float ptr [0x0065e7ec]          ; 004d363a | FLOAT_0065e7ec
        ;   Label: LAB_004d363a
    PUSH EBX                            ; 004d3640
    FSTP float ptr [EBX + 0x5fa84]      ; 004d3641
    CALL core_gabriela.cpp_FUN_004d5f70 ; 004d3647
        ;   XREF to: 004d5f70 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d5f70()
    ADD ESP,0x4                         ; 004d364c
    TEST EAX,EAX                        ; 004d364f
    JZ 0x004d4152                       ; 004d3651
        ;   XREF to: 004d4152 (CONDITIONAL_JUMP)  ; LAB_004d4152
    MOV dword ptr [EBX + 0x1fbec],0x1   ; 004d3657
    PUSH EBX                            ; 004d3661
        ;   Label: LAB_004d3661
    MOV dword ptr [EBX + 0x1fbec],0x0   ; 004d3662
    CALL core_gabriela.cpp_FUN_004d5fe0 ; 004d366c
        ;   XREF to: 004d5fe0 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d5fe0()
    LEA EAX,[EBX + 0x1f738]             ; 004d3671
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d3677
    MOV ESI,dword ptr [EAX + 0x2ec]     ; 004d367d
    ADD ESP,0x4                         ; 004d3683
    TEST ESI,ESI                        ; 004d3686
    JZ 0x004d4173                       ; 004d3688
        ;   XREF to: 004d4173 (CONDITIONAL_JUMP)  ; LAB_004d4173
    PUSH EBX                            ; 004d368e
        ;   Label: LAB_004d368e
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d368f
    CALL dword ptr [EAX + 0x120]        ; 004d3695
    ADD ESP,0x4                         ; 004d369b
    CMP EAX,0x2                         ; 004d369e
    JZ 0x004d36cd                       ; 004d36a1
        ;   XREF to: 004d36cd (CONDITIONAL_JUMP)  ; LAB_004d36cd
    LEA EAX,[EBX + 0x158]               ; 004d36a3
    PUSH EAX                            ; 004d36a9
    PUSH dword ptr [EBX + 0x2414]       ; 004d36aa
    LEA EAX,[EBX + 0x30]                ; 004d36b0
    PUSH dword ptr [EBP + 0x92]         ; 004d36b3
    PUSH EAX                            ; 004d36b9
    LEA EAX,[EBX + 0x20]                ; 004d36ba
    PUSH EAX                            ; 004d36bd
    LEA EAX,[EBX + 0x1fc14]             ; 004d36be
    PUSH EAX                            ; 004d36c4
    CALL core_cloth.cpp_FUN_0043ab80    ; 004d36c5
        ;   XREF to: 0043ab80 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_FUN_0043ab80()
    ADD ESP,0x18                        ; 004d36ca
    LEA ESI,[EBX + 0x1f738]             ; 004d36cd
        ;   Label: LAB_004d36cd
    MOV EAX,dword ptr [ESI + 0x330]     ; 004d36d3
    PUSH dword ptr [EBP + 0x92]         ; 004d36d9
    PUSH EAX                            ; 004d36df
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d36e0
    CALL dword ptr [EDX + 0x4]          ; 004d36e6
    MOV EAX,dword ptr [ESI + 0x330]     ; 004d36e9
    MOV EDI,dword ptr [EAX + 0xfc]      ; 004d36ef
    ADD ESP,0x8                         ; 004d36f5
    TEST EDI,EDI                        ; 004d36f8
    JNZ 0x004d417e                      ; 004d36fa
        ;   XREF to: 004d417e (CONDITIONAL_JUMP)  ; LAB_004d417e
    LEA ESP,[EBP + 0x7a]                ; 004d3700
        ;   Label: LAB_004d3700
    POP EBP                             ; 004d3703
    POP EDI                             ; 004d3704
    POP ESI                             ; 004d3705
    POP EBX                             ; 004d3706
    RET                                 ; 004d3707
    PUSH dword ptr [EBP + 0x92]         ; 004d3708
        ;   Label: LAB_004d3708
    PUSH EBX                            ; 004d370e
    CALL core_gabriela.cpp_FUN_004d4190 ; 004d370f
        ;   XREF to: 004d4190 (UNCONDITIONAL_CALL)  ; void core_gabriela.cpp_FUN_004d4190()
    ADD ESP,0x8                         ; 004d3714
    JMP 0x004d2ed9                      ; 004d3717
        ;   XREF to: 004d2ed9 (UNCONDITIONAL_JUMP)  ; LAB_004d2ed9
    XOR EAX,EAX                         ; 004d371c
        ;   Label: LAB_004d371c
    JMP 0x004d3204                      ; 004d371e
        ;   XREF to: 004d3204 (UNCONDITIONAL_JUMP)  ; LAB_004d3204
    MOV EDX,dword ptr [EBX + 0x2598]    ; 004d3723
        ;   Label: LAB_004d3723
    TEST EDX,EDX                        ; 004d3729
    JZ 0x004d3863                       ; 004d372b
        ;   XREF to: 004d3863 (CONDITIONAL_JUMP)  ; LAB_004d3863
    CMP dword ptr [EBX + 0x259c],0x0    ; 004d3731
    JNZ 0x004d37f4                      ; 004d3738
        ;   XREF to: 004d37f4 (CONDITIONAL_JUMP)  ; LAB_004d37f4
    LEA EAX,[EDX + 0x20]                ; 004d373e
    PUSH EAX                            ; 004d3741
    LEA EAX,[EBP + 0xffffff66]          ; 004d3742
    PUSH EAX                            ; 004d3748
    PUSH EBX                            ; 004d3749
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d374a
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d374f
    PUSH EAX                            ; 004d3752
    LEA EAX,[EBP + 0xffffff72]          ; 004d3753
    PUSH EAX                            ; 004d3759
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d375a
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d375f
    PUSH dword ptr [EAX + 0x4]          ; 004d3762
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d3765
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004d376a
    ADD ESP,0x4                         ; 004d376d
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d3770
    MOV dword ptr [EBP + 0x72],EAX      ; 004d3773
    FLD float ptr [EBP + 0x72]          ; 004d3776
    FCOMP double ptr [0x0062aea5]       ; 004d3779 | DOUBLE_0062aea5
    FNSTSW AX                           ; 004d377f
    SAHF                                ; 004d3781
    JNC 0x004d3790                      ; 004d3782
        ;   XREF to: 004d3790 (CONDITIONAL_JUMP)  ; LAB_004d3790
    FLD float ptr [EBP + 0x72]          ; 004d3784
    FADD float ptr [0x0062aead]         ; 004d3787 | FLOAT_0062aead
    FSTP float ptr [EBP + 0x72]         ; 004d378d
    FLD float ptr [EBP + 0x72]          ; 004d3790
        ;   Label: LAB_004d3790
    FCOMP double ptr [0x0062aeb5]       ; 004d3793 | DOUBLE_0062aeb5
    FNSTSW AX                           ; 004d3799
    SAHF                                ; 004d379b
    JBE 0x004d37aa                      ; 004d379c
        ;   XREF to: 004d37aa (CONDITIONAL_JUMP)  ; LAB_004d37aa
    FLD float ptr [EBP + 0x72]          ; 004d379e
    FADD float ptr [0x0062aebd]         ; 004d37a1 | FLOAT_0062aebd
    FSTP float ptr [EBP + 0x72]         ; 004d37a7
    FLD float ptr [EBP + 0x92]          ; 004d37aa
        ;   Label: LAB_004d37aa
    FMUL double ptr [0x0062ae9d]        ; 004d37b0 | DOUBLE_0062ae9d
    FLD float ptr [EBP + 0x72]          ; 004d37b6
    FXCH                                ; 004d37b9
    FST float ptr [EBP + 0x62]          ; 004d37bb
    FCHS                                ; 004d37be
    FSTP float ptr [EBP + 0x56]         ; 004d37c0
    FCOMP float ptr [EBP + 0x56]        ; 004d37c3
    FNSTSW AX                           ; 004d37c6
    SAHF                                ; 004d37c8
    JNC 0x004d37d1                      ; 004d37c9
        ;   XREF to: 004d37d1 (CONDITIONAL_JUMP)  ; LAB_004d37d1
    MOV EAX,dword ptr [EBP + 0x56]      ; 004d37cb
    MOV dword ptr [EBP + 0x72],EAX      ; 004d37ce
    FLD float ptr [EBP + 0x72]          ; 004d37d1
        ;   Label: LAB_004d37d1
    FCOMP float ptr [EBP + 0x62]        ; 004d37d4
    FNSTSW AX                           ; 004d37d7
    SAHF                                ; 004d37d9
    JBE 0x004d37e2                      ; 004d37da
        ;   XREF to: 004d37e2 (CONDITIONAL_JUMP)  ; LAB_004d37e2
    MOV EAX,dword ptr [EBP + 0x62]      ; 004d37dc
    MOV dword ptr [EBP + 0x72],EAX      ; 004d37df
    FLD float ptr [EBX + 0x34]          ; 004d37e2
        ;   Label: LAB_004d37e2
    FADD float ptr [EBP + 0x72]         ; 004d37e5
    PUSH EBX                            ; 004d37e8
    FSTP float ptr [EBX + 0x34]         ; 004d37e9
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004d37ec
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d37f1
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004d37f4
        ;   Label: LAB_004d37f4
    MOV dword ptr [EBP + 0x36],EAX      ; 004d37fa
    MOV EAX,dword ptr [EAX + 0x154]     ; 004d37fd
    PUSH 0x0                            ; 004d3803
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3805
    LEA EAX,[EBP + 0xffffff4e]          ; 004d3808
    PUSH EAX                            ; 004d380e
    LEA EDI,[EBX + 0x158]               ; 004d380f
    PUSH EDI                            ; 004d3815
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004d3816
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004d381b
    PUSH EAX                            ; 004d381e
    PUSH EBX                            ; 004d381f
    MOV EAX,dword ptr [EBP + 0x36]      ; 004d3820
    PUSH EAX                            ; 004d3823
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d3824
    CALL dword ptr [EAX + 0x124]        ; 004d3827
    ADD ESP,0xc                         ; 004d382d
    TEST EAX,EAX                        ; 004d3830
    JZ 0x004d3854                       ; 004d3832
        ;   XREF to: 004d3854 (CONDITIONAL_JUMP)  ; LAB_004d3854
    CMP dword ptr [EBX + 0x2598],0x0    ; 004d3834
    JZ 0x004d385a                       ; 004d383b
        ;   XREF to: 004d385a (CONDITIONAL_JUMP)  ; LAB_004d385a
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004d383d
    JZ 0x004d321d                       ; 004d3844
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH 0x1                            ; 004d384a
    PUSH 0x7                            ; 004d384c
    PUSH EDI                            ; 004d384e
    JMP 0x004d3215                      ; 004d384f
        ;   XREF to: 004d3215 (UNCONDITIONAL_JUMP)  ; LAB_004d3215
    MOV dword ptr [EBX + 0x2598],EAX    ; 004d3854
        ;   Label: LAB_004d3854
    PUSH 0x1                            ; 004d385a
        ;   Label: LAB_004d385a
    PUSH 0x0                            ; 004d385c
    JMP 0x004d320e                      ; 004d385e
        ;   XREF to: 004d320e (UNCONDITIONAL_JUMP)  ; LAB_004d320e
    CMP dword ptr [EBX + 0x1fba4],0x0   ; 004d3863
        ;   Label: LAB_004d3863
    JZ 0x004d3a59                       ; 004d386a
        ;   XREF to: 004d3a59 (CONDITIONAL_JUMP)  ; LAB_004d3a59
    MOV ECX,dword ptr [EBX + 0xbe38]    ; 004d3870
    MOV dword ptr [EBP + 0x3a],EAX      ; 004d3876
    TEST ECX,ECX                        ; 004d3879
    JNZ 0x004d38a8                      ; 004d387b
        ;   XREF to: 004d38a8 (CONDITIONAL_JUMP)  ; LAB_004d38a8
    MOV EDX,dword ptr [EBP + 0x3a]      ; 004d387d
        ;   Label: LAB_004d387d
    TEST EDX,EDX                        ; 004d3880
    JNZ 0x004d321d                      ; 004d3882
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH 0x1                            ; 004d3888
    PUSH EDX                            ; 004d388a
    LEA EAX,[EBX + 0x158]               ; 004d388b
    PUSH EAX                            ; 004d3891
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d3892
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3897
    PUSH EBX                            ; 004d389a
    CALL core_hero.cpp_CHero_FUN_004f3350 ; 004d389b
        ;   XREF to: 004f3350 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3350(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d38a0
    JMP 0x004d321d                      ; 004d38a3
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    LEA EDX,[EBP + 0xfffffed6]          ; 004d38a8
        ;   Label: LAB_004d38a8
    MOV EAX,dword ptr [EBX + 0x1fba4]   ; 004d38ae
    PUSH EDX                            ; 004d38b4
    MOV EDI,dword ptr [EAX + 0x154]     ; 004d38b5
    PUSH EAX                            ; 004d38bb
    CALL dword ptr [EDI + 0x14]         ; 004d38bc
    FLD float ptr [EBP + 0xfffffeda]    ; 004d38bf
    FLD float ptr [EBP + 0xfffffed6]    ; 004d38c5
    FADD float ptr [EBP + 0xfffffee2]   ; 004d38cb
    FXCH                                ; 004d38d1
    FADD float ptr [EBP + 0xfffffee6]   ; 004d38d3
    FXCH                                ; 004d38d9
    FST float ptr [EBP + 0xfffffeee]    ; 004d38db
    FMUL float ptr [0x0062ae7d]         ; 004d38e1 | FLOAT_0062ae7d
    FXCH                                ; 004d38e7
    FST float ptr [EBP + 0xfffffef2]    ; 004d38e9
    FMUL float ptr [0x0062ae7d]         ; 004d38ef | FLOAT_0062ae7d
    FLD float ptr [EBP + 0xfffffede]    ; 004d38f5
    LEA EAX,[EBP + -0x16]               ; 004d38fb
    ADD ESP,0x8                         ; 004d38fe
    FADD float ptr [EBP + 0xfffffeea]   ; 004d3901
    PUSH EAX                            ; 004d3907
    FST float ptr [EBP + 0xfffffef6]    ; 004d3908
    LEA EAX,[EBP + 0xffffff42]          ; 004d390e
    FMUL float ptr [0x0062ae7d]         ; 004d3914 | FLOAT_0062ae7d
    PUSH EAX                            ; 004d391a
    FXCH ST2                            ; 004d391b
    FSTP float ptr [EBP + -0x16]        ; 004d391d
    FSTP float ptr [EBP + -0x12]        ; 004d3920
    FSTP float ptr [EBP + -0xe]         ; 004d3923
    MOV EDI,dword ptr [EBX + 0x1fba4]   ; 004d3926
    PUSH EDI                            ; 004d392c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d392d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d3932
    LEA EAX,[EBP + 0xffffff42]          ; 004d3935
    PUSH EAX                            ; 004d393b
    LEA EAX,[EBP + -0x2e]               ; 004d393c
    PUSH EAX                            ; 004d393f
    PUSH EBX                            ; 004d3940
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d3941
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d3946
    LEA EAX,[EBP + -0x2e]               ; 004d3949
    PUSH EAX                            ; 004d394c
    LEA EAX,[EBP + -0x52]               ; 004d394d
    PUSH EAX                            ; 004d3950
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d3951
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d3956
    PUSH dword ptr [EAX + 0x4]          ; 004d3959
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d395c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    FLD float ptr [EBP + 0xfffffeea]    ; 004d3961
    FLD float ptr [EBP + 0xfffffee2]    ; 004d3967
    FSUB float ptr [EBP + 0xfffffed6]   ; 004d396d
    FXCH                                ; 004d3973
    FSUB float ptr [EBP + 0xfffffede]   ; 004d3975
    FXCH                                ; 004d397b
    FST float ptr [EBP + 0x2]           ; 004d397d
    FMUL float ptr [0x0062ae7d]         ; 004d3980 | FLOAT_0062ae7d
    FXCH                                ; 004d3986
    FST float ptr [EBP + 0xa]           ; 004d3988
    FMUL float ptr [0x0062ae7d]         ; 004d398b | FLOAT_0062ae7d
    FXCH                                ; 004d3991
    FST float ptr [EBP + -0x22]         ; 004d3993
    FMUL float ptr [EBP + -0x22]        ; 004d3996
    FXCH                                ; 004d3999
    FST float ptr [EBP + -0x1a]         ; 004d399b
    FMUL float ptr [EBP + -0x1a]        ; 004d399e
    MOV dword ptr [EBP + 0x76],EAX      ; 004d39a1
    XOR EAX,EAX                         ; 004d39a4
    FADDP                               ; 004d39a6
    MOV dword ptr [EBP + -0x1e],EAX     ; 004d39a8
    FSQRT                               ; 004d39ab
    FLD float ptr [EBP + 0xfffffee6]    ; 004d39ad
    ADD ESP,0x4                         ; 004d39b3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d39b6
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d39b9
    FSUB float ptr [EBP + 0xfffffeda]   ; 004d39bc
    FXCH                                ; 004d39c2
    FSUBR float ptr [EBP + -0x26]       ; 004d39c4
    FXCH                                ; 004d39c7
    FSTP float ptr [EBP + 0x6]          ; 004d39c9
    FCOMP double ptr [0x0062ae85]       ; 004d39cc | DOUBLE_0062ae85
    FNSTSW AX                           ; 004d39d2
    SAHF                                ; 004d39d4
    JNC 0x004d387d                      ; 004d39d5
        ;   XREF to: 004d387d (CONDITIONAL_JUMP)  ; LAB_004d387d
    FLD float ptr [EBP + -0x2a]         ; 004d39db
    FLD1                                ; 004d39de
    FXCH                                ; 004d39e0
    FSTP double ptr [EBP + 0x26]        ; 004d39e2
    FCOMP double ptr [EBP + 0x26]       ; 004d39e5
    FNSTSW AX                           ; 004d39e8
    SAHF                                ; 004d39ea
    JNC 0x004d387d                      ; 004d39eb
        ;   XREF to: 004d387d (CONDITIONAL_JUMP)  ; LAB_004d387d
    FLD double ptr [EBP + 0x26]         ; 004d39f1
    FCOMP double ptr [0x0062ae8d]       ; 004d39f4 | DOUBLE_0062ae8d
    FNSTSW AX                           ; 004d39fa
    SAHF                                ; 004d39fc
    JNC 0x004d387d                      ; 004d39fd
        ;   XREF to: 004d387d (CONDITIONAL_JUMP)  ; LAB_004d387d
    FLD float ptr [EBP + 0x6e]          ; 004d3a03
    FABS                                ; 004d3a06
    FCOMP double ptr [0x0062ae95]       ; 004d3a08 | DOUBLE_0062ae95
    FNSTSW AX                           ; 004d3a0e
    SAHF                                ; 004d3a10
    JNC 0x004d387d                      ; 004d3a11
        ;   XREF to: 004d387d (CONDITIONAL_JUMP)  ; LAB_004d387d
    FLD float ptr [EBP + 0x92]          ; 004d3a17
    FMUL double ptr [0x0062ae9d]        ; 004d3a1d | DOUBLE_0062ae9d
    FST float ptr [EBP + 0x66]          ; 004d3a23
    FCHS                                ; 004d3a26
    FCOMP float ptr [EBP + 0x6e]        ; 004d3a28
    FNSTSW AX                           ; 004d3a2b
    SAHF                                ; 004d3a2d
    JA 0x004d3a4f                       ; 004d3a2e
        ;   XREF to: 004d3a4f (CONDITIONAL_JUMP)  ; LAB_004d3a4f
    FLD float ptr [EBP + 0x6e]          ; 004d3a30
        ;   Label: LAB_004d3a30
    FCOMP float ptr [EBP + 0x66]        ; 004d3a33
    FNSTSW AX                           ; 004d3a36
    SAHF                                ; 004d3a38
    JBE 0x004d3a41                      ; 004d3a39
        ;   XREF to: 004d3a41 (CONDITIONAL_JUMP)  ; LAB_004d3a41
    MOV EAX,dword ptr [EBP + 0x66]      ; 004d3a3b
    MOV dword ptr [EBP + 0x6e],EAX      ; 004d3a3e
    FLD float ptr [EBX + 0x34]          ; 004d3a41
        ;   Label: LAB_004d3a41
    FADD float ptr [EBP + 0x6e]         ; 004d3a44
    FSTP float ptr [EBX + 0x34]         ; 004d3a47
    JMP 0x004d321d                      ; 004d3a4a
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    FLD float ptr [EBP + 0x66]          ; 004d3a4f
        ;   Label: LAB_004d3a4f
    FCHS                                ; 004d3a52
    FSTP float ptr [EBP + 0x6e]         ; 004d3a54
    JMP 0x004d3a30                      ; 004d3a57
        ;   XREF to: 004d3a30 (UNCONDITIONAL_JUMP)  ; LAB_004d3a30
    PUSH dword ptr [EBP + 0x92]         ; 004d3a59
        ;   Label: LAB_004d3a59
    PUSH EBX                            ; 004d3a5f
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 004d3a60
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d3a65
    LEA EDI,[EBX + 0x158]               ; 004d3a68
    TEST EAX,EAX                        ; 004d3a6e
    JZ 0x004d3acb                       ; 004d3a70
        ;   XREF to: 004d3acb (CONDITIONAL_JUMP)  ; LAB_004d3acb
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 004d3a72
    CMP EAX,0x2                         ; 004d3a78
    JNC 0x004d3abb                      ; 004d3a7b
        ;   XREF to: 004d3abb (CONDITIONAL_JUMP)  ; LAB_004d3abb
    CMP EAX,0x1                         ; 004d3a7d
    JNZ 0x004d385a                      ; 004d3a80
        ;   XREF to: 004d385a (CONDITIONAL_JUMP)  ; LAB_004d385a
    PUSH EAX                            ; 004d3a86
    PUSH EAX                            ; 004d3a87
    PUSH EDI                            ; 004d3a88
    JMP 0x004d3215                      ; 004d3a89
        ;   XREF to: 004d3215 (UNCONDITIONAL_JUMP)  ; LAB_004d3215
    PUSH 0x1                            ; 004d3a8e
        ;   Label: LAB_004d3a8e
    PUSH 0x0                            ; 004d3a90
    PUSH EDI                            ; 004d3a92
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d3a93
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3a98
    PUSH EBX                            ; 004d3a9b
    PUSH 0x62ae13                       ; 004d3a9c | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 004d3aa1 | g_ConsolePtr | g_CConsolePtr
    PUSH EAX                            ; 004d3aa6 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004d3aa7
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x004d321a                      ; 004d3aac
        ;   XREF to: 004d321a (UNCONDITIONAL_JUMP)  ; LAB_004d321a
    PUSH 0x1                            ; 004d3ab1
        ;   Label: LAB_004d3ab1
    PUSH 0x2                            ; 004d3ab3
    PUSH EDI                            ; 004d3ab5
    JMP 0x004d3215                      ; 004d3ab6
        ;   XREF to: 004d3215 (UNCONDITIONAL_JUMP)  ; LAB_004d3215
    JBE 0x004d3ab1                      ; 004d3abb
        ;   XREF to: 004d3ab1 (CONDITIONAL_JUMP)  ; LAB_004d3ab1
        ;   Label: LAB_004d3abb
    CMP EAX,0x3                         ; 004d3abd
    JZ 0x004d3a8e                       ; 004d3ac0
        ;   XREF to: 004d3a8e (CONDITIONAL_JUMP)  ; LAB_004d3a8e
    PUSH 0x1                            ; 004d3ac2
    PUSH 0x0                            ; 004d3ac4
    JMP 0x004d320e                      ; 004d3ac6
        ;   XREF to: 004d320e (UNCONDITIONAL_JUMP)  ; LAB_004d320e
    TEST ESI,ESI                        ; 004d3acb
        ;   Label: LAB_004d3acb
    JNZ 0x004d321d                      ; 004d3acd
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH EDI                            ; 004d3ad3
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d3ad4
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d3ad9
    ADD ESP,0x4                         ; 004d3adc
    CMP EAX,0xe                         ; 004d3adf
    JNC 0x004d3c0f                      ; 004d3ae2
        ;   XREF to: 004d3c0f (CONDITIONAL_JUMP)  ; LAB_004d3c0f
    CMP EAX,0x1                         ; 004d3ae8
    JNC 0x004d3c47                      ; 004d3aeb
        ;   XREF to: 004d3c47 (CONDITIONAL_JUMP)  ; LAB_004d3c47
    TEST EAX,EAX                        ; 004d3af1
    JNZ 0x004d321d                      ; 004d3af3
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    CMP dword ptr [EBX + 0x2410],0x0    ; 004d3af9
        ;   Label: LAB_004d3af9
    JZ 0x004d321d                       ; 004d3b00
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    MOV EDX,dword ptr [EBX + 0xbe2c]    ; 004d3b06
    XOR EDI,EDI                         ; 004d3b0c
    TEST EDX,EDX                        ; 004d3b0e
    JZ 0x004d3b24                       ; 004d3b10
        ;   XREF to: 004d3b24 (CONDITIONAL_JUMP)  ; LAB_004d3b24
    CMP dword ptr [EBX + 0xbe34],0x0    ; 004d3b12
    JZ 0x004d3bbf                       ; 004d3b19
        ;   XREF to: 004d3bbf (CONDITIONAL_JUMP)  ; LAB_004d3bbf
    MOV EDI,0x2                         ; 004d3b1f
    CMP dword ptr [EBX + 0xbe30],0x0    ; 004d3b24
        ;   Label: LAB_004d3b24
    JZ 0x004d3b32                       ; 004d3b2b
        ;   XREF to: 004d3b32 (CONDITIONAL_JUMP)  ; LAB_004d3b32
    MOV EDI,0x3                         ; 004d3b2d
    FLD float ptr [EBX + 0xbe50]        ; 004d3b32
        ;   Label: LAB_004d3b32
    FMUL float ptr [EBX + 0x2438]       ; 004d3b38
    FLD float ptr [EBX + 0x2434]        ; 004d3b3e
    FLD float ptr [EBX + 0x241c]        ; 004d3b44
    LEA EAX,[EBX + 0x158]               ; 004d3b4a
    FADD float ptr [EBP + 0x6a]         ; 004d3b50
    MOV dword ptr [EBP + 0x4e],EAX      ; 004d3b53
    PUSH EAX                            ; 004d3b56
    FXCH                                ; 004d3b57
    FADD float ptr [EBX + 0x2424]       ; 004d3b59
    FXCH ST2                            ; 004d3b5f
    FSTP float ptr [EBX + 0x2418]       ; 004d3b61
    FXCH                                ; 004d3b67
    FSTP float ptr [EBX + 0x2424]       ; 004d3b69
    FSTP float ptr [EBX + 0x241c]       ; 004d3b6f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d3b75
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d3b7a
    ADD ESP,0x4                         ; 004d3b7d
    CMP EDI,EAX                         ; 004d3b80
    JZ 0x004d3b93                       ; 004d3b82
        ;   XREF to: 004d3b93 (CONDITIONAL_JUMP)  ; LAB_004d3b93
    PUSH 0x1                            ; 004d3b84
    PUSH EDI                            ; 004d3b86
    MOV ECX,dword ptr [EBP + 0x4e]      ; 004d3b87
    PUSH ECX                            ; 004d3b8a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d3b8b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3b90
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 004d3b93
        ;   Label: LAB_004d3b93
    JZ 0x004d321d                       ; 004d3b9a
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH EBX                            ; 004d3ba0
    CALL core_gabriela.cpp_PickupSomething_FUN_004d5870 ; 004d3ba1
        ;   XREF to: 004d5870 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_PickupSomething_FUN_004d5870()
    ADD ESP,0x4                         ; 004d3ba6
    TEST EAX,EAX                        ; 004d3ba9
    JNZ 0x004d321d                      ; 004d3bab
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH EBX                            ; 004d3bb1
    CALL core_gabriela.cpp_FUN_004d6050 ; 004d3bb2
        ;   XREF to: 004d6050 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d6050()
    ADD ESP,0x4                         ; 004d3bb7
    JMP 0x004d321d                      ; 004d3bba
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    MOV EDI,0x1                         ; 004d3bbf
        ;   Label: LAB_004d3bbf
    JMP 0x004d3b24                      ; 004d3bc4
        ;   XREF to: 004d3b24 (UNCONDITIONAL_JUMP)  ; LAB_004d3b24
    MOV EAX,[0x008223e0]                ; 004d3bc9 | g_CAmmoBoxClassInfo.name_hash
        ;   Label: LAB_004d3bc9
    PUSH EAX                            ; 004d3bce
    MOV EDX,dword ptr [EBX + 0x1fba0]   ; 004d3bcf
    PUSH EDX                            ; 004d3bd5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d3bd6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [EBP + 0x5e],EAX      ; 004d3bdb
    ADD ESP,0x8                         ; 004d3bde
    TEST EAX,EAX                        ; 004d3be1
    JZ 0x004d321d                       ; 004d3be3
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    PUSH EDI                            ; 004d3be9
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 004d3bea
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV EDI,dword ptr [EBP + 0x5e]      ; 004d3bef
    ADD ESP,0x4                         ; 004d3bf2
    MOV dword ptr [EBP + 0x76],EAX      ; 004d3bf5
    SUB ESP,0x4                         ; 004d3bf8
    MOV EAX,dword ptr [EBP + 0x76]      ; 004d3bfb
    MOV dword ptr [ESP],EAX             ; 004d3bfe
    PUSH EDI                            ; 004d3c01
    CALL core_ammobox.cpp_CAmmoBox_FUN_00411690 ; 004d3c02
        ;   XREF to: 00411690 (UNCONDITIONAL_CALL)  ; void core_ammobox.cpp_CAmmoBox_FUN_00411690(CAmmoBox * this_ptr)
    ADD ESP,0x8                         ; 004d3c07
    JMP 0x004d321d                      ; 004d3c0a
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    JBE 0x004d3bc9                      ; 004d3c0f
        ;   XREF to: 004d3bc9 (CONDITIONAL_JUMP)  ; LAB_004d3bc9
        ;   Label: LAB_004d3c0f
    CMP EAX,0x11                        ; 004d3c11
    JNC 0x004d3c24                      ; 004d3c14
        ;   XREF to: 004d3c24 (CONDITIONAL_JUMP)  ; LAB_004d3c24
    CMP EAX,0x10                        ; 004d3c16
    JZ 0x004d3af9                       ; 004d3c19
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
    JMP 0x004d321d                      ; 004d3c1f
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    JBE 0x004d3af9                      ; 004d3c24
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
        ;   Label: LAB_004d3c24
    CMP EAX,0x14                        ; 004d3c2a
    JC 0x004d321d                       ; 004d3c2d
        ;   XREF to: 004d321d (CONDITIONAL_JUMP)  ; LAB_004d321d
    JBE 0x004d3af9                      ; 004d3c33
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
    CMP EAX,0x15                        ; 004d3c39
    JZ 0x004d3af9                       ; 004d3c3c
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
    JMP 0x004d321d                      ; 004d3c42
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    JBE 0x004d3af9                      ; 004d3c47
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
        ;   Label: LAB_004d3c47
    CMP EAX,0x2                         ; 004d3c4d
    JBE 0x004d3af9                      ; 004d3c50
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
    CMP EAX,0x3                         ; 004d3c56
    JZ 0x004d3af9                       ; 004d3c59
        ;   XREF to: 004d3af9 (CONDITIONAL_JUMP)  ; LAB_004d3af9
    JMP 0x004d321d                      ; 004d3c5f
        ;   XREF to: 004d321d (UNCONDITIONAL_JUMP)  ; LAB_004d321d
    TEST ESI,ESI                        ; 004d3c64
        ;   Label: LAB_004d3c64
    JNZ 0x004d3d7f                      ; 004d3c66
        ;   XREF to: 004d3d7f (CONDITIONAL_JUMP)  ; LAB_004d3d7f
    LEA EDX,[EBX + 0x241c]              ; 004d3c6c
        ;   Label: LAB_004d3c6c
    MOV EAX,dword ptr [EDX]             ; 004d3c72
    MOV dword ptr [EBP + 0xffffff12],EAX ; 004d3c74
    LEA EAX,[EDX + 0x4]                 ; 004d3c7a
    MOV EAX,dword ptr [EAX]             ; 004d3c7d
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004d3c7f
    LEA EAX,[EDX + 0x8]                 ; 004d3c85
    MOV EAX,dword ptr [EAX]             ; 004d3c88
    MOV dword ptr [EBP + 0xffffff1a],EAX ; 004d3c8a
    LEA EAX,[EBX + 0x158]               ; 004d3c90
    PUSH EAX                            ; 004d3c96
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d3c97
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d3c9c
    ADD ESP,0x4                         ; 004d3c9f
    CMP EAX,0x3                         ; 004d3ca2
    JNC 0x004d3dac                      ; 004d3ca5
        ;   XREF to: 004d3dac (CONDITIONAL_JUMP)  ; LAB_004d3dac
    CMP EAX,0x1                         ; 004d3cab
    JNC 0x004d3cea                      ; 004d3cae
        ;   XREF to: 004d3cea (CONDITIONAL_JUMP)  ; LAB_004d3cea
    TEST EAX,EAX                        ; 004d3cb0
    JZ 0x004d3cea                       ; 004d3cb2
        ;   XREF to: 004d3cea (CONDITIONAL_JUMP)  ; LAB_004d3cea
        ;   Label: LAB_004d3cb2
    LEA EAX,[EBX + 0x23ac]              ; 004d3cb4
        ;   Label: LAB_004d3cb4
    FLD float ptr [EBP + 0xffffff12]    ; 004d3cba
    FADD float ptr [EAX]                ; 004d3cc0
    FLD float ptr [EBP + 0xffffff16]    ; 004d3cc2
    FXCH                                ; 004d3cc8
    FSTP float ptr [EBP + 0xffffff12]   ; 004d3cca
    FADD float ptr [EAX + 0x4]          ; 004d3cd0
    FLD float ptr [EBP + 0xffffff1a]    ; 004d3cd3
    FXCH                                ; 004d3cd9
    FSTP float ptr [EBP + 0xffffff16]   ; 004d3cdb
    FADD float ptr [EAX + 0x8]          ; 004d3ce1
    FSTP float ptr [EBP + 0xffffff1a]   ; 004d3ce4
    FLD float ptr [EBP + 0x92]          ; 004d3cea
        ;   Label: LAB_004d3cea
    FLD ST0                             ; 004d3cf0
    FMUL double ptr [0x0062aecd]        ; 004d3cf2 | DOUBLE_0062aecd
    FLD float ptr [EBX + 0x242c]        ; 004d3cf8
    FXCH                                ; 004d3cfe
    FSUBR ST0,ST1                       ; 004d3d00
    LEA EAX,[EBX + 0x2428]              ; 004d3d02
    FSTP ST1                            ; 004d3d08
    FSTP float ptr [EBX + 0x242c]       ; 004d3d0a
    FLD float ptr [EAX]                 ; 004d3d10
    FMUL ST1                            ; 004d3d12
    FSTP float ptr [EBP + 0xffffff2a]   ; 004d3d14
    FLD float ptr [EAX + 0x4]           ; 004d3d1a
    FMUL ST1                            ; 004d3d1d
    FSTP float ptr [EBP + 0xffffff2e]   ; 004d3d1f
    FMUL float ptr [EAX + 0x8]          ; 004d3d25
    FLD float ptr [EBP + 0xffffff16]    ; 004d3d28
    FLD float ptr [EBP + 0xffffff12]    ; 004d3d2e
    FADD float ptr [EBP + 0xffffff2a]   ; 004d3d34
    FLD float ptr [EBP + 0xffffff1a]    ; 004d3d3a
    FXCH                                ; 004d3d40
    FSTP float ptr [EBP + 0xffffff12]   ; 004d3d42
    FXCH                                ; 004d3d48
    FADD float ptr [EBP + 0xffffff2e]   ; 004d3d4a
    LEA EAX,[EBP + 0xffffff12]          ; 004d3d50
    FSTP float ptr [EBP + 0xffffff16]   ; 004d3d56
    FXCH                                ; 004d3d5c
    FSTP float ptr [EBP + 0xffffff32]   ; 004d3d5e
    PUSH EAX                            ; 004d3d64
    FADD float ptr [EBP + 0xffffff32]   ; 004d3d65
    PUSH EBX                            ; 004d3d6b
    FSTP float ptr [EBP + 0xffffff1a]   ; 004d3d6c
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 004d3d72
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004d3d77
    JMP 0x004d326d                      ; 004d3d7a
        ;   XREF to: 004d326d (UNCONDITIONAL_JUMP)  ; LAB_004d326d
    LEA EAX,[EBX + 0x158]               ; 004d3d7f
        ;   Label: LAB_004d3d7f
    PUSH EAX                            ; 004d3d85
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d3d86
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d3d8b
    ADD ESP,0x4                         ; 004d3d8e
    CMP EAX,0xd                         ; 004d3d91
    JZ 0x004d3c6c                       ; 004d3d94
        ;   XREF to: 004d3c6c (CONDITIONAL_JUMP)  ; LAB_004d3c6c
    CMP dword ptr [EBX + 0xdc],0x0      ; 004d3d9a
    JNZ 0x004d3c6c                      ; 004d3da1
        ;   XREF to: 004d3c6c (CONDITIONAL_JUMP)  ; LAB_004d3c6c
    JMP 0x004d326d                      ; 004d3da7
        ;   XREF to: 004d326d (UNCONDITIONAL_JUMP)  ; LAB_004d326d
    JBE 0x004d3cea                      ; 004d3dac
        ;   XREF to: 004d3cea (CONDITIONAL_JUMP)  ; LAB_004d3cea
        ;   Label: LAB_004d3dac
    CMP EAX,0x11                        ; 004d3db2
    JNC 0x004d3dbf                      ; 004d3db5
        ;   XREF to: 004d3dbf (CONDITIONAL_JUMP)  ; LAB_004d3dbf
    CMP EAX,0x10                        ; 004d3db7
    JMP 0x004d3cb2                      ; 004d3dba
        ;   XREF to: 004d3cb2 (UNCONDITIONAL_JUMP)  ; LAB_004d3cb2
    JBE 0x004d3cea                      ; 004d3dbf
        ;   XREF to: 004d3cea (CONDITIONAL_JUMP)  ; LAB_004d3cea
        ;   Label: LAB_004d3dbf
    CMP EAX,0x14                        ; 004d3dc5
    JC 0x004d3cb4                       ; 004d3dc8
        ;   XREF to: 004d3cb4 (CONDITIONAL_JUMP)  ; LAB_004d3cb4
    JBE 0x004d3cea                      ; 004d3dce
        ;   XREF to: 004d3cea (CONDITIONAL_JUMP)  ; LAB_004d3cea
    CMP EAX,0x15                        ; 004d3dd4
    JMP 0x004d3cb2                      ; 004d3dd7
        ;   XREF to: 004d3cb2 (UNCONDITIONAL_JUMP)  ; LAB_004d3cb2
    CMP dword ptr [EBX + 0xbe44],0x0    ; 004d3ddc
        ;   Label: LAB_004d3ddc
    JZ 0x004d327e                       ; 004d3de3
        ;   XREF to: 004d327e (CONDITIONAL_JUMP)  ; LAB_004d327e
    LEA EAX,[EBX + 0x1f738]             ; 004d3de9
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d3def
    TEST EAX,EAX                        ; 004d3df5
    JZ 0x004d327e                       ; 004d3df7
        ;   XREF to: 004d327e (CONDITIONAL_JUMP)  ; LAB_004d327e
    MOV AH,byte ptr [EBX + 0x1fbd4]     ; 004d3dfd
    TEST AH,0x3                         ; 004d3e03
    JZ 0x004d3e18                       ; 004d3e06
        ;   XREF to: 004d3e18 (CONDITIONAL_JUMP)  ; LAB_004d3e18
    MOV DH,AH                           ; 004d3e08
    AND DH,0xfc                         ; 004d3e0a
    MOV byte ptr [EBX + 0x1fbd4],DH     ; 004d3e0d
    JMP 0x004d327e                      ; 004d3e13
        ;   XREF to: 004d327e (UNCONDITIONAL_JUMP)  ; LAB_004d327e
    MOV DL,AH                           ; 004d3e18
        ;   Label: LAB_004d3e18
    OR DL,0x2                           ; 004d3e1a
    MOV byte ptr [EBX + 0x1fbd4],DL     ; 004d3e1d
    JMP 0x004d327e                      ; 004d3e23
        ;   XREF to: 004d327e (UNCONDITIONAL_JUMP)  ; LAB_004d327e
    CMP dword ptr [EAX + 0x2324],0x0    ; 004d3e28
        ;   Label: LAB_004d3e28
    SETZ AL                             ; 004d3e2f
    AND EAX,0xff                        ; 004d3e32
    MOV dword ptr [EDI + 0x2324],EAX    ; 004d3e37
    CMP dword ptr [EDI + 0x66c],0x1     ; 004d3e3d
    JNZ 0x004d32af                      ; 004d3e44
        ;   XREF to: 004d32af (CONDITIONAL_JUMP)  ; LAB_004d32af
    PUSH 0x62ae3d                       ; 004d3e4a | = "flashlit.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d3e4f
    PUSH EBX                            ; 004d3e55
    CALL dword ptr [EAX + 0x24]         ; 004d3e56
    ADD ESP,0x8                         ; 004d3e59
    JMP 0x004d32af                      ; 004d3e5c
        ;   XREF to: 004d32af (UNCONDITIONAL_JUMP)  ; LAB_004d32af
    FLD float ptr [EBP + 0x92]          ; 004d3e61
        ;   Label: LAB_004d3e61
    FDIV float ptr [0x0065e7ac]         ; 004d3e67 | FLOAT_0065e7ac
    FSUBR float ptr [EBX + 0x1fbd8]     ; 004d3e6d
    FST float ptr [EBX + 0x1fbd8]       ; 004d3e73
    FLDZ                                ; 004d3e79
    FCOMPP                              ; 004d3e7b
    FNSTSW AX                           ; 004d3e7d
    SAHF                                ; 004d3e7f
    JBE 0x004d3370                      ; 004d3e80
        ;   XREF to: 004d3370 (CONDITIONAL_JUMP)  ; LAB_004d3370
    MOV dword ptr [EBX + 0x1fbd8],0x0   ; 004d3e86
    JMP 0x004d3370                      ; 004d3e90
        ;   XREF to: 004d3370 (UNCONDITIONAL_JUMP)  ; LAB_004d3370
    FLD float ptr [EBP + 0x92]          ; 004d3e95
        ;   Label: LAB_004d3e95
    FDIV float ptr [0x0065e7ac]         ; 004d3e9b | FLOAT_0065e7ac
    MOV EAX,dword ptr [EBX + 0x1fbdc]   ; 004d3ea1
    MOV dword ptr [EBP + 0x5a],EAX      ; 004d3ea7
    FSUBR float ptr [EBP + 0x5a]        ; 004d3eaa
    FST float ptr [EBX + 0x1fbdc]       ; 004d3ead
    FLDZ                                ; 004d3eb3
    FCOMPP                              ; 004d3eb5
    FNSTSW AX                           ; 004d3eb7
    SAHF                                ; 004d3eb9
    JBE 0x004d3ec6                      ; 004d3eba
        ;   XREF to: 004d3ec6 (CONDITIONAL_JUMP)  ; LAB_004d3ec6
    MOV dword ptr [EBX + 0x1fbdc],0x0   ; 004d3ebc
    FLD float ptr [0x0065e7b4]          ; 004d3ec6 | FLOAT_0065e7b4
        ;   Label: LAB_004d3ec6
    FADD double ptr [0x0062aedd]        ; 004d3ecc | DOUBLE_0062aedd
    FLD float ptr [EBP + 0x5a]          ; 004d3ed2
    FXCH                                ; 004d3ed5
    FSTP float ptr [EBP + 0x52]         ; 004d3ed7
    FCOMP float ptr [EBP + 0x52]        ; 004d3eda
    FNSTSW AX                           ; 004d3edd
    SAHF                                ; 004d3edf
    JC 0x004d33f9                       ; 004d3ee0
        ;   XREF to: 004d33f9 (CONDITIONAL_JUMP)  ; LAB_004d33f9
    FLD float ptr [EBX + 0x1fbdc]       ; 004d3ee6
    FCOMP float ptr [EBP + 0x52]        ; 004d3eec
    FNSTSW AX                           ; 004d3eef
    SAHF                                ; 004d3ef1
    JNC 0x004d33f9                      ; 004d3ef2
        ;   XREF to: 004d33f9 (CONDITIONAL_JUMP)  ; LAB_004d33f9
    PUSH 0x62ae5b                       ; 004d3ef8 | = "undraw-s.wav @ .7"
    JMP 0x004d33ec                      ; 004d3efd
        ;   XREF to: 004d33ec (UNCONDITIONAL_JUMP)  ; LAB_004d33ec
    FLD float ptr [EBP + 0x92]          ; 004d3f02
        ;   Label: LAB_004d3f02
    FDIV float ptr [0x0065e7ac]         ; 004d3f08 | FLOAT_0065e7ac
    FSUBR float ptr [EBX + 0x1fbe0]     ; 004d3f0e
    FST float ptr [EBX + 0x1fbe0]       ; 004d3f14
    FLDZ                                ; 004d3f1a
    FCOMPP                              ; 004d3f1c
    FNSTSW AX                           ; 004d3f1e
    SAHF                                ; 004d3f20
    JBE 0x004d3431                      ; 004d3f21
        ;   XREF to: 004d3431 (CONDITIONAL_JUMP)  ; LAB_004d3431
    MOV dword ptr [EBX + 0x1fbe0],0x0   ; 004d3f27
    JMP 0x004d3431                      ; 004d3f31
        ;   XREF to: 004d3431 (UNCONDITIONAL_JUMP)  ; LAB_004d3431
    TEST EDI,EDI                        ; 004d3f36
        ;   Label: LAB_004d3f36
    JZ 0x004d3f71                       ; 004d3f38
        ;   XREF to: 004d3f71 (CONDITIONAL_JUMP)  ; LAB_004d3f71
    CMP dword ptr [EDI + 0x2324],0x0    ; 004d3f3a
    JZ 0x004d3f71                       ; 004d3f41
        ;   XREF to: 004d3f71 (CONDITIONAL_JUMP)  ; LAB_004d3f71
    LEA EAX,[EBX + 0x158]               ; 004d3f43
    PUSH EAX                            ; 004d3f49
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004d3f4a
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004d3f4f
    ADD ESP,0x4                         ; 004d3f52
    CMP EAX,0x5                         ; 004d3f55
    JZ 0x004d3f71                       ; 004d3f58
        ;   XREF to: 004d3f71 (CONDITIONAL_JUMP)  ; LAB_004d3f71
    FLD float ptr [EBP + 0x92]          ; 004d3f5a
    FDIV float ptr [0x0065e7a8]         ; 004d3f60 | FLOAT_0065e7a8
    FADD float ptr [EBX + 0x1fbe4]      ; 004d3f66
    JMP 0x004d3451                      ; 004d3f6c
        ;   XREF to: 004d3451 (UNCONDITIONAL_JUMP)  ; LAB_004d3451
    FLD float ptr [EBP + 0x92]          ; 004d3f71
        ;   Label: LAB_004d3f71
    FDIV float ptr [0x0065e7ac]         ; 004d3f77 | FLOAT_0065e7ac
    JMP 0x004d344b                      ; 004d3f7d
        ;   XREF to: 004d344b (UNCONDITIONAL_JUMP)  ; LAB_004d344b
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004d3f82
        ;   Label: LAB_004d3f82
    JZ 0x004d34ce                       ; 004d3f89
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    CMP dword ptr [EBX + 0x1fbec],0x0   ; 004d3f8f
    JNZ 0x004d34ce                      ; 004d3f96
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 004d3f9c
    JZ 0x004d3fb4                       ; 004d3fa3
        ;   XREF to: 004d3fb4 (CONDITIONAL_JUMP)  ; LAB_004d3fb4
    MOV dword ptr [EBX + 0x1fbec],0x3   ; 004d3fa5
    JMP 0x004d34ce                      ; 004d3faf
        ;   XREF to: 004d34ce (UNCONDITIONAL_JUMP)  ; LAB_004d34ce
    FLD float ptr [EBX + 0x1fbdc]       ; 004d3fb4
        ;   Label: LAB_004d3fb4
    FLDZ                                ; 004d3fba
    FCOMPP                              ; 004d3fbc
    FNSTSW AX                           ; 004d3fbe
    SAHF                                ; 004d3fc0
    JC 0x004d34ce                       ; 004d3fc1
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d3fc7
    CALL core_hero.cpp_CHero_FUN_004f2af0 ; 004d3fc8
        ;   XREF to: 004f2af0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2af0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d3fcd
    TEST EAX,EAX                        ; 004d3fd0
    JNZ 0x004d34ce                      ; 004d3fd2
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d3fd8
    CALL core_hero.cpp_CHero_FUN_004f2d70 ; 004d3fd9
        ;   XREF to: 004f2d70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2d70(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d3fde
    MOV EDI,EAX                         ; 004d3fe1
    CMP EAX,0x3                         ; 004d3fe3
    JA 0x004d4004                       ; 004d3fe6
        ;   XREF to: 004d4004 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4d2e8c]  ; 004d3fe8 | caseD_2 | caseD_0 | switchdataD_004d2e8c
        ;   Label: switchD
    PUSH 0x1                            ; 004d3fef
        ;   Label: caseD_3
    PUSH 0x12                           ; 004d3ff1
    LEA EAX,[EBX + 0x158]               ; 004d3ff3
    PUSH EAX                            ; 004d3ff9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d3ffa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d3fff
    JMP 0x004d400d                      ; 004d4002
        ;   XREF to: 004d400d (UNCONDITIONAL_JUMP)  ; caseD_0
    PUSH EBX                            ; 004d4004
        ;   Label: default
    CALL core_hero.cpp_CHero_FUN_004f2ed0 ; 004d4005
        ;   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2ed0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d400a
    TEST EDI,EDI                        ; 004d400d
        ;   Label: caseD_1
    JNZ 0x004d34ce                      ; 004d400f
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d4015
    CALL core_hero.cpp_CHero_FUN_004f2c40 ; 004d4016
        ;   XREF to: 004f2c40 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2c40(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d401b
    TEST EAX,EAX                        ; 004d401e
    JNZ 0x004d34ce                      ; 004d4020
        ;   XREF to: 004d34ce (CONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d4026
    CALL core_hero.cpp_CHero_FUN_004f3120 ; 004d4027
        ;   XREF to: 004f3120 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f3120(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d402c
    TEST EAX,EAX                        ; 004d402f
    JNZ 0x004d404e                      ; 004d4031
        ;   XREF to: 004d404e (CONDITIONAL_JUMP)  ; LAB_004d404e
    PUSH EBX                            ; 004d4033
    CALL core_hero.cpp_CHero_FUN_004f2f50 ; 004d4034
        ;   XREF to: 004f2f50 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f2f50(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4039
    TEST EAX,EAX                        ; 004d403c
    JZ 0x004d4066                       ; 004d403e
        ;   XREF to: 004d4066 (CONDITIONAL_JUMP)  ; LAB_004d4066
    PUSH EBX                            ; 004d4040
    CALL core_hero.cpp_CHero_FUN_004f30f0 ; 004d4041
        ;   XREF to: 004f30f0 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_FUN_004f30f0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d4046
    JMP 0x004d34ce                      ; 004d4049
        ;   XREF to: 004d34ce (UNCONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH 0x1                            ; 004d404e
        ;   Label: LAB_004d404e
    PUSH 0xd                            ; 004d4050
    LEA EAX,[EBX + 0x158]               ; 004d4052
    PUSH EAX                            ; 004d4058
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d4059
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d405e
    JMP 0x004d34ce                      ; 004d4061
        ;   XREF to: 004d34ce (UNCONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d4066
        ;   Label: LAB_004d4066
    CALL core_gabriela.cpp_FUN_004d5c60 ; 004d4067
        ;   XREF to: 004d5c60 (UNCONDITIONAL_CALL)  ; int core_gabriela.cpp_FUN_004d5c60()
    ADD ESP,0x4                         ; 004d406c
    JMP 0x004d34ce                      ; 004d406f
        ;   XREF to: 004d34ce (UNCONDITIONAL_JUMP)  ; LAB_004d34ce
    PUSH EBX                            ; 004d4074
        ;   Label: LAB_004d4074
    CALL core_hero.cpp_CHero_FUN_004f3350 ; 004d4075
        ;   XREF to: 004f3350 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_FUN_004f3350(CHero * this_ptr)
    ADD ESP,0x4                         ; 004d407a
    JMP 0x004d35ec                      ; 004d407d
        ;   XREF to: 004d35ec (UNCONDITIONAL_JUMP)  ; LAB_004d35ec
    CMP dword ptr [EBX + 0xbe38],0x0    ; 004d4082
        ;   Label: LAB_004d4082
    JZ 0x004d4164                       ; 004d4089
        ;   XREF to: 004d4164 (CONDITIONAL_JUMP)  ; LAB_004d4164
    FLD float ptr [EBP + 0x92]          ; 004d408f
    FMUL double ptr [0x0062aef5]        ; 004d4095 | DOUBLE_0062aef5
    FADD float ptr [EBX + 0x5fa84]      ; 004d409b
    FST float ptr [EBX + 0x5fa84]       ; 004d40a1
    FCOMP float ptr [0x0065e7f0]        ; 004d40a7 | FLOAT_0065e7f0
    FNSTSW AX                           ; 004d40ad
    SAHF                                ; 004d40af
    JBE 0x004d40d1                      ; 004d40b0
        ;   XREF to: 004d40d1 (CONDITIONAL_JUMP)  ; LAB_004d40d1
    MOV dword ptr [EBX + 0xbe38],0x0    ; 004d40b2
    MOV dword ptr [EBX + 0x1fbec],0x2   ; 004d40bc
    MOV EAX,[0x0065e7f0]                ; 004d40c6 | FLOAT_0065e7f0
    MOV dword ptr [EBX + 0x5fa84],EAX   ; 004d40cb
    MOV EAX,dword ptr [EBX + 0x1fc04]   ; 004d40d1
        ;   Label: LAB_004d40d1
    MOV dword ptr [EBP + -0x5e],EAX     ; 004d40d7
    LEA EAX,[EBP + -0x5e]               ; 004d40da
    PUSH EAX                            ; 004d40dd
    LEA EAX,[EBP + 0xfffffeae]          ; 004d40de
    XOR EDX,EDX                         ; 004d40e4
    PUSH EAX                            ; 004d40e6
    MOV dword ptr [EBP + -0x56],EDX     ; 004d40e7
    MOV dword ptr [EBP + -0x5a],EDX     ; 004d40ea
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004d40ed
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x5fa84]   ; 004d40f2
    ADD ESP,0x8                         ; 004d40f8
    MOV dword ptr [EBP + -0x3e],EAX     ; 004d40fb
    LEA EAX,[EBP + -0x46]               ; 004d40fe
    PUSH EAX                            ; 004d4101
    LEA EAX,[EBP + -0x76]               ; 004d4102
    PUSH EAX                            ; 004d4105
    LEA EAX,[EBP + 0xfffffeae]          ; 004d4106
    XOR EDI,EDI                         ; 004d410c
    PUSH EAX                            ; 004d410e
    MOV dword ptr [EBP + -0x46],EDI     ; 004d410f
    MOV dword ptr [EBP + -0x42],EDI     ; 004d4112
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004d4115
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004d411a
    PUSH EAX                            ; 004d411d
    LEA EAX,[EBP + -0xa]                ; 004d411e
    PUSH EAX                            ; 004d4121
    PUSH EBX                            ; 004d4122
    ADD ESI,0x57c                       ; 004d4123
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 004d4129
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 004d412e
    CMP ESI,EAX                         ; 004d4131
    JZ 0x004d4145                       ; 004d4133
        ;   XREF to: 004d4145 (CONDITIONAL_JUMP)  ; LAB_004d4145
    MOV EDX,dword ptr [EAX]             ; 004d4135
    MOV dword ptr [ESI],EDX             ; 004d4137
    MOV EDX,dword ptr [EAX + 0x4]       ; 004d4139
    MOV dword ptr [ESI + 0x4],EDX       ; 004d413c
    MOV EDX,dword ptr [EAX + 0x8]       ; 004d413f
    MOV dword ptr [ESI + 0x8],EDX       ; 004d4142
    CMP dword ptr [EBX + 0x1fbec],0x2   ; 004d4145
        ;   Label: LAB_004d4145
    JZ 0x004d363a                       ; 004d414c
        ;   XREF to: 004d363a (CONDITIONAL_JUMP)  ; LAB_004d363a
    CMP dword ptr [EBX + 0x1fbec],0x1   ; 004d4152
        ;   Label: LAB_004d4152
    JZ 0x004d3661                       ; 004d4159
        ;   XREF to: 004d3661 (CONDITIONAL_JUMP)  ; LAB_004d3661
    JMP 0x004d368e                      ; 004d415f
        ;   XREF to: 004d368e (UNCONDITIONAL_JUMP)  ; LAB_004d368e
    MOV dword ptr [EBX + 0x1fbec],0x2   ; 004d4164
        ;   Label: LAB_004d4164
    JMP 0x004d40d1                      ; 004d416e
        ;   XREF to: 004d40d1 (UNCONDITIONAL_JUMP)  ; LAB_004d40d1
    MOV dword ptr [EBX + 0xbe38],ESI    ; 004d4173
        ;   Label: LAB_004d4173
    JMP 0x004d368e                      ; 004d4179
        ;   XREF to: 004d368e (UNCONDITIONAL_JUMP)  ; LAB_004d368e
    MOV dword ptr [EBX + 0xfc],0x1      ; 004d417e
        ;   Label: LAB_004d417e
    LEA ESP,[EBP + 0x7a]                ; 004d4188
    POP EBP                             ; 004d418b
    POP EDI                             ; 004d418c
    POP ESI                             ; 004d418d
    POP EBX                             ; 004d418e
    RET                                 ; 004d418f

