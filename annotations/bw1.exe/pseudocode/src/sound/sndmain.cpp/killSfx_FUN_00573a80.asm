; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_killSfx_FUN_00573a80(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[60]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_004123d0 at 004123e2
;   core_batman.cpp_CBatman_processDamage_FUN_00413f90 at 00413fa2
;   core_bmppuzzl.cpp_CAudioRecPuzzle_process_FUN_00416790 at 00416b9e
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_0041d330 at 0041d33c
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041be16
;   core_bride.cpp_CBride_processDamage_FUN_00424b10 at 00424b23
;   core_carved.cpp_CCarved_processDamage_FUN_0042b850 at 0042b925
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00428bc7
;   core_chain.cpp_CChain_process_FUN_00435c70 at 004364da
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90 at 00430db2
;   ... and 50 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00573a80
        ;   Label: sound_sndmain.cpp_killSfx_FUN_00573a80
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573a82
    PUSH EDX                            ; 00573a86
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 00573a87
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00573a8c
    TEST EAX,EAX                        ; 00573a8f
    JNZ 0x00573a94                      ; 00573a91
        ;   XREF to: 00573a94 (CONDITIONAL_JUMP)  ; LAB_00573a94
    RET                                 ; 00573a93
    PUSH EAX                            ; 00573a94
        ;   Label: LAB_00573a94
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00573a95
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00573a9a
    CALL sound_sndmain.cpp_FUN_00573e70 ; 00573a9d
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 00573aa2
    RET                                 ; 00573aa7

