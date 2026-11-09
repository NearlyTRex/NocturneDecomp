; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_CSound_playActorSound_FUN_005609d0(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
;
; XREF[27]:
;   core_actor.cpp_CDemonActor_playSound_FUN_00408c60 at 00408c76
;   core_actor.cpp_FUN_0040cab0 at 0040cbfc
;   core_bindevil.cpp_FUN_0040f840 at 0040f880
;   core_blundrbs.cpp_FUN_00410490 at 00411065
;   core_bugs.cpp_FUN_00421300 at 004214ac
;   core_burncrss.cpp_FUN_00424550 at 00424c50
;   core_charactr.cpp_FUN_0042cd70 at 0042cffb
;   core_disease.cpp_FUN_0045c040 at 0045c080
;   core_elephant.cpp_FUN_00486d40 at 004870dd
;   core_exorcism.cpp_FUN_0048a420 at 0048ae9a
;   ... and 17 more
;
; Called Functions:
;   core_sound.cpp_FUN_0055f020
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 005609d0
        ;   Label: core_sound.cpp_CSound_playActorSound_FUN_005609d0
    PUSH 0x0                            ; 005609d4
    PUSH 0x0                            ; 005609d6
    PUSH dword ptr [EAX + 0x8]          ; 005609d8
    PUSH dword ptr [EAX + 0x4]          ; 005609db
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005609de
    PUSH dword ptr [EAX]                ; 005609e2
    PUSH EDX                            ; 005609e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 005609e5
    PUSH ECX                            ; 005609e9
    CALL core_sound.cpp_FUN_0055f020    ; 005609ea
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_0055f020(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 005609ef
    RET                                 ; 005609f2

