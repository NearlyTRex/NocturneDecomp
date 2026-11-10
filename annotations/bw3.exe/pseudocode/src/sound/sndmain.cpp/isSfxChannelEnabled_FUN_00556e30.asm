; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_00556e30(int channel_index)
;
; Parameters:
; int              Stack[0x4]:4   channel_index
;
; XREF[9]:
;   core_event.cpp_FUN_0048c2e0 at 0048f22d
;   core_game.cpp_FUN_004c4a60 at 004c4af6
;   core_menu.cpp_FUN_004e94f0 at 004e9698
;   core_sound.cpp_CSound_process_FUN_0055ff40 at 0056018d
;   core_sound.cpp_FUN_0055fd30 at 0055fdc2
;   core_sound.cpp_syncChannel3WithChannel0_FUN_0055fcce at 0055fcd5
;   sound_sndmain.cpp_FUN_00556240 at 005562d6
;   sound_sndmain.cpp_FUN_00559520 at 0055967e
;   sound_sndmain.cpp_readIni_FUN_00559220 at 00559465
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3959
;   TerminatedCString s_isSfxChannelEnabled_inva_005d396e
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556e30
        ;   Label: sound_sndmain.cpp_isSfxChannelEnabled_FUN_00556e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00556e31
    TEST EBX,EBX                        ; 00556e35
    JL 0x00556e47                       ; 00556e37
        ;   XREF to: 00556e47 (CONDITIONAL_JUMP)  ; LAB_00556e47
    CMP EBX,0x20                        ; 00556e39
    JGE 0x00556e47                      ; 00556e3c
        ;   XREF to: 00556e47 (CONDITIONAL_JUMP)  ; LAB_00556e47
    MOV EAX,dword ptr [EBX*0x4 + 0x2cf2940] ; 00556e3e
    POP EBX                             ; 00556e45
    RET                                 ; 00556e46
    PUSH EBX                            ; 00556e47
        ;   Label: LAB_00556e47
    MOV EDX,0x5d3959                    ; 00556e48 | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x1147                      ; 00556e4d
    PUSH 0x5d396e                       ; 00556e52 | = "isSfxChannelEnabled - invalid channel..."
    MOV dword ptr [0x01d71de0],EDX      ; 00556e57 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00556e5d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00556e63
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00556e68
    MOV EAX,dword ptr [EBX*0x4 + 0x2cf2940] ; 00556e6b
    POP EBX                             ; 00556e72
    RET                                 ; 00556e73

