; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00552b40(void)
;
;
; XREF[4]:
;   core_menu.cpp_FUN_004ed260 at 004ed906
;   sound_snddx.cpp_getDirectSoundDevice_FUN_00557910 at 00557a38
;   sound_sndmain.cpp_FUN_00553680 at 0055377a
;   sound_sndmain.cpp_FUN_00553980 at 00553a68
;
; Referenced Globals:
;   undefined4 DAT_0061bcb0
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061bcb0]                ; 00552b40 | DAT_0061bcb0
        ;   Label: sound_sndmain.cpp_FUN_00552b40
    RET                                 ; 00552b45

