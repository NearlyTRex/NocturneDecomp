; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_0057a230(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Commit_hardware_sfx_3d_b_005f566c
;   undefined4 DAT_02c81da0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    SUB ESP,0x190                       ; 0057a230
        ;   Label: sound_snddx.cpp_FUN_0057a230
    MOV EDX,dword ptr [0x02c81da0]      ; 0057a236 | DAT_02c81da0
    TEST EDX,EDX                        ; 0057a23c
    JNZ 0x0057a247                      ; 0057a23e
        ;   XREF to: 0057a247 (CONDITIONAL_JUMP)  ; LAB_0057a247
    ADD ESP,0x190                       ; 0057a240
        ;   Label: LAB_0057a240
    RET                                 ; 0057a246
    MOV EAX,EDX                         ; 0057a247
        ;   Label: LAB_0057a247
    PUSH EAX                            ; 0057a249
    MOV EDX,dword ptr [EDX]             ; 0057a24a
    CALL dword ptr [EDX + 0x44]         ; 0057a24c
    TEST EAX,EAX                        ; 0057a24f
    JZ 0x0057a240                       ; 0057a251
        ;   XREF to: 0057a240 (CONDITIONAL_JUMP)  ; LAB_0057a240
    PUSH EAX                            ; 0057a253
    CALL sound_snddx.cpp_FUN_00577500   ; 0057a254
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057a259
    PUSH EAX                            ; 0057a25c
    PUSH 0x5f566c                       ; 0057a25d | = "Commit hardware sfx 3d buffer settings"
    PUSH 0x5f4c35                       ; 0057a262 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0057a267
    PUSH EAX                            ; 0057a26b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 0057a26c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057a271
    MOV EAX,ESP                         ; 0057a274
    PUSH EAX                            ; 0057a276
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057a277
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057a27c
    ADD ESP,0x190                       ; 0057a27f
    RET                                 ; 0057a285

