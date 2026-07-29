; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[53]:
;   core_bat.cpp_CBat_process_FUN_00411c40 at 00411dab
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004129db
;   core_batcreat.cpp_FUN_00413040 at 00413145
;   core_batman.cpp_CBatman_processDamage_FUN_00414930 at 00414a35
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413e1d
;   core_boneguy.cpp_FUN_00418a00 at 00418fee
;   core_bride.cpp_CBride_processDamage_FUN_00420c40 at 00420e01
;   core_bride.cpp_FUN_0041fe40 at 0041ff02
;   core_chain.cpp_CChain_process_FUN_0042bca0 at 0042c3b9
;   core_door.cpp_CDoor_onLocked_FUN_00456650 at 0045665c
;   ... and 43 more
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 ; 00526c50
        ;   XREF to: 005284f0 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0()
        ;   Label: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
    TEST EAX,EAX                        ; 00526c55
    JZ 0x00526c78                       ; 00526c57
        ;   XREF to: 00526c78 (CONDITIONAL_JUMP)  ; LAB_00526c78
    PUSH 0x1                            ; 00526c59
    MOV ECX,dword ptr [ESP + 0x8]       ; 00526c5b
    PUSH ECX                            ; 00526c5f
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526c60
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 00526c65
    TEST EAX,EAX                        ; 00526c68
    JNZ 0x00526c6d                      ; 00526c6a
        ;   XREF to: 00526c6d (CONDITIONAL_JUMP)  ; LAB_00526c6d
    RET                                 ; 00526c6c
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526c6d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
        ;   Label: LAB_00526c6d
    MOV EAX,0x1                         ; 00526c72
    RET                                 ; 00526c77
    PUSH EAX                            ; 00526c78
        ;   Label: LAB_00526c78
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526c79
    PUSH EDX                            ; 00526c7d
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526c7e
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 00526c83
    TEST EAX,EAX                        ; 00526c86
    SETNZ AL                            ; 00526c88
    AND EAX,0xff                        ; 00526c8b
    RET                                 ; 00526c90

