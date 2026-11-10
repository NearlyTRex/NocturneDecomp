; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_killSfx_FUN_00551050(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[58]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 00412772
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 004142a2
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419eb0 at 00419ebc
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418996
;   core_bride.cpp_CBride_processDamage_FUN_0041ead0 at 0041eae3
;   core_chain.cpp_FUN_005b4d30 at 005b559a
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360 at 00427382
;   core_charactr.cpp_CCharacter_kill_FUN_00423900 at 0042392e
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 at 004246c6
;   core_charactr.cpp_CCharacter_processFire_FUN_00425fb0 at 00426346
;   ... and 48 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700
;   sound_sndmain.cpp_FUN_0054d3a0
;   sound_sndmain.cpp_FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00551050
        ;   Label: sound_sndmain.cpp_killSfx_FUN_00551050
    MOV EDX,dword ptr [ESP + 0x8]       ; 00551052
    PUSH EDX                            ; 00551056
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00551057
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 0055105c
    TEST EAX,EAX                        ; 0055105f
    JNZ 0x00551064                      ; 00551061
        ;   XREF to: 00551064 (CONDITIONAL_JUMP)  ; LAB_00551064
    RET                                 ; 00551063
    PUSH EAX                            ; 00551064
        ;   Label: LAB_00551064
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700 ; 00551065
        ;   XREF to: 0054f700 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_0054f700(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 0055106a
    CALL sound_sndmain.cpp_FUN_00551440 ; 0055106d
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
    MOV EAX,0x1                         ; 00551072
    RET                                 ; 00551077

