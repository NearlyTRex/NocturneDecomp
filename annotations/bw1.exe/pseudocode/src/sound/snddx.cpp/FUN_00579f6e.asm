; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_FUN_00579f6e(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context)
;
; Parameters:
; LPGUID           Stack[0x4]:4   device_guid
; LPCSTR           Stack[0x8]:4   description
; LPCSTR           Stack[0xc]:4   module
; LPVOID           Stack[0x10]:4   context
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_create_DirectSound_objec_005f5591
;   TerminatedCString s_Querry_DirectSound_capab_005f55ab
;   TerminatedCString s_SOUND_No_onboard_RAM_det_005f55cb
;   TerminatedCString s_SOUND_Onboard_RAM_detect_005f5617
;   undefined4 DAT_006235d0
;   undefined4 DAT_02c80f28
;   undefined4 DAT_02c80f2c
;   undefined4 DAT_02c80f30
;   undefined4 DAT_02c80f34
;   undefined4 DAT_02c80f38
;   undefined4 DAT_02c8103c
;   undefined4 DAT_02c81040
;   undefined4 DAT_02c823dc
;
; Called Functions:
;   crt_dsound.c_DirectSoundCreate
;   crt_memory.c_memset_FUN_005bfb70
;   crt_string.c__strncpy_FUN_005c20d0
;   crt_unknown.c_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_FUN_005773f0
;   wincore_winrun.cpp_FUN_005b3a90
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00579f6e
        ;   Label: sound_snddx.cpp_FUN_00579f6e
    PUSH EBX                            ; 00579f70
        ;   Label: LAB_00579f70
    PUSH ESI                            ; 00579f71
    PUSH EDI                            ; 00579f72
    PUSH EBP                            ; 00579f73
    SUB ESP,0x384                       ; 00579f74
    MOV ESI,dword ptr [ESP + 0x398]     ; 00579f7a
    CMP dword ptr [0x006235d0],0xc      ; 00579f81 | DAT_006235d0
    JL 0x00579f99                       ; 00579f88
        ;   XREF to: 00579f99 (CONDITIONAL_JUMP)  ; LAB_00579f99
    XOR EAX,EAX                         ; 00579f8a
    ADD ESP,0x384                       ; 00579f8c
    POP EBP                             ; 00579f92
    POP EDI                             ; 00579f93
    POP ESI                             ; 00579f94
    POP EBX                             ; 00579f95
    RET 0x10                            ; 00579f96
    XOR ECX,ECX                         ; 00579f99
        ;   Label: LAB_00579f99
    PUSH ECX                            ; 00579f9b
    LEA EAX,[ESP + 0x384]               ; 00579f9c
    PUSH EAX                            ; 00579fa3
    PUSH ESI                            ; 00579fa4
    MOV dword ptr [ESP + 0x38c],ECX     ; 00579fa5
    CALL crt_dsound.c_DirectSoundCreate ; 00579fac
        ;   XREF to: 005cf862 (UNCONDITIONAL_CALL)  ; HRESULT crt_dsound.c_DirectSoundCreate(LPGUID lp_guid, LPDIRECTSOUND * pp_ds, LPUNKNOWN p_unk_outer)
    TEST EAX,EAX                        ; 00579fb1
    JNZ 0x00579fd1                      ; 00579fb3
        ;   XREF to: 00579fd1 (CONDITIONAL_JUMP)  ; LAB_00579fd1
    CMP dword ptr [ESP + 0x380],0x0     ; 00579fb5
    JNZ 0x0057a00f                      ; 00579fbd
        ;   XREF to: 0057a00f (CONDITIONAL_JUMP)  ; LAB_0057a00f
    MOV EAX,0x1                         ; 00579fbf
    ADD ESP,0x384                       ; 00579fc4
    POP EBP                             ; 00579fca
    POP EDI                             ; 00579fcb
    POP ESI                             ; 00579fcc
    POP EBX                             ; 00579fcd
    RET 0x10                            ; 00579fce
    PUSH EAX                            ; 00579fd1
        ;   Label: LAB_00579fd1
    CALL sound_snddx.cpp_FUN_00577500   ; 00579fd2
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00579fd7
    PUSH EAX                            ; 00579fda
    PUSH 0x5f5591                       ; 00579fdb | = "create DirectSound object"
    PUSH 0x5f4c35                       ; 00579fe0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00579fe5
    PUSH EAX                            ; 00579fe9
    CALL crt_unknown.c_FUN_005bfb40     ; 00579fea
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00579fef
    MOV EAX,ESP                         ; 00579ff2
    PUSH EAX                            ; 00579ff4
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00579ff5
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    MOV EAX,0x1                         ; 00579ffa
    ADD ESP,0x4                         ; 00579fff
    ADD ESP,0x384                       ; 0057a002
    POP EBP                             ; 0057a008
    POP EDI                             ; 0057a009
    POP ESI                             ; 0057a00a
    POP EBX                             ; 0057a00b
    RET 0x10                            ; 0057a00c
    PUSH 0x60                           ; 0057a00f
        ;   Label: LAB_0057a00f
    PUSH EAX                            ; 0057a011
    LEA EAX,[ESP + 0x328]               ; 0057a012
    PUSH EAX                            ; 0057a019
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057a01a
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a01f
    MOV EDI,0x60                        ; 0057a022
    MOV EAX,dword ptr [ESP + 0x380]     ; 0057a027
    MOV dword ptr [ESP + 0x320],EDI     ; 0057a02e
    MOV EBX,dword ptr [EAX]             ; 0057a035
    LEA EAX,[ESP + 0x320]               ; 0057a037
    PUSH EAX                            ; 0057a03e
    MOV EBP,dword ptr [ESP + 0x384]     ; 0057a03f
    PUSH EBP                            ; 0057a046
    CALL dword ptr [EBX + 0x10]         ; 0057a047
    TEST EAX,EAX                        ; 0057a04a
    JNZ 0x0057a08c                      ; 0057a04c
        ;   XREF to: 0057a08c (CONDITIONAL_JUMP)  ; LAB_0057a08c
    MOV EAX,0x1                         ; 0057a04e
    MOV EBX,EAX                         ; 0057a053
        ;   Label: LAB_0057a053
    MOV EAX,dword ptr [ESP + 0x380]     ; 0057a055
    TEST EAX,EAX                        ; 0057a05c
    JZ 0x0057a076                       ; 0057a05e
        ;   XREF to: 0057a076 (CONDITIONAL_JUMP)  ; LAB_0057a076
    MOV EDX,dword ptr [ESP + 0x380]     ; 0057a060
    MOV EAX,dword ptr [EAX]             ; 0057a067
    PUSH EDX                            ; 0057a069
    CALL dword ptr [EAX + 0x8]          ; 0057a06a
    XOR ECX,ECX                         ; 0057a06d
    MOV dword ptr [ESP + 0x380],ECX     ; 0057a06f
    TEST EBX,EBX                        ; 0057a076
        ;   Label: LAB_0057a076
    JNZ 0x0057a0c4                      ; 0057a078
        ;   XREF to: 0057a0c4 (CONDITIONAL_JUMP)  ; LAB_0057a0c4
    MOV EAX,0x1                         ; 0057a07a
    ADD ESP,0x384                       ; 0057a07f
    POP EBP                             ; 0057a085
    POP EDI                             ; 0057a086
    POP ESI                             ; 0057a087
    POP EBX                             ; 0057a088
    RET 0x10                            ; 0057a089
    PUSH EAX                            ; 0057a08c
        ;   Label: LAB_0057a08c
    CALL sound_snddx.cpp_FUN_00577500   ; 0057a08d
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057a092
    PUSH EAX                            ; 0057a095
    PUSH 0x5f55ab                       ; 0057a096 | = "Querry DirectSound capabilities"
    PUSH 0x5f4c35                       ; 0057a09b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0057a0a0
    PUSH EAX                            ; 0057a0a7
    CALL crt_unknown.c_FUN_005bfb40     ; 0057a0a8
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 0057a0ad
    LEA EAX,[ESP + 0x190]               ; 0057a0b0
    PUSH EAX                            ; 0057a0b7
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a0b8
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057a0bd
    XOR EAX,EAX                         ; 0057a0c0
    JMP 0x0057a053                      ; 0057a0c2
        ;   XREF to: 0057a053 (UNCONDITIONAL_JUMP)  ; LAB_0057a053
    MOV EBX,dword ptr [0x006235d0]      ; 0057a0c4 | DAT_006235d0
        ;   Label: LAB_0057a0c4
    LEA EAX,[EBX*0x8 + 0x0]             ; 0057a0ca
    ADD EAX,EBX                         ; 0057a0d1
    SHL EAX,0x3                         ; 0057a0d3
    PUSH 0x11c                          ; 0057a0d6
    SUB EAX,EBX                         ; 0057a0db
    MOV EBX,0x2c81044                   ; 0057a0dd
    SHL EAX,0x2                         ; 0057a0e2
    PUSH 0x0                            ; 0057a0e5
    ADD EBX,EAX                         ; 0057a0e7
    PUSH EBX                            ; 0057a0e9
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057a0ea
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a0ef
    TEST ESI,ESI                        ; 0057a0f2
    JNZ 0x0057a153                      ; 0057a0f4
        ;   XREF to: 0057a153 (CONDITIONAL_JUMP)  ; LAB_0057a153
    MOV dword ptr [EBX],0x1             ; 0057a0f6 | DAT_02c80f28
    MOV dword ptr [EBX + 0x118],0x0     ; 0057a0fc | DAT_02c81040
        ;   Label: LAB_0057a0fc
    TEST byte ptr [ESP + 0x324],0x20    ; 0057a106
    JZ 0x0057a162                       ; 0057a10e
        ;   XREF to: 0057a162 (CONDITIONAL_JUMP)  ; LAB_0057a162
    MOV dword ptr [EBX + 0x114],0x1     ; 0057a110 | DAT_02c8103c
    PUSH 0xff                           ; 0057a11a
        ;   Label: LAB_0057a11a
    MOV ECX,dword ptr [ESP + 0x3a0]     ; 0057a11f
    PUSH ECX                            ; 0057a126
    ADD EBX,0x14                        ; 0057a127
    PUSH EBX                            ; 0057a12a
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 0057a12b
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 0057a130
    MOV EBX,dword ptr [0x006235d0]      ; 0057a135 | DAT_006235d0
    ADD EBX,EAX                         ; 0057a13b
    ADD ESP,0xc                         ; 0057a13d
    MOV dword ptr [0x006235d0],EBX      ; 0057a140 | DAT_006235d0
    ADD ESP,0x384                       ; 0057a146
    POP EBP                             ; 0057a14c
    POP EDI                             ; 0057a14d
    POP ESI                             ; 0057a14e
    POP EBX                             ; 0057a14f
    RET 0x10                            ; 0057a150
    LEA EDI,[EBX + 0x4]                 ; 0057a153
        ;   Label: LAB_0057a153
    MOV dword ptr [EBX],0x0             ; 0057a156 | DAT_02c80f28
    MOVSD ES:EDI,ESI                    ; 0057a15c | DAT_02c80f2c
    MOVSD ES:EDI,ESI                    ; 0057a15d | DAT_02c80f30
    MOVSD ES:EDI,ESI                    ; 0057a15e | DAT_02c80f34
    MOVSD ES:EDI,ESI                    ; 0057a15f | DAT_02c80f38
    JMP 0x0057a0fc                      ; 0057a160
        ;   XREF to: 0057a0fc (UNCONDITIONAL_JUMP)  ; LAB_0057a0fc
    MOV dword ptr [EBX + 0x114],0x0     ; 0057a162 | DAT_02c8103c
        ;   Label: LAB_0057a162
    CMP dword ptr [ESP + 0x338],0x0     ; 0057a16c
    JBE 0x0057a180                      ; 0057a174
        ;   XREF to: 0057a180 (CONDITIONAL_JUMP)  ; LAB_0057a180
    MOV dword ptr [EBX + 0x118],0x1     ; 0057a176 | DAT_02c81040
    CMP dword ptr [ESP + 0x34c],0x0     ; 0057a180
        ;   Label: LAB_0057a180
    JBE 0x0057a194                      ; 0057a188
        ;   XREF to: 0057a194 (CONDITIONAL_JUMP)  ; LAB_0057a194
    MOV dword ptr [EBX + 0x118],0x2     ; 0057a18a | DAT_02c81040
    CMP dword ptr [ESP + 0x364],0x0     ; 0057a194
        ;   Label: LAB_0057a194
    JBE 0x0057a1ba                      ; 0057a19c
        ;   XREF to: 0057a1ba (CONDITIONAL_JUMP)  ; LAB_0057a1ba
    MOV EAX,0x1                         ; 0057a19e
    PUSH 0x5f5617                       ; 0057a1a3 | = "SOUND: Onboard RAM detected.  Samples..."
    MOV [0x02c823dc],EAX                ; 0057a1a8 | DAT_02c823dc
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0057a1ad
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0057a1b2
    JMP 0x0057a11a                      ; 0057a1b5
        ;   XREF to: 0057a11a (UNCONDITIONAL_JUMP)  ; LAB_0057a11a
    MOV EDX,0x1                         ; 0057a1ba
        ;   Label: LAB_0057a1ba
    PUSH 0x5f55cb                       ; 0057a1bf | = "SOUND: No onboard RAM detected.  Forc..."
    MOV dword ptr [0x02c823dc],EDX      ; 0057a1c4 | DAT_02c823dc
    CALL wincore_winrun.cpp_FUN_005b3a90 ; 0057a1ca
        ;   XREF to: 005b3a90 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b3a90()
    ADD ESP,0x4                         ; 0057a1cf
    JMP 0x0057a11a                      ; 0057a1d2
        ;   XREF to: 0057a11a (UNCONDITIONAL_JUMP)  ; LAB_0057a11a

