; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_sound_cpp_FUN_0057d940(CSound *this_ptr,CDemonActor *actor,char *sound_name,CVector3f *position,float delay )
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   sound_name
; CVector3f *      Stack[0x10]:4   position
; float            Stack[0x14]:4   delay
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_playSoundWithDelay_FUN_00408c60 at 00408c7a
;   core_fire.cpp_FUN_004b56a0 at 004b59cf
;   core_fire.cpp_FUN_004b5bc0 at 004b5cf7
;
; Called Functions:
;   core_sound.cpp_FUN_0057bef0
;   sound_sndmain.cpp_FUN_005729d0
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d940
        ;   Label: core_sound.cpp_FUN_0057d940
    MOV EBX,dword ptr [ESP + 0x14]      ; 0057d941
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 0057d945
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
    PUSH dword ptr [ESP + 0x18]         ; 0057d94a
    CALL sound_sndmain.cpp_FUN_005729d0 ; 0057d94e
        ;   XREF to: 005729d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005729d0()
    ADD ESP,0x4                         ; 0057d953
    PUSH 0x0                            ; 0057d956
    PUSH 0x0                            ; 0057d958
    PUSH dword ptr [EBX + 0x8]          ; 0057d95a
    PUSH dword ptr [EBX + 0x4]          ; 0057d95d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0057d960
    PUSH dword ptr [EBX]                ; 0057d964
    PUSH EDX                            ; 0057d966
    MOV ECX,dword ptr [ESP + 0x24]      ; 0057d967
    PUSH ECX                            ; 0057d96b
    CALL core_sound.cpp_FUN_0057bef0    ; 0057d96c
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_FUN_0057bef0(void * user_data, char * sound_name, float x, float y, ...)
    ADD ESP,0x1c                        ; 0057d971
    MOV EBX,EAX                         ; 0057d974
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0057d976
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    MOV EAX,EBX                         ; 0057d97b
    POP EBX                             ; 0057d97d
    RET                                 ; 0057d97e

