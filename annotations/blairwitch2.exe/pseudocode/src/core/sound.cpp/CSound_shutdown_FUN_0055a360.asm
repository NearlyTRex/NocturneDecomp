; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_shutdown_FUN_0055a360(CSound *this_ptr)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004b6170 at 004b67d9
;   core_game.cpp_FUN_004b82e0 at 004b836a
;
; Referenced Globals:
;   undefined4 DAT_0264bad4
;   undefined4 DAT_0264bb98
;   undefined4 DAT_0264bb9c
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_resetSoundDevice_FUN_005526b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a360
        ;   Label: core_sound.cpp_CSound_shutdown_FUN_0055a360
    PUSH ESI                            ; 0055a361
    XOR EDX,EDX                         ; 0055a362
    XOR EBX,EBX                         ; 0055a364
    MOV dword ptr [0x0264bad4],EDX      ; 0055a366 | DAT_0264bad4
    MOV ECX,dword ptr [EBX + 0x264baf0] ; 0055a36c
        ;   Label: LAB_0055a36c
    PUSH ECX                            ; 0055a372
    ADD EBX,0x10                        ; 0055a373
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0055a376
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0055a37b
    CMP EBX,0xa0                        ; 0055a37e
    JNZ 0x0055a36c                      ; 0055a384
        ;   XREF to: 0055a36c (CONDITIONAL_JUMP)  ; LAB_0055a36c
    MOV EBX,dword ptr [0x0264bb98]      ; 0055a386 | DAT_0264bb98
    PUSH EBX                            ; 0055a38c
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0055a38d
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0055a392
    MOV ESI,dword ptr [0x0264bb9c]      ; 0055a395 | DAT_0264bb9c
    PUSH ESI                            ; 0055a39b
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0055a39c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0055a3a1
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005526b0 ; 0055a3a4
        ;   XREF to: 005526b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005526b0()
    POP ESI                             ; 0055a3a9
    POP EBX                             ; 0055a3aa
    RET                                 ; 0055a3ab

