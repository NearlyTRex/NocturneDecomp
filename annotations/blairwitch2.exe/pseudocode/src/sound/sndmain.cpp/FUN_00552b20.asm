; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00552b20(void)
;
;
; XREF[7]:
;   core_dracbrid.cpp_FUN_00465400 at 00465436
;   core_menu.cpp_FUN_004ed260 at 004ed972
;   core_sound.cpp_FUN_0055a1d0 at 0055a239
;   sound_sndmain.cpp_FUN_005506b0 at 005506d7
;   sound_sndmain.cpp_FUN_005524b0 at 005524cb
;   sound_sndmain.cpp_FUN_00553610 at 00553610
;   sound_sndmain.cpp_setSoundOutputMode_FUN_005526f0 at 005526f6
;
; Referenced Globals:
;   undefined4 DAT_02648e84
;
; *****************************************************************************

section .text

    MOV EAX,[0x02648e84]                ; 00552b20 | DAT_02648e84
        ;   Label: sound_sndmain.cpp_FUN_00552b20
    RET                                 ; 00552b25

