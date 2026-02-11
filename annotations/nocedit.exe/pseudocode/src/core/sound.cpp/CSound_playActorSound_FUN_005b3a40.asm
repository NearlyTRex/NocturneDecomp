; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_playActorSound_FUN_005b3a40 (CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 at 0040cb45
;   core_actor.cpp_CDemonActor_playSound_FUN_00408f60 at 00408f76
;   core_crossbow.cpp_CCrossbow_fire_FUN_00448f20 at 00449193
;   core_elephant.cpp_CElephantGun_fire_FUN_004a7160 at 004a7461
;   core_fire.cpp_CFireEffect_FUN_004c8c10 at 004c8c6b
;   core_gun.cpp_CGun_fire_FUN_004f0350 at 004f05b3
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 00506406
;   core_shotgun.cpp_CShotgun_fire_FUN_00588060 at 0058837a
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 005b3a40
        ;   Label: core_sound.cpp_CSound_playActorSound_FUN_005b3a40
    PUSH 0x0                            ; 005b3a44
    PUSH 0x0                            ; 005b3a46
    PUSH dword ptr [EAX + 0x8]          ; 005b3a48
    PUSH dword ptr [EAX + 0x4]          ; 005b3a4b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b3a4e
    PUSH dword ptr [EAX]                ; 005b3a52
    PUSH EDX                            ; 005b3a54
    MOV ECX,dword ptr [ESP + 0x20]      ; 005b3a55
    PUSH ECX                            ; 005b3a59
    CALL core_sound.cpp_playSfxInternal_FUN_005b1fd0 ; 005b3a5a
        ;   XREF to: 005b1fd0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005b1fd0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005b3a5f
    RET                                 ; 005b3a62

