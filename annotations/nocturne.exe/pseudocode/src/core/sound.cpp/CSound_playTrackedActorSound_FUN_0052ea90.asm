; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_playAmbientSound_FUN_0040a300 at 0040a316
;   core_chain.cpp_CChain_process_FUN_0042bca0 at 0042c423
;   core_pendulum.cpp_CPendulum_updateSwing_FUN_004f3430 at 004f3942
;   core_sound.cpp_CSound_FUN_0052dff0 at 0052e782
;   core_sound.cpp_processTrainSounds_FUN_0052d790 at 0052dbe9
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0 at 0054f7d4
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0052d120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ea90
        ;   Label: core_sound.cpp_CSound_playTrackedActorSound_FUN_0052ea90
    PUSH 0x0                            ; 0052ea91
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052ea93
    PUSH EDX                            ; 0052ea97
    PUSH 0x0                            ; 0052ea98
    PUSH 0x0                            ; 0052ea9a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0052ea9c
    PUSH 0x0                            ; 0052eaa0
    PUSH ECX                            ; 0052eaa2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0052eaa3
    PUSH EBX                            ; 0052eaa7
    CALL core_sound.cpp_playSfxInternal_FUN_0052d120 ; 0052eaa8
        ;   XREF to: 0052d120 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0052d120(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0052eaad
    POP EBX                             ; 0052eab0
    RET                                 ; 0052eab1

