; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_005afe80 (CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_sound_snddx_cpp_00652121
;   TerminatedCString s_DirectSoundDevice_startS_00652134
;   TerminatedCString s_sound_snddx_cpp_00652165
;   TerminatedCString s_DirectSoundDevice_startS_00652178
;   TerminatedCString s_sound_snddx_cpp_006521a2
;   TerminatedCString s_DirectSoundDevice_startS_006521b5
;   TerminatedCString s_Play_hardware_sfx_second_0065220f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afe80
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_005afe80
    PUSH ESI                            ; 005afe81
    PUSH EDI                            ; 005afe82
    PUSH EBP                            ; 005afe83
    SUB ESP,0x194                       ; 005afe84
    MOV ESI,dword ptr [ESP + 0x1ac]     ; 005afe8a
    MOV EBX,dword ptr [ESI + 0x70]      ; 005afe91
    TEST EBX,EBX                        ; 005afe94
    JLE 0x005afea1                      ; 005afe96
        ;   XREF to: 005afea1 (CONDITIONAL_JUMP)  ; LAB_005afea1
    CMP EBX,0x1f                        ; 005afe98
    JL 0x005aff91                       ; 005afe9b
        ;   XREF to: 005aff91 (CONDITIONAL_JUMP)  ; LAB_005aff91
    PUSH EBX                            ; 005afea1
        ;   Label: LAB_005afea1
    MOV EDI,0x652121                    ; 005afea2 | = "..\\sound\\snddx.cpp"
    MOV EBP,0x3e8                       ; 005afea7
    PUSH 0x652134                       ; 005afeac | = "DirectSoundDevice::startSfx - invalid..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005afeb1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005afeb7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005afebd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005afec2
    PUSH -0x1                           ; 005afec5
        ;   Label: LAB_005afec5
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 005afec7
    PUSH ESI                            ; 005afece
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 005afecf
    MOV EAX,dword ptr [EAX]             ; 005afed6
    PUSH EDX                            ; 005afed8
    CALL dword ptr [EAX + 0x40]         ; 005afed9
    ADD ESP,0xc                         ; 005afedc
    TEST EAX,EAX                        ; 005afedf
    JZ 0x005aff86                       ; 005afee1
        ;   XREF to: 005aff86 (CONDITIONAL_JUMP)  ; LAB_005aff86
    XOR ECX,ECX                         ; 005afee7
    MOV EDI,dword ptr [ESI + 0x78]      ; 005afee9
    MOV dword ptr [ESP + 0x190],ECX     ; 005afeec
    TEST EDI,EDI                        ; 005afef3
    JZ 0x005affb7                       ; 005afef5
        ;   XREF to: 005affb7 (CONDITIONAL_JUMP)  ; LAB_005affb7
    MOV EAX,dword ptr [ESI + 0x78]      ; 005afefb
        ;   Label: LAB_005afefb
    CMP dword ptr [EAX + 0x124],0x1     ; 005afefe
    JLE 0x005affde                      ; 005aff05
        ;   XREF to: 005affde (CONDITIONAL_JUMP)  ; LAB_005affde
    MOV EDI,0x6521a2                    ; 005aff0b | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005aff0b
    MOV EBP,0x3f4                       ; 005aff10
    PUSH 0x6521b5                       ; 005aff15 | = "DirectSoundDevice::startSfx - exotic ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005aff1a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005aff20 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005aff26
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005aff2b
    MOV EAX,dword ptr [ESI + 0x78]      ; 005aff2e
        ;   Label: LAB_005aff2e
    CMP dword ptr [EAX + 0x124],0x1     ; 005aff31
    JNZ 0x005aff4b                      ; 005aff38
        ;   XREF to: 005aff4b (CONDITIONAL_JUMP)  ; LAB_005aff4b
    CMP dword ptr [EAX + 0x13c],0x0     ; 005aff3a
    JL 0x005aff4b                       ; 005aff41
        ;   XREF to: 005aff4b (CONDITIONAL_JUMP)  ; LAB_005aff4b
    OR byte ptr [ESP + 0x190],0x1       ; 005aff43
    MOV EAX,dword ptr [ESI + 0x78]      ; 005aff4b
        ;   Label: LAB_005aff4b
    MOV ESI,dword ptr [EAX + 0x160]     ; 005aff4e
    CMP ESI,dword ptr [EAX + 0x110]     ; 005aff54
    JZ 0x005aff64                       ; 005aff5a
        ;   XREF to: 005aff64 (CONDITIONAL_JUMP)  ; LAB_005aff64
    OR byte ptr [ESP + 0x190],0x1       ; 005aff5c
    MOV EBP,dword ptr [ESP + 0x190]     ; 005aff64
        ;   Label: LAB_005aff64
    PUSH EBP                            ; 005aff6b
    PUSH 0x0                            ; 005aff6c
    MOV EAX,dword ptr [EBX*0x4 + 0x3f6aa44] ; 005aff6e | g_DirectSoundHardwareSfxBuffers
    PUSH 0x0                            ; 005aff75
    MOV EBX,dword ptr [EAX]             ; 005aff77
    PUSH EAX                            ; 005aff79
    CALL dword ptr [EBX + 0x30]         ; 005aff7a
    TEST EAX,EAX                        ; 005aff7d
    JNZ 0x005afff0                      ; 005aff7f
        ;   XREF to: 005afff0 (CONDITIONAL_JUMP)  ; LAB_005afff0
    MOV EAX,0x1                         ; 005aff81
    ADD ESP,0x194                       ; 005aff86
        ;   Label: LAB_005aff86
    POP EBP                             ; 005aff8c
    POP EDI                             ; 005aff8d
    POP ESI                             ; 005aff8e
    POP EBX                             ; 005aff8f
    RET                                 ; 005aff90
    LEA EAX,[EBX*0x4 + 0x0]             ; 005aff91
        ;   Label: LAB_005aff91
    CMP dword ptr [EAX + 0x3f6aa44],0x0 ; 005aff98 | g_DirectSoundHardwareSfxBuffers
    JZ 0x005afea1                       ; 005aff9f
        ;   XREF to: 005afea1 (CONDITIONAL_JUMP)  ; LAB_005afea1
    CMP dword ptr [EAX + 0x3f6aac0],0x0 ; 005affa5 | g_DirectSound3DBufferInterfaces
    JZ 0x005afea1                       ; 005affac
        ;   XREF to: 005afea1 (CONDITIONAL_JUMP)  ; LAB_005afea1
    JMP 0x005afec5                      ; 005affb2
        ;   XREF to: 005afec5 (UNCONDITIONAL_JUMP)  ; LAB_005afec5
    MOV EBP,0x652165                    ; 005affb7 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005affb7
    MOV EAX,0x3f2                       ; 005affbc
    PUSH 0x652178                       ; 005affc1 | = "DirectSoundDevice::startSfx - no samp..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005affc6 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005affcc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005affd1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005affd6
    JMP 0x005afefb                      ; 005affd9
        ;   XREF to: 005afefb (UNCONDITIONAL_JUMP)  ; LAB_005afefb
    CMP dword ptr [EAX + 0x13c],0x0     ; 005affde
        ;   Label: LAB_005affde
    JG 0x005aff0b                       ; 005affe5
        ;   XREF to: 005aff0b (CONDITIONAL_JUMP)  ; LAB_005aff0b
    JMP 0x005aff2e                      ; 005affeb
        ;   XREF to: 005aff2e (UNCONDITIONAL_JUMP)  ; LAB_005aff2e
    PUSH EAX                            ; 005afff0
        ;   Label: LAB_005afff0
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afff1
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afff6
    PUSH EAX                            ; 005afff9
    PUSH 0x65220f                       ; 005afffa | = "Play hardware sfx secondary buffer"
    PUSH 0x651a6c                       ; 005affff | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005b0004
    PUSH EAX                            ; 005b0008
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b0009
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b000e
    MOV EAX,ESP                         ; 005b0011
    PUSH EAX                            ; 005b0013
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0014
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0019
    XOR EAX,EAX                         ; 005b001c
    ADD ESP,0x194                       ; 005b001e
    POP EBP                             ; 005b0024
    POP EDI                             ; 005b0025
    POP ESI                             ; 005b0026
    POP EBX                             ; 005b0027
    RET                                 ; 005b0028

