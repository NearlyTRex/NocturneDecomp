; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350(CDemonActor *this_ptr,char *sound_name,float delay)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
; float            Stack[0xc]:4   delay
;
; Referenced Globals:
;   CSound* g_CSound_PTR_005bed68 = 02dc9450
;
; Called Functions:
;   core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a350
        ;   Label: core_actor.cpp_CDemonActor_playAmbientSoundWithDelay_FUN_0040a350
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040a351
    LEA EAX,[EDX + 0x20]                ; 0040a355
    PUSH dword ptr [ESP + 0x10]         ; 0040a358
    PUSH EAX                            ; 0040a35c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a35d
    PUSH ECX                            ; 0040a361
    PUSH EDX                            ; 0040a362
    MOV EBX,dword ptr [0x005bed68]      ; 0040a363 | g_CSound_PTR_005bed68
    PUSH EBX                            ; 0040a369
    CALL core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50 ; 0040a36a
        ;   XREF to: 0052eb50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position_tracker, ...)
    ADD ESP,0x14                        ; 0040a36f
    POP EBX                             ; 0040a372
    LEA EAX,[EAX]                       ; 0040a373
    LEA EDX,[EDX]                       ; 0040a379
    NOP                                 ; 0040a37f

