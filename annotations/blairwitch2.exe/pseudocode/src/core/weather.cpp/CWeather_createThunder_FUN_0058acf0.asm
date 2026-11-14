; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0058acf0(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_weather.cpp_CWeather_update_FUN_0058a660 at 0058a94e
;
; Referenced Globals:
;   TerminatedCString s_thndr_wav_005ee5c6
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_sound.cpp_CSound_playSound_FUN_0055ae30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058acf0
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_0058acf0
    SUB ESP,0x4                         ; 0058acf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058acf4
    PUSH 0x41a00000                     ; 0058acf8
    PUSH 0x41200000                     ; 0058acfd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0058ad02
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 0058ad07
    FLD float ptr [ESP + 0x8]           ; 0058ad0b
    ADD ESP,0x8                         ; 0058ad0f
    PUSH 0x5ee5c6                       ; 0058ad12 | = "thndr?.wav"
    PUSH EBX                            ; 0058ad17
    MOV EDX,dword ptr [0x0061c068]      ; 0058ad18 | DAT_0061c068
    PUSH EDX                            ; 0058ad1e
    FSTP float ptr [EBX + 0x20]         ; 0058ad1f
    CALL core_sound.cpp_CSound_playSound_FUN_0055ae30 ; 0058ad22
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0055ae30(CSound * this_ptr, void * user_data, char * sound_name)
    MOV dword ptr [EBX + 0x2c],0x0      ; 0058ad27
    ADD ESP,0xc                         ; 0058ad2e
    MOV dword ptr [EBX + 0x34],0x3f800000 ; 0058ad31
    ADD ESP,0x4                         ; 0058ad38
    POP EBX                             ; 0058ad3b
    RET                                 ; 0058ad3c

