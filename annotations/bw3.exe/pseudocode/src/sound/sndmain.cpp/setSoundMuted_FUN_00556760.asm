; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00556760(int muted)
;
; Parameters:
; int              Stack[0x4]:4   muted
;
; XREF[4]:
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004ba690
;   core_menu.cpp_FUN_004e94f0 at 004e9d8f
;   core_menu.cpp_FUN_004ea4d0 at 004ea804
;   sound_sndmain.cpp_FUN_00559220 at 00559439
;
; Referenced Globals:
;   undefined4 DAT_02cf3290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00556760
        ;   Label: sound_sndmain.cpp_setSoundMuted_FUN_00556760
    MOV [0x02cf3290],EAX                ; 00556764 | DAT_02cf3290
    TEST EAX,EAX                        ; 00556769
    JNZ 0x00558250                      ; 0055676b
        ;   XREF to: 00558250 (CONDITIONAL_JUMP)
    RET                                 ; 00556771

