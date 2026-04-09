; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_process_FUN_00423a30(CBride *this_ptr,float delta_time)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; SDamageInfo      Stack[-0x1f4]:60  local_1f4
; SDamageInfo      Stack[-0x1b8]:60  local_1b8
; SDamageInfo      Stack[-0x17c]:60  local_17c
; SDamageInfo      Stack[-0x140]:60  local_140
; CVector3f        Stack[-0x104]:12  local_104
; CVector3f        Stack[-0xf8]:12  local_f8
; CVector3f        Stack[-0xec]:12  local_ec
; CVector3f        Stack[-0xe0]:12  local_e0
; CVector3f        Stack[-0xd4]:12  local_d4
; CVector3f        Stack[-0xc8]:12  local_c8
; float            Stack[-0xbc]:4  local_bc
; float            Stack[-0xb8]:4  local_b8
; float            Stack[-0xb4]:4  local_b4
; CVector3f        Stack[-0xb0]:12  local_b0
; CVector3f        Stack[-0xa4]:12  local_a4
; CVector3f        Stack[-0x98]:12  local_98
; CVector3f        Stack[-0x8c]:12  local_8c
; CVector3f        Stack[-0x80]:12  local_80
; CVector3f        Stack[-0x74]:12  local_74
; CVector3f        Stack[-0x68]:12  local_68
; double           Stack[-0x5c]:8  local_5c
; double           Stack[-0x54]:8  local_54
; double           Stack[-0x4c]:8  local_4c
; double           Stack[-0x44]:8  local_44
; double           Stack[-0x34]:8  local_34
; double           Stack[-0x2c]:8  local_2c
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_ub_attack_wav_00616bc8
;   TerminatedCString s_ub_howl_wav_00616bd7
;   TerminatedCString s_ub_attack_wav_00616be4
;   double DOUBLE_00616bf5 = 8
;   double DOUBLE_00616bfd = 2
;   double DOUBLE_00616c05 = 5
;   double DOUBLE_00616c0d = 6
;   double DOUBLE_00616c15 = 3
;   double DOUBLE_00616c1d = 4
;   double DOUBLE_00616c25 = 7
;   double DOUBLE_00616c2d = 1.57079632675000
;   double DOUBLE_00616c35 = 2.5
;   double DOUBLE_00616c3d = 32
;   float FLOAT_0065b40c = 2.5
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
;   core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423a30
        ;   Label: core_bride.cpp_CBride_process_FUN_00423a30
    PUSH ESI                            ; 00423a31
    PUSH EDI                            ; 00423a32
    PUSH EBP                            ; 00423a33
    MOV EBP,ESP                         ; 00423a34
    SUB ESP,0x1e4                       ; 00423a36
    SUB EBP,0x7a                        ; 00423a3c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00423a3f
    PUSH dword ptr [EBP + 0x92]         ; 00423a45
    PUSH EBX                            ; 00423a4b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 00423a4c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423a51
    TEST EAX,EAX                        ; 00423a54
    JZ 0x00424552                       ; 00423a56
        ;   XREF to: 00424552 (CONDITIONAL_JUMP)  ; LAB_00424552
    FLD float ptr [EBX + 0xbee0]        ; 00423a5c
    FLDZ                                ; 00423a62
    FCOMPP                              ; 00423a64
    FNSTSW AX                           ; 00423a66
    SAHF                                ; 00423a68
    JA 0x00423a7d                       ; 00423a69
        ;   XREF to: 00423a7d (CONDITIONAL_JUMP)  ; LAB_00423a7d
    FLD float ptr [EBX + 0xbee0]        ; 00423a6b
    FSUB float ptr [EBP + 0x92]         ; 00423a71
    FSTP float ptr [EBX + 0xbee0]       ; 00423a77
    LEA ESI,[EBX + 0x158]               ; 00423a7d
        ;   Label: LAB_00423a7d
    MOV EDX,0xbf800000                  ; 00423a83
    PUSH ESI                            ; 00423a88
    MOV dword ptr [EBP + 0x72],EDX      ; 00423a89
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00423a8c
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00423a91
    ADD ESP,0x4                         ; 00423a94
    CMP EAX,0x5                         ; 00423a97
    JNC 0x004242b3                      ; 00423a9a
        ;   XREF to: 004242b3 (CONDITIONAL_JUMP)  ; LAB_004242b3
    TEST EAX,EAX                        ; 00423aa0
    JBE 0x00423c3e                      ; 00423aa2
        ;   XREF to: 00423c3e (CONDITIONAL_JUMP)  ; LAB_00423c3e
    CMP EAX,0x1                         ; 00423aa8
    JNZ 0x00423b75                      ; 00423aab
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBX + 0xbee0]        ; 00423ab1
    FLDZ                                ; 00423ab7
    FCOMPP                              ; 00423ab9
    FNSTSW AX                           ; 00423abb
    SAHF                                ; 00423abd
    JC 0x00423b02                       ; 00423abe
        ;   XREF to: 00423b02 (CONDITIONAL_JUMP)  ; LAB_00423b02
    PUSH 0x41a00000                     ; 00423ac0
    PUSH 0x41200000                     ; 00423ac5
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00423aca
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 00423acf
    PUSH 0x1                            ; 00423ad2
    MOV dword ptr [EBP + 0x76],EAX      ; 00423ad4
    PUSH 0x3                            ; 00423ad7
    FLD float ptr [EBP + 0x76]          ; 00423ad9
    PUSH ESI                            ; 00423adc
    FSTP float ptr [EBX + 0xbee0]       ; 00423add
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423ae3
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423ae8
    MOV ESI,dword ptr [EBX + 0xbee4]    ; 00423aeb
    PUSH ESI                            ; 00423af1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423af2
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423af7
    TEST EAX,EAX                        ; 00423afa
    JZ 0x00423ce6                       ; 00423afc
        ;   XREF to: 00423ce6 (CONDITIONAL_JUMP)  ; LAB_00423ce6
    FLD float ptr [EBX + 0xbe24]        ; 00423b02
        ;   Label: LAB_00423b02
    FMUL double ptr [0x00616c15]        ; 00423b08 | DOUBLE_00616c15
    FLD float ptr [EBX + 0xbe24]        ; 00423b0e
    FMUL double ptr [0x00616c2d]        ; 00423b14 | DOUBLE_00616c2d
    FLD float ptr [EBP + 0x92]          ; 00423b1a
    FXCH ST2                            ; 00423b20
    FMUL ST2                            ; 00423b22
    FXCH                                ; 00423b24
    FMULP ST2                           ; 00423b26
    PUSH dword ptr [EBP + 0x92]         ; 00423b28
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423b2e
    PUSH EBX                            ; 00423b34
    LEA ESI,[EBX + 0x158]               ; 00423b35
    FSTP float ptr [EBX + 0x2434]       ; 00423b3b
    FSTP float ptr [EBX + 0x2438]       ; 00423b41
    CALL dword ptr [EAX + 0x158]        ; 00423b47
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423b4d
    ADD ESP,0x8                         ; 00423b53
    TEST EAX,EAX                        ; 00423b56
    JNZ 0x00423d2b                      ; 00423b58
        ;   XREF to: 00423d2b (CONDITIONAL_JUMP)  ; LAB_00423d2b
    PUSH dword ptr [EBP + 0x92]         ; 00423b5e
    PUSH EBX                            ; 00423b64
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 00423b65
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423b6a
    TEST EAX,EAX                        ; 00423b6d
    JZ 0x00423d1a                       ; 00423b6f
        ;   XREF to: 00423d1a (CONDITIONAL_JUMP)  ; LAB_00423d1a
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 00423b75
        ;   Label: LAB_00423b75
    JNZ 0x004242d0                      ; 00423b7c
        ;   XREF to: 004242d0 (CONDITIONAL_JUMP)  ; LAB_004242d0
    LEA EAX,[EBX + 0x23ac]              ; 00423b82
        ;   Label: LAB_00423b82
    MOV dword ptr [EAX + 0x8],0x0       ; 00423b88
    FLD float ptr [EBP + 0x92]          ; 00423b8f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00423b95
    MOV dword ptr [EAX + 0x4],EDX       ; 00423b98
    MOV EDX,dword ptr [EAX + 0x4]       ; 00423b9b
    MOV dword ptr [EAX],EDX             ; 00423b9e
    FMUL float ptr [EBX + 0xbe24]       ; 00423ba0
    LEA ESI,[EBX + 0x158]               ; 00423ba6
    FSTP float ptr [EBP + 0x66]         ; 00423bac
    FLD float ptr [EBP + 0x66]          ; 00423baf
        ;   Label: LAB_00423baf
    FLDZ                                ; 00423bb2
    FCOMPP                              ; 00423bb4
    FNSTSW AX                           ; 00423bb6
    SAHF                                ; 00423bb8
    JNC 0x00424383                      ; 00423bb9
        ;   XREF to: 00424383 (CONDITIONAL_JUMP)  ; LAB_00424383
    LEA EAX,[EBP + 0x66]                ; 00423bbf
    PUSH EAX                            ; 00423bc2
    PUSH ESI                            ; 00423bc3
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00423bc4
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00423bc9
    CMP EAX,0x11                        ; 00423bcc
    JZ 0x00423baf                       ; 00423bcf
        ;   XREF to: 00423baf (CONDITIONAL_JUMP)  ; LAB_00423baf
    PUSH EAX                            ; 00423bd1
    PUSH EBX                            ; 00423bd2
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 00423bd3
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00423bd8
    JMP 0x00423baf                      ; 00423bdb
        ;   XREF to: 00423baf (UNCONDITIONAL_JUMP)  ; LAB_00423baf
    MOV ECX,dword ptr [EBX + 0xbe28]    ; 00423bdd
        ;   Label: LAB_00423bdd
    TEST ECX,ECX                        ; 00423be3
    JNZ 0x00423b75                      ; 00423be5
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH ECX                            ; 00423be7
    LEA EAX,[EBP + -0x3e]               ; 00423be8
    PUSH EAX                            ; 00423beb
    PUSH ESI                            ; 00423bec
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 00423bed
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00423bf2
    PUSH EAX                            ; 00423bf5
    LEA EAX,[EBP + -0x4a]               ; 00423bf6
    PUSH EAX                            ; 00423bf9
    PUSH EBX                            ; 00423bfa
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00423bfb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00423c00
    PUSH 0x0                            ; 00423c03
    LEA EAX,[EBP + -0x4a]               ; 00423c05
    PUSH EAX                            ; 00423c08
    MOV ESI,dword ptr [0x0067b9a0]      ; 00423c09 | g_CGorePtr
    PUSH ESI                            ; 00423c0f | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 00423c10
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00423c15
    PUSH 0x41c80000                     ; 00423c18
    PUSH 0x32                           ; 00423c1d
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423c1f
    PUSH EBX                            ; 00423c25
    CALL dword ptr [EAX + 0xa0]         ; 00423c26
    ADD ESP,0xc                         ; 00423c2c
    MOV dword ptr [EBX + 0xbe28],0x1    ; 00423c2f
    JMP 0x00423b75                      ; 00423c39
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH dword ptr [EBP + 0x92]         ; 00423c3e
        ;   Label: LAB_00423c3e
    PUSH EBX                            ; 00423c44
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0 ; 00423c45
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00423c4a
    TEST EAX,EAX                        ; 00423c4d
    JZ 0x00423c69                       ; 00423c4f
        ;   XREF to: 00423c69 (CONDITIONAL_JUMP)  ; LAB_00423c69
    PUSH 0x1                            ; 00423c51
    PUSH 0x1                            ; 00423c53
    LEA EAX,[EBX + 0x158]               ; 00423c55
    PUSH EAX                            ; 00423c5b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423c5c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423c61
    JMP 0x00423b75                      ; 00423c64
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH dword ptr [EBP + 0x92]         ; 00423c69
        ;   Label: LAB_00423c69
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423c6f
    PUSH EBX                            ; 00423c75
    CALL dword ptr [EAX + 0x158]        ; 00423c76
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423c7c
    ADD ESP,0x8                         ; 00423c82
    TEST EAX,EAX                        ; 00423c85
    JZ 0x00423b75                       ; 00423c87
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x1                            ; 00423c8d
    PUSH 0x1                            ; 00423c8f
    PUSH ESI                            ; 00423c91
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423c92
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423c97
    MOV EDX,dword ptr [EBX + 0xbee4]    ; 00423c9a
    PUSH EDX                            ; 00423ca0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423ca1
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423ca6
    TEST EAX,EAX                        ; 00423ca9
    JNZ 0x00423b75                      ; 00423cab
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV ECX,dword ptr [EBX + 0xbee8]    ; 00423cb1
    PUSH ECX                            ; 00423cb7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423cb8
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423cbd
    TEST EAX,EAX                        ; 00423cc0
    JNZ 0x00423b75                      ; 00423cc2
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EDX,0x616bc8                    ; 00423cc8 | = "ub-attack?.wav"
    PUSH EDX                            ; 00423ccd | = "ub-attack?.wav"
    MOV ESI,dword ptr [EBX + 0x154]     ; 00423cce
    PUSH EBX                            ; 00423cd4
    CALL dword ptr [ESI + 0x24]         ; 00423cd5
    ADD ESP,0x8                         ; 00423cd8
    MOV dword ptr [EBX + 0xbee8],EAX    ; 00423cdb
    JMP 0x00423b75                      ; 00423ce1
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EDI,dword ptr [EBX + 0xbee8]    ; 00423ce6
        ;   Label: LAB_00423ce6
    PUSH EDI                            ; 00423cec
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423ced
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423cf2
    TEST EAX,EAX                        ; 00423cf5
    JNZ 0x00423b02                      ; 00423cf7
        ;   XREF to: 00423b02 (CONDITIONAL_JUMP)  ; LAB_00423b02
    PUSH 0x616bd7                       ; 00423cfd | = "ub-howl?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423d02
    PUSH EBX                            ; 00423d08
    CALL dword ptr [EAX + 0x24]         ; 00423d09
    ADD ESP,0x8                         ; 00423d0c
    MOV dword ptr [EBX + 0xbee8],EAX    ; 00423d0f
    JMP 0x00423b02                      ; 00423d15
        ;   XREF to: 00423b02 (UNCONDITIONAL_JUMP)  ; LAB_00423b02
    PUSH 0x1                            ; 00423d1a
        ;   Label: LAB_00423d1a
    PUSH EAX                            ; 00423d1c
    PUSH ESI                            ; 00423d1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423d1e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423d23
    JMP 0x00423b75                      ; 00423d26
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x3e32b8c2                     ; 00423d2b
        ;   Label: LAB_00423d2b
    PUSH 0x3f800000                     ; 00423d30
    MOV EAX,[0x0065b40c]                ; 00423d35 | FLOAT_0065b40c
    XOR EDX,EDX                         ; 00423d3a
    MOV dword ptr [EBP + -0x7a],EDX     ; 00423d3c
    MOV dword ptr [EBP + -0x72],EAX     ; 00423d3f
    LEA EAX,[EBP + -0x7a]               ; 00423d42
    MOV dword ptr [EBP + -0x76],EDX     ; 00423d45
    PUSH EAX                            ; 00423d48
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d49
    PUSH EAX                            ; 00423d4f
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423d50
    CALL dword ptr [EDX + 0xbc]         ; 00423d56
    ADD ESP,0x4                         ; 00423d5c
    PUSH EAX                            ; 00423d5f
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d60
    ADD EAX,0x20                        ; 00423d66
    PUSH EAX                            ; 00423d69
    PUSH EBX                            ; 00423d6a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00423d6b
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00423d70
    TEST EAX,EAX                        ; 00423d73
    JL 0x00423e1b                       ; 00423d75
        ;   XREF to: 00423e1b (CONDITIONAL_JUMP)  ; LAB_00423e1b
    JLE 0x00423b75                      ; 00423d7b
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBX + 0xbe38]        ; 00423d81
    FLDZ                                ; 00423d87
    FCOMPP                              ; 00423d89
    FNSTSW AX                           ; 00423d8b
    SAHF                                ; 00423d8d
    JC 0x00423b75                       ; 00423d8e
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00423d94
    PUSH EAX                            ; 00423d9a
    MOV EDX,dword ptr [EAX + 0x154]     ; 00423d9b
    CALL dword ptr [EDX + 0x108]        ; 00423da1
    ADD ESP,0x4                         ; 00423da7
    TEST EAX,EAX                        ; 00423daa
    JNZ 0x00423b75                      ; 00423dac
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x3f000000                     ; 00423db2
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00423db7
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00423dbc
    TEST EAX,EAX                        ; 00423dbf
    JZ 0x00423e2d                       ; 00423dc1
        ;   XREF to: 00423e2d (CONDITIONAL_JUMP)  ; LAB_00423e2d
    PUSH 0x1                            ; 00423dc3
    PUSH 0x5                            ; 00423dc5
    PUSH ESI                            ; 00423dc7
        ;   Label: LAB_00423dc7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423dc8
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423dcd
    MOV ESI,dword ptr [EBX + 0xbee4]    ; 00423dd0
    PUSH ESI                            ; 00423dd6
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423dd7
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423ddc
    TEST EAX,EAX                        ; 00423ddf
    JNZ 0x00423b75                      ; 00423de1
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EDI,dword ptr [EBX + 0xbee8]    ; 00423de7
    PUSH EDI                            ; 00423ded
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00423dee
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00423df3
    TEST EAX,EAX                        ; 00423df6
    JNZ 0x00423b75                      ; 00423df8
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x616be4                       ; 00423dfe | = "ub-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00423e03
    PUSH EBX                            ; 00423e09
    CALL dword ptr [EAX + 0x24]         ; 00423e0a
    ADD ESP,0x8                         ; 00423e0d
    MOV dword ptr [EBX + 0xbee8],EAX    ; 00423e10
    JMP 0x00423b75                      ; 00423e16
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x1                            ; 00423e1b
        ;   Label: LAB_00423e1b
    PUSH 0x0                            ; 00423e1d
    PUSH ESI                            ; 00423e1f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e20
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423e25
    JMP 0x00423b75                      ; 00423e28
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x1                            ; 00423e2d
        ;   Label: LAB_00423e2d
    PUSH 0x6                            ; 00423e2f
    JMP 0x00423dc7                      ; 00423e31
        ;   XREF to: 00423dc7 (UNCONDITIONAL_JUMP)  ; LAB_00423dc7
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 00423e33
        ;   Label: LAB_00423e33
    TEST EDI,EDI                        ; 00423e39
    JNZ 0x00423e4f                      ; 00423e3b
        ;   XREF to: 00423e4f (CONDITIONAL_JUMP)  ; LAB_00423e4f
    PUSH 0x1                            ; 00423e3d
    PUSH 0x1                            ; 00423e3f
    PUSH ESI                            ; 00423e41
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e42
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423e47
    JMP 0x00423b75                      ; 00423e4a
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH EDI                            ; 00423e4f
        ;   Label: LAB_00423e4f
    MOV EDX,dword ptr [EDI + 0x154]     ; 00423e50
    CALL dword ptr [EDX + 0x108]        ; 00423e56
    ADD ESP,0x4                         ; 00423e5c
    TEST EAX,EAX                        ; 00423e5f
    JZ 0x00423e75                       ; 00423e61
        ;   XREF to: 00423e75 (CONDITIONAL_JUMP)  ; LAB_00423e75
    PUSH 0x1                            ; 00423e63
    PUSH 0x1                            ; 00423e65
    PUSH ESI                            ; 00423e67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00423e68
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00423e6d
    JMP 0x00423b75                      ; 00423e70
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x3f000000                     ; 00423e75
        ;   Label: LAB_00423e75
    PUSH 0x3e4ccccd                     ; 00423e7a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00423e7f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00423e84
    ADD ESP,0x8                         ; 00423e87
    FLD float ptr [EBP + 0x76]          ; 00423e8a
    PUSH ESI                            ; 00423e8d
    FSTP float ptr [EBX + 0xbe38]       ; 00423e8e
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 00423e94
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00423e99
    ADD ESP,0x4                         ; 00423e9c
    MOV EAX,dword ptr [EBP + 0x76]      ; 00423e9f
    MOV dword ptr [EBP + 0x6a],EAX      ; 00423ea2
    FLD float ptr [EBP + 0x6a]          ; 00423ea5
    FST double ptr [EBP + 0x3e]         ; 00423ea8
    FCOMP double ptr [0x00616c15]       ; 00423eab | DOUBLE_00616c15
    FNSTSW AX                           ; 00423eb1
    SAHF                                ; 00423eb3
    JA 0x00423b75                       ; 00423eb4
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EAX,[0x0065b40c]                ; 00423eba | FLOAT_0065b40c
    FLD1                                ; 00423ebf
    MOV dword ptr [EBP + 0x72],EAX      ; 00423ec1
    FCOMP double ptr [EBP + 0x3e]       ; 00423ec4
    FNSTSW AX                           ; 00423ec7
    SAHF                                ; 00423ec9
    JA 0x00423f84                       ; 00423eca
        ;   XREF to: 00423f84 (CONDITIONAL_JUMP)  ; LAB_00423f84
    FLD double ptr [EBP + 0x3e]         ; 00423ed0
    FCOMP double ptr [0x00616bfd]       ; 00423ed3 | DOUBLE_00616bfd
    FNSTSW AX                           ; 00423ed9
    SAHF                                ; 00423edb
    JA 0x00423f84                       ; 00423edc
        ;   XREF to: 00423f84 (CONDITIONAL_JUMP)  ; LAB_00423f84
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 00423ee2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00423ee8
    JZ 0x00423b75                       ; 00423ef0
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    LEA EAX,[EBP + 0xfffffe96]          ; 00423ef6
    PUSH EAX                            ; 00423efc
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00423efd
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00423f02
    PUSH 0x41700000                     ; 00423f05
    PUSH 0x40e00000                     ; 00423f0a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00423f0f
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [0x00822ce4]      ; 00423f14 | g_BrideIndices[2]
    MOV dword ptr [EBP + 0x76],EAX      ; 00423f1a
    ADD ESP,0x8                         ; 00423f1d
    MOV dword ptr [EBP + 0xfffffeca],EBX ; 00423f20
    MOV dword ptr [EBP + 0xfffffece],EBX ; 00423f26
    LEA EDX,[ESI*0x4 + 0x0]             ; 00423f2c
    LEA EAX,[EBP + 0xfffffe96]          ; 00423f33
    SUB EDX,ESI                         ; 00423f39
    PUSH EAX                            ; 00423f3b
    SHL EDX,0x4                         ; 00423f3c
    LEA EAX,[EBX + 0xfd8]               ; 00423f3f
    ADD EAX,EDX                         ; 00423f45
    PUSH 0x3ecccccd                     ; 00423f47
    PUSH EAX                            ; 00423f4c
    PUSH 0x822c94                       ; 00423f4d | CVector3f_00822c94
    LEA EAX,[EBP + -0x56]               ; 00423f52
    FLD float ptr [EBP + 0x76]          ; 00423f55
    PUSH EAX                            ; 00423f58
    FSTP float ptr [EBP + 0xfffffe9a]   ; 00423f59
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00423f5f
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00423f64
    PUSH EAX                            ; 00423f67
    LEA EAX,[EBP + -0x6e]               ; 00423f68
    PUSH EAX                            ; 00423f6b
    PUSH EBX                            ; 00423f6c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00423f6d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00423f72
    PUSH EAX                            ; 00423f75
    PUSH EBX                            ; 00423f76
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 00423f77
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00423f7c
    JMP 0x00423b75                      ; 00423f7f
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBP + 0x6a]          ; 00423f84
        ;   Label: LAB_00423f84
    FST double ptr [EBP + 0x46]         ; 00423f87
    FCOMP double ptr [0x00616c15]       ; 00423f8a | DOUBLE_00616c15
    FNSTSW AX                           ; 00423f90
    SAHF                                ; 00423f92
    JC 0x00423b75                       ; 00423f93
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    FLD double ptr [EBP + 0x46]         ; 00423f99
    FCOMP double ptr [0x00616c1d]       ; 00423f9c | DOUBLE_00616c1d
    FNSTSW AX                           ; 00423fa2
    SAHF                                ; 00423fa4
    JA 0x00423b75                       ; 00423fa5
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 00423fab
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00423fb1
    JZ 0x00423b75                       ; 00423fb9
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    LEA EAX,[EBP + 0xffffff4a]          ; 00423fbf
    PUSH EAX                            ; 00423fc5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00423fc6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00423fcb
    PUSH 0x41700000                     ; 00423fce
    PUSH 0x40e00000                     ; 00423fd3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00423fd8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [0x00822ce0]      ; 00423fdd | g_BrideIndices[1]
    MOV dword ptr [EBP + 0x76],EAX      ; 00423fe3
    ADD ESP,0x8                         ; 00423fe6
    LEA EAX,[EBP + 0xffffff4a]          ; 00423fe9
    MOV dword ptr [EBP + 0xffffff7e],EBX ; 00423fef
    PUSH EAX                            ; 00423ff5
    LEA EAX,[ESI*0x4 + 0x0]             ; 00423ff6
    MOV dword ptr [EBP + -0x7e],EBX     ; 00423ffd
    SUB EAX,ESI                         ; 00424000
    LEA EDX,[EBX + 0xfd8]               ; 00424002
    SHL EAX,0x4                         ; 00424008
    ADD EAX,EDX                         ; 0042400b
    PUSH 0x3ecccccd                     ; 0042400d
    PUSH EAX                            ; 00424012
    PUSH 0x822c94                       ; 00424013 | CVector3f_00822c94
    LEA EAX,[EBP + -0x1a]               ; 00424018
    FLD float ptr [EBP + 0x76]          ; 0042401b
    PUSH EAX                            ; 0042401e
    FSTP float ptr [EBP + 0xffffff4e]   ; 0042401f
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00424025
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042402a
    PUSH EAX                            ; 0042402d
    LEA EAX,[EBP + 0x22]                ; 0042402e
    PUSH EAX                            ; 00424031
    PUSH EBX                            ; 00424032
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00424033
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00424038
    PUSH EAX                            ; 0042403b
    PUSH EBX                            ; 0042403c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 0042403d
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00424042
    JMP 0x00423b75                      ; 00424045
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0042404a
        ;   Label: LAB_0042404a
    TEST EDI,EDI                        ; 00424050
    JNZ 0x00424066                      ; 00424052
        ;   XREF to: 00424066 (CONDITIONAL_JUMP)  ; LAB_00424066
    PUSH 0x1                            ; 00424054
    PUSH 0x1                            ; 00424056
    PUSH ESI                            ; 00424058
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00424059
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042405e
    JMP 0x00423b75                      ; 00424061
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH EDI                            ; 00424066
        ;   Label: LAB_00424066
    MOV EDX,dword ptr [EDI + 0x154]     ; 00424067
    CALL dword ptr [EDX + 0x108]        ; 0042406d
    ADD ESP,0x4                         ; 00424073
    TEST EAX,EAX                        ; 00424076
    JZ 0x0042408c                       ; 00424078
        ;   XREF to: 0042408c (CONDITIONAL_JUMP)  ; LAB_0042408c
    PUSH 0x1                            ; 0042407a
    PUSH 0x1                            ; 0042407c
    PUSH ESI                            ; 0042407e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0042407f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00424084
    JMP 0x00423b75                      ; 00424087
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    PUSH 0x3f000000                     ; 0042408c
        ;   Label: LAB_0042408c
    PUSH 0x3e4ccccd                     ; 00424091
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00424096
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0042409b
    ADD ESP,0x8                         ; 0042409e
    FLD float ptr [EBP + 0x76]          ; 004240a1
    PUSH ESI                            ; 004240a4
    FSTP float ptr [EBX + 0xbe38]       ; 004240a5
    CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0 ; 004240ab
        ;   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 004240b0
    ADD ESP,0x4                         ; 004240b3
    MOV EAX,dword ptr [EBP + 0x76]      ; 004240b6
    MOV dword ptr [EBP + 0x6e],EAX      ; 004240b9
    FLD float ptr [EBP + 0x6e]          ; 004240bc
    FST double ptr [EBP + 0x36]         ; 004240bf
    FCOMP double ptr [0x00616bf5]       ; 004240c2 | DOUBLE_00616bf5
    FNSTSW AX                           ; 004240c8
    SAHF                                ; 004240ca
    JA 0x00423b75                       ; 004240cb
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    MOV EAX,[0x0065b40c]                ; 004240d1 | FLOAT_0065b40c
    FLD1                                ; 004240d6
    MOV dword ptr [EBP + 0x72],EAX      ; 004240d8
    FCOMP double ptr [EBP + 0x36]       ; 004240db
    FNSTSW AX                           ; 004240de
    SAHF                                ; 004240e0
    JA 0x0042419b                       ; 004240e1
        ;   XREF to: 0042419b (CONDITIONAL_JUMP)  ; LAB_0042419b
    FLD double ptr [EBP + 0x36]         ; 004240e7
    FCOMP double ptr [0x00616bfd]       ; 004240ea | DOUBLE_00616bfd
    FNSTSW AX                           ; 004240f0
    SAHF                                ; 004240f2
    JA 0x0042419b                       ; 004240f3
        ;   XREF to: 0042419b (CONDITIONAL_JUMP)  ; LAB_0042419b
    MOV EAX,dword ptr [EBX + 0xbec8]    ; 004240f9
        ;   Label: LAB_004240f9
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004240ff
    JZ 0x00423b75                       ; 00424107
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    LEA EAX,[EBP + 0xffffff0e]          ; 0042410d
    PUSH EAX                            ; 00424113
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00424114
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424119
    PUSH 0x41700000                     ; 0042411c
    PUSH 0x40e00000                     ; 00424121
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00424126
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [0x00822ce4]      ; 0042412b | g_BrideIndices[2]
    MOV dword ptr [EBP + 0x76],EAX      ; 00424131
    ADD ESP,0x8                         ; 00424134
    MOV dword ptr [EBP + 0xffffff42],EBX ; 00424137
    MOV dword ptr [EBP + 0xffffff46],EBX ; 0042413d
    LEA EDX,[ESI*0x4 + 0x0]             ; 00424143
    LEA EAX,[EBP + 0xffffff0e]          ; 0042414a
    SUB EDX,ESI                         ; 00424150
    PUSH EAX                            ; 00424152
    SHL EDX,0x4                         ; 00424153
    LEA EAX,[EBX + 0xfd8]               ; 00424156
    ADD EAX,EDX                         ; 0042415c
    PUSH 0x3ecccccd                     ; 0042415e
    PUSH EAX                            ; 00424163
    PUSH 0x822c94                       ; 00424164 | CVector3f_00822c94
    LEA EAX,[EBP + 0xa]                 ; 00424169
    FLD float ptr [EBP + 0x76]          ; 0042416c
    PUSH EAX                            ; 0042416f
    FSTP float ptr [EBP + 0xffffff12]   ; 00424170
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00424176
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0042417b
    PUSH EAX                            ; 0042417e
    LEA EAX,[EBP + -0x26]               ; 0042417f
    PUSH EAX                            ; 00424182
    PUSH EBX                            ; 00424183
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00424184
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00424189
    PUSH EAX                            ; 0042418c
    PUSH EBX                            ; 0042418d
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 0042418e
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00424193
    JMP 0x00423b75                      ; 00424196
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBP + 0x6e]          ; 0042419b
        ;   Label: LAB_0042419b
    FST double ptr [EBP + 0x5e]         ; 0042419e
    FCOMP double ptr [0x00616c05]       ; 004241a1 | DOUBLE_00616c05
    FNSTSW AX                           ; 004241a7
    SAHF                                ; 004241a9
    JC 0x004241be                       ; 004241aa
        ;   XREF to: 004241be (CONDITIONAL_JUMP)  ; LAB_004241be
    FLD double ptr [EBP + 0x5e]         ; 004241ac
    FCOMP double ptr [0x00616c0d]       ; 004241af | DOUBLE_00616c0d
    FNSTSW AX                           ; 004241b5
    SAHF                                ; 004241b7
    JBE 0x004240f9                      ; 004241b8
        ;   XREF to: 004240f9 (CONDITIONAL_JUMP)  ; LAB_004240f9
    FLD float ptr [EBP + 0x6e]          ; 004241be
        ;   Label: LAB_004241be
    FST double ptr [EBP + 0x2e]         ; 004241c1
    FCOMP double ptr [0x00616c15]       ; 004241c4 | DOUBLE_00616c15
    FNSTSW AX                           ; 004241ca
    SAHF                                ; 004241cc
    JC 0x00424287                       ; 004241cd
        ;   XREF to: 00424287 (CONDITIONAL_JUMP)  ; LAB_00424287
    FLD double ptr [EBP + 0x2e]         ; 004241d3
    FCOMP double ptr [0x00616c1d]       ; 004241d6 | DOUBLE_00616c1d
    FNSTSW AX                           ; 004241dc
    SAHF                                ; 004241de
    JA 0x00424287                       ; 004241df
        ;   XREF to: 00424287 (CONDITIONAL_JUMP)  ; LAB_00424287
    MOV EAX,dword ptr [EBX + 0xbec0]    ; 004241e5
        ;   Label: LAB_004241e5
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 004241eb
    JZ 0x00423b75                       ; 004241f3
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    LEA EAX,[EBP + 0xfffffed2]          ; 004241f9
    PUSH EAX                            ; 004241ff
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00424200
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00424205
    PUSH 0x41700000                     ; 00424208
    PUSH 0x40e00000                     ; 0042420d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 00424212
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [0x00822ce0]      ; 00424217 | g_BrideIndices[1]
    MOV dword ptr [EBP + 0x76],EAX      ; 0042421d
    ADD ESP,0x8                         ; 00424220
    MOV dword ptr [EBP + 0xffffff06],EBX ; 00424223
    MOV dword ptr [EBP + 0xffffff0a],EBX ; 00424229
    LEA EDX,[ESI*0x4 + 0x0]             ; 0042422f
    LEA EAX,[EBP + 0xfffffed2]          ; 00424236
    SUB EDX,ESI                         ; 0042423c
    PUSH EAX                            ; 0042423e
    SHL EDX,0x4                         ; 0042423f
    LEA EAX,[EBX + 0xfd8]               ; 00424242
    ADD EAX,EDX                         ; 00424248
    PUSH 0x3ecccccd                     ; 0042424a
    PUSH EAX                            ; 0042424f
    PUSH 0x822c94                       ; 00424250 | CVector3f_00822c94
    LEA EAX,[EBP + -0xe]                ; 00424255
    FLD float ptr [EBP + 0x76]          ; 00424258
    PUSH EAX                            ; 0042425b
    FSTP float ptr [EBP + 0xfffffed6]   ; 0042425c
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 00424262
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00424267
    PUSH EAX                            ; 0042426a
    LEA EAX,[EBP + 0x16]                ; 0042426b
    PUSH EAX                            ; 0042426e
    PUSH EBX                            ; 0042426f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00424270
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00424275
    PUSH EAX                            ; 00424278
    PUSH EBX                            ; 00424279
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880 ; 0042427a
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0042427f
    JMP 0x00423b75                      ; 00424282
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBP + 0x6e]          ; 00424287
        ;   Label: LAB_00424287
    FST double ptr [EBP + 0x56]         ; 0042428a
    FCOMP double ptr [0x00616c25]       ; 0042428d | DOUBLE_00616c25
    FNSTSW AX                           ; 00424293
    SAHF                                ; 00424295
    JC 0x00423b75                       ; 00424296
        ;   XREF to: 00423b75 (CONDITIONAL_JUMP)  ; LAB_00423b75
    FLD double ptr [EBP + 0x56]         ; 0042429c
    FCOMP double ptr [0x00616bf5]       ; 0042429f | DOUBLE_00616bf5
    FNSTSW AX                           ; 004242a5
    SAHF                                ; 004242a7
    JBE 0x004241e5                      ; 004242a8
        ;   XREF to: 004241e5 (CONDITIONAL_JUMP)  ; LAB_004241e5
    JMP 0x00423b75                      ; 004242ae
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    JBE 0x00423e33                      ; 004242b3
        ;   XREF to: 00423e33 (CONDITIONAL_JUMP)  ; LAB_00423e33
        ;   Label: LAB_004242b3
    CMP EAX,0x6                         ; 004242b9
    JBE 0x0042404a                      ; 004242bc
        ;   XREF to: 0042404a (CONDITIONAL_JUMP)  ; LAB_0042404a
    CMP EAX,0xe                         ; 004242c2
    JZ 0x00423bdd                       ; 004242c5
        ;   XREF to: 00423bdd (CONDITIONAL_JUMP)  ; LAB_00423bdd
    JMP 0x00423b75                      ; 004242cb
        ;   XREF to: 00423b75 (UNCONDITIONAL_JUMP)  ; LAB_00423b75
    FLD float ptr [EBP + 0x72]          ; 004242d0
        ;   Label: LAB_004242d0
    FLDZ                                ; 004242d3
    FCOMPP                              ; 004242d5
    FNSTSW AX                           ; 004242d7
    SAHF                                ; 004242d9
    JA 0x00423b82                       ; 004242da
        ;   XREF to: 00423b82 (CONDITIONAL_JUMP)  ; LAB_00423b82
    FLD float ptr [EBX + 0xbe24]        ; 004242e0
    FMUL double ptr [0x00616c2d]        ; 004242e6 | DOUBLE_00616c2d
    FLD float ptr [EBX + 0xbe24]        ; 004242ec
    FLD float ptr [EBP + 0x92]          ; 004242f2
    FLD ST0                             ; 004242f8
    FMUL double ptr [0x00616c35]        ; 004242fa | DOUBLE_00616c35
    FXCH ST3                            ; 00424300
    FMULP                               ; 00424302
    FXCH ST2                            ; 00424304
    FMULP                               ; 00424306
    PUSH 0x3f060a92                     ; 00424308
    PUSH 0x40400000                     ; 0042430d
    MOV EAX,dword ptr [EBP + 0x72]      ; 00424312
    XOR EDI,EDI                         ; 00424315
    FXCH                                ; 00424317
    FSTP float ptr [EBX + 0x2438]       ; 00424319
    FSTP float ptr [EBX + 0x2434]       ; 0042431f
    MOV dword ptr [EBP + -0x2],EDI      ; 00424325
    MOV dword ptr [EBP + 0x6],EAX       ; 00424328
    LEA EAX,[EBP + -0x2]                ; 0042432b
    MOV dword ptr [EBP + 0x2],EDI       ; 0042432e
    PUSH EAX                            ; 00424331
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00424332
    PUSH EAX                            ; 00424338
    MOV ESI,dword ptr [EAX + 0x154]     ; 00424339
    CALL dword ptr [ESI + 0xbc]         ; 0042433f
    ADD ESP,0x4                         ; 00424345
    PUSH EAX                            ; 00424348
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 00424349
    ADD EAX,0x20                        ; 0042434f
    PUSH EAX                            ; 00424352
    PUSH EBX                            ; 00424353
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 00424354
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00424359
    CMP EAX,0x1                         ; 0042435c
    JZ 0x00423b82                       ; 0042435f
        ;   XREF to: 00423b82 (CONDITIONAL_JUMP)  ; LAB_00423b82
    PUSH 0x1                            ; 00424365
    PUSH 0x1                            ; 00424367
    LEA EAX,[EBX + 0x158]               ; 00424369
    PUSH EAX                            ; 0042436f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00424370
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00424375
    MOV dword ptr [EBX + 0x2418],EDI    ; 00424378
    JMP 0x00423b82                      ; 0042437e
        ;   XREF to: 00423b82 (UNCONDITIONAL_JUMP)  ; LAB_00423b82
    FLD float ptr [EBX + 0xbe38]        ; 00424383
        ;   Label: LAB_00424383
    FLDZ                                ; 00424389
    FCOMPP                              ; 0042438b
    FNSTSW AX                           ; 0042438d
    SAHF                                ; 0042438f
    JNC 0x004243a4                      ; 00424390
        ;   XREF to: 004243a4 (CONDITIONAL_JUMP)  ; LAB_004243a4
    FLD float ptr [EBX + 0xbe38]        ; 00424392
    FSUB float ptr [EBP + 0x92]         ; 00424398
    FSTP float ptr [EBX + 0xbe38]       ; 0042439e
    FLD float ptr [EBX + 0x2418]        ; 004243a4
        ;   Label: LAB_004243a4
    FADD float ptr [EBX + 0x34]         ; 004243aa
    PUSH EBX                            ; 004243ad
    FSTP float ptr [EBX + 0x34]         ; 004243ae
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004243b1
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004243b6
    PUSH EBX                            ; 004243b9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 004243ba
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004243bf
    TEST EAX,EAX                        ; 004243c2
    JZ 0x00424471                       ; 004243c4
        ;   XREF to: 00424471 (CONDITIONAL_JUMP)  ; LAB_00424471
    FLD float ptr [EBP + 0x92]          ; 004243ca
    FLD ST0                             ; 004243d0
    FMUL double ptr [0x00616c3d]        ; 004243d2 | DOUBLE_00616c3d
    FLD float ptr [EBX + 0x242c]        ; 004243d8
    FXCH                                ; 004243de
    FSUBR ST0,ST1                       ; 004243e0
    LEA EAX,[EBX + 0x2428]              ; 004243e2
    FSTP ST1                            ; 004243e8
    FSTP float ptr [EBX + 0x242c]       ; 004243ea
    FLD float ptr [EAX]                 ; 004243f0
    FMUL ST1                            ; 004243f2
    FSTP float ptr [EBP + -0x32]        ; 004243f4
    FLD float ptr [EAX + 0x4]           ; 004243f7
    FMUL ST1                            ; 004243fa
    FSTP float ptr [EBP + -0x2e]        ; 004243fc
    FMUL float ptr [EAX + 0x8]          ; 004243ff
    LEA ESI,[EBX + 0x241c]              ; 00424402
    FLD float ptr [EBP + -0x32]         ; 00424408
    FLD float ptr [EBP + -0x2e]         ; 0042440b
    FXCH ST2                            ; 0042440e
    FSTP float ptr [EBP + -0x2a]        ; 00424410
    FADD float ptr [ESI]                ; 00424413
    LEA EAX,[EBX + 0x158]               ; 00424415
    FSTP float ptr [EBP + -0x62]        ; 0042441b
    FADD float ptr [ESI + 0x4]          ; 0042441e
    FLD float ptr [EBP + -0x2a]         ; 00424421
    FXCH                                ; 00424424
    FSTP float ptr [EBP + -0x5e]        ; 00424426
    FADD float ptr [ESI + 0x8]          ; 00424429 | DAT_00002424
    PUSH EAX                            ; 0042442c
    FSTP float ptr [EBP + -0x5a]        ; 0042442d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00424430
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00424435
    ADD ESP,0x4                         ; 00424438
    CMP EAX,0x1                         ; 0042443b
    JZ 0x00424464                       ; 0042443e
        ;   XREF to: 00424464 (CONDITIONAL_JUMP)  ; LAB_00424464
    LEA EAX,[EBX + 0x23ac]              ; 00424440
    FLD float ptr [EBP + -0x62]         ; 00424446
    FADD float ptr [EAX]                ; 00424449
    FLD float ptr [EBP + -0x5e]         ; 0042444b
    FXCH                                ; 0042444e
    FSTP float ptr [EBP + -0x62]        ; 00424450
    FADD float ptr [EAX + 0x4]          ; 00424453
    FLD float ptr [EBP + -0x5a]         ; 00424456
    FXCH                                ; 00424459
    FSTP float ptr [EBP + -0x5e]        ; 0042445b
    FADD float ptr [EAX + 0x8]          ; 0042445e
    FSTP float ptr [EBP + -0x5a]        ; 00424461
    LEA EAX,[EBP + -0x62]               ; 00424464
        ;   Label: LAB_00424464
    PUSH EAX                            ; 00424467
    PUSH EBX                            ; 00424468
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 00424469
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0042446e
    LEA EAX,[EBX + 0x158]               ; 00424471
        ;   Label: LAB_00424471
    PUSH EAX                            ; 00424477
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 00424478
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042447d
    PUSH dword ptr [EBP + 0x92]         ; 00424480
    PUSH EBX                            ; 00424486
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 00424487
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0xbe28]    ; 0042448c
    ADD ESP,0x8                         ; 00424492
    TEST EDX,EDX                        ; 00424495
    JNZ 0x00424552                      ; 00424497
        ;   XREF to: 00424552 (CONDITIONAL_JUMP)  ; LAB_00424552
    MOV ECX,dword ptr [0x00822cf0]      ; 0042449d | g_BrideIndices[5]
    PUSH 0x3e4ccccd                     ; 004244a3
    PUSH ECX                            ; 004244a8
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 004244a9
    PUSH ESI                            ; 004244af
    PUSH EBX                            ; 004244b0
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004244b1
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbebc]    ; 004244b6
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004244bc
    ADD ESP,0x10                        ; 004244c3
    TEST EDI,EDI                        ; 004244c6
    JZ 0x004244e5                       ; 004244c8
        ;   XREF to: 004244e5 (CONDITIONAL_JUMP)  ; LAB_004244e5
    MOV EAX,[0x00822ce8]                ; 004244ca | g_BrideIndices[3]
    PUSH 0x3e4ccccd                     ; 004244cf
    PUSH EAX                            ; 004244d4
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 004244d5
    PUSH EDX                            ; 004244db
    PUSH EBX                            ; 004244dc
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004244dd
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 004244e2
    MOV ECX,dword ptr [0x00822cf4]      ; 004244e5 | g_BrideIndices[6]
        ;   Label: LAB_004244e5
    PUSH 0x3e4ccccd                     ; 004244eb
    PUSH ECX                            ; 004244f0
    MOV ESI,dword ptr [EBX + 0xbec4]    ; 004244f1
    PUSH ESI                            ; 004244f7
    PUSH EBX                            ; 004244f8
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 004244f9
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    MOV EAX,dword ptr [EBX + 0xbec4]    ; 004244fe
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00424504
    ADD ESP,0x10                        ; 0042450b
    TEST EDI,EDI                        ; 0042450e
    JZ 0x0042452d                       ; 00424510
        ;   XREF to: 0042452d (CONDITIONAL_JUMP)  ; LAB_0042452d
    MOV EAX,[0x00822cec]                ; 00424512 | g_BrideIndices[4]
    PUSH 0x3e4ccccd                     ; 00424517
    PUSH EAX                            ; 0042451c
    MOV EDX,dword ptr [EBX + 0xbec8]    ; 0042451d
    PUSH EDX                            ; 00424523
    PUSH EBX                            ; 00424524
    CALL core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760 ; 00424525
        ;   XREF to: 0042b760 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnGoreAtBone_FUN_0042b760(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 0042452a
    MOV ECX,dword ptr [0x00822cdc]      ; 0042452d | g_BrideIndices
        ;   Label: LAB_0042452d
    PUSH 0x3f333333                     ; 00424533
    PUSH ECX                            ; 00424538
    MOV ESI,dword ptr [EBX + 0xbedc]    ; 00424539
    PUSH ESI                            ; 0042453f
    PUSH EBX                            ; 00424540
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810 ; 00424541
        ;   XREF to: 0042b810 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00424546
    PUSH EBX                            ; 00424549
    CALL core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670 ; 0042454a
        ;   XREF to: 0042b670 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamageDecals_FUN_0042b670(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042454f
    LEA ESP,[EBP + 0x7a]                ; 00424552
        ;   Label: LAB_00424552
    POP EBP                             ; 00424555
    POP EDI                             ; 00424556
    POP ESI                             ; 00424557
    POP EBX                             ; 00424558
    RET                                 ; 00424559

