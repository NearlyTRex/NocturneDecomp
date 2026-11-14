; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f590(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_process_FUN_0055de50 at 0055e887
;
; Referenced Globals:
;   TerminatedCString s_shb_howl_wav_005f16f2
;   TerminatedCString s_child_laugh_wav_005f1701
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f590
        ;   Label: core_shadow.cpp_FUN_0055f590
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f591
    MOV EDX,dword ptr [EBX + 0xc2ac]    ; 0055f595
    PUSH EDX                            ; 0055f59b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 0055f59c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f5a1
    TEST EAX,EAX                        ; 0055f5a4
    JNZ 0x0055f5d3                      ; 0055f5a6
        ;   XREF to: 0055f5d3 (CONDITIONAL_JUMP)  ; LAB_0055f5d3
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f5a8
    JZ 0x0055f5d5                       ; 0055f5af
        ;   XREF to: 0055f5d5 (CONDITIONAL_JUMP)  ; LAB_0055f5d5
    PUSH 0x5f1701                       ; 0055f5b1 | = "child-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f5b6
        ;   Label: LAB_0055f5b6
    PUSH EBX                            ; 0055f5bc
    CALL dword ptr [EAX + 0x2c]         ; 0055f5bd
    ADD ESP,0x8                         ; 0055f5c0
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 0055f5c3
    MOV dword ptr [EBX + 0xc298],0x41000000 ; 0055f5c9
    POP EBX                             ; 0055f5d3
        ;   Label: LAB_0055f5d3
    RET                                 ; 0055f5d4
    PUSH 0x5f16f2                       ; 0055f5d5 | = "shb_howl??.wav"
        ;   Label: LAB_0055f5d5
    JMP 0x0055f5b6                      ; 0055f5da
        ;   XREF to: 0055f5b6 (UNCONDITIONAL_JUMP)  ; LAB_0055f5b6

