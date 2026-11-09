; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position_tracker)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position_tracker
;
; XREF[6]:
;   core_actor.cpp_CDemonActor_playAmbientSound_FUN_00408e70 at 00408e86
;   core_chain.cpp_FUN_005b4d30 at 005b5614
;   core_pendulum.cpp_FUN_005156d0 at 00515c01
;   core_sound.cpp_FUN_00559b4e at 00559fd1
;   core_sound.cpp_FUN_0055a3c0 at 0055ab7b
;   core_vehicle.cpp_FUN_00584d90 at 00584dc4
;
; Called Functions:
;   core_sound.cpp_FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ae80
        ;   Label: core_sound.cpp_CSound_playTrackedActorSound_FUN_0055ae80
    PUSH 0x0                            ; 0055ae81
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055ae83
    PUSH EDX                            ; 0055ae87
    PUSH 0x0                            ; 0055ae88
    PUSH 0x0                            ; 0055ae8a
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae8c
    PUSH 0x0                            ; 0055ae90
    PUSH ECX                            ; 0055ae92
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055ae93
    PUSH EBX                            ; 0055ae97
    CALL core_sound.cpp_FUN_005594c0    ; 0055ae98
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_005594c0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0055ae9d
    POP EBX                             ; 0055aea0
    RET                                 ; 0055aea1

