; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a7259
;
; Referenced Globals:
;   int g_AudioChannelCount = 0x2
;   double[8] g_VirtualSpeakerXPositions
;   undefined4 g_VirtualSpeakerXPositions[1]
;   double[8] g_VirtualSpeakerYPositions
;   undefined4 g_VirtualSpeakerYPositions[1]
;   double[8] g_VirtualSpeakerZPositions
;   undefined4 g_VirtualSpeakerZPositions[1]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6d80
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005a6d80
    PUSH ESI                            ; 005a6d81
    PUSH EDI                            ; 005a6d82
    SUB ESP,0x18                        ; 005a6d83
    MOV EDI,dword ptr [0x00681b18]      ; 005a6d86 | g_AudioChannelCount
    MOV ESI,dword ptr [ESP + 0x28]      ; 005a6d8c
    XOR EBX,EBX                         ; 005a6d90
    TEST EDI,EDI                        ; 005a6d92
    JLE 0x005a6de0                      ; 005a6d94
        ;   XREF to: 005a6de0 (CONDITIONAL_JUMP)  ; LAB_005a6de0
    MOV ECX,ESI                         ; 005a6d96
    XOR EDX,EDX                         ; 005a6d98
    FLD double ptr [ESI + 0x4]          ; 005a6d9a
        ;   Label: LAB_005a6d9a
    FSUB double ptr [EDX + 0x3f69328]   ; 005a6d9d | g_VirtualSpeakerXPositions | g_VirtualSpeakerXPositions[1]
    FMUL ST0                            ; 005a6da3
    FLD double ptr [ESI + 0xc]          ; 005a6da5
    FSUB double ptr [EDX + 0x3f69368]   ; 005a6da8 | g_VirtualSpeakerYPositions | g_VirtualSpeakerYPositions[1]
    FMUL ST0                            ; 005a6dae
    FLD double ptr [ESI + 0x14]         ; 005a6db0
    FXCH                                ; 005a6db3
    FADDP ST2,ST0                       ; 005a6db5
    FSUB double ptr [EDX + 0x3f693a8]   ; 005a6db7 | g_VirtualSpeakerZPositions | g_VirtualSpeakerZPositions[1]
    FMUL ST0                            ; 005a6dbd
    FADDP                               ; 005a6dbf
    FSQRT                               ; 005a6dc1
    ADD ECX,0x4                         ; 005a6dc3
    ADD EDX,0x8                         ; 005a6dc6
    INC EBX                             ; 005a6dc9
    FSTP float ptr [ECX + 0x7c]         ; 005a6dca
    CMP EBX,EDI                         ; 005a6dcd
    JL 0x005a6d9a                       ; 005a6dcf
        ;   XREF to: 005a6d9a (CONDITIONAL_JUMP)  ; LAB_005a6d9a
    LEA EAX,[EAX]                       ; 005a6dd1
    LEA EDX,[EDX]                       ; 005a6dd7
    LEA EAX,[EAX]                       ; 005a6ddd
    MOV dword ptr [0x00681b18],EDI      ; 005a6de0 | g_AudioChannelCount
        ;   Label: LAB_005a6de0
    ADD ESP,0x18                        ; 005a6de6
    POP EDI                             ; 005a6de9
    POP ESI                             ; 005a6dea
    POP EBX                             ; 005a6deb
    RET                                 ; 005a6dec

