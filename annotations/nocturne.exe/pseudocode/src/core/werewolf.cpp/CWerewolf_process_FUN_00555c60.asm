; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_CWerewolf_process_FUN_00555c60(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x320]:1  local_320
; undefined4       Stack[-0x31c]:4  local_31c
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined        Stack[-0x2e4]:1  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined        Stack[-0x2a8]:1  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined        Stack[-0x26c]:1  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined        Stack[-0x230]:1  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined        Stack[-0x1d0]:1  local_1d0
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined        Stack[-0x1ac]:1  local_1ac
; undefined        Stack[-0x1a0]:1  local_1a0
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x17c]:1  local_17c
; undefined        Stack[-0x170]:1  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined        Stack[-0x164]:1  local_164
; undefined        Stack[-0x158]:1  local_158
; undefined        Stack[-0x14c]:1  local_14c
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined        Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x3c]:4  local_3c
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
;   string s_%s_confused_while_walking_to_scr_00597d21
;   string s_..\\core\\werewolf.cpp_00597d4b
;   string s_Alpha_werewolf_requires_2_waypoi_00597d60
;   string s_Phase:_%d,_Timer:_%f_00597d84
;   string s_%s_gave_up_chase_-_I'm_confused_00597d9a
;   string s_werewolf-eat.wav_00597dbb
;   double DOUBLE_00597dd1 = 3.14159265350000
;   double DOUBLE_00597dd9 = 4
;   double DOUBLE_00597de1 = 32
;   double DOUBLE_00597de9 = 5
;   float FLOAT_00597df1 = 2
;   double DOUBLE_00597df9 = 0.392699081687500
;   double DOUBLE_00597e01 = 0.25
;   float FLOAT_00597e09 = 0.2617994
;   float FLOAT_00597e0d = -0.2617994
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   ... and 20 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555c60
        ;   Label: core_werewolf.cpp_CWerewolf_process_FUN_00555c60
    PUSH ESI                            ; 00555c61
    PUSH EDI                            ; 00555c62
    PUSH EBP                            ; 00555c63
    MOV EBP,ESP                         ; 00555c64
    SUB ESP,0x310                       ; 00555c66
    SUB EBP,0x7a                        ; 00555c6c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00555c6f
    PUSH dword ptr [EBP + 0x92]         ; 00555c75
    PUSH EBX                            ; 00555c7b
    CALL core_charactr.cpp_FUN_004259f0 ; 00555c7c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004259f0()
    ADD ESP,0x8                         ; 00555c81
    TEST EAX,EAX                        ; 00555c84
    JZ 0x00555cf2                       ; 00555c86
        ;   XREF to: 00555cf2 (CONDITIONAL_JUMP)  ; LAB_00555cf2
    CMP dword ptr [EBX + 0xbd24],0x2    ; 00555c88
    JZ 0x00555d09                       ; 00555c8f
        ;   XREF to: 00555d09 (CONDITIONAL_JUMP)  ; LAB_00555d09
    LEA EAX,[EBX + 0x23a4]              ; 00555c91
        ;   Label: LAB_00555c91
    MOV dword ptr [EAX + 0x8],0x0       ; 00555c97
    FLD float ptr [EBP + 0x92]          ; 00555c9e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00555ca4
    MOV dword ptr [EAX + 0x4],EDX       ; 00555ca7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00555caa
    MOV dword ptr [EAX],EDX             ; 00555cad
    FMUL float ptr [EBX + 0xbc8c]       ; 00555caf
    LEA ESI,[EBX + 0x150]               ; 00555cb5
    FSTP float ptr [EBP + 0x4e]         ; 00555cbb
    FLD float ptr [EBP + 0x4e]          ; 00555cbe
        ;   Label: LAB_00555cbe
    FLDZ                                ; 00555cc1
    FCOMPP                              ; 00555cc3
    FNSTSW AX                           ; 00555cc5
    SAHF                                ; 00555cc7
    JNC 0x00555dd1                      ; 00555cc8
        ;   XREF to: 00555dd1 (CONDITIONAL_JUMP)  ; LAB_00555dd1
    LEA EAX,[EBP + 0x4e]                ; 00555cce
    PUSH EAX                            ; 00555cd1
    PUSH ESI                            ; 00555cd2
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00555cd3
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_advance_FUN_004e11c0()
    ADD ESP,0x8                         ; 00555cd8
    MOV EDI,EAX                         ; 00555cdb
    CMP EAX,0xa                         ; 00555cdd
    JNC 0x00555db5                      ; 00555ce0
        ;   XREF to: 00555db5 (CONDITIONAL_JUMP)  ; LAB_00555db5
    PUSH EDI                            ; 00555ce6
    PUSH EBX                            ; 00555ce7
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00555ce8
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 00555ced
    JMP 0x00555cbe                      ; 00555cf0
        ;   XREF to: 00555cbe (UNCONDITIONAL_JUMP)  ; LAB_00555cbe
    MOV ECX,dword ptr [EBX + 0xbd4c]    ; 00555cf2
        ;   Label: LAB_00555cf2
    PUSH ECX                            ; 00555cf8
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00555cf9
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00555cfe
    LEA ESP,[EBP + 0x7a]                ; 00555d01
    POP EBP                             ; 00555d04
    POP EDI                             ; 00555d05
    POP ESI                             ; 00555d06
    POP EBX                             ; 00555d07
    RET                                 ; 00555d08
    FLD float ptr [EBX + 0xbd64]        ; 00555d09
        ;   Label: LAB_00555d09
    FLDZ                                ; 00555d0f
    FCOMPP                              ; 00555d11
    FNSTSW AX                           ; 00555d13
    SAHF                                ; 00555d15
    JA 0x00555c91                       ; 00555d16
        ;   XREF to: 00555c91 (CONDITIONAL_JUMP)  ; LAB_00555c91
    FLD float ptr [EBX + 0xbd64]        ; 00555d1c
    FSUB float ptr [EBP + 0x92]         ; 00555d22
    FSTP float ptr [EBX + 0xbd64]       ; 00555d28
    JMP 0x00555c91                      ; 00555d2e
        ;   XREF to: 00555c91 (UNCONDITIONAL_JUMP)  ; LAB_00555c91
    MOV EAX,dword ptr [EBX + 0xbd34]    ; 00555d33
        ;   Label: LAB_00555d33
    PUSH EAX                            ; 00555d39
    LEA EAX,[EBP + 0xffffff32]          ; 00555d3a
    PUSH EAX                            ; 00555d40
    PUSH ESI                            ; 00555d41
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00555d42
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00555d47
    PUSH EAX                            ; 00555d4a
    LEA EAX,[EBP + -0xe]                ; 00555d4b
    PUSH EAX                            ; 00555d4e
    PUSH EBX                            ; 00555d4f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00555d50
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00555d55
    PUSH 0x41400000                     ; 00555d58
    PUSH 0x41000000                     ; 00555d5d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00555d62
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00555d67
    ADD ESP,0x8                         ; 00555d6a
    FLD float ptr [EBP + 0x76]          ; 00555d6d
    FMUL double ptr [0x00597e01]        ; 00555d70 | DOUBLE_00597e01
    PUSH 0x0                            ; 00555d76
    CALL crt_math.c_round_FUN_00563a30  ; 00555d78
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EBP + 0x56]        ; 00555d7d
    MOV EDX,dword ptr [EBP + 0x56]      ; 00555d80
    PUSH EDX                            ; 00555d83
    PUSH 0x0                            ; 00555d84
    LEA EAX,[EBP + -0xe]                ; 00555d86
    PUSH EAX                            ; 00555d89
    MOV ECX,dword ptr [0x005b96c4]      ; 00555d8a | DAT_005b96c4
    PUSH ECX                            ; 00555d90
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00555d91
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 00555d96
    JMP 0x00555cbe                      ; 00555d99
        ;   XREF to: 00555cbe (UNCONDITIONAL_JUMP)  ; LAB_00555cbe
    PUSH 0x1                            ; 00555d9e
        ;   Label: LAB_00555d9e
    PUSH EBX                            ; 00555da0
    MOV EDI,dword ptr [0x005baf90]      ; 00555da1 | DAT_005baf90
    PUSH EDI                            ; 00555da7 | DAT_01cc9450
    CALL FUN_004d9110                   ; 00555da8
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9110()
    ADD ESP,0xc                         ; 00555dad
    JMP 0x00555cbe                      ; 00555db0
        ;   XREF to: 00555cbe (UNCONDITIONAL_JUMP)  ; LAB_00555cbe
    JBE 0x00555d33                      ; 00555db5
        ;   XREF to: 00555d33 (CONDITIONAL_JUMP)  ; LAB_00555d33
        ;   Label: LAB_00555db5
    CMP EAX,0x29a                       ; 00555dbb
    JZ 0x00555d9e                       ; 00555dc0
        ;   XREF to: 00555d9e (CONDITIONAL_JUMP)  ; LAB_00555d9e
    PUSH EDI                            ; 00555dc2
    PUSH EBX                            ; 00555dc3
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00555dc4
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processMotion_FUN_0042add0()
    ADD ESP,0x8                         ; 00555dc9
    JMP 0x00555cbe                      ; 00555dcc
        ;   XREF to: 00555cbe (UNCONDITIONAL_JUMP)  ; LAB_00555cbe
    FLD float ptr [EBX + 0xbc8c]        ; 00555dd1
        ;   Label: LAB_00555dd1
    FLD float ptr [EBP + 0x92]          ; 00555dd7
    FMUL double ptr [0x00597dd1]        ; 00555ddd | DOUBLE_00597dd1
    FMULP                               ; 00555de3
    FLD float ptr [EBX + 0x23ac]        ; 00555de5
    MOV ESI,dword ptr [EBX + 0xbd24]    ; 00555deb
    FSTP float ptr [EBX + 0x242c]       ; 00555df1
    FSTP float ptr [EBX + 0x2430]       ; 00555df7
    CMP ESI,0x2                         ; 00555dfd
    JNZ 0x00555e18                      ; 00555e00
        ;   XREF to: 00555e18 (CONDITIONAL_JUMP)  ; LAB_00555e18
    FLD float ptr [EBX + 0x2430]        ; 00555e02
    FLD ST0                             ; 00555e08
    FMUL double ptr [0x00597dd9]        ; 00555e0a | DOUBLE_00597dd9
    FSTP ST1                            ; 00555e10
    FSTP float ptr [EBX + 0x2430]       ; 00555e12
    LEA ESI,[EBX + 0x150]               ; 00555e18
        ;   Label: LAB_00555e18
    PUSH ESI                            ; 00555e1e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00555e1f
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 00555e24
    PUSH dword ptr [EBP + 0x92]         ; 00555e27
    MOV EDI,dword ptr [EAX + 0x24]      ; 00555e2d
    PUSH EBX                            ; 00555e30
    MOV dword ptr [EBP + 0x72],EDI      ; 00555e31
    CALL core_charactr.cpp_FUN_00428c00 ; 00555e34
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00428c00()
    ADD ESP,0x8                         ; 00555e39
    TEST EAX,EAX                        ; 00555e3c
    JZ 0x00556116                       ; 00555e3e
        ;   XREF to: 00556116 (CONDITIONAL_JUMP)  ; LAB_00556116
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00555e44
    CMP EAX,0x2                         ; 00555e4a
    JNC 0x00556106                      ; 00555e4d
        ;   XREF to: 00556106 (CONDITIONAL_JUMP)  ; LAB_00556106
    CMP EAX,0x1                         ; 00555e53
    JNZ 0x0055610d                      ; 00555e56
        ;   XREF to: 0055610d (CONDITIONAL_JUMP)  ; LAB_0055610d
    CMP EDI,0xe                         ; 00555e5c
    JNZ 0x005560ba                      ; 00555e5f
        ;   XREF to: 005560ba (CONDITIONAL_JUMP)  ; LAB_005560ba
    PUSH 0x1                            ; 00555e65
        ;   Label: LAB_00555e65
    PUSH 0xf                            ; 00555e67
    LEA EAX,[EBX + 0x150]               ; 00555e69
        ;   Label: LAB_00555e69
    PUSH EAX                            ; 00555e6f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00555e70
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
        ;   Label: LAB_00555e70
    ADD ESP,0xc                         ; 00555e75
        ;   Label: LAB_00555e75
    LEA EAX,[EBX + 0x23a4]              ; 00555e78
        ;   Label: LAB_00555e78
    MOV dword ptr [EAX + 0x8],0x0       ; 00555e7e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00555e85
    MOV dword ptr [EAX + 0x4],EDX       ; 00555e88
    MOV EDX,dword ptr [EAX + 0x4]       ; 00555e8b
    MOV dword ptr [EAX],EDX             ; 00555e8e
    CMP dword ptr [EBP + 0x72],0x13     ; 00555e90
        ;   Label: LAB_00555e90
    JNZ 0x00556fd9                      ; 00555e94
        ;   XREF to: 00556fd9 (CONDITIONAL_JUMP)  ; LAB_00556fd9
    CMP dword ptr [EBX + 0x2618],0x0    ; 00555e9a
    JZ 0x00556fd9                       ; 00555ea1
        ;   XREF to: 00556fd9 (CONDITIONAL_JUMP)  ; LAB_00556fd9
    MOV EAX,dword ptr [EBX + 0xbd4c]    ; 00555ea7
    PUSH EAX                            ; 00555ead
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00555eae
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 00555eb3
    TEST EAX,EAX                        ; 00555eb6
    JZ 0x00556fbc                       ; 00555eb8
        ;   XREF to: 00556fbc (CONDITIONAL_JUMP)  ; LAB_00556fbc
    MOV EDX,0x3f800000                  ; 00555ebe
        ;   Label: LAB_00555ebe
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 00555ec3
    MOV dword ptr [EBP + 0x6a],EDX      ; 00555ec9
    TEST ECX,ECX                        ; 00555ecc
    JNZ 0x00555ed7                      ; 00555ece
        ;   XREF to: 00555ed7 (CONDITIONAL_JUMP)  ; LAB_00555ed7
    MOV dword ptr [EBP + 0x6a],0x3f400000 ; 00555ed0
    MOV EDI,dword ptr [EBP + 0x72]      ; 00555ed7
        ;   Label: LAB_00555ed7
    CMP EDI,0xe                         ; 00555eda
    JNZ 0x00556fed                      ; 00555edd
        ;   XREF to: 00556fed (CONDITIONAL_JUMP)  ; LAB_00556fed
    FLD float ptr [EBP + 0x6a]          ; 00555ee3
        ;   Label: LAB_00555ee3
    FMUL double ptr [0x00597e19]        ; 00555ee6 | DOUBLE_00597e19
    FSTP float ptr [EBX + 0x2dd8]       ; 00555eec
        ;   Label: LAB_00555eec
    FLD float ptr [EBX + 0xbca0]        ; 00555ef2
    FLDZ                                ; 00555ef8
    FCOMPP                              ; 00555efa
    FNSTSW AX                           ; 00555efc
    SAHF                                ; 00555efe
    JNC 0x00555f13                      ; 00555eff
        ;   XREF to: 00555f13 (CONDITIONAL_JUMP)  ; LAB_00555f13
    FLD float ptr [EBX + 0xbca0]        ; 00555f01
    FSUB float ptr [EBP + 0x92]         ; 00555f07
    FSTP float ptr [EBX + 0xbca0]       ; 00555f0d
    LEA EAX,[EBX + 0x150]               ; 00555f13
        ;   Label: LAB_00555f13
    PUSH EAX                            ; 00555f19
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00555f1a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00555f1f
    ADD ESP,0x4                         ; 00555f22
    CMP EAX,0xd                         ; 00555f25
    JZ 0x00557004                       ; 00555f28
        ;   XREF to: 00557004 (CONDITIONAL_JUMP)  ; LAB_00557004
    TEST EAX,EAX                        ; 00555f2e
    JZ 0x00557004                       ; 00555f30
        ;   XREF to: 00557004 (CONDITIONAL_JUMP)  ; LAB_00557004
    CMP EAX,0xe                         ; 00555f36
    JZ 0x00557004                       ; 00555f39
        ;   XREF to: 00557004 (CONDITIONAL_JUMP)  ; LAB_00557004
    CMP EAX,0x14                        ; 00555f3f
    JZ 0x00557004                       ; 00555f42
        ;   XREF to: 00557004 (CONDITIONAL_JUMP)  ; LAB_00557004
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00555f48
        ;   Label: LAB_00555f48
    TEST ECX,ECX                        ; 00555f4e
    JZ 0x00555f7c                       ; 00555f50
        ;   XREF to: 00555f7c (CONDITIONAL_JUMP)  ; LAB_00555f7c
    PUSH ECX                            ; 00555f52
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00555f53
    CALL dword ptr [EDX + 0xec]         ; 00555f59
    ADD ESP,0x4                         ; 00555f5f
    CMP EAX,EBX                         ; 00555f62
    JNZ 0x00555f7c                      ; 00555f64
        ;   XREF to: 00555f7c (CONDITIONAL_JUMP)  ; LAB_00555f7c
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00555f66
    PUSH ESI                            ; 00555f6c
    MOV EDI,dword ptr [0x005be368]      ; 00555f6d | DAT_005be368
    PUSH EDI                            ; 00555f73 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00555f74
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00555f79
    FLD float ptr [EBP + 0x92]          ; 00555f7c
        ;   Label: LAB_00555f7c
    FLD ST0                             ; 00555f82
    FMUL double ptr [0x00597de1]        ; 00555f84 | DOUBLE_00597de1
    FLD float ptr [EBX + 0x2424]        ; 00555f8a
    FXCH                                ; 00555f90
    FSUBR ST0,ST1                       ; 00555f92
    LEA EDI,[EBX + 0x2420]              ; 00555f94
    FSTP ST1                            ; 00555f9a
    FSTP float ptr [EBX + 0x2424]       ; 00555f9c
    FLD float ptr [EDI]                 ; 00555fa2
    FMUL ST1                            ; 00555fa4
    FSTP float ptr [EBP + -0x62]        ; 00555fa6
    FLD float ptr [EDI + 0x4]           ; 00555fa9
    FMUL ST1                            ; 00555fac
    LEA ESI,[EBX + 0x23a4]              ; 00555fae
    FSTP float ptr [EBP + -0x5e]        ; 00555fb4
    FMUL float ptr [EDI + 0x8]          ; 00555fb7
    LEA EAX,[EBX + 0x2414]              ; 00555fba
    FLD float ptr [EBP + -0x62]         ; 00555fc0
    FXCH                                ; 00555fc3
    FSTP float ptr [EBP + -0x5a]        ; 00555fc5
    FADD float ptr [ESI]                ; 00555fc8
    FLD float ptr [EBP + -0x5e]         ; 00555fca
    FXCH                                ; 00555fcd
    FSTP float ptr [EBP + 0xa]          ; 00555fcf
    FADD float ptr [ESI + 0x4]          ; 00555fd2
    FLD float ptr [EBP + -0x5a]         ; 00555fd5
    FXCH                                ; 00555fd8
    FSTP float ptr [EBP + 0xe]          ; 00555fda
    FADD float ptr [ESI + 0x8]          ; 00555fdd
    FLD float ptr [EBP + 0xa]           ; 00555fe0
    FXCH                                ; 00555fe3
    FSTP float ptr [EBP + 0x12]         ; 00555fe5
    FADD float ptr [EAX]                ; 00555fe8
    FLD float ptr [EBP + 0xe]           ; 00555fea
    FXCH                                ; 00555fed
    FSTP float ptr [EBP + 0xfffffec6]   ; 00555fef
    FADD float ptr [EAX + 0x4]          ; 00555ff5
    FLD float ptr [EBP + 0x12]          ; 00555ff8
    FXCH                                ; 00555ffb
    FSTP float ptr [EBP + 0xfffffeca]   ; 00555ffd
    FADD float ptr [EAX + 0x8]          ; 00556003
    FSTP float ptr [EBP + 0xfffffece]   ; 00556006
    MOV dword ptr [ESI + 0x8],0x0       ; 0055600c
    MOV EDX,dword ptr [ESI + 0x8]       ; 00556013
    MOV dword ptr [ESI + 0x4],EDX       ; 00556016
    MOV EDX,dword ptr [ESI + 0x4]       ; 00556019
    MOV dword ptr [ESI],EDX             ; 0055601c
    MOV dword ptr [EAX + 0x8],0x0       ; 0055601e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00556025
    MOV dword ptr [EAX + 0x4],EDX       ; 00556028
    MOV EDX,dword ptr [EAX + 0x4]       ; 0055602b
    MOV dword ptr [EAX],EDX             ; 0055602e
    LEA EAX,[EBP + 0xfffffec6]          ; 00556030
    PUSH EAX                            ; 00556036
    PUSH EBX                            ; 00556037
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00556038
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050()
    ADD ESP,0x8                         ; 0055603d
    PUSH EBX                            ; 00556040
        ;   Label: LAB_00556040
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00556041
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_preProcess_FUN_004259a0()
    ADD ESP,0x4                         ; 00556046
    LEA EAX,[EBX + 0x150]               ; 00556049
    PUSH EAX                            ; 0055604f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00556050
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0()
    ADD ESP,0x4                         ; 00556055
    PUSH dword ptr [EBP + 0x92]         ; 00556058
    PUSH EBX                            ; 0055605e
    CALL core_charactr.cpp_FUN_0042a150 ; 0055605f
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a150()
    ADD ESP,0x8                         ; 00556064
    PUSH EBX                            ; 00556067
    CALL core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_00557cc0 ; 00556068
        ;   XREF to: 00557cc0 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_processChainConstraint_FUN_00557cc0()
    FLD float ptr [EBP + 0x92]          ; 0055606d
    FMUL double ptr [0x00597e21]        ; 00556073 | DOUBLE_00597e21
    FLD float ptr [EBX + 0xbd68]        ; 00556079
    FXCH                                ; 0055607f
    FADD ST0,ST1                        ; 00556081
    ADD ESP,0x4                         ; 00556083
    FSTP ST1                            ; 00556086
    FSTP float ptr [EBX + 0xbd68]       ; 00556088
    LEA ESP,[EBP + 0x7a]                ; 0055608e
    POP EBP                             ; 00556091
    POP EDI                             ; 00556092
    POP ESI                             ; 00556093
    POP EBX                             ; 00556094
    RET                                 ; 00556095
    PUSH 0x1                            ; 00556096
        ;   Label: LAB_00556096
    PUSH 0x0                            ; 00556098
    PUSH ESI                            ; 0055609a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0055609b
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005560a0
    PUSH EBX                            ; 005560a3
    PUSH 0x597d21                       ; 005560a4 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x005ad350]      ; 005560a9 | PTR_DAT_005ad350
    PUSH ECX                            ; 005560af | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 005560b0
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    JMP 0x00555e75                      ; 005560b5
        ;   XREF to: 00555e75 (UNCONDITIONAL_JUMP)  ; LAB_00555e75
    CMP EDI,0xf                         ; 005560ba
        ;   Label: LAB_005560ba
    JZ 0x00555e65                       ; 005560bd
        ;   XREF to: 00555e65 (CONDITIONAL_JUMP)  ; LAB_00555e65
    PUSH EAX                            ; 005560c3
    PUSH EAX                            ; 005560c4
    PUSH ESI                            ; 005560c5
    JMP 0x00555e70                      ; 005560c6
        ;   XREF to: 00555e70 (UNCONDITIONAL_JUMP)  ; LAB_00555e70
    CMP EDI,0xe                         ; 005560cb
        ;   Label: LAB_005560cb
    JZ 0x00555e65                       ; 005560ce
        ;   XREF to: 00555e65 (CONDITIONAL_JUMP)  ; LAB_00555e65
    CMP EDI,0xf                         ; 005560d4
    JZ 0x00555e65                       ; 005560d7
        ;   XREF to: 00555e65 (CONDITIONAL_JUMP)  ; LAB_00555e65
    FLD float ptr [EBX + 0x2410]        ; 005560dd
    FABS                                ; 005560e3
    FLD float ptr [EBX + 0x2430]        ; 005560e5
    FCOMPP                              ; 005560eb
    FNSTSW AX                           ; 005560ed
    SAHF                                ; 005560ef
    JBE 0x005560fc                      ; 005560f0
        ;   XREF to: 005560fc (CONDITIONAL_JUMP)  ; LAB_005560fc
    PUSH 0x1                            ; 005560f2
    PUSH 0x8                            ; 005560f4
    PUSH ESI                            ; 005560f6
    JMP 0x00555e70                      ; 005560f7
        ;   XREF to: 00555e70 (UNCONDITIONAL_JUMP)  ; LAB_00555e70
    PUSH 0x1                            ; 005560fc
        ;   Label: LAB_005560fc
    PUSH 0x1                            ; 005560fe
    PUSH ESI                            ; 00556100
    JMP 0x00555e70                      ; 00556101
        ;   XREF to: 00555e70 (UNCONDITIONAL_JUMP)  ; LAB_00555e70
    JBE 0x005560cb                      ; 00556106
        ;   XREF to: 005560cb (CONDITIONAL_JUMP)  ; LAB_005560cb
        ;   Label: LAB_00556106
    CMP EAX,0x3                         ; 00556108
    JZ 0x00556096                       ; 0055610b
        ;   XREF to: 00556096 (CONDITIONAL_JUMP)  ; LAB_00556096
    PUSH 0x1                            ; 0055610d
        ;   Label: LAB_0055610d
    PUSH 0x0                            ; 0055610f
    JMP 0x00555e69                      ; 00556111
        ;   XREF to: 00555e69 (UNCONDITIONAL_JUMP)  ; LAB_00555e69
    PUSH EBX                            ; 00556116
        ;   Label: LAB_00556116
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00556117
    CALL dword ptr [EAX + 0x104]        ; 0055611d
    ADD ESP,0x4                         ; 00556123
    TEST EAX,EAX                        ; 00556126
    JNZ 0x005562d6                      ; 00556128
        ;   XREF to: 005562d6 (CONDITIONAL_JUMP)  ; LAB_005562d6
    MOV EDX,dword ptr [0x01cae0e8]      ; 0055612e | DAT_01cae0e8
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00556134
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0055613a
    JNZ 0x005562d6                      ; 00556141
        ;   XREF to: 005562d6 (CONDITIONAL_JUMP)  ; LAB_005562d6
    LEA EAX,[EBP + 0xfffffde2]          ; 00556147
    PUSH EAX                            ; 0055614d
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0055614e
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00556153
    PUSH 0x41700000                     ; 00556156
    PUSH 0x40e00000                     ; 0055615b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00556160
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00556165
    ADD ESP,0x8                         ; 00556168
    MOV dword ptr [EBP + 0xfffffe16],EBX ; 0055616b
    MOV dword ptr [EBP + 0xfffffe1a],EBX ; 00556171
    LEA EAX,[EBP + 0xfffffde2]          ; 00556177
    FLD float ptr [EBP + 0x76]          ; 0055617d
    PUSH EAX                            ; 00556180
    FSTP float ptr [EBP + 0xfffffde6]   ; 00556181
    SUB ESP,0x4                         ; 00556187
    MOV EAX,dword ptr [EBX + 0x2614]    ; 0055618a
    MOV dword ptr [ESP],EAX             ; 00556190
    MOV ESI,dword ptr [EBX + 0xbd34]    ; 00556193
    LEA EAX,[ESI*0x4 + 0x0]             ; 00556199
    SUB EAX,ESI                         ; 005561a0
    SHL EAX,0x4                         ; 005561a2
    LEA ESI,[EBX + 0xfd0]               ; 005561a5
    ADD EAX,ESI                         ; 005561ab
    PUSH EAX                            ; 005561ad
    PUSH 0x2dd1184                      ; 005561ae | DAT_02dd1184
    LEA EAX,[EBP + -0x56]               ; 005561b3
    PUSH EAX                            ; 005561b6
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005561b7
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 005561bc
    PUSH EAX                            ; 005561bf
    LEA EAX,[EBP + 0xffffff4a]          ; 005561c0
    PUSH EAX                            ; 005561c6
    PUSH EBX                            ; 005561c7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005561c8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005561cd
    PUSH EAX                            ; 005561d0
    PUSH EBX                            ; 005561d1
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 005561d2
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 005561d7
    PUSH 0x41700000                     ; 005561da
    PUSH 0x40e00000                     ; 005561df
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 005561e4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 005561e9
    ADD ESP,0x8                         ; 005561ec
    MOV dword ptr [EBP + 0xfffffe16],EBX ; 005561ef
    MOV dword ptr [EBP + 0xfffffe1a],EBX ; 005561f5
    LEA EAX,[EBP + 0xfffffde2]          ; 005561fb
    FLD float ptr [EBP + 0x76]          ; 00556201
    PUSH EAX                            ; 00556204
    FSTP float ptr [EBP + 0xfffffde6]   ; 00556205
    SUB ESP,0x4                         ; 0055620b
    MOV EAX,dword ptr [EBX + 0x2614]    ; 0055620e
    MOV dword ptr [ESP],EAX             ; 00556214
    MOV EDI,dword ptr [EBX + 0xbd30]    ; 00556217
    LEA EAX,[EDI*0x4 + 0x0]             ; 0055621d
    SUB EAX,EDI                         ; 00556224
    SHL EAX,0x4                         ; 00556226
    ADD EAX,ESI                         ; 00556229
    PUSH EAX                            ; 0055622b
    PUSH 0x2dd1184                      ; 0055622c | DAT_02dd1184
    LEA EAX,[EBP + -0x4a]               ; 00556231
    PUSH EAX                            ; 00556234
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00556235
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 0055623a
    PUSH EAX                            ; 0055623d
    LEA EAX,[EBP + 0xffffff02]          ; 0055623e
    PUSH EAX                            ; 00556244
    PUSH EBX                            ; 00556245
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00556246
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 0055624b
    PUSH EAX                            ; 0055624e
    PUSH EBX                            ; 0055624f
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00556250
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 00556255
    PUSH 0x41700000                     ; 00556258
    PUSH 0x40e00000                     ; 0055625d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00556262
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00556267
    ADD ESP,0x8                         ; 0055626a
    MOV EAX,dword ptr [EBP + 0x76]      ; 0055626d
    MOV dword ptr [EBP + 0xfffffde6],EAX ; 00556270
    LEA EAX,[EBP + 0xfffffde2]          ; 00556276
    PUSH EAX                            ; 0055627c
    MOV dword ptr [EBP + 0xfffffe16],EBX ; 0055627d
    MOV dword ptr [EBP + 0xfffffe1a],EBX ; 00556283
    SUB ESP,0x4                         ; 00556289
    MOV EAX,dword ptr [EBX + 0x2614]    ; 0055628c
    MOV dword ptr [ESP],EAX             ; 00556292
    MOV EDI,dword ptr [EBX + 0xbd2c]    ; 00556295
    LEA EAX,[EDI*0x4 + 0x0]             ; 0055629b
    SUB EAX,EDI                         ; 005562a2
    SHL EAX,0x4                         ; 005562a4
    ADD EAX,ESI                         ; 005562a7
    PUSH EAX                            ; 005562a9
    PUSH 0x2dd1184                      ; 005562aa | DAT_02dd1184
    LEA EAX,[EBP + 0xffffff0e]          ; 005562af
    PUSH EAX                            ; 005562b5
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005562b6
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 005562bb
    PUSH EAX                            ; 005562be
    LEA EAX,[EBP + -0x1a]               ; 005562bf
    PUSH EAX                            ; 005562c2
    PUSH EBX                            ; 005562c3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005562c4
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005562c9
    PUSH EAX                            ; 005562cc
    PUSH EBX                            ; 005562cd
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 005562ce
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 005562d3
    MOV EDX,dword ptr [EBP + 0x72]      ; 005562d6
        ;   Label: LAB_005562d6
    MOV EAX,[0x01cae0e8]                ; 005562d9 | DAT_01cae0e8
    LEA ESI,[EBX + 0xfd0]               ; 005562de
    SHL EAX,0x2                         ; 005562e4
    CMP EDX,0x4                         ; 005562e7
    JNC 0x00556e8c                      ; 005562ea
        ;   XREF to: 00556e8c (CONDITIONAL_JUMP)  ; LAB_00556e8c
    CMP EDX,0x1                         ; 005562f0
    JNC 0x00556ed7                      ; 005562f3
        ;   XREF to: 00556ed7 (CONDITIONAL_JUMP)  ; LAB_00556ed7
    TEST EDX,EDX                        ; 005562f9
    JNZ 0x00555e90                      ; 005562fb
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH dword ptr [EBP + 0x92]         ; 00556301
        ;   Label: LAB_00556301
    PUSH EBX                            ; 00556307
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00556308
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 0055630d
    TEST EAX,EAX                        ; 00556310
    JZ 0x005566bd                       ; 00556312
        ;   XREF to: 005566bd (CONDITIONAL_JUMP)  ; LAB_005566bd
    MOV EDX,dword ptr [EBP + 0x72]      ; 00556318
    LEA EAX,[EBX + 0x150]               ; 0055631b
    CMP EDX,0xe                         ; 00556321
    JNZ 0x005566ab                      ; 00556324
        ;   XREF to: 005566ab (CONDITIONAL_JUMP)  ; LAB_005566ab
    PUSH 0x1                            ; 0055632a
    PUSH 0xf                            ; 0055632c
    PUSH EAX                            ; 0055632e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0055632f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556334
    JMP 0x00555e90                      ; 00556337
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    MOV EDI,dword ptr [EAX + 0x1cae0d8] ; 0055633c
        ;   Label: LAB_0055633c
    CMP EDI,dword ptr [EBX + 0xbca4]    ; 00556342
    JNZ 0x00556462                      ; 00556348
        ;   XREF to: 00556462 (CONDITIONAL_JUMP)  ; LAB_00556462
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0055634e
        ;   Label: LAB_0055634e
    TEST EAX,EAX                        ; 00556354
    JZ 0x0055637f                       ; 00556356
        ;   XREF to: 0055637f (CONDITIONAL_JUMP)  ; LAB_0055637f
    PUSH EAX                            ; 00556358
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00556359
    CALL dword ptr [EDX + 0x104]        ; 0055635f
    ADD ESP,0x4                         ; 00556365
    TEST EAX,EAX                        ; 00556368
    JZ 0x0055637f                       ; 0055636a
        ;   XREF to: 0055637f (CONDITIONAL_JUMP)  ; LAB_0055637f
    PUSH 0x1                            ; 0055636c
    PUSH 0x7                            ; 0055636e
    LEA EAX,[EBX + 0x150]               ; 00556370
    PUSH EAX                            ; 00556376
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556377
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0055637c
    MOV EDX,dword ptr [0x01cae0e8]      ; 0055637f | DAT_01cae0e8
        ;   Label: LAB_0055637f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00556385
    CMP EAX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0055638b
    JZ 0x00556424                       ; 00556392
        ;   XREF to: 00556424 (CONDITIONAL_JUMP)  ; LAB_00556424
    LEA EAX,[EBP + 0xfffffda6]          ; 00556398
    PUSH EAX                            ; 0055639e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0055639f
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 005563a4
    PUSH 0x41700000                     ; 005563a7
    PUSH 0x40e00000                     ; 005563ac
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 005563b1
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 005563b6
    MOV dword ptr [EBP + 0xfffffdda],EBX ; 005563b9
    MOV dword ptr [EBP + 0xfffffdde],EBX ; 005563bf
    ADD ESP,0x8                         ; 005563c5
    MOV EAX,dword ptr [EBP + 0x76]      ; 005563c8
    MOV dword ptr [EBP + 0xfffffdaa],EAX ; 005563cb
    MOV ESI,dword ptr [EBX + 0xbd34]    ; 005563d1
    LEA EAX,[EBP + 0xfffffda6]          ; 005563d7
    LEA EDX,[ESI*0x4 + 0x0]             ; 005563dd
    PUSH EAX                            ; 005563e4
    SUB EDX,ESI                         ; 005563e5
    LEA EAX,[EBX + 0xfd0]               ; 005563e7
    SHL EDX,0x4                         ; 005563ed
    ADD EAX,EDX                         ; 005563f0
    PUSH 0x3ecccccd                     ; 005563f2
    PUSH EAX                            ; 005563f7
    PUSH 0x2dd1184                      ; 005563f8 | DAT_02dd1184
    LEA EAX,[EBP + 0xfffffe96]          ; 005563fd
    PUSH EAX                            ; 00556403
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00556404
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00556409
    PUSH EAX                            ; 0055640c
    LEA EAX,[EBP + 0x3a]                ; 0055640d
    PUSH EAX                            ; 00556410
    PUSH EBX                            ; 00556411
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00556412
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556417
    PUSH EAX                            ; 0055641a
    PUSH EBX                            ; 0055641b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0055641c
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 00556421
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00556424
        ;   Label: LAB_00556424
    TEST EAX,EAX                        ; 0055642a
    JZ 0x00555e90                       ; 0055642c
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH EAX                            ; 00556432
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00556433
    CALL dword ptr [EDX + 0x104]        ; 00556439
    ADD ESP,0x4                         ; 0055643f
    TEST EAX,EAX                        ; 00556442
    JZ 0x00555e90                       ; 00556444
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 0055644a
    PUSH 0x7                            ; 0055644c
    LEA EAX,[EBX + 0x150]               ; 0055644e
    PUSH EAX                            ; 00556454
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556455
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0055645a
    JMP 0x00555e90                      ; 0055645d
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    LEA EAX,[EBP + 0xfffffe5a]          ; 00556462
        ;   Label: LAB_00556462
    PUSH EAX                            ; 00556468
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00556469
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 0055646e
    PUSH 0x41700000                     ; 00556471
    PUSH 0x40e00000                     ; 00556476
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0055647b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00556480
    MOV dword ptr [EBP + 0xfffffe8e],EBX ; 00556483
    MOV dword ptr [EBP + 0xfffffe92],EBX ; 00556489
    ADD ESP,0x8                         ; 0055648f
    FLD float ptr [EBP + 0x76]          ; 00556492
    LEA EAX,[EBP + 0xfffffe5a]          ; 00556495
    FSTP float ptr [EBP + 0xfffffe5e]   ; 0055649b
    MOV EDI,dword ptr [EBX + 0xbd34]    ; 005564a1
    PUSH EAX                            ; 005564a7
    LEA EAX,[EDI*0x4 + 0x0]             ; 005564a8
    SUB EAX,EDI                         ; 005564af
    SHL EAX,0x4                         ; 005564b1
    ADD EAX,ESI                         ; 005564b4
    PUSH 0x3f800000                     ; 005564b6
    PUSH EAX                            ; 005564bb
    PUSH 0x2dd1184                      ; 005564bc | DAT_02dd1184
    LEA EAX,[EBP + 0xfffffeba]          ; 005564c1
    PUSH EAX                            ; 005564c7
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005564c8
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 005564cd
    PUSH EAX                            ; 005564d0
    LEA EAX,[EBP + -0x2]                ; 005564d1
    PUSH EAX                            ; 005564d4
    PUSH EBX                            ; 005564d5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005564d6
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 005564db
    PUSH EAX                            ; 005564de
    PUSH EBX                            ; 005564df
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 005564e0
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 005564e5
    LEA EAX,[EBP + 0xfffffe5a]          ; 005564e8
    MOV EDI,dword ptr [EBX + 0xbd30]    ; 005564ee
    PUSH EAX                            ; 005564f4
    LEA EAX,[EDI*0x4 + 0x0]             ; 005564f5
    SUB EAX,EDI                         ; 005564fc
    SHL EAX,0x4                         ; 005564fe
    ADD EAX,ESI                         ; 00556501
    PUSH 0x3f800000                     ; 00556503
    PUSH EAX                            ; 00556508
    PUSH 0x2dd1184                      ; 00556509 | DAT_02dd1184
    LEA EAX,[EBP + 0x22]                ; 0055650e
    PUSH EAX                            ; 00556511
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00556512
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00556517
    PUSH EAX                            ; 0055651a
    LEA EAX,[EBP + 0x2e]                ; 0055651b
    PUSH EAX                            ; 0055651e
    PUSH EBX                            ; 0055651f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00556520
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556525
    PUSH EAX                            ; 00556528
    PUSH EBX                            ; 00556529
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0055652a
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 0055652f
    LEA EAX,[EBP + 0xfffffe5a]          ; 00556532
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00556538
    PUSH EAX                            ; 0055653e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0055653f
    SUB EAX,EDX                         ; 00556546
    SHL EAX,0x4                         ; 00556548
    ADD EAX,ESI                         ; 0055654b
    PUSH 0x3f800000                     ; 0055654d
    PUSH EAX                            ; 00556552
    PUSH 0x2dd1184                      ; 00556553 | DAT_02dd1184
    LEA EAX,[EBP + 0xfffffeea]          ; 00556558
    PUSH EAX                            ; 0055655e
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0055655f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00556564
    PUSH EAX                            ; 00556567
    LEA EAX,[EBP + -0x3e]               ; 00556568
    PUSH EAX                            ; 0055656b
    PUSH EBX                            ; 0055656c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0055656d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556572
    PUSH EAX                            ; 00556575
    PUSH EBX                            ; 00556576
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00556577
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 0055657c
    JMP 0x0055634e                      ; 0055657f
        ;   XREF to: 0055634e (UNCONDITIONAL_JUMP)  ; LAB_0055634e
    LEA EAX,[EBP + 0xfffffe1e]          ; 00556584
        ;   Label: LAB_00556584
    PUSH EAX                            ; 0055658a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0055658b
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00556590
    PUSH 0x41700000                     ; 00556593
    PUSH 0x40e00000                     ; 00556598
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0055659d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 005565a2
    MOV dword ptr [EBP + 0xfffffe52],EBX ; 005565a5
    MOV dword ptr [EBP + 0xfffffe56],EBX ; 005565ab
    ADD ESP,0x8                         ; 005565b1
    FLD float ptr [EBP + 0x76]          ; 005565b4
    LEA EAX,[EBP + 0xfffffe1e]          ; 005565b7
    FSTP float ptr [EBP + 0xfffffe22]   ; 005565bd
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 005565c3
    PUSH EAX                            ; 005565c9
    LEA EAX,[EDX*0x4 + 0x0]             ; 005565ca
    SUB EAX,EDX                         ; 005565d1
    SHL EAX,0x4                         ; 005565d3
    ADD EAX,ESI                         ; 005565d6
    PUSH 0x3ecccccd                     ; 005565d8
    PUSH EAX                            ; 005565dd
    PUSH 0x2dd1184                      ; 005565de | DAT_02dd1184
    LEA EAX,[EBP + 0xffffff6e]          ; 005565e3
    PUSH EAX                            ; 005565e9
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 005565ea
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 005565ef
    PUSH EAX                            ; 005565f2
    LEA EAX,[EBP + 0xffffff26]          ; 005565f3
    PUSH EAX                            ; 005565f9
    PUSH EBX                            ; 005565fa
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 005565fb
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556600
    PUSH EAX                            ; 00556603
    PUSH EBX                            ; 00556604
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00556605
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 0055660a
    ADD ESP,0x10                        ; 00556610
    TEST EDX,EDX                        ; 00556613
    JZ 0x00555e90                       ; 00556615
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    MOV EAX,EDX                         ; 0055661b
    PUSH EAX                            ; 0055661d
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0055661e
    CALL dword ptr [EDX + 0x104]        ; 00556624
    ADD ESP,0x4                         ; 0055662a
    TEST EAX,EAX                        ; 0055662d
    JZ 0x00555e90                       ; 0055662f
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 00556635
    PUSH 0x7                            ; 00556637
    PUSH EDI                            ; 00556639
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0055663a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 0055663f
    JMP 0x00555e90                      ; 00556642
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    MOV EAX,dword ptr [EBX + 0xbc90]    ; 00556647
        ;   Label: LAB_00556647
    TEST EAX,EAX                        ; 0055664d
    JNZ 0x00555e90                      ; 0055664f
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    CMP dword ptr [EBX + 0xdc],0x0      ; 00556655
    JNZ 0x00555e90                      ; 0055665c
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH EAX                            ; 00556662
    LEA EAX,[EBP + 0xfffffede]          ; 00556663
    PUSH EAX                            ; 00556669
    PUSH EDI                            ; 0055666a
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0055666b
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0()
    ADD ESP,0xc                         ; 00556670
    PUSH EAX                            ; 00556673
    LEA EAX,[EBP + 0xfffffed2]          ; 00556674
    PUSH EAX                            ; 0055667a
    PUSH EBX                            ; 0055667b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0055667c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556681
    PUSH 0x0                            ; 00556684
    LEA EAX,[EBP + 0xfffffed2]          ; 00556686
    PUSH EAX                            ; 0055668c
    MOV ECX,dword ptr [0x005b96c4]      ; 0055668d | DAT_005b96c4
    PUSH ECX                            ; 00556693
    CALL FUN_004b0480                   ; 00556694
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0480()
    ADD ESP,0xc                         ; 00556699
    MOV dword ptr [EBX + 0xbc90],0x1    ; 0055669c
    JMP 0x00555e90                      ; 005566a6
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 005566ab
        ;   Label: LAB_005566ab
    PUSH 0x1                            ; 005566ad
    PUSH EAX                            ; 005566af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005566b0
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005566b5
    JMP 0x00555e90                      ; 005566b8
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH dword ptr [EBP + 0x92]         ; 005566bd
        ;   Label: LAB_005566bd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005566c3
    PUSH EBX                            ; 005566c9
    CALL dword ptr [EAX + 0x13c]        ; 005566ca
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 005566d0
    ADD ESP,0x8                         ; 005566d6
    TEST ECX,ECX                        ; 005566d9
    JZ 0x00555e90                       ; 005566db
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    JZ 0x00556749                       ; 005566e1
        ;   XREF to: 00556749 (CONDITIONAL_JUMP)  ; LAB_00556749
    CMP dword ptr [EBX + 0xbd50],0x0    ; 005566e3
    JZ 0x00556749                       ; 005566ea
        ;   XREF to: 00556749 (CONDITIONAL_JUMP)  ; LAB_00556749
    MOV ESI,ECX                         ; 005566ec
    LEA EAX,[EBX + 0x20]                ; 005566ee
    FLD float ptr [ESI + 0x20]          ; 005566f1
    FSUB float ptr [EAX]                ; 005566f4
    FSTP float ptr [EBP + -0x26]        ; 005566f6
    FLD float ptr [ESI + 0x24]          ; 005566f9
    FSUB float ptr [EAX + 0x4]          ; 005566fc
    FST float ptr [EBP + -0x22]         ; 005566ff
    FMUL float ptr [EBP + -0x22]        ; 00556702
    FLD float ptr [EBP + -0x26]         ; 00556705
    FMUL ST0                            ; 00556708
    FLD float ptr [ESI + 0x28]          ; 0055670a
    FSUB float ptr [EAX + 0x8]          ; 0055670d
    FXCH                                ; 00556710
    FADDP ST2,ST0                       ; 00556712
    FST float ptr [EBP + -0x1e]         ; 00556714
    FMUL float ptr [EBP + -0x1e]        ; 00556717
    FADDP                               ; 0055671a
    FSQRT                               ; 0055671c
    FST float ptr [EBP + 0x5e]          ; 0055671e
    FCOMP float ptr [EBX + 0xbc9c]      ; 00556721
    FNSTSW AX                           ; 00556727
    SAHF                                ; 00556729
    JBE 0x0055673b                      ; 0055672a
        ;   XREF to: 0055673b (CONDITIONAL_JUMP)  ; LAB_0055673b
    MOV dword ptr [EBX + 0xbca4],0x0    ; 0055672c
        ;   Label: LAB_0055672c
    JMP 0x00555e90                      ; 00556736
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    FLD float ptr [EBP + 0x5e]          ; 0055673b
        ;   Label: LAB_0055673b
    FCOMP double ptr [0x00597de1]       ; 0055673e | DOUBLE_00597de1
    FNSTSW AX                           ; 00556744
    SAHF                                ; 00556746
    JA 0x0055672c                       ; 00556747
        ;   XREF to: 0055672c (CONDITIONAL_JUMP)  ; LAB_0055672c
    MOV EAX,[0x02dd1044]                ; 00556749 | DAT_02dd1044
        ;   Label: LAB_00556749
    PUSH EAX                            ; 0055674e
    MOV EDX,dword ptr [EBX + 0xbd50]    ; 0055674f
    PUSH EDX                            ; 00556755
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00556756
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0055675b
    TEST EAX,EAX                        ; 0055675e
    JZ 0x00556768                       ; 00556760
        ;   XREF to: 00556768 (CONDITIONAL_JUMP)  ; LAB_00556768
    CMP dword ptr [EBP + 0x72],0xe      ; 00556762
    JZ 0x005567aa                       ; 00556766
        ;   XREF to: 005567aa (CONDITIONAL_JUMP)  ; LAB_005567aa
    CMP dword ptr [EBX + 0xbca4],0x0    ; 00556768
        ;   Label: LAB_00556768
    JZ 0x00555e90                       ; 0055676f
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x3ecccccd                     ; 00556775
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 0055677a
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 0055677f
    TEST EAX,EAX                        ; 00556782
    JNZ 0x005567c2                      ; 00556784
        ;   XREF to: 005567c2 (CONDITIONAL_JUMP)  ; LAB_005567c2
    MOV EDI,dword ptr [EBP + 0x72]      ; 00556786
        ;   Label: LAB_00556786
    LEA EAX,[EBX + 0x150]               ; 00556789
    CMP EDI,0xe                         ; 0055678f
    JNZ 0x005566ab                      ; 00556792
        ;   XREF to: 005566ab (CONDITIONAL_JUMP)  ; LAB_005566ab
    PUSH 0x1                            ; 00556798
    PUSH 0xf                            ; 0055679a
    PUSH EAX                            ; 0055679c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0055679d
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005567a2
    JMP 0x00555e90                      ; 005567a5
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 005567aa
        ;   Label: LAB_005567aa
    PUSH 0x0                            ; 005567ac
    LEA EAX,[EBX + 0x150]               ; 005567ae
    PUSH EAX                            ; 005567b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 005567b5
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 005567ba
    JMP 0x00555e90                      ; 005567bd
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH EBX                            ; 005567c2
        ;   Label: LAB_005567c2
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060 ; 005567c3
        ;   XREF to: 00557060 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060()
    ADD ESP,0x4                         ; 005567c8
    JMP 0x00556786                      ; 005567cb
        ;   XREF to: 00556786 (UNCONDITIONAL_JUMP)  ; LAB_00556786
    PUSH dword ptr [EBP + 0x92]         ; 005567cd
        ;   Label: LAB_005567cd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005567d3
    PUSH EBX                            ; 005567d9
    CALL dword ptr [EAX + 0x13c]        ; 005567da
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 005567e0
    ADD ESP,0x8                         ; 005567e6
    TEST EDX,EDX                        ; 005567e9
    JZ 0x0055686e                       ; 005567eb
        ;   XREF to: 0055686e (CONDITIONAL_JUMP)  ; LAB_0055686e
    CMP dword ptr [EBX + 0xbd50],0x0    ; 005567f1
    JZ 0x0055689c                       ; 005567f8
        ;   XREF to: 0055689c (CONDITIONAL_JUMP)  ; LAB_0055689c
    MOV ESI,EDX                         ; 005567fe
    LEA EAX,[EBX + 0x20]                ; 00556800
    FLD float ptr [ESI + 0x20]          ; 00556803
    FSUB float ptr [EAX]                ; 00556806
    FSTP float ptr [EBP + -0x7a]        ; 00556808
    FLD float ptr [ESI + 0x24]          ; 0055680b
    FSUB float ptr [EAX + 0x4]          ; 0055680e
    FST float ptr [EBP + -0x76]         ; 00556811
    FMUL float ptr [EBP + -0x76]        ; 00556814
    FLD float ptr [EBP + -0x7a]         ; 00556817
    FMUL ST0                            ; 0055681a
    FLD float ptr [ESI + 0x28]          ; 0055681c
    FSUB float ptr [EAX + 0x8]          ; 0055681f
    FXCH                                ; 00556822
    FADDP ST2,ST0                       ; 00556824
    FST float ptr [EBP + -0x72]         ; 00556826
    FMUL float ptr [EBP + -0x72]        ; 00556829
    FADDP                               ; 0055682c
    FSQRT                               ; 0055682e
    FST float ptr [EBP + 0x66]          ; 00556830
    FCOMP float ptr [EBX + 0xbc9c]      ; 00556833
    FNSTSW AX                           ; 00556839
    SAHF                                ; 0055683b
    JA 0x0055684c                       ; 0055683c
        ;   XREF to: 0055684c (CONDITIONAL_JUMP)  ; LAB_0055684c
    FLD float ptr [EBP + 0x66]          ; 0055683e
    FCOMP double ptr [0x00597de1]       ; 00556841 | DOUBLE_00597de1
    FNSTSW AX                           ; 00556847
    SAHF                                ; 00556849
    JBE 0x0055689c                      ; 0055684a
        ;   XREF to: 0055689c (CONDITIONAL_JUMP)  ; LAB_0055689c
    PUSH 0x1                            ; 0055684c
        ;   Label: LAB_0055684c
    PUSH 0x0                            ; 0055684e
    LEA EAX,[EBX + 0x150]               ; 00556850
    PUSH EAX                            ; 00556856
    MOV dword ptr [EBX + 0xbca4],0x0    ; 00556857
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556861
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556866
    JMP 0x00555e90                      ; 00556869
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH dword ptr [EBP + 0x92]         ; 0055686e
        ;   Label: LAB_0055686e
    PUSH EBX                            ; 00556874
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00556875
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030()
    ADD ESP,0x8                         ; 0055687a
    TEST EAX,EAX                        ; 0055687d
    JNZ 0x00555e90                      ; 0055687f
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 00556885
    PUSH EAX                            ; 00556887
    LEA EAX,[EBX + 0x150]               ; 00556888
    PUSH EAX                            ; 0055688e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0055688f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556894
    JMP 0x00555e90                      ; 00556897
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    MOV ESI,dword ptr [0x02dd1044]      ; 0055689c | DAT_02dd1044
        ;   Label: LAB_0055689c
    PUSH ESI                            ; 005568a2
    MOV EDI,dword ptr [EBX + 0xbd50]    ; 005568a3
    PUSH EDI                            ; 005568a9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 005568aa
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 005568af
    TEST EAX,EAX                        ; 005568b2
    JZ 0x005568c0                       ; 005568b4
        ;   XREF to: 005568c0 (CONDITIONAL_JUMP)  ; LAB_005568c0
    CMP dword ptr [EBP + 0x72],0xf      ; 005568b6
    JZ 0x005567aa                       ; 005568ba
        ;   XREF to: 005567aa (CONDITIONAL_JUMP)  ; LAB_005567aa
    MOV EDX,dword ptr [EBX + 0xbd24]    ; 005568c0
        ;   Label: LAB_005568c0
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 005568c6
    CMP EDX,0x2                         ; 005568cc
    JNZ 0x005569f2                      ; 005568cf
        ;   XREF to: 005569f2 (CONDITIONAL_JUMP)  ; LAB_005569f2
    CMP dword ptr [EBX + 0xbd58],0x0    ; 005568d5
    JNZ 0x00556b3f                      ; 005568dc
        ;   XREF to: 00556b3f (CONDITIONAL_JUMP)  ; LAB_00556b3f
    MOV EAX,0x597d4b                    ; 005568e2 | = "..\\core\\werewolf.cpp"
        ;   Label: LAB_005568e2
    MOV EDX,0x1ad                       ; 005568e7
    PUSH 0x597d60                       ; 005568ec | = "Alpha werewolf requires 2 waypoints"
    MOV [0x01cc4800],EAX                ; 005568f1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 005568f6 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005568fc
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00556901
    SUB ESP,0x8                         ; 00556904
        ;   Label: LAB_00556904
    FLD float ptr [EBX + 0xbd64]        ; 00556907
    FSTP double ptr [ESP]               ; 0055690d
    MOV ECX,dword ptr [EBX + 0xbd60]    ; 00556910
    PUSH ECX                            ; 00556916
    PUSH 0x597d84                       ; 00556917 | = "Phase: %d, Timer: %f\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0055691c | PTR_DAT_005ad350
    PUSH EDI                            ; 00556922 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00556923
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    MOV EAX,dword ptr [EBX + 0xbd60]    ; 00556928
    ADD ESP,0x14                        ; 0055692e
    CMP EAX,0x1                         ; 00556931
    JNZ 0x00556b51                      ; 00556934
        ;   XREF to: 00556b51 (CONDITIONAL_JUMP)  ; LAB_00556b51
    MOV EAX,dword ptr [EBX + 0xbd58]    ; 0055693a
        ;   Label: LAB_0055693a
    ADD EAX,0x20                        ; 00556940
    PUSH EAX                            ; 00556943
    LEA EAX,[EBP + -0x6e]               ; 00556944
    PUSH EAX                            ; 00556947
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00556948
    PUSH ECX                            ; 0055694e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0055694f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 00556954
    FLDZ                                ; 00556957
    ADD ESP,0xc                         ; 00556959
    FCOMPP                              ; 0055695c
    FNSTSW AX                           ; 0055695e
    SAHF                                ; 00556960
    JBE 0x00556b5f                      ; 00556961
        ;   XREF to: 00556b5f (CONDITIONAL_JUMP)  ; LAB_00556b5f
    MOV ESI,dword ptr [EBX + 0xbd58]    ; 00556967
        ;   Label: LAB_00556967
    MOV EDI,dword ptr [EBX + 0xbd60]    ; 0055696d
        ;   Label: LAB_0055696d
    CMP EDI,0x1                         ; 00556973
    JNZ 0x00556c3e                      ; 00556976
        ;   XREF to: 00556c3e (CONDITIONAL_JUMP)  ; LAB_00556c3e
    LEA EDI,[ESI + 0x20]                ; 0055697c
        ;   Label: LAB_0055697c
    LEA EAX,[EBX + 0x20]                ; 0055697f
    FLD float ptr [EDI]                 ; 00556982
    FSUB float ptr [EAX]                ; 00556984
    FSTP float ptr [EBP + 0xffffff56]   ; 00556986
    FLD float ptr [EDI + 0x4]           ; 0055698c
    FSUB float ptr [EAX + 0x4]          ; 0055698f
    FST float ptr [EBP + 0xffffff5a]    ; 00556992
    FMUL float ptr [EBP + 0xffffff5a]   ; 00556998
    FLD float ptr [EBP + 0xffffff56]    ; 0055699e
    FMUL ST0                            ; 005569a4
    FLD float ptr [EDI + 0x8]           ; 005569a6
    FSUB float ptr [EAX + 0x8]          ; 005569a9
    FXCH                                ; 005569ac
    FADDP ST2,ST0                       ; 005569ae
    FST float ptr [EBP + 0xffffff5e]    ; 005569b0
    FMUL float ptr [EBP + 0xffffff5e]   ; 005569b6
    FADDP                               ; 005569bc
    FSQRT                               ; 005569be
    FCOMP double ptr [0x00597de9]       ; 005569c0 | DOUBLE_00597de9
    FNSTSW AX                           ; 005569c6
    SAHF                                ; 005569c8
    JNC 0x005569f2                      ; 005569c9
        ;   XREF to: 005569f2 (CONDITIONAL_JUMP)  ; LAB_005569f2
    MOV EDI,dword ptr [EBX + 0xbd60]    ; 005569cb
    INC EDI                             ; 005569d1
    MOV dword ptr [EBX + 0xbd60],EDI    ; 005569d2
    CMP EDI,0x3                         ; 005569d8
    JLE 0x005569e7                      ; 005569db
        ;   XREF to: 005569e7 (CONDITIONAL_JUMP)  ; LAB_005569e7
    MOV dword ptr [EBX + 0xbd60],0x0    ; 005569dd
    MOV EAX,[0x005a42f8]                ; 005569e7 | FLOAT_005a42f8
        ;   Label: LAB_005569e7
    MOV dword ptr [EBX + 0xbd64],EAX    ; 005569ec
    MOV EAX,[0x005a42ec]                ; 005569f2 | FLOAT_005a42ec
        ;   Label: LAB_005569f2
    MOV dword ptr [EBP + 0x5a],EAX      ; 005569f7
    LEA EAX,[EBX + 0x23a4]              ; 005569fa
    MOV dword ptr [EAX + 0x8],0x0       ; 00556a00
    PUSH 0x3e32b8c2                     ; 00556a07
    MOV EDX,dword ptr [EAX + 0x8]       ; 00556a0c
    MOV dword ptr [EAX + 0x4],EDX       ; 00556a0f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00556a12
    MOV dword ptr [EAX],EDX             ; 00556a15
    MOV EAX,dword ptr [EBP + 0x5a]      ; 00556a17
    PUSH 0x3f000000                     ; 00556a1a
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 00556a1f
    LEA EAX,[EBP + 0xfffffea2]          ; 00556a25
    XOR EDX,EDX                         ; 00556a2b
    PUSH EAX                            ; 00556a2d
    MOV dword ptr [EBP + 0xfffffea2],EDX ; 00556a2e
    MOV dword ptr [EBP + 0xfffffea6],EDX ; 00556a34
    PUSH ESI                            ; 00556a3a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00556a3b
    CALL dword ptr [EAX + 0xbc]         ; 00556a41
    ADD ESP,0x4                         ; 00556a47
    PUSH EAX                            ; 00556a4a
    ADD ESI,0x20                        ; 00556a4b
    PUSH ESI                            ; 00556a4e
    PUSH EBX                            ; 00556a4f
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00556a50
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0()
    ADD ESP,0x18                        ; 00556a55
    TEST EAX,EAX                        ; 00556a58
    JL 0x00556c7b                       ; 00556a5a
        ;   XREF to: 00556c7b (CONDITIONAL_JUMP)  ; LAB_00556c7b
    JLE 0x00556ca7                      ; 00556a60
        ;   XREF to: 00556ca7 (CONDITIONAL_JUMP)  ; LAB_00556ca7
    CMP dword ptr [EBX + 0xbd24],0x2    ; 00556a66
    JNZ 0x00556a87                      ; 00556a6d
        ;   XREF to: 00556a87 (CONDITIONAL_JUMP)  ; LAB_00556a87
    MOV ESI,dword ptr [EBX + 0xbd60]    ; 00556a6f
    CMP ESI,0x1                         ; 00556a75
    JZ 0x00555e90                       ; 00556a78
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    CMP ESI,0x3                         ; 00556a7e
    JZ 0x00555e90                       ; 00556a81
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    FLD float ptr [EBX + 0xbca0]        ; 00556a87
        ;   Label: LAB_00556a87
    FLDZ                                ; 00556a8d
    FCOMPP                              ; 00556a8f
    FNSTSW AX                           ; 00556a91
    SAHF                                ; 00556a93
    JC 0x00556b12                       ; 00556a94
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    PUSH 0x2                            ; 00556a9a
    PUSH 0x0                            ; 00556a9c
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00556a9e
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 00556aa3
    MOV ESI,EAX                         ; 00556aa6
    TEST EAX,EAX                        ; 00556aa8
    JNZ 0x00556abf                      ; 00556aaa
        ;   XREF to: 00556abf (CONDITIONAL_JUMP)  ; LAB_00556abf
    PUSH 0x1                            ; 00556aac
    PUSH 0x2                            ; 00556aae
    LEA EAX,[EBX + 0x150]               ; 00556ab0
    PUSH EAX                            ; 00556ab6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556ab7
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556abc
    CMP ESI,0x1                         ; 00556abf
        ;   Label: LAB_00556abf
    JNZ 0x00556ad6                      ; 00556ac2
        ;   XREF to: 00556ad6 (CONDITIONAL_JUMP)  ; LAB_00556ad6
    PUSH ESI                            ; 00556ac4
    PUSH 0x3                            ; 00556ac5
    LEA EAX,[EBX + 0x150]               ; 00556ac7
    PUSH EAX                            ; 00556acd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556ace
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556ad3
    CMP ESI,0x2                         ; 00556ad6
        ;   Label: LAB_00556ad6
    JNZ 0x00556aee                      ; 00556ad9
        ;   XREF to: 00556aee (CONDITIONAL_JUMP)  ; LAB_00556aee
    PUSH 0x1                            ; 00556adb
    PUSH 0x4                            ; 00556add
    LEA EAX,[EBX + 0x150]               ; 00556adf
    PUSH EAX                            ; 00556ae5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556ae6
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556aeb
    PUSH 0x3f19999a                     ; 00556aee
        ;   Label: LAB_00556aee
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 00556af3
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00556afd
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00556b02
    TEST EAX,EAX                        ; 00556b05
    JZ 0x00556b12                       ; 00556b07
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    PUSH EBX                            ; 00556b09
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060 ; 00556b0a
        ;   XREF to: 00557060 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060()
    ADD ESP,0x4                         ; 00556b0f
    FLD float ptr [EBX + 0xbd44]        ; 00556b12
        ;   Label: LAB_00556b12
    FSUB float ptr [EBP + 0x92]         ; 00556b18
    FST float ptr [EBX + 0xbd44]        ; 00556b1e
    FLDZ                                ; 00556b24
    FCOMPP                              ; 00556b26
    FNSTSW AX                           ; 00556b28
    SAHF                                ; 00556b2a
    JBE 0x00555e90                      ; 00556b2b
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH EBX                            ; 00556b31
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060 ; 00556b32
        ;   XREF to: 00557060 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060()
    ADD ESP,0x4                         ; 00556b37
    JMP 0x00555e90                      ; 00556b3a
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    CMP dword ptr [EBX + 0xbd5c],0x0    ; 00556b3f
        ;   Label: LAB_00556b3f
    JZ 0x005568e2                       ; 00556b46
        ;   XREF to: 005568e2 (CONDITIONAL_JUMP)  ; LAB_005568e2
    JMP 0x00556904                      ; 00556b4c
        ;   XREF to: 00556904 (UNCONDITIONAL_JUMP)  ; LAB_00556904
    CMP EAX,0x3                         ; 00556b51
        ;   Label: LAB_00556b51
    JZ 0x0055693a                       ; 00556b54
        ;   XREF to: 0055693a (CONDITIONAL_JUMP)  ; LAB_0055693a
    JMP 0x0055696d                      ; 00556b5a
        ;   XREF to: 0055696d (UNCONDITIONAL_JUMP)  ; LAB_0055696d
    MOV EAX,dword ptr [EBX + 0xbd5c]    ; 00556b5f
        ;   Label: LAB_00556b5f
    ADD EAX,0x20                        ; 00556b65
    PUSH EAX                            ; 00556b68
    LEA EAX,[EBP + 0xffffff62]          ; 00556b69
    PUSH EAX                            ; 00556b6f
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00556b70
    PUSH ESI                            ; 00556b76
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00556b77
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 00556b7c
    FLDZ                                ; 00556b7f
    ADD ESP,0xc                         ; 00556b81
    FCOMPP                              ; 00556b84
    FNSTSW AX                           ; 00556b86
    SAHF                                ; 00556b88
    JBE 0x00556b96                      ; 00556b89
        ;   XREF to: 00556b96 (CONDITIONAL_JUMP)  ; LAB_00556b96
    MOV ESI,dword ptr [EBX + 0xbd5c]    ; 00556b8b
    JMP 0x0055696d                      ; 00556b91
        ;   XREF to: 0055696d (UNCONDITIONAL_JUMP)  ; LAB_0055696d
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00556b96
        ;   Label: LAB_00556b96
    MOV ESI,dword ptr [EBX + 0xbd58]    ; 00556b9c
    FLD float ptr [EAX + 0x20]          ; 00556ba2
    FSUB float ptr [ESI + 0x20]         ; 00556ba5
    FSTP float ptr [EBP + 0xfffffeae]   ; 00556ba8
    FLD float ptr [EAX + 0x24]          ; 00556bae
    FSUB float ptr [ESI + 0x24]         ; 00556bb1
    FST float ptr [EBP + 0xfffffeb2]    ; 00556bb4
    FMUL float ptr [EBP + 0xfffffeb2]   ; 00556bba
    FLD float ptr [EBP + 0xfffffeae]    ; 00556bc0
    FMUL ST0                            ; 00556bc6
    FLD float ptr [EAX + 0x28]          ; 00556bc8
    FSUB float ptr [ESI + 0x28]         ; 00556bcb
    FXCH                                ; 00556bce
    FADDP ST2,ST0                       ; 00556bd0
    FST float ptr [EBP + 0xfffffeb6]    ; 00556bd2
    FMUL float ptr [EBP + 0xfffffeb6]   ; 00556bd8
    FADDP                               ; 00556bde
    FSQRT                               ; 00556be0
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00556be2
    MOV EAX,dword ptr [EBX + 0xbd5c]    ; 00556be8
    FLD float ptr [ESI + 0x20]          ; 00556bee
    FSUB float ptr [EAX + 0x20]         ; 00556bf1
    FSTP float ptr [EBP + 0xffffff7a]   ; 00556bf4
    FLD float ptr [ESI + 0x24]          ; 00556bfa
    FSUB float ptr [EAX + 0x24]         ; 00556bfd
    FST float ptr [EBP + 0xffffff7e]    ; 00556c00
    FMUL float ptr [EBP + 0xffffff7e]   ; 00556c06
    FLD float ptr [EBP + 0xffffff7a]    ; 00556c0c
    FMUL ST0                            ; 00556c12
    FLD float ptr [ESI + 0x28]          ; 00556c14
    FSUB float ptr [EAX + 0x28]         ; 00556c17
    FXCH                                ; 00556c1a
    FADDP ST2,ST0                       ; 00556c1c
    FST float ptr [EBP + -0x7e]         ; 00556c1e
    FMUL float ptr [EBP + -0x7e]        ; 00556c21
    FADDP                               ; 00556c24
    FSQRT                               ; 00556c26
    FCOMPP                              ; 00556c28
    FNSTSW AX                           ; 00556c2a
    SAHF                                ; 00556c2c
    JC 0x00556967                       ; 00556c2d
        ;   XREF to: 00556967 (CONDITIONAL_JUMP)  ; LAB_00556967
    MOV ESI,dword ptr [EBX + 0xbd5c]    ; 00556c33
    JMP 0x0055696d                      ; 00556c39
        ;   XREF to: 0055696d (UNCONDITIONAL_JUMP)  ; LAB_0055696d
    CMP EDI,0x3                         ; 00556c3e
        ;   Label: LAB_00556c3e
    JZ 0x0055697c                       ; 00556c41
        ;   XREF to: 0055697c (CONDITIONAL_JUMP)  ; LAB_0055697c
    FLD float ptr [EBX + 0xbd64]        ; 00556c47
    FLDZ                                ; 00556c4d
    FCOMPP                              ; 00556c4f
    FNSTSW AX                           ; 00556c51
    SAHF                                ; 00556c53
    JC 0x005569f2                       ; 00556c54
        ;   XREF to: 005569f2 (CONDITIONAL_JUMP)  ; LAB_005569f2
    LEA EDX,[EDI + 0x1]                 ; 00556c5a
    MOV dword ptr [EBX + 0xbd60],EDX    ; 00556c5d
    CMP EDX,0x3                         ; 00556c63
    JLE 0x005569f2                      ; 00556c66
        ;   XREF to: 005569f2 (CONDITIONAL_JUMP)  ; LAB_005569f2
    MOV dword ptr [EBX + 0xbd60],0x0    ; 00556c6c
    JMP 0x005569f2                      ; 00556c76
        ;   XREF to: 005569f2 (UNCONDITIONAL_JUMP)  ; LAB_005569f2
    PUSH EBX                            ; 00556c7b
        ;   Label: LAB_00556c7b
    PUSH 0x597d9a                       ; 00556c7c | = "%s gave up chase - I'm confused\n"
    MOV EAX,[0x005ad350]                ; 00556c81 | PTR_DAT_005ad350
    PUSH EAX                            ; 00556c86 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00556c87
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00556c8c
    PUSH 0x1                            ; 00556c8f
    PUSH 0x0                            ; 00556c91
    LEA EAX,[EBX + 0x150]               ; 00556c93
    PUSH EAX                            ; 00556c99
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556c9a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556c9f
    JMP 0x00556b12                      ; 00556ca2
        ;   XREF to: 00556b12 (UNCONDITIONAL_JUMP)  ; LAB_00556b12
    MOV EDI,dword ptr [0x02dd1044]      ; 00556ca7 | DAT_02dd1044
        ;   Label: LAB_00556ca7
    PUSH EDI                            ; 00556cad
    MOV EAX,dword ptr [EBX + 0xbd50]    ; 00556cae
    PUSH EAX                            ; 00556cb4
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00556cb5
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00556cba
    TEST EAX,EAX                        ; 00556cbd
    JNZ 0x00556b12                      ; 00556cbf
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    LEA EAX,[EBX + 0x20]                ; 00556cc5
    FLD float ptr [ESI]                 ; 00556cc8
    FSUB float ptr [EAX]                ; 00556cca
    FSTP float ptr [EBP + 0xfffffef6]   ; 00556ccc
    FLD float ptr [ESI + 0x4]           ; 00556cd2
    FSUB float ptr [EAX + 0x4]          ; 00556cd5
    LEA EDX,[EBP + -0x32]               ; 00556cd8
    FSTP float ptr [EBP + 0xfffffefa]   ; 00556cdb
    FLD float ptr [ESI + 0x8]           ; 00556ce1
    FSUB float ptr [EAX + 0x8]          ; 00556ce4
    LEA EAX,[EBP + 0xfffffef6]          ; 00556ce7
    FSTP float ptr [EBP + 0xfffffefe]   ; 00556ced
    CMP EDX,EAX                         ; 00556cf3
    JZ 0x00556d12                       ; 00556cf5
        ;   XREF to: 00556d12 (CONDITIONAL_JUMP)  ; LAB_00556d12
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 00556cf7
    MOV dword ptr [EBP + -0x32],EAX     ; 00556cfd
    MOV EAX,dword ptr [EBP + 0xfffffefa] ; 00556d00
    MOV dword ptr [EBP + -0x2e],EAX     ; 00556d06
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 00556d09
    MOV dword ptr [EBP + -0x2a],EAX     ; 00556d0f
    FLD float ptr [EBP + -0x2e]         ; 00556d12
        ;   Label: LAB_00556d12
    FMUL ST0                            ; 00556d15
    FLD float ptr [EBP + -0x32]         ; 00556d17
    FMUL ST0                            ; 00556d1a
    FADDP                               ; 00556d1c
    FLD float ptr [EBP + -0x2a]         ; 00556d1e
    FMUL ST0                            ; 00556d21
    FADDP                               ; 00556d23
    FSQRT                               ; 00556d25
    MOV EDX,0x41a00000                  ; 00556d27
    MOV ECX,dword ptr [EBX + 0xbd24]    ; 00556d2c
    MOV dword ptr [EBP + 0x6e],EDX      ; 00556d32
    FSTP float ptr [EBP + 0x62]         ; 00556d35
    CMP ECX,0x1                         ; 00556d38
    JNZ 0x00556d44                      ; 00556d3b
        ;   XREF to: 00556d44 (CONDITIONAL_JUMP)  ; LAB_00556d44
    MOV dword ptr [EBP + 0x6e],0x41200000 ; 00556d3d
    CMP dword ptr [EBX + 0xbd24],0x2    ; 00556d44
        ;   Label: LAB_00556d44
    JNZ 0x00556d54                      ; 00556d4b
        ;   XREF to: 00556d54 (CONDITIONAL_JUMP)  ; LAB_00556d54
    MOV dword ptr [EBP + 0x6e],0x41200000 ; 00556d4d
    FLD float ptr [EBP + 0x62]          ; 00556d54
        ;   Label: LAB_00556d54
    LEA ESI,[EBX + 0x150]               ; 00556d57
    FCOMP float ptr [EBP + 0x6e]        ; 00556d5d
    FNSTSW AX                           ; 00556d60
    SAHF                                ; 00556d62
    JA 0x00556d99                       ; 00556d63
        ;   XREF to: 00556d99 (CONDITIONAL_JUMP)  ; LAB_00556d99
    FLD float ptr [0x005a42ec]          ; 00556d65 | FLOAT_005a42ec
    FMUL float ptr [0x00597df1]         ; 00556d6b | FLOAT_00597df1
    FCOMP float ptr [EBP + 0x62]        ; 00556d71
    FNSTSW AX                           ; 00556d74
    SAHF                                ; 00556d76
    JBE 0x00556b12                      ; 00556d77
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    CMP dword ptr [EBP + 0x72],0xf      ; 00556d7d
    JNZ 0x00556b12                      ; 00556d81
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    PUSH 0x1                            ; 00556d87
    PUSH 0x0                            ; 00556d89
    PUSH ESI                            ; 00556d8b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556d8c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556d91
    JMP 0x00556b12                      ; 00556d94
        ;   XREF to: 00556b12 (UNCONDITIONAL_JUMP)  ; LAB_00556b12
    LEA EAX,[EBP + -0x32]               ; 00556d99
        ;   Label: LAB_00556d99
    PUSH EAX                            ; 00556d9c
    LEA EAX,[EBP + 0xffffff1a]          ; 00556d9d
    PUSH EAX                            ; 00556da3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00556da4
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EBP + 0xffffff1e]    ; 00556da9
    ADD ESP,0x8                         ; 00556daf
    FSUB float ptr [EBX + 0x34]         ; 00556db2
    SUB ESP,0x4                         ; 00556db5
    FSTP float ptr [ESP]                ; 00556db8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00556dbb
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [EBP + 0x76],EAX      ; 00556dc0
    FLD float ptr [EBP + 0x76]          ; 00556dc3
    FABS                                ; 00556dc6
    ADD ESP,0x4                         ; 00556dc8
    FCOMP double ptr [0x00597df9]       ; 00556dcb | DOUBLE_00597df9
    FNSTSW AX                           ; 00556dd1
    SAHF                                ; 00556dd3
    JNC 0x00556b12                      ; 00556dd4
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    PUSH 0x1                            ; 00556dda
    PUSH 0x8                            ; 00556ddc
    PUSH ESI                            ; 00556dde
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556ddf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556de4
    PUSH 0x3f59999a                     ; 00556de7
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 00556dec
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_randomChance_FUN_0040dea0()
    ADD ESP,0x4                         ; 00556df1
    TEST EAX,EAX                        ; 00556df4
    JNZ 0x00556e2e                      ; 00556df6
        ;   XREF to: 00556e2e (CONDITIONAL_JUMP)  ; LAB_00556e2e
    XOR ESI,ESI                         ; 00556df8
        ;   Label: LAB_00556df8
    XOR EDI,EDI                         ; 00556dfa
    MOV EAX,[0x005be368]                ; 00556dfc | DAT_005be368
        ;   Label: LAB_00556dfc
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 00556e01 | DAT_01fa7e78
    JGE 0x00556b12                      ; 00556e07
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    MOV ECX,dword ptr [0x02de07c4]      ; 00556e0d | DAT_02de07c4
    PUSH ECX                            ; 00556e13
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 00556e14
    PUSH EDX                            ; 00556e1b
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00556e1c
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 00556e21
    TEST EAX,EAX                        ; 00556e24
    JNZ 0x00556e39                      ; 00556e26
        ;   XREF to: 00556e39 (CONDITIONAL_JUMP)  ; LAB_00556e39
    INC EDI                             ; 00556e28
        ;   Label: LAB_00556e28
    ADD ESI,0x4                         ; 00556e29
    JMP 0x00556dfc                      ; 00556e2c
        ;   XREF to: 00556dfc (UNCONDITIONAL_JUMP)  ; LAB_00556dfc
    PUSH EBX                            ; 00556e2e
        ;   Label: LAB_00556e2e
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060 ; 00556e2f
        ;   XREF to: 00557060 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_playHowl_FUN_00557060()
    ADD ESP,0x4                         ; 00556e34
    JMP 0x00556df8                      ; 00556e37
        ;   XREF to: 00556df8 (UNCONDITIONAL_JUMP)  ; LAB_00556df8
    CMP EAX,EBX                         ; 00556e39
        ;   Label: LAB_00556e39
    JZ 0x00556e28                       ; 00556e3b
        ;   XREF to: 00556e28 (CONDITIONAL_JUMP)  ; LAB_00556e28
    ADD EAX,0x150                       ; 00556e3d
    PUSH EAX                            ; 00556e42
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00556e43
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00556e48
    ADD ESP,0x4                         ; 00556e4b
    CMP EAX,0x8                         ; 00556e4e
    JNZ 0x00556e28                      ; 00556e51
        ;   XREF to: 00556e28 (CONDITIONAL_JUMP)  ; LAB_00556e28
    PUSH 0x2                            ; 00556e53
    PUSH 0x0                            ; 00556e55
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00556e57
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 00556e5c
    MOV EDX,EAX                         ; 00556e5f
    CMP EAX,0x1                         ; 00556e61
    JNZ 0x00556e72                      ; 00556e64
        ;   XREF to: 00556e72 (CONDITIONAL_JUMP)  ; LAB_00556e72
    FLD float ptr [EBX + 0x34]          ; 00556e66
    FADD float ptr [0x00597e09]         ; 00556e69 | FLOAT_00597e09
    FSTP float ptr [EBX + 0x34]         ; 00556e6f
    CMP EDX,0x2                         ; 00556e72
        ;   Label: LAB_00556e72
    JNZ 0x00556b12                      ; 00556e75
        ;   XREF to: 00556b12 (CONDITIONAL_JUMP)  ; LAB_00556b12
    FLD float ptr [EBX + 0x34]          ; 00556e7b
    FADD float ptr [0x00597e0d]         ; 00556e7e | FLOAT_00597e0d
    FSTP float ptr [EBX + 0x34]         ; 00556e84
    JMP 0x00556b12                      ; 00556e87
        ;   XREF to: 00556b12 (UNCONDITIONAL_JUMP)  ; LAB_00556b12
    LEA EDI,[EBX + 0x150]               ; 00556e8c
        ;   Label: LAB_00556e8c
    JBE 0x00556584                      ; 00556e92
        ;   XREF to: 00556584 (CONDITIONAL_JUMP)  ; LAB_00556584
    CMP EDX,0xe                         ; 00556e98
    JNC 0x00556eba                      ; 00556e9b
        ;   XREF to: 00556eba (CONDITIONAL_JUMP)  ; LAB_00556eba
    CMP EDX,0x8                         ; 00556e9d
    JC 0x00555e90                       ; 00556ea0
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    JBE 0x0055633c                      ; 00556ea6
        ;   XREF to: 0055633c (CONDITIONAL_JUMP)  ; LAB_0055633c
    CMP EDX,0xd                         ; 00556eac
    JZ 0x00556647                       ; 00556eaf
        ;   XREF to: 00556647 (CONDITIONAL_JUMP)  ; LAB_00556647
    JMP 0x00555e90                      ; 00556eb5
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    JBE 0x00556301                      ; 00556eba
        ;   XREF to: 00556301 (CONDITIONAL_JUMP)  ; LAB_00556301
        ;   Label: LAB_00556eba
    CMP EDX,0xf                         ; 00556ec0
    JBE 0x005567cd                      ; 00556ec3
        ;   XREF to: 005567cd (CONDITIONAL_JUMP)  ; LAB_005567cd
    CMP EDX,0x13                        ; 00556ec9
    JZ 0x00555e78                       ; 00556ecc
        ;   XREF to: 00555e78 (CONDITIONAL_JUMP)  ; LAB_00555e78
    JMP 0x00555e90                      ; 00556ed2
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    JBE 0x005567cd                      ; 00556ed7
        ;   XREF to: 005567cd (CONDITIONAL_JUMP)  ; LAB_005567cd
        ;   Label: LAB_00556ed7
    CMP EDX,0x2                         ; 00556edd
    JBE 0x0055637f                      ; 00556ee0
        ;   XREF to: 0055637f (CONDITIONAL_JUMP)  ; LAB_0055637f
    MOV ECX,dword ptr [EAX + 0x1cae0d8] ; 00556ee6
    CMP ECX,dword ptr [EBX + 0xbca4]    ; 00556eec
    JZ 0x00556f7e                       ; 00556ef2
        ;   XREF to: 00556f7e (CONDITIONAL_JUMP)  ; LAB_00556f7e
    LEA EAX,[EBP + 0xfffffd6a]          ; 00556ef8
    PUSH EAX                            ; 00556efe
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00556eff
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0()
    ADD ESP,0x4                         ; 00556f04
    PUSH 0x41700000                     ; 00556f07
    PUSH 0x40e00000                     ; 00556f0c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00556f11
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00556f16
    MOV dword ptr [EBP + 0xfffffd9e],EBX ; 00556f19
    MOV dword ptr [EBP + 0xfffffda2],EBX ; 00556f1f
    ADD ESP,0x8                         ; 00556f25
    FLD float ptr [EBP + 0x76]          ; 00556f28
    LEA EAX,[EBP + 0xfffffd6a]          ; 00556f2b
    FSTP float ptr [EBP + 0xfffffd6e]   ; 00556f31
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00556f37
    PUSH EAX                            ; 00556f3d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00556f3e
    SUB EAX,EDX                         ; 00556f45
    SHL EAX,0x4                         ; 00556f47
    ADD EAX,ESI                         ; 00556f4a
    PUSH 0x3ecccccd                     ; 00556f4c
    PUSH EAX                            ; 00556f51
    PUSH 0x2dd1184                      ; 00556f52 | DAT_02dd1184
    LEA EAX,[EBP + 0x16]                ; 00556f57
    PUSH EAX                            ; 00556f5a
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00556f5b
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_transformVector3x4_FUN_0055a8b0()
    ADD ESP,0xc                         ; 00556f60
    PUSH EAX                            ; 00556f63
    LEA EAX,[EBP + 0xffffff3e]          ; 00556f64
    PUSH EAX                            ; 00556f6a
    PUSH EBX                            ; 00556f6b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00556f6c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00556f71
    PUSH EAX                            ; 00556f74
    PUSH EBX                            ; 00556f75
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00556f76
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0()
    ADD ESP,0x10                        ; 00556f7b
    MOV ESI,dword ptr [EBX + 0xbca4]    ; 00556f7e
        ;   Label: LAB_00556f7e
    TEST ESI,ESI                        ; 00556f84
    JZ 0x00555e90                       ; 00556f86
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH ESI                            ; 00556f8c
    MOV EDX,dword ptr [ESI + 0x14c]     ; 00556f8d
    CALL dword ptr [EDX + 0x104]        ; 00556f93
    ADD ESP,0x4                         ; 00556f99
    TEST EAX,EAX                        ; 00556f9c
    JZ 0x00555e90                       ; 00556f9e
        ;   XREF to: 00555e90 (CONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x1                            ; 00556fa4
    PUSH 0x7                            ; 00556fa6
    LEA EAX,[EBX + 0x150]               ; 00556fa8
    PUSH EAX                            ; 00556fae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00556faf
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00556fb4
    JMP 0x00555e90                      ; 00556fb7
        ;   XREF to: 00555e90 (UNCONDITIONAL_JUMP)  ; LAB_00555e90
    PUSH 0x597dbb                       ; 00556fbc | = "werewolf-eat.wav"
        ;   Label: LAB_00556fbc
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00556fc1
    PUSH EBX                            ; 00556fc7
    CALL dword ptr [EAX + 0x24]         ; 00556fc8
    ADD ESP,0x8                         ; 00556fcb
    MOV dword ptr [EBX + 0xbd4c],EAX    ; 00556fce
    JMP 0x00555ebe                      ; 00556fd4
        ;   XREF to: 00555ebe (UNCONDITIONAL_JUMP)  ; LAB_00555ebe
    MOV EDI,dword ptr [EBX + 0xbd4c]    ; 00556fd9
        ;   Label: LAB_00556fd9
    PUSH EDI                            ; 00556fdf
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00556fe0
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00556fe5
    JMP 0x00555ebe                      ; 00556fe8
        ;   XREF to: 00555ebe (UNCONDITIONAL_JUMP)  ; LAB_00555ebe
    CMP EDI,0xf                         ; 00556fed
        ;   Label: LAB_00556fed
    JZ 0x00555ee3                       ; 00556ff0
        ;   XREF to: 00555ee3 (CONDITIONAL_JUMP)  ; LAB_00555ee3
    FLD float ptr [EBP + 0x6a]          ; 00556ff6
    FMUL double ptr [0x00597e11]        ; 00556ff9 | DOUBLE_00597e11
    JMP 0x00555eec                      ; 00556fff
        ;   XREF to: 00555eec (UNCONDITIONAL_JUMP)  ; LAB_00555eec
    CMP dword ptr [EBX + 0xdc],0x0      ; 00557004
        ;   Label: LAB_00557004
    JNZ 0x00555f48                      ; 0055700b
        ;   XREF to: 00555f48 (CONDITIONAL_JUMP)  ; LAB_00555f48
    JMP 0x00556040                      ; 00557011
        ;   XREF to: 00556040 (UNCONDITIONAL_JUMP)  ; LAB_00556040

