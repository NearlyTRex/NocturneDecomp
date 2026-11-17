; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00529810 at 00529824
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 at 00529559
;
; Referenced Globals:
;   double DOUBLE_005927c6 = 0.5
;   int g_AudioChannelCount = 0x2
;   double g_Cached3DDistanceFactorInverse = 1
;   double g_DOUBLE_02dc78e0
;   double g_DOUBLE_02dc78e8
;   double g_DOUBLE_02dc78f0
;   double g_DOUBLE_02dc7910
;   double g_DOUBLE_02dc7918
;   double g_DOUBLE_02dc7920
;   double[8] g_VirtualSpeakerXPositions
;   undefined4 g_VirtualSpeakerXPositions[1]
;   double[8] g_VirtualSpeakerYPositions
;   undefined4 g_VirtualSpeakerYPositions[1]
;   double[8] g_VirtualSpeakerZPositions
;   undefined4 g_VirtualSpeakerZPositions[1]
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00522d10
        ;   Label: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_00522d10
    MOV ECX,dword ptr [0x005bea68]      ; 00522d13 | g_AudioChannelCount
    CMP ECX,0x2                         ; 00522d19
    JZ 0x00522d6e                       ; 00522d1c
        ;   XREF to: 00522d6e (CONDITIONAL_JUMP)  ; LAB_00522d6e
    TEST ECX,ECX                        ; 00522d1e
    JLE 0x00522d64                      ; 00522d20
        ;   XREF to: 00522d64 (CONDITIONAL_JUMP)  ; LAB_00522d64
    FLD double ptr [0x02dc78f0]         ; 00522d22 | g_DOUBLE_02dc78f0
    FLD double ptr [0x02dc78e8]         ; 00522d28 | g_DOUBLE_02dc78e8
    LEA EDX,[ECX*0x8 + 0x0]             ; 00522d2e
    XOR EAX,EAX                         ; 00522d35
    FLD double ptr [0x02dc78e0]         ; 00522d37 | g_DOUBLE_02dc78e0
    FLD ST0                             ; 00522d3d
        ;   Label: LAB_00522d3d
    FLD ST2                             ; 00522d3f
    ADD EAX,0x8                         ; 00522d41
    FLD ST4                             ; 00522d44
    FXCH ST2                            ; 00522d46
    FSTP double ptr [EAX + 0x2dc83d0]   ; 00522d48 | g_VirtualSpeakerXPositions | g_VirtualSpeakerXPositions[1]
    FSTP double ptr [EAX + 0x2dc8410]   ; 00522d4e | g_VirtualSpeakerYPositions | g_VirtualSpeakerYPositions[1]
    FSTP double ptr [EAX + 0x2dc8450]   ; 00522d54 | g_VirtualSpeakerZPositions | g_VirtualSpeakerZPositions[1]
    CMP EAX,EDX                         ; 00522d5a
    JL 0x00522d3d                       ; 00522d5c
        ;   XREF to: 00522d3d (CONDITIONAL_JUMP)  ; LAB_00522d3d
    FSTP ST0                            ; 00522d5e
    FSTP ST0                            ; 00522d60
    FSTP ST0                            ; 00522d62
    MOV dword ptr [0x005bea68],ECX      ; 00522d64 | g_AudioChannelCount
        ;   Label: LAB_00522d64
    ADD ESP,0x10                        ; 00522d6a
    RET                                 ; 00522d6d
    FLD double ptr [0x005bea88]         ; 00522d6e | g_Cached3DDistanceFactorInverse
        ;   Label: LAB_00522d6e
    FMUL double ptr [0x005927c6]        ; 00522d74 | DOUBLE_005927c6
    FLD double ptr [0x02dc7910]         ; 00522d7a | g_DOUBLE_02dc7910
    FMUL ST1                            ; 00522d80
    FLD double ptr [0x02dc7918]         ; 00522d82 | g_DOUBLE_02dc7918
    FMUL ST2                            ; 00522d88
    FLD double ptr [0x02dc7920]         ; 00522d8a | g_DOUBLE_02dc7920
    FMULP ST3                           ; 00522d90
    FLD double ptr [0x02dc78e0]         ; 00522d92 | g_DOUBLE_02dc78e0
    FLD double ptr [0x02dc78e8]         ; 00522d98 | g_DOUBLE_02dc78e8
    FLD double ptr [0x02dc78f0]         ; 00522d9e | g_DOUBLE_02dc78f0
    FXCH ST2                            ; 00522da4
    FSUB ST0,ST4                        ; 00522da6
    FXCH                                ; 00522da8
    FSUB ST0,ST3                        ; 00522daa
    FXCH ST2                            ; 00522dac
    FSUB ST0,ST5                        ; 00522dae
    FLD double ptr [0x02dc78e0]         ; 00522db0 | g_DOUBLE_02dc78e0
    FADDP ST5,ST0                       ; 00522db6
    FLD double ptr [0x02dc78e8]         ; 00522db8 | g_DOUBLE_02dc78e8
    FADDP ST4,ST0                       ; 00522dbe
    FLD double ptr [0x02dc78f0]         ; 00522dc0 | g_DOUBLE_02dc78f0
    FADDP ST6,ST0                       ; 00522dc6
    FXCH                                ; 00522dc8
    FSTP double ptr [0x02dc83d8]        ; 00522dca | g_VirtualSpeakerXPositions
    FXCH                                ; 00522dd0
    FSTP double ptr [0x02dc8418]        ; 00522dd2 | g_VirtualSpeakerYPositions
    FSTP double ptr [0x02dc8458]        ; 00522dd8 | g_VirtualSpeakerZPositions
    FXCH                                ; 00522dde
    FSTP double ptr [0x02dc83e0]        ; 00522de0 | g_VirtualSpeakerXPositions[1]
    FSTP double ptr [0x02dc8420]        ; 00522de6 | g_VirtualSpeakerYPositions[1]
    FSTP double ptr [0x02dc8460]        ; 00522dec | g_VirtualSpeakerZPositions[1]
    MOV dword ptr [0x005bea68],ECX      ; 00522df2 | g_AudioChannelCount
    ADD ESP,0x10                        ; 00522df8
    RET                                 ; 00522dfb

