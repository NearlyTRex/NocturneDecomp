; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_00573bc0(int param_1)
;
;
; XREF[9]:
;   core_menu.cpp_FUN_0050ba70 at 0050bbd7
;   core_sound.cpp_FUN_0057cb9e at 0057cbbf
;   core_sound.cpp_FUN_0057cc00 at 0057ccaf
;   core_sound.cpp_FUN_0057ce10 at 0057d07b
;   core_sound.cpp_FUN_0057d6a0 at 0057d6a5
;   sound_snddx.cpp_FUN_00578f80 at 00579478
;   sound_sndmain.cpp_FUN_00570d50 at 00570d6c
;   sound_sndmain.cpp_FUN_005760b0 at 00576345
;   sound_sndmain.cpp_FUN_005763b0 at 0057653f
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3fb3
;   TerminatedCString s_getSfxChannelVol_invalid_005f3fc8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573bc0
        ;   Label: sound_sndmain.cpp_getSfxChannelVol_FUN_00573bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573bc1
    TEST EBX,EBX                        ; 00573bc5
    JL 0x00573bd9                       ; 00573bc7
        ;   XREF to: 00573bd9 (CONDITIONAL_JUMP)  ; LAB_00573bd9
    CMP EBX,0x20                        ; 00573bc9
    JGE 0x00573bd9                      ; 00573bcc
        ;   XREF to: 00573bd9 (CONDITIONAL_JUMP)  ; LAB_00573bd9
    MOV EBX,dword ptr [EBX*0x4 + 0x2c7fc90] ; 00573bce
    MOV EAX,EBX                         ; 00573bd5
    POP EBX                             ; 00573bd7
    RET                                 ; 00573bd8
    PUSH EBX                            ; 00573bd9
        ;   Label: LAB_00573bd9
    MOV EDX,0x5f3fb3                    ; 00573bda | = "..\\sound\\sndmain.cpp"
    MOV ECX,0x111a                      ; 00573bdf
    PUSH 0x5f3fc8                       ; 00573be4 | = "getSfxChannelVol - invalid channel in..."
    MOV dword ptr [0x01d1d400],EDX      ; 00573be9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00573bef | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00573bf5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00573bfa
    MOV EBX,dword ptr [EBX*0x4 + 0x2c7fc90] ; 00573bfd
    MOV EAX,EBX                         ; 00573c04
    POP EBX                             ; 00573c06
    RET                                 ; 00573c07

