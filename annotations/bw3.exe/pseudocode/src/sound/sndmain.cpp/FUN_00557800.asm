; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00557800(void)
;
;
; XREF[2]:
;   core_sound.cpp_FUN_00560930 at 00560935
;   sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010 at 00558038
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520
;   sound_sndmain.cpp_FUN_00556c60
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557800
        ;   Label: sound_sndmain.cpp_FUN_00557800
    PUSH ESI                            ; 00557801
    CALL sound_sndmain.cpp_FUN_00558e90 ; 00557802
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00558e90()
    MOV EBX,0x2cebc24                   ; 00557807
    CALL sound_sndmain.cpp_FUN_00556c60 ; 0055780c
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556c60()
    LEA ESI,[EBX + 0x6c00]              ; 00557811
    PUSH EBX                            ; 00557817
        ;   Label: LAB_00557817
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520 ; 00557818
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00553520(CSfxSample * this_ptr)
    ADD EBX,0x1b0                       ; 0055781d
    ADD ESP,0x4                         ; 00557823
    CMP EBX,ESI                         ; 00557826
    JNZ 0x00557817                      ; 00557828
        ;   XREF to: 00557817 (CONDITIONAL_JUMP)  ; LAB_00557817
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 0055782a
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    POP ESI                             ; 0055782f
    POP EBX                             ; 00557830
    RET                                 ; 00557831

