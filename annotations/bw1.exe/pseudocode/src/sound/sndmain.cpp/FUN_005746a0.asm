; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_005746a0(void)
;
;
; XREF[2]:
;   core_sound.cpp_FUN_0057d800 at 0057d805
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00574ea0 at 00574ec8
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_FUN_00573b00
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005746a0
        ;   Label: sound_sndmain.cpp_FUN_005746a0
    PUSH ESI                            ; 005746a1
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 005746a2
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    MOV EBX,0x2c78ff4                   ; 005746a7
    CALL sound_sndmain.cpp_FUN_00573b00 ; 005746ac
        ;   XREF to: 00573b00 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00573b00()
    LEA ESI,[EBX + 0x6c00]              ; 005746b1
    PUSH EBX                            ; 005746b7
        ;   Label: LAB_005746b7
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 005746b8
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD EBX,0x1b0                       ; 005746bd
    ADD ESP,0x4                         ; 005746c3
    CMP EBX,ESI                         ; 005746c6
    JNZ 0x005746b7                      ; 005746c8
        ;   XREF to: 005746b7 (CONDITIONAL_JUMP)  ; LAB_005746b7
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005746ca
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    POP ESI                             ; 005746cf
    POP EBX                             ; 005746d0
    RET                                 ; 005746d1

