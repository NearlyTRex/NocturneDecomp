; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playSound_FUN_005609b0(CSound *this_ptr,void *user_data,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   user_data
; char *           Stack[0xc]:4   sound_name
;
; XREF[12]:
;   core_event.cpp_FUN_0048c2e0 at 0048f261
;   core_game.cpp_FUN_004bb100 at 004bb17f
;   core_game.cpp_FUN_004c4a60 at 004c4b56
;   core_inv.cpp_FUN_004d9fc0 at 004d9ff8
;   core_inv.cpp_FUN_004da020 at 004da186
;   core_inv.cpp_FUN_004dcdb0 at 004dd131
;   core_script.cpp_FUN_00530150 at 005302ca
;   core_sound.cpp_CSound_playAmbientSound_FUN_00560940 at 00560992
;   core_sound.cpp_FUN_0055fd30 at 0055fe25
;   core_weather.cpp_CWeather_createThunder_FUN_0057c840 at 0057c872
;   ... and 2 more
;
; Called Functions:
;   core_sound.cpp_FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005609b0
        ;   Label: core_sound.cpp_CSound_playSound_FUN_005609b0
    PUSH 0x0                            ; 005609b2
    PUSH 0x0                            ; 005609b4
    PUSH 0x0                            ; 005609b6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005609b8
    PUSH 0x0                            ; 005609bc
    PUSH EDX                            ; 005609be
    MOV ECX,dword ptr [ESP + 0x20]      ; 005609bf
    PUSH ECX                            ; 005609c3
    CALL core_sound.cpp_FUN_0055f020    ; 005609c4
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_0055f020(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005609c9
    RET                                 ; 005609cc

