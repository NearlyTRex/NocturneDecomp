; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00424e30(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7936
;
; Called Functions:
;   FUN_00408b80
;   FUN_00556be0
;   FUN_0057b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424e30
        ;   Label: FUN_00424e30
    PUSH ESI                            ; 00424e31
    PUSH EDI                            ; 00424e32
    PUSH EBP                            ; 00424e33
    SUB ESP,0x124                       ; 00424e34
    MOV EBX,dword ptr [ESP + 0x138]     ; 00424e3a
    PUSH dword ptr [ESP + 0x13c]        ; 00424e41
    PUSH EBX                            ; 00424e48
    CALL FUN_0057b160                   ; 00424e49
        ;   XREF to: 0057b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b160()
    ADD ESP,0x8                         ; 00424e4e
    XOR EAX,EAX                         ; 00424e51
    MOV dword ptr [ESP + 0x120],0x3f000000 ; 00424e53
        ;   Label: LAB_00424e53
    IMUL ESI,EAX,0x2a4                  ; 00424e5e
    ADD ESI,EBX                         ; 00424e64
    FLD float ptr [ESP + 0x120]         ; 00424e66
        ;   Label: LAB_00424e66
    FLD ST0                             ; 00424e6d
    FMUL float ptr [EBX + 0x1ac8]       ; 00424e6f
    FLD ST1                             ; 00424e75
    FMUL float ptr [0x005b7936]         ; 00424e77 | DAT_005b7936
    FXCH                                ; 00424e7d
    FSTP float ptr [ESI + 0x700]        ; 00424e7f
    FMUL float ptr [EBX + 0x1ac8]       ; 00424e85
    FSTP float ptr [ESI + 0x704]        ; 00424e8b
    FMUL float ptr [EBX + 0x1ac8]       ; 00424e91
    ADD ESI,0x2a4                       ; 00424e97
    INC EAX                             ; 00424e9d
    FSTP float ptr [ESI + 0x464]        ; 00424e9e
    CMP EAX,0x8                         ; 00424ea4
    JGE 0x00424ee1                      ; 00424ea7
        ;   XREF to: 00424ee1 (CONDITIONAL_JUMP)  ; LAB_00424ee1
    CMP EAX,0x1                         ; 00424ea9
    JNZ 0x00424ebb                      ; 00424eac
        ;   XREF to: 00424ebb (CONDITIONAL_JUMP)  ; LAB_00424ebb
    MOV dword ptr [ESP + 0x120],0x3f266666 ; 00424eae
        ;   Label: LAB_00424eae
    JMP 0x00424e66                      ; 00424eb9
        ;   XREF to: 00424e66 (UNCONDITIONAL_JUMP)  ; LAB_00424e66
    CMP EAX,0x3                         ; 00424ebb
        ;   Label: LAB_00424ebb
    JZ 0x00424eae                       ; 00424ebe
        ;   XREF to: 00424eae (CONDITIONAL_JUMP)  ; LAB_00424eae
    CMP EAX,0x2                         ; 00424ec0
    JNZ 0x00424ed2                      ; 00424ec3
        ;   XREF to: 00424ed2 (CONDITIONAL_JUMP)  ; LAB_00424ed2
    MOV dword ptr [ESP + 0x120],0x3f4ccccd ; 00424ec5
        ;   Label: LAB_00424ec5
    JMP 0x00424e66                      ; 00424ed0
        ;   XREF to: 00424e66 (UNCONDITIONAL_JUMP)  ; LAB_00424e66
    CMP EAX,0x5                         ; 00424ed2
        ;   Label: LAB_00424ed2
    JZ 0x00424ec5                       ; 00424ed5
        ;   XREF to: 00424ec5 (CONDITIONAL_JUMP)  ; LAB_00424ec5
    CMP EAX,0x6                         ; 00424ed7
    JZ 0x00424ec5                       ; 00424eda
        ;   XREF to: 00424ec5 (CONDITIONAL_JUMP)  ; LAB_00424ec5
    JMP 0x00424e53                      ; 00424edc
        ;   XREF to: 00424e53 (UNCONDITIONAL_JUMP)  ; LAB_00424e53
    MOV EAX,0xbe800000                  ; 00424ee1
        ;   Label: LAB_00424ee1
    MOV EDI,0xbecccccd                  ; 00424ee6
    MOV dword ptr [ESP + 0x2c],EAX      ; 00424eeb
    LEA EAX,[ESP + 0x24]                ; 00424eef
    MOV EBP,0x3f0ccccd                  ; 00424ef3
    PUSH EAX                            ; 00424ef8
    LEA ESI,[ESP + 0xe8]                ; 00424ef9
    MOV dword ptr [ESP + 0x28],EDI      ; 00424f00
    PUSH EBX                            ; 00424f04
    MOV dword ptr [ESP + 0x30],EBP      ; 00424f05
    LEA EDI,[ESP + 0x14]                ; 00424f09
    CALL FUN_00408b80                   ; 00424f0d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xec]                ; 00424f12
    ADD ESP,0x8                         ; 00424f19
    MOVSD ES:EDI,ESI                    ; 00424f1c
    MOVSD ES:EDI,ESI                    ; 00424f1d
    MOVSD ES:EDI,ESI                    ; 00424f1e
    LEA ESI,[EBX + 0x5c8]               ; 00424f1f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00424f25
    MOV dword ptr [ESI],EAX             ; 00424f29
    MOV EAX,dword ptr [ESP + 0x10]      ; 00424f2b
    MOV EDX,0xbe19999a                  ; 00424f2f
    MOV dword ptr [ESI + 0x4],EAX       ; 00424f34
    MOV EAX,dword ptr [ESP + 0x14]      ; 00424f37
    LEA EDI,[ESP + 0xd8]                ; 00424f3b
    MOV dword ptr [ESI + 0x8],EAX       ; 00424f42
    LEA EAX,[ESP + 0x48]                ; 00424f45
    MOV ESI,0xbe800000                  ; 00424f49
    PUSH EAX                            ; 00424f4e
    MOV dword ptr [ESP + 0x4c],EDX      ; 00424f4f
    MOV dword ptr [ESP + 0x54],ESI      ; 00424f53
    PUSH EBX                            ; 00424f57
    LEA ESI,[ESP + 0x110]               ; 00424f58
    MOV dword ptr [ESP + 0x54],EBP      ; 00424f5f
    CALL FUN_00408b80                   ; 00424f63
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x110]               ; 00424f68
    ADD ESP,0x8                         ; 00424f6f
    MOVSD ES:EDI,ESI                    ; 00424f72
    MOVSD ES:EDI,ESI                    ; 00424f73
    MOVSD ES:EDI,ESI                    ; 00424f74
    LEA ESI,[EBX + 0x86c]               ; 00424f75
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00424f7b
    MOV dword ptr [ESI],EAX             ; 00424f82
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00424f84
    MOV dword ptr [ESI + 0x4],EAX       ; 00424f8b
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00424f8e
    MOV dword ptr [ESI + 0x8],EAX       ; 00424f95
    MOV dword ptr [ESP + 0x8c],0xbe800000 ; 00424f98
    LEA EAX,[ESP + 0x84]                ; 00424fa3
    MOV EDI,0x3dcccccd                  ; 00424faa
    PUSH EAX                            ; 00424faf
    LEA ESI,[ESP + 0xb8]                ; 00424fb0
    MOV dword ptr [ESP + 0x88],EDI      ; 00424fb7
    PUSH EBX                            ; 00424fbe
    MOV dword ptr [ESP + 0x90],EBP      ; 00424fbf
    LEA EDI,[ESP + 0xc8]                ; 00424fc6
    CALL FUN_00408b80                   ; 00424fcd
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xbc]                ; 00424fd2
    ADD ESP,0x8                         ; 00424fd9
    MOVSD ES:EDI,ESI                    ; 00424fdc
    MOVSD ES:EDI,ESI                    ; 00424fdd
    MOVSD ES:EDI,ESI                    ; 00424fde
    LEA ESI,[EBX + 0xb10]               ; 00424fdf
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00424fe5
    MOV dword ptr [ESI],EAX             ; 00424fec
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00424fee
    MOV EDX,0x3eb33333                  ; 00424ff5
    MOV dword ptr [ESI + 0x4],EAX       ; 00424ffa
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00424ffd
    LEA EDI,[ESP + 0x60]                ; 00425004
    MOV dword ptr [ESI + 0x8],EAX       ; 00425008
    LEA EAX,[ESP + 0xfc]                ; 0042500b
    MOV ESI,0xbe800000                  ; 00425012
    PUSH EAX                            ; 00425017
    MOV dword ptr [ESP + 0x100],EDX     ; 00425018
    MOV dword ptr [ESP + 0x108],ESI     ; 0042501f
    PUSH EBX                            ; 00425026
    LEA ESI,[ESP + 0x80]                ; 00425027
    MOV dword ptr [ESP + 0x108],EBP     ; 0042502e
    CALL FUN_00408b80                   ; 00425035
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x80]                ; 0042503a
    ADD ESP,0x8                         ; 00425041
    MOVSD ES:EDI,ESI                    ; 00425044
    MOVSD ES:EDI,ESI                    ; 00425045
    MOVSD ES:EDI,ESI                    ; 00425046
    LEA ESI,[EBX + 0xdb4]               ; 00425047
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042504d
    MOV dword ptr [ESI],EAX             ; 00425051
    MOV EAX,dword ptr [ESP + 0x64]      ; 00425053
    MOV dword ptr [ESI + 0x4],EAX       ; 00425057
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042505a
    MOV dword ptr [ESI + 0x8],EAX       ; 0042505e
    MOV dword ptr [ESP + 0x11c],0xbe800000 ; 00425061
    LEA EAX,[ESP + 0x114]               ; 0042506c
    MOV EDI,0x3f19999a                  ; 00425073
    PUSH EAX                            ; 00425078
    LEA ESI,[ESP + 0xa0]                ; 00425079
    MOV dword ptr [ESP + 0x118],EDI     ; 00425080
    PUSH EBX                            ; 00425087
    MOV dword ptr [ESP + 0x120],EBP     ; 00425088
    LEA EDI,[ESP + 0x8]                 ; 0042508f
    CALL FUN_00408b80                   ; 00425093
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xa4]                ; 00425098
    ADD ESP,0x8                         ; 0042509f
    MOVSD ES:EDI,ESI                    ; 004250a2
    MOVSD ES:EDI,ESI                    ; 004250a3
    MOVSD ES:EDI,ESI                    ; 004250a4
    LEA ESI,[EBX + 0x1058]              ; 004250a5
    MOV EAX,dword ptr [ESP]             ; 004250ab
    MOV dword ptr [ESI],EAX             ; 004250ae
    MOV EAX,dword ptr [ESP + 0x4]       ; 004250b0
    MOV dword ptr [ESI + 0x4],EAX       ; 004250b4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004250b7
    MOV dword ptr [ESI + 0x8],EAX       ; 004250bb
    MOV EDX,0x3dcccccd                  ; 004250be
    MOV ECX,0x3f4ccccd                  ; 004250c3
    MOV ESI,0xbe800000                  ; 004250c8
    LEA EAX,[ESP + 0x18]                ; 004250cd
    LEA EDI,[ESP + 0x6c]                ; 004250d1
    PUSH EAX                            ; 004250d5
    MOV dword ptr [ESP + 0x1c],EDX      ; 004250d6
    MOV dword ptr [ESP + 0x24],ESI      ; 004250da
    PUSH EBX                            ; 004250de
    LEA ESI,[ESP + 0xf8]                ; 004250df
    MOV dword ptr [ESP + 0x24],ECX      ; 004250e6
    CALL FUN_00408b80                   ; 004250ea
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xf8]                ; 004250ef
    ADD ESP,0x8                         ; 004250f6
    MOVSD ES:EDI,ESI                    ; 004250f9
    MOVSD ES:EDI,ESI                    ; 004250fa
    MOVSD ES:EDI,ESI                    ; 004250fb
    LEA ESI,[EBX + 0x12fc]              ; 004250fc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00425102
    MOV dword ptr [ESI],EAX             ; 00425106
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425108
    MOV dword ptr [ESI + 0x4],EAX       ; 0042510c
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042510f
    MOV dword ptr [ESI + 0x8],EAX       ; 00425113
    MOV EAX,0xbe800000                  ; 00425116
    MOV EBP,0x3f866666                  ; 0042511b
    MOV dword ptr [ESP + 0x44],EAX      ; 00425120
    LEA EAX,[ESP + 0x3c]                ; 00425124
    MOV EDI,0x3dcccccd                  ; 00425128
    PUSH EAX                            ; 0042512d
    LEA ESI,[ESP + 0x58]                ; 0042512e
    MOV dword ptr [ESP + 0x40],EDI      ; 00425132
    PUSH EBX                            ; 00425136
    MOV dword ptr [ESP + 0x48],EBP      ; 00425137
    LEA EDI,[ESP + 0x98]                ; 0042513b
    CALL FUN_00408b80                   ; 00425142
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x5c]                ; 00425147
    ADD ESP,0x8                         ; 0042514b
    MOVSD ES:EDI,ESI                    ; 0042514e
    MOVSD ES:EDI,ESI                    ; 0042514f
    MOVSD ES:EDI,ESI                    ; 00425150
    LEA ESI,[EBX + 0x15a0]              ; 00425151
    MOV EAX,dword ptr [ESP + 0x90]      ; 00425157
    MOV EDX,0x3dcccccd                  ; 0042515e
    MOV dword ptr [ESI],EAX             ; 00425163
    MOV EAX,dword ptr [ESP + 0x94]      ; 00425165
    MOV ECX,0x3e99999a                  ; 0042516c
    MOV dword ptr [ESI + 0x4],EAX       ; 00425171
    MOV EAX,dword ptr [ESP + 0x98]      ; 00425174
    LEA EDI,[ESP + 0xcc]                ; 0042517b
    MOV dword ptr [ESI + 0x8],EAX       ; 00425182
    LEA EAX,[ESP + 0x30]                ; 00425185
    MOV ESI,0xbe800000                  ; 00425189
    PUSH EAX                            ; 0042518e
    MOV dword ptr [ESP + 0x34],EDX      ; 0042518f
    MOV dword ptr [ESP + 0x3c],ESI      ; 00425193
    PUSH EBX                            ; 00425197
    LEA ESI,[ESP + 0xb0]                ; 00425198
    MOV dword ptr [ESP + 0x3c],ECX      ; 0042519f
    CALL FUN_00408b80                   ; 004251a3
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xb0]                ; 004251a8
    ADD ESP,0x8                         ; 004251af
    MOVSD ES:EDI,ESI                    ; 004251b2
    MOVSD ES:EDI,ESI                    ; 004251b3
    MOVSD ES:EDI,ESI                    ; 004251b4
    LEA ESI,[EBX + 0x1844]              ; 004251b5
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004251bb
    MOV dword ptr [ESI],EAX             ; 004251c2
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004251c4
    MOV dword ptr [ESI + 0x4],EAX       ; 004251cb
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004251ce
    LEA EDI,[EBX + 0x5a8]               ; 004251d5
    MOV dword ptr [ESI + 0x8],EAX       ; 004251db
    MOV ESI,EDI                         ; 004251de
    ADD EDI,0x1520                      ; 004251e0
    PUSH dword ptr [ESP + 0x13c]        ; 004251e6
        ;   Label: LAB_004251e6
    MOV EAX,dword ptr [ESI + 0x154]     ; 004251ed
    PUSH ESI                            ; 004251f3
    CALL dword ptr [EAX + 0xc]          ; 004251f4
    ADD ESI,0x2a4                       ; 004251f7
    ADD ESP,0x8                         ; 004251fd
    CMP ESI,EDI                         ; 00425200
    JNZ 0x004251e6                      ; 00425202
        ;   XREF to: 004251e6 (CONDITIONAL_JUMP)  ; LAB_004251e6
    TEST dword ptr [EBX + 0x594],0x7fffffff ; 00425204
    JZ 0x0042523c                       ; 0042520e
        ;   XREF to: 0042523c (CONDITIONAL_JUMP)  ; LAB_0042523c
    FLD float ptr [EBX + 0x594]         ; 00425210
    FSUB float ptr [ESP + 0x13c]        ; 00425216
    FLDZ                                ; 0042521d
    FXCH                                ; 0042521f
    FSTP float ptr [EBX + 0x594]        ; 00425221
    FCOMP float ptr [EBX + 0x594]       ; 00425227
    FNSTSW AX                           ; 0042522d
    SAHF                                ; 0042522f
    JBE 0x0042523c                      ; 00425230
        ;   XREF to: 0042523c (CONDITIONAL_JUMP)  ; LAB_0042523c
    MOV dword ptr [EBX + 0x594],0x0     ; 00425232
    MOV EDX,dword ptr [EBX + 0x59c]     ; 0042523c
        ;   Label: LAB_0042523c
    TEST EDX,EDX                        ; 00425242
    JZ 0x004252a5                       ; 00425244
        ;   XREF to: 004252a5 (CONDITIONAL_JUMP)  ; LAB_004252a5
    FLD float ptr [ESP + 0x13c]         ; 00425246
    FMUL float ptr [0x005b7936]         ; 0042524d | DAT_005b7936
    FADD float ptr [EBX + 0x1ac8]       ; 00425253
    FSTP float ptr [EBX + 0x1ac8]       ; 00425259
    CMP dword ptr [EBX + 0x1ac8],0x3f800000 ; 0042525f
    JG 0x00425299                       ; 00425269
        ;   XREF to: 00425299 (CONDITIONAL_JUMP)  ; LAB_00425299
    FLDZ                                ; 0042526b
        ;   Label: LAB_0042526b
    FCOMP float ptr [EBX + 0x1ac8]      ; 0042526d
    FNSTSW AX                           ; 00425273
    SAHF                                ; 00425275
    JNC 0x004252cd                      ; 00425276
        ;   XREF to: 004252cd (CONDITIONAL_JUMP)  ; LAB_004252cd
    MOV EAX,dword ptr [EBX + 0x59c]     ; 00425278
        ;   Label: LAB_00425278
    MOV dword ptr [EBX + 0x59c],0x0     ; 0042527e
    MOV dword ptr [EBX + 0x5a0],EAX     ; 00425288
    ADD ESP,0x124                       ; 0042528e
    POP EBP                             ; 00425294
    POP EDI                             ; 00425295
    POP ESI                             ; 00425296
    POP EBX                             ; 00425297
    RET                                 ; 00425298
    MOV dword ptr [EBX + 0x1ac8],0x3f800000 ; 00425299
        ;   Label: LAB_00425299
    JMP 0x00425278                      ; 004252a3
        ;   XREF to: 00425278 (UNCONDITIONAL_JUMP)  ; LAB_00425278
    FLD float ptr [EBX + 0x1ac8]        ; 004252a5
        ;   Label: LAB_004252a5
    FSUB float ptr [ESP + 0x13c]        ; 004252ab
    FLDZ                                ; 004252b2
    FXCH                                ; 004252b4
    FSTP float ptr [EBX + 0x1ac8]       ; 004252b6
    FCOMP float ptr [EBX + 0x1ac8]      ; 004252bc
    FNSTSW AX                           ; 004252c2
    SAHF                                ; 004252c4
    JBE 0x0042526b                      ; 004252c5
        ;   XREF to: 0042526b (CONDITIONAL_JUMP)  ; LAB_0042526b
    MOV dword ptr [EBX + 0x1ac8],EDX    ; 004252c7
    MOV ESI,dword ptr [EBX + 0x5a4]     ; 004252cd
        ;   Label: LAB_004252cd
    PUSH ESI                            ; 004252d3
    CALL FUN_00556be0                   ; 004252d4
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556be0()
    ADD ESP,0x4                         ; 004252d9
    MOV dword ptr [EBX + 0x5a4],0x0     ; 004252dc
    JMP 0x00425278                      ; 004252e6
        ;   XREF to: 00425278 (UNCONDITIONAL_JUMP)  ; LAB_00425278

