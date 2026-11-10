; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00555b60(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_Querry_DirectSound_capab_005e9bd7
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5d0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555b60
        ;   Label: sound_snddx.cpp_FUN_00555b60
    SUB ESP,0x1f0                       ; 00555b61
    CMP dword ptr [0x0264a5c4],0x0      ; 00555b67 | DAT_0264a5c4
    JZ 0x00555b87                       ; 00555b6e
        ;   XREF to: 00555b87 (CONDITIONAL_JUMP)  ; LAB_00555b87
    MOV ECX,dword ptr [0x0264a5d0]      ; 00555b70 | DAT_0264a5d0
    TEST ECX,ECX                        ; 00555b76
    JZ 0x00555b8b                       ; 00555b78
        ;   XREF to: 00555b8b (CONDITIONAL_JUMP)  ; LAB_00555b8b
    MOV EAX,0x2                         ; 00555b7a
    ADD ESP,0x1f0                       ; 00555b7f
        ;   Label: LAB_00555b7f
    POP EBX                             ; 00555b85
    RET                                 ; 00555b86
    XOR EAX,EAX                         ; 00555b87
        ;   Label: LAB_00555b87
    JMP 0x00555b7f                      ; 00555b89
        ;   XREF to: 00555b7f (UNCONDITIONAL_JUMP)  ; LAB_00555b7f
    PUSH 0x60                           ; 00555b8b
        ;   Label: LAB_00555b8b
    PUSH ECX                            ; 00555b8d
    LEA EAX,[ESP + 0x198]               ; 00555b8e
    PUSH EAX                            ; 00555b95
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00555b96
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00555b9b
    LEA ECX,[ESP + 0x190]               ; 00555b9e
    MOV EBX,0x60                        ; 00555ba5
    PUSH ECX                            ; 00555baa
    MOV EAX,[0x0264a5c4]                ; 00555bab | DAT_0264a5c4
    MOV dword ptr [ESP + 0x194],EBX     ; 00555bb0
    PUSH EAX                            ; 00555bb7
    MOV EDX,dword ptr [EAX]             ; 00555bb8
    CALL dword ptr [EDX + 0x10]         ; 00555bba
    TEST EAX,EAX                        ; 00555bbd
    JNZ 0x00555bd8                      ; 00555bbf
        ;   XREF to: 00555bd8 (CONDITIONAL_JUMP)  ; LAB_00555bd8
    CMP dword ptr [ESP + 0x1a8],0x0     ; 00555bc1
    JBE 0x00555b7f                      ; 00555bc9
        ;   XREF to: 00555b7f (CONDITIONAL_JUMP)  ; LAB_00555b7f
    MOV EAX,0x1                         ; 00555bcb
    ADD ESP,0x1f0                       ; 00555bd0
    POP EBX                             ; 00555bd6
    RET                                 ; 00555bd7
    PUSH EAX                            ; 00555bd8
        ;   Label: LAB_00555bd8
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555bd9
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555bde
    PUSH EAX                            ; 00555be1
    PUSH 0x5e9bd7                       ; 00555be2 | = "Querry DirectSound capabilities"
    PUSH 0x5e9a3b                       ; 00555be7 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555bec
    PUSH EAX                            ; 00555bf0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00555bf1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00555bf6
    MOV EAX,ESP                         ; 00555bf9
    PUSH EAX                            ; 00555bfb
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00555bfc
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00555c01
    XOR EAX,EAX                         ; 00555c04
    ADD ESP,0x1f0                       ; 00555c06
    POP EBX                             ; 00555c0c
    RET                                 ; 00555c0d

