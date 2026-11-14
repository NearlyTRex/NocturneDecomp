; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_getWavOutBufferSizeBytes_FUN_0057a590(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02c828c4
;   undefined4 DAT_02c828c8
;   undefined4 DAT_02c828d0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02c828c4]      ; 0057a590 | DAT_02c828c4
        ;   Label: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_0057a590
    MOV EDX,ECX                         ; 0057a596
    MOV EAX,ECX                         ; 0057a598
    SAR EDX,0x1f                        ; 0057a59a
    SHL EDX,0x3                         ; 0057a59d
    SBB EAX,EDX                         ; 0057a5a0
    SAR EAX,0x3                         ; 0057a5a2
    IMUL EAX,dword ptr [0x02c828d0]     ; 0057a5a5 | DAT_02c828d0
    IMUL EAX,dword ptr [0x02c828c8]     ; 0057a5ac | DAT_02c828c8
    RET                                 ; 0057a5b3

