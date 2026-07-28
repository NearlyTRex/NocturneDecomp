; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAllStreams_FUN_005298f0(int paused_mode)
;
; Parameters:
; int              Stack[0x4]:4   paused_mode
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_processAudio_FUN_005288f0 at 0052893f
;
; Referenced Globals:
;   double DOUBLE_00593b6e = -0.300000000000000
;   double DOUBLE_00593b76 = -0.100000000000000
;   double DOUBLE_00593b7e = -0.200000000000000
;   float FLOAT_005a2174 = 2
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0
;   sound_sndmain.cpp_lockSound_FUN_00528800
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005298f0
        ;   Label: sound_sndmain.cpp_pollAllStreams_FUN_005298f0
    PUSH ESI                            ; 005298f1
    PUSH EBP                            ; 005298f2
    MOV EBP,ESP                         ; 005298f3
    SUB ESP,0x10                        ; 005298f5
    AND ESP,0xfffffff8                  ; 005298f8
    CALL sound_sndmain.cpp_lockSound_FUN_00528800 ; 005298fb
        ;   XREF to: 00528800 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00528800()
    FLD float ptr [0x005a2174]          ; 00529900 | FLOAT_005a2174
    MOV EDX,dword ptr [EBP + 0x10]      ; 00529906
    FST double ptr [ESP]                ; 00529909
    FLD ST0                             ; 0052990c
    FADD double ptr [0x00593b6e]        ; 0052990e | DOUBLE_00593b6e
    FXCH                                ; 00529914
    FADD double ptr [0x00593b76]        ; 00529916 | DOUBLE_00593b76
    FXCH                                ; 0052991c
    FSTP float ptr [ESP + 0xc]          ; 0052991e
    FSTP float ptr [ESP + 0x8]          ; 00529922
    TEST EDX,EDX                        ; 00529926
    JNZ 0x0052995b                      ; 00529928
        ;   XREF to: 0052995b (CONDITIONAL_JUMP)  ; LAB_0052995b
    MOV EBX,0x2dc1edc                   ; 0052992a
        ;   Label: LAB_0052992a
    LEA ESI,[EBX + 0x5a00]              ; 0052992f
    PUSH dword ptr [ESP + 0x8]          ; 00529935
        ;   Label: LAB_00529935
    PUSH dword ptr [ESP + 0x10]         ; 00529939
    PUSH EBX                            ; 0052993d
    CALL sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 ; 0052993e
        ;   XREF to: 00523ea0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0()
    ADD EBX,0x168                       ; 00529943
    ADD ESP,0xc                         ; 00529949
    CMP EBX,ESI                         ; 0052994c
    JNZ 0x00529935                      ; 0052994e
        ;   XREF to: 00529935 (CONDITIONAL_JUMP)  ; LAB_00529935
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00529950
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV ESP,EBP                         ; 00529955
    POP EBP                             ; 00529957
    POP ESI                             ; 00529958
    POP EBX                             ; 00529959
    RET                                 ; 0052995a
    FLD double ptr [ESP]                ; 0052995b
        ;   Label: LAB_0052995b
    MOV EBX,dword ptr [0x005a2174]      ; 0052995e | FLOAT_005a2174
    FADD double ptr [0x00593b7e]        ; 00529964 | DOUBLE_00593b7e
    MOV dword ptr [ESP + 0x8],EBX       ; 0052996a
    FSTP float ptr [ESP + 0xc]          ; 0052996e
    JMP 0x0052992a                      ; 00529972
        ;   XREF to: 0052992a (UNCONDITIONAL_JUMP)  ; LAB_0052992a

