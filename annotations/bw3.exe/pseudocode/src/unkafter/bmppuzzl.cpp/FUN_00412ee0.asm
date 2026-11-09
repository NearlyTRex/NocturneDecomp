; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_bmppuzzl_cpp_FUN_00412ee0(void *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005b67ca
;   undefined4 DAT_005b67cd
;   undefined4 DAT_005b67d0
;   TerminatedCString s_AR_d_005b67d3
;   undefined1 DAT_005b67d9
;   undefined1 DAT_005b67da
;   undefined1 DAT_005b67db
;   undefined1 DAT_005b67dc
;   undefined4 DAT_005b67de
;   undefined4 DAT_005b67e1
;   undefined1 DAT_005b67e4
;   undefined1 DAT_005b67e5
;   undefined1 DAT_005b67e6
;   TerminatedCString s_s_1_wav_005b67e7
;   undefined1 DAT_005b67f0
;   ... and 4 more
;
; Called Functions:
;   core_sound.cpp_CSound_playSound_FUN_005609b0
;   crt_unknown.c_FUN_005a28c0
;   sound_sndmain.cpp_FUN_00556240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412ee0
        ;   Label: unkafter_bmppuzzl.cpp_FUN_00412ee0
    PUSH ESI                            ; 00412ee1
    PUSH EDI                            ; 00412ee2
    PUSH EBP                            ; 00412ee3
    MOV EBP,ESP                         ; 00412ee4
    SUB ESP,0x53c                       ; 00412ee6
    AND ESP,0xfffffff8                  ; 00412eec
    MOV EBX,dword ptr [EBP + 0x14]      ; 00412eef
    MOV EDX,dword ptr [EBP + 0x20]      ; 00412ef2
    PUSH EDX                            ; 00412ef5
    PUSH 0x5b67ca                       ; 00412ef6 | DAT_005b67ca
    LEA EAX,[ESP + 0x530]               ; 00412efb
    PUSH EAX                            ; 00412f02
    CALL crt_unknown.c_FUN_005a28c0     ; 00412f03
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00412f08
    MOV ECX,dword ptr [EBP + 0x24]      ; 00412f0b
    PUSH ECX                            ; 00412f0e
    PUSH 0x5b67cd                       ; 00412f0f | DAT_005b67cd
    LEA EAX,[ESP + 0x50c]               ; 00412f14
    PUSH EAX                            ; 00412f1b
    CALL crt_unknown.c_FUN_005a28c0     ; 00412f1c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00412f21
    MOV ESI,dword ptr [EBP + 0x28]      ; 00412f24
    PUSH ESI                            ; 00412f27
    PUSH 0x5b67d0                       ; 00412f28 | DAT_005b67d0
    LEA EAX,[ESP + 0x518]               ; 00412f2d
    PUSH EAX                            ; 00412f34
    CALL crt_unknown.c_FUN_005a28c0     ; 00412f35
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00412f3a
    MOV EDI,dword ptr [EBX + 0xc04]     ; 00412f3d
    PUSH EDI                            ; 00412f43
    PUSH 0x5b67d3                       ; 00412f44 | = "AR%d_"
    LEA EAX,[ESP + 0x524]               ; 00412f49
    PUSH EAX                            ; 00412f50
    CALL crt_unknown.c_FUN_005a28c0     ; 00412f51
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00412f56
    LEA ESI,[ESP + 0x51c]               ; 00412f59
    LEA EDI,[ESP + 0x304]               ; 00412f60
    PUSH EDI                            ; 00412f67
    MOV AL,byte ptr [ESI]               ; 00412f68
        ;   Label: LAB_00412f68
    MOV byte ptr [EDI],AL               ; 00412f6a
    CMP AL,0x0                          ; 00412f6c
    JZ 0x00412f80                       ; 00412f6e
        ;   XREF to: 00412f80 (CONDITIONAL_JUMP)  ; LAB_00412f80
    MOV AL,byte ptr [ESI + 0x1]         ; 00412f70
    ADD ESI,0x2                         ; 00412f73
    MOV byte ptr [EDI + 0x1],AL         ; 00412f76
    ADD EDI,0x2                         ; 00412f79
    CMP AL,0x0                          ; 00412f7c
    JNZ 0x00412f68                      ; 00412f7e
        ;   XREF to: 00412f68 (CONDITIONAL_JUMP)  ; LAB_00412f68
    POP EDI                             ; 00412f80
        ;   Label: LAB_00412f80
    LEA ESI,[ESP + 0x528]               ; 00412f81
    LEA EDI,[ESP + 0x304]               ; 00412f88
    PUSH EDI                            ; 00412f8f
    SUB ECX,ECX                         ; 00412f90
    DEC ECX                             ; 00412f92
    MOV AL,0x0                          ; 00412f93
    SCASB.REPNE ES:EDI                  ; 00412f95
    DEC EDI                             ; 00412f97
    MOV AL,byte ptr [ESI]               ; 00412f98
        ;   Label: LAB_00412f98
    MOV byte ptr [EDI],AL               ; 00412f9a
    CMP AL,0x0                          ; 00412f9c
    JZ 0x00412fb0                       ; 00412f9e
        ;   XREF to: 00412fb0 (CONDITIONAL_JUMP)  ; LAB_00412fb0
    MOV AL,byte ptr [ESI + 0x1]         ; 00412fa0
    ADD ESI,0x2                         ; 00412fa3
    MOV byte ptr [EDI + 0x1],AL         ; 00412fa6
    ADD EDI,0x2                         ; 00412fa9
    CMP AL,0x0                          ; 00412fac
    JNZ 0x00412f98                      ; 00412fae
        ;   XREF to: 00412f98 (CONDITIONAL_JUMP)  ; LAB_00412f98
    POP EDI                             ; 00412fb0
        ;   Label: LAB_00412fb0
    LEA ESI,[ESP + 0x504]               ; 00412fb1
    LEA EDI,[ESP + 0x304]               ; 00412fb8
    PUSH EDI                            ; 00412fbf
    SUB ECX,ECX                         ; 00412fc0
    DEC ECX                             ; 00412fc2
    MOV AL,0x0                          ; 00412fc3
    SCASB.REPNE ES:EDI                  ; 00412fc5
    DEC EDI                             ; 00412fc7
    MOV AL,byte ptr [ESI]               ; 00412fc8
        ;   Label: LAB_00412fc8
    MOV byte ptr [EDI],AL               ; 00412fca
    CMP AL,0x0                          ; 00412fcc
    JZ 0x00412fe0                       ; 00412fce
        ;   XREF to: 00412fe0 (CONDITIONAL_JUMP)  ; LAB_00412fe0
    MOV AL,byte ptr [ESI + 0x1]         ; 00412fd0
    ADD ESI,0x2                         ; 00412fd3
    MOV byte ptr [EDI + 0x1],AL         ; 00412fd6
    ADD EDI,0x2                         ; 00412fd9
    CMP AL,0x0                          ; 00412fdc
    JNZ 0x00412fc8                      ; 00412fde
        ;   XREF to: 00412fc8 (CONDITIONAL_JUMP)  ; LAB_00412fc8
    POP EDI                             ; 00412fe0
        ;   Label: LAB_00412fe0
    LEA ESI,[ESP + 0x510]               ; 00412fe1
    LEA EDI,[ESP + 0x304]               ; 00412fe8
    PUSH EDI                            ; 00412fef
    SUB ECX,ECX                         ; 00412ff0
    DEC ECX                             ; 00412ff2
    MOV AL,0x0                          ; 00412ff3
    SCASB.REPNE ES:EDI                  ; 00412ff5
    DEC EDI                             ; 00412ff7
    MOV AL,byte ptr [ESI]               ; 00412ff8
        ;   Label: LAB_00412ff8
    MOV byte ptr [EDI],AL               ; 00412ffa
    CMP AL,0x0                          ; 00412ffc
    JZ 0x00413010                       ; 00412ffe
        ;   XREF to: 00413010 (CONDITIONAL_JUMP)  ; LAB_00413010
    MOV AL,byte ptr [ESI + 0x1]         ; 00413000
    ADD ESI,0x2                         ; 00413003
    MOV byte ptr [EDI + 0x1],AL         ; 00413006
    ADD EDI,0x2                         ; 00413009
    CMP AL,0x0                          ; 0041300c
    JNZ 0x00412ff8                      ; 0041300e
        ;   XREF to: 00412ff8 (CONDITIONAL_JUMP)  ; LAB_00412ff8
    POP EDI                             ; 00413010
        ;   Label: LAB_00413010
    MOV ESI,0x5b67d9                    ; 00413011 | DAT_005b67d9
    LEA EDI,[ESP + 0x304]               ; 00413016
    PUSH EDI                            ; 0041301d
    SUB ECX,ECX                         ; 0041301e
    DEC ECX                             ; 00413020
    MOV AL,0x0                          ; 00413021
    SCASB.REPNE ES:EDI                  ; 00413023
    DEC EDI                             ; 00413025
    MOV AL,byte ptr [ESI]               ; 00413026 | DAT_005b67d9 | DAT_005b67db
        ;   Label: LAB_00413026
    MOV byte ptr [EDI],AL               ; 00413028
    CMP AL,0x0                          ; 0041302a
    JZ 0x0041303e                       ; 0041302c
        ;   XREF to: 0041303e (CONDITIONAL_JUMP)  ; LAB_0041303e
    MOV AL,byte ptr [ESI + 0x1]         ; 0041302e | DAT_005b67da | DAT_005b67dc
    ADD ESI,0x2                         ; 00413031
    MOV byte ptr [EDI + 0x1],AL         ; 00413034
    ADD EDI,0x2                         ; 00413037
    CMP AL,0x0                          ; 0041303a
    JNZ 0x00413026                      ; 0041303c
        ;   XREF to: 00413026 (CONDITIONAL_JUMP)  ; LAB_00413026
    POP EDI                             ; 0041303e
        ;   Label: LAB_0041303e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0041303f
    MOV EDX,dword ptr [EBX + 0xc14]     ; 00413042
    SUB EAX,EDX                         ; 00413048
    MOV dword ptr [ESP + 0x538],EAX     ; 0041304a
    FILD dword ptr [ESP + 0x538]        ; 00413051
    FABS                                ; 00413058
    MOV ECX,dword ptr [EBX + 0xc18]     ; 0041305a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00413060
    SUB EAX,ECX                         ; 00413063
    MOV dword ptr [ESP + 0x538],EAX     ; 00413065
    FILD dword ptr [ESP + 0x538]        ; 0041306c
    FABS                                ; 00413073
    FSTP float ptr [ESP]                ; 00413075
    SUB ESP,0x8                         ; 00413078
    FSTP double ptr [ESP]               ; 0041307b
    PUSH 0x5b67de                       ; 0041307e | DAT_005b67de
    LEA EAX,[ESP + 0x210]               ; 00413083
    PUSH EAX                            ; 0041308a
    CALL crt_unknown.c_FUN_005a28c0     ; 0041308b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00413090
    FLD float ptr [ESP]                 ; 00413093
    SUB ESP,0x8                         ; 00413096
    FSTP double ptr [ESP]               ; 00413099
    PUSH 0x5b67e1                       ; 0041309c | DAT_005b67e1
    LEA EAX,[ESP + 0x110]               ; 004130a1
    PUSH EAX                            ; 004130a8
    CALL crt_unknown.c_FUN_005a28c0     ; 004130a9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 004130ae
    MOV ESI,0x5b67e4                    ; 004130b1 | DAT_005b67e4
    LEA EDI,[ESP + 0x404]               ; 004130b6
    PUSH EDI                            ; 004130bd
    MOV AL,byte ptr [ESI]               ; 004130be | DAT_005b67e4 | DAT_005b67e6
        ;   Label: LAB_004130be
    MOV byte ptr [EDI],AL               ; 004130c0
    CMP AL,0x0                          ; 004130c2
    JZ 0x004130d6                       ; 004130c4
        ;   XREF to: 004130d6 (CONDITIONAL_JUMP)  ; LAB_004130d6
    MOV AL,byte ptr [ESI + 0x1]         ; 004130c6 | DAT_005b67e5 | = "1.wav @ "
    ADD ESI,0x2                         ; 004130c9
    MOV byte ptr [EDI + 0x1],AL         ; 004130cc
    ADD EDI,0x2                         ; 004130cf
    CMP AL,0x0                          ; 004130d2
    JNZ 0x004130be                      ; 004130d4
        ;   XREF to: 004130be (CONDITIONAL_JUMP)  ; LAB_004130be
    POP EDI                             ; 004130d6
        ;   Label: LAB_004130d6
    LEA ESI,[ESP + 0x204]               ; 004130d7
    LEA EDI,[ESP + 0x404]               ; 004130de
    PUSH EDI                            ; 004130e5
    SUB ECX,ECX                         ; 004130e6
    DEC ECX                             ; 004130e8
    MOV AL,0x0                          ; 004130e9
    SCASB.REPNE ES:EDI                  ; 004130eb
    DEC EDI                             ; 004130ed
    MOV AL,byte ptr [ESI]               ; 004130ee
        ;   Label: LAB_004130ee
    MOV byte ptr [EDI],AL               ; 004130f0
    CMP AL,0x0                          ; 004130f2
    JZ 0x00413106                       ; 004130f4
        ;   XREF to: 00413106 (CONDITIONAL_JUMP)  ; LAB_00413106
    MOV AL,byte ptr [ESI + 0x1]         ; 004130f6
    ADD ESI,0x2                         ; 004130f9
    MOV byte ptr [EDI + 0x1],AL         ; 004130fc
    ADD EDI,0x2                         ; 004130ff
    CMP AL,0x0                          ; 00413102
    JNZ 0x004130ee                      ; 00413104
        ;   XREF to: 004130ee (CONDITIONAL_JUMP)  ; LAB_004130ee
    POP EDI                             ; 00413106
        ;   Label: LAB_00413106
    MOV ESI,0x5b67f0                    ; 00413107 | DAT_005b67f0
    LEA EDI,[ESP + 0x4]                 ; 0041310c
    PUSH EDI                            ; 00413110
    MOV AL,byte ptr [ESI]               ; 00413111 | DAT_005b67f0 | DAT_005b67f2
        ;   Label: LAB_00413111
    MOV byte ptr [EDI],AL               ; 00413113
    CMP AL,0x0                          ; 00413115
    JZ 0x00413129                       ; 00413117
        ;   XREF to: 00413129 (CONDITIONAL_JUMP)  ; LAB_00413129
    MOV AL,byte ptr [ESI + 0x1]         ; 00413119 | DAT_005b67f1 | = "1.wav @ "
    ADD ESI,0x2                         ; 0041311c
    MOV byte ptr [EDI + 0x1],AL         ; 0041311f
    ADD EDI,0x2                         ; 00413122
    CMP AL,0x0                          ; 00413125
    JNZ 0x00413111                      ; 00413127
        ;   XREF to: 00413111 (CONDITIONAL_JUMP)  ; LAB_00413111
    POP EDI                             ; 00413129
        ;   Label: LAB_00413129
    LEA ESI,[ESP + 0x104]               ; 0041312a
    LEA EDI,[ESP + 0x4]                 ; 00413131
    PUSH EDI                            ; 00413135
    SUB ECX,ECX                         ; 00413136
    DEC ECX                             ; 00413138
    MOV AL,0x0                          ; 00413139
    SCASB.REPNE ES:EDI                  ; 0041313b
    DEC EDI                             ; 0041313d
    MOV AL,byte ptr [ESI]               ; 0041313e
        ;   Label: LAB_0041313e
    MOV byte ptr [EDI],AL               ; 00413140
    CMP AL,0x0                          ; 00413142
    JZ 0x00413156                       ; 00413144
        ;   XREF to: 00413156 (CONDITIONAL_JUMP)  ; LAB_00413156
    MOV AL,byte ptr [ESI + 0x1]         ; 00413146
    ADD ESI,0x2                         ; 00413149
    MOV byte ptr [EDI + 0x1],AL         ; 0041314c
    ADD EDI,0x2                         ; 0041314f
    CMP AL,0x0                          ; 00413152
    JNZ 0x0041313e                      ; 00413154
        ;   XREF to: 0041313e (CONDITIONAL_JUMP)  ; LAB_0041313e
    POP EDI                             ; 00413156
        ;   Label: LAB_00413156
    LEA EAX,[ESP + 0x404]               ; 00413157
    PUSH EAX                            ; 0041315e
    PUSH EBX                            ; 0041315f
    MOV ESI,dword ptr [0x006045f8]      ; 00413160 | DAT_006045f8
    PUSH ESI                            ; 00413166
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 00413167
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 0041316c
    MOV dword ptr [EBX + 0xc0c],EAX     ; 0041316f
    LEA EAX,[ESP + 0x4]                 ; 00413175
    PUSH EAX                            ; 00413179
    PUSH EBX                            ; 0041317a
    MOV EDI,dword ptr [0x006045f8]      ; 0041317b | DAT_006045f8
    PUSH EDI                            ; 00413181
    CALL core_sound.cpp_CSound_playSound_FUN_005609b0 ; 00413182
        ;   XREF to: 005609b0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_005609b0(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 00413187
    MOV dword ptr [EBX + 0xc10],EAX     ; 0041318a
    LEA EAX,[ESP + 0x304]               ; 00413190
    PUSH EAX                            ; 00413197
    CALL sound_sndmain.cpp_FUN_00556240 ; 00413198
        ;   XREF to: 00556240 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556240()
    ADD ESP,0x4                         ; 0041319d
    MOV dword ptr [EBX + 0xc08],EAX     ; 004131a0
    MOV ESP,EBP                         ; 004131a6
    POP EBP                             ; 004131a8
    POP EDI                             ; 004131a9
    POP ESI                             ; 004131aa
    POP EBX                             ; 004131ab
    RET                                 ; 004131ac

