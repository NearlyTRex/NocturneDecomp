; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_CWeather_createThunder_FUN_00554fd0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_weather.cpp_CWeather_update_FUN_00554980 at 00554c64
;
; Referenced Globals:
;   TerminatedCString s_thndr_wav_00597c9d
;   undefined4 DAT_005bed68
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_sound.cpp_CSound_playSound_FUN_0052ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554fd0
        ;   Label: core_weather.cpp_CWeather_createThunder_FUN_00554fd0
    SUB ESP,0x4                         ; 00554fd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00554fd4
    PUSH 0x41a00000                     ; 00554fd8
    PUSH 0x41200000                     ; 00554fdd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00554fe2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x8],EAX       ; 00554fe7
    FLD float ptr [ESP + 0x8]           ; 00554feb
    ADD ESP,0x8                         ; 00554fef
    PUSH 0x597c9d                       ; 00554ff2 | = "thndr?.wav"
    PUSH EBX                            ; 00554ff7
    MOV EDX,dword ptr [0x005bed68]      ; 00554ff8 | DAT_005bed68
    PUSH EDX                            ; 00554ffe
    FSTP float ptr [EBX + 0x20]         ; 00554fff
    CALL core_sound.cpp_CSound_playSound_FUN_0052ea40 ; 00555002
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined core_sound.cpp_CSound_playSound_FUN_0052ea40()
    MOV dword ptr [EBX + 0x2c],0x0      ; 00555007
    ADD ESP,0xc                         ; 0055500e
    MOV dword ptr [EBX + 0x34],0x3f800000 ; 00555011
    ADD ESP,0x4                         ; 00555018
    POP EBX                             ; 0055501b
    RET                                 ; 0055501c

