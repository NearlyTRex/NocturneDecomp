; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[53]:
;   core_bat.cpp_CBat_process_FUN_00414a00 at 00414b6b
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004159cb
;   core_batcreat.cpp_FUN_00416030 at 00416135
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416e8d
;   core_batman.cpp_FUN_004179a0 at 00417aa5
;   core_boneguy.cpp_FUN_0041bf90 at 0041c57e
;   core_bride.cpp_FUN_00423a30 at 00423ca1
;   core_bride.cpp_FUN_00424830 at 004249f1
;   core_chain.cpp_FUN_004300d0 at 004307e9
;   core_door.cpp_CDoor_FUN_00481210 at 0048121c
;   ... and 43 more
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0 ; 005a9660
        ;   XREF to: 005ab5a0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005ab5a0()
        ;   Label: sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
    TEST EAX,EAX                        ; 005a9665
    JZ 0x005a9688                       ; 005a9667
        ;   XREF to: 005a9688 (CONDITIONAL_JUMP)  ; LAB_005a9688
    PUSH 0x1                            ; 005a9669
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a966b
    PUSH ECX                            ; 005a966f
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a9670
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9675
    TEST EAX,EAX                        ; 005a9678
    JNZ 0x005a967d                      ; 005a967a
        ;   XREF to: 005a967d (CONDITIONAL_JUMP)  ; LAB_005a967d
    RET                                 ; 005a967c
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005a967d
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005a967d
    MOV EAX,0x1                         ; 005a9682
    RET                                 ; 005a9687
    PUSH EAX                            ; 005a9688
        ;   Label: LAB_005a9688
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9689
    PUSH EDX                            ; 005a968d
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00 ; 005a968e
        ;   XREF to: 005a5d00 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005a5d00(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005a9693
    TEST EAX,EAX                        ; 005a9696
    SETNZ AL                            ; 005a9698
    AND EAX,0xff                        ; 005a969b
    RET                                 ; 005a96a0

