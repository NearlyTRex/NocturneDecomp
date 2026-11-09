; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f4a0(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_0055de50 at 0055e83e
;
; Referenced Globals:
;   TerminatedCString s_shb_attack_wav_005f168d
;   TerminatedCString s_child_laugh_wav_wav_005f169e
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f4a0
        ;   Label: core_shadow.cpp_FUN_0055f4a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f4a1
    MOV EDX,dword ptr [EBX + 0xc2a8]    ; 0055f4a5
    PUSH EDX                            ; 0055f4ab
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0055f4ac
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f4b1
    TEST EAX,EAX                        ; 0055f4b4
    JNZ 0x0055f4e3                      ; 0055f4b6
        ;   XREF to: 0055f4e3 (CONDITIONAL_JUMP)  ; LAB_0055f4e3
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f4b8
    JZ 0x0055f4e5                       ; 0055f4bf
        ;   XREF to: 0055f4e5 (CONDITIONAL_JUMP)  ; LAB_0055f4e5
    PUSH 0x5f169e                       ; 0055f4c1 | = "child-laugh?.wav.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f4c6
        ;   Label: LAB_0055f4c6
    PUSH EBX                            ; 0055f4cc
    CALL dword ptr [EAX + 0x2c]         ; 0055f4cd
    ADD ESP,0x8                         ; 0055f4d0
    MOV dword ptr [EBX + 0xc2a8],EAX    ; 0055f4d3
    MOV dword ptr [EBX + 0xc298],0x41000000 ; 0055f4d9
    POP EBX                             ; 0055f4e3
        ;   Label: LAB_0055f4e3
    RET                                 ; 0055f4e4
    PUSH 0x5f168d                       ; 0055f4e5 | = "shb_attack??.wav"
        ;   Label: LAB_0055f4e5
    JMP 0x0055f4c6                      ; 0055f4ea
        ;   XREF to: 0055f4c6 (UNCONDITIONAL_JUMP)  ; LAB_0055f4c6

