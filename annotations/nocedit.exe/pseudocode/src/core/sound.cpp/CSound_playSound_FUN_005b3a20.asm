; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sound_cpp_CSound_playSound_FUN_005b3a20(CSound *this_ptr,void *user_data,char *sound_name)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   user_data
; char *           Stack[0xc]:4   sound_name
;
; XREF[9]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac5e0
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df4a0
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004dd9d0 at 004dda6b
;   core_msnedit.cpp_CDemonMission_FUN_0053eb40 at 0053eb7d
;   core_script.cpp_CScript_getDialogDuration_FUN_0055ff00 at 0056007a
;   core_sound.cpp_CSound_init_FUN_005b2dd0 at 005b2ec5
;   core_sound.cpp_CSound_playAmbientSound_FUN_005b39b0 at 005b3a02
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_005e7030 at 005e7246
;   core_weather.cpp_CWeather_FUN_005eeaf0 at 005eee9b
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005b3a20
        ;   Label: core_sound.cpp_CSound_playSound_FUN_005b3a20
    PUSH 0x0                            ; 005b3a22
    PUSH 0x0                            ; 005b3a24
    PUSH 0x0                            ; 005b3a26
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b3a28
    PUSH 0x0                            ; 005b3a2c
    PUSH EDX                            ; 005b3a2e
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b3a2f
    PUSH ECX                            ; 005b3a33
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3a34
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005b3a39
    RET                                 ; 005b3a3c

