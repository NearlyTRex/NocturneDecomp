; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_isSoundSystemActive_FUN_005586b0(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_005586f0 at 005586f0
;   sound_sndmain.cpp_enableSoundSystem_FUN_00558050 at 00558054
;   sound_sndmain.cpp_selectSoundDevice_FUN_00558640 at 00558645
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf3280],0x0      ; 005586b0 | DAT_02cf3280
        ;   Label: sound_sndmain.cpp_isSoundSystemActive_FUN_005586b0
    SETNZ AL                            ; 005586b7
    AND EAX,0xff                        ; 005586ba
    RET                                 ; 005586bf

