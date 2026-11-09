; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_turret_cpp_FUN_00573cf0(int param_1,int param_2,uint param_3)
;
;
; XREF[4]:
;   core_game.cpp_FUN_004bdfb0 at 004be29e
;   engine_pod.cpp_FUN_00512fb0 at 005134f7
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005537c0 at 00553917
;   sound_sndmain.cpp_FUN_00551d20 at 00551f4d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00573cf0
        ;   Label: unkafter_turret.cpp_FUN_00573cf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00573cf4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00573cf8
    CMP dword ptr [EDX + 0x4],0x0       ; 00573cfc
    JZ 0x00573d14                       ; 00573d00
        ;   XREF to: 00573d14 (CONDITIONAL_JUMP)  ; LAB_00573d14
    CMP ECX,0x1                         ; 00573d02
    JNC 0x00573d21                      ; 00573d05
        ;   XREF to: 00573d21 (CONDITIONAL_JUMP)  ; LAB_00573d21
    TEST ECX,ECX                        ; 00573d07
    JNZ 0x00573d14                      ; 00573d09
        ;   XREF to: 00573d14 (CONDITIONAL_JUMP)  ; LAB_00573d14
    TEST EAX,EAX                        ; 00573d0b
        ;   Label: LAB_00573d0b
    JL 0x00573d14                       ; 00573d0d
        ;   XREF to: 00573d14 (CONDITIONAL_JUMP)  ; LAB_00573d14
    CMP EAX,dword ptr [EDX + 0x8]       ; 00573d0f
    JLE 0x00573d2b                      ; 00573d12
        ;   XREF to: 00573d2b (CONDITIONAL_JUMP)  ; LAB_00573d2b
    XOR EAX,EAX                         ; 00573d14
        ;   Label: LAB_00573d14
    RET                                 ; 00573d16
    ADD EAX,dword ptr [EDX + 0x10]      ; 00573d17
        ;   Label: LAB_00573d17
    JMP 0x00573d0b                      ; 00573d1a
        ;   XREF to: 00573d0b (UNCONDITIONAL_JUMP)  ; LAB_00573d0b
    ADD EAX,dword ptr [EDX + 0x8]       ; 00573d1c
        ;   Label: LAB_00573d1c
    JMP 0x00573d0b                      ; 00573d1f
        ;   XREF to: 00573d0b (UNCONDITIONAL_JUMP)  ; LAB_00573d0b
    JBE 0x00573d17                      ; 00573d21
        ;   XREF to: 00573d17 (CONDITIONAL_JUMP)  ; LAB_00573d17
        ;   Label: LAB_00573d21
    CMP ECX,0x2                         ; 00573d23
    JZ 0x00573d1c                       ; 00573d26
        ;   XREF to: 00573d1c (CONDITIONAL_JUMP)  ; LAB_00573d1c
    XOR EAX,EAX                         ; 00573d28
    RET                                 ; 00573d2a
    MOV dword ptr [EDX + 0x10],EAX      ; 00573d2b
        ;   Label: LAB_00573d2b
    MOV EAX,0x1                         ; 00573d2e
    RET                                 ; 00573d33

