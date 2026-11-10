; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0057d8a0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
;
; XREF[13]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040c870 at 0040c9bc
;   core_actor.cpp_CDemonActor_playSound_FUN_00408c20 at 00408c36
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449cab
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e53d
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 at 004b6cbb
;   core_fire.cpp_CShell_onCollision_FUN_004b4230 at 004b4304
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e88dc
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 0050036c
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501acc
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 0054042c
;   ... and 3 more
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0057bef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0057d8a0
        ;   Label: core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
    PUSH 0x0                            ; 0057d8a4
    PUSH 0x0                            ; 0057d8a6
    PUSH dword ptr [EAX + 0x8]          ; 0057d8a8
    PUSH dword ptr [EAX + 0x4]          ; 0057d8ab
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057d8ae
    PUSH dword ptr [EAX]                ; 0057d8b2
    PUSH EDX                            ; 0057d8b4
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d8b5
    PUSH ECX                            ; 0057d8b9
    CALL core_sound.cpp_playSfxInternal_FUN_0057bef0 ; 0057d8ba
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0057bef0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0057d8bf
    RET                                 ; 0057d8c2

