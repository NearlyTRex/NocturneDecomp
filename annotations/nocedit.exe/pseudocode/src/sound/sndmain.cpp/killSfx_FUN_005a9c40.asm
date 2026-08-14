; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_killSfx_FUN_005a9c40(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[49]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 004161e1
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 004179c5
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d4d0 at 0041d4dc
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c227
;   core_bride.cpp_CBride_processDamage_FUN_00424830 at 00424846
;   core_chain.cpp_CChain_process_FUN_004300d0 at 004307da
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 at 0042ba02
;   core_charactr.cpp_CCharacter_kill_FUN_00428e30 at 00428e5e
;   core_charactr.cpp_CCharacter_processFire_FUN_0042a830 at 0042ab73
;   core_charactr.cpp_CCharacter_process_FUN_00429870 at 00429a84
;   ... and 39 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005a9c40
        ;   Label: sound_sndmain.cpp_killSfx_FUN_005a9c40
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9c42
    PUSH EDX                            ; 005a9c46
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9c47
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9c4c
    TEST EAX,EAX                        ; 005a9c4f
    JNZ 0x005a9c54                      ; 005a9c51
        ;   XREF to: 005a9c54 (CONDITIONAL_JUMP)  ; LAB_005a9c54
    RET                                 ; 005a9c53
    PUSH EAX                            ; 005a9c54
        ;   Label: LAB_005a9c54
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a9c55
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a9c5a
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a9c5d
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
    MOV EAX,0x1                         ; 005a9c62
    RET                                 ; 005a9c67

