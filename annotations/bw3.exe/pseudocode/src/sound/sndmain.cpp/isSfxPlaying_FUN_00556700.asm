; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[59]:
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00596eb8
;   core_bat.cpp_CBat_process_FUN_0040f010 at 0040f184
;   core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00412530 at 0041290c
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a1c0
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 0041806e
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 004213b0
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 004245f4
;   core_carved.cpp_CCarved_processDamage_FUN_00428a80 at 00428c36
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426f41
;   core_chain.cpp_CChain_process_FUN_004298f0 at 0042a169
;   ... and 49 more
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0
;   sound_sndmain.cpp_unlockSound_FUN_00556fd0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0 ; 00556700
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005586d0()
        ;   Label: sound_sndmain.cpp_isSfxPlaying_FUN_00556700
    CMP EAX,0x1                         ; 00556705
    JL 0x00556729                       ; 00556708
        ;   XREF to: 00556729 (CONDITIONAL_JUMP)  ; LAB_00556729
    PUSH 0x1                            ; 0055670a
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055670c
    PUSH ECX                            ; 00556710
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10 ; 00556711
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556716
    TEST EAX,EAX                        ; 00556719
    JNZ 0x0055671e                      ; 0055671b
        ;   XREF to: 0055671e (CONDITIONAL_JUMP)  ; LAB_0055671e
    RET                                 ; 0055671d
    CALL sound_sndmain.cpp_unlockSound_FUN_00556fd0 ; 0055671e
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00556fd0()
        ;   Label: LAB_0055671e
    MOV EAX,0x1                         ; 00556723
    RET                                 ; 00556728
    PUSH 0x0                            ; 00556729
        ;   Label: LAB_00556729
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055672b
    PUSH EDX                            ; 0055672f
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10 ; 00556730
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556735
    TEST EAX,EAX                        ; 00556738
    SETNZ AL                            ; 0055673a
    AND EAX,0xff                        ; 0055673d
    RET                                 ; 00556742

