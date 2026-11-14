; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055ae40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   undefined4 s_Stop_secondary_sound_buf_005d45ec+1
;   TerminatedCString s_Stop_primary_sound_buffe_005d4609
;   undefined4 DAT_02cf49c8
;   undefined4 DAT_02cf49cc
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_snddx.cpp_FUN_0055a9f0
;   sound_sndmain.cpp_killSoundThread_FUN_00558e10
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055ae40
        ;   Label: sound_snddx.cpp_FUN_0055ae40
    PUSH ESI                            ; 0055ae41
    SUB ESP,0x320                       ; 0055ae42
    MOV EDX,dword ptr [0x02cf49cc]      ; 0055ae48 | DAT_02cf49cc
    MOV ESI,0x1                         ; 0055ae4e
    TEST EDX,EDX                        ; 0055ae53
    JNZ 0x0055ae96                      ; 0055ae55
        ;   XREF to: 0055ae96 (CONDITIONAL_JUMP)  ; LAB_0055ae96
    MOV ECX,dword ptr [0x02cf49c8]      ; 0055ae57 | DAT_02cf49c8
        ;   Label: LAB_0055ae57
    TEST ECX,ECX                        ; 0055ae5d
    JNZ 0x0055aedb                      ; 0055ae5f
        ;   XREF to: 0055aedb (CONDITIONAL_JUMP)  ; LAB_0055aedb
    XOR EBX,EBX                         ; 0055ae65
        ;   Label: LAB_0055ae65
    PUSH EBX                            ; 0055ae67
        ;   Label: LAB_0055ae67
    CALL sound_snddx.cpp_FUN_0055a9f0   ; 0055ae68
        ;   XREF to: 0055a9f0 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055a9f0()
    ADD ESP,0x4                         ; 0055ae6d
    TEST EAX,EAX                        ; 0055ae70
    JZ 0x0055af18                       ; 0055ae72
        ;   XREF to: 0055af18 (CONDITIONAL_JUMP)  ; LAB_0055af18
    INC EBX                             ; 0055ae78
        ;   Label: LAB_0055ae78
    CMP EBX,0x1f                        ; 0055ae79
    JL 0x0055ae67                       ; 0055ae7c
        ;   XREF to: 0055ae67 (CONDITIONAL_JUMP)  ; LAB_0055ae67
    CALL sound_sndmain.cpp_killSoundThread_FUN_00558e10 ; 0055ae7e
        ;   XREF to: 00558e10 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00558e10()
    TEST EAX,EAX                        ; 0055ae83
    JZ 0x0055af1f                       ; 0055ae85
        ;   XREF to: 0055af1f (CONDITIONAL_JUMP)  ; LAB_0055af1f
    MOV EAX,ESI                         ; 0055ae8b
    ADD ESP,0x320                       ; 0055ae8d
    POP ESI                             ; 0055ae93
    POP EBX                             ; 0055ae94
    RET                                 ; 0055ae95
    PUSH EDX                            ; 0055ae96
        ;   Label: LAB_0055ae96
    MOV EBX,dword ptr [EDX]             ; 0055ae97
    CALL dword ptr [EBX + 0x48]         ; 0055ae99
    TEST EAX,EAX                        ; 0055ae9c
    JZ 0x0055ae57                       ; 0055ae9e
        ;   XREF to: 0055ae57 (CONDITIONAL_JUMP)  ; LAB_0055ae57
    PUSH EAX                            ; 0055aea0
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055aea1
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055aea6
    PUSH EAX                            ; 0055aea9
    PUSH 0x5d45ed                       ; 0055aeaa | s_Stop_secondary_sound_buf_005d45ec+1
    PUSH 0x5d452f                       ; 0055aeaf | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055aeb4
    PUSH EAX                            ; 0055aebb
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055aebc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055aec1
    LEA EAX,[ESP + 0x190]               ; 0055aec4
    PUSH EAX                            ; 0055aecb
    XOR ESI,ESI                         ; 0055aecc
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055aece
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055aed3
    JMP 0x0055ae57                      ; 0055aed6
        ;   XREF to: 0055ae57 (UNCONDITIONAL_JUMP)  ; LAB_0055ae57
    PUSH ECX                            ; 0055aedb
        ;   Label: LAB_0055aedb
    MOV EBX,dword ptr [ECX]             ; 0055aedc
    CALL dword ptr [EBX + 0x48]         ; 0055aede
    TEST EAX,EAX                        ; 0055aee1
    JZ 0x0055ae65                       ; 0055aee3
        ;   XREF to: 0055ae65 (CONDITIONAL_JUMP)  ; LAB_0055ae65
    PUSH EAX                            ; 0055aee5
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055aee6
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055aeeb
    PUSH EAX                            ; 0055aeee
    PUSH 0x5d4609                       ; 0055aeef | = "Stop primary sound buffer"
    PUSH 0x5d452f                       ; 0055aef4 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055aef9
    PUSH EAX                            ; 0055aefd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055aefe
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055af03
    MOV EAX,ESP                         ; 0055af06
    PUSH EAX                            ; 0055af08
    XOR ESI,ESI                         ; 0055af09
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055af0b
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055af10
    JMP 0x0055ae65                      ; 0055af13
        ;   XREF to: 0055ae65 (UNCONDITIONAL_JUMP)  ; LAB_0055ae65
    XOR ESI,ESI                         ; 0055af18
        ;   Label: LAB_0055af18
    JMP 0x0055ae78                      ; 0055af1a
        ;   XREF to: 0055ae78 (UNCONDITIONAL_JUMP)  ; LAB_0055ae78
    XOR ESI,ESI                         ; 0055af1f
        ;   Label: LAB_0055af1f
    MOV EAX,ESI                         ; 0055af21
    ADD ESP,0x320                       ; 0055af23
    POP ESI                             ; 0055af29
    POP EBX                             ; 0055af2a
    RET                                 ; 0055af2b

