; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bride_cpp_FUN_0041fe40(CEnemy *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1f0]:4  local_1f0
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined        Stack[-0x1b8]:1  local_1b8
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined        Stack[-0x17c]:1  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
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
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   TerminatedCString s_ub_attack_wav_00579b06
;   TerminatedCString s_ub_howl_wav_00579b15
;   TerminatedCString s_ub_attack_wav_00579b22
;   double DOUBLE_00579b35 = 8
;   double DOUBLE_00579b3d = 2
;   double DOUBLE_00579b45 = 5
;   double DOUBLE_00579b4d = 6
;   double DOUBLE_00579b55 = 3
;   double DOUBLE_00579b5d = 4
;   double DOUBLE_00579b65 = 7
;   double DOUBLE_00579b6d = 1.57079632675000
;   double DOUBLE_00579b75 = 2.5
;   double DOUBLE_00579b7d = 32
;   float FLOAT_0059ad0c = 2.5
;   int INT_005b96c4 = 0x1c78c7c
;   ... and 8 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_randomChance_FUN_0040dea0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
;   core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fe40
        ;   Label: core_bride.cpp_FUN_0041fe40
    PUSH ESI                            ; 0041fe41
    PUSH EDI                            ; 0041fe42
    PUSH EBP                            ; 0041fe43
    MOV EBP,ESP                         ; 0041fe44
    SUB ESP,0x1e4                       ; 0041fe46
    SUB EBP,0x7a                        ; 0041fe4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041fe4f
    PUSH dword ptr [EBP + 0x92]         ; 0041fe55
    PUSH EBX                            ; 0041fe5b
    CALL core_charactr.cpp_FUN_004259f0 ; 0041fe5c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041fe61
    TEST EAX,EAX                        ; 0041fe64
    JZ 0x00420962                       ; 0041fe66
        ;   XREF to: 00420962 (CONDITIONAL_JUMP)  ; LAB_00420962
    FLD float ptr [EBX + 0xbd48]        ; 0041fe6c
    FLDZ                                ; 0041fe72
    FCOMPP                              ; 0041fe74
    FNSTSW AX                           ; 0041fe76
    SAHF                                ; 0041fe78
    JA 0x0041fe8d                       ; 0041fe79
        ;   XREF to: 0041fe8d (CONDITIONAL_JUMP)  ; LAB_0041fe8d
    FLD float ptr [EBX + 0xbd48]        ; 0041fe7b
    FSUB float ptr [EBP + 0x92]         ; 0041fe81
    FSTP float ptr [EBX + 0xbd48]       ; 0041fe87
    LEA ESI,[EBX + 0x150]               ; 0041fe8d
        ;   Label: LAB_0041fe8d
    MOV EDX,0xbf800000                  ; 0041fe93
    PUSH ESI                            ; 0041fe98
    MOV dword ptr [EBP + 0x72],EDX      ; 0041fe99
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 0041fe9c
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041fea1
    ADD ESP,0x4                         ; 0041fea4
    CMP EAX,0x5                         ; 0041fea7
    JNC 0x004206c3                      ; 0041feaa
        ;   XREF to: 004206c3 (CONDITIONAL_JUMP)  ; LAB_004206c3
    TEST EAX,EAX                        ; 0041feb0
    JBE 0x0042004e                      ; 0041feb2
        ;   XREF to: 0042004e (CONDITIONAL_JUMP)  ; LAB_0042004e
    CMP EAX,0x1                         ; 0041feb8
    JNZ 0x0041ff85                      ; 0041febb
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBX + 0xbd48]        ; 0041fec1
    FLDZ                                ; 0041fec7
    FCOMPP                              ; 0041fec9
    FNSTSW AX                           ; 0041fecb
    SAHF                                ; 0041fecd
    JC 0x0041ff12                       ; 0041fece
        ;   XREF to: 0041ff12 (CONDITIONAL_JUMP)  ; LAB_0041ff12
    PUSH 0x41a00000                     ; 0041fed0
    PUSH 0x41200000                     ; 0041fed5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041feda
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    ADD ESP,0x8                         ; 0041fedf
    PUSH 0x1                            ; 0041fee2
    MOV dword ptr [EBP + 0x76],EAX      ; 0041fee4
    PUSH 0x3                            ; 0041fee7
    FLD float ptr [EBP + 0x76]          ; 0041fee9
    PUSH ESI                            ; 0041feec
    FSTP float ptr [EBX + 0xbd48]       ; 0041feed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041fef3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041fef8
    MOV ESI,dword ptr [EBX + 0xbd4c]    ; 0041fefb
    PUSH ESI                            ; 0041ff01
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 0041ff02
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0041ff07
    TEST EAX,EAX                        ; 0041ff0a
    JZ 0x004200f6                       ; 0041ff0c
        ;   XREF to: 004200f6 (CONDITIONAL_JUMP)  ; LAB_004200f6
    FLD float ptr [EBX + 0xbc8c]        ; 0041ff12
        ;   Label: LAB_0041ff12
    FMUL double ptr [0x00579b55]        ; 0041ff18 | DOUBLE_00579b55
    FLD float ptr [EBX + 0xbc8c]        ; 0041ff1e
    FMUL double ptr [0x00579b6d]        ; 0041ff24 | DOUBLE_00579b6d
    FLD float ptr [EBP + 0x92]          ; 0041ff2a
    FXCH ST2                            ; 0041ff30
    FMUL ST2                            ; 0041ff32
    FXCH                                ; 0041ff34
    FMULP ST2                           ; 0041ff36
    PUSH dword ptr [EBP + 0x92]         ; 0041ff38
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041ff3e
    PUSH EBX                            ; 0041ff44
    LEA ESI,[EBX + 0x150]               ; 0041ff45
    FSTP float ptr [EBX + 0x242c]       ; 0041ff4b
    FSTP float ptr [EBX + 0x2430]       ; 0041ff51
    CALL dword ptr [EAX + 0x13c]        ; 0041ff57
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0041ff5d
    ADD ESP,0x8                         ; 0041ff63
    TEST EAX,EAX                        ; 0041ff66
    JNZ 0x0042013b                      ; 0041ff68
        ;   XREF to: 0042013b (CONDITIONAL_JUMP)  ; LAB_0042013b
    PUSH dword ptr [EBP + 0x92]         ; 0041ff6e
    PUSH EBX                            ; 0041ff74
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 0041ff75
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041ff7a
    TEST EAX,EAX                        ; 0041ff7d
    JZ 0x0042012a                       ; 0041ff7f
        ;   XREF to: 0042012a (CONDITIONAL_JUMP)  ; LAB_0042012a
    CMP dword ptr [EBX + 0xbca4],0x0    ; 0041ff85
        ;   Label: LAB_0041ff85
    JNZ 0x004206e0                      ; 0041ff8c
        ;   XREF to: 004206e0 (CONDITIONAL_JUMP)  ; LAB_004206e0
    LEA EAX,[EBX + 0x23a4]              ; 0041ff92
        ;   Label: LAB_0041ff92
    MOV dword ptr [EAX + 0x8],0x0       ; 0041ff98
    FLD float ptr [EBP + 0x92]          ; 0041ff9f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ffa5
    MOV dword ptr [EAX + 0x4],EDX       ; 0041ffa8
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ffab
    MOV dword ptr [EAX],EDX             ; 0041ffae
    FMUL float ptr [EBX + 0xbc8c]       ; 0041ffb0
    LEA ESI,[EBX + 0x150]               ; 0041ffb6
    FSTP float ptr [EBP + 0x66]         ; 0041ffbc
    FLD float ptr [EBP + 0x66]          ; 0041ffbf
        ;   Label: LAB_0041ffbf
    FLDZ                                ; 0041ffc2
    FCOMPP                              ; 0041ffc4
    FNSTSW AX                           ; 0041ffc6
    SAHF                                ; 0041ffc8
    JNC 0x00420793                      ; 0041ffc9
        ;   XREF to: 00420793 (CONDITIONAL_JUMP)  ; LAB_00420793
    LEA EAX,[EBP + 0x66]                ; 0041ffcf
    PUSH EAX                            ; 0041ffd2
    PUSH ESI                            ; 0041ffd3
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0041ffd4
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0041ffd9
    CMP EAX,0x11                        ; 0041ffdc
    JZ 0x0041ffbf                       ; 0041ffdf
        ;   XREF to: 0041ffbf (CONDITIONAL_JUMP)  ; LAB_0041ffbf
    PUSH EAX                            ; 0041ffe1
    PUSH EBX                            ; 0041ffe2
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 0041ffe3
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0041ffe8
    JMP 0x0041ffbf                      ; 0041ffeb
        ;   XREF to: 0041ffbf (UNCONDITIONAL_JUMP)  ; LAB_0041ffbf
    MOV ECX,dword ptr [EBX + 0xbc90]    ; 0041ffed
        ;   Label: LAB_0041ffed
    TEST ECX,ECX                        ; 0041fff3
    JNZ 0x0041ff85                      ; 0041fff5
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH ECX                            ; 0041fff7
    LEA EAX,[EBP + -0x3e]               ; 0041fff8
    PUSH EAX                            ; 0041fffb
    PUSH ESI                            ; 0041fffc
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 0041fffd
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00420002
    PUSH EAX                            ; 00420005
    LEA EAX,[EBP + -0x4a]               ; 00420006
    PUSH EAX                            ; 00420009
    PUSH EBX                            ; 0042000a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042000b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00420010
    PUSH 0x0                            ; 00420013
    LEA EAX,[EBP + -0x4a]               ; 00420015
    PUSH EAX                            ; 00420018
    MOV ESI,dword ptr [0x005b96c4]      ; 00420019 | INT_005b96c4
    PUSH ESI                            ; 0042001f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 00420020
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00420025
    PUSH 0x41c80000                     ; 00420028
    PUSH 0x32                           ; 0042002d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042002f
    PUSH EBX                            ; 00420035
    CALL dword ptr [EAX + 0xa0]         ; 00420036
    ADD ESP,0xc                         ; 0042003c
    MOV dword ptr [EBX + 0xbc90],0x1    ; 0042003f
    JMP 0x0041ff85                      ; 00420049
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH dword ptr [EBP + 0x92]         ; 0042004e
        ;   Label: LAB_0042004e
    PUSH EBX                            ; 00420054
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00420055
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0042005a
    TEST EAX,EAX                        ; 0042005d
    JZ 0x00420079                       ; 0042005f
        ;   XREF to: 00420079 (CONDITIONAL_JUMP)  ; LAB_00420079
    PUSH 0x1                            ; 00420061
    PUSH 0x1                            ; 00420063
    LEA EAX,[EBX + 0x150]               ; 00420065
    PUSH EAX                            ; 0042006b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0042006c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420071
    JMP 0x0041ff85                      ; 00420074
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH dword ptr [EBP + 0x92]         ; 00420079
        ;   Label: LAB_00420079
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042007f
    PUSH EBX                            ; 00420085
    CALL dword ptr [EAX + 0x13c]        ; 00420086
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 0042008c
    ADD ESP,0x8                         ; 00420092
    TEST EAX,EAX                        ; 00420095
    JZ 0x0041ff85                       ; 00420097
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x1                            ; 0042009d
    PUSH 0x1                            ; 0042009f
    PUSH ESI                            ; 004200a1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004200a2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004200a7
    MOV EDX,dword ptr [EBX + 0xbd4c]    ; 004200aa
    PUSH EDX                            ; 004200b0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004200b1
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004200b6
    TEST EAX,EAX                        ; 004200b9
    JNZ 0x0041ff85                      ; 004200bb
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV ECX,dword ptr [EBX + 0xbd50]    ; 004200c1
    PUSH ECX                            ; 004200c7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004200c8
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004200cd
    TEST EAX,EAX                        ; 004200d0
    JNZ 0x0041ff85                      ; 004200d2
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EDX,0x579b06                    ; 004200d8 | = "ub-attack?.wav"
    PUSH EDX                            ; 004200dd | = "ub-attack?.wav"
    MOV ESI,dword ptr [EBX + 0x14c]     ; 004200de
    PUSH EBX                            ; 004200e4
    CALL dword ptr [ESI + 0x24]         ; 004200e5
    ADD ESP,0x8                         ; 004200e8
    MOV dword ptr [EBX + 0xbd50],EAX    ; 004200eb
    JMP 0x0041ff85                      ; 004200f1
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EDI,dword ptr [EBX + 0xbd50]    ; 004200f6
        ;   Label: LAB_004200f6
    PUSH EDI                            ; 004200fc
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004200fd
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00420102
    TEST EAX,EAX                        ; 00420105
    JNZ 0x0041ff12                      ; 00420107
        ;   XREF to: 0041ff12 (CONDITIONAL_JUMP)  ; LAB_0041ff12
    PUSH 0x579b15                       ; 0042010d | = "ub-howl?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00420112
    PUSH EBX                            ; 00420118
    CALL dword ptr [EAX + 0x24]         ; 00420119
    ADD ESP,0x8                         ; 0042011c
    MOV dword ptr [EBX + 0xbd50],EAX    ; 0042011f
    JMP 0x0041ff12                      ; 00420125
        ;   XREF to: 0041ff12 (UNCONDITIONAL_JUMP)  ; LAB_0041ff12
    PUSH 0x1                            ; 0042012a
        ;   Label: LAB_0042012a
    PUSH EAX                            ; 0042012c
    PUSH ESI                            ; 0042012d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0042012e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420133
    JMP 0x0041ff85                      ; 00420136
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x3e32b8c2                     ; 0042013b
        ;   Label: LAB_0042013b
    PUSH 0x3f800000                     ; 00420140
    MOV EAX,[0x0059ad0c]                ; 00420145 | FLOAT_0059ad0c
    XOR EDX,EDX                         ; 0042014a
    MOV dword ptr [EBP + -0x7a],EDX     ; 0042014c
    MOV dword ptr [EBP + -0x72],EAX     ; 0042014f
    LEA EAX,[EBP + -0x7a]               ; 00420152
    MOV dword ptr [EBP + -0x76],EDX     ; 00420155
    PUSH EAX                            ; 00420158
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00420159
    PUSH EAX                            ; 0042015f
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00420160
    CALL dword ptr [EDX + 0xbc]         ; 00420166
    ADD ESP,0x4                         ; 0042016c
    PUSH EAX                            ; 0042016f
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00420170
    ADD EAX,0x20                        ; 00420176
    PUSH EAX                            ; 00420179
    PUSH EBX                            ; 0042017a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0042017b
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00420180
    TEST EAX,EAX                        ; 00420183
    JL 0x0042022b                       ; 00420185
        ;   XREF to: 0042022b (CONDITIONAL_JUMP)  ; LAB_0042022b
    JLE 0x0041ff85                      ; 0042018b
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBX + 0xbca0]        ; 00420191
    FLDZ                                ; 00420197
    FCOMPP                              ; 00420199
    FNSTSW AX                           ; 0042019b
    SAHF                                ; 0042019d
    JC 0x0041ff85                       ; 0042019e
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004201a4
    PUSH EAX                            ; 004201aa
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004201ab
    CALL dword ptr [EDX + 0xec]         ; 004201b1
    ADD ESP,0x4                         ; 004201b7
    TEST EAX,EAX                        ; 004201ba
    JNZ 0x0041ff85                      ; 004201bc
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x3f000000                     ; 004201c2
    CALL core_actor.cpp_randomChance_FUN_0040dea0 ; 004201c7
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040dea0(float probability_threshold)
    ADD ESP,0x4                         ; 004201cc
    TEST EAX,EAX                        ; 004201cf
    JZ 0x0042023d                       ; 004201d1
        ;   XREF to: 0042023d (CONDITIONAL_JUMP)  ; LAB_0042023d
    PUSH 0x1                            ; 004201d3
    PUSH 0x5                            ; 004201d5
    PUSH ESI                            ; 004201d7
        ;   Label: LAB_004201d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004201d8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004201dd
    MOV ESI,dword ptr [EBX + 0xbd4c]    ; 004201e0
    PUSH ESI                            ; 004201e6
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004201e7
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 004201ec
    TEST EAX,EAX                        ; 004201ef
    JNZ 0x0041ff85                      ; 004201f1
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EDI,dword ptr [EBX + 0xbd50]    ; 004201f7
    PUSH EDI                            ; 004201fd
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004201fe
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00420203
    TEST EAX,EAX                        ; 00420206
    JNZ 0x0041ff85                      ; 00420208
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x579b22                       ; 0042020e | = "ub-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00420213
    PUSH EBX                            ; 00420219
    CALL dword ptr [EAX + 0x24]         ; 0042021a
    ADD ESP,0x8                         ; 0042021d
    MOV dword ptr [EBX + 0xbd50],EAX    ; 00420220
    JMP 0x0041ff85                      ; 00420226
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x1                            ; 0042022b
        ;   Label: LAB_0042022b
    PUSH 0x0                            ; 0042022d
    PUSH ESI                            ; 0042022f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420230
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420235
    JMP 0x0041ff85                      ; 00420238
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x1                            ; 0042023d
        ;   Label: LAB_0042023d
    PUSH 0x6                            ; 0042023f
    JMP 0x004201d7                      ; 00420241
        ;   XREF to: 004201d7 (UNCONDITIONAL_JUMP)  ; LAB_004201d7
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00420243
        ;   Label: LAB_00420243
    TEST EDI,EDI                        ; 00420249
    JNZ 0x0042025f                      ; 0042024b
        ;   XREF to: 0042025f (CONDITIONAL_JUMP)  ; LAB_0042025f
    PUSH 0x1                            ; 0042024d
    PUSH 0x1                            ; 0042024f
    PUSH ESI                            ; 00420251
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420252
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420257
    JMP 0x0041ff85                      ; 0042025a
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH EDI                            ; 0042025f
        ;   Label: LAB_0042025f
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00420260
    CALL dword ptr [EDX + 0xec]         ; 00420266
    ADD ESP,0x4                         ; 0042026c
    TEST EAX,EAX                        ; 0042026f
    JZ 0x00420285                       ; 00420271
        ;   XREF to: 00420285 (CONDITIONAL_JUMP)  ; LAB_00420285
    PUSH 0x1                            ; 00420273
    PUSH 0x1                            ; 00420275
    PUSH ESI                            ; 00420277
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420278
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042027d
    JMP 0x0041ff85                      ; 00420280
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x3f000000                     ; 00420285
        ;   Label: LAB_00420285
    PUSH 0x3e4ccccd                     ; 0042028a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0042028f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00420294
    ADD ESP,0x8                         ; 00420297
    FLD float ptr [EBP + 0x76]          ; 0042029a
    PUSH ESI                            ; 0042029d
    FSTP float ptr [EBX + 0xbca0]       ; 0042029e
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 004202a4
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004202a9
    ADD ESP,0x4                         ; 004202ac
    MOV EAX,dword ptr [EBP + 0x76]      ; 004202af
    MOV dword ptr [EBP + 0x6a],EAX      ; 004202b2
    FLD float ptr [EBP + 0x6a]          ; 004202b5
    FST double ptr [EBP + 0x3e]         ; 004202b8
    FCOMP double ptr [0x00579b55]       ; 004202bb | DOUBLE_00579b55
    FNSTSW AX                           ; 004202c1
    SAHF                                ; 004202c3
    JA 0x0041ff85                       ; 004202c4
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EAX,[0x0059ad0c]                ; 004202ca | FLOAT_0059ad0c
    FLD1                                ; 004202cf
    MOV dword ptr [EBP + 0x72],EAX      ; 004202d1
    FCOMP double ptr [EBP + 0x3e]       ; 004202d4
    FNSTSW AX                           ; 004202d7
    SAHF                                ; 004202d9
    JA 0x00420394                       ; 004202da
        ;   XREF to: 00420394 (CONDITIONAL_JUMP)  ; LAB_00420394
    FLD double ptr [EBP + 0x3e]         ; 004202e0
    FCOMP double ptr [0x00579b3d]       ; 004202e3 | DOUBLE_00579b3d
    FNSTSW AX                           ; 004202e9
    SAHF                                ; 004202eb
    JA 0x00420394                       ; 004202ec
        ;   XREF to: 00420394 (CONDITIONAL_JUMP)  ; LAB_00420394
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 004202f2
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004202f8
    JZ 0x0041ff85                       ; 00420300
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    LEA EAX,[EBP + 0xfffffe96]          ; 00420306
    PUSH EAX                            ; 0042030c
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 0042030d
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00420312
    PUSH 0x41700000                     ; 00420315
    PUSH 0x40e00000                     ; 0042031a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0042031f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV ESI,dword ptr [0x00764b34]      ; 00420324 | DAT_00764b34
    MOV dword ptr [EBP + 0x76],EAX      ; 0042032a
    ADD ESP,0x8                         ; 0042032d
    MOV dword ptr [EBP + 0xfffffeca],EBX ; 00420330
    MOV dword ptr [EBP + 0xfffffece],EBX ; 00420336
    LEA EDX,[ESI*0x4 + 0x0]             ; 0042033c
    LEA EAX,[EBP + 0xfffffe96]          ; 00420343
    SUB EDX,ESI                         ; 00420349
    PUSH EAX                            ; 0042034b
    SHL EDX,0x4                         ; 0042034c
    LEA EAX,[EBX + 0xfd0]               ; 0042034f
    ADD EAX,EDX                         ; 00420355
    PUSH 0x3ecccccd                     ; 00420357
    PUSH EAX                            ; 0042035c
    PUSH 0x764ae4                       ; 0042035d | CVector3f_00764ae4
    LEA EAX,[EBP + -0x56]               ; 00420362
    FLD float ptr [EBP + 0x76]          ; 00420365
    PUSH EAX                            ; 00420368
    FSTP float ptr [EBP + 0xfffffe9a]   ; 00420369
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 0042036f
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00420374
    PUSH EAX                            ; 00420377
    LEA EAX,[EBP + -0x6e]               ; 00420378
    PUSH EAX                            ; 0042037b
    PUSH EBX                            ; 0042037c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0042037d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00420382
    PUSH EAX                            ; 00420385
    PUSH EBX                            ; 00420386
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00420387
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0042038c
    JMP 0x0041ff85                      ; 0042038f
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBP + 0x6a]          ; 00420394
        ;   Label: LAB_00420394
    FST double ptr [EBP + 0x46]         ; 00420397
    FCOMP double ptr [0x00579b55]       ; 0042039a | DOUBLE_00579b55
    FNSTSW AX                           ; 004203a0
    SAHF                                ; 004203a2
    JC 0x0041ff85                       ; 004203a3
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD double ptr [EBP + 0x46]         ; 004203a9
    FCOMP double ptr [0x00579b5d]       ; 004203ac | DOUBLE_00579b5d
    FNSTSW AX                           ; 004203b2
    SAHF                                ; 004203b4
    JA 0x0041ff85                       ; 004203b5
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004203bb
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004203c1
    JZ 0x0041ff85                       ; 004203c9
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    LEA EAX,[EBP + 0xffffff4a]          ; 004203cf
    PUSH EAX                            ; 004203d5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 004203d6
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004203db
    PUSH 0x41700000                     ; 004203de
    PUSH 0x40e00000                     ; 004203e3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004203e8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV ESI,dword ptr [0x00764b30]      ; 004203ed | DAT_00764b30
    MOV dword ptr [EBP + 0x76],EAX      ; 004203f3
    ADD ESP,0x8                         ; 004203f6
    LEA EAX,[EBP + 0xffffff4a]          ; 004203f9
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 004203ff
    PUSH EAX                            ; 00420405
    LEA EAX,[ESI*0x4 + 0x0]             ; 00420406
    MOV dword ptr [EBP + -0x7e],EBX     ; 0042040d
    SUB EAX,ESI                         ; 00420410
    LEA EDX,[EBX + 0xfd0]               ; 00420412
    SHL EAX,0x4                         ; 00420418
    ADD EAX,EDX                         ; 0042041b
    PUSH 0x3ecccccd                     ; 0042041d
    PUSH EAX                            ; 00420422
    PUSH 0x764ae4                       ; 00420423 | CVector3f_00764ae4
    LEA EAX,[EBP + -0x1a]               ; 00420428
    FLD float ptr [EBP + 0x76]          ; 0042042b
    PUSH EAX                            ; 0042042e
    FSTP float ptr [EBP + 0xffffff4e]   ; 0042042f
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00420435
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042043a
    PUSH EAX                            ; 0042043d
    LEA EAX,[EBP + 0x22]                ; 0042043e
    PUSH EAX                            ; 00420441
    PUSH EBX                            ; 00420442
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00420443
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00420448
    PUSH EAX                            ; 0042044b
    PUSH EBX                            ; 0042044c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0042044d
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00420452
    JMP 0x0041ff85                      ; 00420455
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 0042045a
        ;   Label: LAB_0042045a
    TEST EDI,EDI                        ; 00420460
    JNZ 0x00420476                      ; 00420462
        ;   XREF to: 00420476 (CONDITIONAL_JUMP)  ; LAB_00420476
    PUSH 0x1                            ; 00420464
    PUSH 0x1                            ; 00420466
    PUSH ESI                            ; 00420468
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420469
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042046e
    JMP 0x0041ff85                      ; 00420471
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH EDI                            ; 00420476
        ;   Label: LAB_00420476
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00420477
    CALL dword ptr [EDX + 0xec]         ; 0042047d
    ADD ESP,0x4                         ; 00420483
    TEST EAX,EAX                        ; 00420486
    JZ 0x0042049c                       ; 00420488
        ;   XREF to: 0042049c (CONDITIONAL_JUMP)  ; LAB_0042049c
    PUSH 0x1                            ; 0042048a
    PUSH 0x1                            ; 0042048c
    PUSH ESI                            ; 0042048e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0042048f
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420494
    JMP 0x0041ff85                      ; 00420497
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    PUSH 0x3f000000                     ; 0042049c
        ;   Label: LAB_0042049c
    PUSH 0x3e4ccccd                     ; 004204a1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004204a6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004204ab
    ADD ESP,0x8                         ; 004204ae
    FLD float ptr [EBP + 0x76]          ; 004204b1
    PUSH ESI                            ; 004204b4
    FSTP float ptr [EBX + 0xbca0]       ; 004204b5
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60 ; 004204bb
        ;   XREF to: 004e1e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004204c0
    ADD ESP,0x4                         ; 004204c3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004204c6
    MOV dword ptr [EBP + 0x6e],EAX      ; 004204c9
    FLD float ptr [EBP + 0x6e]          ; 004204cc
    FST double ptr [EBP + 0x36]         ; 004204cf
    FCOMP double ptr [0x00579b35]       ; 004204d2 | DOUBLE_00579b35
    FNSTSW AX                           ; 004204d8
    SAHF                                ; 004204da
    JA 0x0041ff85                       ; 004204db
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    MOV EAX,[0x0059ad0c]                ; 004204e1 | FLOAT_0059ad0c
    FLD1                                ; 004204e6
    MOV dword ptr [EBP + 0x72],EAX      ; 004204e8
    FCOMP double ptr [EBP + 0x36]       ; 004204eb
    FNSTSW AX                           ; 004204ee
    SAHF                                ; 004204f0
    JA 0x004205ab                       ; 004204f1
        ;   XREF to: 004205ab (CONDITIONAL_JUMP)  ; LAB_004205ab
    FLD double ptr [EBP + 0x36]         ; 004204f7
    FCOMP double ptr [0x00579b3d]       ; 004204fa | DOUBLE_00579b3d
    FNSTSW AX                           ; 00420500
    SAHF                                ; 00420502
    JA 0x004205ab                       ; 00420503
        ;   XREF to: 004205ab (CONDITIONAL_JUMP)  ; LAB_004205ab
    MOV EAX,dword ptr [EBX + 0xbd30]    ; 00420509
        ;   Label: LAB_00420509
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 0042050f
    JZ 0x0041ff85                       ; 00420517
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    LEA EAX,[EBP + 0xffffff0e]          ; 0042051d
    PUSH EAX                            ; 00420523
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00420524
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00420529
    PUSH 0x41700000                     ; 0042052c
    PUSH 0x40e00000                     ; 00420531
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00420536
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV ESI,dword ptr [0x00764b34]      ; 0042053b | DAT_00764b34
    MOV dword ptr [EBP + 0x76],EAX      ; 00420541
    ADD ESP,0x8                         ; 00420544
    MOV dword ptr [EBP + 0xffffff42],EBX ; 00420547
    MOV dword ptr [EBP + 0xffffff46],EBX ; 0042054d
    LEA EDX,[ESI*0x4 + 0x0]             ; 00420553
    LEA EAX,[EBP + 0xffffff0e]          ; 0042055a
    SUB EDX,ESI                         ; 00420560
    PUSH EAX                            ; 00420562
    SHL EDX,0x4                         ; 00420563
    LEA EAX,[EBX + 0xfd0]               ; 00420566
    ADD EAX,EDX                         ; 0042056c
    PUSH 0x3ecccccd                     ; 0042056e
    PUSH EAX                            ; 00420573
    PUSH 0x764ae4                       ; 00420574 | CVector3f_00764ae4
    LEA EAX,[EBP + 0xa]                 ; 00420579
    FLD float ptr [EBP + 0x76]          ; 0042057c
    PUSH EAX                            ; 0042057f
    FSTP float ptr [EBP + 0xffffff12]   ; 00420580
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00420586
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042058b
    PUSH EAX                            ; 0042058e
    LEA EAX,[EBP + -0x26]               ; 0042058f
    PUSH EAX                            ; 00420592
    PUSH EBX                            ; 00420593
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00420594
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00420599
    PUSH EAX                            ; 0042059c
    PUSH EBX                            ; 0042059d
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0042059e
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004205a3
    JMP 0x0041ff85                      ; 004205a6
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBP + 0x6e]          ; 004205ab
        ;   Label: LAB_004205ab
    FST double ptr [EBP + 0x5e]         ; 004205ae
    FCOMP double ptr [0x00579b45]       ; 004205b1 | DOUBLE_00579b45
    FNSTSW AX                           ; 004205b7
    SAHF                                ; 004205b9
    JC 0x004205ce                       ; 004205ba
        ;   XREF to: 004205ce (CONDITIONAL_JUMP)  ; LAB_004205ce
    FLD double ptr [EBP + 0x5e]         ; 004205bc
    FCOMP double ptr [0x00579b4d]       ; 004205bf | DOUBLE_00579b4d
    FNSTSW AX                           ; 004205c5
    SAHF                                ; 004205c7
    JBE 0x00420509                      ; 004205c8
        ;   XREF to: 00420509 (CONDITIONAL_JUMP)  ; LAB_00420509
    FLD float ptr [EBP + 0x6e]          ; 004205ce
        ;   Label: LAB_004205ce
    FST double ptr [EBP + 0x2e]         ; 004205d1
    FCOMP double ptr [0x00579b55]       ; 004205d4 | DOUBLE_00579b55
    FNSTSW AX                           ; 004205da
    SAHF                                ; 004205dc
    JC 0x00420697                       ; 004205dd
        ;   XREF to: 00420697 (CONDITIONAL_JUMP)  ; LAB_00420697
    FLD double ptr [EBP + 0x2e]         ; 004205e3
    FCOMP double ptr [0x00579b5d]       ; 004205e6 | DOUBLE_00579b5d
    FNSTSW AX                           ; 004205ec
    SAHF                                ; 004205ee
    JA 0x00420697                       ; 004205ef
        ;   XREF to: 00420697 (CONDITIONAL_JUMP)  ; LAB_00420697
    MOV EAX,dword ptr [EBX + 0xbd28]    ; 004205f5
        ;   Label: LAB_004205f5
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 004205fb
    JZ 0x0041ff85                       ; 00420603
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    LEA EAX,[EBP + 0xfffffed2]          ; 00420609
    PUSH EAX                            ; 0042060f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00420610
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00420615
    PUSH 0x41700000                     ; 00420618
    PUSH 0x40e00000                     ; 0042061d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00420622
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV ESI,dword ptr [0x00764b30]      ; 00420627 | DAT_00764b30
    MOV dword ptr [EBP + 0x76],EAX      ; 0042062d
    ADD ESP,0x8                         ; 00420630
    MOV dword ptr [EBP + 0xffffff06],EBX ; 00420633
    MOV dword ptr [EBP + 0xffffff0a],EBX ; 00420639
    LEA EDX,[ESI*0x4 + 0x0]             ; 0042063f
    LEA EAX,[EBP + 0xfffffed2]          ; 00420646
    SUB EDX,ESI                         ; 0042064c
    PUSH EAX                            ; 0042064e
    SHL EDX,0x4                         ; 0042064f
    LEA EAX,[EBX + 0xfd0]               ; 00420652
    ADD EAX,EDX                         ; 00420658
    PUSH 0x3ecccccd                     ; 0042065a
    PUSH EAX                            ; 0042065f
    PUSH 0x764ae4                       ; 00420660 | CVector3f_00764ae4
    LEA EAX,[EBP + -0xe]                ; 00420665
    FLD float ptr [EBP + 0x76]          ; 00420668
    PUSH EAX                            ; 0042066b
    FSTP float ptr [EBP + 0xfffffed6]   ; 0042066c
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00420672
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00420677
    PUSH EAX                            ; 0042067a
    LEA EAX,[EBP + 0x16]                ; 0042067b
    PUSH EAX                            ; 0042067e
    PUSH EBX                            ; 0042067f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00420680
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00420685
    PUSH EAX                            ; 00420688
    PUSH EBX                            ; 00420689
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 0042068a
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0042068f
    JMP 0x0041ff85                      ; 00420692
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBP + 0x6e]          ; 00420697
        ;   Label: LAB_00420697
    FST double ptr [EBP + 0x56]         ; 0042069a
    FCOMP double ptr [0x00579b65]       ; 0042069d | DOUBLE_00579b65
    FNSTSW AX                           ; 004206a3
    SAHF                                ; 004206a5
    JC 0x0041ff85                       ; 004206a6
        ;   XREF to: 0041ff85 (CONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD double ptr [EBP + 0x56]         ; 004206ac
    FCOMP double ptr [0x00579b35]       ; 004206af | DOUBLE_00579b35
    FNSTSW AX                           ; 004206b5
    SAHF                                ; 004206b7
    JBE 0x004205f5                      ; 004206b8
        ;   XREF to: 004205f5 (CONDITIONAL_JUMP)  ; LAB_004205f5
    JMP 0x0041ff85                      ; 004206be
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    JBE 0x00420243                      ; 004206c3
        ;   XREF to: 00420243 (CONDITIONAL_JUMP)  ; LAB_00420243
        ;   Label: LAB_004206c3
    CMP EAX,0x6                         ; 004206c9
    JBE 0x0042045a                      ; 004206cc
        ;   XREF to: 0042045a (CONDITIONAL_JUMP)  ; LAB_0042045a
    CMP EAX,0xe                         ; 004206d2
    JZ 0x0041ffed                       ; 004206d5
        ;   XREF to: 0041ffed (CONDITIONAL_JUMP)  ; LAB_0041ffed
    JMP 0x0041ff85                      ; 004206db
        ;   XREF to: 0041ff85 (UNCONDITIONAL_JUMP)  ; LAB_0041ff85
    FLD float ptr [EBP + 0x72]          ; 004206e0
        ;   Label: LAB_004206e0
    FLDZ                                ; 004206e3
    FCOMPP                              ; 004206e5
    FNSTSW AX                           ; 004206e7
    SAHF                                ; 004206e9
    JA 0x0041ff92                       ; 004206ea
        ;   XREF to: 0041ff92 (CONDITIONAL_JUMP)  ; LAB_0041ff92
    FLD float ptr [EBX + 0xbc8c]        ; 004206f0
    FMUL double ptr [0x00579b6d]        ; 004206f6 | DOUBLE_00579b6d
    FLD float ptr [EBX + 0xbc8c]        ; 004206fc
    FLD float ptr [EBP + 0x92]          ; 00420702
    FLD ST0                             ; 00420708
    FMUL double ptr [0x00579b75]        ; 0042070a | DOUBLE_00579b75
    FXCH ST3                            ; 00420710
    FMULP                               ; 00420712
    FXCH ST2                            ; 00420714
    FMULP                               ; 00420716
    PUSH 0x3f060a92                     ; 00420718
    PUSH 0x40400000                     ; 0042071d
    MOV EAX,dword ptr [EBP + 0x72]      ; 00420722
    XOR EDI,EDI                         ; 00420725
    FXCH                                ; 00420727
    FSTP float ptr [EBX + 0x2430]       ; 00420729
    FSTP float ptr [EBX + 0x242c]       ; 0042072f
    MOV dword ptr [EBP + -0x2],EDI      ; 00420735
    MOV dword ptr [EBP + 0x6],EAX       ; 00420738
    LEA EAX,[EBP + -0x2]                ; 0042073b
    MOV dword ptr [EBP + 0x2],EDI       ; 0042073e
    PUSH EAX                            ; 00420741
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00420742
    PUSH EAX                            ; 00420748
    MOV ESI,dword ptr [EAX + 0x14c]     ; 00420749
    CALL dword ptr [ESI + 0xbc]         ; 0042074f
    ADD ESP,0x4                         ; 00420755
    PUSH EAX                            ; 00420758
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00420759
    ADD EAX,0x20                        ; 0042075f
    PUSH EAX                            ; 00420762
    PUSH EBX                            ; 00420763
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00420764
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00420769
    CMP EAX,0x1                         ; 0042076c
    JZ 0x0041ff92                       ; 0042076f
        ;   XREF to: 0041ff92 (CONDITIONAL_JUMP)  ; LAB_0041ff92
    PUSH 0x1                            ; 00420775
    PUSH 0x1                            ; 00420777
    LEA EAX,[EBX + 0x150]               ; 00420779
    PUSH EAX                            ; 0042077f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00420780
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00420785
    MOV dword ptr [EBX + 0x2410],EDI    ; 00420788
    JMP 0x0041ff92                      ; 0042078e
        ;   XREF to: 0041ff92 (UNCONDITIONAL_JUMP)  ; LAB_0041ff92
    FLD float ptr [EBX + 0xbca0]        ; 00420793
        ;   Label: LAB_00420793
    FLDZ                                ; 00420799
    FCOMPP                              ; 0042079b
    FNSTSW AX                           ; 0042079d
    SAHF                                ; 0042079f
    JNC 0x004207b4                      ; 004207a0
        ;   XREF to: 004207b4 (CONDITIONAL_JUMP)  ; LAB_004207b4
    FLD float ptr [EBX + 0xbca0]        ; 004207a2
    FSUB float ptr [EBP + 0x92]         ; 004207a8
    FSTP float ptr [EBX + 0xbca0]       ; 004207ae
    FLD float ptr [EBX + 0x2410]        ; 004207b4
        ;   Label: LAB_004207b4
    FADD float ptr [EBX + 0x34]         ; 004207ba
    PUSH EBX                            ; 004207bd
    FSTP float ptr [EBX + 0x34]         ; 004207be
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 004207c1
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004207c6
    PUSH EBX                            ; 004207c9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 004207ca
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004207cf
    TEST EAX,EAX                        ; 004207d2
    JZ 0x00420881                       ; 004207d4
        ;   XREF to: 00420881 (CONDITIONAL_JUMP)  ; LAB_00420881
    FLD float ptr [EBP + 0x92]          ; 004207da
    FLD ST0                             ; 004207e0
    FMUL double ptr [0x00579b7d]        ; 004207e2 | DOUBLE_00579b7d
    FLD float ptr [EBX + 0x2424]        ; 004207e8
    FXCH                                ; 004207ee
    FSUBR ST0,ST1                       ; 004207f0
    LEA EAX,[EBX + 0x2420]              ; 004207f2
    FSTP ST1                            ; 004207f8
    FSTP float ptr [EBX + 0x2424]       ; 004207fa
    FLD float ptr [EAX]                 ; 00420800
    FMUL ST1                            ; 00420802
    FSTP float ptr [EBP + -0x32]        ; 00420804
    FLD float ptr [EAX + 0x4]           ; 00420807
    FMUL ST1                            ; 0042080a
    FSTP float ptr [EBP + -0x2e]        ; 0042080c
    FMUL float ptr [EAX + 0x8]          ; 0042080f
    LEA ESI,[EBX + 0x2414]              ; 00420812
    FLD float ptr [EBP + -0x32]         ; 00420818
    FLD float ptr [EBP + -0x2e]         ; 0042081b
    FXCH ST2                            ; 0042081e
    FSTP float ptr [EBP + -0x2a]        ; 00420820
    FADD float ptr [ESI]                ; 00420823
    LEA EAX,[EBX + 0x150]               ; 00420825
    FSTP float ptr [EBP + -0x62]        ; 0042082b
    FADD float ptr [ESI + 0x4]          ; 0042082e
    FLD float ptr [EBP + -0x2a]         ; 00420831
    FXCH                                ; 00420834
    FSTP float ptr [EBP + -0x5e]        ; 00420836
    FADD float ptr [ESI + 0x8]          ; 00420839
    PUSH EAX                            ; 0042083c
    FSTP float ptr [EBP + -0x5a]        ; 0042083d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00420840
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00420845
    ADD ESP,0x4                         ; 00420848
    CMP EAX,0x1                         ; 0042084b
    JZ 0x00420874                       ; 0042084e
        ;   XREF to: 00420874 (CONDITIONAL_JUMP)  ; LAB_00420874
    LEA EAX,[EBX + 0x23a4]              ; 00420850
    FLD float ptr [EBP + -0x62]         ; 00420856
    FADD float ptr [EAX]                ; 00420859
    FLD float ptr [EBP + -0x5e]         ; 0042085b
    FXCH                                ; 0042085e
    FSTP float ptr [EBP + -0x62]        ; 00420860
    FADD float ptr [EAX + 0x4]          ; 00420863
    FLD float ptr [EBP + -0x5a]         ; 00420866
    FXCH                                ; 00420869
    FSTP float ptr [EBP + -0x5e]        ; 0042086b
    FADD float ptr [EAX + 0x8]          ; 0042086e
    FSTP float ptr [EBP + -0x5a]        ; 00420871
    LEA EAX,[EBP + -0x62]               ; 00420874
        ;   Label: LAB_00420874
    PUSH EAX                            ; 00420877
    PUSH EBX                            ; 00420878
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00420879
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0042087e
    LEA EAX,[EBX + 0x150]               ; 00420881
        ;   Label: LAB_00420881
    PUSH EAX                            ; 00420887
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00420888
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042088d
    PUSH dword ptr [EBP + 0x92]         ; 00420890
    PUSH EBX                            ; 00420896
    CALL core_charactr.cpp_FUN_0042a150 ; 00420897
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0xbc90]    ; 0042089c
    ADD ESP,0x8                         ; 004208a2
    TEST EDX,EDX                        ; 004208a5
    JNZ 0x00420962                      ; 004208a7
        ;   XREF to: 00420962 (CONDITIONAL_JUMP)  ; LAB_00420962
    MOV ECX,dword ptr [0x00764b40]      ; 004208ad | DAT_00764b40
    PUSH 0x3e4ccccd                     ; 004208b3
    PUSH ECX                            ; 004208b8
    MOV ESI,dword ptr [EBX + 0xbd24]    ; 004208b9
    PUSH ESI                            ; 004208bf
    PUSH EBX                            ; 004208c0
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0 ; 004208c1
        ;   XREF to: 004278e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbd24]    ; 004208c6
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 004208cc
    ADD ESP,0x10                        ; 004208d3
    TEST EDI,EDI                        ; 004208d6
    JZ 0x004208f5                       ; 004208d8
        ;   XREF to: 004208f5 (CONDITIONAL_JUMP)  ; LAB_004208f5
    MOV EAX,[0x00764b38]                ; 004208da | DAT_00764b38
    PUSH 0x3e4ccccd                     ; 004208df
    PUSH EAX                            ; 004208e4
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 004208e5
    PUSH EDX                            ; 004208eb
    PUSH EBX                            ; 004208ec
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0 ; 004208ed
        ;   XREF to: 004278e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004208f2
    MOV ECX,dword ptr [0x00764b44]      ; 004208f5 | DAT_00764b44
        ;   Label: LAB_004208f5
    PUSH 0x3e4ccccd                     ; 004208fb
    PUSH ECX                            ; 00420900
    MOV ESI,dword ptr [EBX + 0xbd2c]    ; 00420901
    PUSH ESI                            ; 00420907
    PUSH EBX                            ; 00420908
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0 ; 00420909
        ;   XREF to: 004278e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbd2c]    ; 0042090e
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2290] ; 00420914
    ADD ESP,0x10                        ; 0042091b
    TEST EDI,EDI                        ; 0042091e
    JZ 0x0042093d                       ; 00420920
        ;   XREF to: 0042093d (CONDITIONAL_JUMP)  ; LAB_0042093d
    MOV EAX,[0x00764b3c]                ; 00420922 | DAT_00764b3c
    PUSH 0x3e4ccccd                     ; 00420927
    PUSH EAX                            ; 0042092c
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 0042092d
    PUSH EDX                            ; 00420933
    PUSH EBX                            ; 00420934
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0 ; 00420935
        ;   XREF to: 004278e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_004278e0(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 0042093a
    MOV ECX,dword ptr [0x00764b2c]      ; 0042093d | DAT_00764b2c
        ;   Label: LAB_0042093d
    PUSH 0x3f333333                     ; 00420943
    PUSH ECX                            ; 00420948
    MOV ESI,dword ptr [EBX + 0xbd44]    ; 00420949
    PUSH ESI                            ; 0042094f
    PUSH EBX                            ; 00420950
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990 ; 00420951
        ;   XREF to: 00427990 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00420956
    PUSH EBX                            ; 00420959
    CALL core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0 ; 0042095a
        ;   XREF to: 004277f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamageDecals_FUN_004277f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042095f
    LEA ESP,[EBP + 0x7a]                ; 00420962
        ;   Label: LAB_00420962
    POP EBP                             ; 00420965
    POP EDI                             ; 00420966
    POP ESI                             ; 00420967
    POP EBX                             ; 00420968
    RET                                 ; 00420969

