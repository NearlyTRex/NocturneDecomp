; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c40 at 00408c56
;   core_chain.cpp_CChain_process_FUN_00435c70 at 00436554
;   core_pendulum.cpp_CPendulum_updateSwing_FUN_00536a20 at 00536f51
;   core_sound.cpp_CSound_process_FUN_0057ce10 at 0057d3fa
;   core_sound.cpp_FUN_0057c57e at 0057ca01
;   core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005a89c0 at 005a89f4
;
; Called Functions:
;   core_sound.cpp_playSfxInternal_FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d8d0
        ;   Label: core_sound.cpp_CSound_playTrackedActorSound_FUN_0057d8d0
    PUSH 0x0                            ; 0057d8d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057d8d3
    PUSH EDX                            ; 0057d8d7
    PUSH 0x0                            ; 0057d8d8
    PUSH 0x0                            ; 0057d8da
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d8dc
    PUSH 0x0                            ; 0057d8e0
    PUSH ECX                            ; 0057d8e2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0057d8e3
    PUSH EBX                            ; 0057d8e7
    CALL core_sound.cpp_playSfxInternal_FUN_0057bef0 ; 0057d8e8
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_playSfxInternal_FUN_0057bef0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0057d8ed
    POP EBX                             ; 0057d8f0
    RET                                 ; 0057d8f1

