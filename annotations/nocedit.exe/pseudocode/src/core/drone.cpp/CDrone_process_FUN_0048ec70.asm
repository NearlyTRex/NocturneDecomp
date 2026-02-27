; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_process_FUN_0048ec70(CDrone *this_ptr,float delta_time)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0xfc]:8  local_fc
; undefined8       Stack[-0xf4]:8  local_f4
; undefined8       Stack[-0xec]:8  local_ec
; undefined1       Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x94]:1  local_94
; undefined1       Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   void* switchdataD_0048ec40 = 0048f0e4
;   TerminatedCString s_s_confused_while_walking_00622385
;   TerminatedCString s_s_gave_up_chase_I_m_conf_006223af
;   TerminatedCString s_drone_attack_wav_006223d0
;   TerminatedCString s_slime_wav_006223e2
;   double DOUBLE_006223ec = 2
;   double DOUBLE_006223f4 = 3.14159265350000
;   double DOUBLE_006223fc = 0.5
;   double DOUBLE_00622404 = 32
;   float FLOAT_0065d0a8 = 3
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGore* g_CGorePtr = 02d83364
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_CConsoleInstance
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_enemy.cpp_CEnemy_FUN_004a9880
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_gore.cpp_CGore_createBloodPool_FUN_004ede30
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ec70
        ;   Label: core_drone.cpp_CDrone_process_FUN_0048ec70
    PUSH ESI                            ; 0048ec71
    PUSH EDI                            ; 0048ec72
    PUSH EBP                            ; 0048ec73
    MOV EBP,ESP                         ; 0048ec74
    SUB ESP,0xcc                        ; 0048ec76
    SUB EBP,0x7a                        ; 0048ec7c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0048ec7f
    PUSH dword ptr [EBP + 0x92]         ; 0048ec85
    PUSH EBX                            ; 0048ec8b
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 0048ec8c
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0048ec91
    TEST EAX,EAX                        ; 0048ec94
    JZ 0x0048ef19                       ; 0048ec96
        ;   XREF to: 0048ef19 (CONDITIONAL_JUMP)  ; LAB_0048ef19
    LEA EAX,[EBX + 0x23ac]              ; 0048ec9c
    MOV dword ptr [EAX + 0x8],0x0       ; 0048eca2
    FLD float ptr [EBP + 0x92]          ; 0048eca9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048ecaf
    MOV dword ptr [EAX + 0x4],EDX       ; 0048ecb2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048ecb5
    MOV dword ptr [EAX],EDX             ; 0048ecb8
    FMUL float ptr [EBX + 0xbe24]       ; 0048ecba
    LEA ESI,[EBX + 0x158]               ; 0048ecc0
    FSTP float ptr [EBP + 0x6a]         ; 0048ecc6
    FLD float ptr [EBP + 0x6a]          ; 0048ecc9
        ;   Label: LAB_0048ecc9
    FLDZ                                ; 0048eccc
    FCOMPP                              ; 0048ecce
    FNSTSW AX                           ; 0048ecd0
    SAHF                                ; 0048ecd2
    JC 0x0048ef30                       ; 0048ecd3
        ;   XREF to: 0048ef30 (CONDITIONAL_JUMP)  ; LAB_0048ef30
    FLD float ptr [EBX + 0xbe24]        ; 0048ecd9
    FLD float ptr [EBP + 0x92]          ; 0048ecdf
    FMUL double ptr [0x006223f4]        ; 0048ece5 | DOUBLE_006223f4
    FMULP                               ; 0048eceb
    FMUL double ptr [0x006223fc]        ; 0048eced | DOUBLE_006223fc
    FLD double ptr [0x006223ec]         ; 0048ecf3 | DOUBLE_006223ec
    FLD float ptr [EBX + 0x23b4]        ; 0048ecf9
    FMUL ST1                            ; 0048ecff
    FXCH ST2                            ; 0048ed01
    FMULP                               ; 0048ed03
    PUSH ESI                            ; 0048ed05
    FXCH                                ; 0048ed06
    FSTP float ptr [EBX + 0x2434]       ; 0048ed08
    FSTP float ptr [EBX + 0x2438]       ; 0048ed0e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0048ed14
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0048ed19
    PUSH dword ptr [EBP + 0x92]         ; 0048ed1c
    MOV EDI,dword ptr [EAX + 0x24]      ; 0048ed22
    PUSH EBX                            ; 0048ed25
    MOV dword ptr [EBP + 0x6e],EDI      ; 0048ed26
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 0048ed29
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0048ed2e
    TEST EAX,EAX                        ; 0048ed31
    JZ 0x0048f27b                       ; 0048ed33
        ;   XREF to: 0048f27b (CONDITIONAL_JUMP)  ; LAB_0048f27b
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0048ed39
    CMP EAX,0x2                         ; 0048ed3f
    JNC 0x0048ef6f                      ; 0048ed42
        ;   XREF to: 0048ef6f (CONDITIONAL_JUMP)  ; LAB_0048ef6f
    CMP EAX,0x1                         ; 0048ed48
    JNZ 0x0048ef7a                      ; 0048ed4b
        ;   XREF to: 0048ef7a (CONDITIONAL_JUMP)  ; LAB_0048ef7a
    PUSH 0x1                            ; 0048ed51
        ;   Label: LAB_0048ed51
    PUSH 0x1                            ; 0048ed53
    LEA EAX,[EBX + 0x158]               ; 0048ed55
        ;   Label: LAB_0048ed55
    PUSH EAX                            ; 0048ed5b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048ed5c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048ed61
        ;   Label: LAB_0048ed61
    LEA EAX,[EBX + 0x23ac]              ; 0048ed64
    MOV dword ptr [EAX + 0x8],0x0       ; 0048ed6a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048ed71
    MOV dword ptr [EAX + 0x4],EDX       ; 0048ed74
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048ed77
    MOV dword ptr [EAX],EDX             ; 0048ed7a
    FLD float ptr [EBX + 0xbe38]        ; 0048ed7c
        ;   Label: caseD_3
    FLDZ                                ; 0048ed82
    FCOMPP                              ; 0048ed84
    FNSTSW AX                           ; 0048ed86
    SAHF                                ; 0048ed88
    JNC 0x0048ed9d                      ; 0048ed89
        ;   XREF to: 0048ed9d (CONDITIONAL_JUMP)  ; LAB_0048ed9d
    FLD float ptr [EBX + 0xbe38]        ; 0048ed8b
    FSUB float ptr [EBP + 0x92]         ; 0048ed91
    FSTP float ptr [EBX + 0xbe38]       ; 0048ed97
    CMP dword ptr [EBP + 0x6e],0x1      ; 0048ed9d
        ;   Label: LAB_0048ed9d
    JNZ 0x0048f2d7                      ; 0048eda1
        ;   XREF to: 0048f2d7 (CONDITIONAL_JUMP)  ; LAB_0048f2d7
    PUSH 0x40490000                     ; 0048eda7
    PUSH 0x0                            ; 0048edac
    SUB ESP,0x8                         ; 0048edae
    FLD float ptr [EBX + 0x28]          ; 0048edb1
    FSTP double ptr [ESP]               ; 0048edb4
    SUB ESP,0x8                         ; 0048edb7
    FLD float ptr [EBX + 0x24]          ; 0048edba
    FSTP double ptr [ESP]               ; 0048edbd
    SUB ESP,0x8                         ; 0048edc0
    FLD float ptr [EBX + 0x20]          ; 0048edc3
    FSTP double ptr [ESP]               ; 0048edc6
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 0048edc9
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 0048edce
    TEST EAX,EAX                        ; 0048edd1
    JZ 0x0048f2d7                       ; 0048edd3
        ;   XREF to: 0048f2d7 (CONDITIONAL_JUMP)  ; LAB_0048f2d7
    MOV ESI,dword ptr [EBX + 0xbecc]    ; 0048edd9
    PUSH ESI                            ; 0048eddf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0048ede0
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0048ede5
    TEST EAX,EAX                        ; 0048ede8
    JZ 0x0048f28b                       ; 0048edea
        ;   XREF to: 0048f28b (CONDITIONAL_JUMP)  ; LAB_0048f28b
    PUSH EBX                            ; 0048edf0
        ;   Label: LAB_0048edf0
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0 ; 0048edf1
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0048edf6
    TEST EAX,EAX                        ; 0048edf9
    JZ 0x0048eeea                       ; 0048edfb
        ;   XREF to: 0048eeea (CONDITIONAL_JUMP)  ; LAB_0048eeea
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0048ee01
    TEST EDI,EDI                        ; 0048ee07
    JZ 0x0048ee35                       ; 0048ee09
        ;   XREF to: 0048ee35 (CONDITIONAL_JUMP)  ; LAB_0048ee35
    PUSH EDI                            ; 0048ee0b
    MOV EDX,dword ptr [EDI + 0x154]     ; 0048ee0c
    CALL dword ptr [EDX + 0x108]        ; 0048ee12
    ADD ESP,0x4                         ; 0048ee18
    CMP EAX,EBX                         ; 0048ee1b
    JNZ 0x0048ee35                      ; 0048ee1d
        ;   XREF to: 0048ee35 (CONDITIONAL_JUMP)  ; LAB_0048ee35
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0048ee1f
    PUSH EAX                            ; 0048ee25
    MOV EDX,dword ptr [0x006810c8]      ; 0048ee26 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EDX                            ; 0048ee2c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 0048ee2d
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0048ee32
    FLD float ptr [EBP + 0x92]          ; 0048ee35
        ;   Label: LAB_0048ee35
    FLD ST0                             ; 0048ee3b
    FMUL double ptr [0x00622404]        ; 0048ee3d | DOUBLE_00622404
    FLD float ptr [EBX + 0x242c]        ; 0048ee43
    FXCH                                ; 0048ee49
    FSUBR ST0,ST1                       ; 0048ee4b
    LEA EDX,[EBX + 0x2428]              ; 0048ee4d
    FSTP ST1                            ; 0048ee53
    FSTP float ptr [EBX + 0x242c]       ; 0048ee55
    FLD float ptr [EDX]                 ; 0048ee5b
    FMUL ST1                            ; 0048ee5d
    FSTP float ptr [EBP + 0xe]          ; 0048ee5f
    FLD float ptr [EDX + 0x4]           ; 0048ee62
    FMUL ST1                            ; 0048ee65
    LEA EAX,[EBX + 0x241c]              ; 0048ee67
    FSTP float ptr [EBP + 0x12]         ; 0048ee6d
    FMUL float ptr [EDX + 0x8]          ; 0048ee70
    LEA ESI,[EBX + 0x23ac]              ; 0048ee73
    FLD float ptr [EBP + 0xe]           ; 0048ee79
    FXCH                                ; 0048ee7c
    FSTP float ptr [EBP + 0x16]         ; 0048ee7e
    FADD float ptr [EAX]                ; 0048ee81
    FLD float ptr [EBP + 0x12]          ; 0048ee83
    FXCH                                ; 0048ee86
    FSTP float ptr [EBP + 0x1a]         ; 0048ee88
    FADD float ptr [EAX + 0x4]          ; 0048ee8b
    FLD float ptr [EBP + 0x16]          ; 0048ee8e
    FXCH                                ; 0048ee91
    FSTP float ptr [EBP + 0x1e]         ; 0048ee93
    FADD float ptr [EAX + 0x8]          ; 0048ee96 | DAT_00002424
    FLD float ptr [EBP + 0x1a]          ; 0048ee99
    FXCH                                ; 0048ee9c
    FSTP float ptr [EBP + 0x22]         ; 0048ee9e
    FADD float ptr [ESI]                ; 0048eea1
    FLD float ptr [EBP + 0x1e]          ; 0048eea3
    FXCH                                ; 0048eea6
    FSTP float ptr [EBP + 0x4a]         ; 0048eea8
    FADD float ptr [ESI + 0x4]          ; 0048eeab
    FLD float ptr [EBP + 0x22]          ; 0048eeae
    FXCH                                ; 0048eeb1
    FSTP float ptr [EBP + 0x4e]         ; 0048eeb3
    FADD float ptr [ESI + 0x8]          ; 0048eeb6
    FSTP float ptr [EBP + 0x52]         ; 0048eeb9
    MOV dword ptr [EAX + 0x8],0x0       ; 0048eebc | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048eec3 | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 0048eec6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048eec9
    MOV dword ptr [EAX],EDX             ; 0048eecc
    MOV dword ptr [ESI + 0x8],0x0       ; 0048eece
    LEA EAX,[EBP + 0x4a]                ; 0048eed5
    FLD float ptr [ESI + 0x8]           ; 0048eed8
    PUSH EAX                            ; 0048eedb
    FST float ptr [ESI + 0x4]           ; 0048eedc
    PUSH EBX                            ; 0048eedf
    FSTP float ptr [ESI]                ; 0048eee0
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 0048eee2
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0048eee7
    PUSH EBX                            ; 0048eeea
        ;   Label: LAB_0048eeea
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 0048eeeb
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0048eef0
    LEA EAX,[EBX + 0x158]               ; 0048eef3
    PUSH EAX                            ; 0048eef9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 0048eefa
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048eeff
    PUSH dword ptr [EBP + 0x92]         ; 0048ef02
    PUSH EBX                            ; 0048ef08
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 0048ef09
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 0048ef0e
    LEA ESP,[EBP + 0x7a]                ; 0048ef11
    POP EBP                             ; 0048ef14
    POP EDI                             ; 0048ef15
    POP ESI                             ; 0048ef16
    POP EBX                             ; 0048ef17
    RET                                 ; 0048ef18
    MOV EDX,dword ptr [EBX + 0xbecc]    ; 0048ef19
        ;   Label: LAB_0048ef19
    PUSH EDX                            ; 0048ef1f
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048ef20
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048ef25
    LEA ESP,[EBP + 0x7a]                ; 0048ef28
    POP EBP                             ; 0048ef2b
    POP EDI                             ; 0048ef2c
    POP ESI                             ; 0048ef2d
    POP EBX                             ; 0048ef2e
    RET                                 ; 0048ef2f
    LEA EAX,[EBP + 0x6a]                ; 0048ef30
        ;   Label: LAB_0048ef30
    PUSH EAX                            ; 0048ef33
    PUSH ESI                            ; 0048ef34
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 0048ef35
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 0048ef3a
    PUSH EAX                            ; 0048ef3d
    PUSH EBX                            ; 0048ef3e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 0048ef3f
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0048ef44
    JMP 0x0048ecc9                      ; 0048ef47
        ;   XREF to: 0048ecc9 (UNCONDITIONAL_JUMP)  ; LAB_0048ecc9
    PUSH 0x1                            ; 0048ef4c
        ;   Label: LAB_0048ef4c
    PUSH 0x0                            ; 0048ef4e
    PUSH ESI                            ; 0048ef50
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048ef51
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048ef56
    PUSH EBX                            ; 0048ef59
    PUSH 0x622385                       ; 0048ef5a | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x0066e8e0]                ; 0048ef5f | g_CConsolePtr
    PUSH EAX                            ; 0048ef64 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0048ef65
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x0048ed61                      ; 0048ef6a
        ;   XREF to: 0048ed61 (UNCONDITIONAL_JUMP)  ; LAB_0048ed61
    JBE 0x0048ed51                      ; 0048ef6f
        ;   XREF to: 0048ed51 (CONDITIONAL_JUMP)  ; LAB_0048ed51
        ;   Label: LAB_0048ef6f
    CMP EAX,0x3                         ; 0048ef75
    JZ 0x0048ef4c                       ; 0048ef78
        ;   XREF to: 0048ef4c (CONDITIONAL_JUMP)  ; LAB_0048ef4c
    PUSH 0x1                            ; 0048ef7a
        ;   Label: LAB_0048ef7a
    PUSH 0x0                            ; 0048ef7c
    JMP 0x0048ed55                      ; 0048ef7e
        ;   XREF to: 0048ed55 (UNCONDITIONAL_JUMP)  ; LAB_0048ed55
    CMP dword ptr [EBX + 0x2410],0x0    ; 0048ef83
        ;   Label: caseD_9
    JZ 0x0048ed7c                       ; 0048ef8a
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0048ef90
    PUSH 0xa                            ; 0048ef92
    PUSH ESI                            ; 0048ef94
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048ef95
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048ef9a
    JMP 0x0048ed7c                      ; 0048ef9d
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + -0x52]               ; 0048efa2
        ;   Label: caseD_2
    PUSH EAX                            ; 0048efa5
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 0048efa6
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0048efab
    PUSH 0x41700000                     ; 0048efae
    PUSH 0x41200000                     ; 0048efb3
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048efb8
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0048efbd
    MOV dword ptr [EBP + -0x1e],EBX     ; 0048efc0
    MOV dword ptr [EBP + -0x1a],EBX     ; 0048efc3
    ADD ESP,0x8                         ; 0048efc6
    FLD float ptr [EBP + 0x76]          ; 0048efc9
    LEA EAX,[EBP + -0x52]               ; 0048efcc
    FSTP float ptr [EBP + -0x4e]        ; 0048efcf
    MOV EDX,dword ptr [EBX + 0xbec0]    ; 0048efd2
    PUSH EAX                            ; 0048efd8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048efd9
    SUB EAX,EDX                         ; 0048efe0
    LEA ESI,[EBX + 0xfd8]               ; 0048efe2
    SHL EAX,0x4                         ; 0048efe8
    ADD EAX,ESI                         ; 0048efeb
    PUSH 0x3ecccccd                     ; 0048efed
    PUSH EAX                            ; 0048eff2
    PUSH 0x3f87558                      ; 0048eff3 | g_ZeroVector
    LEA EAX,[EBP + 0x2]                 ; 0048eff8
    PUSH EAX                            ; 0048effb
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0048effc
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0048f001
    PUSH EAX                            ; 0048f004
    LEA EAX,[EBP + 0x32]                ; 0048f005
    PUSH EAX                            ; 0048f008
    PUSH EBX                            ; 0048f009
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0048f00a
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0048f00f
    PUSH EAX                            ; 0048f012
    PUSH EBX                            ; 0048f013
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 0048f014
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 0048f019
    PUSH 0x41700000                     ; 0048f01c
    PUSH 0x41200000                     ; 0048f021
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048f026
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0048f02b
    MOV dword ptr [EBP + -0x1e],EBX     ; 0048f02e
    MOV dword ptr [EBP + -0x1a],EBX     ; 0048f031
    ADD ESP,0x8                         ; 0048f034
    FLD float ptr [EBP + 0x76]          ; 0048f037
    LEA EAX,[EBP + -0x52]               ; 0048f03a
    FSTP float ptr [EBP + -0x4e]        ; 0048f03d
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 0048f040
    PUSH EAX                            ; 0048f046
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048f047
    SUB EAX,EDX                         ; 0048f04e
    SHL EAX,0x4                         ; 0048f050
    ADD EAX,ESI                         ; 0048f053
    PUSH 0x3ecccccd                     ; 0048f055
    PUSH EAX                            ; 0048f05a
    PUSH 0x3f87558                      ; 0048f05b | g_ZeroVector
    LEA EAX,[EBP + 0x3e]                ; 0048f060
    PUSH EAX                            ; 0048f063
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0048f064
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0048f069
    PUSH EAX                            ; 0048f06c
    LEA EAX,[EBP + 0x56]                ; 0048f06d
    PUSH EAX                            ; 0048f070
    PUSH EBX                            ; 0048f071
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0048f072
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0048f077
    PUSH EAX                            ; 0048f07a
    PUSH EBX                            ; 0048f07b
    CALL core_enemy.cpp_CEnemy_FUN_004a9880 ; 0048f07c
        ;   XREF to: 004a9880 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9880(CEnemy * this_ptr)
    ADD ESP,0x10                        ; 0048f081
    JMP 0x0048ed7c                      ; 0048f084
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xbe28],0x0    ; 0048f089
        ;   Label: caseD_8
    JNZ 0x0048ed7c                      ; 0048f090
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0048f096
    TEST EAX,EAX                        ; 0048f09c
    JNZ 0x0048ed7c                      ; 0048f09e
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0048f0a4
    LEA EAX,[EBP + -0x16]               ; 0048f0a5
    PUSH EAX                            ; 0048f0a8
    PUSH ESI                            ; 0048f0a9
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 0048f0aa
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0048f0af
    PUSH EAX                            ; 0048f0b2
    LEA EAX,[EBP + -0xa]                ; 0048f0b3
    PUSH EAX                            ; 0048f0b6
    PUSH EBX                            ; 0048f0b7
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0048f0b8
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0048f0bd
    PUSH 0x1                            ; 0048f0c0
    LEA EAX,[EBP + -0xa]                ; 0048f0c2
    PUSH EAX                            ; 0048f0c5
    MOV EDX,dword ptr [0x0067b9a0]      ; 0048f0c6 | g_CGorePtr | g_CGoreInstance
    PUSH EDX                            ; 0048f0cc | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 0048f0cd
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 0048f0d2
    MOV dword ptr [EBX + 0xbe28],0x1    ; 0048f0d5
    JMP 0x0048ed7c                      ; 0048f0df
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0048f0e4
        ;   Label: caseD_0
    PUSH EBX                            ; 0048f0ea
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0048f0eb
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0048f0f0
    TEST EAX,EAX                        ; 0048f0f3
    JZ 0x0048f109                       ; 0048f0f5
        ;   XREF to: 0048f109 (CONDITIONAL_JUMP)  ; LAB_0048f109
    PUSH 0x1                            ; 0048f0f7
    PUSH 0x1                            ; 0048f0f9
    PUSH ESI                            ; 0048f0fb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f0fc
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f101
    JMP 0x0048ed7c                      ; 0048f104
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0048f109
        ;   Label: LAB_0048f109
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f10f
    PUSH EBX                            ; 0048f115
    CALL dword ptr [EAX + 0x158]        ; 0048f116
    MOV EDI,dword ptr [EBX + 0xbe3c]    ; 0048f11c
    ADD ESP,0x8                         ; 0048f122
    TEST EDI,EDI                        ; 0048f125
    JZ 0x0048ed7c                       ; 0048f127
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0048f12d
    PUSH 0x1                            ; 0048f12f
    PUSH ESI                            ; 0048f131
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f132
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f137
    JMP 0x0048ed7c                      ; 0048f13a
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0048f13f
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f145
    PUSH EBX                            ; 0048f14b
    CALL dword ptr [EAX + 0x158]        ; 0048f14c
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 0048f152
    ADD ESP,0x8                         ; 0048f158
    TEST ECX,ECX                        ; 0048f15b
    JNZ 0x0048f187                      ; 0048f15d
        ;   XREF to: 0048f187 (CONDITIONAL_JUMP)  ; LAB_0048f187
    PUSH dword ptr [EBP + 0x92]         ; 0048f15f
    PUSH EBX                            ; 0048f165
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 0048f166
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0048f16b
    TEST EAX,EAX                        ; 0048f16e
    JNZ 0x0048ed7c                      ; 0048f170
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0048f176
    PUSH EAX                            ; 0048f178
    PUSH ESI                            ; 0048f179
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f17a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f17f
    JMP 0x0048ed7c                      ; 0048f182
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x0065d0a8]                ; 0048f187 | FLOAT_0065d0a8
        ;   Label: LAB_0048f187
    PUSH 0x3e32b8c2                     ; 0048f18c
    MOV dword ptr [EBP + 0x72],EAX      ; 0048f191
    LEA EAX,[EBX + 0x23ac]              ; 0048f194
    PUSH 0x3f000000                     ; 0048f19a
    MOV dword ptr [EAX + 0x8],0x0       ; 0048f19f
    XOR EDI,EDI                         ; 0048f1a6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048f1a8
    MOV dword ptr [EAX + 0x4],EDX       ; 0048f1ab
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048f1ae
    MOV dword ptr [EAX],EDX             ; 0048f1b1
    MOV EAX,dword ptr [EBP + 0x72]      ; 0048f1b3
    MOV dword ptr [EBP + 0x26],EDI      ; 0048f1b6
    MOV dword ptr [EBP + 0x2e],EAX      ; 0048f1b9
    LEA EAX,[EBP + 0x26]                ; 0048f1bc
    MOV dword ptr [EBP + 0x2a],EDI      ; 0048f1bf
    PUSH EAX                            ; 0048f1c2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0048f1c3
    PUSH EAX                            ; 0048f1c9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0048f1ca
    CALL dword ptr [EDX + 0xbc]         ; 0048f1d0
    ADD ESP,0x4                         ; 0048f1d6
    PUSH EAX                            ; 0048f1d9
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 0048f1da
    ADD EAX,0x20                        ; 0048f1e0
    PUSH EAX                            ; 0048f1e3
    PUSH EBX                            ; 0048f1e4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0048f1e5
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0048f1ea
    TEST EAX,EAX                        ; 0048f1ed
    JL 0x0048f255                       ; 0048f1ef
        ;   XREF to: 0048f255 (CONDITIONAL_JUMP)  ; LAB_0048f255
    JLE 0x0048ed7c                      ; 0048f1f1
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xbe38]        ; 0048f1f7
    FLDZ                                ; 0048f1fd
    FCOMPP                              ; 0048f1ff
    FNSTSW AX                           ; 0048f201
    SAHF                                ; 0048f203
    JC 0x0048ed7c                       ; 0048f204
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0048f20a
    PUSH 0x2                            ; 0048f20c
    PUSH ESI                            ; 0048f20e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f20f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f214
    MOV EDX,dword ptr [EBX + 0xbed0]    ; 0048f217
    PUSH EDX                            ; 0048f21d
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 0048f21e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 0048f228
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f22d
    TEST EAX,EAX                        ; 0048f230
    JNZ 0x0048ed7c                      ; 0048f232
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x6223d0                       ; 0048f238 | = "drone-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f23d
    PUSH EBX                            ; 0048f243
    CALL dword ptr [EAX + 0x24]         ; 0048f244
    ADD ESP,0x8                         ; 0048f247
    MOV dword ptr [EBX + 0xbed0],EAX    ; 0048f24a
    JMP 0x0048ed7c                      ; 0048f250
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 0048f255
        ;   Label: LAB_0048f255
    PUSH 0x6223af                       ; 0048f256 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 0048f25b | g_CConsolePtr
    PUSH ECX                            ; 0048f261 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0048f262
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0048f267
    PUSH 0x1                            ; 0048f26a
    PUSH EDI                            ; 0048f26c
    PUSH ESI                            ; 0048f26d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048f26e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0048f273
    JMP 0x0048ed7c                      ; 0048f276
        ;   XREF to: 0048ed7c (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP EDI,0x9                         ; 0048f27b
        ;   Label: LAB_0048f27b
    JA 0x0048ed7c                       ; 0048f27e
        ;   XREF to: 0048ed7c (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [EDI*0x4 + 0x48ec40]  ; 0048f284 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 0048f28b
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_0048f28b
    PUSH 0x2                            ; 0048f290
    PUSH 0x3f800000                     ; 0048f292
    PUSH 0x0                            ; 0048f297
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0048f299
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x8                         ; 0048f29e
    MOV dword ptr [EBP + 0x76],EAX      ; 0048f2a1
    SUB ESP,0x8                         ; 0048f2a4
    FLD float ptr [EBP + 0x76]          ; 0048f2a7
    FSTP double ptr [ESP]               ; 0048f2aa
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0 ; 0048f2ad
        ;   XREF to: 005a8be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005a8be0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0048f2b2
    PUSH 0x6223e2                       ; 0048f2b5 | = "slime.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048f2ba
    PUSH EBX                            ; 0048f2c0
    CALL dword ptr [EAX + 0x28]         ; 0048f2c1
    ADD ESP,0x8                         ; 0048f2c4
    MOV dword ptr [EBX + 0xbecc],EAX    ; 0048f2c7
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 0048f2cd
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
    JMP 0x0048edf0                      ; 0048f2d2
        ;   XREF to: 0048edf0 (UNCONDITIONAL_JUMP)  ; LAB_0048edf0
    MOV ECX,dword ptr [EBX + 0xbecc]    ; 0048f2d7
        ;   Label: LAB_0048f2d7
    PUSH ECX                            ; 0048f2dd
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 0048f2de
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0048f2e3
    JMP 0x0048edf0                      ; 0048f2e6
        ;   XREF to: 0048edf0 (UNCONDITIONAL_JUMP)  ; LAB_0048edf0

