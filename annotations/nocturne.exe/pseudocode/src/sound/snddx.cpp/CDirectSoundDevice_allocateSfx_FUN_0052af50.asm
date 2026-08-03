; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50(CDirectSoundDevice *this_ptr,int sample_buffer_id)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_buffer_id
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Stop_hardware_sfx_second_00594104
;   TerminatedCString s_sound_snddx_cpp_0059436b
;   TerminatedCString s_DirectSoundDevice_alloca_0059437e
;   TerminatedCString s_sound_snddx_cpp_005943b9
;   TerminatedCString s_DirectSoundDevice_alloca_005943cc
;   TerminatedCString s_DirectSoundDevice_alloca_00594403
;   TerminatedCString s_Duplicate_sound_buffer_00594435
;   TerminatedCString s_get_DirectSound3DBuffer_0059444c
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005c3918
;   CConsole g_CConsole_0077ad0c
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;   undefined4 DAT_02dc9214
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052af50
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50
    PUSH ESI                            ; 0052af51
    PUSH EDI                            ; 0052af52
    PUSH EBP                            ; 0052af53
    SUB ESP,0x640                       ; 0052af54
    MOV EDI,dword ptr [ESP + 0x658]     ; 0052af5a
    TEST EDI,EDI                        ; 0052af61
    JLE 0x0052af6e                      ; 0052af63
        ;   XREF to: 0052af6e (CONDITIONAL_JUMP)  ; LAB_0052af6e
    CMP EDI,0x19                        ; 0052af65
    JL 0x0052b0ed                       ; 0052af68
        ;   XREF to: 0052b0ed (CONDITIONAL_JUMP)  ; LAB_0052b0ed
    PUSH EDI                            ; 0052af6e
        ;   Label: LAB_0052af6e
    MOV ECX,0x59436b                    ; 0052af6f | = "..\\sound\\snddx.cpp"
    MOV EBX,0x2be                       ; 0052af74
    PUSH 0x59437e                       ; 0052af79 | = "DirectSoundDevice::allocateSfx - Inva..."
    MOV dword ptr [0x01cc4800],ECX      ; 0052af7e | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0052af84 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052af8a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 0052af8f
    CMP dword ptr [0x02dc9214],0x0      ; 0052af92 | DAT_02dc9214
        ;   Label: LAB_0052af92
    JNZ 0x0052afbd                      ; 0052af99
        ;   XREF to: 0052afbd (CONDITIONAL_JUMP)  ; LAB_0052afbd
    MOV EBP,0x5943b9                    ; 0052af9b | = "..\\sound\\snddx.cpp"
    MOV EAX,0x2bf                       ; 0052afa0
    PUSH 0x5943cc                       ; 0052afa5 | = "DirectSoundDevice::allocateSfx - dSou..."
    MOV dword ptr [0x01cc4800],EBP      ; 0052afaa | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 0052afb0 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052afb5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0052afba
    MOV EAX,0x4                         ; 0052afbd
        ;   Label: LAB_0052afbd
    MOV EDX,dword ptr [0x02dc92ac]      ; 0052afc2 | DAT_02dc92ac
    MOV EBX,0x1                         ; 0052afc8
    TEST EDX,EDX                        ; 0052afcd
    JZ 0x0052afe3                       ; 0052afcf
        ;   XREF to: 0052afe3 (CONDITIONAL_JUMP)  ; LAB_0052afe3
    ADD EAX,0x4                         ; 0052afd1
        ;   Label: LAB_0052afd1
    INC EBX                             ; 0052afd4
    CMP EAX,0x7c                        ; 0052afd5
    JGE 0x0052afe3                      ; 0052afd8
        ;   XREF to: 0052afe3 (CONDITIONAL_JUMP)  ; LAB_0052afe3
    CMP dword ptr [EAX + 0x2dc92a8],0x0 ; 0052afda | DAT_02dc92b0 | DAT_02dc92b4
    JNZ 0x0052afd1                      ; 0052afe1
        ;   XREF to: 0052afd1 (CONDITIONAL_JUMP)  ; LAB_0052afd1
    CMP EBX,0x1f                        ; 0052afe3
        ;   Label: LAB_0052afe3
    JGE 0x0052b100                      ; 0052afe6
        ;   XREF to: 0052b100 (CONDITIONAL_JUMP)  ; LAB_0052b100
    MOV EBP,EBX                         ; 0052afec
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052afee
    MOV ESI,dword ptr [EAX + 0x2dc92a8] ; 0052aff5 | DAT_02dc92b0 | DAT_02dc92b4 | DAT_02dc92ac
    TEST ESI,ESI                        ; 0052affb
    JZ 0x0052b00f                       ; 0052affd
        ;   XREF to: 0052b00f (CONDITIONAL_JUMP)  ; LAB_0052b00f
    MOV EAX,ESI                         ; 0052afff
    PUSH EAX                            ; 0052b001
    MOV ESI,dword ptr [ESI]             ; 0052b002
    CALL dword ptr [ESI + 0x48]         ; 0052b004
    TEST EAX,EAX                        ; 0052b007
    JNZ 0x0052b121                      ; 0052b009
        ;   XREF to: 0052b121 (CONDITIONAL_JUMP)  ; LAB_0052b121
    LEA ESI,[EBP*0x4 + 0x0]             ; 0052b00f
        ;   Label: LAB_0052b00f
    ADD ESI,0x2dc9324                   ; 0052b016
    MOV EAX,dword ptr [ESI]             ; 0052b01c | DAT_02dc932c
    TEST EAX,EAX                        ; 0052b01e
    JZ 0x0052b02e                       ; 0052b020
        ;   XREF to: 0052b02e (CONDITIONAL_JUMP)  ; LAB_0052b02e
    PUSH EAX                            ; 0052b022
    MOV EDX,dword ptr [EAX]             ; 0052b023
    CALL dword ptr [EDX + 0x8]          ; 0052b025
    MOV dword ptr [ESI],0x0             ; 0052b028 | DAT_02dc932c
    LEA ESI,[EBP*0x4 + 0x0]             ; 0052b02e
        ;   Label: LAB_0052b02e
    ADD ESI,0x2dc92a8                   ; 0052b035
    MOV EDX,dword ptr [ESI]             ; 0052b03b | DAT_02dc92b0
    TEST EDX,EDX                        ; 0052b03d
    JZ 0x0052b04d                       ; 0052b03f
        ;   XREF to: 0052b04d (CONDITIONAL_JUMP)  ; LAB_0052b04d
    PUSH EDX                            ; 0052b041
    MOV EBP,dword ptr [EDX]             ; 0052b042
    CALL dword ptr [EBP + 0x8]          ; 0052b044
    MOV dword ptr [ESI],0x0             ; 0052b047 | DAT_02dc92b0
    MOV EBP,0x2dc92a8                   ; 0052b04d
        ;   Label: LAB_0052b04d
    LEA ESI,[EBX*0x4 + 0x0]             ; 0052b052
    ADD EBP,ESI                         ; 0052b059
    PUSH EBP                            ; 0052b05b | DAT_02dc92b0
    MOV ECX,dword ptr [EDI*0x4 + 0x2dc9244] ; 0052b05c | DAT_02dc9244
    MOV EAX,[0x02dc9214]                ; 0052b063 | DAT_02dc9214
    PUSH ECX                            ; 0052b068
    MOV EDX,dword ptr [EAX]             ; 0052b069
    PUSH EAX                            ; 0052b06b
    CALL dword ptr [EDX + 0x14]         ; 0052b06c
    TEST EAX,EAX                        ; 0052b06f
    JNZ 0x0052b152                      ; 0052b071
        ;   XREF to: 0052b152 (CONDITIONAL_JUMP)  ; LAB_0052b152
    MOV EDI,dword ptr [ESI + 0x2dc92a8] ; 0052b077 | DAT_02dc92b0
    TEST EDI,EDI                        ; 0052b07d
    JNZ 0x0052b1cc                      ; 0052b07f
        ;   XREF to: 0052b1cc (CONDITIONAL_JUMP)  ; LAB_0052b1cc
    MOV ESI,EBX                         ; 0052b085
        ;   Label: LAB_0052b085
    SHL EBX,0x2                         ; 0052b087
    MOV EAX,dword ptr [EBX + 0x2dc92a8] ; 0052b08a | DAT_02dc92b0
    TEST EAX,EAX                        ; 0052b090
    JZ 0x0052b0a2                       ; 0052b092
        ;   XREF to: 0052b0a2 (CONDITIONAL_JUMP)  ; LAB_0052b0a2
    PUSH EAX                            ; 0052b094
    MOV EBX,dword ptr [EAX]             ; 0052b095
    CALL dword ptr [EBX + 0x48]         ; 0052b097
    TEST EAX,EAX                        ; 0052b09a
    JNZ 0x0052b18b                      ; 0052b09c
        ;   XREF to: 0052b18b (CONDITIONAL_JUMP)  ; LAB_0052b18b
    LEA EBX,[ESI*0x4 + 0x0]             ; 0052b0a2
        ;   Label: LAB_0052b0a2
    ADD EBX,0x2dc9324                   ; 0052b0a9
    MOV EDX,dword ptr [EBX]             ; 0052b0af | DAT_02dc932c
    TEST EDX,EDX                        ; 0052b0b1
    JZ 0x0052b0c1                       ; 0052b0b3
        ;   XREF to: 0052b0c1 (CONDITIONAL_JUMP)  ; LAB_0052b0c1
    PUSH EDX                            ; 0052b0b5
    MOV EDI,dword ptr [EDX]             ; 0052b0b6
    CALL dword ptr [EDI + 0x8]          ; 0052b0b8
    MOV dword ptr [EBX],0x0             ; 0052b0bb | DAT_02dc932c
    LEA EBX,[ESI*0x4 + 0x0]             ; 0052b0c1
        ;   Label: LAB_0052b0c1
    ADD EBX,0x2dc92a8                   ; 0052b0c8
    MOV ECX,dword ptr [EBX]             ; 0052b0ce | DAT_02dc92b0
    TEST ECX,ECX                        ; 0052b0d0
    JZ 0x0052b0e0                       ; 0052b0d2
        ;   XREF to: 0052b0e0 (CONDITIONAL_JUMP)  ; LAB_0052b0e0
    PUSH ECX                            ; 0052b0d4
    MOV ESI,dword ptr [ECX]             ; 0052b0d5
    CALL dword ptr [ESI + 0x8]          ; 0052b0d7
    MOV dword ptr [EBX],0x0             ; 0052b0da | DAT_02dc92b0
    XOR EAX,EAX                         ; 0052b0e0
        ;   Label: LAB_0052b0e0
    ADD ESP,0x640                       ; 0052b0e2
    POP EBP                             ; 0052b0e8
    POP EDI                             ; 0052b0e9
    POP ESI                             ; 0052b0ea
    POP EBX                             ; 0052b0eb
    RET                                 ; 0052b0ec
    CMP dword ptr [EDI*0x4 + 0x2dc9244],0x0 ; 0052b0ed | DAT_02dc9244
        ;   Label: LAB_0052b0ed
    JZ 0x0052af6e                       ; 0052b0f5
        ;   XREF to: 0052af6e (CONDITIONAL_JUMP)  ; LAB_0052af6e
    JMP 0x0052af92                      ; 0052b0fb
        ;   XREF to: 0052af92 (UNCONDITIONAL_JUMP)  ; LAB_0052af92
    PUSH 0x594403                       ; 0052b100 | = "DirectSoundDevice::allocateSfx - no f..."
        ;   Label: LAB_0052b100
    MOV EBX,dword ptr [0x005ad350]      ; 0052b105 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 0052b10b | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0052b10c
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0052b111
    XOR EAX,EAX                         ; 0052b114
    ADD ESP,0x640                       ; 0052b116
    POP EBP                             ; 0052b11c
    POP EDI                             ; 0052b11d
    POP ESI                             ; 0052b11e
    POP EBX                             ; 0052b11f
    RET                                 ; 0052b120
    PUSH EAX                            ; 0052b121
        ;   Label: LAB_0052b121
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b122
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052b127
    PUSH EAX                            ; 0052b12a
    PUSH 0x594104                       ; 0052b12b | = "Stop hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 0052b130 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052b135
    PUSH EAX                            ; 0052b139
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b13a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052b13f
    MOV EAX,ESP                         ; 0052b142
    PUSH EAX                            ; 0052b144
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052b145
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052b14a
    JMP 0x0052b04d                      ; 0052b14d
        ;   XREF to: 0052b04d (UNCONDITIONAL_JUMP)  ; LAB_0052b04d
    PUSH EAX                            ; 0052b152
        ;   Label: LAB_0052b152
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b153
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052b158
    PUSH EAX                            ; 0052b15b
    PUSH 0x594435                       ; 0052b15c | = "Duplicate sound buffer"
    PUSH 0x5940b7                       ; 0052b161 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0052b166
    PUSH EAX                            ; 0052b16d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b16e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052b173
    LEA EAX,[ESP + 0x320]               ; 0052b176
    PUSH EAX                            ; 0052b17d
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052b17e
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052b183
    JMP 0x0052b085                      ; 0052b186
        ;   XREF to: 0052b085 (UNCONDITIONAL_JUMP)  ; LAB_0052b085
    PUSH EAX                            ; 0052b18b
        ;   Label: LAB_0052b18b
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b18c
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052b191
    PUSH EAX                            ; 0052b194
    PUSH 0x594104                       ; 0052b195 | = "Stop hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 0052b19a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0052b19f
    PUSH EAX                            ; 0052b1a6
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b1a7
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052b1ac
    LEA EAX,[ESP + 0x4b0]               ; 0052b1af
    PUSH EAX                            ; 0052b1b6
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052b1b7
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052b1bc
    XOR EAX,EAX                         ; 0052b1bf
    ADD ESP,0x640                       ; 0052b1c1
    POP EBP                             ; 0052b1c7
    POP EDI                             ; 0052b1c8
    POP ESI                             ; 0052b1c9
    POP EBX                             ; 0052b1ca
    RET                                 ; 0052b1cb
    MOV EDX,0x2dc9324                   ; 0052b1cc
        ;   Label: LAB_0052b1cc
    ADD EDX,ESI                         ; 0052b1d1
    PUSH EDX                            ; 0052b1d3 | DAT_02dc932c
    PUSH 0x5c3918                       ; 0052b1d4 | DAT_005c3918
    MOV EAX,EDI                         ; 0052b1d9
    MOV EDI,dword ptr [EDI]             ; 0052b1db
    PUSH EAX                            ; 0052b1dd
    CALL dword ptr [EDI]                ; 0052b1de
    TEST EAX,EAX                        ; 0052b1e0
    JNZ 0x0052b1fe                      ; 0052b1e2
        ;   XREF to: 0052b1fe (CONDITIONAL_JUMP)  ; LAB_0052b1fe
    CMP dword ptr [ESI + 0x2dc9324],0x0 ; 0052b1e4 | DAT_02dc932c
    JZ 0x0052b085                       ; 0052b1eb
        ;   XREF to: 0052b085 (CONDITIONAL_JUMP)  ; LAB_0052b085
    MOV EAX,EBX                         ; 0052b1f1
    ADD ESP,0x640                       ; 0052b1f3
    POP EBP                             ; 0052b1f9
    POP EDI                             ; 0052b1fa
    POP ESI                             ; 0052b1fb
    POP EBX                             ; 0052b1fc
    RET                                 ; 0052b1fd
    PUSH EAX                            ; 0052b1fe
        ;   Label: LAB_0052b1fe
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b1ff
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052b204
    PUSH EAX                            ; 0052b207
    PUSH 0x59444c                       ; 0052b208 | = "get DirectSound3DBuffer interface fro..."
    PUSH 0x5940b7                       ; 0052b20d | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0052b212
    PUSH EAX                            ; 0052b219
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b21a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052b21f
    LEA EAX,[ESP + 0x190]               ; 0052b222
    PUSH EAX                            ; 0052b229
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052b22a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052b22f
    JMP 0x0052b085                      ; 0052b232
        ;   XREF to: 0052b085 (UNCONDITIONAL_JUMP)  ; LAB_0052b085

