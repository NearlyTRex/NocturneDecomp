; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_0055d360(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Commit_hardware_sfx_3d_b_005d4ec5
;   undefined4 DAT_02cf49d0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 0055d360
        ;   Label: sound_snddx.cpp_FUN_0055d360
    MOV EDX,dword ptr [0x02cf49d0]      ; 0055d366 | DAT_02cf49d0
    TEST EDX,EDX                        ; 0055d36c
    JNZ 0x0055d377                      ; 0055d36e
        ;   XREF to: 0055d377 (CONDITIONAL_JUMP)  ; LAB_0055d377
    ADD ESP,0x190                       ; 0055d370
        ;   Label: LAB_0055d370
    RET                                 ; 0055d376
    MOV EAX,EDX                         ; 0055d377
        ;   Label: LAB_0055d377
    PUSH EAX                            ; 0055d379
    MOV EDX,dword ptr [EDX]             ; 0055d37a
    CALL dword ptr [EDX + 0x44]         ; 0055d37c
    TEST EAX,EAX                        ; 0055d37f
    JZ 0x0055d370                       ; 0055d381
        ;   XREF to: 0055d370 (CONDITIONAL_JUMP)  ; LAB_0055d370
    PUSH EAX                            ; 0055d383
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055d384
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055d389
    PUSH EAX                            ; 0055d38c
    PUSH 0x5d4ec5                       ; 0055d38d | = "Commit hardware sfx 3d buffer settings"
    PUSH 0x5d452f                       ; 0055d392 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055d397
    PUSH EAX                            ; 0055d39b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055d39c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055d3a1
    MOV EAX,ESP                         ; 0055d3a4
    PUSH EAX                            ; 0055d3a6
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055d3a7
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055d3ac
    ADD ESP,0x190                       ; 0055d3af
    RET                                 ; 0055d3b5

