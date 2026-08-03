; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00529de0(int sfx_handle)
;
; Parameters:
; int              Stack[0x4]:4   sfx_handle
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Stop_hardware_sfx_second_00594104
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529de0
        ;   Label: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00529de0
    PUSH ESI                            ; 00529de1
    SUB ESP,0x190                       ; 00529de2
    MOV ESI,dword ptr [ESP + 0x19c]     ; 00529de8
    LEA EAX,[ESI*0x4 + 0x0]             ; 00529def
    MOV EDX,dword ptr [EAX + 0x2dc92a8] ; 00529df6
    TEST EDX,EDX                        ; 00529dfc
    JNZ 0x00529e40                      ; 00529dfe
        ;   XREF to: 00529e40 (CONDITIONAL_JUMP)  ; LAB_00529e40
    LEA EBX,[ESI*0x4 + 0x0]             ; 00529e00
        ;   Label: LAB_00529e00
    ADD EBX,0x2dc9324                   ; 00529e07
    MOV ECX,dword ptr [EBX]             ; 00529e0d
    TEST ECX,ECX                        ; 00529e0f
    JNZ 0x00529e7a                      ; 00529e11
        ;   XREF to: 00529e7a (CONDITIONAL_JUMP)  ; LAB_00529e7a
    LEA EBX,[ESI*0x4 + 0x0]             ; 00529e13
        ;   Label: LAB_00529e13
    ADD EBX,0x2dc92a8                   ; 00529e1a
    MOV ESI,dword ptr [EBX]             ; 00529e20
    TEST ESI,ESI                        ; 00529e22
    JZ 0x00529e32                       ; 00529e24
        ;   XREF to: 00529e32 (CONDITIONAL_JUMP)  ; LAB_00529e32
    PUSH ESI                            ; 00529e26
    MOV EDX,dword ptr [ESI]             ; 00529e27
    CALL dword ptr [EDX + 0x8]          ; 00529e29
    MOV dword ptr [EBX],0x0             ; 00529e2c
    MOV EAX,0x1                         ; 00529e32
        ;   Label: LAB_00529e32
    ADD ESP,0x190                       ; 00529e37
        ;   Label: LAB_00529e37
    POP ESI                             ; 00529e3d
    POP EBX                             ; 00529e3e
    RET                                 ; 00529e3f
    PUSH EDX                            ; 00529e40
        ;   Label: LAB_00529e40
    MOV EBX,dword ptr [EDX]             ; 00529e41
    CALL dword ptr [EBX + 0x48]         ; 00529e43
    TEST EAX,EAX                        ; 00529e46
    JZ 0x00529e00                       ; 00529e48
        ;   XREF to: 00529e00 (CONDITIONAL_JUMP)  ; LAB_00529e00
    PUSH EAX                            ; 00529e4a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 00529e4b
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 00529e50
    PUSH EAX                            ; 00529e53
    PUSH 0x594104                       ; 00529e54 | = "Stop hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 00529e59 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00529e5e
    PUSH EAX                            ; 00529e62
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00529e63
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 00529e68
    MOV EAX,ESP                         ; 00529e6b
    PUSH EAX                            ; 00529e6d
    CALL sound_sndmain.cpp_FUN_00529980 ; 00529e6e
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 00529e73
    XOR EAX,EAX                         ; 00529e76
    JMP 0x00529e37                      ; 00529e78
        ;   XREF to: 00529e37 (UNCONDITIONAL_JUMP)  ; LAB_00529e37
    PUSH ECX                            ; 00529e7a
        ;   Label: LAB_00529e7a
    MOV EDX,dword ptr [ECX]             ; 00529e7b
    CALL dword ptr [EDX + 0x8]          ; 00529e7d
    MOV dword ptr [EBX],0x0             ; 00529e80
    JMP 0x00529e13                      ; 00529e86
        ;   XREF to: 00529e13 (UNCONDITIONAL_JUMP)  ; LAB_00529e13

