; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408e50(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408e50
        ;   Label: core_actor.cpp_CDemonActor_playSound_FUN_00408e50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408e51
    LEA EAX,[EDX + 0x20]                ; 00408e55
    PUSH EAX                            ; 00408e58
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408e59
    PUSH ECX                            ; 00408e5d
    PUSH EDX                            ; 00408e5e
    MOV EBX,dword ptr [0x0061c068]      ; 00408e5f | DAT_0061c068
    PUSH EBX                            ; 00408e65
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 00408e66
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00408e6b
    POP EBX                             ; 00408e6e
    RET                                 ; 00408e6f

