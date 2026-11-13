; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055be30(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d4802
;   TerminatedCString s_DirectSoundDevice_alloca_005d4815
;   TerminatedCString s_sound_snddx_cpp_005d4850
;   TerminatedCString s_DirectSoundDevice_alloca_005d4863
;   TerminatedCString s_DirectSoundDevice_alloca_005d489a
;   TerminatedCString s_Duplicate_sound_buffer_005d48cc
;   TerminatedCString s_get_DirectSound3DBuffer_005d48e3
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_00608bb8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf49c4
;   undefined4 DAT_02cf49d0
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;   sound_snddx.cpp_FUN_0055a670
;   sound_snddx.cpp_FUN_0055a9f0
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055be30
        ;   Label: sound_snddx.cpp_FUN_0055be30
    PUSH ESI                            ; 0055be31
    PUSH EDI                            ; 0055be32
    PUSH EBP                            ; 0055be33
    SUB ESP,0x320                       ; 0055be34
    MOV EBP,dword ptr [ESP + 0x338]     ; 0055be3a
    TEST EBP,EBP                        ; 0055be41
    JLE 0x0055be4e                      ; 0055be43
        ;   XREF to: 0055be4e (CONDITIONAL_JUMP)  ; LAB_0055be4e
    CMP EBP,0x41                        ; 0055be45
    JL 0x0055bf78                       ; 0055be48
        ;   XREF to: 0055bf78 (CONDITIONAL_JUMP)  ; LAB_0055bf78
    PUSH EBP                            ; 0055be4e
        ;   Label: LAB_0055be4e
    MOV EBX,0x5d4802                    ; 0055be4f | = "..\\sound\\snddx.cpp"
    MOV ESI,0x472                       ; 0055be54
    PUSH 0x5d4815                       ; 0055be59 | = "DirectSoundDevice::allocateSfx - Inva..."
    MOV dword ptr [0x01d71de0],EBX      ; 0055be5e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0055be64 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055be6a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0055be6f
    CMP dword ptr [0x02cf49c4],0x0      ; 0055be72 | DAT_02cf49c4
        ;   Label: LAB_0055be72
    JNZ 0x0055be9d                      ; 0055be79
        ;   XREF to: 0055be9d (CONDITIONAL_JUMP)  ; LAB_0055be9d
    MOV EAX,0x5d4850                    ; 0055be7b | = "..\\sound\\snddx.cpp"
    MOV EDX,0x473                       ; 0055be80
    PUSH 0x5d4863                       ; 0055be85 | = "DirectSoundDevice::allocateSfx - dSou..."
    MOV [0x01d71de0],EAX                ; 0055be8a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0055be8f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055be95
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055be9a
    MOV EAX,0x24                        ; 0055be9d
        ;   Label: LAB_0055be9d
    MOV ECX,dword ptr [0x02cf5030]      ; 0055bea2 | DAT_02cf5030
    MOV EBX,0x1                         ; 0055bea8
    TEST ECX,ECX                        ; 0055bead
    JZ 0x0055bec5                       ; 0055beaf
        ;   XREF to: 0055bec5 (CONDITIONAL_JUMP)  ; LAB_0055bec5
    ADD EAX,0x24                        ; 0055beb1
        ;   Label: LAB_0055beb1
    INC EBX                             ; 0055beb4
    CMP EAX,0x45c                       ; 0055beb5
    JGE 0x0055bec5                      ; 0055beba
        ;   XREF to: 0055bec5 (CONDITIONAL_JUMP)  ; LAB_0055bec5
    CMP dword ptr [EAX + 0x2cf500c],0x0 ; 0055bebc | DAT_02cf5054 | DAT_02cf5078
    JNZ 0x0055beb1                      ; 0055bec3
        ;   XREF to: 0055beb1 (CONDITIONAL_JUMP)  ; LAB_0055beb1
    CMP EBX,0x1f                        ; 0055bec5
        ;   Label: LAB_0055bec5
    JGE 0x0055bfa3                      ; 0055bec8
        ;   XREF to: 0055bfa3 (CONDITIONAL_JUMP)  ; LAB_0055bfa3
    LEA EAX,[EBP*0x4 + 0x0]             ; 0055bece
    SUB EAX,EBP                         ; 0055bed5
    MOV ESI,0x2cf49f4                   ; 0055bed7
    SHL EAX,0x3                         ; 0055bedc
    ADD ESI,EAX                         ; 0055bedf
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055bee1
    ADD EAX,EBX                         ; 0055bee8
    MOV EDI,0x2cf500c                   ; 0055beea
    SHL EAX,0x2                         ; 0055beef
    ADD EDI,EAX                         ; 0055bef2
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055bef4
    TEST EAX,EAX                        ; 0055bef7
    JZ 0x0055bf0c                       ; 0055bef9
        ;   XREF to: 0055bf0c (CONDITIONAL_JUMP)  ; LAB_0055bf0c
    IMUL EDX,EAX,0x24                   ; 0055befb
        ;   Label: LAB_0055befb
    MOV ECX,dword ptr [EDX + 0x2cf500c] ; 0055befe
    CMP ECX,dword ptr [ESI]             ; 0055bf04
    JNZ 0x0055bfc4                      ; 0055bf06
        ;   XREF to: 0055bfc4 (CONDITIONAL_JUMP)  ; LAB_0055bfc4
    TEST EAX,EAX                        ; 0055bf0c
        ;   Label: LAB_0055bf0c
    JNZ 0x0055bfd7                      ; 0055bf0e
        ;   XREF to: 0055bfd7 (CONDITIONAL_JUMP)  ; LAB_0055bfd7
    MOV EAX,dword ptr [ESI]             ; 0055bf14
    MOV dword ptr [EDI],EAX             ; 0055bf16 | DAT_02cf5054
    MOV dword ptr [EDI + 0x8],EBP       ; 0055bf18 | DAT_02cf505c
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055bf1b
    TEST EDX,EDX                        ; 0055bf1e
    JZ 0x0055bf32                       ; 0055bf20
        ;   XREF to: 0055bf32 (CONDITIONAL_JUMP)  ; LAB_0055bf32
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055bf22
    ADD EAX,EDX                         ; 0055bf29
    MOV dword ptr [EAX*0x4 + 0x2cf5018],EBX ; 0055bf2b
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055bf32
        ;   Label: LAB_0055bf32
    MOV dword ptr [EDI + 0xc],0x0       ; 0055bf35 | DAT_02cf5060
    MOV dword ptr [EDI + 0x10],EAX      ; 0055bf3c | DAT_02cf5064
    MOV dword ptr [ESI + 0x4],EBX       ; 0055bf3f
    CMP dword ptr [0x02cf49d0],0x0      ; 0055bf42 | DAT_02cf49d0
    JNZ 0x0055c054                      ; 0055bf49
        ;   XREF to: 0055c054 (CONDITIONAL_JUMP)  ; LAB_0055c054
    MOV dword ptr [EDI + 0x1c],0xffffffff ; 0055bf4f | DAT_02cf5070
        ;   Label: LAB_0055bf4f
    MOV dword ptr [EDI + 0x20],0xffffffff ; 0055bf56 | DAT_02cf5074
    MOV dword ptr [EDI + 0x18],0x0      ; 0055bf5d | DAT_02cf506c
    MOV EAX,EBX                         ; 0055bf64
    MOV dword ptr [EDI + 0x14],0x0      ; 0055bf66 | DAT_02cf5068
    ADD ESP,0x320                       ; 0055bf6d
        ;   Label: LAB_0055bf6d
    POP EBP                             ; 0055bf73
    POP EDI                             ; 0055bf74
    POP ESI                             ; 0055bf75
    POP EBX                             ; 0055bf76
    RET                                 ; 0055bf77
    LEA EAX,[EBP*0x4 + 0x0]             ; 0055bf78
        ;   Label: LAB_0055bf78
    SUB EAX,EBP                         ; 0055bf7f
    SHL EAX,0x3                         ; 0055bf81
    CMP dword ptr [EAX + 0x2cf49f4],0x0 ; 0055bf84
    JZ 0x0055be4e                       ; 0055bf8b
        ;   XREF to: 0055be4e (CONDITIONAL_JUMP)  ; LAB_0055be4e
    CMP dword ptr [EAX + 0x2cf49fc],0x1 ; 0055bf91
    JL 0x0055be4e                       ; 0055bf98
        ;   XREF to: 0055be4e (CONDITIONAL_JUMP)  ; LAB_0055be4e
    JMP 0x0055be72                      ; 0055bf9e
        ;   XREF to: 0055be72 (UNCONDITIONAL_JUMP)  ; LAB_0055be72
    PUSH 0x5d489a                       ; 0055bfa3 | = "DirectSoundDevice::allocateSfx - no f..."
        ;   Label: LAB_0055bfa3
    MOV EDI,dword ptr [0x005f1690]      ; 0055bfa8 | g_CConsolePtr
    PUSH EDI                            ; 0055bfae | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0055bfaf
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0055bfb4
    XOR EAX,EAX                         ; 0055bfb7
    ADD ESP,0x320                       ; 0055bfb9
    POP EBP                             ; 0055bfbf
    POP EDI                             ; 0055bfc0
    POP ESI                             ; 0055bfc1
    POP EBX                             ; 0055bfc2
    RET                                 ; 0055bfc3
    MOV EAX,dword ptr [EDX + 0x2cf501c] ; 0055bfc4
        ;   Label: LAB_0055bfc4
    TEST EAX,EAX                        ; 0055bfca
    JNZ 0x0055befb                      ; 0055bfcc
        ;   XREF to: 0055befb (CONDITIONAL_JUMP)  ; LAB_0055befb
    JMP 0x0055bf0c                      ; 0055bfd2
        ;   XREF to: 0055bf0c (UNCONDITIONAL_JUMP)  ; LAB_0055bf0c
    PUSH EDI                            ; 0055bfd7 | DAT_02cf5054
        ;   Label: LAB_0055bfd7
    MOV ECX,dword ptr [ESI]             ; 0055bfd8
    MOV EAX,[0x02cf49c4]                ; 0055bfda | DAT_02cf49c4
    PUSH ECX                            ; 0055bfdf
    MOV EDX,dword ptr [EAX]             ; 0055bfe0
    PUSH EAX                            ; 0055bfe2
    CALL dword ptr [EDX + 0x14]         ; 0055bfe3
    TEST EAX,EAX                        ; 0055bfe6
    JNZ 0x0055c013                      ; 0055bfe8
        ;   XREF to: 0055c013 (CONDITIONAL_JUMP)  ; LAB_0055c013
    MOV EAX,dword ptr [EDI]             ; 0055bfea | DAT_02cf5054
    TEST EAX,EAX                        ; 0055bfec
    JZ 0x0055bf6d                       ; 0055bfee
        ;   XREF to: 0055bf6d (CONDITIONAL_JUMP)  ; LAB_0055bf6d
    MOV EDX,dword ptr [ESI + 0x4]       ; 0055bff4
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055bff7
    ADD EAX,EDX                         ; 0055bffe
    SHL EAX,0x2                         ; 0055c000
    ADD EAX,0x2cf500c                   ; 0055c003
    MOV dword ptr [EAX + 0xc],EBX       ; 0055c008
    MOV dword ptr [EDI + 0x8],EBP       ; 0055c00b | DAT_02cf505c
    JMP 0x0055bf32                      ; 0055c00e
        ;   XREF to: 0055bf32 (UNCONDITIONAL_JUMP)  ; LAB_0055bf32
    PUSH EAX                            ; 0055c013
        ;   Label: LAB_0055c013
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c014
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c019
    PUSH EAX                            ; 0055c01c
    PUSH 0x5d48cc                       ; 0055c01d | = "Duplicate sound buffer"
    PUSH 0x5d452f                       ; 0055c022 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055c027
    PUSH EAX                            ; 0055c02e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c02f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c034
    LEA EAX,[ESP + 0x190]               ; 0055c037
    PUSH EAX                            ; 0055c03e
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c03f
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c044
    XOR EAX,EAX                         ; 0055c047
    ADD ESP,0x320                       ; 0055c049
    POP EBP                             ; 0055c04f
    POP EDI                             ; 0055c050
    POP ESI                             ; 0055c051
    POP EBX                             ; 0055c052
    RET                                 ; 0055c053
    LEA EDX,[EDI + 0x4]                 ; 0055c054
        ;   Label: LAB_0055c054
    PUSH EDX                            ; 0055c057
    MOV EAX,dword ptr [EDI]             ; 0055c058 | DAT_02cf5054
    PUSH 0x608bb8                       ; 0055c05a | DAT_00608bb8
    MOV ECX,dword ptr [EAX]             ; 0055c05f
    PUSH EAX                            ; 0055c061
    CALL dword ptr [ECX]                ; 0055c062
    TEST EAX,EAX                        ; 0055c064
    JNZ 0x0055c088                      ; 0055c066
        ;   XREF to: 0055c088 (CONDITIONAL_JUMP)  ; LAB_0055c088
    CMP dword ptr [EDI + 0x4],0x0       ; 0055c068 | DAT_02cf5058
        ;   Label: LAB_0055c068
    JNZ 0x0055bf4f                      ; 0055c06c
        ;   XREF to: 0055bf4f (CONDITIONAL_JUMP)  ; LAB_0055bf4f
    PUSH EBX                            ; 0055c072
    CALL sound_snddx.cpp_FUN_0055a9f0   ; 0055c073
        ;   XREF to: 0055a9f0 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055a9f0()
    ADD ESP,0x4                         ; 0055c078
    XOR EAX,EAX                         ; 0055c07b
    ADD ESP,0x320                       ; 0055c07d
    POP EBP                             ; 0055c083
    POP EDI                             ; 0055c084
    POP ESI                             ; 0055c085
    POP EBX                             ; 0055c086
    RET                                 ; 0055c087
    PUSH EAX                            ; 0055c088
        ;   Label: LAB_0055c088
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c089
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c08e
    PUSH EAX                            ; 0055c091
    PUSH 0x5d48e3                       ; 0055c092 | = "get DirectSound3DBuffer interface fro..."
    PUSH 0x5d452f                       ; 0055c097 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055c09c
    PUSH EAX                            ; 0055c0a0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c0a1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c0a6
    MOV EAX,ESP                         ; 0055c0a9
    PUSH EAX                            ; 0055c0ab
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c0ac
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c0b1
    JMP 0x0055c068                      ; 0055c0b4
        ;   XREF to: 0055c068 (UNCONDITIONAL_JUMP)  ; LAB_0055c068

