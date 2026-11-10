; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_snddx_cpp_FUN_0055a9f0(int param_1)
;
;
; XREF[3]:
;   sound_snddx.cpp_FUN_0055ae40 at 0055ae68
;   sound_snddx.cpp_FUN_0055be30 at 0055c073
;   sound_snddx.cpp_FUN_0055d0a0 at 0055d0d2
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_Stop_hardware_sfx_second_005d457c
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a9f0
        ;   Label: sound_snddx.cpp_FUN_0055a9f0
    PUSH ESI                            ; 0055a9f1
    PUSH EDI                            ; 0055a9f2
    PUSH EBP                            ; 0055a9f3
    SUB ESP,0x190                       ; 0055a9f4
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0055a9fa
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055aa01
    ADD EAX,EDX                         ; 0055aa08
    MOV EBX,0x2cf500c                   ; 0055aa0a
    SHL EAX,0x2                         ; 0055aa0f
    ADD EBX,EAX                         ; 0055aa12
    MOV EDX,dword ptr [EBX]             ; 0055aa14
    MOV EDI,0x1                         ; 0055aa16
    TEST EDX,EDX                        ; 0055aa1b
    JNZ 0x0055aa47                      ; 0055aa1d
        ;   XREF to: 0055aa47 (CONDITIONAL_JUMP)  ; LAB_0055aa47
    MOV dword ptr [EBX],0x0             ; 0055aa1f
        ;   Label: LAB_0055aa1f
    MOV dword ptr [EBX + 0x10],0x0      ; 0055aa25
    MOV dword ptr [EBX + 0xc],0x0       ; 0055aa2c
    MOV EAX,EDI                         ; 0055aa33
    MOV dword ptr [EBX + 0x8],0x0       ; 0055aa35
    ADD ESP,0x190                       ; 0055aa3c
    POP EBP                             ; 0055aa42
    POP EDI                             ; 0055aa43
    POP ESI                             ; 0055aa44
    POP EBX                             ; 0055aa45
    RET                                 ; 0055aa46
    MOV EAX,EDX                         ; 0055aa47
        ;   Label: LAB_0055aa47
    PUSH EAX                            ; 0055aa49
    MOV EDX,dword ptr [EDX]             ; 0055aa4a
    CALL dword ptr [EDX + 0x48]         ; 0055aa4c
    TEST EAX,EAX                        ; 0055aa4f
    JNZ 0x0055aad4                      ; 0055aa51
        ;   XREF to: 0055aad4 (CONDITIONAL_JUMP)  ; LAB_0055aad4
    LEA ESI,[EBX + 0x4]                 ; 0055aa57
        ;   Label: LAB_0055aa57
    MOV ECX,dword ptr [ESI]             ; 0055aa5a
    TEST ECX,ECX                        ; 0055aa5c
    JZ 0x0055aa6c                       ; 0055aa5e
        ;   XREF to: 0055aa6c (CONDITIONAL_JUMP)  ; LAB_0055aa6c
    PUSH ECX                            ; 0055aa60
    MOV EDX,dword ptr [ECX]             ; 0055aa61
    CALL dword ptr [EDX + 0x8]          ; 0055aa63
    MOV dword ptr [ESI],0x0             ; 0055aa66
    MOV ESI,dword ptr [EBX + 0x8]       ; 0055aa6c
        ;   Label: LAB_0055aa6c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0055aa6f
    SUB EAX,ESI                         ; 0055aa76
    MOV ESI,0x2cf49f4                   ; 0055aa78
    SHL EAX,0x3                         ; 0055aa7d
    MOV EBP,dword ptr [EBX + 0x10]      ; 0055aa80
    ADD ESI,EAX                         ; 0055aa83
    TEST EBP,EBP                        ; 0055aa85
    JZ 0x0055aa9f                       ; 0055aa87
        ;   XREF to: 0055aa9f (CONDITIONAL_JUMP)  ; LAB_0055aa9f
    LEA EAX,[EBP*0x8 + 0x0]             ; 0055aa89
    LEA EDX,[EAX + EBP*0x1]             ; 0055aa90
    SHL EDX,0x2                         ; 0055aa93
    MOV EAX,dword ptr [EBX + 0xc]       ; 0055aa96
    MOV dword ptr [EDX + 0x2cf5018],EAX ; 0055aa99
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0055aa9f
        ;   Label: LAB_0055aa9f
    CMP EDX,dword ptr [ESI + 0x4]       ; 0055aaa6
    JNZ 0x0055ab07                      ; 0055aaa9
        ;   XREF to: 0055ab07 (CONDITIONAL_JUMP)  ; LAB_0055ab07
    MOV EAX,dword ptr [EBX + 0x10]      ; 0055aaab
    MOV dword ptr [ESI + 0x4],EAX       ; 0055aaae
    MOV ECX,dword ptr [EBX]             ; 0055aab1
        ;   Label: LAB_0055aab1
    CMP ECX,dword ptr [ESI]             ; 0055aab3
    JZ 0x0055aa1f                       ; 0055aab5
        ;   XREF to: 0055aa1f (CONDITIONAL_JUMP)  ; LAB_0055aa1f
    TEST ECX,ECX                        ; 0055aabb
    JZ 0x0055aa1f                       ; 0055aabd
        ;   XREF to: 0055aa1f (CONDITIONAL_JUMP)  ; LAB_0055aa1f
    PUSH ECX                            ; 0055aac3
    MOV EDX,dword ptr [ECX]             ; 0055aac4
    CALL dword ptr [EDX + 0x8]          ; 0055aac6
    MOV dword ptr [EBX],0x0             ; 0055aac9
    JMP 0x0055aa1f                      ; 0055aacf
        ;   XREF to: 0055aa1f (UNCONDITIONAL_JUMP)  ; LAB_0055aa1f
    PUSH EAX                            ; 0055aad4
        ;   Label: LAB_0055aad4
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055aad5
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055aada
    PUSH EAX                            ; 0055aadd
    PUSH 0x5d457c                       ; 0055aade | = "Stop hardware sfx secondary buffer"
    PUSH 0x5d452f                       ; 0055aae3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055aae8
    PUSH EAX                            ; 0055aaec
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055aaed
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055aaf2
    MOV EAX,ESP                         ; 0055aaf5
    PUSH EAX                            ; 0055aaf7
    XOR EDI,EDI                         ; 0055aaf8
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055aafa
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055aaff
    JMP 0x0055aa57                      ; 0055ab02
        ;   XREF to: 0055aa57 (UNCONDITIONAL_JUMP)  ; LAB_0055aa57
    MOV EDX,dword ptr [EBX + 0xc]       ; 0055ab07
        ;   Label: LAB_0055ab07
    LEA EAX,[EDX*0x8 + 0x0]             ; 0055ab0a
    ADD EAX,EDX                         ; 0055ab11
    MOV EDX,dword ptr [EBX + 0x10]      ; 0055ab13
    MOV dword ptr [EAX*0x4 + 0x2cf501c],EDX ; 0055ab16
    JMP 0x0055aab1                      ; 0055ab1d
        ;   XREF to: 0055aab1 (UNCONDITIONAL_JUMP)  ; LAB_0055aab1

