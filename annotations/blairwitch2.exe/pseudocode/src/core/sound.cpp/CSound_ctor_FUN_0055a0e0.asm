; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSound * __cdecl core_sound_cpp_CSound_ctor_FUN_0055a0e0(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_sound.cpp_staticInit_FUN_00558c40 at 00558c45
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005511e0
;   sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a0e0
        ;   Label: core_sound.cpp_CSound_ctor_FUN_0055a0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055a0e1
    PUSH 0x3                            ; 0055a0e5
    MOV dword ptr [EBX],0x1400          ; 0055a0e7
    CALL sound_sndmain.cpp_FUN_005511e0 ; 0055a0ed
        ;   XREF to: 005511e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005511e0(int channel_count)
    ADD ESP,0x4                         ; 0055a0f2
    CALL sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0 ; 0055a0f5
        ;   XREF to: 005523d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_resetSoundSystemDefaults_FUN_005523d0()
    MOV EAX,EBX                         ; 0055a0fa
    POP EBX                             ; 0055a0fc
    RET                                 ; 0055a0fd

