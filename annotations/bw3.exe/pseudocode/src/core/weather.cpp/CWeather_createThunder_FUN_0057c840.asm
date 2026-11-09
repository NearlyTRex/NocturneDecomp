; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_0057c840(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_weather.cpp_FUN_0057bda0 at 0057c19d
;
; Referenced Globals:
;   TerminatedCString s_thndr_wav_005d797b
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057c840
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_0057c840
    SUB ESP,0x4                         ; 0057c841
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057c844
    PUSH 0x41a00000                     ; 0057c848
    PUSH 0x41200000                     ; 0057c84d
    CALL core_actor.cpp_FUN_0040ce40    ; 0057c852
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0057c857
    FLD float ptr [ESP + 0x8]           ; 0057c85b
    ADD ESP,0x8                         ; 0057c85f
    PUSH 0x5d797b                       ; 0057c862 | = "thndr?.wav"
    PUSH EBX                            ; 0057c867
    MOV EDX,dword ptr [0x006045f8]      ; 0057c868 | DAT_006045f8
    PUSH EDX                            ; 0057c86e
    FSTP float ptr [EBX + 0x20]         ; 0057c86f
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 0057c872
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    MOV dword ptr [EBX + 0x2c],0x0      ; 0057c877
    ADD ESP,0xc                         ; 0057c87e
    MOV dword ptr [EBX + 0x34],0x3f800000 ; 0057c881
    ADD ESP,0x4                         ; 0057c888
    POP EBX                             ; 0057c88b
    RET                                 ; 0057c88c

