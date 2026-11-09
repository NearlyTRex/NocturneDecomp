; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_snddx_cpp_FUN_00554e50(int param_1)
;
;
; XREF[3]:
;   sound_snddx.cpp_FUN_005552a0 at 005552c8
;   sound_snddx.cpp_FUN_00556290 at 005564d3
;   sound_snddx.cpp_FUN_00557500 at 00557532
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Stop_hardware_sfx_second_005e9a88
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554e50
        ;   Label: sound_snddx.cpp_FUN_00554e50
    PUSH ESI                            ; 00554e51
    PUSH EDI                            ; 00554e52
    PUSH EBP                            ; 00554e53
    SUB ESP,0x190                       ; 00554e54
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 00554e5a
    LEA EAX,[EDX*0x8 + 0x0]             ; 00554e61
    ADD EAX,EDX                         ; 00554e68
    MOV EBX,0x264ac10                   ; 00554e6a
    SHL EAX,0x2                         ; 00554e6f
    ADD EBX,EAX                         ; 00554e72
    MOV EDX,dword ptr [EBX]             ; 00554e74
    MOV EDI,0x1                         ; 00554e76
    TEST EDX,EDX                        ; 00554e7b
    JNZ 0x00554ea7                      ; 00554e7d
        ;   XREF to: 00554ea7 (CONDITIONAL_JUMP)  ; LAB_00554ea7
    MOV dword ptr [EBX],0x0             ; 00554e7f
        ;   Label: LAB_00554e7f
    MOV dword ptr [EBX + 0x10],0x0      ; 00554e85
    MOV dword ptr [EBX + 0xc],0x0       ; 00554e8c
    MOV EAX,EDI                         ; 00554e93
    MOV dword ptr [EBX + 0x8],0x0       ; 00554e95
    ADD ESP,0x190                       ; 00554e9c
    POP EBP                             ; 00554ea2
    POP EDI                             ; 00554ea3
    POP ESI                             ; 00554ea4
    POP EBX                             ; 00554ea5
    RET                                 ; 00554ea6
    MOV EAX,EDX                         ; 00554ea7
        ;   Label: LAB_00554ea7
    PUSH EAX                            ; 00554ea9
    MOV EDX,dword ptr [EDX]             ; 00554eaa
    CALL dword ptr [EDX + 0x48]         ; 00554eac
    TEST EAX,EAX                        ; 00554eaf
    JNZ 0x00554f34                      ; 00554eb1
        ;   XREF to: 00554f34 (CONDITIONAL_JUMP)  ; LAB_00554f34
    LEA ESI,[EBX + 0x4]                 ; 00554eb7
        ;   Label: LAB_00554eb7
    MOV ECX,dword ptr [ESI]             ; 00554eba
    TEST ECX,ECX                        ; 00554ebc
    JZ 0x00554ecc                       ; 00554ebe
        ;   XREF to: 00554ecc (CONDITIONAL_JUMP)  ; LAB_00554ecc
    PUSH ECX                            ; 00554ec0
    MOV EDX,dword ptr [ECX]             ; 00554ec1
    CALL dword ptr [EDX + 0x8]          ; 00554ec3
    MOV dword ptr [ESI],0x0             ; 00554ec6
    MOV ESI,dword ptr [EBX + 0x8]       ; 00554ecc
        ;   Label: LAB_00554ecc
    LEA EAX,[ESI*0x4 + 0x0]             ; 00554ecf
    SUB EAX,ESI                         ; 00554ed6
    MOV ESI,0x264a5f4                   ; 00554ed8
    SHL EAX,0x3                         ; 00554edd
    MOV EBP,dword ptr [EBX + 0x10]      ; 00554ee0
    ADD ESI,EAX                         ; 00554ee3
    TEST EBP,EBP                        ; 00554ee5
    JZ 0x00554eff                       ; 00554ee7
        ;   XREF to: 00554eff (CONDITIONAL_JUMP)  ; LAB_00554eff
    LEA EAX,[EBP*0x8 + 0x0]             ; 00554ee9
    LEA EDX,[EAX + EBP*0x1]             ; 00554ef0
    SHL EDX,0x2                         ; 00554ef3
    MOV EAX,dword ptr [EBX + 0xc]       ; 00554ef6
    MOV dword ptr [EDX + 0x264ac1c],EAX ; 00554ef9
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 00554eff
        ;   Label: LAB_00554eff
    CMP EDX,dword ptr [ESI + 0x4]       ; 00554f06
    JNZ 0x00554f67                      ; 00554f09
        ;   XREF to: 00554f67 (CONDITIONAL_JUMP)  ; LAB_00554f67
    MOV EAX,dword ptr [EBX + 0x10]      ; 00554f0b
    MOV dword ptr [ESI + 0x4],EAX       ; 00554f0e
    MOV ECX,dword ptr [EBX]             ; 00554f11
        ;   Label: LAB_00554f11
    CMP ECX,dword ptr [ESI]             ; 00554f13
    JZ 0x00554e7f                       ; 00554f15
        ;   XREF to: 00554e7f (CONDITIONAL_JUMP)  ; LAB_00554e7f
    TEST ECX,ECX                        ; 00554f1b
    JZ 0x00554e7f                       ; 00554f1d
        ;   XREF to: 00554e7f (CONDITIONAL_JUMP)  ; LAB_00554e7f
    PUSH ECX                            ; 00554f23
    MOV EDX,dword ptr [ECX]             ; 00554f24
    CALL dword ptr [EDX + 0x8]          ; 00554f26
    MOV dword ptr [EBX],0x0             ; 00554f29
    JMP 0x00554e7f                      ; 00554f2f
        ;   XREF to: 00554e7f (UNCONDITIONAL_JUMP)  ; LAB_00554e7f
    PUSH EAX                            ; 00554f34
        ;   Label: LAB_00554f34
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00554f35
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00554f3a
    PUSH EAX                            ; 00554f3d
    PUSH 0x5e9a88                       ; 00554f3e | = "Stop hardware sfx secondary buffer"
    PUSH 0x5e9a3b                       ; 00554f43 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00554f48
    PUSH EAX                            ; 00554f4c
    CALL crt_unknown.c_FUN_005b7790     ; 00554f4d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00554f52
    MOV EAX,ESP                         ; 00554f55
    PUSH EAX                            ; 00554f57
    XOR EDI,EDI                         ; 00554f58
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00554f5a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00554f5f
    JMP 0x00554eb7                      ; 00554f62
        ;   XREF to: 00554eb7 (UNCONDITIONAL_JUMP)  ; LAB_00554eb7
    MOV EDX,dword ptr [EBX + 0xc]       ; 00554f67
        ;   Label: LAB_00554f67
    LEA EAX,[EDX*0x8 + 0x0]             ; 00554f6a
    ADD EAX,EDX                         ; 00554f71
    MOV EDX,dword ptr [EBX + 0x10]      ; 00554f73
    MOV dword ptr [EAX*0x4 + 0x264ac20],EDX ; 00554f76
    JMP 0x00554f11                      ; 00554f7d
        ;   XREF to: 00554f11 (UNCONDITIONAL_JUMP)  ; LAB_00554f11

