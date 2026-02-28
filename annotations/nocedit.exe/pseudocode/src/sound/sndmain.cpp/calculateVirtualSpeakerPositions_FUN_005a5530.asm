; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530(void)
;
;
; XREF[2]:
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 at 005acdc4
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90 at 005acaf9
;
; Referenced Globals:
;   double DOUBLE_0064fab7 = 0.5
;   int g_AudioChannelCount = 0x2
;   double g_Cached3DDistanceFactorInverse = 1
;   CVector3d g_Cached3DListenerPos
;   undefined4 g_Cached3DListenerPos.y
;   undefined4 g_Cached3DListenerPos.z
;   CVector3d g_Cached3DListenerOrientFront
;   undefined4 g_Cached3DListenerOrientFront.y
;   undefined4 g_Cached3DListenerOrientFront.z
;   double[8] g_VirtualSpeakerXPositions
;   undefined4 g_VirtualSpeakerXPositions[1]
;   double[8] g_VirtualSpeakerYPositions
;   undefined4 g_VirtualSpeakerYPositions[1]
;   double[8] g_VirtualSpeakerZPositions
;   undefined4 g_VirtualSpeakerZPositions[1]
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 005a5530
        ;   Label: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005a5530
    MOV ECX,dword ptr [0x00681b18]      ; 005a5533 | g_AudioChannelCount
    CMP ECX,0x2                         ; 005a5539
    JZ 0x005a558e                       ; 005a553c
        ;   XREF to: 005a558e (CONDITIONAL_JUMP)  ; LAB_005a558e
    TEST ECX,ECX                        ; 005a553e
    JLE 0x005a5584                      ; 005a5540
        ;   XREF to: 005a5584 (CONDITIONAL_JUMP)  ; LAB_005a5584
    FLD double ptr [0x03f68840]         ; 005a5542 | g_Cached3DListenerPos.z
    FLD double ptr [0x03f68838]         ; 005a5548 | g_Cached3DListenerPos.y
    LEA EDX,[ECX*0x8 + 0x0]             ; 005a554e
    XOR EAX,EAX                         ; 005a5555
    FLD double ptr [0x03f68830]         ; 005a5557 | g_Cached3DListenerPos
    FLD ST0                             ; 005a555d
        ;   Label: LAB_005a555d
    FLD ST2                             ; 005a555f
    ADD EAX,0x8                         ; 005a5561
    FLD ST4                             ; 005a5564
    FXCH ST2                            ; 005a5566
    FSTP double ptr [EAX + 0x3f69320]   ; 005a5568 | g_VirtualSpeakerXPositions | g_VirtualSpeakerXPositions[1]
    FSTP double ptr [EAX + 0x3f69360]   ; 005a556e | g_VirtualSpeakerYPositions | g_VirtualSpeakerYPositions[1]
    FSTP double ptr [EAX + 0x3f693a0]   ; 005a5574 | g_VirtualSpeakerZPositions | g_VirtualSpeakerZPositions[1]
    CMP EAX,EDX                         ; 005a557a
    JL 0x005a555d                       ; 005a557c
        ;   XREF to: 005a555d (CONDITIONAL_JUMP)  ; LAB_005a555d
    FSTP ST0                            ; 005a557e
    FSTP ST0                            ; 005a5580
    FSTP ST0                            ; 005a5582
    MOV dword ptr [0x00681b18],ECX      ; 005a5584 | g_AudioChannelCount
        ;   Label: LAB_005a5584
    ADD ESP,0x10                        ; 005a558a
    RET                                 ; 005a558d
    FLD double ptr [0x00681b38]         ; 005a558e | g_Cached3DDistanceFactorInverse
        ;   Label: LAB_005a558e
    FMUL double ptr [0x0064fab7]        ; 005a5594 | DOUBLE_0064fab7
    FLD double ptr [0x03f68860]         ; 005a559a | g_Cached3DListenerOrientFront
    FMUL ST1                            ; 005a55a0
    FLD double ptr [0x03f68868]         ; 005a55a2 | g_Cached3DListenerOrientFront.y
    FMUL ST2                            ; 005a55a8
    FLD double ptr [0x03f68870]         ; 005a55aa | g_Cached3DListenerOrientFront.z
    FMULP ST3                           ; 005a55b0
    FLD double ptr [0x03f68830]         ; 005a55b2 | g_Cached3DListenerPos
    FLD double ptr [0x03f68838]         ; 005a55b8 | g_Cached3DListenerPos.y
    FLD double ptr [0x03f68840]         ; 005a55be | g_Cached3DListenerPos.z
    FXCH ST2                            ; 005a55c4
    FSUB ST0,ST4                        ; 005a55c6
    FXCH                                ; 005a55c8
    FSUB ST0,ST3                        ; 005a55ca
    FXCH ST2                            ; 005a55cc
    FSUB ST0,ST5                        ; 005a55ce
    FLD double ptr [0x03f68830]         ; 005a55d0 | g_Cached3DListenerPos
    FADDP ST5,ST0                       ; 005a55d6
    FLD double ptr [0x03f68838]         ; 005a55d8 | g_Cached3DListenerPos.y
    FADDP ST4,ST0                       ; 005a55de
    FLD double ptr [0x03f68840]         ; 005a55e0 | g_Cached3DListenerPos.z
    FADDP ST6,ST0                       ; 005a55e6
    FXCH                                ; 005a55e8
    FSTP double ptr [0x03f69328]        ; 005a55ea | g_VirtualSpeakerXPositions
    FXCH                                ; 005a55f0
    FSTP double ptr [0x03f69368]        ; 005a55f2 | g_VirtualSpeakerYPositions
    FSTP double ptr [0x03f693a8]        ; 005a55f8 | g_VirtualSpeakerZPositions
    FXCH                                ; 005a55fe
    FSTP double ptr [0x03f69330]        ; 005a5600 | g_VirtualSpeakerXPositions[1]
    FSTP double ptr [0x03f69370]        ; 005a5606 | g_VirtualSpeakerYPositions[1]
    FSTP double ptr [0x03f693b0]        ; 005a560c | g_VirtualSpeakerZPositions[1]
    MOV dword ptr [0x00681b18],ECX      ; 005a5612 | g_AudioChannelCount
    ADD ESP,0x10                        ; 005a5618
    RET                                 ; 005a561b

