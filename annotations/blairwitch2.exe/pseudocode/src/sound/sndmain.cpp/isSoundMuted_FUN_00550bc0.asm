; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_00550bc0(void)
;
;
; XREF[8]:
;   core_game.cpp_FUN_004b82e0 at 004b8431
;   core_menu.cpp_FUN_004ed260 at 004ed358
;   core_menu.cpp_FUN_004ee3f0 at 004ee714
;   core_sound.cpp_FUN_005594c0 at 005594cf
;   core_sound.cpp_FUN_0055ac50 at 0055acce
;   sound_sndmain.cpp_FUN_005524b0 at 005524c2
;   sound_sndmain.cpp_FUN_00553680 at 0055386d
;   sound_sndmain.cpp_FUN_00553980 at 00553aa3
;
; Referenced Globals:
;   undefined4 DAT_02648e8c
;
; *****************************************************************************

section .text

    MOV EAX,[0x02648e8c]                ; 00550bc0 | DAT_02648e8c
        ;   Label: sound_sndmain.cpp_isSoundMuted_FUN_00550bc0
    RET                                 ; 00550bc5

