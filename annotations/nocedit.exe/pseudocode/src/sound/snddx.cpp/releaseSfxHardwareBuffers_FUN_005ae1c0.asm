; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0(int sfx_handle)
;
; Parameters:
; int              Stack[0x4]:4   sfx_handle
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
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

    PUSH EBX                            ; 005ae1c0
        ;   Label: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0
    PUSH ESI                            ; 005ae1c1
    SUB ESP,0x190                       ; 005ae1c2
    MOV ESI,dword ptr [ESP + 0x19c]     ; 005ae1c8
    LEA EAX,[ESI*0x4 + 0x0]             ; 005ae1cf
    MOV EDX,dword ptr [EAX + 0x3f6aa44] ; 005ae1d6 | g_DirectSoundHardwareSfxBuffers
    TEST EDX,EDX                        ; 005ae1dc
    JNZ 0x005ae220                      ; 005ae1de
        ;   XREF to: 005ae220 (CONDITIONAL_JUMP)  ; LAB_005ae220
    LEA EBX,[ESI*0x4 + 0x0]             ; 005ae1e0
        ;   Label: LAB_005ae1e0
    ADD EBX,0x3f6aac0                   ; 005ae1e7 | g_DirectSound3DBufferInterfaces
    MOV ECX,dword ptr [EBX]             ; 005ae1ed | g_DirectSound3DBufferInterfaces
    TEST ECX,ECX                        ; 005ae1ef
    JNZ 0x005ae25a                      ; 005ae1f1
        ;   XREF to: 005ae25a (CONDITIONAL_JUMP)  ; LAB_005ae25a
    LEA EBX,[ESI*0x4 + 0x0]             ; 005ae1f3
        ;   Label: LAB_005ae1f3
    ADD EBX,0x3f6aa44                   ; 005ae1fa | g_DirectSoundHardwareSfxBuffers
    MOV ESI,dword ptr [EBX]             ; 005ae200 | g_DirectSoundHardwareSfxBuffers
    TEST ESI,ESI                        ; 005ae202
    JZ 0x005ae212                       ; 005ae204
        ;   XREF to: 005ae212 (CONDITIONAL_JUMP)  ; LAB_005ae212
    PUSH ESI                            ; 005ae206
    MOV EDX,dword ptr [ESI]             ; 005ae207
    CALL dword ptr [EDX + 0x8]          ; 005ae209
    MOV dword ptr [EBX],0x0             ; 005ae20c | g_DirectSoundHardwareSfxBuffers
    MOV EAX,0x1                         ; 005ae212
        ;   Label: LAB_005ae212
    ADD ESP,0x190                       ; 005ae217
        ;   Label: LAB_005ae217
    POP ESI                             ; 005ae21d
    POP EBX                             ; 005ae21e
    RET                                 ; 005ae21f
    PUSH EDX                            ; 005ae220
        ;   Label: LAB_005ae220
    MOV EBX,dword ptr [EDX]             ; 005ae221
    CALL dword ptr [EBX + 0x48]         ; 005ae223
    TEST EAX,EAX                        ; 005ae226
    JZ 0x005ae1e0                       ; 005ae228
        ;   XREF to: 005ae1e0 (CONDITIONAL_JUMP)  ; LAB_005ae1e0
    PUSH EAX                            ; 005ae22a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae22b
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005ae230
    PUSH EAX                            ; 005ae233
    PUSH 0x651ab9                       ; 005ae234 | = "Stop hardware sfx secondary buffer"
    PUSH 0x651a6c                       ; 005ae239 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005ae23e
    PUSH EAX                            ; 005ae242
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae243
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005ae248
    MOV EAX,ESP                         ; 005ae24b
    PUSH EAX                            ; 005ae24d
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae24e
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005ae253
    XOR EAX,EAX                         ; 005ae256
    JMP 0x005ae217                      ; 005ae258
        ;   XREF to: 005ae217 (UNCONDITIONAL_JUMP)  ; LAB_005ae217
    PUSH ECX                            ; 005ae25a
        ;   Label: LAB_005ae25a
    MOV EDX,dword ptr [ECX]             ; 005ae25b
    CALL dword ptr [EDX + 0x8]          ; 005ae25d
    MOV dword ptr [EBX],0x0             ; 005ae260 | g_DirectSound3DBufferInterfaces
    JMP 0x005ae1f3                      ; 005ae266
        ;   XREF to: 005ae1f3 (UNCONDITIONAL_JUMP)  ; LAB_005ae1f3

