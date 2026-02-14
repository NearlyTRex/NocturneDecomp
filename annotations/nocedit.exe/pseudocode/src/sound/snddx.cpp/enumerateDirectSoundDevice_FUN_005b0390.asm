; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390(UINT device_id,SSoundDeviceInfo *device_info)
;
; Parameters:
; UINT             Stack[0x4]:4   device_id
; SSoundDeviceInfo * Stack[0x8]:4   device_info
;
; XREF[2]:
;   sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440 at 005b0474
;   sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0 at 005ab34a
;
; Referenced Globals:
;   TerminatedCString s_DirectSound_s_006522ab
;   int g_DirectSoundDeviceCount = -0x1
;   SDirectSoundDeviceInfo[8] g_DirectSoundDevices
;   undefined4 g_DirectSoundDevices[0].value2
;   undefined4 g_DirectSoundDevices[0].value1
;
; Called Functions:
;   crt_dsound.c_DirectSoundEnumerateA
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0390
        ;   Label: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
    PUSH ESI                            ; 005b0391
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b0392
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b0396
    CMP dword ptr [0x00681e00],0x0      ; 005b039a | g_DirectSoundDeviceCount
    JL 0x005b03b4                       ; 005b03a1
        ;   XREF to: 005b03b4 (CONDITIONAL_JUMP)  ; LAB_005b03b4
    TEST ESI,ESI                        ; 005b03a3
        ;   Label: LAB_005b03a3
    JL 0x005b03af                       ; 005b03a5
        ;   XREF to: 005b03af (CONDITIONAL_JUMP)  ; LAB_005b03af
    CMP ESI,dword ptr [0x00681e00]      ; 005b03a7 | g_DirectSoundDeviceCount
    JL 0x005b03c9                       ; 005b03ad
        ;   XREF to: 005b03c9 (CONDITIONAL_JUMP)  ; LAB_005b03c9
    XOR EAX,EAX                         ; 005b03af
        ;   Label: LAB_005b03af
    POP ESI                             ; 005b03b1
    POP EBX                             ; 005b03b2
    RET                                 ; 005b03b3
    XOR ECX,ECX                         ; 005b03b4
        ;   Label: LAB_005b03b4
    PUSH ECX                            ; 005b03b6
    PUSH 0x5b0120                       ; 005b03b7
    MOV dword ptr [0x00681e00],ECX      ; 005b03bc | g_DirectSoundDeviceCount
    CALL crt_dsound.c_DirectSoundEnumerateA ; 005b03c2
        ;   XREF to: 00610f3a (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundEnumerateA(LPDSENUMCALLBACKA lpDSEnumCallback, LPVOID lpContext)
    JMP 0x005b03a3                      ; 005b03c7
        ;   XREF to: 005b03a3 (UNCONDITIONAL_JUMP)  ; LAB_005b03a3
    MOV dword ptr [EBX + 0x104],ESI     ; 005b03c9
        ;   Label: LAB_005b03c9
    LEA EAX,[ESI*0x8 + 0x0]             ; 005b03cf
    ADD EAX,ESI                         ; 005b03d6
    SHL EAX,0x3                         ; 005b03d8
    SUB EAX,ESI                         ; 005b03db
    SHL EAX,0x2                         ; 005b03dd
    MOV dword ptr [EBX + 0x100],0x1     ; 005b03e0
    MOV EDX,dword ptr [EAX + 0x3f69d78] ; 005b03ea | g_DirectSoundDevices[0].value1
    MOV dword ptr [EBX + 0x10c],0x0     ; 005b03f0
    MOV dword ptr [EBX + 0x108],EDX     ; 005b03fa
    MOV EDX,dword ptr [EAX + 0x3f69d74] ; 005b0400 | g_DirectSoundDevices[0].value2
    MOV dword ptr [EBX + 0x114],EDX     ; 005b0406
    MOV EDX,dword ptr [EAX + 0x3f69c60] ; 005b040c | g_DirectSoundDevices
    ADD EAX,0x3f69c60                   ; 005b0412 | g_DirectSoundDevices
    ADD EAX,0x14                        ; 005b0417
    PUSH EAX                            ; 005b041a
    PUSH 0x6522ab                       ; 005b041b | = "DirectSound: %s"
    PUSH EBX                            ; 005b0420
    MOV dword ptr [EBX + 0x110],EDX     ; 005b0421
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005b0427
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x1                         ; 005b042c
    ADD ESP,0xc                         ; 005b0431
    POP ESI                             ; 005b0434
    POP EBX                             ; 005b0435
    RET                                 ; 005b0436

