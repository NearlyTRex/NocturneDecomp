; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c60(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c60
        ;   Label: core_actor.cpp_CDemonActor_playSound_FUN_00408c60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c61
    LEA EAX,[EDX + 0x20]                ; 00408c65
    PUSH EAX                            ; 00408c68
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c69
    PUSH ECX                            ; 00408c6d
    PUSH EDX                            ; 00408c6e
    MOV EBX,dword ptr [0x006045f8]      ; 00408c6f | DAT_006045f8
    PUSH EBX                            ; 00408c75
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 00408c76
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00408c7b
    POP EBX                             ; 00408c7e
    RET                                 ; 00408c7f

