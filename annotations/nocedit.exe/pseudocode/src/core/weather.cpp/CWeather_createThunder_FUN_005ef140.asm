; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_005ef140(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_weather.cpp_CWeather_update_FUN_005eeaf0 at 005eedd4
;
; Referenced Globals:
;   TerminatedCString s_thndr_wav_00657c08
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_sound.cpp_CSound_playSound_FUN_005b3a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ef140
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_005ef140
    SUB ESP,0x4                         ; 005ef141
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ef144
    PUSH 0x41a00000                     ; 005ef148
    PUSH 0x41200000                     ; 005ef14d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005ef152
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005ef157
    FLD float ptr [ESP + 0x8]           ; 005ef15b
    ADD ESP,0x8                         ; 005ef15f
    PUSH 0x657c08                       ; 005ef162 | = "thndr?.wav"
    PUSH EBX                            ; 005ef167
    MOV EDX,dword ptr [0x00681ef8]      ; 005ef168 | g_CSoundPtr
    PUSH EDX                            ; 005ef16e | g_CSoundInstance
    FSTP float ptr [EBX + 0x20]         ; 005ef16f
    CALL core_sound.cpp_CSound_playSound_FUN_005b3a20 ; 005ef172
        ;   XREF to: 005b3a20 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005b3a20(CSound * this_ptr, void * user_data, char * sound_name)
    MOV dword ptr [EBX + 0x2c],0x0      ; 005ef177
    ADD ESP,0xc                         ; 005ef17e
    MOV dword ptr [EBX + 0x34],0x3f800000 ; 005ef181
    ADD ESP,0x4                         ; 005ef188
    POP EBX                             ; 005ef18b
    RET                                 ; 005ef18c

