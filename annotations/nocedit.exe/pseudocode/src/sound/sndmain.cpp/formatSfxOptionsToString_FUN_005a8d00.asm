; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_formatSfxOptionsToString_FUN_005a8d00(char *output_buffer,char *prefix_string,CSfxOptions *options,uint format_flags)
;
; Parameters:
; char *           Stack[0x4]:4   output_buffer
; char *           Stack[0x8]:4   prefix_string
; CSfxOptions *    Stack[0xc]:4   options
; uint             Stack[0x10]:4   format_flags
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; Referenced Globals:
;   TerminatedCString s_s_006508fd
;   TerminatedCString s_channel_d_s_00650900
;   TerminatedCString s_pos_lg_lg_lg_0065090e
;   TerminatedCString s_posPtrFloat_p_0065091f
;   TerminatedCString s_posPtrDouble_p_0065092f
;   TerminatedCString s_vel_lg_lg_lg_00650940
;   TerminatedCString s_velPtrFloat_p_00650951
;   TerminatedCString s_velPtrDouble_p_00650961
;   TerminatedCString s_vol_g_00650972
;   TerminatedCString s_freq_g_0065097a
;   TerminatedCString s_delay_lg_00650983
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8d00
        ;   Label: sound_sndmain.cpp_formatSfxOptionsToString_FUN_005a8d00
    PUSH ESI                            ; 005a8d01
    PUSH EDI                            ; 005a8d02
    PUSH EBP                            ; 005a8d03
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a8d04
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a8d08
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a8d0c
    MOV EBX,EDI                         ; 005a8d10
    TEST EAX,EAX                        ; 005a8d12
    JNZ 0x005a8e55                      ; 005a8d14
        ;   XREF to: 005a8e55 (CONDITIONAL_JUMP)  ; LAB_005a8e55
    MOV byte ptr [EDI],0x0              ; 005a8d1a
    TEST byte ptr [ESP + 0x20],0x1      ; 005a8d1d
        ;   Label: LAB_005a8d1d
    JZ 0x005a8d37                       ; 005a8d22
        ;   XREF to: 005a8d37 (CONDITIONAL_JUMP)  ; LAB_005a8d37
    MOV EDX,dword ptr [ESI]             ; 005a8d24
    PUSH EDX                            ; 005a8d26
    PUSH 0x650900                       ; 005a8d27 | = " channel=%d%s"
    PUSH EBX                            ; 005a8d2c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8d2d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8d32
    ADD EBX,EAX                         ; 005a8d35
    TEST byte ptr [ESP + 0x20],0x2      ; 005a8d37
        ;   Label: LAB_005a8d37
    JZ 0x005a8da0                       ; 005a8d3c
        ;   XREF to: 005a8da0 (CONDITIONAL_JUMP)  ; LAB_005a8da0
    CMP dword ptr [ESI + 0x20],0x0      ; 005a8d3e
    JNZ 0x005a8d6c                      ; 005a8d42
        ;   XREF to: 005a8d6c (CONDITIONAL_JUMP)  ; LAB_005a8d6c
    MOV EDI,dword ptr [ESI + 0x18]      ; 005a8d44
    PUSH EDI                            ; 005a8d47
    MOV EBP,dword ptr [ESI + 0x14]      ; 005a8d48
    PUSH EBP                            ; 005a8d4b
    MOV EAX,dword ptr [ESI + 0x10]      ; 005a8d4c
    PUSH EAX                            ; 005a8d4f
    MOV EDX,dword ptr [ESI + 0xc]       ; 005a8d50
    PUSH EDX                            ; 005a8d53
    MOV ECX,dword ptr [ESI + 0x8]       ; 005a8d54
    PUSH ECX                            ; 005a8d57
    MOV EDI,dword ptr [ESI + 0x4]       ; 005a8d58
    PUSH EDI                            ; 005a8d5b
    PUSH 0x65090e                       ; 005a8d5c | = " pos=%lg,%lg,%lg"
    PUSH EBX                            ; 005a8d61
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8d62
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 005a8d67
    ADD EBX,EAX                         ; 005a8d6a
    CMP dword ptr [ESI + 0x20],0x1      ; 005a8d6c
        ;   Label: LAB_005a8d6c
    JNZ 0x005a8d86                      ; 005a8d70
        ;   XREF to: 005a8d86 (CONDITIONAL_JUMP)  ; LAB_005a8d86
    MOV EAX,dword ptr [ESI + 0x1c]      ; 005a8d72
    PUSH EAX                            ; 005a8d75
    PUSH 0x65091f                       ; 005a8d76 | = " posPtrFloat=%p"
    PUSH EBX                            ; 005a8d7b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8d7c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8d81
    ADD EBX,EAX                         ; 005a8d84
    CMP dword ptr [ESI + 0x20],0x2      ; 005a8d86
        ;   Label: LAB_005a8d86
    JNZ 0x005a8da0                      ; 005a8d8a
        ;   XREF to: 005a8da0 (CONDITIONAL_JUMP)  ; LAB_005a8da0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 005a8d8c
    PUSH ECX                            ; 005a8d8f
    PUSH 0x65092f                       ; 005a8d90 | = " posPtrDouble=%p"
    PUSH EBX                            ; 005a8d95
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8d96
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8d9b
    ADD EBX,EAX                         ; 005a8d9e
    TEST byte ptr [ESP + 0x20],0x4      ; 005a8da0
        ;   Label: LAB_005a8da0
    JZ 0x005a8e09                       ; 005a8da5
        ;   XREF to: 005a8e09 (CONDITIONAL_JUMP)  ; LAB_005a8e09
    CMP dword ptr [ESI + 0x40],0x0      ; 005a8da7
    JNZ 0x005a8dd5                      ; 005a8dab
        ;   XREF to: 005a8dd5 (CONDITIONAL_JUMP)  ; LAB_005a8dd5
    MOV EBP,dword ptr [ESI + 0x38]      ; 005a8dad
    PUSH EBP                            ; 005a8db0
    MOV EAX,dword ptr [ESI + 0x34]      ; 005a8db1
    PUSH EAX                            ; 005a8db4
    MOV EDX,dword ptr [ESI + 0x30]      ; 005a8db5
    PUSH EDX                            ; 005a8db8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 005a8db9
    PUSH ECX                            ; 005a8dbc
    MOV EDI,dword ptr [ESI + 0x28]      ; 005a8dbd
    PUSH EDI                            ; 005a8dc0
    MOV EBP,dword ptr [ESI + 0x24]      ; 005a8dc1
    PUSH EBP                            ; 005a8dc4
    PUSH 0x650940                       ; 005a8dc5 | = " vel=%lg,%lg,%lg"
    PUSH EBX                            ; 005a8dca
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8dcb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 005a8dd0
    ADD EBX,EAX                         ; 005a8dd3
    CMP dword ptr [ESI + 0x40],0x1      ; 005a8dd5
        ;   Label: LAB_005a8dd5
    JNZ 0x005a8def                      ; 005a8dd9
        ;   XREF to: 005a8def (CONDITIONAL_JUMP)  ; LAB_005a8def
    MOV EDX,dword ptr [ESI + 0x3c]      ; 005a8ddb
    PUSH EDX                            ; 005a8dde
    PUSH 0x650951                       ; 005a8ddf | = " velPtrFloat=%p"
    PUSH EBX                            ; 005a8de4
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8de5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8dea
    ADD EBX,EAX                         ; 005a8ded
    CMP dword ptr [ESI + 0x40],0x2      ; 005a8def
        ;   Label: LAB_005a8def
    JNZ 0x005a8e09                      ; 005a8df3
        ;   XREF to: 005a8e09 (CONDITIONAL_JUMP)  ; LAB_005a8e09
    MOV EDI,dword ptr [ESI + 0x3c]      ; 005a8df5
    PUSH EDI                            ; 005a8df8
    PUSH 0x650961                       ; 005a8df9 | = " velPtrDouble=%p"
    PUSH EBX                            ; 005a8dfe
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8dff
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8e04
    ADD EBX,EAX                         ; 005a8e07
    TEST byte ptr [ESP + 0x20],0x8      ; 005a8e09
        ;   Label: LAB_005a8e09
    JZ 0x005a8e29                       ; 005a8e0e
        ;   XREF to: 005a8e29 (CONDITIONAL_JUMP)  ; LAB_005a8e29
    SUB ESP,0x8                         ; 005a8e10
    FLD float ptr [ESI + 0x44]          ; 005a8e13
    FSTP double ptr [ESP]               ; 005a8e16
    PUSH 0x650972                       ; 005a8e19 | = " vol=%g"
    PUSH EBX                            ; 005a8e1e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8e1f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005a8e24
    ADD EBX,EAX                         ; 005a8e27
    TEST byte ptr [ESP + 0x20],0x10     ; 005a8e29
        ;   Label: LAB_005a8e29
    JZ 0x005a8e49                       ; 005a8e2e
        ;   XREF to: 005a8e49 (CONDITIONAL_JUMP)  ; LAB_005a8e49
    SUB ESP,0x8                         ; 005a8e30
    FLD float ptr [ESI + 0x48]          ; 005a8e33
    FSTP double ptr [ESP]               ; 005a8e36
    PUSH 0x65097a                       ; 005a8e39 | = " freq=%g"
    PUSH EBX                            ; 005a8e3e
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8e3f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005a8e44
    ADD EBX,EAX                         ; 005a8e47
    TEST byte ptr [ESP + 0x20],0x20     ; 005a8e49
        ;   Label: LAB_005a8e49
    JNZ 0x005a8e6c                      ; 005a8e4e
        ;   XREF to: 005a8e6c (CONDITIONAL_JUMP)  ; LAB_005a8e6c
    POP EBP                             ; 005a8e50
    POP EDI                             ; 005a8e51
    POP ESI                             ; 005a8e52
    POP EBX                             ; 005a8e53
    RET                                 ; 005a8e54
    PUSH EAX                            ; 005a8e55
        ;   Label: LAB_005a8e55
    PUSH 0x6508fd                       ; 005a8e56 | = "%s"
    PUSH EDI                            ; 005a8e5b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8e5c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005a8e61
    LEA EBX,[EDI + EAX*0x1]             ; 005a8e64
    JMP 0x005a8d1d                      ; 005a8e67
        ;   XREF to: 005a8d1d (UNCONDITIONAL_JUMP)  ; LAB_005a8d1d
    MOV EBP,dword ptr [ESI + 0x50]      ; 005a8e6c
        ;   Label: LAB_005a8e6c
    PUSH EBP                            ; 005a8e6f
    MOV EAX,dword ptr [ESI + 0x4c]      ; 005a8e70
    PUSH EAX                            ; 005a8e73
    PUSH 0x650983                       ; 005a8e74 | = " delay=%lg"
    PUSH EBX                            ; 005a8e79
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005a8e7a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005a8e7f
    POP EBP                             ; 005a8e82
    POP EDI                             ; 005a8e83
    POP ESI                             ; 005a8e84
    POP EBX                             ; 005a8e85
    RET                                 ; 005a8e86

