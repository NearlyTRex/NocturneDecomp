; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_005b0030(CDirectSoundDevice *this_ptr,CSfxSlot *slot)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
;   TerminatedCString s_DirectSoundDevice_killSf_00652232
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0030
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030
    PUSH ESI                            ; 005b0031
    PUSH EDI                            ; 005b0032
    PUSH EBP                            ; 005b0033
    SUB ESP,0x190                       ; 005b0034
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 005b003a
    MOV EAX,dword ptr [EAX + 0x70]      ; 005b0041
    TEST EAX,EAX                        ; 005b0044
    JLE 0x005b004d                      ; 005b0046
        ;   XREF to: 005b004d (CONDITIONAL_JUMP)  ; LAB_005b004d
    CMP EAX,0x1f                        ; 005b0048
    JL 0x005b0065                       ; 005b004b
        ;   XREF to: 005b0065 (CONDITIONAL_JUMP)  ; LAB_005b0065
    PUSH 0x652232                       ; 005b004d | = "DirectSoundDevice::killSfx - handle w..."
        ;   Label: LAB_005b004d
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0052
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0057
    ADD ESP,0x190                       ; 005b005a
        ;   Label: LAB_005b005a
    POP EBP                             ; 005b0060
    POP EDI                             ; 005b0061
    POP ESI                             ; 005b0062
    POP EBX                             ; 005b0063
    RET                                 ; 005b0064
    LEA EBX,[EAX*0x4 + 0x0]             ; 005b0065
        ;   Label: LAB_005b0065
    CMP dword ptr [EBX + 0x3f6aa44],0x0 ; 005b006c | g_DirectSoundHardwareSfxBuffers
    JZ 0x005b004d                       ; 005b0073
        ;   XREF to: 005b004d (CONDITIONAL_JUMP)  ; LAB_005b004d
    CMP dword ptr [EBX + 0x3f6aac0],0x0 ; 005b0075 | g_DirectSound3DBufferInterfaces
    JZ 0x005b004d                       ; 005b007c
        ;   XREF to: 005b004d (CONDITIONAL_JUMP)  ; LAB_005b004d
    MOV ESI,EAX                         ; 005b007e
    SHL EAX,0x2                         ; 005b0080
    MOV EBX,dword ptr [EAX + 0x3f6aa44] ; 005b0083 | g_DirectSoundHardwareSfxBuffers
    TEST EBX,EBX                        ; 005b0089
    JNZ 0x005b00d7                      ; 005b008b
        ;   XREF to: 005b00d7 (CONDITIONAL_JUMP)  ; LAB_005b00d7
    LEA EBX,[ESI*0x4 + 0x0]             ; 005b008d
        ;   Label: LAB_005b008d
    ADD EBX,0x3f6aac0                   ; 005b0094 | g_DirectSound3DBufferInterfaces
    MOV EDI,dword ptr [EBX]             ; 005b009a | g_DirectSound3DBufferInterfaces
    TEST EDI,EDI                        ; 005b009c
    JZ 0x005b00ac                       ; 005b009e
        ;   XREF to: 005b00ac (CONDITIONAL_JUMP)  ; LAB_005b00ac
    PUSH EDI                            ; 005b00a0
    MOV EDX,dword ptr [EDI]             ; 005b00a1
    CALL dword ptr [EDX + 0x8]          ; 005b00a3
    MOV dword ptr [EBX],0x0             ; 005b00a6 | g_DirectSound3DBufferInterfaces
    LEA EBX,[ESI*0x4 + 0x0]             ; 005b00ac
        ;   Label: LAB_005b00ac
    ADD EBX,0x3f6aa44                   ; 005b00b3 | g_DirectSoundHardwareSfxBuffers
    MOV EBP,dword ptr [EBX]             ; 005b00b9 | g_DirectSoundHardwareSfxBuffers
    TEST EBP,EBP                        ; 005b00bb
    JZ 0x005b005a                       ; 005b00bd
        ;   XREF to: 005b005a (CONDITIONAL_JUMP)  ; LAB_005b005a
    PUSH EBP                            ; 005b00bf
    MOV ESI,dword ptr [EBP]             ; 005b00c0
    CALL dword ptr [ESI + 0x8]          ; 005b00c3
    MOV dword ptr [EBX],0x0             ; 005b00c6 | g_DirectSoundHardwareSfxBuffers
    ADD ESP,0x190                       ; 005b00cc
    POP EBP                             ; 005b00d2
    POP EDI                             ; 005b00d3
    POP ESI                             ; 005b00d4
    POP EBX                             ; 005b00d5
    RET                                 ; 005b00d6
    MOV EAX,EBX                         ; 005b00d7
        ;   Label: LAB_005b00d7
    PUSH EAX                            ; 005b00d9
    MOV EBX,dword ptr [EBX]             ; 005b00da
    CALL dword ptr [EBX + 0x48]         ; 005b00dc
    TEST EAX,EAX                        ; 005b00df
    JZ 0x005b008d                       ; 005b00e1
        ;   XREF to: 005b008d (CONDITIONAL_JUMP)  ; LAB_005b008d
    PUSH EAX                            ; 005b00e3
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b00e4
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b00e9
    PUSH EAX                            ; 005b00ec
    PUSH 0x651ab9                       ; 005b00ed | = "Stop hardware sfx secondary buffer"
    PUSH 0x651a6c                       ; 005b00f2 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005b00f7
    PUSH EAX                            ; 005b00fb
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b00fc
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b0101
    MOV EAX,ESP                         ; 005b0104
    PUSH EAX                            ; 005b0106
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0107
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b010c
    ADD ESP,0x190                       ; 005b010f
    POP EBP                             ; 005b0115
    POP EDI                             ; 005b0116
    POP ESI                             ; 005b0117
    POP EBX                             ; 005b0118
    RET                                 ; 005b0119

