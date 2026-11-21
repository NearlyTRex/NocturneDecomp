; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 0057125c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f37a0
;   TerminatedCString s_SfxSlot_autoCalcDelayRem_005f37b5
;   float g_FLOAT_00605af8 = 1116.400
;   float g_FLOAT_00623304 = 1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   double g_DOUBLE_02c7fbf8
;   double g_DOUBLE_02c7fc08
;   double g_DOUBLE_02c7fc18
;   int g_INT_02c7fc88
;   int g_SoundLockCount
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570e90
        ;   Label: sound_sndmain.cpp_CSfxSlot_autoCalcDelayRemaining_FUN_00570e90
    SUB ESP,0x18                        ; 00570e91
    MOV EBX,dword ptr [ESP + 0x20]      ; 00570e94
    CMP dword ptr [0x02c807ec],0x0      ; 00570e98 | g_SoundLockCount
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
    MOV dword ptr [0x01d1d400],ECX      ; 00570ec3 | g_CurrentFilename
    MOV dword ptr [0x01d1d404],ESI      ; 00570ec9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 00570ecf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00570ed4
    POP ESI                             ; 00570ed7
    JMP 0x00570ea1                      ; 00570ed8
        ;   XREF to: 00570ea1 (UNCONDITIONAL_JUMP)  ; LAB_00570ea1
    MOV EAX,[0x02c7fc88]                ; 00570eda | g_INT_02c7fc88
        ;   Label: LAB_00570eda
    FLD double ptr [EBX + 0x4]          ; 00570edf
    FSUB double ptr [EAX*0x8 + 0x2c7fbf8] ; 00570ee2 | g_DOUBLE_02c7fbf8
    FMUL ST0                            ; 00570ee9
    FLD double ptr [EBX + 0xc]          ; 00570eeb
    FSUB double ptr [EAX*0x8 + 0x2c7fc08] ; 00570eee | g_DOUBLE_02c7fc08
    FMUL ST0                            ; 00570ef5
    FLD double ptr [EBX + 0x14]         ; 00570ef7
    FXCH                                ; 00570efa
    FADDP ST2,ST0                       ; 00570efc
    FSUB double ptr [EAX*0x8 + 0x2c7fc18] ; 00570efe | g_DOUBLE_02c7fc18
    FMUL ST0                            ; 00570f05
    FADDP                               ; 00570f07
    FSQRT                               ; 00570f09
    FMUL float ptr [0x00623304]         ; 00570f0b | g_FLOAT_00623304
    FLD1                                ; 00570f11
    FDIV float ptr [0x00605af8]         ; 00570f13 | g_FLOAT_00605af8
    FMULP                               ; 00570f19
    FSTP float ptr [EBX + 0x40]         ; 00570f1b
    ADD ESP,0x18                        ; 00570f1e
    POP EBX                             ; 00570f21
    RET                                 ; 00570f22

