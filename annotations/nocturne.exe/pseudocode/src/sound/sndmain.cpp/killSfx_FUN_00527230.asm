; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[49]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00413040 at 00413056
;   core_batman.cpp_CBatman_processDamage_FUN_00414930 at 00414946
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40 at 00419f4c
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00418c97
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420c56
;   core_chain.cpp_CChain_process_FUN_0042bca0 at 0042c3aa
;   core_charactr.cpp_CCharacter_FUN_004259f0 at 00425c04
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427b82
;   core_charactr.cpp_CCharacter_kill_FUN_00424f40 at 00424f6e
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0 at 00426cf3
;   ... and 39 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00527230
        ;   Label: sound_sndmain.cpp_killSfx_FUN_00527230
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527232
    PUSH EDX                            ; 00527236
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00527237
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0052723c
    TEST EAX,EAX                        ; 0052723f
    JNZ 0x00527244                      ; 00527241
        ;   XREF to: 00527244 (CONDITIONAL_JUMP)  ; LAB_00527244
    RET                                 ; 00527243
    PUSH EAX                            ; 00527244
        ;   Label: LAB_00527244
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00527245
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot * slot)
    ADD ESP,0x4                         ; 0052724a
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052724d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00527252
    RET                                 ; 00527257

