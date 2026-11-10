; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_FUN_00552b30(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[10]:
;   core_menu.cpp_FUN_004ed260 at 004ee016
;   core_sound.cpp_FUN_0055a100 at 0055a13c
;   sound_snddx.cpp_FUN_00555560 at 00555809
;   sound_snddx.cpp_FUN_00555a80 at 00555a87
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0054d840 at 0054d872
;   sound_sndmain.cpp_FUN_005506b0 at 005508f9
;   sound_sndmain.cpp_FUN_00550b70 at 00550b70
;   sound_sndmain.cpp_FUN_00553380 at 0055338c
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510 at 00554556
;   sound_sndmain.cpp_setSfxChannelVol_FUN_00551100 at 0055114b
;
; Referenced Globals:
;   undefined4 DAT_02648e88
;
; *****************************************************************************

section .text

    MOV EAX,[0x02648e88]                ; 00552b30 | DAT_02648e88
        ;   Label: sound_sndmain.cpp_FUN_00552b30
    RET                                 ; 00552b35

