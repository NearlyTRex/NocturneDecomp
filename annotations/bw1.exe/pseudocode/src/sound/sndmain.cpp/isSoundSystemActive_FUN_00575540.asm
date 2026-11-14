; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_00575540(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_enableHwSoundMixing_FUN_00575580 at 00575580
;   sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 at 00574ee4
;   sound_sndmain.cpp_selectSoundDevice_FUN_005754d0 at 005754d5
;
; Referenced Globals:
;   undefined4 DAT_02c80650
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c80650],0x0      ; 00575540 | DAT_02c80650
        ;   Label: sound_sndmain.cpp_isSoundSystemActive_FUN_00575540
    SETNZ AL                            ; 00575547
    AND EAX,0xff                        ; 0057554a
    RET                                 ; 0057554f

