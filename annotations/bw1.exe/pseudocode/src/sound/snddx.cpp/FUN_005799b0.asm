; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_snddx_cpp_FUN_005799b0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f52c2
;   TerminatedCString s_DirectSoundDevice_getSfx_005f52d5
;   TerminatedCString s_Get_playback_cursor_of_h_005f530b
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005723e0
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005799b0
        ;   Label: sound_snddx.cpp_FUN_005799b0
    PUSH ESI                            ; 005799b1
    PUSH EDI                            ; 005799b2
    PUSH EBP                            ; 005799b3
    MOV EBP,ESP                         ; 005799b4
    SUB ESP,0x1a4                       ; 005799b6
    AND ESP,0xfffffff8                  ; 005799bc
    MOV ESI,dword ptr [EBP + 0x18]      ; 005799bf
    MOV EBX,dword ptr [ESI + 0x60]      ; 005799c2
    TEST EBX,EBX                        ; 005799c5
    JLE 0x005799ce                      ; 005799c7
        ;   XREF to: 005799ce (CONDITIONAL_JUMP)  ; LAB_005799ce
    CMP EBX,0x1f                        ; 005799c9
    JL 0x00579a12                       ; 005799cc
        ;   XREF to: 00579a12 (CONDITIONAL_JUMP)  ; LAB_00579a12
    MOV ECX,0x5f52c2                    ; 005799ce | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005799ce
    MOV EDI,0x601                       ; 005799d3
    PUSH 0x5f52d5                       ; 005799d8 | = "DirectSoundDevice::getSfxPlaybackPos ..."
    MOV dword ptr [0x01d1d400],ECX      ; 005799dd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005799e3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005799e9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005799ee
    MOV EAX,dword ptr [ESI + 0x68]      ; 005799f1
        ;   Label: LAB_005799f1
    TEST EAX,EAX                        ; 005799f4
    JNZ 0x00579a27                      ; 005799f6
        ;   XREF to: 00579a27 (CONDITIONAL_JUMP)  ; LAB_00579a27
    MOV EDX,0xbff00000                  ; 005799f8
    MOV dword ptr [ESP],EAX             ; 005799fd
    MOV dword ptr [ESP + 0x4],EDX       ; 00579a00
    MOV EAX,dword ptr [ESP]             ; 00579a04
    MOV EDX,dword ptr [ESP + 0x4]       ; 00579a07
    MOV ESP,EBP                         ; 00579a0b
    POP EBP                             ; 00579a0d
    POP EDI                             ; 00579a0e
    POP ESI                             ; 00579a0f
    POP EBX                             ; 00579a10
    RET                                 ; 00579a11
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579a12
        ;   Label: LAB_00579a12
    ADD EAX,EBX                         ; 00579a19
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 00579a1b
    JZ 0x005799ce                       ; 00579a23
        ;   XREF to: 005799ce (CONDITIONAL_JUMP)  ; LAB_005799ce
    JMP 0x005799f1                      ; 00579a25
        ;   XREF to: 005799f1 (UNCONDITIONAL_JUMP)  ; LAB_005799f1
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579a27
        ;   Label: LAB_00579a27
    ADD EAX,EBX                         ; 00579a2e
    LEA EBX,[ESP + 0x198]               ; 00579a30
    PUSH EBX                            ; 00579a37
    LEA EBX,[ESP + 0x1a0]               ; 00579a38
    MOV EAX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579a3f
    PUSH EBX                            ; 00579a46
    MOV EDX,dword ptr [EAX]             ; 00579a47
    PUSH EAX                            ; 00579a49
    CALL dword ptr [EDX + 0x10]         ; 00579a4a
    TEST EAX,EAX                        ; 00579a4d
    JNZ 0x00579a84                      ; 00579a4f
        ;   XREF to: 00579a84 (CONDITIONAL_JUMP)  ; LAB_00579a84
    MOV EBX,dword ptr [ESP + 0x19c]     ; 00579a51
    PUSH EBX                            ; 00579a58
    MOV EDI,dword ptr [ESI + 0x68]      ; 00579a59
    PUSH EDI                            ; 00579a5c
    CALL sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005723e0 ; 00579a5d
        ;   XREF to: 005723e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_bytesToFrames_FUN_005723e0(CSfxSample * this_ptr, int byte_count)
    ADD ESP,0x8                         ; 00579a62
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00579a65
    FILD dword ptr [ESP + 0x1a0]        ; 00579a6c
    FSTP double ptr [ESP]               ; 00579a73
    MOV EAX,dword ptr [ESP]             ; 00579a76
    MOV EDX,dword ptr [ESP + 0x4]       ; 00579a79
    MOV ESP,EBP                         ; 00579a7d
    POP EBP                             ; 00579a7f
    POP EDI                             ; 00579a80
    POP ESI                             ; 00579a81
    POP EBX                             ; 00579a82
    RET                                 ; 00579a83
    PUSH EAX                            ; 00579a84
        ;   Label: LAB_00579a84
    CALL sound_snddx.cpp_FUN_00577500   ; 00579a85
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00579a8a
    PUSH EAX                            ; 00579a8d
    PUSH 0x5f530b                       ; 00579a8e | = "Get playback cursor of hardware sfx s..."
    PUSH 0x5f4c35                       ; 00579a93 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 00579a98
    PUSH EAX                            ; 00579a9c
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00579a9d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00579aa2
    LEA EAX,[ESP + 0x8]                 ; 00579aa5
    PUSH EAX                            ; 00579aa9
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00579aaa
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00579aaf
    XOR EDX,EDX                         ; 00579ab2
    MOV ECX,0xbff00000                  ; 00579ab4
    MOV dword ptr [ESP],EDX             ; 00579ab9
    MOV dword ptr [ESP + 0x4],ECX       ; 00579abc
    MOV EAX,dword ptr [ESP]             ; 00579ac0
    MOV EDX,dword ptr [ESP + 0x4]       ; 00579ac3
    MOV ESP,EBP                         ; 00579ac7
    POP EBP                             ; 00579ac9
    POP EDI                             ; 00579aca
    POP ESI                             ; 00579acb
    POP EBX                             ; 00579acc
    RET                                 ; 00579acd

