; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_005eeeb0(CWeather *this_ptr,float flash_timer,int play_sound)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   flash_timer
; int              Stack[0xc]:4   play_sound
; Local Variables:
; float            Stack[-0x98]:4  local_98
; CMatrix3x3f      Stack[-0x94]:36  local_94
; CVector3f        Stack[-0x6c]:12  local_6c
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x5c]:4  local_5c
; float            Stack[-0x58]:4  local_58
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac2bc
;   core_lightgun.cpp_CLightGun_process_FUN_00506450 at 005065b6
;   core_weather.cpp_CWeather_update_FUN_005eeaf0 at 005eedc3
;
; Referenced Globals:
;   TerminatedCString s_noLightningFlash_00657bd8
;   TerminatedCString s_light_wav_00657be9
;   double DOUBLE_00657bf4 = 0.5
;   double DOUBLE_00657bfc = 0.0000152590218966964
;   float FLOAT_00657c04 = 0.6500000
;   CEventList* g_CEventListPtr = 02d05310
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CSound* g_CSoundPtr = 03f6af64
;   CEventList g_CEventListInstance
;   CFireEffect g_CFireEffectInstance
;   CDemonCamera g_CDemonCameraInstance
;   undefined4 g_CDemonCameraInstance.corona_blend_factor
;   CDemonRaytrace g_CDemonRaytraceInstance
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
;   core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50
;   core_sound.cpp_CSound_playActorSound_FUN_005b3a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eeeb0
        ;   Label: core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0
    PUSH EDI                            ; 005eeeb1
    PUSH EBP                            ; 005eeeb2
    MOV EBP,ESP                         ; 005eeeb3
    SUB ESP,0x88                        ; 005eeeb5
    AND ESP,0xfffffff8                  ; 005eeebb
    MOV EBX,dword ptr [EBP + 0x10]      ; 005eeebe
    PUSH 0x41a00000                     ; 005eeec1
    PUSH 0x41200000                     ; 005eeec6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005eeecb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 005eeed0
    FLD float ptr [ESP + 0x8c]          ; 005eeed7
    ADD ESP,0x8                         ; 005eeede
    PUSH dword ptr [EBX + 0x34]         ; 005eeee1
    PUSH 0x40000000                     ; 005eeee4
    FSTP float ptr [EBX + 0x20]         ; 005eeee9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005eeeec
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8c],EAX      ; 005eeef1
    FLD float ptr [ESP + 0x8c]          ; 005eeef8
    ADD ESP,0x8                         ; 005eeeff
    MOV EAX,dword ptr [EBP + 0x14]      ; 005eef02
    MOV dword ptr [EBX + 0x28],EAX      ; 005eef05
    LEA EAX,[ESP + 0x68]                ; 005eef08
    PUSH EAX                            ; 005eef0c
    MOV dword ptr [EBX + 0x24],0x1      ; 005eef0d
    PUSH 0x3277d14                      ; 005eef14 | g_CDemonRaytraceInstance
    FSTP float ptr [EBX + 0x2c]         ; 005eef19
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40 ; 005eef1c
        ;   XREF to: 00499b40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 005eef21
    LEA EAX,[ESP + 0x44]                ; 005eef24
    PUSH EAX                            ; 005eef28
    PUSH 0x3277d14                      ; 005eef29 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70 ; 005eef2e
        ;   XREF to: 00499b70 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(CDemonRaytrace * this_ptr, CVector3f * output_vector)
    ADD ESP,0x8                         ; 005eef33
    FLD float ptr [ESP + 0x68]          ; 005eef36
    FADD float ptr [ESP + 0x44]         ; 005eef3a
    FLD double ptr [0x00657bf4]         ; 005eef3e | DOUBLE_00657bf4
    FXCH                                ; 005eef44
    FMUL ST1                            ; 005eef46
    FLD float ptr [ESP + 0x44]          ; 005eef48
    FLD float ptr [ESP + 0x70]          ; 005eef4c
    FADD float ptr [ESP + 0x4c]         ; 005eef50
    FXCH                                ; 005eef54
    FSUB float ptr [ESP + 0x68]         ; 005eef56
    FXCH                                ; 005eef5a
    FMUL ST3                            ; 005eef5c
    FXCH                                ; 005eef5e
    FMULP ST3                           ; 005eef60
    FLDZ                                ; 005eef62
    XOR EDX,EDX                         ; 005eef64
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005eef66
    MOV dword ptr [ESP + 0x80],EDX      ; 005eef6a
    MOV dword ptr [ESP + 0x3c],EAX      ; 005eef71
    FXCH ST2                            ; 005eef75
    FSTP float ptr [ESP + 0x38]         ; 005eef77
    FSTP float ptr [ESP + 0x40]         ; 005eef7b
    FXCH                                ; 005eef7f
    FSTP float ptr [ESP + 0x78]         ; 005eef81
    FCOMP float ptr [ESP + 0x78]        ; 005eef85
    FNSTSW AX                           ; 005eef89
    SAHF                                ; 005eef8b
    JC 0x005ef0ca                       ; 005eef8c
        ;   XREF to: 005ef0ca (CONDITIONAL_JUMP)  ; LAB_005ef0ca
    FLD float ptr [ESP + 0x48]          ; 005eef92
        ;   Label: LAB_005eef92
    FSUB float ptr [ESP + 0x6c]         ; 005eef96
    FST float ptr [ESP + 0x74]          ; 005eef9a
    FCOMP float ptr [ESP + 0x80]        ; 005eef9e
    FNSTSW AX                           ; 005eefa5
    SAHF                                ; 005eefa7
    JBE 0x005eefb5                      ; 005eefa8
        ;   XREF to: 005eefb5 (CONDITIONAL_JUMP)  ; LAB_005eefb5
    MOV EAX,dword ptr [ESP + 0x74]      ; 005eefaa
    MOV dword ptr [ESP + 0x80],EAX      ; 005eefae
    FLD float ptr [ESP + 0x4c]          ; 005eefb5
        ;   Label: LAB_005eefb5
    FSUB float ptr [ESP + 0x70]         ; 005eefb9
    FMUL double ptr [0x00657bf4]        ; 005eefbd | DOUBLE_00657bf4
    FST float ptr [ESP + 0x7c]          ; 005eefc3
    FCOMP float ptr [ESP + 0x80]        ; 005eefc7
    FNSTSW AX                           ; 005eefce
    SAHF                                ; 005eefd0
    JBE 0x005eefde                      ; 005eefd1
        ;   XREF to: 005eefde (CONDITIONAL_JUMP)  ; LAB_005eefde
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005eefd3
    MOV dword ptr [ESP + 0x80],EAX      ; 005eefd7
    LEA EAX,[EBX + 0x14]                ; 005eefde
        ;   Label: LAB_005eefde
    PUSH EAX                            ; 005eefe1
    LEA EAX,[ESP + 0x8]                 ; 005eefe2
    PUSH EAX                            ; 005eefe6
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 005eefe7
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005eefec
    MOV EAX,dword ptr [ESP + 0x80]      ; 005eefef
    MOV dword ptr [ESP + 0x34],EAX      ; 005eeff6
    LEA EAX,[ESP + 0x2c]                ; 005eeffa
    PUSH EAX                            ; 005eeffe
    LEA EAX,[ESP + 0x60]                ; 005eefff
    PUSH EAX                            ; 005ef003
    LEA EAX,[ESP + 0xc]                 ; 005ef004
    XOR ECX,ECX                         ; 005ef008
    PUSH EAX                            ; 005ef00a
    MOV dword ptr [ESP + 0x38],ECX      ; 005ef00b
    MOV dword ptr [ESP + 0x3c],ECX      ; 005ef00f
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 005ef013
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x8]                 ; 005ef018
    FLD float ptr [EAX]                 ; 005ef01b
    FADD float ptr [EDX]                ; 005ef01d
    ADD ESP,0xc                         ; 005ef01f
    FSTP float ptr [ESP + 0x50]         ; 005ef022
    FLD float ptr [EAX + 0x4]           ; 005ef026
    FADD float ptr [EDX + 0x4]          ; 005ef029
    FSTP float ptr [ESP + 0x54]         ; 005ef02c
    FLD float ptr [EAX + 0x8]           ; 005ef030
    LEA EAX,[ESP + 0x50]                ; 005ef033
    FADD float ptr [EDX + 0x8]          ; 005ef037
    LEA EDX,[ESP + 0x2c]                ; 005ef03a
    FSTP float ptr [ESP + 0x58]         ; 005ef03e
    CMP EDX,EAX                         ; 005ef042
    JZ 0x005ef05e                       ; 005ef044
        ;   XREF to: 005ef05e (CONDITIONAL_JUMP)  ; LAB_005ef05e
    MOV EAX,dword ptr [ESP + 0x50]      ; 005ef046
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ef04a
    MOV EAX,dword ptr [ESP + 0x54]      ; 005ef04e
    MOV dword ptr [ESP + 0x30],EAX      ; 005ef052
    MOV EAX,dword ptr [ESP + 0x58]      ; 005ef056
    MOV dword ptr [ESP + 0x34],EAX      ; 005ef05a
    CMP dword ptr [EBP + 0x18],0x0      ; 005ef05e
        ;   Label: LAB_005ef05e
    JZ 0x005ef082                       ; 005ef062
        ;   XREF to: 005ef082 (CONDITIONAL_JUMP)  ; LAB_005ef082
    PUSH 0x0                            ; 005ef064
    PUSH 0x0                            ; 005ef066
    LEA EAX,[ESP + 0x34]                ; 005ef068
    PUSH dword ptr [ESP + 0x88]         ; 005ef06c
    PUSH EAX                            ; 005ef073
    MOV EAX,[0x0067a3d0]                ; 005ef074 | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH EAX                            ; 005ef079 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50 ; 005ef07a
        ;   XREF to: 004c8f50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 005ef07f
    MOV EAX,[0x03276acc]                ; 005ef082 | g_CDemonCameraInstance.corona_blend_factor
        ;   Label: LAB_005ef082
    MOV dword ptr [ESP + 0x84],EAX      ; 005ef087
    FILD dword ptr [ESP + 0x84]         ; 005ef08e
    FMUL double ptr [0x00657bfc]        ; 005ef095 | DOUBLE_00657bfc
    PUSH 0x657bd8                       ; 005ef09b | = "noLightningFlash"
    MOV EDX,dword ptr [0x006793d0]      ; 005ef0a0 | g_CEventListPtr
    FSTP float ptr [ESP + 0x4]          ; 005ef0a6
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ef0aa
    PUSH EDX                            ; 005ef0ae | g_CEventListInstance
    MOV dword ptr [EBX + 0x30],EAX      ; 005ef0af
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005ef0b2
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005ef0b7
    TEST EAX,EAX                        ; 005ef0ba
    JZ 0x005ef0da                       ; 005ef0bc
        ;   XREF to: 005ef0da (CONDITIONAL_JUMP)  ; LAB_005ef0da
    CMP dword ptr [EBP + 0x18],0x0      ; 005ef0be
    JNZ 0x005ef112                      ; 005ef0c2
        ;   XREF to: 005ef112 (CONDITIONAL_JUMP)  ; LAB_005ef112
    MOV ESP,EBP                         ; 005ef0c4
    POP EBP                             ; 005ef0c6
    POP EDI                             ; 005ef0c7
    POP EBX                             ; 005ef0c8
    RET                                 ; 005ef0c9
    MOV EAX,dword ptr [ESP + 0x78]      ; 005ef0ca
        ;   Label: LAB_005ef0ca
    MOV dword ptr [ESP + 0x80],EAX      ; 005ef0ce
    JMP 0x005eef92                      ; 005ef0d5
        ;   XREF to: 005eef92 (UNCONDITIONAL_JUMP)  ; LAB_005eef92
    FLD float ptr [ESP]                 ; 005ef0da
        ;   Label: LAB_005ef0da
    FADD float ptr [0x00657c04]         ; 005ef0dd | FLOAT_00657c04
    FST float ptr [ESP]                 ; 005ef0e3
    FLD1                                ; 005ef0e6
    FCOMPP                              ; 005ef0e8
    FNSTSW AX                           ; 005ef0ea
    SAHF                                ; 005ef0ec
    JNC 0x005ef0f6                      ; 005ef0ed
        ;   XREF to: 005ef0f6 (CONDITIONAL_JUMP)  ; LAB_005ef0f6
    MOV dword ptr [ESP],0x3f800000      ; 005ef0ef
    PUSH dword ptr [ESP]                ; 005ef0f6
        ;   Label: LAB_005ef0f6
    PUSH 0x32758e4                      ; 005ef0f9 | g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0 ; 005ef0fe
        ;   XREF to: 004528e0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_004528e0(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005ef103
    CMP dword ptr [EBP + 0x18],0x0      ; 005ef106
    JNZ 0x005ef112                      ; 005ef10a
        ;   XREF to: 005ef112 (CONDITIONAL_JUMP)  ; LAB_005ef112
    MOV ESP,EBP                         ; 005ef10c
    POP EBP                             ; 005ef10e
    POP EDI                             ; 005ef10f
    POP EBX                             ; 005ef110
    RET                                 ; 005ef111
    LEA EAX,[ESP + 0x2c]                ; 005ef112
        ;   Label: LAB_005ef112
    PUSH EAX                            ; 005ef116
    PUSH 0x657be9                       ; 005ef117 | = "light?.wav"
    PUSH EBX                            ; 005ef11c
    MOV EDI,dword ptr [0x00681ef8]      ; 005ef11d | g_CSoundPtr
    PUSH EDI                            ; 005ef123 | g_CSoundInstance
    CALL core_sound.cpp_CSound_playActorSound_FUN_005b3a40 ; 005ef124
        ;   XREF to: 005b3a40 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005b3a40(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005ef129
    MOV ESP,EBP                         ; 005ef12c
    POP EBP                             ; 005ef12e
    POP EDI                             ; 005ef12f
    POP EBX                             ; 005ef130
    RET                                 ; 005ef131

