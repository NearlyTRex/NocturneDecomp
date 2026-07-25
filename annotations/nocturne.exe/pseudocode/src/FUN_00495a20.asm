; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00495a20(int param_1,float param_2)
;
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
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
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
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00495a0c = 00496b8d
;   TerminatedCString s_s_confused_while_walking_00581f93
;   TerminatedCString s_flashlit_wav_00581fbd
;   TerminatedCString s_draw_f_wav_1_5_00581fca
;   TerminatedCString s_undraw_s_wav_7_00581fdb
;   double DOUBLE_00581ff2 = 12.5663706140000
;   double DOUBLE_00581ffa = 0.333333333333333
;   float FLOAT_00582002 = 0.5
;   double DOUBLE_0058200a = 3
;   double DOUBLE_00582012 = 5
;   double DOUBLE_0058201a = 0.785398163375000
;   double DOUBLE_00582022 = 3.14159265350000
;   double DOUBLE_0058202a = -1.57079632675000
;   float FLOAT_00582032 = 3.141593
;   double DOUBLE_0058203a = 1.57079632675000
;   ... and 27 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_cloth.cpp_CCloth_process_FUN_00436e50
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495a20
        ;   Label: FUN_00495a20
    PUSH ESI                            ; 00495a21
    PUSH EDI                            ; 00495a22
    PUSH EBP                            ; 00495a23
    MOV EBP,ESP                         ; 00495a24
    SUB ESP,0x1cc                       ; 00495a26
    SUB EBP,0x7a                        ; 00495a2c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00495a2f
    PUSH dword ptr [EBP + 0x92]         ; 00495a35
    PUSH EBX                            ; 00495a3b
    CALL core_charactr.cpp_FUN_004259f0 ; 00495a3c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 00495a41
    TEST EAX,EAX                        ; 00495a44
    JZ 0x00496280                       ; 00495a46
        ;   XREF to: 00496280 (CONDITIONAL_JUMP)  ; LAB_00496280
    CMP dword ptr [EBX + 0xbc90],0x2    ; 00495a4c
    JZ 0x00496288                       ; 00495a53
        ;   XREF to: 00496288 (CONDITIONAL_JUMP)  ; LAB_00496288
    FLD float ptr [EBX + 0xbc8c]        ; 00495a59
        ;   Label: LAB_00495a59
    FSUB float ptr [EBP + 0x92]         ; 00495a5f
    FST float ptr [EBX + 0xbc8c]        ; 00495a65
    FLDZ                                ; 00495a6b
    FCOMPP                              ; 00495a6d
    FNSTSW AX                           ; 00495a6f
    SAHF                                ; 00495a71
    JBE 0x00495a7e                      ; 00495a72
        ;   XREF to: 00495a7e (CONDITIONAL_JUMP)  ; LAB_00495a7e
    MOV dword ptr [EBX + 0xbc8c],0x0    ; 00495a74
    LEA EAX,[EBP + 0xffffff7e]          ; 00495a7e
        ;   Label: LAB_00495a7e
    PUSH EAX                            ; 00495a84
    PUSH EBX                            ; 00495a85
    CALL FUN_00497870                   ; 00495a86
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined FUN_00497870()
    ADD ESP,0x8                         ; 00495a8b
    PUSH EAX                            ; 00495a8e
    LEA EAX,[EBP + 0xffffff06]          ; 00495a8f
    PUSH EAX                            ; 00495a95
    PUSH EBX                            ; 00495a96
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00495a97
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00495a9c
    XOR ESI,ESI                         ; 00495a9f
    LEA EAX,[EBX + 0x23a4]              ; 00495aa1
    PUSH dword ptr [EBP + 0x92]         ; 00495aa7
    MOV dword ptr [EAX + 0x8],0x0       ; 00495aad
    PUSH EBX                            ; 00495ab4
    MOV EDX,dword ptr [EAX + 0x8]       ; 00495ab5
    MOV dword ptr [EAX + 0x4],EDX       ; 00495ab8
    MOV EDX,dword ptr [EAX + 0x4]       ; 00495abb
    MOV dword ptr [EAX],EDX             ; 00495abe
    CALL core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410 ; 00495ac0
        ;   XREF to: 00497410 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410()
    FLD float ptr [EBX + 0x2434]        ; 00495ac5
    FLDZ                                ; 00495acb
    ADD ESP,0x8                         ; 00495acd
    FCOMPP                              ; 00495ad0
    FNSTSW AX                           ; 00495ad2
    SAHF                                ; 00495ad4
    JC 0x00495adc                       ; 00495ad5
        ;   XREF to: 00495adc (CONDITIONAL_JUMP)  ; LAB_00495adc
    MOV ESI,0x1                         ; 00495ad7
    CMP dword ptr [EBX + 0x2590],0x0    ; 00495adc
        ;   Label: LAB_00495adc
    JZ 0x00495aea                       ; 00495ae3
        ;   XREF to: 00495aea (CONDITIONAL_JUMP)  ; LAB_00495aea
    MOV ESI,0x1                         ; 00495ae5
    CMP dword ptr [EBX + 0x1fa0c],0x0   ; 00495aea
        ;   Label: LAB_00495aea
    JZ 0x00495af8                       ; 00495af1
        ;   XREF to: 00495af8 (CONDITIONAL_JUMP)  ; LAB_00495af8
    MOV ESI,0x1                         ; 00495af3
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 00495af8
        ;   Label: LAB_00495af8
    JZ 0x00495b06                       ; 00495aff
        ;   XREF to: 00495b06 (CONDITIONAL_JUMP)  ; LAB_00495b06
    MOV ESI,0x1                         ; 00495b01
    PUSH 0x8                            ; 00495b06
        ;   Label: LAB_00495b06
    LEA EAX,[EBX + 0x150]               ; 00495b08
    PUSH EAX                            ; 00495b0e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495b0f
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495b14
    ADD ESP,0x8                         ; 00495b17
    FLD float ptr [EBP + 0x76]          ; 00495b1a
    FLDZ                                ; 00495b1d
    FCOMPP                              ; 00495b1f
    FNSTSW AX                           ; 00495b21
    SAHF                                ; 00495b23
    JNC 0x00495b2b                      ; 00495b24
        ;   XREF to: 00495b2b (CONDITIONAL_JUMP)  ; LAB_00495b2b
    MOV ESI,0x1                         ; 00495b26
    PUSH 0xb                            ; 00495b2b
        ;   Label: LAB_00495b2b
    LEA EAX,[EBX + 0x150]               ; 00495b2d
    PUSH EAX                            ; 00495b33
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495b34
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495b39
    ADD ESP,0x8                         ; 00495b3c
    FLD float ptr [EBP + 0x76]          ; 00495b3f
    FLDZ                                ; 00495b42
    FCOMPP                              ; 00495b44
    FNSTSW AX                           ; 00495b46
    SAHF                                ; 00495b48
    JNC 0x00495b50                      ; 00495b49
        ;   XREF to: 00495b50 (CONDITIONAL_JUMP)  ; LAB_00495b50
    MOV ESI,0x1                         ; 00495b4b
    PUSH 0xc                            ; 00495b50
        ;   Label: LAB_00495b50
    LEA EAX,[EBX + 0x150]               ; 00495b52
    PUSH EAX                            ; 00495b58
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495b59
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495b5e
    ADD ESP,0x8                         ; 00495b61
    FLD float ptr [EBP + 0x76]          ; 00495b64
    FLDZ                                ; 00495b67
    FCOMPP                              ; 00495b69
    FNSTSW AX                           ; 00495b6b
    SAHF                                ; 00495b6d
    JNC 0x00495b75                      ; 00495b6e
        ;   XREF to: 00495b75 (CONDITIONAL_JUMP)  ; LAB_00495b75
    MOV ESI,0x1                         ; 00495b70
    PUSH 0x12                           ; 00495b75
        ;   Label: LAB_00495b75
    LEA EAX,[EBX + 0x150]               ; 00495b77
    PUSH EAX                            ; 00495b7d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495b7e
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495b83
    ADD ESP,0x8                         ; 00495b86
    FLD float ptr [EBP + 0x76]          ; 00495b89
    FLDZ                                ; 00495b8c
    FCOMPP                              ; 00495b8e
    FNSTSW AX                           ; 00495b90
    SAHF                                ; 00495b92
    JNC 0x00495b9a                      ; 00495b93
        ;   XREF to: 00495b9a (CONDITIONAL_JUMP)  ; LAB_00495b9a
    MOV ESI,0x1                         ; 00495b95
    MOV dword ptr [EBX + 0x2430],0x0    ; 00495b9a
        ;   Label: LAB_00495b9a
    MOV ECX,dword ptr [EBX + 0x2408]    ; 00495ba4
    XOR EDX,EDX                         ; 00495baa
    MOV dword ptr [EBX + 0x242c],0x0    ; 00495bac
    MOV dword ptr [EBP + 0x6a],EDX      ; 00495bb6
    TEST ECX,ECX                        ; 00495bb9
    JZ 0x00495ca0                       ; 00495bbb
        ;   XREF to: 00495ca0 (CONDITIONAL_JUMP)  ; LAB_00495ca0
    PUSH 0x1                            ; 00495bc1
    LEA EDI,[EBX + 0x150]               ; 00495bc3
    PUSH EDI                            ; 00495bc9
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495bca
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495bcf
    ADD ESP,0x8                         ; 00495bd2
    FLD float ptr [EBP + 0x76]          ; 00495bd5
    FMUL float ptr [0x01c71358]         ; 00495bd8 | DAT_01c71358
    PUSH 0x2                            ; 00495bde
    FADD float ptr [EBX + 0x242c]       ; 00495be0
    PUSH EDI                            ; 00495be6
    FSTP float ptr [EBX + 0x242c]       ; 00495be7
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495bed
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495bf2
    ADD ESP,0x8                         ; 00495bf5
    FLD float ptr [EBP + 0x76]          ; 00495bf8
    FMUL float ptr [0x01c7135c]         ; 00495bfb | DAT_01c7135c
    PUSH 0x3                            ; 00495c01
    FADD float ptr [EBX + 0x242c]       ; 00495c03
    PUSH EDI                            ; 00495c09
    FSTP float ptr [EBX + 0x242c]       ; 00495c0a
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495c10
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495c15
    ADD ESP,0x8                         ; 00495c18
    FLD float ptr [EBP + 0x76]          ; 00495c1b
    FMUL float ptr [0x01c71360]         ; 00495c1e | DAT_01c71360
    PUSH 0x14                           ; 00495c24
    FSUBR float ptr [EBX + 0x242c]      ; 00495c26
    PUSH EDI                            ; 00495c2c
    FSTP float ptr [EBX + 0x242c]       ; 00495c2d
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495c33
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495c38
    ADD ESP,0x8                         ; 00495c3b
    FLD float ptr [EBP + 0x76]          ; 00495c3e
    FMUL float ptr [0x0059dcd8]         ; 00495c41 | FLOAT_0059dcd8
    PUSH 0x15                           ; 00495c47
    FLDZ                                ; 00495c49
    FSUBRP                              ; 00495c4b
    PUSH EDI                            ; 00495c4d
    FSTP float ptr [EBP + 0x6a]         ; 00495c4e
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00495c51
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    FLD float ptr [EBP + 0x92]          ; 00495c56
    MOV dword ptr [EBP + 0x76],EAX      ; 00495c5c
    FMUL double ptr [0x00581ff2]        ; 00495c5f | DOUBLE_00581ff2
    FLD float ptr [EBP + 0x76]          ; 00495c65
    FMUL float ptr [0x0059dcd8]         ; 00495c68 | FLOAT_0059dcd8
    ADD ESP,0x8                         ; 00495c6e
    MOV EAX,[0x005b9354]                ; 00495c71 | DAT_005b9354
    FXCH                                ; 00495c76
    FSTP float ptr [EBX + 0x2430]       ; 00495c78
    FADD float ptr [EBP + 0x6a]         ; 00495c7e
    MOV EDI,dword ptr [EAX + 0x228]     ; 00495c81 | DAT_01c77814
    FSTP float ptr [EBP + 0x6a]         ; 00495c87
    TEST EDI,EDI                        ; 00495c8a
    JZ 0x00495ca0                       ; 00495c8c
        ;   XREF to: 00495ca0 (CONDITIONAL_JUMP)  ; LAB_00495ca0
    FLD float ptr [EBX + 0x2430]        ; 00495c8e
    FMUL double ptr [0x00581ffa]        ; 00495c94 | DOUBLE_00581ffa
    FSTP float ptr [EBX + 0x2430]       ; 00495c9a
    FLD float ptr [EBP + 0x92]          ; 00495ca0
        ;   Label: LAB_00495ca0
    FLD float ptr [EBX + 0x242c]        ; 00495ca6
    FMUL ST1                            ; 00495cac
    FLD float ptr [EBP + 0x6a]          ; 00495cae
    FMULP ST2                           ; 00495cb1
    MOV EAX,dword ptr [EBX + 0x1fa14]   ; 00495cb3
    FXCH                                ; 00495cb9
    FSTP float ptr [EBP + 0x6a]         ; 00495cbb
    FSTP float ptr [EBX + 0x242c]       ; 00495cbe
    TEST EAX,EAX                        ; 00495cc4
    JZ 0x004962a3                       ; 00495cc6
        ;   XREF to: 004962a3 (CONDITIONAL_JUMP)  ; LAB_004962a3
    ADD EAX,0x2cc                       ; 00495ccc
    PUSH EAX                            ; 00495cd1
    LEA EAX,[EBP + 0xffffff5a]          ; 00495cd2
    PUSH EAX                            ; 00495cd8
    MOV EDI,dword ptr [EBX + 0x1fa14]   ; 00495cd9
    PUSH EDI                            ; 00495cdf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00495ce0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    FLD float ptr [EBX + 0x24]          ; 00495ce5
    ADD ESP,0xc                         ; 00495ce8
    FCOMP float ptr [EAX + 0x4]         ; 00495ceb
    FNSTSW AX                           ; 00495cee
    SAHF                                ; 00495cf0
    JBE 0x00495d9d                      ; 00495cf1
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    XOR EAX,EAX                         ; 00495cf7
    MOV dword ptr [EBX + 0x1fa14],0x0   ; 00495cf9
    MOV dword ptr [EBP + -0x6a],EAX     ; 00495d03
    LEA EAX,[EBP + -0x6a]               ; 00495d06
    MOV EDX,0x3f000000                  ; 00495d09
    PUSH EAX                            ; 00495d0e
    LEA EAX,[EBP + -0x3a]               ; 00495d0f
    MOV ECX,0x40800000                  ; 00495d12
    PUSH EAX                            ; 00495d17
    PUSH EBX                            ; 00495d18
    MOV dword ptr [EBP + -0x66],EDX     ; 00495d19
    MOV dword ptr [EBP + -0x62],ECX     ; 00495d1c
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00495d1f
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 00495d24
    LEA EAX,[EBX + 0x20]                ; 00495d26
    FLD float ptr [EDX]                 ; 00495d29
    FADD float ptr [EAX]                ; 00495d2b
    FSTP float ptr [EAX]                ; 00495d2d
    FLD float ptr [EDX + 0x4]           ; 00495d2f
    FADD float ptr [EAX + 0x4]          ; 00495d32
    ADD ESP,0xc                         ; 00495d35
    FSTP float ptr [EAX + 0x4]          ; 00495d38
    FLD float ptr [EDX + 0x8]           ; 00495d3b
    FADD float ptr [EAX + 0x8]          ; 00495d3e
    PUSH 0x0                            ; 00495d41
    FSTP float ptr [EAX + 0x8]          ; 00495d43
    PUSH dword ptr [EBX + 0x2dd4]       ; 00495d46
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00495d4c
    PUSH EBX                            ; 00495d52
    CALL dword ptr [EDX + 0x38]         ; 00495d53
    MOV dword ptr [EBP + 0x76],EAX      ; 00495d56
    MOV EAX,dword ptr [EBP + 0x76]      ; 00495d59
    MOV dword ptr [EBX + 0x240c],EAX    ; 00495d5c
    FLD float ptr [EBX + 0x240c]        ; 00495d62
    FADD double ptr [0x0058204a]        ; 00495d68 | DOUBLE_0058204a
    ADD ESP,0xc                         ; 00495d6e
    FLD float ptr [EBX + 0x24]          ; 00495d71
    FCOMPP                              ; 00495d74
    FNSTSW AX                           ; 00495d76
    SAHF                                ; 00495d78
    JNC 0x0049629c                      ; 00495d79
        ;   XREF to: 0049629c (CONDITIONAL_JUMP)  ; LAB_0049629c
    MOV EAX,0x1                         ; 00495d7f
    PUSH 0x1                            ; 00495d84
        ;   Label: LAB_00495d84
    PUSH 0x0                            ; 00495d86
    MOV dword ptr [EBX + 0x2408],EAX    ; 00495d88
    LEA EAX,[EBX + 0x150]               ; 00495d8e
        ;   Label: LAB_00495d8e
    PUSH EAX                            ; 00495d94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00495d95
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_00495d95
    ADD ESP,0xc                         ; 00495d9a
        ;   Label: LAB_00495d9a
    CMP dword ptr [EBX + 0x1fa14],0x0   ; 00495d9d
        ;   Label: LAB_00495d9d
    JZ 0x004967e4                       ; 00495da4
        ;   XREF to: 004967e4 (CONDITIONAL_JUMP)  ; LAB_004967e4
    LEA EDI,[EBX + 0x23a4]              ; 00495daa
    PUSH EDI                            ; 00495db0
    LEA EAX,[EBP + 0x1a]                ; 00495db1
    PUSH EAX                            ; 00495db4
    PUSH EBX                            ; 00495db5
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00495db6
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 00495dbb
    LEA EAX,[EBX + 0x20]                ; 00495dbd
    FLD float ptr [EDX]                 ; 00495dc0
    FADD float ptr [EAX]                ; 00495dc2
    FSTP float ptr [EAX]                ; 00495dc4
    FLD float ptr [EDX + 0x4]           ; 00495dc6
    FADD float ptr [EAX + 0x4]          ; 00495dc9
    FSTP float ptr [EAX + 0x4]          ; 00495dcc
    FLD float ptr [EDX + 0x8]           ; 00495dcf
    FADD float ptr [EAX + 0x8]          ; 00495dd2
    FSTP float ptr [EAX + 0x8]          ; 00495dd5
    MOV dword ptr [EDI + 0x8],0x0       ; 00495dd8
    ADD ESP,0xc                         ; 00495ddf
    MOV EAX,dword ptr [EDI + 0x8]       ; 00495de2
    MOV dword ptr [EDI + 0x4],EAX       ; 00495de5
    MOV EAX,dword ptr [EDI + 0x4]       ; 00495de8
    MOV dword ptr [EDI],EAX             ; 00495deb
    PUSH EBX                            ; 00495ded
        ;   Label: LAB_00495ded
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00495dee
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 00495df3
    TEST ESI,ESI                        ; 00495df6
    JZ 0x0049695c                       ; 00495df8
        ;   XREF to: 0049695c (CONDITIONAL_JUMP)  ; LAB_0049695c
    MOV ECX,dword ptr [0x00764ad4]      ; 00495dfe | CDemonActorType_00764a9c.name_hash
        ;   Label: LAB_00495dfe
    PUSH ECX                            ; 00495e04
    MOV EDI,dword ptr [EBX + 0x24ac]    ; 00495e05
    PUSH EDI                            ; 00495e0b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00495e0c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00495e11
    MOV EDI,EAX                         ; 00495e14
    TEST EAX,EAX                        ; 00495e16
    JZ 0x00495eb8                       ; 00495e18
        ;   XREF to: 00495eb8 (CONDITIONAL_JUMP)  ; LAB_00495eb8
    CMP dword ptr [EBX + 0xbca8],0x0    ; 00495e1e
    JZ 0x00495e2f                       ; 00495e25
        ;   XREF to: 00495e2f (CONDITIONAL_JUMP)  ; LAB_00495e2f
    TEST ESI,ESI                        ; 00495e27
    JZ 0x004969a8                       ; 00495e29
        ;   XREF to: 004969a8 (CONDITIONAL_JUMP)  ; LAB_004969a8
    CMP dword ptr [EDI + 0x231c],0x0    ; 00495e2f
        ;   Label: LAB_00495e2f
    JZ 0x00495eb8                       ; 00495e36
        ;   XREF to: 00495eb8 (CONDITIONAL_JUMP)  ; LAB_00495eb8
    FLD float ptr [EBX + 0xbcbc]        ; 00495e3c
    FMUL double ptr [0x00582022]        ; 00495e42 | DOUBLE_00582022
    FMUL double ptr [0x0058205a]        ; 00495e48 | DOUBLE_0058205a
    FMUL float ptr [EBP + 0x92]         ; 00495e4e
    FLD float ptr [EBX + 0x1fa50]       ; 00495e54
    FXCH                                ; 00495e5a
    FADD ST0,ST1                        ; 00495e5c
    PUSH EBX                            ; 00495e5e
    FSTP ST1                            ; 00495e5f
    FSTP float ptr [EBX + 0x1fa50]      ; 00495e61
    CALL FUN_00497810                   ; 00495e67
        ;   XREF to: 00497810 (UNCONDITIONAL_CALL)  ; undefined FUN_00497810()
    MOV dword ptr [EBP + 0x76],EAX      ; 00495e6c
    ADD ESP,0x4                         ; 00495e6f
    FLD float ptr [EBP + 0x76]          ; 00495e72
    PUSH EBX                            ; 00495e75
    FSTP float ptr [EBP + 0x42]         ; 00495e76
    CALL FUN_00497860                   ; 00495e79
        ;   XREF to: 00497860 (UNCONDITIONAL_CALL)  ; undefined FUN_00497860()
    FLD float ptr [EBX + 0x1fa50]       ; 00495e7e
    MOV dword ptr [EBP + 0x76],EAX      ; 00495e84
    ADD ESP,0x4                         ; 00495e87
    MOV EAX,dword ptr [EBP + 0x76]      ; 00495e8a
    MOV dword ptr [EBP + 0x3e],EAX      ; 00495e8d
    FCOMP float ptr [EBP + 0x42]        ; 00495e90
    FNSTSW AX                           ; 00495e93
    SAHF                                ; 00495e95
    JNC 0x00495ea1                      ; 00495e96
        ;   XREF to: 00495ea1 (CONDITIONAL_JUMP)  ; LAB_00495ea1
    MOV EAX,dword ptr [EBP + 0x42]      ; 00495e98
    MOV dword ptr [EBX + 0x1fa50],EAX   ; 00495e9b
    FLD float ptr [EBX + 0x1fa50]       ; 00495ea1
        ;   Label: LAB_00495ea1
    FCOMP float ptr [EBP + 0x3e]        ; 00495ea7
    FNSTSW AX                           ; 00495eaa
    SAHF                                ; 00495eac
    JBE 0x00495eb8                      ; 00495ead
        ;   XREF to: 00495eb8 (CONDITIONAL_JUMP)  ; LAB_00495eb8
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00495eaf
    MOV dword ptr [EBX + 0x1fa50],EAX   ; 00495eb2
    TEST byte ptr [EBX + 0x1fa3c],0x1   ; 00495eb8
        ;   Label: LAB_00495eb8
    JZ 0x004969e1                       ; 00495ebf
        ;   XREF to: 004969e1 (CONDITIONAL_JUMP)  ; LAB_004969e1
    FLD float ptr [EBP + 0x92]          ; 00495ec5
    FDIV float ptr [0x0059dc98]         ; 00495ecb | FLOAT_0059dc98
    FADD float ptr [EBX + 0x1fa40]      ; 00495ed1
    FST float ptr [EBX + 0x1fa40]       ; 00495ed7
    FLD1                                ; 00495edd
    FCOMPP                              ; 00495edf
    FNSTSW AX                           ; 00495ee1
    SAHF                                ; 00495ee3
    JNC 0x00495ef0                      ; 00495ee4
        ;   XREF to: 00495ef0 (CONDITIONAL_JUMP)  ; LAB_00495ef0
    MOV dword ptr [EBX + 0x1fa40],0x3f800000 ; 00495ee6
    TEST byte ptr [EBX + 0x1fa3c],0x2   ; 00495ef0
        ;   Label: LAB_00495ef0
    JZ 0x00496a15                       ; 00495ef7
        ;   XREF to: 00496a15 (CONDITIONAL_JUMP)  ; LAB_00496a15
    FLD float ptr [EBP + 0x92]          ; 00495efd
    FDIV float ptr [0x0059dc98]         ; 00495f03 | FLOAT_0059dc98
    MOV EAX,dword ptr [EBX + 0x1fa44]   ; 00495f09
    MOV dword ptr [EBP + 0x46],EAX      ; 00495f0f
    FADD float ptr [EBP + 0x46]         ; 00495f12
    FST float ptr [EBX + 0x1fa44]       ; 00495f15
    FLD1                                ; 00495f1b
    FCOMPP                              ; 00495f1d
    FNSTSW AX                           ; 00495f1f
    SAHF                                ; 00495f21
    JNC 0x00495f2e                      ; 00495f22
        ;   XREF to: 00495f2e (CONDITIONAL_JUMP)  ; LAB_00495f2e
    MOV dword ptr [EBX + 0x1fa44],0x3f800000 ; 00495f24
    FLD float ptr [0x0059dca4]          ; 00495f2e | FLOAT_0059dca4
        ;   Label: LAB_00495f2e
    FADD double ptr [0x0058206a]        ; 00495f34 | DOUBLE_0058206a
    FLD float ptr [EBP + 0x46]          ; 00495f3a
    FXCH                                ; 00495f3d
    FSTP float ptr [EBP + 0x4a]         ; 00495f3f
    FCOMP float ptr [EBP + 0x4a]        ; 00495f42
    FNSTSW AX                           ; 00495f45
    SAHF                                ; 00495f47
    JA 0x00495f79                       ; 00495f48
        ;   XREF to: 00495f79 (CONDITIONAL_JUMP)  ; LAB_00495f79
    FLD float ptr [EBX + 0x1fa44]       ; 00495f4a
    FCOMP float ptr [EBP + 0x4a]        ; 00495f50
    FNSTSW AX                           ; 00495f53
    SAHF                                ; 00495f55
    JBE 0x00495f79                      ; 00495f56
        ;   XREF to: 00495f79 (CONDITIONAL_JUMP)  ; LAB_00495f79
    MOV ECX,dword ptr [0x005b9354]      ; 00495f58 | DAT_005b9354
    PUSH ECX                            ; 00495f5e | DAT_01c775ec
    CALL FUN_004a3a70                   ; 00495f5f
        ;   XREF to: 004a3a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3a70()
    ADD ESP,0x4                         ; 00495f64
    PUSH 0x581fca                       ; 00495f67 | = "draw-f.wav @ 1.5"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00495f6c
        ;   Label: LAB_00495f6c
    PUSH EBX                            ; 00495f72
    CALL dword ptr [EAX + 0x24]         ; 00495f73
    ADD ESP,0x8                         ; 00495f76
    TEST byte ptr [EBX + 0x1fa3c],0x3   ; 00495f79
        ;   Label: LAB_00495f79
    JZ 0x00496a82                       ; 00495f80
        ;   XREF to: 00496a82 (CONDITIONAL_JUMP)  ; LAB_00496a82
    FLD float ptr [EBP + 0x92]          ; 00495f86
    FDIV float ptr [0x0059dc98]         ; 00495f8c | FLOAT_0059dc98
    FADD float ptr [EBX + 0x1fa48]      ; 00495f92
    FST float ptr [EBX + 0x1fa48]       ; 00495f98
    FLD1                                ; 00495f9e
    FCOMPP                              ; 00495fa0
    FNSTSW AX                           ; 00495fa2
    SAHF                                ; 00495fa4
    JNC 0x00495fb1                      ; 00495fa5
        ;   XREF to: 00495fb1 (CONDITIONAL_JUMP)  ; LAB_00495fb1
    MOV dword ptr [EBX + 0x1fa48],0x3f800000 ; 00495fa7
    TEST ESI,ESI                        ; 00495fb1
        ;   Label: LAB_00495fb1
    JZ 0x00496ab6                       ; 00495fb3
        ;   XREF to: 00496ab6 (CONDITIONAL_JUMP)  ; LAB_00496ab6
    FLD float ptr [EBP + 0x92]          ; 00495fb9
    FDIV float ptr [0x0059dc9c]         ; 00495fbf | FLOAT_0059dc9c
    FMUL double ptr [0x0058200a]        ; 00495fc5 | DOUBLE_0058200a
    FSUBR float ptr [EBX + 0x1fa4c]     ; 00495fcb
        ;   Label: LAB_00495fcb
    FSTP float ptr [EBX + 0x1fa4c]      ; 00495fd1
        ;   Label: LAB_00495fd1
    FLD float ptr [EBX + 0x1fa4c]       ; 00495fd7
    FLDZ                                ; 00495fdd
    FCOMPP                              ; 00495fdf
    FNSTSW AX                           ; 00495fe1
    SAHF                                ; 00495fe3
    JBE 0x00495ff0                      ; 00495fe4
        ;   XREF to: 00495ff0 (CONDITIONAL_JUMP)  ; LAB_00495ff0
    MOV dword ptr [EBX + 0x1fa4c],0x0   ; 00495fe6
    FLD float ptr [EBX + 0x1fa4c]       ; 00495ff0
        ;   Label: LAB_00495ff0
    FCOMP double ptr [0x00582072]       ; 00495ff6 | DOUBLE_00582072
    FNSTSW AX                           ; 00495ffc
    SAHF                                ; 00495ffe
    JBE 0x0049600b                      ; 00495fff
        ;   XREF to: 0049600b (CONDITIONAL_JUMP)  ; LAB_0049600b
    MOV dword ptr [EBX + 0x1fa4c],0x3f666666 ; 00496001
    PUSH ESI                            ; 0049600b
        ;   Label: LAB_0049600b
    PUSH dword ptr [EBP + 0x92]         ; 0049600c
    PUSH EBX                            ; 00496012
    CALL core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0 ; 00496013
        ;   XREF to: 004990c0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004990c0()
    FLD float ptr [EBP + 0x92]          ; 00496018
    FDIV float ptr [0x0059dcac]         ; 0049601e | FLOAT_0059dcac
    FSUBR float ptr [EBX + 0x1fa74]     ; 00496024
    ADD ESP,0xc                         ; 0049602a
    FST float ptr [EBX + 0x1fa74]       ; 0049602d
    FLDZ                                ; 00496033
    FCOMPP                              ; 00496035
    FNSTSW AX                           ; 00496037
    SAHF                                ; 00496039
    JC 0x0049604e                       ; 0049603a
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    MOV dword ptr [EBX + 0x1fa74],0x0   ; 0049603c
    TEST ESI,ESI                        ; 00496046
    JZ 0x00496b02                       ; 00496048
        ;   XREF to: 00496b02 (CONDITIONAL_JUMP)  ; LAB_00496b02
    PUSH EBX                            ; 0049604e
        ;   Label: LAB_0049604e
    CALL FUN_00497900                   ; 0049604f
        ;   XREF to: 00497900 (UNCONDITIONAL_CALL)  ; undefined FUN_00497900()
    ADD ESP,0x4                         ; 00496054
    TEST ESI,ESI                        ; 00496057
    SETZ AL                             ; 00496059
    AND EAX,0xff                        ; 0049605c
    PUSH EAX                            ; 00496061
    PUSH dword ptr [EBP + 0x92]         ; 00496062
    PUSH EBX                            ; 00496068
    CALL FUN_004998c0                   ; 00496069
        ;   XREF to: 004998c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998c0()
    ADD ESP,0xc                         ; 0049606e
    PUSH dword ptr [EBP + 0x92]         ; 00496071
    PUSH EBX                            ; 00496077
    CALL core_charactr.cpp_FUN_0042a150 ; 00496078
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 0049607d
    PUSH 0xd                            ; 00496080
    LEA ESI,[EBX + 0x150]               ; 00496082
    PUSH ESI                            ; 00496088
    CALL core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0 ; 00496089
        ;   XREF to: 004e18d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getStateBlendWeight_FUN_004e18d0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0049608e
    ADD ESP,0x8                         ; 00496091
    FLD float ptr [EBP + 0x76]          ; 00496094
    FLDZ                                ; 00496097
    FCOMPP                              ; 00496099
    FNSTSW AX                           ; 0049609b
    SAHF                                ; 0049609d
    JNC 0x00496bf4                      ; 0049609e
        ;   XREF to: 00496bf4 (CONDITIONAL_JUMP)  ; LAB_00496bf4
    PUSH ESI                            ; 004960a4
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 004960a5
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004960aa
    ADD ESP,0x4                         ; 004960ad
    FLD float ptr [EBP + 0x76]          ; 004960b0
    FLD1                                ; 004960b3
    FCOMPP                              ; 004960b5
    FNSTSW AX                           ; 004960b7
    SAHF                                ; 004960b9
    JNC 0x0049616c                      ; 004960ba
        ;   XREF to: 0049616c (CONDITIONAL_JUMP)  ; LAB_0049616c
    MOV EAX,[0x00764838]                ; 004960c0 | CDemonActorType_00764800.name_hash
    PUSH EAX                            ; 004960c5
    MOV EDX,dword ptr [EBX + 0x1fa0c]   ; 004960c6
    PUSH EDX                            ; 004960cc
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004960cd
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV ESI,EAX                         ; 004960d2
    ADD ESP,0x8                         ; 004960d4
    TEST EAX,EAX                        ; 004960d7
    JZ 0x0049616c                       ; 004960d9
        ;   XREF to: 0049616c (CONDITIONAL_JUMP)  ; LAB_0049616c
    LEA EAX,[EBP + 0xe]                 ; 004960df
    PUSH EAX                            ; 004960e2
    PUSH EBX                            ; 004960e3
    CALL FUN_00497870                   ; 004960e4
        ;   XREF to: 00497870 (UNCONDITIONAL_CALL)  ; undefined FUN_00497870()
    ADD ESP,0x8                         ; 004960e9
    LEA EAX,[EBP + 0xe]                 ; 004960ec
    PUSH EAX                            ; 004960ef
    LEA EAX,[EBP + 0xffffff1e]          ; 004960f0
    PUSH EAX                            ; 004960f6
    PUSH EBX                            ; 004960f7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004960f8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    FLD float ptr [EBP + 0xffffff1e]    ; 004960fd
    FLD float ptr [EBP + 0xffffff26]    ; 00496103
    LEA EAX,[EBP + 0xfffffefa]          ; 00496109
    ADD ESP,0xc                         ; 0049610f
    XOR ECX,ECX                         ; 00496112
    FXCH                                ; 00496114
    FSUB float ptr [EBP + 0xffffff06]   ; 00496116
    PUSH EAX                            ; 0049611c
    FXCH                                ; 0049611d
    FSUB float ptr [EBP + 0xffffff0e]   ; 0049611f
    LEA EAX,[EBP + 0xffffff36]          ; 00496125
    MOV dword ptr [EBP + 0xfffffefe],ECX ; 0049612b
    PUSH EAX                            ; 00496131
    FXCH                                ; 00496132
    FSTP float ptr [EBP + 0xfffffefa]   ; 00496134
    PUSH EBX                            ; 0049613a
    FSTP float ptr [EBP + 0xffffff02]   ; 0049613b
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 00496141
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    FLD float ptr [EAX + 0x8]           ; 00496146
    FLDZ                                ; 00496149
    ADD ESP,0xc                         ; 0049614b
    FCOMPP                              ; 0049614e
    FNSTSW AX                           ; 00496150
    SAHF                                ; 00496152
    JNC 0x0049616c                      ; 00496153
        ;   XREF to: 0049616c (CONDITIONAL_JUMP)  ; LAB_0049616c
    LEA EAX,[EBP + 0xfffffefa]          ; 00496155
    PUSH EAX                            ; 0049615b
    LEA EAX,[EBP + 0xffffff06]          ; 0049615c
    PUSH EAX                            ; 00496162
    PUSH ESI                            ; 00496163
    CALL FUN_0041ef90                   ; 00496164
        ;   XREF to: 0041ef90 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ef90()
    ADD ESP,0xc                         ; 00496169
    PUSH dword ptr [EBP + 0x92]         ; 0049616c
        ;   Label: LAB_0049616c
    PUSH EBX                            ; 00496172
    CALL FUN_004980d0                   ; 00496173
        ;   XREF to: 004980d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004980d0()
    MOV ESI,dword ptr [EBX + 0x1fa54]   ; 00496178
    ADD ESP,0x8                         ; 0049617e
    CMP ESI,0x3                         ; 00496181
    JNZ 0x00496cc5                      ; 00496184
        ;   XREF to: 00496cc5 (CONDITIONAL_JUMP)  ; LAB_00496cc5
    MOV EDI,dword ptr [0x01bca0c0]      ; 0049618a | DAT_01bca0c0
    LEA EAX,[EBX + 0x1f5a0]             ; 00496190
    PUSH EDI                            ; 00496196
    MOV EAX,dword ptr [EAX + 0x330]     ; 00496197
    PUSH EAX                            ; 0049619d
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0049619e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004961a3
    MOV ESI,EAX                         ; 004961a6
    TEST EAX,EAX                        ; 004961a8
    JNZ 0x00496c02                      ; 004961aa
        ;   XREF to: 00496c02 (CONDITIONAL_JUMP)  ; LAB_00496c02
    MOV dword ptr [EBX + 0x1fa54],0x2   ; 004961b0
    FLD float ptr [0x0059dcdc]          ; 004961ba | FLOAT_0059dcdc
        ;   Label: LAB_004961ba
    PUSH EBX                            ; 004961c0
    FSTP float ptr [EBX + 0x5a5ac]      ; 004961c1
    CALL core_gabriela.cpp_CGabriella_canFireWeapon_FUN_00498af0 ; 004961c7
        ;   XREF to: 00498af0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_canFireWeapon_FUN_00498af0()
    ADD ESP,0x4                         ; 004961cc
    TEST EAX,EAX                        ; 004961cf
    JZ 0x00496cd2                       ; 004961d1
        ;   XREF to: 00496cd2 (CONDITIONAL_JUMP)  ; LAB_00496cd2
    MOV dword ptr [EBX + 0x1fa54],0x1   ; 004961d7
    PUSH EBX                            ; 004961e1
        ;   Label: LAB_004961e1
    MOV dword ptr [EBX + 0x1fa54],0x0   ; 004961e2
    CALL core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60 ; 004961ec
        ;   XREF to: 00498b60 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_00498b60()
    LEA EAX,[EBX + 0x1f5a0]             ; 004961f1
    MOV EAX,dword ptr [EAX + 0x330]     ; 004961f7
    MOV ESI,dword ptr [EAX + 0x2e4]     ; 004961fd
    ADD ESP,0x4                         ; 00496203
    TEST ESI,ESI                        ; 00496206
    JZ 0x00496cf3                       ; 00496208
        ;   XREF to: 00496cf3 (CONDITIONAL_JUMP)  ; LAB_00496cf3
    PUSH EBX                            ; 0049620e
        ;   Label: LAB_0049620e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0049620f
    CALL dword ptr [EAX + 0x104]        ; 00496215
    ADD ESP,0x4                         ; 0049621b
    CMP EAX,0x2                         ; 0049621e
    JZ 0x0049624d                       ; 00496221
        ;   XREF to: 0049624d (CONDITIONAL_JUMP)  ; LAB_0049624d
    LEA EAX,[EBX + 0x150]               ; 00496223
    PUSH EAX                            ; 00496229
    PUSH dword ptr [EBX + 0x240c]       ; 0049622a
    LEA EAX,[EBX + 0x30]                ; 00496230
    PUSH dword ptr [EBP + 0x92]         ; 00496233
    PUSH EAX                            ; 00496239
    LEA EAX,[EBX + 0x20]                ; 0049623a
    PUSH EAX                            ; 0049623d
    LEA EAX,[EBX + 0x1fa7c]             ; 0049623e
    PUSH EAX                            ; 00496244
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 00496245
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    ADD ESP,0x18                        ; 0049624a
    LEA ESI,[EBX + 0x1f5a0]             ; 0049624d
        ;   Label: LAB_0049624d
    MOV EAX,dword ptr [ESI + 0x330]     ; 00496253
    PUSH dword ptr [EBP + 0x92]         ; 00496259
    PUSH EAX                            ; 0049625f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00496260
    CALL dword ptr [EDX + 0x4]          ; 00496266
    MOV EAX,dword ptr [ESI + 0x330]     ; 00496269
    MOV EDI,dword ptr [EAX + 0xfc]      ; 0049626f
    ADD ESP,0x8                         ; 00496275
    TEST EDI,EDI                        ; 00496278
    JNZ 0x00496cfe                      ; 0049627a
        ;   XREF to: 00496cfe (CONDITIONAL_JUMP)  ; LAB_00496cfe
    LEA ESP,[EBP + 0x7a]                ; 00496280
        ;   Label: LAB_00496280
    POP EBP                             ; 00496283
    POP EDI                             ; 00496284
    POP ESI                             ; 00496285
    POP EBX                             ; 00496286
    RET                                 ; 00496287
    PUSH dword ptr [EBP + 0x92]         ; 00496288
        ;   Label: LAB_00496288
    PUSH EBX                            ; 0049628e
    CALL core_gabriela.cpp_CGabriella_processAI_FUN_00496d10 ; 0049628f
        ;   XREF to: 00496d10 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_processAI_FUN_00496d10()
    ADD ESP,0x8                         ; 00496294
    JMP 0x00495a59                      ; 00496297
        ;   XREF to: 00495a59 (UNCONDITIONAL_JUMP)  ; LAB_00495a59
    XOR EAX,EAX                         ; 0049629c
        ;   Label: LAB_0049629c
    JMP 0x00495d84                      ; 0049629e
        ;   XREF to: 00495d84 (UNCONDITIONAL_JUMP)  ; LAB_00495d84
    MOV EDX,dword ptr [EBX + 0x2590]    ; 004962a3
        ;   Label: LAB_004962a3
    TEST EDX,EDX                        ; 004962a9
    JZ 0x004963e3                       ; 004962ab
        ;   XREF to: 004963e3 (CONDITIONAL_JUMP)  ; LAB_004963e3
    CMP dword ptr [EBX + 0x2594],0x0    ; 004962b1
    JNZ 0x00496374                      ; 004962b8
        ;   XREF to: 00496374 (CONDITIONAL_JUMP)  ; LAB_00496374
    LEA EAX,[EDX + 0x20]                ; 004962be
    PUSH EAX                            ; 004962c1
    LEA EAX,[EBP + 0xffffff66]          ; 004962c2
    PUSH EAX                            ; 004962c8
    PUSH EBX                            ; 004962c9
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004962ca
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004962cf
    PUSH EAX                            ; 004962d2
    LEA EAX,[EBP + 0xffffff72]          ; 004962d3
    PUSH EAX                            ; 004962d9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004962da
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004962df
    PUSH dword ptr [EAX + 0x4]          ; 004962e2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004962e5
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004962ea
    ADD ESP,0x4                         ; 004962ed
    MOV EAX,dword ptr [EBP + 0x76]      ; 004962f0
    MOV dword ptr [EBP + 0x72],EAX      ; 004962f3
    FLD float ptr [EBP + 0x72]          ; 004962f6
    FCOMP double ptr [0x0058202a]       ; 004962f9 | DOUBLE_0058202a
    FNSTSW AX                           ; 004962ff
    SAHF                                ; 00496301
    JNC 0x00496310                      ; 00496302
        ;   XREF to: 00496310 (CONDITIONAL_JUMP)  ; LAB_00496310
    FLD float ptr [EBP + 0x72]          ; 00496304
    FADD float ptr [0x00582032]         ; 00496307 | FLOAT_00582032
    FSTP float ptr [EBP + 0x72]         ; 0049630d
    FLD float ptr [EBP + 0x72]          ; 00496310
        ;   Label: LAB_00496310
    FCOMP double ptr [0x0058203a]       ; 00496313 | DOUBLE_0058203a
    FNSTSW AX                           ; 00496319
    SAHF                                ; 0049631b
    JBE 0x0049632a                      ; 0049631c
        ;   XREF to: 0049632a (CONDITIONAL_JUMP)  ; LAB_0049632a
    FLD float ptr [EBP + 0x72]          ; 0049631e
    FADD float ptr [0x00582042]         ; 00496321 | FLOAT_00582042
    FSTP float ptr [EBP + 0x72]         ; 00496327
    FLD float ptr [EBP + 0x92]          ; 0049632a
        ;   Label: LAB_0049632a
    FMUL double ptr [0x00582022]        ; 00496330 | DOUBLE_00582022
    FLD float ptr [EBP + 0x72]          ; 00496336
    FXCH                                ; 00496339
    FST float ptr [EBP + 0x62]          ; 0049633b
    FCHS                                ; 0049633e
    FSTP float ptr [EBP + 0x56]         ; 00496340
    FCOMP float ptr [EBP + 0x56]        ; 00496343
    FNSTSW AX                           ; 00496346
    SAHF                                ; 00496348
    JNC 0x00496351                      ; 00496349
        ;   XREF to: 00496351 (CONDITIONAL_JUMP)  ; LAB_00496351
    MOV EAX,dword ptr [EBP + 0x56]      ; 0049634b
    MOV dword ptr [EBP + 0x72],EAX      ; 0049634e
    FLD float ptr [EBP + 0x72]          ; 00496351
        ;   Label: LAB_00496351
    FCOMP float ptr [EBP + 0x62]        ; 00496354
    FNSTSW AX                           ; 00496357
    SAHF                                ; 00496359
    JBE 0x00496362                      ; 0049635a
        ;   XREF to: 00496362 (CONDITIONAL_JUMP)  ; LAB_00496362
    MOV EAX,dword ptr [EBP + 0x62]      ; 0049635c
    MOV dword ptr [EBP + 0x72],EAX      ; 0049635f
    FLD float ptr [EBX + 0x34]          ; 00496362
        ;   Label: LAB_00496362
    FADD float ptr [EBP + 0x72]         ; 00496365
    PUSH EBX                            ; 00496368
    FSTP float ptr [EBX + 0x34]         ; 00496369
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 0049636c
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 00496371
    MOV EAX,dword ptr [EBX + 0x2590]    ; 00496374
        ;   Label: LAB_00496374
    MOV dword ptr [EBP + 0x36],EAX      ; 0049637a
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0049637d
    PUSH 0x0                            ; 00496383
    MOV dword ptr [EBP + 0x76],EAX      ; 00496385
    LEA EAX,[EBP + 0xffffff4e]          ; 00496388
    PUSH EAX                            ; 0049638e
    LEA EDI,[EBX + 0x150]               ; 0049638f
    PUSH EDI                            ; 00496395
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00496396
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 0049639b
    PUSH EAX                            ; 0049639e
    PUSH EBX                            ; 0049639f
    MOV EAX,dword ptr [EBP + 0x36]      ; 004963a0
    PUSH EAX                            ; 004963a3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004963a4
    CALL dword ptr [EAX + 0x108]        ; 004963a7
    ADD ESP,0xc                         ; 004963ad
    TEST EAX,EAX                        ; 004963b0
    JZ 0x004963d4                       ; 004963b2
        ;   XREF to: 004963d4 (CONDITIONAL_JUMP)  ; LAB_004963d4
    CMP dword ptr [EBX + 0x2590],0x0    ; 004963b4
    JZ 0x004963da                       ; 004963bb
        ;   XREF to: 004963da (CONDITIONAL_JUMP)  ; LAB_004963da
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004963bd
    JZ 0x00495d9d                       ; 004963c4
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH 0x1                            ; 004963ca
    PUSH 0x7                            ; 004963cc
    PUSH EDI                            ; 004963ce
    JMP 0x00495d95                      ; 004963cf
        ;   XREF to: 00495d95 (UNCONDITIONAL_JUMP)  ; LAB_00495d95
    MOV dword ptr [EBX + 0x2590],EAX    ; 004963d4
        ;   Label: LAB_004963d4
    PUSH 0x1                            ; 004963da
        ;   Label: LAB_004963da
    PUSH 0x0                            ; 004963dc
    JMP 0x00495d8e                      ; 004963de
        ;   XREF to: 00495d8e (UNCONDITIONAL_JUMP)  ; LAB_00495d8e
    CMP dword ptr [EBX + 0x1fa0c],0x0   ; 004963e3
        ;   Label: LAB_004963e3
    JZ 0x004965d9                       ; 004963ea
        ;   XREF to: 004965d9 (CONDITIONAL_JUMP)  ; LAB_004965d9
    MOV ECX,dword ptr [EBX + 0xbca0]    ; 004963f0
    MOV dword ptr [EBP + 0x3a],EAX      ; 004963f6
    TEST ECX,ECX                        ; 004963f9
    JNZ 0x00496428                      ; 004963fb
        ;   XREF to: 00496428 (CONDITIONAL_JUMP)  ; LAB_00496428
    MOV EDX,dword ptr [EBP + 0x3a]      ; 004963fd
        ;   Label: LAB_004963fd
    TEST EDX,EDX                        ; 00496400
    JNZ 0x00495d9d                      ; 00496402
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH 0x1                            ; 00496408
    PUSH EDX                            ; 0049640a
    LEA EAX,[EBX + 0x150]               ; 0049640b
    PUSH EAX                            ; 00496411
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00496412
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00496417
    PUSH EBX                            ; 0049641a
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0 ; 0049641b
        ;   XREF to: 004b56f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0()
    ADD ESP,0x4                         ; 00496420
    JMP 0x00495d9d                      ; 00496423
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    LEA EDX,[EBP + 0xfffffed6]          ; 00496428
        ;   Label: LAB_00496428
    MOV EAX,dword ptr [EBX + 0x1fa0c]   ; 0049642e
    PUSH EDX                            ; 00496434
    MOV EDI,dword ptr [EAX + 0x14c]     ; 00496435
    PUSH EAX                            ; 0049643b
    CALL dword ptr [EDI + 0x14]         ; 0049643c
    FLD float ptr [EBP + 0xfffffeda]    ; 0049643f
    FLD float ptr [EBP + 0xfffffed6]    ; 00496445
    FADD float ptr [EBP + 0xfffffee2]   ; 0049644b
    FXCH                                ; 00496451
    FADD float ptr [EBP + 0xfffffee6]   ; 00496453
    FXCH                                ; 00496459
    FST float ptr [EBP + 0xfffffeee]    ; 0049645b
    FMUL float ptr [0x00582002]         ; 00496461 | FLOAT_00582002
    FXCH                                ; 00496467
    FST float ptr [EBP + 0xfffffef2]    ; 00496469
    FMUL float ptr [0x00582002]         ; 0049646f | FLOAT_00582002
    FLD float ptr [EBP + 0xfffffede]    ; 00496475
    LEA EAX,[EBP + -0x16]               ; 0049647b
    ADD ESP,0x8                         ; 0049647e
    FADD float ptr [EBP + 0xfffffeea]   ; 00496481
    PUSH EAX                            ; 00496487
    FST float ptr [EBP + 0xfffffef6]    ; 00496488
    LEA EAX,[EBP + 0xffffff42]          ; 0049648e
    FMUL float ptr [0x00582002]         ; 00496494 | FLOAT_00582002
    PUSH EAX                            ; 0049649a
    FXCH ST2                            ; 0049649b
    FSTP float ptr [EBP + -0x16]        ; 0049649d
    FSTP float ptr [EBP + -0x12]        ; 004964a0
    FSTP float ptr [EBP + -0xe]         ; 004964a3
    MOV EDI,dword ptr [EBX + 0x1fa0c]   ; 004964a6
    PUSH EDI                            ; 004964ac
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004964ad
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004964b2
    LEA EAX,[EBP + 0xffffff42]          ; 004964b5
    PUSH EAX                            ; 004964bb
    LEA EAX,[EBP + -0x2e]               ; 004964bc
    PUSH EAX                            ; 004964bf
    PUSH EBX                            ; 004964c0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004964c1
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004964c6
    LEA EAX,[EBP + -0x2e]               ; 004964c9
    PUSH EAX                            ; 004964cc
    LEA EAX,[EBP + -0x52]               ; 004964cd
    PUSH EAX                            ; 004964d0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004964d1
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004964d6
    PUSH dword ptr [EAX + 0x4]          ; 004964d9
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004964dc
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    FLD float ptr [EBP + 0xfffffeea]    ; 004964e1
    FLD float ptr [EBP + 0xfffffee2]    ; 004964e7
    FSUB float ptr [EBP + 0xfffffed6]   ; 004964ed
    FXCH                                ; 004964f3
    FSUB float ptr [EBP + 0xfffffede]   ; 004964f5
    FXCH                                ; 004964fb
    FST float ptr [EBP + 0x2]           ; 004964fd
    FMUL float ptr [0x00582002]         ; 00496500 | FLOAT_00582002
    FXCH                                ; 00496506
    FST float ptr [EBP + 0xa]           ; 00496508
    FMUL float ptr [0x00582002]         ; 0049650b | FLOAT_00582002
    FXCH                                ; 00496511
    FST float ptr [EBP + -0x22]         ; 00496513
    FMUL float ptr [EBP + -0x22]        ; 00496516
    FXCH                                ; 00496519
    FST float ptr [EBP + -0x1a]         ; 0049651b
    FMUL float ptr [EBP + -0x1a]        ; 0049651e
    MOV dword ptr [EBP + 0x76],EAX      ; 00496521
    XOR EAX,EAX                         ; 00496524
    FADDP                               ; 00496526
    MOV dword ptr [EBP + -0x1e],EAX     ; 00496528
    FSQRT                               ; 0049652b
    FLD float ptr [EBP + 0xfffffee6]    ; 0049652d
    ADD ESP,0x4                         ; 00496533
    MOV EAX,dword ptr [EBP + 0x76]      ; 00496536
    MOV dword ptr [EBP + 0x6e],EAX      ; 00496539
    FSUB float ptr [EBP + 0xfffffeda]   ; 0049653c
    FXCH                                ; 00496542
    FSUBR float ptr [EBP + -0x26]       ; 00496544
    FXCH                                ; 00496547
    FSTP float ptr [EBP + 0x6]          ; 00496549
    FCOMP double ptr [0x0058200a]       ; 0049654c | DOUBLE_0058200a
    FNSTSW AX                           ; 00496552
    SAHF                                ; 00496554
    JNC 0x004963fd                      ; 00496555
        ;   XREF to: 004963fd (CONDITIONAL_JUMP)  ; LAB_004963fd
    FLD float ptr [EBP + -0x2a]         ; 0049655b
    FLD1                                ; 0049655e
    FXCH                                ; 00496560
    FSTP double ptr [EBP + 0x26]        ; 00496562
    FCOMP double ptr [EBP + 0x26]       ; 00496565
    FNSTSW AX                           ; 00496568
    SAHF                                ; 0049656a
    JNC 0x004963fd                      ; 0049656b
        ;   XREF to: 004963fd (CONDITIONAL_JUMP)  ; LAB_004963fd
    FLD double ptr [EBP + 0x26]         ; 00496571
    FCOMP double ptr [0x00582012]       ; 00496574 | DOUBLE_00582012
    FNSTSW AX                           ; 0049657a
    SAHF                                ; 0049657c
    JNC 0x004963fd                      ; 0049657d
        ;   XREF to: 004963fd (CONDITIONAL_JUMP)  ; LAB_004963fd
    FLD float ptr [EBP + 0x6e]          ; 00496583
    FABS                                ; 00496586
    FCOMP double ptr [0x0058201a]       ; 00496588 | DOUBLE_0058201a
    FNSTSW AX                           ; 0049658e
    SAHF                                ; 00496590
    JNC 0x004963fd                      ; 00496591
        ;   XREF to: 004963fd (CONDITIONAL_JUMP)  ; LAB_004963fd
    FLD float ptr [EBP + 0x92]          ; 00496597
    FMUL double ptr [0x00582022]        ; 0049659d | DOUBLE_00582022
    FST float ptr [EBP + 0x66]          ; 004965a3
    FCHS                                ; 004965a6
    FCOMP float ptr [EBP + 0x6e]        ; 004965a8
    FNSTSW AX                           ; 004965ab
    SAHF                                ; 004965ad
    JA 0x004965cf                       ; 004965ae
        ;   XREF to: 004965cf (CONDITIONAL_JUMP)  ; LAB_004965cf
    FLD float ptr [EBP + 0x6e]          ; 004965b0
        ;   Label: LAB_004965b0
    FCOMP float ptr [EBP + 0x66]        ; 004965b3
    FNSTSW AX                           ; 004965b6
    SAHF                                ; 004965b8
    JBE 0x004965c1                      ; 004965b9
        ;   XREF to: 004965c1 (CONDITIONAL_JUMP)  ; LAB_004965c1
    MOV EAX,dword ptr [EBP + 0x66]      ; 004965bb
    MOV dword ptr [EBP + 0x6e],EAX      ; 004965be
    FLD float ptr [EBX + 0x34]          ; 004965c1
        ;   Label: LAB_004965c1
    FADD float ptr [EBP + 0x6e]         ; 004965c4
    FSTP float ptr [EBX + 0x34]         ; 004965c7
    JMP 0x00495d9d                      ; 004965ca
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    FLD float ptr [EBP + 0x66]          ; 004965cf
        ;   Label: LAB_004965cf
    FCHS                                ; 004965d2
    FSTP float ptr [EBP + 0x6e]         ; 004965d4
    JMP 0x004965b0                      ; 004965d7
        ;   XREF to: 004965b0 (UNCONDITIONAL_JUMP)  ; LAB_004965b0
    PUSH dword ptr [EBP + 0x92]         ; 004965d9
        ;   Label: LAB_004965d9
    PUSH EBX                            ; 004965df
    CALL core_charactr.cpp_FUN_00428c00 ; 004965e0
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 004965e5
    LEA EDI,[EBX + 0x150]               ; 004965e8
    TEST EAX,EAX                        ; 004965ee
    JZ 0x0049664b                       ; 004965f0
        ;   XREF to: 0049664b (CONDITIONAL_JUMP)  ; LAB_0049664b
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 004965f2
    CMP EAX,0x2                         ; 004965f8
    JNC 0x0049663b                      ; 004965fb
        ;   XREF to: 0049663b (CONDITIONAL_JUMP)  ; LAB_0049663b
    CMP EAX,0x1                         ; 004965fd
    JNZ 0x004963da                      ; 00496600
        ;   XREF to: 004963da (CONDITIONAL_JUMP)  ; LAB_004963da
    PUSH EAX                            ; 00496606
    PUSH EAX                            ; 00496607
    PUSH EDI                            ; 00496608
    JMP 0x00495d95                      ; 00496609
        ;   XREF to: 00495d95 (UNCONDITIONAL_JUMP)  ; LAB_00495d95
    PUSH 0x1                            ; 0049660e
        ;   Label: LAB_0049660e
    PUSH 0x0                            ; 00496610
    PUSH EDI                            ; 00496612
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00496613
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00496618
    PUSH EBX                            ; 0049661b
    PUSH 0x581f93                       ; 0049661c | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 00496621 | PTR_DAT_005ad350
    PUSH EAX                            ; 00496626 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00496627
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00495d9a                      ; 0049662c
        ;   XREF to: 00495d9a (UNCONDITIONAL_JUMP)  ; LAB_00495d9a
    PUSH 0x1                            ; 00496631
        ;   Label: LAB_00496631
    PUSH 0x2                            ; 00496633
    PUSH EDI                            ; 00496635
    JMP 0x00495d95                      ; 00496636
        ;   XREF to: 00495d95 (UNCONDITIONAL_JUMP)  ; LAB_00495d95
    JBE 0x00496631                      ; 0049663b
        ;   XREF to: 00496631 (CONDITIONAL_JUMP)  ; LAB_00496631
        ;   Label: LAB_0049663b
    CMP EAX,0x3                         ; 0049663d
    JZ 0x0049660e                       ; 00496640
        ;   XREF to: 0049660e (CONDITIONAL_JUMP)  ; LAB_0049660e
    PUSH 0x1                            ; 00496642
    PUSH 0x0                            ; 00496644
    JMP 0x00495d8e                      ; 00496646
        ;   XREF to: 00495d8e (UNCONDITIONAL_JUMP)  ; LAB_00495d8e
    TEST ESI,ESI                        ; 0049664b
        ;   Label: LAB_0049664b
    JNZ 0x00495d9d                      ; 0049664d
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH EDI                            ; 00496653
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00496654
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00496659
    ADD ESP,0x4                         ; 0049665c
    CMP EAX,0xe                         ; 0049665f
    JNC 0x0049678f                      ; 00496662
        ;   XREF to: 0049678f (CONDITIONAL_JUMP)  ; LAB_0049678f
    CMP EAX,0x1                         ; 00496668
    JNC 0x004967c7                      ; 0049666b
        ;   XREF to: 004967c7 (CONDITIONAL_JUMP)  ; LAB_004967c7
    TEST EAX,EAX                        ; 00496671
    JNZ 0x00495d9d                      ; 00496673
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    CMP dword ptr [EBX + 0x2408],0x0    ; 00496679
        ;   Label: LAB_00496679
    JZ 0x00495d9d                       ; 00496680
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    MOV EDX,dword ptr [EBX + 0xbc94]    ; 00496686
    XOR EDI,EDI                         ; 0049668c
    TEST EDX,EDX                        ; 0049668e
    JZ 0x004966a4                       ; 00496690
        ;   XREF to: 004966a4 (CONDITIONAL_JUMP)  ; LAB_004966a4
    CMP dword ptr [EBX + 0xbc9c],0x0    ; 00496692
    JZ 0x0049673f                       ; 00496699
        ;   XREF to: 0049673f (CONDITIONAL_JUMP)  ; LAB_0049673f
    MOV EDI,0x2                         ; 0049669f
    CMP dword ptr [EBX + 0xbc98],0x0    ; 004966a4
        ;   Label: LAB_004966a4
    JZ 0x004966b2                       ; 004966ab
        ;   XREF to: 004966b2 (CONDITIONAL_JUMP)  ; LAB_004966b2
    MOV EDI,0x3                         ; 004966ad
    FLD float ptr [EBX + 0xbcb8]        ; 004966b2
        ;   Label: LAB_004966b2
    FMUL float ptr [EBX + 0x2430]       ; 004966b8
    FLD float ptr [EBX + 0x242c]        ; 004966be
    FLD float ptr [EBX + 0x2414]        ; 004966c4
    LEA EAX,[EBX + 0x150]               ; 004966ca
    FADD float ptr [EBP + 0x6a]         ; 004966d0
    MOV dword ptr [EBP + 0x4e],EAX      ; 004966d3
    PUSH EAX                            ; 004966d6
    FXCH                                ; 004966d7
    FADD float ptr [EBX + 0x241c]       ; 004966d9
    FXCH ST2                            ; 004966df
    FSTP float ptr [EBX + 0x2410]       ; 004966e1
    FXCH                                ; 004966e7
    FSTP float ptr [EBX + 0x241c]       ; 004966e9
    FSTP float ptr [EBX + 0x2414]       ; 004966ef
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004966f5
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004966fa
    ADD ESP,0x4                         ; 004966fd
    CMP EDI,EAX                         ; 00496700
    JZ 0x00496713                       ; 00496702
        ;   XREF to: 00496713 (CONDITIONAL_JUMP)  ; LAB_00496713
    PUSH 0x1                            ; 00496704
    PUSH EDI                            ; 00496706
    MOV ECX,dword ptr [EBP + 0x4e]      ; 00496707
    PUSH ECX                            ; 0049670a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0049670b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00496710
    CMP dword ptr [EBX + 0xbca4],0x0    ; 00496713
        ;   Label: LAB_00496713
    JZ 0x00495d9d                       ; 0049671a
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH EBX                            ; 00496720
    CALL core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0 ; 00496721
        ;   XREF to: 004983f0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_findAndPickupNearbyObject_FUN_004983f0()
    ADD ESP,0x4                         ; 00496726
    TEST EAX,EAX                        ; 00496729
    JNZ 0x00495d9d                      ; 0049672b
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH EBX                            ; 00496731
    CALL core_gabriela.cpp_CGabriella_tryThrowObject_FUN_00498bd0 ; 00496732
        ;   XREF to: 00498bd0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_tryThrowObject_FUN_00498bd0()
    ADD ESP,0x4                         ; 00496737
    JMP 0x00495d9d                      ; 0049673a
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    MOV EDI,0x1                         ; 0049673f
        ;   Label: LAB_0049673f
    JMP 0x004966a4                      ; 00496744
        ;   XREF to: 004966a4 (UNCONDITIONAL_JUMP)  ; LAB_004966a4
    MOV EAX,[0x00764230]                ; 00496749 | CDemonActorType_007641f8.name_hash
        ;   Label: LAB_00496749
    PUSH EAX                            ; 0049674e
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 0049674f
    PUSH EDX                            ; 00496755
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00496756
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    MOV dword ptr [EBP + 0x5e],EAX      ; 0049675b
    ADD ESP,0x8                         ; 0049675e
    TEST EAX,EAX                        ; 00496761
    JZ 0x00495d9d                       ; 00496763
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    PUSH EDI                            ; 00496769
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 0049676a
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60()
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0049676f
    ADD ESP,0x4                         ; 00496772
    MOV dword ptr [EBP + 0x76],EAX      ; 00496775
    SUB ESP,0x4                         ; 00496778
    MOV EAX,dword ptr [EBP + 0x76]      ; 0049677b
    MOV dword ptr [ESP],EAX             ; 0049677e
    PUSH EDI                            ; 00496781
    CALL core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130 ; 00496782
        ;   XREF to: 0040f130 (UNCONDITIONAL_CALL)  ; undefined core_ammobox.cpp_CAmmoBox_openBox_FUN_0040f130()
    ADD ESP,0x8                         ; 00496787
    JMP 0x00495d9d                      ; 0049678a
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    JBE 0x00496749                      ; 0049678f
        ;   XREF to: 00496749 (CONDITIONAL_JUMP)  ; LAB_00496749
        ;   Label: LAB_0049678f
    CMP EAX,0x11                        ; 00496791
    JNC 0x004967a4                      ; 00496794
        ;   XREF to: 004967a4 (CONDITIONAL_JUMP)  ; LAB_004967a4
    CMP EAX,0x10                        ; 00496796
    JZ 0x00496679                       ; 00496799
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
    JMP 0x00495d9d                      ; 0049679f
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    JBE 0x00496679                      ; 004967a4
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
        ;   Label: LAB_004967a4
    CMP EAX,0x14                        ; 004967aa
    JC 0x00495d9d                       ; 004967ad
        ;   XREF to: 00495d9d (CONDITIONAL_JUMP)  ; LAB_00495d9d
    JBE 0x00496679                      ; 004967b3
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
    CMP EAX,0x15                        ; 004967b9
    JZ 0x00496679                       ; 004967bc
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
    JMP 0x00495d9d                      ; 004967c2
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    JBE 0x00496679                      ; 004967c7
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
        ;   Label: LAB_004967c7
    CMP EAX,0x2                         ; 004967cd
    JBE 0x00496679                      ; 004967d0
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
    CMP EAX,0x3                         ; 004967d6
    JZ 0x00496679                       ; 004967d9
        ;   XREF to: 00496679 (CONDITIONAL_JUMP)  ; LAB_00496679
    JMP 0x00495d9d                      ; 004967df
        ;   XREF to: 00495d9d (UNCONDITIONAL_JUMP)  ; LAB_00495d9d
    TEST ESI,ESI                        ; 004967e4
        ;   Label: LAB_004967e4
    JNZ 0x004968ff                      ; 004967e6
        ;   XREF to: 004968ff (CONDITIONAL_JUMP)  ; LAB_004968ff
    LEA EDX,[EBX + 0x2414]              ; 004967ec
        ;   Label: LAB_004967ec
    MOV EAX,dword ptr [EDX]             ; 004967f2
    MOV dword ptr [EBP + 0xffffff12],EAX ; 004967f4
    LEA EAX,[EDX + 0x4]                 ; 004967fa
    MOV EAX,dword ptr [EAX]             ; 004967fd
    MOV dword ptr [EBP + 0xffffff16],EAX ; 004967ff
    LEA EAX,[EDX + 0x8]                 ; 00496805
    MOV EAX,dword ptr [EAX]             ; 00496808
    MOV dword ptr [EBP + 0xffffff1a],EAX ; 0049680a
    LEA EAX,[EBX + 0x150]               ; 00496810
    PUSH EAX                            ; 00496816
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00496817
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0049681c
    ADD ESP,0x4                         ; 0049681f
    CMP EAX,0x3                         ; 00496822
    JNC 0x0049692c                      ; 00496825
        ;   XREF to: 0049692c (CONDITIONAL_JUMP)  ; LAB_0049692c
    CMP EAX,0x1                         ; 0049682b
    JNC 0x0049686a                      ; 0049682e
        ;   XREF to: 0049686a (CONDITIONAL_JUMP)  ; LAB_0049686a
    TEST EAX,EAX                        ; 00496830
    JZ 0x0049686a                       ; 00496832
        ;   XREF to: 0049686a (CONDITIONAL_JUMP)  ; LAB_0049686a
        ;   Label: LAB_00496832
    LEA EAX,[EBX + 0x23a4]              ; 00496834
        ;   Label: LAB_00496834
    FLD float ptr [EBP + 0xffffff12]    ; 0049683a
    FADD float ptr [EAX]                ; 00496840
    FLD float ptr [EBP + 0xffffff16]    ; 00496842
    FXCH                                ; 00496848
    FSTP float ptr [EBP + 0xffffff12]   ; 0049684a
    FADD float ptr [EAX + 0x4]          ; 00496850
    FLD float ptr [EBP + 0xffffff1a]    ; 00496853
    FXCH                                ; 00496859
    FSTP float ptr [EBP + 0xffffff16]   ; 0049685b
    FADD float ptr [EAX + 0x8]          ; 00496861
    FSTP float ptr [EBP + 0xffffff1a]   ; 00496864
    FLD float ptr [EBP + 0x92]          ; 0049686a
        ;   Label: LAB_0049686a
    FLD ST0                             ; 00496870
    FMUL double ptr [0x00582052]        ; 00496872 | DOUBLE_00582052
    FLD float ptr [EBX + 0x2424]        ; 00496878
    FXCH                                ; 0049687e
    FSUBR ST0,ST1                       ; 00496880
    LEA EAX,[EBX + 0x2420]              ; 00496882
    FSTP ST1                            ; 00496888
    FSTP float ptr [EBX + 0x2424]       ; 0049688a
    FLD float ptr [EAX]                 ; 00496890
    FMUL ST1                            ; 00496892
    FSTP float ptr [EBP + 0xffffff2a]   ; 00496894
    FLD float ptr [EAX + 0x4]           ; 0049689a
    FMUL ST1                            ; 0049689d
    FSTP float ptr [EBP + 0xffffff2e]   ; 0049689f
    FMUL float ptr [EAX + 0x8]          ; 004968a5
    FLD float ptr [EBP + 0xffffff16]    ; 004968a8
    FLD float ptr [EBP + 0xffffff12]    ; 004968ae
    FADD float ptr [EBP + 0xffffff2a]   ; 004968b4
    FLD float ptr [EBP + 0xffffff1a]    ; 004968ba
    FXCH                                ; 004968c0
    FSTP float ptr [EBP + 0xffffff12]   ; 004968c2
    FXCH                                ; 004968c8
    FADD float ptr [EBP + 0xffffff2e]   ; 004968ca
    LEA EAX,[EBP + 0xffffff12]          ; 004968d0
    FSTP float ptr [EBP + 0xffffff16]   ; 004968d6
    FXCH                                ; 004968dc
    FSTP float ptr [EBP + 0xffffff32]   ; 004968de
    PUSH EAX                            ; 004968e4
    FADD float ptr [EBP + 0xffffff32]   ; 004968e5
    PUSH EBX                            ; 004968eb
    FSTP float ptr [EBP + 0xffffff1a]   ; 004968ec
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 004968f2
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 004968f7
    JMP 0x00495ded                      ; 004968fa
        ;   XREF to: 00495ded (UNCONDITIONAL_JUMP)  ; LAB_00495ded
    LEA EAX,[EBX + 0x150]               ; 004968ff
        ;   Label: LAB_004968ff
    PUSH EAX                            ; 00496905
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00496906
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0049690b
    ADD ESP,0x4                         ; 0049690e
    CMP EAX,0xd                         ; 00496911
    JZ 0x004967ec                       ; 00496914
        ;   XREF to: 004967ec (CONDITIONAL_JUMP)  ; LAB_004967ec
    CMP dword ptr [EBX + 0xdc],0x0      ; 0049691a
    JNZ 0x004967ec                      ; 00496921
        ;   XREF to: 004967ec (CONDITIONAL_JUMP)  ; LAB_004967ec
    JMP 0x00495ded                      ; 00496927
        ;   XREF to: 00495ded (UNCONDITIONAL_JUMP)  ; LAB_00495ded
    JBE 0x0049686a                      ; 0049692c
        ;   XREF to: 0049686a (CONDITIONAL_JUMP)  ; LAB_0049686a
        ;   Label: LAB_0049692c
    CMP EAX,0x11                        ; 00496932
    JNC 0x0049693f                      ; 00496935
        ;   XREF to: 0049693f (CONDITIONAL_JUMP)  ; LAB_0049693f
    CMP EAX,0x10                        ; 00496937
    JMP 0x00496832                      ; 0049693a
        ;   XREF to: 00496832 (UNCONDITIONAL_JUMP)  ; LAB_00496832
    JBE 0x0049686a                      ; 0049693f
        ;   XREF to: 0049686a (CONDITIONAL_JUMP)  ; LAB_0049686a
        ;   Label: LAB_0049693f
    CMP EAX,0x14                        ; 00496945
    JC 0x00496834                       ; 00496948
        ;   XREF to: 00496834 (CONDITIONAL_JUMP)  ; LAB_00496834
    JBE 0x0049686a                      ; 0049694e
        ;   XREF to: 0049686a (CONDITIONAL_JUMP)  ; LAB_0049686a
    CMP EAX,0x15                        ; 00496954
    JMP 0x00496832                      ; 00496957
        ;   XREF to: 00496832 (UNCONDITIONAL_JUMP)  ; LAB_00496832
    CMP dword ptr [EBX + 0xbcac],0x0    ; 0049695c
        ;   Label: LAB_0049695c
    JZ 0x00495dfe                       ; 00496963
        ;   XREF to: 00495dfe (CONDITIONAL_JUMP)  ; LAB_00495dfe
    LEA EAX,[EBX + 0x1f5a0]             ; 00496969
    MOV EAX,dword ptr [EAX + 0x330]     ; 0049696f
    TEST EAX,EAX                        ; 00496975
    JZ 0x00495dfe                       ; 00496977
        ;   XREF to: 00495dfe (CONDITIONAL_JUMP)  ; LAB_00495dfe
    MOV AH,byte ptr [EBX + 0x1fa3c]     ; 0049697d
    TEST AH,0x3                         ; 00496983
    JZ 0x00496998                       ; 00496986
        ;   XREF to: 00496998 (CONDITIONAL_JUMP)  ; LAB_00496998
    MOV DH,AH                           ; 00496988
    AND DH,0xfc                         ; 0049698a
    MOV byte ptr [EBX + 0x1fa3c],DH     ; 0049698d
    JMP 0x00495dfe                      ; 00496993
        ;   XREF to: 00495dfe (UNCONDITIONAL_JUMP)  ; LAB_00495dfe
    MOV DL,AH                           ; 00496998
        ;   Label: LAB_00496998
    OR DL,0x2                           ; 0049699a
    MOV byte ptr [EBX + 0x1fa3c],DL     ; 0049699d
    JMP 0x00495dfe                      ; 004969a3
        ;   XREF to: 00495dfe (UNCONDITIONAL_JUMP)  ; LAB_00495dfe
    CMP dword ptr [EAX + 0x231c],0x0    ; 004969a8
        ;   Label: LAB_004969a8
    SETZ AL                             ; 004969af
    AND EAX,0xff                        ; 004969b2
    MOV dword ptr [EDI + 0x231c],EAX    ; 004969b7
    CMP dword ptr [EDI + 0x664],0x1     ; 004969bd
    JNZ 0x00495e2f                      ; 004969c4
        ;   XREF to: 00495e2f (CONDITIONAL_JUMP)  ; LAB_00495e2f
    PUSH 0x581fbd                       ; 004969ca | = "flashlit.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004969cf
    PUSH EBX                            ; 004969d5
    CALL dword ptr [EAX + 0x24]         ; 004969d6
    ADD ESP,0x8                         ; 004969d9
    JMP 0x00495e2f                      ; 004969dc
        ;   XREF to: 00495e2f (UNCONDITIONAL_JUMP)  ; LAB_00495e2f
    FLD float ptr [EBP + 0x92]          ; 004969e1
        ;   Label: LAB_004969e1
    FDIV float ptr [0x0059dc9c]         ; 004969e7 | FLOAT_0059dc9c
    FSUBR float ptr [EBX + 0x1fa40]     ; 004969ed
    FST float ptr [EBX + 0x1fa40]       ; 004969f3
    FLDZ                                ; 004969f9
    FCOMPP                              ; 004969fb
    FNSTSW AX                           ; 004969fd
    SAHF                                ; 004969ff
    JBE 0x00495ef0                      ; 00496a00
        ;   XREF to: 00495ef0 (CONDITIONAL_JUMP)  ; LAB_00495ef0
    MOV dword ptr [EBX + 0x1fa40],0x0   ; 00496a06
    JMP 0x00495ef0                      ; 00496a10
        ;   XREF to: 00495ef0 (UNCONDITIONAL_JUMP)  ; LAB_00495ef0
    FLD float ptr [EBP + 0x92]          ; 00496a15
        ;   Label: LAB_00496a15
    FDIV float ptr [0x0059dc9c]         ; 00496a1b | FLOAT_0059dc9c
    MOV EAX,dword ptr [EBX + 0x1fa44]   ; 00496a21
    MOV dword ptr [EBP + 0x5a],EAX      ; 00496a27
    FSUBR float ptr [EBP + 0x5a]        ; 00496a2a
    FST float ptr [EBX + 0x1fa44]       ; 00496a2d
    FLDZ                                ; 00496a33
    FCOMPP                              ; 00496a35
    FNSTSW AX                           ; 00496a37
    SAHF                                ; 00496a39
    JBE 0x00496a46                      ; 00496a3a
        ;   XREF to: 00496a46 (CONDITIONAL_JUMP)  ; LAB_00496a46
    MOV dword ptr [EBX + 0x1fa44],0x0   ; 00496a3c
    FLD float ptr [0x0059dca4]          ; 00496a46 | FLOAT_0059dca4
        ;   Label: LAB_00496a46
    FADD double ptr [0x00582062]        ; 00496a4c | DOUBLE_00582062
    FLD float ptr [EBP + 0x5a]          ; 00496a52
    FXCH                                ; 00496a55
    FSTP float ptr [EBP + 0x52]         ; 00496a57
    FCOMP float ptr [EBP + 0x52]        ; 00496a5a
    FNSTSW AX                           ; 00496a5d
    SAHF                                ; 00496a5f
    JC 0x00495f79                       ; 00496a60
        ;   XREF to: 00495f79 (CONDITIONAL_JUMP)  ; LAB_00495f79
    FLD float ptr [EBX + 0x1fa44]       ; 00496a66
    FCOMP float ptr [EBP + 0x52]        ; 00496a6c
    FNSTSW AX                           ; 00496a6f
    SAHF                                ; 00496a71
    JNC 0x00495f79                      ; 00496a72
        ;   XREF to: 00495f79 (CONDITIONAL_JUMP)  ; LAB_00495f79
    PUSH 0x581fdb                       ; 00496a78 | = "undraw-s.wav @ .7"
    JMP 0x00495f6c                      ; 00496a7d
        ;   XREF to: 00495f6c (UNCONDITIONAL_JUMP)  ; LAB_00495f6c
    FLD float ptr [EBP + 0x92]          ; 00496a82
        ;   Label: LAB_00496a82
    FDIV float ptr [0x0059dc9c]         ; 00496a88 | FLOAT_0059dc9c
    FSUBR float ptr [EBX + 0x1fa48]     ; 00496a8e
    FST float ptr [EBX + 0x1fa48]       ; 00496a94
    FLDZ                                ; 00496a9a
    FCOMPP                              ; 00496a9c
    FNSTSW AX                           ; 00496a9e
    SAHF                                ; 00496aa0
    JBE 0x00495fb1                      ; 00496aa1
        ;   XREF to: 00495fb1 (CONDITIONAL_JUMP)  ; LAB_00495fb1
    MOV dword ptr [EBX + 0x1fa48],0x0   ; 00496aa7
    JMP 0x00495fb1                      ; 00496ab1
        ;   XREF to: 00495fb1 (UNCONDITIONAL_JUMP)  ; LAB_00495fb1
    TEST EDI,EDI                        ; 00496ab6
        ;   Label: LAB_00496ab6
    JZ 0x00496af1                       ; 00496ab8
        ;   XREF to: 00496af1 (CONDITIONAL_JUMP)  ; LAB_00496af1
    CMP dword ptr [EDI + 0x231c],0x0    ; 00496aba
    JZ 0x00496af1                       ; 00496ac1
        ;   XREF to: 00496af1 (CONDITIONAL_JUMP)  ; LAB_00496af1
    LEA EAX,[EBX + 0x150]               ; 00496ac3
    PUSH EAX                            ; 00496ac9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00496aca
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00496acf
    ADD ESP,0x4                         ; 00496ad2
    CMP EAX,0x5                         ; 00496ad5
    JZ 0x00496af1                       ; 00496ad8
        ;   XREF to: 00496af1 (CONDITIONAL_JUMP)  ; LAB_00496af1
    FLD float ptr [EBP + 0x92]          ; 00496ada
    FDIV float ptr [0x0059dc98]         ; 00496ae0 | FLOAT_0059dc98
    FADD float ptr [EBX + 0x1fa4c]      ; 00496ae6
    JMP 0x00495fd1                      ; 00496aec
        ;   XREF to: 00495fd1 (UNCONDITIONAL_JUMP)  ; LAB_00495fd1
    FLD float ptr [EBP + 0x92]          ; 00496af1
        ;   Label: LAB_00496af1
    FDIV float ptr [0x0059dc9c]         ; 00496af7 | FLOAT_0059dc9c
    JMP 0x00495fcb                      ; 00496afd
        ;   XREF to: 00495fcb (UNCONDITIONAL_JUMP)  ; LAB_00495fcb
    CMP dword ptr [EBX + 0xbca0],0x0    ; 00496b02
        ;   Label: LAB_00496b02
    JZ 0x0049604e                       ; 00496b09
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    CMP dword ptr [EBX + 0x1fa54],0x0   ; 00496b0f
    JNZ 0x0049604e                      ; 00496b16
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 00496b1c
    JZ 0x00496b34                       ; 00496b23
        ;   XREF to: 00496b34 (CONDITIONAL_JUMP)  ; LAB_00496b34
    MOV dword ptr [EBX + 0x1fa54],0x3   ; 00496b25
    JMP 0x0049604e                      ; 00496b2f
        ;   XREF to: 0049604e (UNCONDITIONAL_JUMP)  ; LAB_0049604e
    FLD float ptr [EBX + 0x1fa44]       ; 00496b34
        ;   Label: LAB_00496b34
    FLDZ                                ; 00496b3a
    FCOMPP                              ; 00496b3c
    FNSTSW AX                           ; 00496b3e
    SAHF                                ; 00496b40
    JC 0x0049604e                       ; 00496b41
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496b47
    CALL core_hero.cpp_CHero_tryInteract_FUN_004b4e90 ; 00496b48
        ;   XREF to: 004b4e90 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryInteract_FUN_004b4e90()
    ADD ESP,0x4                         ; 00496b4d
    TEST EAX,EAX                        ; 00496b50
    JNZ 0x0049604e                      ; 00496b52
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496b58
    CALL FUN_004b5110                   ; 00496b59
        ;   XREF to: 004b5110 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5110()
    ADD ESP,0x4                         ; 00496b5e
    MOV EDI,EAX                         ; 00496b61
    CMP EAX,0x3                         ; 00496b63
    JA 0x00496b84                       ; 00496b66
        ;   XREF to: 00496b84 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x495a0c]  ; 00496b68 | caseD_1 | caseD_3 | switchdataD_00495a0c
        ;   Label: switchD
    PUSH 0x1                            ; 00496b6f
        ;   Label: caseD_2
    PUSH 0x12                           ; 00496b71
    LEA EAX,[EBX + 0x150]               ; 00496b73
    PUSH EAX                            ; 00496b79
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00496b7a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00496b7f
    JMP 0x00496b8d                      ; 00496b82
        ;   XREF to: 00496b8d (UNCONDITIONAL_JUMP)  ; caseD_1
    PUSH EBX                            ; 00496b84
        ;   Label: default
    CALL FUN_004b5270                   ; 00496b85
        ;   XREF to: 004b5270 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5270()
    ADD ESP,0x4                         ; 00496b8a
    TEST EDI,EDI                        ; 00496b8d
        ;   Label: caseD_0
    JNZ 0x0049604e                      ; 00496b8f
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496b95
    CALL core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0 ; 00496b96
        ;   XREF to: 004b4fe0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004b4fe0()
    ADD ESP,0x4                         ; 00496b9b
    TEST EAX,EAX                        ; 00496b9e
    JNZ 0x0049604e                      ; 00496ba0
        ;   XREF to: 0049604e (CONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496ba6
    CALL core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0 ; 00496ba7
        ;   XREF to: 004b54c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_tryPushNearbyBox_FUN_004b54c0()
    ADD ESP,0x4                         ; 00496bac
    TEST EAX,EAX                        ; 00496baf
    JNZ 0x00496bce                      ; 00496bb1
        ;   XREF to: 00496bce (CONDITIONAL_JUMP)  ; LAB_00496bce
    PUSH EBX                            ; 00496bb3
    CALL FUN_004b52f0                   ; 00496bb4
        ;   XREF to: 004b52f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b52f0()
    ADD ESP,0x4                         ; 00496bb9
    TEST EAX,EAX                        ; 00496bbc
    JZ 0x00496be6                       ; 00496bbe
        ;   XREF to: 00496be6 (CONDITIONAL_JUMP)  ; LAB_00496be6
    PUSH EBX                            ; 00496bc0
    CALL core_hero.cpp_CHero_executeLeverPull_FUN_004b5490 ; 00496bc1
        ;   XREF to: 004b5490 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_executeLeverPull_FUN_004b5490()
    ADD ESP,0x4                         ; 00496bc6
    JMP 0x0049604e                      ; 00496bc9
        ;   XREF to: 0049604e (UNCONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH 0x1                            ; 00496bce
        ;   Label: LAB_00496bce
    PUSH 0xd                            ; 00496bd0
    LEA EAX,[EBX + 0x150]               ; 00496bd2
    PUSH EAX                            ; 00496bd8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00496bd9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00496bde
    JMP 0x0049604e                      ; 00496be1
        ;   XREF to: 0049604e (UNCONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496be6
        ;   Label: LAB_00496be6
    CALL core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0 ; 00496be7
        ;   XREF to: 004987e0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0()
    ADD ESP,0x4                         ; 00496bec
    JMP 0x0049604e                      ; 00496bef
        ;   XREF to: 0049604e (UNCONDITIONAL_JUMP)  ; LAB_0049604e
    PUSH EBX                            ; 00496bf4
        ;   Label: LAB_00496bf4
    CALL core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0 ; 00496bf5
        ;   XREF to: 004b56f0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_stopPushingBox_FUN_004b56f0()
    ADD ESP,0x4                         ; 00496bfa
    JMP 0x0049616c                      ; 00496bfd
        ;   XREF to: 0049616c (UNCONDITIONAL_JUMP)  ; LAB_0049616c
    CMP dword ptr [EBX + 0xbca0],0x0    ; 00496c02
        ;   Label: LAB_00496c02
    JZ 0x00496ce4                       ; 00496c09
        ;   XREF to: 00496ce4 (CONDITIONAL_JUMP)  ; LAB_00496ce4
    FLD float ptr [EBP + 0x92]          ; 00496c0f
    FMUL double ptr [0x0058207a]        ; 00496c15 | DOUBLE_0058207a
    FADD float ptr [EBX + 0x5a5ac]      ; 00496c1b
    FST float ptr [EBX + 0x5a5ac]       ; 00496c21
    FCOMP float ptr [0x0059dce0]        ; 00496c27 | FLOAT_0059dce0
    FNSTSW AX                           ; 00496c2d
    SAHF                                ; 00496c2f
    JBE 0x00496c51                      ; 00496c30
        ;   XREF to: 00496c51 (CONDITIONAL_JUMP)  ; LAB_00496c51
    MOV dword ptr [EBX + 0xbca0],0x0    ; 00496c32
    MOV dword ptr [EBX + 0x1fa54],0x2   ; 00496c3c
    MOV EAX,[0x0059dce0]                ; 00496c46 | FLOAT_0059dce0
    MOV dword ptr [EBX + 0x5a5ac],EAX   ; 00496c4b
    MOV EAX,dword ptr [EBX + 0x1fa6c]   ; 00496c51
        ;   Label: LAB_00496c51
    MOV dword ptr [EBP + -0x5e],EAX     ; 00496c57
    LEA EAX,[EBP + -0x5e]               ; 00496c5a
    PUSH EAX                            ; 00496c5d
    LEA EAX,[EBP + 0xfffffeae]          ; 00496c5e
    XOR EDX,EDX                         ; 00496c64
    PUSH EAX                            ; 00496c66
    MOV dword ptr [EBP + -0x56],EDX     ; 00496c67
    MOV dword ptr [EBP + -0x5a],EDX     ; 00496c6a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00496c6d
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    MOV EAX,dword ptr [EBX + 0x5a5ac]   ; 00496c72
    ADD ESP,0x8                         ; 00496c78
    MOV dword ptr [EBP + -0x3e],EAX     ; 00496c7b
    LEA EAX,[EBP + -0x46]               ; 00496c7e
    PUSH EAX                            ; 00496c81
    LEA EAX,[EBP + -0x76]               ; 00496c82
    PUSH EAX                            ; 00496c85
    LEA EAX,[EBP + 0xfffffeae]          ; 00496c86
    XOR EDI,EDI                         ; 00496c8c
    PUSH EAX                            ; 00496c8e
    MOV dword ptr [EBP + -0x46],EDI     ; 00496c8f
    MOV dword ptr [EBP + -0x42],EDI     ; 00496c92
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00496c95
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 00496c9a
    PUSH EAX                            ; 00496c9d
    LEA EAX,[EBP + -0xa]                ; 00496c9e
    PUSH EAX                            ; 00496ca1
    PUSH EBX                            ; 00496ca2
    ADD ESI,0x574                       ; 00496ca3
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 00496ca9
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    ADD ESP,0xc                         ; 00496cae
    CMP ESI,EAX                         ; 00496cb1
    JZ 0x00496cc5                       ; 00496cb3
        ;   XREF to: 00496cc5 (CONDITIONAL_JUMP)  ; LAB_00496cc5
    MOV EDX,dword ptr [EAX]             ; 00496cb5
    MOV dword ptr [ESI],EDX             ; 00496cb7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00496cb9
    MOV dword ptr [ESI + 0x4],EDX       ; 00496cbc
    MOV EDX,dword ptr [EAX + 0x8]       ; 00496cbf
    MOV dword ptr [ESI + 0x8],EDX       ; 00496cc2
    CMP dword ptr [EBX + 0x1fa54],0x2   ; 00496cc5
        ;   Label: LAB_00496cc5
    JZ 0x004961ba                       ; 00496ccc
        ;   XREF to: 004961ba (CONDITIONAL_JUMP)  ; LAB_004961ba
    CMP dword ptr [EBX + 0x1fa54],0x1   ; 00496cd2
        ;   Label: LAB_00496cd2
    JZ 0x004961e1                       ; 00496cd9
        ;   XREF to: 004961e1 (CONDITIONAL_JUMP)  ; LAB_004961e1
    JMP 0x0049620e                      ; 00496cdf
        ;   XREF to: 0049620e (UNCONDITIONAL_JUMP)  ; LAB_0049620e
    MOV dword ptr [EBX + 0x1fa54],0x2   ; 00496ce4
        ;   Label: LAB_00496ce4
    JMP 0x00496c51                      ; 00496cee
        ;   XREF to: 00496c51 (UNCONDITIONAL_JUMP)  ; LAB_00496c51
    MOV dword ptr [EBX + 0xbca0],ESI    ; 00496cf3
        ;   Label: LAB_00496cf3
    JMP 0x0049620e                      ; 00496cf9
        ;   XREF to: 0049620e (UNCONDITIONAL_JUMP)  ; LAB_0049620e
    MOV dword ptr [EBX + 0xfc],0x1      ; 00496cfe
        ;   Label: LAB_00496cfe
    LEA ESP,[EBP + 0x7a]                ; 00496d08
    POP EBP                             ; 00496d0b
    POP EDI                             ; 00496d0c
    POP ESI                             ; 00496d0d
    POP EBX                             ; 00496d0e
    RET                                 ; 00496d0f

