; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_getWavInBufferSizeBytes_FUN_00558160(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0264b24c
;   undefined4 DAT_0264b250
;   undefined4 DAT_0264b25c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x0264b24c]      ; 00558160 | DAT_0264b24c
        ;   Label: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_00558160
    MOV EDX,ECX                         ; 00558166
    MOV EAX,ECX                         ; 00558168
    SAR EDX,0x1f                        ; 0055816a
    SHL EDX,0x3                         ; 0055816d
    SBB EAX,EDX                         ; 00558170
    SAR EAX,0x3                         ; 00558172
    IMUL EAX,dword ptr [0x0264b25c]     ; 00558175 | DAT_0264b25c
    IMUL EAX,dword ptr [0x0264b250]     ; 0055817c | DAT_0264b250
    RET                                 ; 00558183

