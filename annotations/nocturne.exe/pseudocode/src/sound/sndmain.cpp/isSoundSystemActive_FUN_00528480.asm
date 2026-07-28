; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00528480(void)
;
;
; XREF[5]:
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_005284a0 at 005284a0
;   sound_sndmain.cpp_enableSoundSystem_FUN_00527e40 at 00527e44
;   sound_sndmain.cpp_hasHardware3DSound_FUN_005284f0 at 005284f0
;   sound_sndmain.cpp_isSoundBusy_FUN_00528490 at 00528490
;   sound_sndmain.cpp_selectSoundDevice_FUN_00528410 at 00528415
;
; Referenced Globals:
;   undefined4 DAT_02dc8318
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc8318],0x0      ; 00528480 | DAT_02dc8318
        ;   Label: sound_sndmain.cpp_isSoundSystemActive_FUN_00528480
    SETNZ AL                            ; 00528487
    AND EAX,0xff                        ; 0052848a
    RET                                 ; 0052848f

