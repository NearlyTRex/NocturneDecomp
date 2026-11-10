; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_killSfx_FUN_00556be0(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[58]:
;   core_boneguy.cpp_CBaalSkel_processDamage_FUN_0041a810 at 0041a821
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a7fa
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0 at 004192e1
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 0041869f
;   core_bugs.cpp_CBugs_process_FUN_00421300 at 004215a1
;   core_burncrss.cpp_CBurncross_process_FUN_00424e30 at 004252d4
;   core_burncrss.cpp_CBurncross_setWeaponState_FUN_00425300 at 0042531e
;   core_carved.cpp_CCarved_processDamage_FUN_00428a80 at 00428b54
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00425e8e
;   core_chain.cpp_CChain_process_FUN_004298f0 at 0042a15a
;   ... and 48 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_FUN_00552f10
;   sound_sndmain.cpp_FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556be0
        ;   Label: sound_sndmain.cpp_killSfx_FUN_00556be0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556be2
    PUSH EDX                            ; 00556be6
    CALL sound_sndmain.cpp_FUN_00552f10 ; 00556be7
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_00552f10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00556bec
    TEST EAX,EAX                        ; 00556bef
    JNZ 0x00556bf4                      ; 00556bf1
        ;   XREF to: 00556bf4 (CONDITIONAL_JUMP)  ; LAB_00556bf4
    RET                                 ; 00556bf3
    PUSH EAX                            ; 00556bf4
        ;   Label: LAB_00556bf4
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 00556bf5
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00556bfa
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00556bfd
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,0x1                         ; 00556c02
    RET                                 ; 00556c07

