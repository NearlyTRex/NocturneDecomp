; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005729f0(uint flags)
;
; Parameters:
; uint             Stack[0x4]:4   flags
;
; XREF[5]:
;   core_game.cpp_CGame_rollCredits_FUN_004d8e50 at 004d91c5
;   core_menu.cpp_FUN_0050ba70 at 0050c4ae
;   core_sound.cpp_CSound_process_FUN_0057ce10 at 0057d0f7
;   core_sound.cpp_FUN_0057c580 at 0057c685
;   core_sound.cpp_playSfxInternal_FUN_0057bef0 at 0057c0f2
;
; Referenced Globals:
;   undefined4 DAT_02c78cec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c78cec]      ; 005729f0 | DAT_02c78cec
        ;   Label: sound_sndmain.cpp_setNextSfxFlags_FUN_005729f0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005729f6
    SUB EAX,EDX                         ; 005729fd
    SHL EAX,0x5                         ; 005729ff
    MOV EDX,dword ptr [ESP + 0x4]       ; 00572a02
    MOV dword ptr [EAX + 0x2c78d3c],EDX ; 00572a06
    RET                                 ; 00572a0c

