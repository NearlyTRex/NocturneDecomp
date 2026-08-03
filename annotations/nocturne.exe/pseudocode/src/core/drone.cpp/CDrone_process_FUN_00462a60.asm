; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_process_FUN_00462a60(CDrone *this_ptr,float delta_time)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xfc]:8  local_fc
; undefined8       Stack[-0xf4]:8  local_f4
; undefined8       Stack[-0xec]:8  local_ec
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined1* switchdataD_00462a30 = 00462ed4
;   TerminatedCString s_s_confused_while_walking_0057dea3
;   TerminatedCString s_s_gave_up_chase_I_m_conf_0057decd
;   TerminatedCString s_drone_attack_wav_0057deee
;   TerminatedCString s_slime_wav_0057df00
;   double DOUBLE_0057df0c = 2
;   double DOUBLE_0057df14 = 3.14159265350000
;   double DOUBLE_0057df1c = 0.5
;   double DOUBLE_0057df24 = 32
;   float FLOAT_0059c6f8 = 3
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CGore* g_CGore_PTR_005b96c4 = 01c78c7c
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CConsole g_CConsole_0077ad0c
;   CDemonSet g_CDemonSet_01e57284
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050
;   core_charactr.cpp_CCharacter_preProcess_FUN_004259a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_charactr.cpp_FUN_004259f0
;   core_charactr.cpp_FUN_00428c00
;   core_charactr.cpp_FUN_0042a150
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
;   core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030
;   core_gore.cpp_CGore_createBloodPool_FUN_004b0480
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462a60
        ;   Label: core_drone.cpp_CDrone_process_FUN_00462a60
    PUSH ESI                            ; 00462a61
    PUSH EDI                            ; 00462a62
    PUSH EBP                            ; 00462a63
    MOV EBP,ESP                         ; 00462a64
    SUB ESP,0xcc                        ; 00462a66
    SUB EBP,0x7a                        ; 00462a6c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00462a6f
    PUSH dword ptr [EBP + 0x92]         ; 00462a75
    PUSH EBX                            ; 00462a7b
    CALL core_charactr.cpp_FUN_004259f0 ; 00462a7c
        ;   XREF to: 004259f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_004259f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462a81
    TEST EAX,EAX                        ; 00462a84
    JZ 0x00462d09                       ; 00462a86
        ;   XREF to: 00462d09 (CONDITIONAL_JUMP)  ; LAB_00462d09
    LEA EAX,[EBX + 0x23a4]              ; 00462a8c
    MOV dword ptr [EAX + 0x8],0x0       ; 00462a92
    FLD float ptr [EBP + 0x92]          ; 00462a99
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462a9f
    MOV dword ptr [EAX + 0x4],EDX       ; 00462aa2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462aa5
    MOV dword ptr [EAX],EDX             ; 00462aa8
    FMUL float ptr [EBX + 0xbc8c]       ; 00462aaa
    LEA ESI,[EBX + 0x150]               ; 00462ab0
    FSTP float ptr [EBP + 0x6a]         ; 00462ab6
    FLD float ptr [EBP + 0x6a]          ; 00462ab9
        ;   Label: LAB_00462ab9
    FLDZ                                ; 00462abc
    FCOMPP                              ; 00462abe
    FNSTSW AX                           ; 00462ac0
    SAHF                                ; 00462ac2
    JC 0x00462d20                       ; 00462ac3
        ;   XREF to: 00462d20 (CONDITIONAL_JUMP)  ; LAB_00462d20
    FLD float ptr [EBX + 0xbc8c]        ; 00462ac9
    FLD float ptr [EBP + 0x92]          ; 00462acf
    FMUL double ptr [0x0057df14]        ; 00462ad5 | DOUBLE_0057df14
    FMULP                               ; 00462adb
    FMUL double ptr [0x0057df1c]        ; 00462add | DOUBLE_0057df1c
    FLD double ptr [0x0057df0c]         ; 00462ae3 | DOUBLE_0057df0c
    FLD float ptr [EBX + 0x23ac]        ; 00462ae9
    FMUL ST1                            ; 00462aef
    FXCH ST2                            ; 00462af1
    FMULP                               ; 00462af3
    PUSH ESI                            ; 00462af5
    FXCH                                ; 00462af6
    FSTP float ptr [EBX + 0x242c]       ; 00462af8
    FSTP float ptr [EBX + 0x2430]       ; 00462afe
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00462b04
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00462b09
    PUSH dword ptr [EBP + 0x92]         ; 00462b0c
    MOV EDI,dword ptr [EAX + 0x24]      ; 00462b12
    PUSH EBX                            ; 00462b15
    MOV dword ptr [EBP + 0x6e],EDI      ; 00462b16
    CALL core_charactr.cpp_FUN_00428c00 ; 00462b19
        ;   XREF to: 00428c00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00428c00(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462b1e
    TEST EAX,EAX                        ; 00462b21
    JZ 0x0046306b                       ; 00462b23
        ;   XREF to: 0046306b (CONDITIONAL_JUMP)  ; LAB_0046306b
    MOV EAX,dword ptr [EBX + 0x25a8]    ; 00462b29
    CMP EAX,0x2                         ; 00462b2f
    JNC 0x00462d5f                      ; 00462b32
        ;   XREF to: 00462d5f (CONDITIONAL_JUMP)  ; LAB_00462d5f
    CMP EAX,0x1                         ; 00462b38
    JNZ 0x00462d6a                      ; 00462b3b
        ;   XREF to: 00462d6a (CONDITIONAL_JUMP)  ; LAB_00462d6a
    PUSH 0x1                            ; 00462b41
        ;   Label: LAB_00462b41
    PUSH 0x1                            ; 00462b43
    LEA EAX,[EBX + 0x150]               ; 00462b45
        ;   Label: LAB_00462b45
    PUSH EAX                            ; 00462b4b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462b4c
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462b51
        ;   Label: LAB_00462b51
    LEA EAX,[EBX + 0x23a4]              ; 00462b54
    MOV dword ptr [EAX + 0x8],0x0       ; 00462b5a
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462b61
    MOV dword ptr [EAX + 0x4],EDX       ; 00462b64
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462b67
    MOV dword ptr [EAX],EDX             ; 00462b6a
    FLD float ptr [EBX + 0xbca0]        ; 00462b6c
        ;   Label: caseD_3
    FLDZ                                ; 00462b72
    FCOMPP                              ; 00462b74
    FNSTSW AX                           ; 00462b76
    SAHF                                ; 00462b78
    JNC 0x00462b8d                      ; 00462b79
        ;   XREF to: 00462b8d (CONDITIONAL_JUMP)  ; LAB_00462b8d
    FLD float ptr [EBX + 0xbca0]        ; 00462b7b
    FSUB float ptr [EBP + 0x92]         ; 00462b81
    FSTP float ptr [EBX + 0xbca0]       ; 00462b87
    CMP dword ptr [EBP + 0x6e],0x1      ; 00462b8d
        ;   Label: LAB_00462b8d
    JNZ 0x004630c7                      ; 00462b91
        ;   XREF to: 004630c7 (CONDITIONAL_JUMP)  ; LAB_004630c7
    PUSH 0x40490000                     ; 00462b97
    PUSH 0x0                            ; 00462b9c
    SUB ESP,0x8                         ; 00462b9e
    FLD float ptr [EBX + 0x28]          ; 00462ba1
    FSTP double ptr [ESP]               ; 00462ba4
    SUB ESP,0x8                         ; 00462ba7
    FLD float ptr [EBX + 0x24]          ; 00462baa
    FSTP double ptr [ESP]               ; 00462bad
    SUB ESP,0x8                         ; 00462bb0
    FLD float ptr [EBX + 0x20]          ; 00462bb3
    FSTP double ptr [ESP]               ; 00462bb6
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880 ; 00462bb9
        ;   XREF to: 00527880 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00527880(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 00462bbe
    TEST EAX,EAX                        ; 00462bc1
    JZ 0x004630c7                       ; 00462bc3
        ;   XREF to: 004630c7 (CONDITIONAL_JUMP)  ; LAB_004630c7
    MOV ESI,dword ptr [EBX + 0xbd34]    ; 00462bc9
    PUSH ESI                            ; 00462bcf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00462bd0
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 00462bd5
    TEST EAX,EAX                        ; 00462bd8
    JZ 0x0046307b                       ; 00462bda
        ;   XREF to: 0046307b (CONDITIONAL_JUMP)  ; LAB_0046307b
    PUSH EBX                            ; 00462be0
        ;   Label: LAB_00462be0
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00425960 ; 00462be1
        ;   XREF to: 00425960 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00425960(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00462be6
    TEST EAX,EAX                        ; 00462be9
    JZ 0x00462cda                       ; 00462beb
        ;   XREF to: 00462cda (CONDITIONAL_JUMP)  ; LAB_00462cda
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00462bf1
    TEST EDI,EDI                        ; 00462bf7
    JZ 0x00462c25                       ; 00462bf9
        ;   XREF to: 00462c25 (CONDITIONAL_JUMP)  ; LAB_00462c25
    PUSH EDI                            ; 00462bfb
    MOV EDX,dword ptr [EDI + 0x14c]     ; 00462bfc
    CALL dword ptr [EDX + 0xec]         ; 00462c02
    ADD ESP,0x4                         ; 00462c08
    CMP EAX,EBX                         ; 00462c0b
    JNZ 0x00462c25                      ; 00462c0d
        ;   XREF to: 00462c25 (CONDITIONAL_JUMP)  ; LAB_00462c25
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00462c0f
    PUSH EAX                            ; 00462c15
    MOV EDX,dword ptr [0x005be368]      ; 00462c16 | g_CDemonSet_PTR_005be368
    PUSH EDX                            ; 00462c1c | g_CDemonSet_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00462c1d
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00511780(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00462c22
    FLD float ptr [EBP + 0x92]          ; 00462c25
        ;   Label: LAB_00462c25
    FLD ST0                             ; 00462c2b
    FMUL double ptr [0x0057df24]        ; 00462c2d | DOUBLE_0057df24
    FLD float ptr [EBX + 0x2424]        ; 00462c33
    FXCH                                ; 00462c39
    FSUBR ST0,ST1                       ; 00462c3b
    LEA EDX,[EBX + 0x2420]              ; 00462c3d
    FSTP ST1                            ; 00462c43
    FSTP float ptr [EBX + 0x2424]       ; 00462c45
    FLD float ptr [EDX]                 ; 00462c4b
    FMUL ST1                            ; 00462c4d
    FSTP float ptr [EBP + 0xe]          ; 00462c4f
    FLD float ptr [EDX + 0x4]           ; 00462c52
    FMUL ST1                            ; 00462c55
    LEA EAX,[EBX + 0x2414]              ; 00462c57
    FSTP float ptr [EBP + 0x12]         ; 00462c5d
    FMUL float ptr [EDX + 0x8]          ; 00462c60
    LEA ESI,[EBX + 0x23a4]              ; 00462c63
    FLD float ptr [EBP + 0xe]           ; 00462c69
    FXCH                                ; 00462c6c
    FSTP float ptr [EBP + 0x16]         ; 00462c6e
    FADD float ptr [EAX]                ; 00462c71
    FLD float ptr [EBP + 0x12]          ; 00462c73
    FXCH                                ; 00462c76
    FSTP float ptr [EBP + 0x1a]         ; 00462c78
    FADD float ptr [EAX + 0x4]          ; 00462c7b
    FLD float ptr [EBP + 0x16]          ; 00462c7e
    FXCH                                ; 00462c81
    FSTP float ptr [EBP + 0x1e]         ; 00462c83
    FADD float ptr [EAX + 0x8]          ; 00462c86
    FLD float ptr [EBP + 0x1a]          ; 00462c89
    FXCH                                ; 00462c8c
    FSTP float ptr [EBP + 0x22]         ; 00462c8e
    FADD float ptr [ESI]                ; 00462c91
    FLD float ptr [EBP + 0x1e]          ; 00462c93
    FXCH                                ; 00462c96
    FSTP float ptr [EBP + 0x4a]         ; 00462c98
    FADD float ptr [ESI + 0x4]          ; 00462c9b
    FLD float ptr [EBP + 0x22]          ; 00462c9e
    FXCH                                ; 00462ca1
    FSTP float ptr [EBP + 0x4e]         ; 00462ca3
    FADD float ptr [ESI + 0x8]          ; 00462ca6
    FSTP float ptr [EBP + 0x52]         ; 00462ca9
    MOV dword ptr [EAX + 0x8],0x0       ; 00462cac
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462cb3
    MOV dword ptr [EAX + 0x4],EDX       ; 00462cb6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462cb9
    MOV dword ptr [EAX],EDX             ; 00462cbc
    MOV dword ptr [ESI + 0x8],0x0       ; 00462cbe
    LEA EAX,[EBP + 0x4a]                ; 00462cc5
    FLD float ptr [ESI + 0x8]           ; 00462cc8
    PUSH EAX                            ; 00462ccb
    FST float ptr [ESI + 0x4]           ; 00462ccc
    PUSH EBX                            ; 00462ccf
    FSTP float ptr [ESI]                ; 00462cd0
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 ; 00462cd2
        ;   XREF to: 00425050 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00462cd7
    PUSH EBX                            ; 00462cda
        ;   Label: LAB_00462cda
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_004259a0 ; 00462cdb
        ;   XREF to: 004259a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_004259a0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00462ce0
    LEA EAX,[EBX + 0x150]               ; 00462ce3
    PUSH EAX                            ; 00462ce9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0 ; 00462cea
        ;   XREF to: 0051b8a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00462cef
    PUSH dword ptr [EBP + 0x92]         ; 00462cf2
    PUSH EBX                            ; 00462cf8
    CALL core_charactr.cpp_FUN_0042a150 ; 00462cf9
        ;   XREF to: 0042a150 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042a150(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462cfe
    LEA ESP,[EBP + 0x7a]                ; 00462d01
    POP EBP                             ; 00462d04
    POP EDI                             ; 00462d05
    POP ESI                             ; 00462d06
    POP EBX                             ; 00462d07
    RET                                 ; 00462d08
    MOV EDX,dword ptr [EBX + 0xbd34]    ; 00462d09
        ;   Label: LAB_00462d09
    PUSH EDX                            ; 00462d0f
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00462d10
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 00462d15
    LEA ESP,[EBP + 0x7a]                ; 00462d18
    POP EBP                             ; 00462d1b
    POP EDI                             ; 00462d1c
    POP ESI                             ; 00462d1d
    POP EBX                             ; 00462d1e
    RET                                 ; 00462d1f
    LEA EAX,[EBP + 0x6a]                ; 00462d20
        ;   Label: LAB_00462d20
    PUSH EAX                            ; 00462d23
    PUSH ESI                            ; 00462d24
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 00462d25
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00462d2a
    PUSH EAX                            ; 00462d2d
    PUSH EBX                            ; 00462d2e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 ; 00462d2f
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042add0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00462d34
    JMP 0x00462ab9                      ; 00462d37
        ;   XREF to: 00462ab9 (UNCONDITIONAL_JUMP)  ; LAB_00462ab9
    PUSH 0x1                            ; 00462d3c
        ;   Label: LAB_00462d3c
    PUSH 0x0                            ; 00462d3e
    PUSH ESI                            ; 00462d40
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462d41
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462d46
    PUSH EBX                            ; 00462d49
    PUSH 0x57dea3                       ; 00462d4a | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005ad350]                ; 00462d4f | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 00462d54 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00462d55
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    JMP 0x00462b51                      ; 00462d5a
        ;   XREF to: 00462b51 (UNCONDITIONAL_JUMP)  ; LAB_00462b51
    JBE 0x00462b41                      ; 00462d5f
        ;   XREF to: 00462b41 (CONDITIONAL_JUMP)  ; LAB_00462b41
        ;   Label: LAB_00462d5f
    CMP EAX,0x3                         ; 00462d65
    JZ 0x00462d3c                       ; 00462d68
        ;   XREF to: 00462d3c (CONDITIONAL_JUMP)  ; LAB_00462d3c
    PUSH 0x1                            ; 00462d6a
        ;   Label: LAB_00462d6a
    PUSH 0x0                            ; 00462d6c
    JMP 0x00462b45                      ; 00462d6e
        ;   XREF to: 00462b45 (UNCONDITIONAL_JUMP)  ; LAB_00462b45
    CMP dword ptr [EBX + 0x2408],0x0    ; 00462d73
        ;   Label: caseD_9
    JZ 0x00462b6c                       ; 00462d7a
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00462d80
    PUSH 0xa                            ; 00462d82
    PUSH ESI                            ; 00462d84
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462d85
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462d8a
    JMP 0x00462b6c                      ; 00462d8d
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x52]               ; 00462d92
        ;   Label: caseD_2
    PUSH EAX                            ; 00462d95
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0 ; 00462d96
        ;   XREF to: 00423ed0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00462d9b
    PUSH 0x41700000                     ; 00462d9e
    PUSH 0x41200000                     ; 00462da3
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00462da8
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00462dad
    MOV dword ptr [EBP + -0x1e],EBX     ; 00462db0
    MOV dword ptr [EBP + -0x1a],EBX     ; 00462db3
    ADD ESP,0x8                         ; 00462db6
    FLD float ptr [EBP + 0x76]          ; 00462db9
    LEA EAX,[EBP + -0x52]               ; 00462dbc
    FSTP float ptr [EBP + -0x4e]        ; 00462dbf
    MOV EDX,dword ptr [EBX + 0xbd28]    ; 00462dc2
    PUSH EAX                            ; 00462dc8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00462dc9
    SUB EAX,EDX                         ; 00462dd0
    LEA ESI,[EBX + 0xfd0]               ; 00462dd2
    SHL EAX,0x4                         ; 00462dd8
    ADD EAX,ESI                         ; 00462ddb
    PUSH 0x3ecccccd                     ; 00462ddd
    PUSH EAX                            ; 00462de2
    PUSH 0x2dd1184                      ; 00462de3 | DAT_02dd1184
    LEA EAX,[EBP + 0x2]                 ; 00462de8
    PUSH EAX                            ; 00462deb
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00462dec
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00462df1
    PUSH EAX                            ; 00462df4
    LEA EAX,[EBP + 0x32]                ; 00462df5
    PUSH EAX                            ; 00462df8
    PUSH EBX                            ; 00462df9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00462dfa
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00462dff
    PUSH EAX                            ; 00462e02
    PUSH EBX                            ; 00462e03
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00462e04
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00462e09
    PUSH 0x41700000                     ; 00462e0c
    PUSH 0x41200000                     ; 00462e11
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00462e16
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 00462e1b
    MOV dword ptr [EBP + -0x1e],EBX     ; 00462e1e
    MOV dword ptr [EBP + -0x1a],EBX     ; 00462e21
    ADD ESP,0x8                         ; 00462e24
    FLD float ptr [EBP + 0x76]          ; 00462e27
    LEA EAX,[EBP + -0x52]               ; 00462e2a
    FSTP float ptr [EBP + -0x4e]        ; 00462e2d
    MOV EDX,dword ptr [EBX + 0xbd2c]    ; 00462e30
    PUSH EAX                            ; 00462e36
    LEA EAX,[EDX*0x4 + 0x0]             ; 00462e37
    SUB EAX,EDX                         ; 00462e3e
    SHL EAX,0x4                         ; 00462e40
    ADD EAX,ESI                         ; 00462e43
    PUSH 0x3ecccccd                     ; 00462e45
    PUSH EAX                            ; 00462e4a
    PUSH 0x2dd1184                      ; 00462e4b | DAT_02dd1184
    LEA EAX,[EBP + 0x3e]                ; 00462e50
    PUSH EAX                            ; 00462e53
    CALL core_xform.cpp_transformVector3x4_FUN_0055a8b0 ; 00462e54
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_0055a8b0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 00462e59
    PUSH EAX                            ; 00462e5c
    LEA EAX,[EBP + 0x56]                ; 00462e5d
    PUSH EAX                            ; 00462e60
    PUSH EBX                            ; 00462e61
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00462e62
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00462e67
    PUSH EAX                            ; 00462e6a
    PUSH EBX                            ; 00462e6b
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0 ; 00462e6c
        ;   XREF to: 004798e0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00462e71
    JMP 0x00462b6c                      ; 00462e74
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xbc90],0x0    ; 00462e79
        ;   Label: caseD_8
    JNZ 0x00462b6c                      ; 00462e80
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00462e86
    TEST EAX,EAX                        ; 00462e8c
    JNZ 0x00462b6c                      ; 00462e8e
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 00462e94
    LEA EAX,[EBP + -0x16]               ; 00462e95
    PUSH EAX                            ; 00462e98
    PUSH ESI                            ; 00462e99
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00462e9a
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00462e9f
    PUSH EAX                            ; 00462ea2
    LEA EAX,[EBP + -0xa]                ; 00462ea3
    PUSH EAX                            ; 00462ea6
    PUSH EBX                            ; 00462ea7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00462ea8
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00462ead
    PUSH 0x1                            ; 00462eb0
    LEA EAX,[EBP + -0xa]                ; 00462eb2
    PUSH EAX                            ; 00462eb5
    MOV EDX,dword ptr [0x005b96c4]      ; 00462eb6 | g_CGore_PTR_005b96c4
    PUSH EDX                            ; 00462ebc
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004b0480 ; 00462ebd
        ;   XREF to: 004b0480 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004b0480(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 00462ec2
    MOV dword ptr [EBX + 0xbc90],0x1    ; 00462ec5
    JMP 0x00462b6c                      ; 00462ecf
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00462ed4
        ;   Label: caseD_0
    PUSH EBX                            ; 00462eda
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00462edb
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462ee0
    TEST EAX,EAX                        ; 00462ee3
    JZ 0x00462ef9                       ; 00462ee5
        ;   XREF to: 00462ef9 (CONDITIONAL_JUMP)  ; LAB_00462ef9
    PUSH 0x1                            ; 00462ee7
    PUSH 0x1                            ; 00462ee9
    PUSH ESI                            ; 00462eeb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462eec
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462ef1
    JMP 0x00462b6c                      ; 00462ef4
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00462ef9
        ;   Label: LAB_00462ef9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00462eff
    PUSH EBX                            ; 00462f05
    CALL dword ptr [EAX + 0x13c]        ; 00462f06
    MOV EDI,dword ptr [EBX + 0xbca4]    ; 00462f0c
    ADD ESP,0x8                         ; 00462f12
    TEST EDI,EDI                        ; 00462f15
    JZ 0x00462b6c                       ; 00462f17
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00462f1d
    PUSH 0x1                            ; 00462f1f
    PUSH ESI                            ; 00462f21
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462f22
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462f27
    JMP 0x00462b6c                      ; 00462f2a
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 00462f2f
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00462f35
    PUSH EBX                            ; 00462f3b
    CALL dword ptr [EAX + 0x13c]        ; 00462f3c
    MOV ECX,dword ptr [EBX + 0xbca4]    ; 00462f42
    ADD ESP,0x8                         ; 00462f48
    TEST ECX,ECX                        ; 00462f4b
    JNZ 0x00462f77                      ; 00462f4d
        ;   XREF to: 00462f77 (CONDITIONAL_JUMP)  ; LAB_00462f77
    PUSH dword ptr [EBP + 0x92]         ; 00462f4f
    PUSH EBX                            ; 00462f55
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030 ; 00462f56
        ;   XREF to: 0047a030 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_0047a030(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00462f5b
    TEST EAX,EAX                        ; 00462f5e
    JNZ 0x00462b6c                      ; 00462f60
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00462f66
    PUSH EAX                            ; 00462f68
    PUSH ESI                            ; 00462f69
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462f6a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00462f6f
    JMP 0x00462b6c                      ; 00462f72
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0059c6f8]                ; 00462f77 | FLOAT_0059c6f8
        ;   Label: LAB_00462f77
    PUSH 0x3e32b8c2                     ; 00462f7c
    MOV dword ptr [EBP + 0x72],EAX      ; 00462f81
    LEA EAX,[EBX + 0x23a4]              ; 00462f84
    PUSH 0x3f000000                     ; 00462f8a
    MOV dword ptr [EAX + 0x8],0x0       ; 00462f8f
    XOR EDI,EDI                         ; 00462f96
    MOV EDX,dword ptr [EAX + 0x8]       ; 00462f98
    MOV dword ptr [EAX + 0x4],EDX       ; 00462f9b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00462f9e
    MOV dword ptr [EAX],EDX             ; 00462fa1
    MOV EAX,dword ptr [EBP + 0x72]      ; 00462fa3
    MOV dword ptr [EBP + 0x26],EDI      ; 00462fa6
    MOV dword ptr [EBP + 0x2e],EAX      ; 00462fa9
    LEA EAX,[EBP + 0x26]                ; 00462fac
    MOV dword ptr [EBP + 0x2a],EDI      ; 00462faf
    PUSH EAX                            ; 00462fb2
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00462fb3
    PUSH EAX                            ; 00462fb9
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00462fba
    CALL dword ptr [EDX + 0xbc]         ; 00462fc0
    ADD ESP,0x4                         ; 00462fc6
    PUSH EAX                            ; 00462fc9
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 00462fca
    ADD EAX,0x20                        ; 00462fd0
    PUSH EAX                            ; 00462fd3
    PUSH EBX                            ; 00462fd4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00462fd5
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00462fda
    TEST EAX,EAX                        ; 00462fdd
    JL 0x00463045                       ; 00462fdf
        ;   XREF to: 00463045 (CONDITIONAL_JUMP)  ; LAB_00463045
    JLE 0x00462b6c                      ; 00462fe1
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xbca0]        ; 00462fe7
    FLDZ                                ; 00462fed
    FCOMPP                              ; 00462fef
    FNSTSW AX                           ; 00462ff1
    SAHF                                ; 00462ff3
    JC 0x00462b6c                       ; 00462ff4
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 00462ffa
    PUSH 0x2                            ; 00462ffc
    PUSH ESI                            ; 00462ffe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00462fff
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463004
    MOV EDX,dword ptr [EBX + 0xbd38]    ; 00463007
    PUSH EDX                            ; 0046300d
    MOV dword ptr [EBX + 0xbca0],0x3f800000 ; 0046300e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00463018
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0046301d
    TEST EAX,EAX                        ; 00463020
    JNZ 0x00462b6c                      ; 00463022
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x57deee                       ; 00463028 | = "drone-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0046302d
    PUSH EBX                            ; 00463033
    CALL dword ptr [EAX + 0x24]         ; 00463034
    ADD ESP,0x8                         ; 00463037
    MOV dword ptr [EBX + 0xbd38],EAX    ; 0046303a
    JMP 0x00462b6c                      ; 00463040
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 00463045
        ;   Label: LAB_00463045
    PUSH 0x57decd                       ; 00463046 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0046304b | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 00463051 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00463052
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00463057
    PUSH 0x1                            ; 0046305a
    PUSH EDI                            ; 0046305c
    PUSH ESI                            ; 0046305d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0046305e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463063
    JMP 0x00462b6c                      ; 00463066
        ;   XREF to: 00462b6c (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EDI,0x9                         ; 0046306b
        ;   Label: LAB_0046306b
    JA 0x00462b6c                       ; 0046306e
        ;   XREF to: 00462b6c (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x462a30]  ; 00463074 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 0046307b
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_0046307b
    PUSH 0x2                            ; 00463080
    PUSH 0x3f800000                     ; 00463082
    PUSH 0x0                            ; 00463087
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00463089
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    ADD ESP,0x8                         ; 0046308e
    MOV dword ptr [EBP + 0x76],EAX      ; 00463091
    SUB ESP,0x8                         ; 00463094
    FLD float ptr [EBP + 0x76]          ; 00463097
    FSTP double ptr [ESP]               ; 0046309a
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0 ; 0046309d
        ;   XREF to: 005262d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 004630a2
    PUSH 0x57df00                       ; 004630a5 | = "slime.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004630aa
    PUSH EBX                            ; 004630b0
    CALL dword ptr [EAX + 0x28]         ; 004630b1
    ADD ESP,0x8                         ; 004630b4
    MOV dword ptr [EBX + 0xbd34],EAX    ; 004630b7
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004630bd
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    JMP 0x00462be0                      ; 004630c2
        ;   XREF to: 00462be0 (UNCONDITIONAL_JUMP)  ; LAB_00462be0
    MOV ECX,dword ptr [EBX + 0xbd34]    ; 004630c7
        ;   Label: LAB_004630c7
    PUSH ECX                            ; 004630cd
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004630ce
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004630d3
    JMP 0x00462be0                      ; 004630d6
        ;   XREF to: 00462be0 (UNCONDITIONAL_JUMP)  ; LAB_00462be0

