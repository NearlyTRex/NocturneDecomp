; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_pollAllStreams_FUN_005ace90(int paused_mode)
;
; Parameters:
; int              Stack[0x4]:4   paused_mode
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_processAudio_FUN_005abe20 at 005abe6f
;
; Referenced Globals:
;   double DOUBLE_00651097 = -0.300000000000000
;   double DOUBLE_0065109f = -0.100000000000000
;   double DOUBLE_006510a7 = -0.200000000000000
;   float FLOAT_00663164 = 2
;   CSfxSample[64] g_SfxSamples
;   undefined4 DAT_03f629ac
;   CSfxSample* g_SfxSamplesEnd
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ace90
        ;   Label: sound_sndmain.cpp_pollAllStreams_FUN_005ace90
    PUSH ESI                            ; 005ace91
    PUSH EBP                            ; 005ace92
    MOV EBP,ESP                         ; 005ace93
    SUB ESP,0x10                        ; 005ace95
    AND ESP,0xfffffff8                  ; 005ace98
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005ace9b | void sound_sndmain.cpp_lockSound_FUN_005abd30()
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)
    FLD float ptr [0x00663164]          ; 005acea0 | float FLOAT_00663164
    MOV EDX,dword ptr [EBP + 0x10]      ; 005acea6
    FST double ptr [ESP]                ; 005acea9
    FLD ST0                             ; 005aceac
    FADD double ptr [0x00651097]        ; 005aceae | double DOUBLE_00651097
    FXCH                                ; 005aceb4
    FADD double ptr [0x0065109f]        ; 005aceb6 | double DOUBLE_0065109f
    FXCH                                ; 005acebc
    FSTP float ptr [ESP + 0xc]          ; 005acebe
    FSTP float ptr [ESP + 0x8]          ; 005acec2
    TEST EDX,EDX                        ; 005acec6
    JNZ 0x005acefb                      ; 005acec8 | LAB_005acefb
        ;   XREF to: 005acefb (CONDITIONAL_JUMP)
    MOV EBX,0x3f6282c                   ; 005aceca | CSfxSample[64] g_SfxSamples
        ;   Label: LAB_005aceca
    LEA ESI,[EBX + 0x6000]              ; 005acecf | CSfxSample * g_SfxSamplesEnd
    PUSH dword ptr [ESP + 0x8]          ; 005aced5
        ;   Label: LAB_005aced5
    PUSH dword ptr [ESP + 0x10]         ; 005aced9
    PUSH EBX                            ; 005acedd | CSfxSample[64] g_SfxSamples
    CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 ; 005acede | int sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730(CSfxSample * this_ptr, float time_window, float update_interval)
        ;   XREF to: 005a6730 (UNCONDITIONAL_CALL)
    ADD EBX,0x180                       ; 005acee3 | DAT_03f629ac
    ADD ESP,0xc                         ; 005acee9
    CMP EBX,ESI                         ; 005aceec
    JNZ 0x005aced5                      ; 005aceee | LAB_005aced5
        ;   XREF to: 005aced5 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005acef0 | void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
    MOV ESP,EBP                         ; 005acef5
    POP EBP                             ; 005acef7
    POP ESI                             ; 005acef8
    POP EBX                             ; 005acef9
    RET                                 ; 005acefa
    FLD double ptr [ESP]                ; 005acefb
        ;   Label: LAB_005acefb
    MOV EBX,dword ptr [0x00663164]      ; 005acefe | float FLOAT_00663164
    FADD double ptr [0x006510a7]        ; 005acf04 | double DOUBLE_006510a7
    MOV dword ptr [ESP + 0x8],EBX       ; 005acf0a
    FSTP float ptr [ESP + 0xc]          ; 005acf0e
    JMP 0x005aceca                      ; 005acf12 | LAB_005aceca
        ;   XREF to: 005aceca (UNCONDITIONAL_JUMP)

