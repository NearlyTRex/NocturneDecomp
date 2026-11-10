; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_005ae840(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_weather.cpp_FUN_005ae190 at 005ae47e
;
; Referenced Globals:
;   TerminatedCString s_thndr_wav_005f999e
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae840
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_005ae840
    SUB ESP,0x4                         ; 005ae841
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ae844
    PUSH 0x41a00000                     ; 005ae848
    PUSH 0x41200000                     ; 005ae84d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005ae852
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 005ae857
    FLD float ptr [ESP + 0x8]           ; 005ae85b
    ADD ESP,0x8                         ; 005ae85f
    PUSH 0x5f999e                       ; 005ae862 | = "thndr?.wav"
    PUSH EBX                            ; 005ae867
    MOV EDX,dword ptr [0x006236b8]      ; 005ae868 | DAT_006236b8
    PUSH EDX                            ; 005ae86e
    FSTP float ptr [EBX + 0x20]         ; 005ae86f
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 005ae872
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    MOV dword ptr [EBX + 0x2c],0x0      ; 005ae877
    ADD ESP,0xc                         ; 005ae87e
    MOV dword ptr [EBX + 0x34],0x3f800000 ; 005ae881
    ADD ESP,0x4                         ; 005ae888
    POP EBX                             ; 005ae88b
    RET                                 ; 005ae88c

