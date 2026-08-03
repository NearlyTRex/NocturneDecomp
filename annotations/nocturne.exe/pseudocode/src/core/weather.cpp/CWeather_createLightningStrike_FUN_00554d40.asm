; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_00554d40(CWeather *this_ptr,float flash_timer,int play_sound)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   flash_timer
; int              Stack[0xc]:4   play_sound
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047c24c
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a0747
;   core_lightgun.cpp_CLightGun_process_FUN_004c79a0 at 004c7b7b
;   core_weather.cpp_CWeather_update_FUN_00554980 at 00554c53
;
; Referenced Globals:
;   TerminatedCString s_noLightningFlash_00597c6d
;   TerminatedCString s_light_wav_00597c7e
;   double DOUBLE_00597c89 = 0.5
;   double DOUBLE_00597c91 = 0.0000152590218966964
;   float FLOAT_00597c99 = 0.6500000
;   undefined4 DAT_005b7650
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;   undefined4 g_CDemonCamera_01fb8508.corona_blend_factor
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420
;   core_sound.cpp_CSound_playActorSound_FUN_0052ea60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554d40
        ;   Label: core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40
    PUSH EDI                            ; 00554d41
    PUSH EBP                            ; 00554d42
    MOV EBP,ESP                         ; 00554d43
    SUB ESP,0x88                        ; 00554d45
    AND ESP,0xfffffff8                  ; 00554d4b
    MOV EBX,dword ptr [EBP + 0x10]      ; 00554d4e
    PUSH 0x41a00000                     ; 00554d51
    PUSH 0x41200000                     ; 00554d56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00554d5b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 00554d60
    FLD float ptr [ESP + 0x8c]          ; 00554d67
    ADD ESP,0x8                         ; 00554d6e
    PUSH dword ptr [EBX + 0x34]         ; 00554d71
    PUSH 0x40000000                     ; 00554d74
    FSTP float ptr [EBX + 0x20]         ; 00554d79
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00554d7c
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 00554d81
    FLD float ptr [ESP + 0x8c]          ; 00554d88
    ADD ESP,0x8                         ; 00554d8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554d92
    MOV dword ptr [EBX + 0x28],EAX      ; 00554d95
    LEA EAX,[ESP + 0x68]                ; 00554d98
    PUSH EAX                            ; 00554d9c
    MOV dword ptr [EBX + 0x24],0x1      ; 00554d9d
    PUSH 0x1fba938                      ; 00554da4 | g_CDemonRaytrace_01fba938
    FSTP float ptr [EBX + 0x2c]         ; 00554da9
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0 ; 00554dac
        ;   XREF to: 0046b9c0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 00554db1
    LEA EAX,[ESP + 0x44]                ; 00554db4
    PUSH EAX                            ; 00554db8
    PUSH 0x1fba938                      ; 00554db9 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0 ; 00554dbe
        ;   XREF to: 0046b9f0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 00554dc3
    FLD float ptr [ESP + 0x68]          ; 00554dc6
    FADD float ptr [ESP + 0x44]         ; 00554dca
    FLD double ptr [0x00597c89]         ; 00554dce | DOUBLE_00597c89
    FXCH                                ; 00554dd4
    FMUL ST1                            ; 00554dd6
    FLD float ptr [ESP + 0x44]          ; 00554dd8
    FLD float ptr [ESP + 0x70]          ; 00554ddc
    FADD float ptr [ESP + 0x4c]         ; 00554de0
    FXCH                                ; 00554de4
    FSUB float ptr [ESP + 0x68]         ; 00554de6
    FXCH                                ; 00554dea
    FMUL ST3                            ; 00554dec
    FXCH                                ; 00554dee
    FMULP ST3                           ; 00554df0
    FLDZ                                ; 00554df2
    XOR EDX,EDX                         ; 00554df4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00554df6
    MOV dword ptr [ESP + 0x80],EDX      ; 00554dfa
    MOV dword ptr [ESP + 0x3c],EAX      ; 00554e01
    FXCH ST2                            ; 00554e05
    FSTP float ptr [ESP + 0x38]         ; 00554e07
    FSTP float ptr [ESP + 0x40]         ; 00554e0b
    FXCH                                ; 00554e0f
    FSTP float ptr [ESP + 0x78]         ; 00554e11
    FCOMP float ptr [ESP + 0x78]        ; 00554e15
    FNSTSW AX                           ; 00554e19
    SAHF                                ; 00554e1b
    JC 0x00554f5a                       ; 00554e1c
        ;   XREF to: 00554f5a (CONDITIONAL_JUMP)  ; LAB_00554f5a
    FLD float ptr [ESP + 0x48]          ; 00554e22
        ;   Label: LAB_00554e22
    FSUB float ptr [ESP + 0x6c]         ; 00554e26
    FST float ptr [ESP + 0x74]          ; 00554e2a
    FCOMP float ptr [ESP + 0x80]        ; 00554e2e
    FNSTSW AX                           ; 00554e35
    SAHF                                ; 00554e37
    JBE 0x00554e45                      ; 00554e38
        ;   XREF to: 00554e45 (CONDITIONAL_JUMP)  ; LAB_00554e45
    MOV EAX,dword ptr [ESP + 0x74]      ; 00554e3a
    MOV dword ptr [ESP + 0x80],EAX      ; 00554e3e
    FLD float ptr [ESP + 0x4c]          ; 00554e45
        ;   Label: LAB_00554e45
    FSUB float ptr [ESP + 0x70]         ; 00554e49
    FMUL double ptr [0x00597c89]        ; 00554e4d | DOUBLE_00597c89
    FST float ptr [ESP + 0x7c]          ; 00554e53
    FCOMP float ptr [ESP + 0x80]        ; 00554e57
    FNSTSW AX                           ; 00554e5e
    SAHF                                ; 00554e60
    JBE 0x00554e6e                      ; 00554e61
        ;   XREF to: 00554e6e (CONDITIONAL_JUMP)  ; LAB_00554e6e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00554e63
    MOV dword ptr [ESP + 0x80],EAX      ; 00554e67
    LEA EAX,[EBX + 0x14]                ; 00554e6e
        ;   Label: LAB_00554e6e
    PUSH EAX                            ; 00554e71
    LEA EAX,[ESP + 0x8]                 ; 00554e72
    PUSH EAX                            ; 00554e76
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 00554e77
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00554e7c
    MOV EAX,dword ptr [ESP + 0x80]      ; 00554e7f
    MOV dword ptr [ESP + 0x34],EAX      ; 00554e86
    LEA EAX,[ESP + 0x2c]                ; 00554e8a
    PUSH EAX                            ; 00554e8e
    LEA EAX,[ESP + 0x60]                ; 00554e8f
    PUSH EAX                            ; 00554e93
    LEA EAX,[ESP + 0xc]                 ; 00554e94
    XOR ECX,ECX                         ; 00554e98
    PUSH EAX                            ; 00554e9a
    MOV dword ptr [ESP + 0x38],ECX      ; 00554e9b
    MOV dword ptr [ESP + 0x3c],ECX      ; 00554e9f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 00554ea3
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x8]                 ; 00554ea8
    FLD float ptr [EAX]                 ; 00554eab
    FADD float ptr [EDX]                ; 00554ead
    ADD ESP,0xc                         ; 00554eaf
    FSTP float ptr [ESP + 0x50]         ; 00554eb2
    FLD float ptr [EAX + 0x4]           ; 00554eb6
    FADD float ptr [EDX + 0x4]          ; 00554eb9
    FSTP float ptr [ESP + 0x54]         ; 00554ebc
    FLD float ptr [EAX + 0x8]           ; 00554ec0
    LEA EAX,[ESP + 0x50]                ; 00554ec3
    FADD float ptr [EDX + 0x8]          ; 00554ec7
    LEA EDX,[ESP + 0x2c]                ; 00554eca
    FSTP float ptr [ESP + 0x58]         ; 00554ece
    CMP EDX,EAX                         ; 00554ed2
    JZ 0x00554eee                       ; 00554ed4
        ;   XREF to: 00554eee (CONDITIONAL_JUMP)  ; LAB_00554eee
    MOV EAX,dword ptr [ESP + 0x50]      ; 00554ed6
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554eda
    MOV EAX,dword ptr [ESP + 0x54]      ; 00554ede
    MOV dword ptr [ESP + 0x30],EAX      ; 00554ee2
    MOV EAX,dword ptr [ESP + 0x58]      ; 00554ee6
    MOV dword ptr [ESP + 0x34],EAX      ; 00554eea
    CMP dword ptr [EBP + 0x18],0x0      ; 00554eee
        ;   Label: LAB_00554eee
    JZ 0x00554f12                       ; 00554ef2
        ;   XREF to: 00554f12 (CONDITIONAL_JUMP)  ; LAB_00554f12
    PUSH 0x0                            ; 00554ef4
    PUSH 0x0                            ; 00554ef6
    LEA EAX,[ESP + 0x34]                ; 00554ef8
    PUSH dword ptr [ESP + 0x88]         ; 00554efc
    PUSH EAX                            ; 00554f03
    MOV EAX,[0x005b80f0]                ; 00554f04 | g_CFireEffect_PTR_005b80f0
    PUSH EAX                            ; 00554f09
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420 ; 00554f0a
        ;   XREF to: 0048c420 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_0048c420(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 00554f0f
    MOV EAX,[0x01fb96f0]                ; 00554f12 | g_CDemonCamera_01fb8508.corona_blend_factor
        ;   Label: LAB_00554f12
    MOV dword ptr [ESP + 0x84],EAX      ; 00554f17
    FILD dword ptr [ESP + 0x84]         ; 00554f1e
    FMUL double ptr [0x00597c91]        ; 00554f25 | DOUBLE_00597c91
    PUSH 0x597c6d                       ; 00554f2b | = "noLightningFlash"
    MOV EDX,dword ptr [0x005b7650]      ; 00554f30 | DAT_005b7650
    FSTP float ptr [ESP + 0x4]          ; 00554f36
    MOV EAX,dword ptr [ESP + 0x4]       ; 00554f3a
    PUSH EDX                            ; 00554f3e
    MOV dword ptr [EBX + 0x30],EAX      ; 00554f3f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00554f42
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00554f47
    TEST EAX,EAX                        ; 00554f4a
    JZ 0x00554f6a                       ; 00554f4c
        ;   XREF to: 00554f6a (CONDITIONAL_JUMP)  ; LAB_00554f6a
    CMP dword ptr [EBP + 0x18],0x0      ; 00554f4e
    JNZ 0x00554fa2                      ; 00554f52
        ;   XREF to: 00554fa2 (CONDITIONAL_JUMP)  ; LAB_00554fa2
    MOV ESP,EBP                         ; 00554f54
    POP EBP                             ; 00554f56
    POP EDI                             ; 00554f57
    POP EBX                             ; 00554f58
    RET                                 ; 00554f59
    MOV EAX,dword ptr [ESP + 0x78]      ; 00554f5a
        ;   Label: LAB_00554f5a
    MOV dword ptr [ESP + 0x80],EAX      ; 00554f5e
    JMP 0x00554e22                      ; 00554f65
        ;   XREF to: 00554e22 (UNCONDITIONAL_JUMP)  ; LAB_00554e22
    FLD float ptr [ESP]                 ; 00554f6a
        ;   Label: LAB_00554f6a
    FADD float ptr [0x00597c99]         ; 00554f6d | FLOAT_00597c99
    FST float ptr [ESP]                 ; 00554f73
    FLD1                                ; 00554f76
    FCOMPP                              ; 00554f78
    FNSTSW AX                           ; 00554f7a
    SAHF                                ; 00554f7c
    JNC 0x00554f86                      ; 00554f7d
        ;   XREF to: 00554f86 (CONDITIONAL_JUMP)  ; LAB_00554f86
    MOV dword ptr [ESP],0x3f800000      ; 00554f7f
    PUSH dword ptr [ESP]                ; 00554f86
        ;   Label: LAB_00554f86
    PUSH 0x1fb8508                      ; 00554f89
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740 ; 00554f8e
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00446740(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 00554f93
    CMP dword ptr [EBP + 0x18],0x0      ; 00554f96
    JNZ 0x00554fa2                      ; 00554f9a
        ;   XREF to: 00554fa2 (CONDITIONAL_JUMP)  ; LAB_00554fa2
    MOV ESP,EBP                         ; 00554f9c
    POP EBP                             ; 00554f9e
    POP EDI                             ; 00554f9f
    POP EBX                             ; 00554fa0
    RET                                 ; 00554fa1
    LEA EAX,[ESP + 0x2c]                ; 00554fa2
        ;   Label: LAB_00554fa2
    PUSH EAX                            ; 00554fa6
    PUSH 0x597c7e                       ; 00554fa7 | = "light?.wav"
    PUSH EBX                            ; 00554fac
    MOV EDI,dword ptr [0x005bed68]      ; 00554fad | g_CSound_PTR_005bed68
    PUSH EDI                            ; 00554fb3
    CALL core_sound.cpp_CSound_playActorSound_FUN_0052ea60 ; 00554fb4
        ;   XREF to: 0052ea60 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0052ea60(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00554fb9
    MOV ESP,EBP                         ; 00554fbc
    POP EBP                             ; 00554fbe
    POP EDI                             ; 00554fbf
    POP EBX                             ; 00554fc0
    RET                                 ; 00554fc1

