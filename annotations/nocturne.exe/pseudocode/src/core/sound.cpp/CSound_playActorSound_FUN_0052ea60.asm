; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0052ea60(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
;
; XREF[10]:
;   core_actor.cpp_FUN_0040a2e0 at 0040a2f6
;   core_actor.cpp_FUN_0040db50 at 0040dca8
;   core_crossbow.cpp_FUN_0043d1c0 at 0043d433
;   core_elephant.cpp_FUN_00477890 at 00477b80
;   core_fire.cpp_CShell_onCollision_FUN_00489850 at 00489924
;   core_fire.cpp_FUN_0048c0d0 at 0048c12b
;   core_gun.cpp_FUN_004b27c0 at 004b2a1d
;   core_lightgun.cpp_FUN_004c71a0 at 004c792a
;   core_shotgun.cpp_FUN_00515ea0 at 005161e5
;   core_weather.cpp_CWeather_createLightningStrike_FUN_00554d40 at 00554fb4
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0052d120
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0052ea60
        ;   Label: core_sound.cpp_CSound_playActorSound_FUN_0052ea60
    PUSH 0x0                            ; 0052ea64
    PUSH 0x0                            ; 0052ea66
    PUSH dword ptr [EAX + 0x8]          ; 0052ea68
    PUSH dword ptr [EAX + 0x4]          ; 0052ea6b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0052ea6e
    PUSH dword ptr [EAX]                ; 0052ea72
    PUSH EDX                            ; 0052ea74
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052ea75
    PUSH ECX                            ; 0052ea79
    CALL core_sound.cpp_playSfxInternal_FUN_0052d120 ; 0052ea7a
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0052d120(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0052ea7f
    RET                                 ; 0052ea82

