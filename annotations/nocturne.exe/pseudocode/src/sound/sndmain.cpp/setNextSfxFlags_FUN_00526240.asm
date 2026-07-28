; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_00526240(uint flags)
;
; Parameters:
; uint             Stack[0x4]:4   flags
;
; XREF[5]:
;   core_game.cpp_CGame_rollCredits_FUN_004a6e90 at 004a7205
;   core_menu.cpp_configureSoundOptions_FUN_004d12e0 at 004d1cfa
;   core_sound.cpp_FUN_0052d790 at 0052d8b5
;   core_sound.cpp_FUN_0052dff0 at 0052e3ab
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d322
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 00526240 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxFlags_FUN_00526240
    LEA EAX,[EDX*0x4 + 0x0]             ; 00526246
    SUB EAX,EDX                         ; 0052624d
    SHL EAX,0x2                         ; 0052624f
    MOV EDX,EAX                         ; 00526252
    SHL EAX,0x3                         ; 00526254
    ADD EAX,EDX                         ; 00526257
    MOV EDX,dword ptr [ESP + 0x4]       ; 00526259
    MOV dword ptr [EAX + 0x2dc1bd4],EDX ; 0052625d
    RET                                 ; 00526263

