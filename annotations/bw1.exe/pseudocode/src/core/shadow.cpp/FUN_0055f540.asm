; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_0055f540(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_CShadow_processDamage_FUN_0055fea0 at 00560009
;
; Referenced Globals:
;   TerminatedCString s_shb_die_wav_005f16d3
;   TerminatedCString s_child_laugh_wav_005f16e1
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f540
        ;   Label: core_shadow.cpp_FUN_0055f540
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055f541
    MOV EDX,dword ptr [EBX + 0xc2a0]    ; 0055f545
    PUSH EDX                            ; 0055f54b
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0055f54c
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0055f551
    TEST EAX,EAX                        ; 0055f554
    JNZ 0x0055f583                      ; 0055f556
        ;   XREF to: 0055f583 (CONDITIONAL_JUMP)  ; LAB_0055f583
    CMP dword ptr [EBX + 0xc2d4],0x1    ; 0055f558
    JZ 0x0055f585                       ; 0055f55f
        ;   XREF to: 0055f585 (CONDITIONAL_JUMP)  ; LAB_0055f585
    PUSH 0x5f16e1                       ; 0055f561 | = "child-laugh?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0055f566
        ;   Label: LAB_0055f566
    PUSH EBX                            ; 0055f56c
    CALL dword ptr [EAX + 0x2c]         ; 0055f56d
    ADD ESP,0x8                         ; 0055f570
    MOV dword ptr [EBX + 0xc2a0],EAX    ; 0055f573
    MOV dword ptr [EBX + 0xc298],0x41000000 ; 0055f579
    POP EBX                             ; 0055f583
        ;   Label: LAB_0055f583
    RET                                 ; 0055f584
    PUSH 0x5f16d3                       ; 0055f585 | = "shb_die??.wav"
        ;   Label: LAB_0055f585
    JMP 0x0055f566                      ; 0055f58a
        ;   XREF to: 0055f566 (UNCONDITIONAL_JUMP)  ; LAB_0055f566

