; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
;
; XREF[1]:
;   sound_sndmain.cpp_initializeSoundDevice_FUN_00528500 at 0052857c
;
; Referenced Globals:
;   string s_DirectSux:_Unable_to_%s._(%s)_005940b7
;   string s_create_DirectSound_object_00594859
;   string s_Set_cooperative_level_00594873
;   string s_Create_the_primary_buffer_00594889
;   string s_Create_the_primary_buffer_005948a3
;   undefined4 DAT_005c3908
;   undefined4 DAT_02dc9214
;   undefined4 DAT_02dc9218
;   undefined4 DAT_02dc9220
;   undefined4 DAT_02de2098
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_00529980
;   Ordinal_1
;   sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90
;   sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bef0
        ;   Label: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
    PUSH ESI                            ; 0052bef1
    PUSH EDI                            ; 0052bef2
    SUB ESP,0x76c                       ; 0052bef3
    MOV EBX,dword ptr [ESP + 0x77c]     ; 0052bef9
    PUSH 0x2dc93a0                      ; 0052bf00
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90 ; 0052bf05
        ;   XREF to: 00529e90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90()
    ADD ESP,0x4                         ; 0052bf0a
    TEST EAX,EAX                        ; 0052bf0d
    JNZ 0x0052bf1b                      ; 0052bf0f
        ;   XREF to: 0052bf1b (CONDITIONAL_JUMP)  ; LAB_0052bf1b
    ADD ESP,0x76c                       ; 0052bf11
        ;   Label: LAB_0052bf11
    POP EDI                             ; 0052bf17
    POP ESI                             ; 0052bf18
    POP EBX                             ; 0052bf19
    RET                                 ; 0052bf1a
    LEA EAX,[ESP + 0x640]               ; 0052bf1b
        ;   Label: LAB_0052bf1b
    PUSH EAX                            ; 0052bf22
    PUSH EBX                            ; 0052bf23
    CALL sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40 ; 0052bf24
        ;   XREF to: 0052be40 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40()
    ADD ESP,0x8                         ; 0052bf29
    TEST EAX,EAX                        ; 0052bf2c
    JZ 0x0052bf11                       ; 0052bf2e
        ;   XREF to: 0052bf11 (CONDITIONAL_JUMP)  ; LAB_0052bf11
    LEA EAX,[EBX*0x8 + 0x0]             ; 0052bf30
    ADD EAX,EBX                         ; 0052bf37
    SHL EAX,0x3                         ; 0052bf39
    SUB EAX,EBX                         ; 0052bf3c
    SHL EAX,0x2                         ; 0052bf3e
    MOV EDX,dword ptr [EAX + 0x2dc84c4] ; 0052bf41
    XOR ECX,ECX                         ; 0052bf47
    TEST EDX,EDX                        ; 0052bf49
    JNZ 0x0052bf55                      ; 0052bf4b
        ;   XREF to: 0052bf55 (CONDITIONAL_JUMP)  ; LAB_0052bf55
    ADD EAX,0x2dc84c4                   ; 0052bf4d
    LEA ECX,[EAX + 0x4]                 ; 0052bf52
    PUSH 0x0                            ; 0052bf55
        ;   Label: LAB_0052bf55
    PUSH 0x2dc9214                      ; 0052bf57 | DAT_02dc9214
    PUSH ECX                            ; 0052bf5c
    CALL Ordinal_1                      ; 0052bf5d
        ;   XREF to: 00574c14 (UNCONDITIONAL_CALL)  ; undefined Ordinal_1()
    TEST EAX,EAX                        ; 0052bf62
    JZ 0x0052bfb3                       ; 0052bf64
        ;   XREF to: 0052bfb3 (CONDITIONAL_JUMP)  ; LAB_0052bfb3
    PUSH EAX                            ; 0052bf66
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052bf67
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052bf6c
    PUSH EAX                            ; 0052bf6f
    PUSH 0x594859                       ; 0052bf70 | = "create DirectSound object"
    PUSH 0x5940b7                       ; 0052bf75 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0052bf7a
    PUSH EAX                            ; 0052bf81
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052bf82
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052bf87
    LEA EAX,[ESP + 0x190]               ; 0052bf8a
    PUSH EAX                            ; 0052bf91
        ;   Label: LAB_0052bf91
    CALL FUN_00529980                   ; 0052bf92
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052bf97
    PUSH 0x2dc93a0                      ; 0052bf9a
    CALL sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90 ; 0052bf9f
        ;   XREF to: 00529e90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90()
    ADD ESP,0x4                         ; 0052bfa4
    XOR EAX,EAX                         ; 0052bfa7
    ADD ESP,0x76c                       ; 0052bfa9
    POP EDI                             ; 0052bfaf
    POP ESI                             ; 0052bfb0
    POP EBX                             ; 0052bfb1
    RET                                 ; 0052bfb2
    PUSH 0x3                            ; 0052bfb3
        ;   Label: LAB_0052bfb3
    MOV ECX,dword ptr [0x02de2098]      ; 0052bfb5 | DAT_02de2098
    MOV EAX,[0x02dc9214]                ; 0052bfbb | DAT_02dc9214
    PUSH ECX                            ; 0052bfc0
    MOV EDX,dword ptr [EAX]             ; 0052bfc1
    PUSH EAX                            ; 0052bfc3
    CALL dword ptr [EDX + 0x18]         ; 0052bfc4
    TEST EAX,EAX                        ; 0052bfc7
    JNZ 0x0052c05c                      ; 0052bfc9
        ;   XREF to: 0052c05c (CONDITIONAL_JUMP)  ; LAB_0052c05c
    PUSH 0x14                           ; 0052bfcf
    PUSH EAX                            ; 0052bfd1
    LEA EAX,[ESP + 0x760]               ; 0052bfd2
    PUSH EAX                            ; 0052bfd9
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0052bfda
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 0052bfdf
    MOV ESI,0x14                        ; 0052bfe2
    MOV EDI,0x11                        ; 0052bfe7
    PUSH 0x0                            ; 0052bfec
    LEA EDX,[ESP + 0x75c]               ; 0052bfee
    MOV EAX,[0x02dc9214]                ; 0052bff5 | DAT_02dc9214
    PUSH 0x2dc9218                      ; 0052bffa | DAT_02dc9218
    MOV dword ptr [ESP + 0x760],ESI     ; 0052bfff
    MOV dword ptr [ESP + 0x764],EDI     ; 0052c006
    PUSH EDX                            ; 0052c00d
    MOV ECX,dword ptr [EAX]             ; 0052c00e
    PUSH EAX                            ; 0052c010
    CALL dword ptr [ECX + 0xc]          ; 0052c011
    TEST EAX,EAX                        ; 0052c014
    JNZ 0x0052c08c                      ; 0052c016
        ;   XREF to: 0052c08c (CONDITIONAL_JUMP)  ; LAB_0052c08c
    CALL sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0 ; 0052c018
        ;   XREF to: 005284e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isHardwareMixingEnabled_FUN_005284e0()
        ;   Label: LAB_0052c018
    TEST EAX,EAX                        ; 0052c01d
    JZ 0x0052c04d                       ; 0052c01f
        ;   XREF to: 0052c04d (CONDITIONAL_JUMP)  ; LAB_0052c04d
    LEA EAX,[EBX*0x8 + 0x0]             ; 0052c021
    ADD EAX,EBX                         ; 0052c028
    SHL EAX,0x3                         ; 0052c02a
    SUB EAX,EBX                         ; 0052c02d
    CMP dword ptr [EAX*0x4 + 0x2dc85dc],0x0 ; 0052c02f
    JZ 0x0052c04d                       ; 0052c037
        ;   XREF to: 0052c04d (CONDITIONAL_JUMP)  ; LAB_0052c04d
    PUSH 0x2dc9220                      ; 0052c039 | DAT_02dc9220
    MOV EAX,[0x02dc9218]                ; 0052c03e | DAT_02dc9218
    PUSH 0x5c3908                       ; 0052c043 | DAT_005c3908
    MOV EDX,dword ptr [EAX]             ; 0052c048
    PUSH EAX                            ; 0052c04a
    CALL dword ptr [EDX]                ; 0052c04b
    MOV EAX,0x2dc93a0                   ; 0052c04d
        ;   Label: LAB_0052c04d
    ADD ESP,0x76c                       ; 0052c052
    POP EDI                             ; 0052c058
    POP ESI                             ; 0052c059
    POP EBX                             ; 0052c05a
    RET                                 ; 0052c05b
    PUSH EAX                            ; 0052c05c
        ;   Label: LAB_0052c05c
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052c05d
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052c062
    PUSH EAX                            ; 0052c065
    PUSH 0x594873                       ; 0052c066 | = "Set cooperative level"
    PUSH 0x5940b7                       ; 0052c06b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0052c070
    PUSH EAX                            ; 0052c077
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052c078
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052c07d
    LEA EAX,[ESP + 0x4b0]               ; 0052c080
    JMP 0x0052bf91                      ; 0052c087
        ;   XREF to: 0052bf91 (UNCONDITIONAL_JUMP)  ; LAB_0052bf91
    PUSH EAX                            ; 0052c08c
        ;   Label: LAB_0052c08c
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052c08d
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052c092
    PUSH EAX                            ; 0052c095
    PUSH 0x594889                       ; 0052c096 | = "Create the primary buffer"
    PUSH 0x5940b7                       ; 0052c09b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052c0a0
    PUSH EAX                            ; 0052c0a4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052c0a5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052c0aa
    MOV EAX,ESP                         ; 0052c0ad
    PUSH EAX                            ; 0052c0af
    CALL FUN_00529980                   ; 0052c0b0
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 0052c0b5
    PUSH 0x0                            ; 0052c0b8
    MOV AH,byte ptr [ESP + 0x760]       ; 0052c0ba
    PUSH 0x2dc9218                      ; 0052c0c1 | DAT_02dc9218
    LEA EDX,[ESP + 0x760]               ; 0052c0c6
    AND AH,0xef                         ; 0052c0cd
    PUSH EDX                            ; 0052c0d0
    MOV byte ptr [ESP + 0x768],AH       ; 0052c0d1
    MOV EAX,[0x02dc9214]                ; 0052c0d8 | DAT_02dc9214
    PUSH EAX                            ; 0052c0dd
    MOV ECX,dword ptr [EAX]             ; 0052c0de
    CALL dword ptr [ECX + 0xc]          ; 0052c0e0
    TEST EAX,EAX                        ; 0052c0e3
    JZ 0x0052c018                       ; 0052c0e5
        ;   XREF to: 0052c018 (CONDITIONAL_JUMP)  ; LAB_0052c018
    PUSH EAX                            ; 0052c0eb
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052c0ec
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052c0f1
    PUSH EAX                            ; 0052c0f4
    PUSH 0x5948a3                       ; 0052c0f5 | = "Create the primary buffer"
    PUSH 0x5940b7                       ; 0052c0fa | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0052c0ff
    PUSH EAX                            ; 0052c106
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052c107
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052c10c
    LEA EAX,[ESP + 0x320]               ; 0052c10f
    JMP 0x0052bf91                      ; 0052c116
        ;   XREF to: 0052bf91 (UNCONDITIONAL_JUMP)  ; LAB_0052bf91

