; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_005450c0(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_005459b0 at 00545a79
;
; Referenced Globals:
;   TerminatedCString s_shb_damage_wav_005d1343
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005450c0
        ;   Label: core_shadow.cpp_FUN_005450c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005450c1
    MOV EDX,dword ptr [EBX + 0xd078]    ; 005450c5
    PUSH EDX                            ; 005450cb
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 005450cc
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 005450d1
    TEST EAX,EAX                        ; 005450d4
    JZ 0x005450da                       ; 005450d6
        ;   XREF to: 005450da (CONDITIONAL_JUMP)  ; LAB_005450da
    POP EBX                             ; 005450d8
    RET                                 ; 005450d9
    PUSH 0x5d1343                       ; 005450da | = "shb_damage??.wav"
        ;   Label: LAB_005450da
    MOV EAX,dword ptr [EBX + 0x154]     ; 005450df
    PUSH EBX                            ; 005450e5
    CALL dword ptr [EAX + 0x2c]         ; 005450e6
    MOV dword ptr [EBX + 0xd07c],0x40800000 ; 005450e9
    ADD ESP,0x8                         ; 005450f3
    MOV dword ptr [EBX + 0xd078],EAX    ; 005450f6
    POP EBX                             ; 005450fc
    RET                                 ; 005450fd

