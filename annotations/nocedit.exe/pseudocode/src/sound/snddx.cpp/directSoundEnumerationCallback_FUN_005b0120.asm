; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120(LPGUID device_guid, LPCSTR description, LPCSTR module, LPVOID context)
;
; Parameters:
; typedef LPGUID _GUID * Stack[0x4]:4   device_guid
; typedef LPCSTR CHAR * Stack[0x8]:4   description
; typedef LPCSTR CHAR * Stack[0xc]:4   module
; typedef LPVOID void * Stack[0x10]:4   context
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390 at 005b03b7
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_create_DirectSound_objec_00652271
;   TerminatedCString s_Querry_DirectSound_capab_0065228b
;   int g_DirectSoundDeviceCount = -0x1
;   undefined4 DAT_03f69b44
;   undefined4 DAT_03f69b48
;   undefined4 DAT_03f69b4c
;   undefined4 DAT_03f69b50
;   undefined4 DAT_03f69b54
;   undefined4 DAT_03f69b58
;   undefined4 DAT_03f69b59
;   undefined4 g_RecordingDevices[7].device_name[14]
;   undefined4 g_RecordingDevices[7].device_name[15]
;   int isRecordingStarted
;   int g_RecordingSamplesSigned
;   ... and 1 more
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b0120
        ;   Label: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
    PUSH EDI                            ; 005b0121
    PUSH EBP                            ; 005b0122
    SUB ESP,0x384                       ; 005b0123
    MOV ESI,dword ptr [ESP + 0x394]     ; 005b0129
    CMP dword ptr [0x00681e00],0xc      ; 005b0130 | g_DirectSoundDeviceCount
    JL 0x005b0147                       ; 005b0137
        ;   XREF to: 005b0147 (CONDITIONAL_JUMP)  ; LAB_005b0147
    XOR EAX,EAX                         ; 005b0139
    ADD ESP,0x384                       ; 005b013b
    POP EBP                             ; 005b0141
    POP EDI                             ; 005b0142
    POP ESI                             ; 005b0143
    RET 0x10                            ; 005b0144
    XOR ECX,ECX                         ; 005b0147
        ;   Label: LAB_005b0147
    PUSH ECX                            ; 005b0149
    LEA EAX,[ESP + 0x384]               ; 005b014a
    PUSH EAX                            ; 005b0151
    PUSH ESI                            ; 005b0152
    MOV dword ptr [ESP + 0x38c],ECX     ; 005b0153
    CALL crt_dsound.c_DirectSoundCreate ; 005b015a
        ;   XREF to: 00610f40 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lpGuid, LPDIRECTSOUND * ppDS, LPUNKNOWN pUnkOuter)
    TEST EAX,EAX                        ; 005b015f
    JNZ 0x005b017e                      ; 005b0161
        ;   XREF to: 005b017e (CONDITIONAL_JUMP)  ; LAB_005b017e
    CMP dword ptr [ESP + 0x380],0x0     ; 005b0163
    JNZ 0x005b01c3                      ; 005b016b
        ;   XREF to: 005b01c3 (CONDITIONAL_JUMP)  ; LAB_005b01c3
    MOV EAX,0x1                         ; 005b016d
        ;   Label: LAB_005b016d
    ADD ESP,0x384                       ; 005b0172
    POP EBP                             ; 005b0178
    POP EDI                             ; 005b0179
    POP ESI                             ; 005b017a
    RET 0x10                            ; 005b017b
    PUSH EAX                            ; 005b017e
        ;   Label: LAB_005b017e
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b017f
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b0184
    PUSH EAX                            ; 005b0187
    PUSH 0x652271                       ; 005b0188 | = "create DirectSound object"
    PUSH 0x651a6c                       ; 005b018d | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005b0192
    PUSH EAX                            ; 005b0199
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b019a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b019f
    LEA EAX,[ESP + 0x190]               ; 005b01a2
    PUSH EAX                            ; 005b01a9
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b01aa
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    MOV EAX,0x1                         ; 005b01af
    ADD ESP,0x4                         ; 005b01b4
    ADD ESP,0x384                       ; 005b01b7
    POP EBP                             ; 005b01bd
    POP EDI                             ; 005b01be
    POP ESI                             ; 005b01bf
    RET 0x10                            ; 005b01c0
    PUSH 0x60                           ; 005b01c3
        ;   Label: LAB_005b01c3
    PUSH EAX                            ; 005b01c5
    LEA EAX,[ESP + 0x328]               ; 005b01c6
    PUSH EAX                            ; 005b01cd
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b01ce
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b01d3
    MOV EDI,0x60                        ; 005b01d6
    MOV EAX,dword ptr [ESP + 0x380]     ; 005b01db
    MOV dword ptr [ESP + 0x320],EDI     ; 005b01e2
    MOV EDX,dword ptr [EAX]             ; 005b01e9
    LEA EAX,[ESP + 0x320]               ; 005b01eb
    PUSH EAX                            ; 005b01f2
    MOV EBP,dword ptr [ESP + 0x384]     ; 005b01f3
    PUSH EBP                            ; 005b01fa
    CALL dword ptr [EDX + 0x10]         ; 005b01fb
    TEST EAX,EAX                        ; 005b01fe
    JNZ 0x005b02fd                      ; 005b0200
        ;   XREF to: 005b02fd (CONDITIONAL_JUMP)  ; LAB_005b02fd
    MOV EAX,0x1                         ; 005b0206
    MOV EDI,EAX                         ; 005b020b
        ;   Label: LAB_005b020b
    MOV EAX,dword ptr [ESP + 0x380]     ; 005b020d
    TEST EAX,EAX                        ; 005b0214
    JZ 0x005b022e                       ; 005b0216
        ;   XREF to: 005b022e (CONDITIONAL_JUMP)  ; LAB_005b022e
    MOV EDX,dword ptr [ESP + 0x380]     ; 005b0218
    MOV EAX,dword ptr [EAX]             ; 005b021f
    PUSH EDX                            ; 005b0221
    CALL dword ptr [EAX + 0x8]          ; 005b0222
    XOR ECX,ECX                         ; 005b0225
    MOV dword ptr [ESP + 0x380],ECX     ; 005b0227
    TEST EDI,EDI                        ; 005b022e
        ;   Label: LAB_005b022e
    JZ 0x005b016d                       ; 005b0230
        ;   XREF to: 005b016d (CONDITIONAL_JUMP)  ; LAB_005b016d
    MOV EDX,dword ptr [0x00681e00]      ; 005b0236 | g_DirectSoundDeviceCount
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b023c
    ADD EAX,EDX                         ; 005b0243
    SHL EAX,0x3                         ; 005b0245
    SUB EAX,EDX                         ; 005b0248
    SHL EAX,0x2                         ; 005b024a
    TEST ESI,ESI                        ; 005b024d
    JZ 0x005b0330                       ; 005b024f
        ;   XREF to: 005b0330 (CONDITIONAL_JUMP)  ; LAB_005b0330
    PUSH EBX                            ; 005b0255
    XOR EBX,EBX                         ; 005b0256
    LEA EDI,[EAX + 0x3f69c64]           ; 005b0258 | DAT_03f69b48
    MOV dword ptr [EAX + 0x3f69c60],EBX ; 005b025e | DAT_03f69b44
    MOVSD ES:EDI,ESI                    ; 005b0264 | DAT_03f69b48
    MOVSD ES:EDI,ESI                    ; 005b0265 | DAT_03f69b4c
    MOVSD ES:EDI,ESI                    ; 005b0266 | DAT_03f69b50
    MOVSD ES:EDI,ESI                    ; 005b0267 | DAT_03f69b54
    POP EBX                             ; 005b0268
    TEST byte ptr [ESP + 0x324],0x20    ; 005b0269
        ;   Label: LAB_005b0269
    SETNZ AL                            ; 005b0271
    MOV EDX,dword ptr [0x00681e00]      ; 005b0274 | g_DirectSoundDeviceCount
    MOVZX ESI,AL                        ; 005b027a
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b027d
    ADD EAX,EDX                         ; 005b0284
    SHL EAX,0x3                         ; 005b0286
    SUB EAX,EDX                         ; 005b0289
    MOV EDI,dword ptr [ESP + 0x338]     ; 005b028b
    MOV dword ptr [EAX*0x4 + 0x3f69d74],ESI ; 005b0292 | isRecordingStarted
    TEST EDI,EDI                        ; 005b0299
    SETA AL                             ; 005b029b
    MOV ESI,EAX                         ; 005b029e
    LEA EAX,[EDX*0x8 + 0x0]             ; 005b02a0
    ADD EAX,EDX                         ; 005b02a7
    SHL EAX,0x3                         ; 005b02a9
    SUB EAX,EDX                         ; 005b02ac
    SHL EAX,0x2                         ; 005b02ae
    AND ESI,0xff                        ; 005b02b1
    MOV dword ptr [EAX + 0x3f69d78],ESI ; 005b02b7 | g_RecordingSamplesSigned
    ADD EAX,0x3f69c60                   ; 005b02bd | g_DirectSoundDevices
    MOV ESI,dword ptr [ESP + 0x398]     ; 005b02c2
    LEA EDI,[EAX + 0x14]                ; 005b02c9 | DAT_03f69b58
    PUSH EDI                            ; 005b02cc | DAT_03f69b58
    MOV AL,byte ptr [ESI]               ; 005b02cd
        ;   Label: LAB_005b02cd
    MOV byte ptr [EDI],AL               ; 005b02cf | DAT_03f69b58 | g_RecordingDevices[7].device_name[14]
    CMP AL,0x0                          ; 005b02d1
    JZ 0x005b02e5                       ; 005b02d3
        ;   XREF to: 005b02e5 (CONDITIONAL_JUMP)  ; LAB_005b02e5
    MOV AL,byte ptr [ESI + 0x1]         ; 005b02d5
    ADD ESI,0x2                         ; 005b02d8
    MOV byte ptr [EDI + 0x1],AL         ; 005b02db | DAT_03f69b59 | g_RecordingDevices[7].device_name[15]
    ADD EDI,0x2                         ; 005b02de
    CMP AL,0x0                          ; 005b02e1
    JNZ 0x005b02cd                      ; 005b02e3
        ;   XREF to: 005b02cd (CONDITIONAL_JUMP)  ; LAB_005b02cd
    POP EDI                             ; 005b02e5
        ;   Label: LAB_005b02e5
    MOV EAX,0x1                         ; 005b02e6
    ADD dword ptr [0x00681e00],EAX      ; 005b02eb | g_DirectSoundDeviceCount
    ADD ESP,0x384                       ; 005b02f1
    POP EBP                             ; 005b02f7
    POP EDI                             ; 005b02f8
    POP ESI                             ; 005b02f9
    RET 0x10                            ; 005b02fa
    PUSH EAX                            ; 005b02fd
        ;   Label: LAB_005b02fd
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005b02fe
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005b0303
    PUSH EAX                            ; 005b0306
    PUSH 0x65228b                       ; 005b0307 | = "Querry DirectSound capabilities"
    PUSH 0x651a6c                       ; 005b030c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005b0311
    PUSH EAX                            ; 005b0315
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005b0316
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b031b
    MOV EAX,ESP                         ; 005b031e
    PUSH EAX                            ; 005b0320
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005b0321
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005b0326
    XOR EAX,EAX                         ; 005b0329
    JMP 0x005b020b                      ; 005b032b
        ;   XREF to: 005b020b (UNCONDITIONAL_JUMP)  ; LAB_005b020b
    MOV dword ptr [EAX + 0x3f69c60],0x1 ; 005b0330 | DAT_03f69b44
        ;   Label: LAB_005b0330
    JMP 0x005b0269                      ; 005b033a
        ;   XREF to: 005b0269 (UNCONDITIONAL_JUMP)  ; LAB_005b0269

