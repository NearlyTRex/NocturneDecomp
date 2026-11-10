; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_directSoundEnumerationCallback_FUN_0055d0de(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)
;
; Parameters:
; LPGUID           Stack[0x4]:4   device_guid
; LPCSTR           Stack[0x8]:4   description
; LPCSTR           Stack[0xc]:4   module
; LPVOID           Stack[0x10]:4   context
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_create_DirectSound_objec_005d4e8b
;   TerminatedCString s_Querry_DirectSound_capab_005d4ea5
;   undefined4 DAT_00604510
;   undefined4 DAT_02cf3b58
;   undefined4 DAT_02cf3b5c
;   undefined4 DAT_02cf3b60
;   undefined4 DAT_02cf3b64
;   undefined4 DAT_02cf3b68
;   undefined4 DAT_02cf3c6c
;   undefined4 DAT_02cf3c70
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__strncpy_FUN_005a4ee0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0055d0de
        ;   Label: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0055d0de
    PUSH EBX                            ; 0055d0e0
        ;   Label: LAB_0055d0e0
    PUSH ESI                            ; 0055d0e1
    PUSH EDI                            ; 0055d0e2
    PUSH EBP                            ; 0055d0e3
    SUB ESP,0x384                       ; 0055d0e4
    MOV ESI,dword ptr [ESP + 0x398]     ; 0055d0ea
    CMP dword ptr [0x00604510],0xc      ; 0055d0f1 | DAT_00604510
    JL 0x0055d109                       ; 0055d0f8
        ;   XREF to: 0055d109 (CONDITIONAL_JUMP)  ; LAB_0055d109
    XOR EAX,EAX                         ; 0055d0fa
    ADD ESP,0x384                       ; 0055d0fc
    POP EBP                             ; 0055d102
    POP EDI                             ; 0055d103
    POP ESI                             ; 0055d104
    POP EBX                             ; 0055d105
    RET 0x10                            ; 0055d106
    XOR ECX,ECX                         ; 0055d109
        ;   Label: LAB_0055d109
    PUSH ECX                            ; 0055d10b
    LEA EAX,[ESP + 0x384]               ; 0055d10c
    PUSH EAX                            ; 0055d113
    PUSH ESI                            ; 0055d114
    MOV dword ptr [ESP + 0x38c],ECX     ; 0055d115
    CALL crt_dsound.c_DirectSoundCreate ; 0055d11c
        ;   XREF to: 005b25f2 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lp_guid, LPDIRECTSOUND * pp_ds, LPUNKNOWN p_unk_outer)
    TEST EAX,EAX                        ; 0055d121
    JNZ 0x0055d141                      ; 0055d123
        ;   XREF to: 0055d141 (CONDITIONAL_JUMP)  ; LAB_0055d141
    CMP dword ptr [ESP + 0x380],0x0     ; 0055d125
    JNZ 0x0055d17f                      ; 0055d12d
        ;   XREF to: 0055d17f (CONDITIONAL_JUMP)  ; LAB_0055d17f
    MOV EAX,0x1                         ; 0055d12f
    ADD ESP,0x384                       ; 0055d134
    POP EBP                             ; 0055d13a
    POP EDI                             ; 0055d13b
    POP ESI                             ; 0055d13c
    POP EBX                             ; 0055d13d
    RET 0x10                            ; 0055d13e
    PUSH EAX                            ; 0055d141
        ;   Label: LAB_0055d141
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055d142
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055d147
    PUSH EAX                            ; 0055d14a
    PUSH 0x5d4e8b                       ; 0055d14b | = "create DirectSound object"
    PUSH 0x5d452f                       ; 0055d150 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055d155
    PUSH EAX                            ; 0055d159
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055d15a
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055d15f
    MOV EAX,ESP                         ; 0055d162
    PUSH EAX                            ; 0055d164
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055d165
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    MOV EAX,0x1                         ; 0055d16a
    ADD ESP,0x4                         ; 0055d16f
    ADD ESP,0x384                       ; 0055d172
    POP EBP                             ; 0055d178
    POP EDI                             ; 0055d179
    POP ESI                             ; 0055d17a
    POP EBX                             ; 0055d17b
    RET 0x10                            ; 0055d17c
    PUSH 0x60                           ; 0055d17f
        ;   Label: LAB_0055d17f
    PUSH EAX                            ; 0055d181
    LEA EAX,[ESP + 0x328]               ; 0055d182
    PUSH EAX                            ; 0055d189
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055d18a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055d18f
    MOV EDI,0x60                        ; 0055d192
    MOV EAX,dword ptr [ESP + 0x380]     ; 0055d197
    MOV dword ptr [ESP + 0x320],EDI     ; 0055d19e
    MOV EBX,dword ptr [EAX]             ; 0055d1a5
    LEA EAX,[ESP + 0x320]               ; 0055d1a7
    PUSH EAX                            ; 0055d1ae
    MOV EBP,dword ptr [ESP + 0x384]     ; 0055d1af
    PUSH EBP                            ; 0055d1b6
    CALL dword ptr [EBX + 0x10]         ; 0055d1b7
    TEST EAX,EAX                        ; 0055d1ba
    JNZ 0x0055d1fc                      ; 0055d1bc
        ;   XREF to: 0055d1fc (CONDITIONAL_JUMP)  ; LAB_0055d1fc
    MOV EAX,0x1                         ; 0055d1be
    MOV EBX,EAX                         ; 0055d1c3
        ;   Label: LAB_0055d1c3
    MOV EAX,dword ptr [ESP + 0x380]     ; 0055d1c5
    TEST EAX,EAX                        ; 0055d1cc
    JZ 0x0055d1e6                       ; 0055d1ce
        ;   XREF to: 0055d1e6 (CONDITIONAL_JUMP)  ; LAB_0055d1e6
    MOV EDX,dword ptr [ESP + 0x380]     ; 0055d1d0
    MOV EAX,dword ptr [EAX]             ; 0055d1d7
    PUSH EDX                            ; 0055d1d9
    CALL dword ptr [EAX + 0x8]          ; 0055d1da
    XOR ECX,ECX                         ; 0055d1dd
    MOV dword ptr [ESP + 0x380],ECX     ; 0055d1df
    TEST EBX,EBX                        ; 0055d1e6
        ;   Label: LAB_0055d1e6
    JNZ 0x0055d234                      ; 0055d1e8
        ;   XREF to: 0055d234 (CONDITIONAL_JUMP)  ; LAB_0055d234
    MOV EAX,0x1                         ; 0055d1ea
    ADD ESP,0x384                       ; 0055d1ef
    POP EBP                             ; 0055d1f5
    POP EDI                             ; 0055d1f6
    POP ESI                             ; 0055d1f7
    POP EBX                             ; 0055d1f8
    RET 0x10                            ; 0055d1f9
    PUSH EAX                            ; 0055d1fc
        ;   Label: LAB_0055d1fc
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055d1fd
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055d202
    PUSH EAX                            ; 0055d205
    PUSH 0x5d4ea5                       ; 0055d206 | = "Querry DirectSound capabilities"
    PUSH 0x5d452f                       ; 0055d20b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055d210
    PUSH EAX                            ; 0055d217
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055d218
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055d21d
    LEA EAX,[ESP + 0x190]               ; 0055d220
    PUSH EAX                            ; 0055d227
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055d228
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055d22d
    XOR EAX,EAX                         ; 0055d230
    JMP 0x0055d1c3                      ; 0055d232
        ;   XREF to: 0055d1c3 (UNCONDITIONAL_JUMP)  ; LAB_0055d1c3
    MOV EBX,dword ptr [0x00604510]      ; 0055d234 | DAT_00604510
        ;   Label: LAB_0055d234
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055d23a
    ADD EAX,EBX                         ; 0055d241
    SHL EAX,0x3                         ; 0055d243
    PUSH 0x11c                          ; 0055d246
    SUB EAX,EBX                         ; 0055d24b
    MOV EBX,0x2cf3c74                   ; 0055d24d
    SHL EAX,0x2                         ; 0055d252
    PUSH 0x0                            ; 0055d255
    ADD EBX,EAX                         ; 0055d257
    PUSH EBX                            ; 0055d259
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0055d25a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055d25f
    TEST ESI,ESI                        ; 0055d262
    JNZ 0x0055d2c3                      ; 0055d264
        ;   XREF to: 0055d2c3 (CONDITIONAL_JUMP)  ; LAB_0055d2c3
    MOV dword ptr [EBX],0x1             ; 0055d266 | DAT_02cf3b58
    MOV dword ptr [EBX + 0x118],0x0     ; 0055d26c | DAT_02cf3c70
        ;   Label: LAB_0055d26c
    TEST byte ptr [ESP + 0x324],0x20    ; 0055d276
    JZ 0x0055d2d2                       ; 0055d27e
        ;   XREF to: 0055d2d2 (CONDITIONAL_JUMP)  ; LAB_0055d2d2
    MOV dword ptr [EBX + 0x114],0x1     ; 0055d280 | DAT_02cf3c6c
    PUSH 0xff                           ; 0055d28a
        ;   Label: LAB_0055d28a
    MOV EBP,dword ptr [ESP + 0x3a0]     ; 0055d28f
    PUSH EBP                            ; 0055d296
    ADD EBX,0x14                        ; 0055d297
    PUSH EBX                            ; 0055d29a
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 0055d29b
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 0055d2a0
    MOV EDX,dword ptr [0x00604510]      ; 0055d2a5 | DAT_00604510
    ADD EDX,EAX                         ; 0055d2ab
    ADD ESP,0xc                         ; 0055d2ad
    MOV dword ptr [0x00604510],EDX      ; 0055d2b0 | DAT_00604510
    ADD ESP,0x384                       ; 0055d2b6
    POP EBP                             ; 0055d2bc
    POP EDI                             ; 0055d2bd
    POP ESI                             ; 0055d2be
    POP EBX                             ; 0055d2bf
    RET 0x10                            ; 0055d2c0
    LEA EDI,[EBX + 0x4]                 ; 0055d2c3
        ;   Label: LAB_0055d2c3
    MOV dword ptr [EBX],0x0             ; 0055d2c6 | DAT_02cf3b58
    MOVSD ES:EDI,ESI                    ; 0055d2cc | DAT_02cf3b5c
    MOVSD ES:EDI,ESI                    ; 0055d2cd | DAT_02cf3b60
    MOVSD ES:EDI,ESI                    ; 0055d2ce | DAT_02cf3b64
    MOVSD ES:EDI,ESI                    ; 0055d2cf | DAT_02cf3b68
    JMP 0x0055d26c                      ; 0055d2d0
        ;   XREF to: 0055d26c (UNCONDITIONAL_JUMP)  ; LAB_0055d26c
    MOV dword ptr [EBX + 0x114],0x0     ; 0055d2d2 | DAT_02cf3c6c
        ;   Label: LAB_0055d2d2
    CMP dword ptr [ESP + 0x338],0x0     ; 0055d2dc
    JBE 0x0055d2f0                      ; 0055d2e4
        ;   XREF to: 0055d2f0 (CONDITIONAL_JUMP)  ; LAB_0055d2f0
    MOV dword ptr [EBX + 0x118],0x1     ; 0055d2e6 | DAT_02cf3c70
    CMP dword ptr [ESP + 0x34c],0x0     ; 0055d2f0
        ;   Label: LAB_0055d2f0
    JBE 0x0055d28a                      ; 0055d2f8
        ;   XREF to: 0055d28a (CONDITIONAL_JUMP)  ; LAB_0055d28a
    MOV dword ptr [EBX + 0x118],0x2     ; 0055d2fa | DAT_02cf3c70
    JMP 0x0055d28a                      ; 0055d304
        ;   XREF to: 0055d28a (UNCONDITIONAL_JUMP)  ; LAB_0055d28a

