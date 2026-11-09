; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_00560a00(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
;
; XREF[5]:
;   core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408c80 at 00408c96
;   core_chain.cpp_FUN_004298f0 at 0042a1d4
;   core_pendulum.cpp_FUN_0050e700 at 0050ec31
;   core_sound.cpp_FUN_0055f6ae at 0055fb31
;   core_sound.cpp_FUN_0055ff40 at 0056052a
;
; Called Functions:
;   core_sound.cpp_FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560a00
        ;   Label: core_sound.cpp_CSound_playTrackedActorSound_FUN_00560a00
    PUSH 0x0                            ; 00560a01
    MOV EDX,dword ptr [ESP + 0x18]      ; 00560a03
    PUSH EDX                            ; 00560a07
    PUSH 0x0                            ; 00560a08
    PUSH 0x0                            ; 00560a0a
    MOV ECX,dword ptr [ESP + 0x20]      ; 00560a0c
    PUSH 0x0                            ; 00560a10
    PUSH ECX                            ; 00560a12
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560a13
    PUSH EBX                            ; 00560a17
    CALL core_sound.cpp_FUN_0055f020    ; 00560a18
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_0055f020(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 00560a1d
    POP EBX                             ; 00560a20
    RET                                 ; 00560a21

