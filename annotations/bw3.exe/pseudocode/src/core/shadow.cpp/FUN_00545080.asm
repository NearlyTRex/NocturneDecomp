; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545080(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_005438d0 at 0054421d
;
; Referenced Globals:
;   TerminatedCString s_shb_attack_wav_005d1332
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545080
        ;   Label: core_shadow.cpp_FUN_00545080
    MOV EBX,dword ptr [ESP + 0x8]       ; 00545081
    MOV EDX,dword ptr [EBX + 0xd078]    ; 00545085
    PUSH EDX                            ; 0054508b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 0054508c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00545091
    TEST EAX,EAX                        ; 00545094
    JZ 0x0054509a                       ; 00545096
        ;   XREF to: 0054509a (CONDITIONAL_JUMP)  ; LAB_0054509a
    POP EBX                             ; 00545098
    RET                                 ; 00545099
    PUSH 0x5d1332                       ; 0054509a | = "shb_attack??.wav"
        ;   Label: LAB_0054509a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054509f
    PUSH EBX                            ; 005450a5
    CALL dword ptr [EAX + 0x2c]         ; 005450a6
    MOV dword ptr [EBX + 0xd07c],0x41000000 ; 005450a9
    ADD ESP,0x8                         ; 005450b3
    MOV dword ptr [EBX + 0xd078],EAX    ; 005450b6
    POP EBX                             ; 005450bc
    RET                                 ; 005450bd

