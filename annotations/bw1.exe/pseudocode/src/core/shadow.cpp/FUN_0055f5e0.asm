; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f5e0(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_0055de50 at 0055e873
;
; Referenced Globals:
;   TerminatedCString s_shb_emerge_wav_005f1712
;   TerminatedCString s_child_laugh_wav_005f1723
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f5e0
        ;   Label: core_shadow.cpp_FUN_0055f5e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f5e1
    MOV EDX,dword ptr [EBX + 0xc2b0]    ; 0055f5e5
    PUSH EDX                            ; 0055f5eb
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0055f5ec
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f5f1
    TEST EAX,EAX                        ; 0055f5f4
    JNZ 0x0055f623                      ; 0055f5f6
        ;   XREF to: 0055f623 (CONDITIONAL_JUMP)  ; LAB_0055f623
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f5f8
    JZ 0x0055f625                       ; 0055f5ff
        ;   XREF to: 0055f625 (CONDITIONAL_JUMP)  ; LAB_0055f625
    PUSH 0x5f1723                       ; 0055f601 | = "child-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f606
        ;   Label: LAB_0055f606
    PUSH EBX                            ; 0055f60c
    CALL dword ptr [EAX + 0x2c]         ; 0055f60d
    ADD ESP,0x8                         ; 0055f610
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 0055f613
    MOV dword ptr [EBX + 0xc298],0x41000000 ; 0055f619
    POP EBX                             ; 0055f623
        ;   Label: LAB_0055f623
    RET                                 ; 0055f624
    PUSH 0x5f1712                       ; 0055f625 | = "shb_emerge??.wav"
        ;   Label: LAB_0055f625
    JMP 0x0055f606                      ; 0055f62a
        ;   XREF to: 0055f606 (UNCONDITIONAL_JUMP)  ; LAB_0055f606

