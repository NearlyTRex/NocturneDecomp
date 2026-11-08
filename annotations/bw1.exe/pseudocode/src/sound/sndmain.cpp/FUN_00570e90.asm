; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570e90(int param_1)
;
;
; XREF[1]:
;   FUN_00570f30 at 0057125c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f37a0
;   TerminatedCString s_SfxSlot_autoCalcDelayRem_005f37b5
;   undefined4 DAT_00605af8
;   undefined4 DAT_00623304
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c807ec
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570e90
        ;   Label: FUN_00570e90
    SUB ESP,0x18                        ; 00570e91
    MOV EBX,dword ptr [ESP + 0x20]      ; 00570e94
    CMP dword ptr [0x02c807ec],0x0      ; 00570e98 | DAT_02c807ec
    JLE 0x00570eb3                      ; 00570e9f
        ;   XREF to: 00570eb3 (CONDITIONAL_JUMP)  ; LAB_00570eb3
    TEST byte ptr [EBX + 0x4c],0x1      ; 00570ea1
        ;   Label: LAB_00570ea1
    JZ 0x00570eda                       ; 00570ea5
        ;   XREF to: 00570eda (CONDITIONAL_JUMP)  ; LAB_00570eda
    MOV dword ptr [EBX + 0x40],0x0      ; 00570ea7
    ADD ESP,0x18                        ; 00570eae
    POP EBX                             ; 00570eb1
    RET                                 ; 00570eb2
    PUSH ESI                            ; 00570eb3
        ;   Label: LAB_00570eb3
    MOV ECX,0x5f37a0                    ; 00570eb4 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xab6                       ; 00570eb9
    PUSH 0x5f37b5                       ; 00570ebe | = "SfxSlot::autoCalcDelayRemaining - mus..."
    MOV dword ptr [0x01d1d400],ECX      ; 00570ec3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00570ec9 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00570ecf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00570ed4
    POP ESI                             ; 00570ed7
    JMP 0x00570ea1                      ; 00570ed8
        ;   XREF to: 00570ea1 (UNCONDITIONAL_JUMP)  ; LAB_00570ea1
    MOV EAX,[0x02c7fc88]                ; 00570eda | DAT_02c7fc88
        ;   Label: LAB_00570eda
    FLD double ptr [EBX + 0x4]          ; 00570edf
    FSUB double ptr [EAX*0x8 + 0x2c7fbf8] ; 00570ee2 | DAT_02c7fbf8
    FMUL ST0                            ; 00570ee9
    FLD double ptr [EBX + 0xc]          ; 00570eeb
    FSUB double ptr [EAX*0x8 + 0x2c7fc08] ; 00570eee | DAT_02c7fc08
    FMUL ST0                            ; 00570ef5
    FLD double ptr [EBX + 0x14]         ; 00570ef7
    FXCH                                ; 00570efa
    FADDP ST2,ST0                       ; 00570efc
    FSUB double ptr [EAX*0x8 + 0x2c7fc18] ; 00570efe | DAT_02c7fc18
    FMUL ST0                            ; 00570f05
    FADDP                               ; 00570f07
    FSQRT                               ; 00570f09
    FMUL float ptr [0x00623304]         ; 00570f0b | DAT_00623304
    FLD1                                ; 00570f11
    FDIV float ptr [0x00605af8]         ; 00570f13 | DAT_00605af8
    FMULP                               ; 00570f19
    FSTP float ptr [EBX + 0x40]         ; 00570f1b
    ADD ESP,0x18                        ; 00570f1e
    POP EBX                             ; 00570f21
    RET                                 ; 00570f22

