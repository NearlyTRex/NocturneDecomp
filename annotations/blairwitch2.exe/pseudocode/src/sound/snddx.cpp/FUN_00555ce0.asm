; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00555ce0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   undefined4 s_Create_secondary_buffer_005e9bfc+1
;   TerminatedCString s_DirectSoundDevice_alloca_005e9c15
;   undefined4 DAT_0264a5c4
;   undefined4 DAT_0264a5d0
;   undefined4 DAT_0264a60c
;   undefined4 DAT_0264a624
;   undefined4 DAT_0264a62c
;   undefined4 DAT_0264a630
;   undefined4 DAT_0264a634
;   undefined4 DAT_0264a63c
;   undefined4 DAT_0264ac0c
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ce0
        ;   Label: sound_snddx.cpp_FUN_00555ce0
    PUSH ESI                            ; 00555ce1
    PUSH EDI                            ; 00555ce2
    PUSH EBP                            ; 00555ce3
    SUB ESP,0x1b8                       ; 00555ce4
    MOV ESI,dword ptr [ESP + 0x1d0]     ; 00555cea
    CMP dword ptr [0x0264a5c4],0x0      ; 00555cf1 | DAT_0264a5c4
    JZ 0x00555ecd                       ; 00555cf8
        ;   XREF to: 00555ecd (CONDITIONAL_JUMP)  ; LAB_00555ecd
    MOV EAX,0x18                        ; 00555cfe
    MOV ECX,dword ptr [0x0264a60c]      ; 00555d03 | DAT_0264a60c
    MOV EBX,0x1                         ; 00555d09
    TEST ECX,ECX                        ; 00555d0e
    JZ 0x00555d26                       ; 00555d10
        ;   XREF to: 00555d26 (CONDITIONAL_JUMP)  ; LAB_00555d26
    ADD EAX,0x18                        ; 00555d12
        ;   Label: LAB_00555d12
    INC EBX                             ; 00555d15
    CMP EAX,0x618                       ; 00555d16
    JGE 0x00555d26                      ; 00555d1b
        ;   XREF to: 00555d26 (CONDITIONAL_JUMP)  ; LAB_00555d26
    CMP dword ptr [EAX + 0x264a5f4],0x0 ; 00555d1d | DAT_0264a624 | DAT_0264a63c
    JNZ 0x00555d12                      ; 00555d24
        ;   XREF to: 00555d12 (CONDITIONAL_JUMP)  ; LAB_00555d12
    CMP EBX,0x41                        ; 00555d26
        ;   Label: LAB_00555d26
    JGE 0x00555ecd                      ; 00555d29
        ;   XREF to: 00555ecd (CONDITIONAL_JUMP)  ; LAB_00555ecd
    PUSH 0x12                           ; 00555d2f
    PUSH 0x0                            ; 00555d31
    LEA EAX,[ESP + 0x1ac]               ; 00555d33
    PUSH EAX                            ; 00555d3a
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00555d3b
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00555d40
    PUSH 0x14                           ; 00555d43
    PUSH 0x0                            ; 00555d45
    LEA EAX,[ESP + 0x198]               ; 00555d47
    PUSH EAX                            ; 00555d4e
    MOV EBP,0x14                        ; 00555d4f
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00555d54
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EAX,0xa0                        ; 00555d59
    ADD ESP,0xc                         ; 00555d5e
    MOV EDX,dword ptr [0x0264ac0c]      ; 00555d61 | DAT_0264ac0c
    MOV dword ptr [ESP + 0x190],EBP     ; 00555d67
    MOV dword ptr [ESP + 0x194],EAX     ; 00555d6e
    TEST EDX,EDX                        ; 00555d75
    JZ 0x00555d84                       ; 00555d77
        ;   XREF to: 00555d84 (CONDITIONAL_JUMP)  ; LAB_00555d84
    MOV dword ptr [ESP + 0x194],0xa8    ; 00555d79
    CMP dword ptr [0x0264a5d0],0x0      ; 00555d84 | DAT_0264a5d0
        ;   Label: LAB_00555d84
    JNZ 0x00555eda                      ; 00555d8b
        ;   XREF to: 00555eda (CONDITIONAL_JUMP)  ; LAB_00555eda
    OR byte ptr [ESP + 0x194],0x40      ; 00555d91
    MOV EAX,dword ptr [ESI + 0x100]     ; 00555d99
        ;   Label: LAB_00555d99
    CMP EAX,0x2                         ; 00555d9f
    JNZ 0x00555ee7                      ; 00555da2
        ;   XREF to: 00555ee7 (CONDITIONAL_JUMP)  ; LAB_00555ee7
    MOV word ptr [ESP + 0x1a4],0x20     ; 00555da8
    MOV AX,word ptr [ESI + 0x108]       ; 00555db2
    MOV word ptr [ESP + 0x1a6],AX       ; 00555db9
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00555dc1
    XOR EDX,EDX                         ; 00555dc7
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00555dc9
    MOV DX,word ptr [ESP + 0x1a6]       ; 00555dd0
    MOV EAX,dword ptr [ESI + 0x104]     ; 00555dd8
    IMUL EDX,EAX                        ; 00555dde
    MOV EAX,EDX                         ; 00555de1
    SAR EDX,0x1f                        ; 00555de3
    SHL EDX,0x4                         ; 00555de6
    SBB EAX,EDX                         ; 00555de9
    SAR EAX,0x4                         ; 00555deb
    MOV word ptr [ESP + 0x1b0],AX       ; 00555dee
    XOR EAX,EAX                         ; 00555df6
    MOV EDX,dword ptr [ESI + 0x10c]     ; 00555df8
    MOV AX,word ptr [ESP + 0x1b0]       ; 00555dfe
    IMUL EDX,EAX                        ; 00555e06
    MOV word ptr [ESP + 0x1b2],0x4      ; 00555e09
    MOV dword ptr [ESP + 0x1ac],EDX     ; 00555e13
    MOV EDX,dword ptr [ESI + 0x110]     ; 00555e1a
    MOV ECX,dword ptr [ESI + 0x108]     ; 00555e20
    IMUL EDX,ECX                        ; 00555e26
    MOV EAX,EDX                         ; 00555e29
    SAR EDX,0x1f                        ; 00555e2b
    SUB EAX,EDX                         ; 00555e2e
    SAR EAX,0x1                         ; 00555e30
    MOV dword ptr [ESP + 0x198],EAX     ; 00555e32
        ;   Label: LAB_00555e32
    LEA EAX,[ESP + 0x1a4]               ; 00555e39
    LEA EDI,[EBX*0x4 + 0x0]             ; 00555e40
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00555e47
    SUB EDI,EBX                         ; 00555e4e
    MOV EAX,0x264a5f4                   ; 00555e50
    SHL EDI,0x3                         ; 00555e55
    PUSH 0x0                            ; 00555e58
    ADD EAX,EDI                         ; 00555e5a
    PUSH EAX                            ; 00555e5c | DAT_0264a624
    LEA EAX,[ESP + 0x198]               ; 00555e5d
    MOV ECX,dword ptr [0x0264a5c4]      ; 00555e64 | DAT_0264a5c4
    PUSH EAX                            ; 00555e6a
    MOV EBP,dword ptr [ECX]             ; 00555e6b
    PUSH ECX                            ; 00555e6d
    CALL dword ptr [EBP + 0xc]          ; 00555e6e
    TEST EAX,EAX                        ; 00555e71
    JNZ 0x00555f67                      ; 00555e73
        ;   XREF to: 00555f67 (CONDITIONAL_JUMP)  ; LAB_00555f67
    CMP dword ptr [EDI + 0x264a5f4],0x0 ; 00555e79 | DAT_0264a624
    JZ 0x00555f93                       ; 00555e80
        ;   XREF to: 00555f93 (CONDITIONAL_JUMP)  ; LAB_00555f93
    MOV EDX,dword ptr [ESI + 0x104]     ; 00555e86
    MOV EAX,dword ptr [ESI + 0x108]     ; 00555e8c
    SHL EDX,0x8                         ; 00555e92
    IMUL EDX,EAX                        ; 00555e95
    MOV EAX,EDX                         ; 00555e98
    SAR EDX,0x1f                        ; 00555e9a
    SHL EDX,0x3                         ; 00555e9d
    SBB EAX,EDX                         ; 00555ea0
    SAR EAX,0x3                         ; 00555ea2
    XOR EDX,EDX                         ; 00555ea5
    MOV dword ptr [EDI + 0x264a5fc],EAX ; 00555ea7 | DAT_0264a62c
    MOV EAX,dword ptr [ESP + 0x198]     ; 00555ead
    MOV dword ptr [EDI + 0x264a604],EDX ; 00555eb4 | DAT_0264a634
    MOV dword ptr [EDI + 0x264a600],EAX ; 00555eba | DAT_0264a630
    MOV EAX,EBX                         ; 00555ec0
    ADD ESP,0x1b8                       ; 00555ec2
    POP EBP                             ; 00555ec8
    POP EDI                             ; 00555ec9
    POP ESI                             ; 00555eca
    POP EBX                             ; 00555ecb
    RET                                 ; 00555ecc
    XOR EAX,EAX                         ; 00555ecd
        ;   Label: LAB_00555ecd
    ADD ESP,0x1b8                       ; 00555ecf
    POP EBP                             ; 00555ed5
    POP EDI                             ; 00555ed6
    POP ESI                             ; 00555ed7
    POP EBX                             ; 00555ed8
    RET                                 ; 00555ed9
    OR byte ptr [ESP + 0x194],0x10      ; 00555eda
        ;   Label: LAB_00555eda
    JMP 0x00555d99                      ; 00555ee2
        ;   XREF to: 00555d99 (UNCONDITIONAL_JUMP)  ; LAB_00555d99
    MOV word ptr [ESP + 0x1a4],0x1      ; 00555ee7
        ;   Label: LAB_00555ee7
    MOV AX,word ptr [ESI + 0x108]       ; 00555ef1
    MOV word ptr [ESP + 0x1a6],AX       ; 00555ef8
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00555f00
    XOR EDX,EDX                         ; 00555f06
    MOV dword ptr [ESP + 0x1a8],EAX     ; 00555f08
    MOV DX,word ptr [ESP + 0x1a6]       ; 00555f0f
    MOV EBP,dword ptr [ESI + 0x104]     ; 00555f17
    IMUL EDX,EBP                        ; 00555f1d
    MOV EAX,EDX                         ; 00555f20
    SAR EDX,0x1f                        ; 00555f22
    SHL EDX,0x3                         ; 00555f25
    SBB EAX,EDX                         ; 00555f28
    SAR EAX,0x3                         ; 00555f2a
    XOR EDX,EDX                         ; 00555f2d
    MOV word ptr [ESP + 0x1b0],AX       ; 00555f2f
    MOV DX,AX                           ; 00555f37
    MOV EAX,dword ptr [ESI + 0x10c]     ; 00555f3a
    IMUL EAX,EDX                        ; 00555f40
    MOV dword ptr [ESP + 0x1ac],EAX     ; 00555f43
    MOV AX,word ptr [ESI + 0x104]       ; 00555f4a
    MOV word ptr [ESP + 0x1b2],AX       ; 00555f51
    MOV EAX,dword ptr [ESI + 0x110]     ; 00555f59
    IMUL EAX,EDX                        ; 00555f5f
    JMP 0x00555e32                      ; 00555f62
        ;   XREF to: 00555e32 (UNCONDITIONAL_JUMP)  ; LAB_00555e32
    PUSH EAX                            ; 00555f67
        ;   Label: LAB_00555f67
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555f68
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555f6d
    PUSH EAX                            ; 00555f70
    PUSH 0x5e9bfd                       ; 00555f71 | s_Create_secondary_buffer_005e9bfc+1
    PUSH 0x5e9a3b                       ; 00555f76 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555f7b
    PUSH EAX                            ; 00555f7f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00555f80
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00555f85
    MOV EAX,ESP                         ; 00555f88
    PUSH EAX                            ; 00555f8a
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00555f8b
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00555f90
    PUSH 0x5e9c15                       ; 00555f93 | = "DirectSoundDevice::allocateSample - a..."
        ;   Label: LAB_00555f93
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00555f98
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00555f9d
    XOR EAX,EAX                         ; 00555fa0
    ADD ESP,0x1b8                       ; 00555fa2
    POP EBP                             ; 00555fa8
    POP EDI                             ; 00555fa9
    POP ESI                             ; 00555faa
    POP EBX                             ; 00555fab
    RET                                 ; 00555fac

