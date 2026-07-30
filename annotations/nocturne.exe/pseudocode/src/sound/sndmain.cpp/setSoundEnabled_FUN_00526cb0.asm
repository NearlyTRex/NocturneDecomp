; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(int enable)
;
; Parameters:
; int              Stack[0x4]:4   enable
;
; XREF[4]:
;   core_game.cpp_CGame_FUN_0049f930 at 0049fa90
;   core_menu.cpp_FUN_004d23d0 at 004d26bd
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1b6e
;   sound_sndmain.cpp_FUN_005289f0 at 00528b95
;
; Referenced Globals:
;   undefined4 DAT_02dc8324
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526cb0
        ;   Label: sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0
    MOV [0x02dc8324],EAX                ; 00526cb4 | DAT_02dc8324
    TEST EAX,EAX                        ; 00526cb9
    JNZ 0x00528080                      ; 00526cbb
        ;   XREF to: 00528080 (CONDITIONAL_JUMP)
    RET                                 ; 00526cc1

