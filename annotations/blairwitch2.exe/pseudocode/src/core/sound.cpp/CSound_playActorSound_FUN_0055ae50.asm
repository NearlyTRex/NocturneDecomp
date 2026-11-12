; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_0055ae50(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
;
; XREF[28]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040cdd3
;   core_actor.cpp_CDemonActor_playSound_FUN_00408e50 at 00408e66
;   core_basicene.cpp_CBasicEnemy_processDamage_FUN_0059f800 at 0059f855
;   core_basicene.cpp_FUN_0059e880 at 0059e8ab
;   core_confedrt.cpp_CConfederate_processMotionEvent_FUN_005a1350 at 005a13b8
;   core_confedrt.cpp_FUN_005a14e0 at 005a1741
;   core_confzomb.cpp_CConfederateZombie_processMotionEvent_FUN_005a2520 at 005a25f4
;   core_cross.cpp_FUN_005a6cf0 at 005a6d60
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0 at 0043a9fb
;   core_doc.cpp_FUN_0045bdc0 at 0045c749
;   ... and 18 more
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_005594c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0055ae50
        ;   Label: core_sound.cpp_CSound_playActorSound_FUN_0055ae50
    PUSH 0x0                            ; 0055ae54
    PUSH 0x0                            ; 0055ae56
    PUSH dword ptr [EAX + 0x8]          ; 0055ae58
    PUSH dword ptr [EAX + 0x4]          ; 0055ae5b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055ae5e
    PUSH dword ptr [EAX]                ; 0055ae62
    PUSH EDX                            ; 0055ae64
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae65
    PUSH ECX                            ; 0055ae69
    CALL core_sound.cpp_playSfxInternal_FUN_005594c0 ; 0055ae6a
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_005594c0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0055ae6f
    RET                                 ; 0055ae72

