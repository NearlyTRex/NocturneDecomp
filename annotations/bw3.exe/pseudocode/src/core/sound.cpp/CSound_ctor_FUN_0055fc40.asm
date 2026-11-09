; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055fc40(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_0055e7a0 at 0055e7a5
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556d70
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fc40
        ;   Label: core_sound.cpp_CSound_ctor_FUN_0055fc40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055fc41
    PUSH 0x3                            ; 0055fc45
    MOV dword ptr [EBX],0x1400          ; 0055fc47
    CALL sound_sndmain.cpp_FUN_00556d70 ; 0055fc4d
        ;   XREF to: 00556d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556d70(int channel_count)
    ADD ESP,0x4                         ; 0055fc52
    CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60 ; 0055fc55
        ;   XREF to: 00557f60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_00557f60()
    MOV EAX,EBX                         ; 0055fc5a
    POP EBX                             ; 0055fc5c
    RET                                 ; 0055fc5d

