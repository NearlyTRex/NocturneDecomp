; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_FUN_00552b10(void)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_005524b0 at 005524b4
;   sound_sndmain.cpp_FUN_00552b50 at 00552b50
;   sound_sndmain.cpp_selectSoundDevice_FUN_00552aa0 at 00552aa5
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02648e80],0x0      ; 00552b10 | DAT_02648e80
        ;   Label: sound_sndmain.cpp_FUN_00552b10
    SETNZ AL                            ; 00552b17
    AND EAX,0xff                        ; 00552b1a
    RET                                 ; 00552b1f

