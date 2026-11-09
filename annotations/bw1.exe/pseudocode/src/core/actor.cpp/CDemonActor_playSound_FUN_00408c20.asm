; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_CDemonActor_playSound_FUN_00408c20(CDemonActor *this_ptr,char *sound_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   sound_name
;
; Referenced Globals:
;   undefined4 DAT_006236b8
;
; Called Functions:
;   core_sound.cpp_CSound_playActorSound_FUN_0057d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c20
        ;   Label: core_actor.cpp_CDemonActor_playSound_FUN_00408c20
    MOV EDX,dword ptr [ESP + 0x8]       ; 00408c21
    LEA EAX,[EDX + 0x20]                ; 00408c25
    PUSH EAX                            ; 00408c28
    MOV ECX,dword ptr [ESP + 0x10]      ; 00408c29
    PUSH ECX                            ; 00408c2d
    PUSH EDX                            ; 00408c2e
    MOV EBX,dword ptr [0x006236b8]      ; 00408c2f | DAT_006236b8
    PUSH EBX                            ; 00408c35
    CALL core_sound.cpp_CSound_playActorSound_FUN_0057d8a0 ; 00408c36
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0057d8a0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 00408c3b
    POP EBX                             ; 00408c3e
    RET                                 ; 00408c3f

