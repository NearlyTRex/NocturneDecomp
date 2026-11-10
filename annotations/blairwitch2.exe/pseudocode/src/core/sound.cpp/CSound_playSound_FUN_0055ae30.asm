; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playSound_FUN_0055ae30(CSound *this_ptr,void *user_data,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   user_data
; char *           Stack[0xc]:4   sound_name
;
; XREF[7]:
;   core_event.cpp_FUN_00489670 at 0048c24b
;   core_game.cpp_FUN_004b90d0 at 004bab21
;   core_script.cpp_CScript_startDialogLine_FUN_00529750 at 005298ca
;   core_sound.cpp_CSound_playAmbientSound_FUN_0055adc0 at 0055ae12
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_00583160 at 005833a1
;   core_weather.cpp_CWeather_createThunder_FUN_0058acf0 at 0058ad22
;   core_weather.cpp_CWeather_update_FUN_0058a660 at 0058aa14
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 0055ae30
        ;   Label: core_sound.cpp_CSound_playSound_FUN_0055ae30
    PUSH 0x0                            ; 0055ae32
    PUSH 0x0                            ; 0055ae34
    PUSH 0x0                            ; 0055ae36
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055ae38
    PUSH 0x0                            ; 0055ae3c
    PUSH EDX                            ; 0055ae3e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae3f
    PUSH ECX                            ; 0055ae43
    CALL core_sound.cpp_playSfxInternal_FUN_005594c0 ; 0055ae44
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005594c0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0055ae49
    RET                                 ; 0055ae4c

