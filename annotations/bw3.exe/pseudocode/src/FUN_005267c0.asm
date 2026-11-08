; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005267c0(int param_1,int param_2,int param_3,float *param_4)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005267a4 = 00526b44
;   undefined4 DAT_005cd98f
;   undefined4 DAT_005cd997
;   undefined4 DAT_005cd99f
;   undefined4 DAT_005cd9a7
;   undefined4 DAT_00600530
;   undefined4 DAT_01d82098
;
; Called Functions:
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005267c0
        ;   Label: FUN_005267c0
    PUSH ESI                            ; 005267c1
    PUSH EDI                            ; 005267c2
    PUSH EBP                            ; 005267c3
    MOV EBP,ESP                         ; 005267c4
    SUB ESP,0x144                       ; 005267c6
    AND ESP,0xfffffff8                  ; 005267cc
    MOV EBX,dword ptr [EBP + 0x18]      ; 005267cf
    MOV EAX,[0x00600530]                ; 005267d2 | DAT_00600530
    XOR EDI,EDI                         ; 005267d7
    XOR ESI,ESI                         ; 005267d9
    CMP ESI,dword ptr [EAX + 0x1018]    ; 005267db | DAT_01d82098
        ;   Label: LAB_005267db
    JGE 0x00526cbb                      ; 005267e1
        ;   XREF to: 00526cbb (CONDITIONAL_JUMP)  ; LAB_00526cbb
    CMP EBX,dword ptr [EDI + EAX*0x1 + 0x101c] ; 005267e7
    JZ 0x005267f6                       ; 005267ee
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    INC ESI                             ; 005267f0
    ADD EDI,0x4                         ; 005267f1
    JMP 0x005267db                      ; 005267f4
        ;   XREF to: 005267db (UNCONDITIONAL_JUMP)  ; LAB_005267db
    XOR ESI,ESI                         ; 005267f6
        ;   Label: default
    MOV EAX,ESI                         ; 005267f8
    MOV ESP,EBP                         ; 005267fa
    POP EBP                             ; 005267fc
    POP EDI                             ; 005267fd
    POP ESI                             ; 005267fe
    POP EBX                             ; 005267ff
    RET                                 ; 00526800
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526801
        ;   Label: caseD_2
    MOV EDX,dword ptr [EAX + 0x2628]    ; 00526804
    TEST EDX,EDX                        ; 0052680a
    JNZ 0x005267f6                      ; 0052680c
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    MOV ESI,0x40400000                  ; 0052680e
    MOV EDI,0x40000000                  ; 00526813
    LEA EAX,[ESP + 0x9c]                ; 00526818
    MOV dword ptr [ESP + 0x9c],EDX      ; 0052681f
    MOV dword ptr [ESP + 0xa0],ESI      ; 00526826
    LEA ESI,[ESP + 0xb4]                ; 0052682d
    MOV dword ptr [ESP + 0xa4],EDI      ; 00526834
    CMP ESI,EAX                         ; 0052683b
    JNZ 0x00526a39                      ; 0052683d
        ;   XREF to: 00526a39 (CONDITIONAL_JUMP)  ; LAB_00526a39
    XOR ESI,ESI                         ; 00526843
        ;   Label: LAB_00526843
    LEA EAX,[ESP + 0xb4]                ; 00526845
    MOV dword ptr [ESP + 0x88],ESI      ; 0052684c
    MOV dword ptr [ESP + 0x8c],ESI      ; 00526853
    MOV dword ptr [ESP + 0x84],ESI      ; 0052685a
    LEA ESI,[ESP + 0x84]                ; 00526861
    CMP EAX,ESI                         ; 00526868
    JZ 0x00526883                       ; 0052686a
        ;   XREF to: 00526883 (CONDITIONAL_JUMP)  ; LAB_00526883
    XOR EDX,EDX                         ; 0052686c
    MOV dword ptr [ESP + 0xb8],EDX      ; 0052686e
    MOV dword ptr [ESP + 0xbc],EDX      ; 00526875
    MOV dword ptr [ESP + 0xb4],EDX      ; 0052687c
    PUSH EBX                            ; 00526883
        ;   Label: LAB_00526883
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526884
    LEA ESI,[ESP + 0x1c]                ; 0052688a
    LEA EDI,[ESP + 0x4]                 ; 0052688e
    CALL dword ptr [EAX + 0x1c]         ; 00526892
    MOV ECX,0x6                         ; 00526895
    LEA ESI,[ESP + 0x1c]                ; 0052689a
    ADD ESP,0x4                         ; 0052689e
    MOVSD.REP ES:EDI,ESI                ; 005268a1
    MOV EAX,ESP                         ; 005268a3
    FLD float ptr [ESP]                 ; 005268a5
    FLD float ptr [ESP + 0x4]           ; 005268a8
    FLD float ptr [ESP + 0x8]           ; 005268ac
    LEA EDI,[ESP + 0x48]                ; 005268b0
    LEA ESI,[ESP + 0xe4]                ; 005268b4
    FXCH ST2                            ; 005268bb
    FADD float ptr [EAX + 0xc]          ; 005268bd
    FXCH                                ; 005268c0
    FADD float ptr [EAX + 0x10]         ; 005268c2
    FXCH ST2                            ; 005268c5
    FADD float ptr [EAX + 0x14]         ; 005268c7
    FXCH                                ; 005268ca
    FSTP float ptr [ESP + 0xe4]         ; 005268cc
    FXCH                                ; 005268d3
    FSTP float ptr [ESP + 0xe8]         ; 005268d5
    FSTP float ptr [ESP + 0xec]         ; 005268dc
    MOVSD ES:EDI,ESI                    ; 005268e3
    MOVSD ES:EDI,ESI                    ; 005268e4
    MOVSD ES:EDI,ESI                    ; 005268e5
    FLD float ptr [0x005cd997]          ; 005268e6 | DAT_005cd997
    FLD float ptr [ESP + 0x48]          ; 005268ec
    FMUL ST1                            ; 005268f0
    FLD float ptr [ESP + 0x4c]          ; 005268f2
    FMUL ST2                            ; 005268f6
    LEA EAX,[ESP + 0xc0]                ; 005268f8
    FLD float ptr [ESP + 0x50]          ; 005268ff
    FMULP ST3                           ; 00526903
    PUSH EAX                            ; 00526905
    LEA EDI,[ESP + 0xc4]                ; 00526906
    LEA ESI,[ESP + 0x40]                ; 0052690d
    FXCH                                ; 00526911
    FSTP float ptr [ESP + 0x40]         ; 00526913
    FSTP float ptr [ESP + 0x44]         ; 00526917
    FSTP float ptr [ESP + 0x48]         ; 0052691b
    MOVSD ES:EDI,ESI                    ; 0052691f
    MOVSD ES:EDI,ESI                    ; 00526920
    MOVSD ES:EDI,ESI                    ; 00526921
    PUSH EBX                            ; 00526922
    LEA ESI,[ESP + 0x110]               ; 00526923
    LEA EDI,[ESP + 0xd4]                ; 0052692a
    CALL FUN_00408b80                   ; 00526931
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0x110]               ; 00526936
    ADD ESP,0x8                         ; 0052693d
    LEA EAX,[ESP + 0xcc]                ; 00526940
    MOVSD ES:EDI,ESI                    ; 00526947
    MOVSD ES:EDI,ESI                    ; 00526948
    MOVSD ES:EDI,ESI                    ; 00526949
    PUSH EAX                            ; 0052694a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052694b
    PUSH EDI                            ; 0052694e
    LEA ESI,[ESP + 0x104]               ; 0052694f
    CALL FUN_00408bf0                   ; 00526956
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA EDI,[ESP + 0xf8]                ; 0052695b
    LEA ESI,[ESP + 0x104]               ; 00526962
    ADD ESP,0x8                         ; 00526969
    MOVSD ES:EDI,ESI                    ; 0052696c
    MOVSD ES:EDI,ESI                    ; 0052696d
    MOVSD ES:EDI,ESI                    ; 0052696e
    FLD float ptr [ESP + 0xf0]          ; 0052696f
    FLD float ptr [ESP + 0xf4]          ; 00526976
    FLD float ptr [ESP + 0xf8]          ; 0052697d
    LEA EDI,[ESP + 0x78]                ; 00526984
    LEA ESI,[ESP + 0x54]                ; 00526988
    FXCH ST2                            ; 0052698c
    FSUB float ptr [ESP + 0xb4]         ; 0052698e
    FXCH                                ; 00526995
    FSUB float ptr [ESP + 0xb8]         ; 00526997
    FXCH ST2                            ; 0052699e
    FSUB float ptr [ESP + 0xbc]         ; 005269a0
    FXCH                                ; 005269a7
    FSTP float ptr [ESP + 0x54]         ; 005269a9
    FXCH                                ; 005269ad
    FSTP float ptr [ESP + 0x58]         ; 005269af
    FSTP float ptr [ESP + 0x5c]         ; 005269b3
    MOVSD ES:EDI,ESI                    ; 005269b7
    MOVSD ES:EDI,ESI                    ; 005269b8
    MOVSD ES:EDI,ESI                    ; 005269b9
    FLD float ptr [ESP + 0x7c]          ; 005269ba
    FABS                                ; 005269be
    FCOMP double ptr [0x005cd99f]       ; 005269c0 | DAT_005cd99f
    FNSTSW AX                           ; 005269c6
    SAHF                                ; 005269c8
    JA 0x005267f6                       ; 005269c9
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x80]          ; 005269cf
    FMUL ST0                            ; 005269d6
    FLD float ptr [ESP + 0x78]          ; 005269d8
    FMUL ST0                            ; 005269dc
    FADDP                               ; 005269de
    FSQRT                               ; 005269e0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005269e2
    FSTP float ptr [ESP + 0x13c]        ; 005269e5
    CMP EAX,0x5                         ; 005269ec
    JZ 0x00526a07                       ; 005269ef
        ;   XREF to: 00526a07 (CONDITIONAL_JUMP)  ; LAB_00526a07
    FLD float ptr [ESP + 0x13c]         ; 005269f1
    FCOMP float ptr [0x005cd9a7]        ; 005269f8 | DAT_005cd9a7
    FNSTSW AX                           ; 005269fe
    SAHF                                ; 00526a00
    JA 0x005267f6                       ; 00526a01
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    FLDZ                                ; 00526a07
        ;   Label: LAB_00526a07
    FCOMP float ptr [ESP + 0x80]        ; 00526a09
    FNSTSW AX                           ; 00526a10
    SAHF                                ; 00526a12
    JA 0x005267f6                       ; 00526a13
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x20]      ; 00526a19
    FLD float ptr [ESP + 0x13c]         ; 00526a1c
    FCOMP float ptr [EAX]               ; 00526a23
    FNSTSW AX                           ; 00526a25
    SAHF                                ; 00526a27
    JBE 0x00526ccf                      ; 00526a28
        ;   XREF to: 00526ccf (CONDITIONAL_JUMP)  ; LAB_00526ccf
    XOR ESI,ESI                         ; 00526a2e
    MOV EAX,ESI                         ; 00526a30
    MOV ESP,EBP                         ; 00526a32
    POP EBP                             ; 00526a34
    POP EDI                             ; 00526a35
    POP ESI                             ; 00526a36
    POP EBX                             ; 00526a37
    RET                                 ; 00526a38
    MOV dword ptr [ESP + 0xb4],EDX      ; 00526a39
        ;   Label: LAB_00526a39
    MOV EDX,0x40400000                  ; 00526a40
    MOV dword ptr [ESP + 0xbc],EDI      ; 00526a45
    MOV dword ptr [ESP + 0xb8],EDX      ; 00526a4c
    JMP 0x00526843                      ; 00526a53
        ;   XREF to: 00526843 (UNCONDITIONAL_JUMP)  ; LAB_00526843
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526a58
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x2628],0x0    ; 00526a5b
    JNZ 0x005267f6                      ; 00526a62
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    TEST EBX,EBX                        ; 00526a68
    JNZ 0x00526abf                      ; 00526a6a
        ;   XREF to: 00526abf (CONDITIONAL_JUMP)  ; LAB_00526abf
    MOV EDX,0x40400000                  ; 00526a6c
        ;   Label: LAB_00526a6c
    MOV ECX,0x40000000                  ; 00526a71
    XOR EAX,EAX                         ; 00526a76
    LEA ESI,[ESP + 0xb4]                ; 00526a78
    MOV dword ptr [ESP + 0xd8],EAX      ; 00526a7f
    MOV dword ptr [ESP + 0xdc],EDX      ; 00526a86
    LEA EAX,[ESP + 0xd8]                ; 00526a8d
    MOV dword ptr [ESP + 0xe0],ECX      ; 00526a94
    CMP ESI,EAX                         ; 00526a9b
    JZ 0x00526843                       ; 00526a9d
        ;   XREF to: 00526843 (CONDITIONAL_JUMP)  ; LAB_00526843
    MOV dword ptr [ESP + 0xb8],EDX      ; 00526aa3
    XOR ESI,ESI                         ; 00526aaa
    MOV dword ptr [ESP + 0xbc],ECX      ; 00526aac
    MOV dword ptr [ESP + 0xb4],ESI      ; 00526ab3
    JMP 0x00526843                      ; 00526aba
        ;   XREF to: 00526843 (UNCONDITIONAL_JUMP)  ; LAB_00526843
    MOV EDI,dword ptr [EBP + 0x14]      ; 00526abf
        ;   Label: LAB_00526abf
    PUSH EDI                            ; 00526ac2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00526ac3
    PUSH EBX                            ; 00526ac9
    CALL dword ptr [EAX + 0x84]         ; 00526aca
    ADD ESP,0x8                         ; 00526ad0
    CMP EAX,0x4                         ; 00526ad3
    SETZ AL                             ; 00526ad6
    AND EAX,0xff                        ; 00526ad9
    JZ 0x00526a6c                       ; 00526ade
        ;   XREF to: 00526a6c (CONDITIONAL_JUMP)  ; LAB_00526a6c
    LEA EAX,[EDI + 0x20]                ; 00526ae0
    PUSH EAX                            ; 00526ae3
    PUSH EBX                            ; 00526ae4
    LEA ESI,[ESP + 0x68]                ; 00526ae5
    LEA EDI,[ESP + 0x11c]               ; 00526ae9
    CALL FUN_00408bf0                   ; 00526af0
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x68]                ; 00526af5
    ADD ESP,0x8                         ; 00526af9
    LEA EAX,[ESP + 0x114]               ; 00526afc
    MOVSD ES:EDI,ESI                    ; 00526b03
    MOVSD ES:EDI,ESI                    ; 00526b04
    MOVSD ES:EDI,ESI                    ; 00526b05
    PUSH EAX                            ; 00526b06
    LEA ESI,[ESP + 0x34]                ; 00526b07
    LEA EDI,[ESP + 0x124]               ; 00526b0b
    CALL FUN_00576250                   ; 00526b12
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[ESP + 0x34]                ; 00526b17
    ADD ESP,0x4                         ; 00526b1b
    MOVSD ES:EDI,ESI                    ; 00526b1e
    MOVSD ES:EDI,ESI                    ; 00526b1f
    MOVSD ES:EDI,ESI                    ; 00526b20
    FLD float ptr [ESP + 0x124]         ; 00526b21
    FABS                                ; 00526b28
    FCOMP double ptr [0x005cd98f]       ; 00526b2a | DAT_005cd98f
    FNSTSW AX                           ; 00526b30
    SAHF                                ; 00526b32
    JBE 0x00526a6c                      ; 00526b33
        ;   XREF to: 00526a6c (CONDITIONAL_JUMP)  ; LAB_00526a6c
    XOR ESI,ESI                         ; 00526b39
    MOV EAX,ESI                         ; 00526b3b
    MOV ESP,EBP                         ; 00526b3d
    POP EBP                             ; 00526b3f
    POP EDI                             ; 00526b40
    POP ESI                             ; 00526b41
    POP EBX                             ; 00526b42
    RET                                 ; 00526b43
    MOV EAX,dword ptr [EBP + 0x14]      ; 00526b44
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x25b0],0x0    ; 00526b47
    JNZ 0x005267f6                      ; 00526b4e
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    ADD EAX,0x20                        ; 00526b54
    PUSH EAX                            ; 00526b57
    PUSH EBX                            ; 00526b58
    LEA ESI,[ESP + 0x74]                ; 00526b59
    LEA EDI,[ESP + 0x134]               ; 00526b5d
    CALL FUN_00408bf0                   ; 00526b64
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x74]                ; 00526b69
    ADD ESP,0x8                         ; 00526b6d
    MOVSD ES:EDI,ESI                    ; 00526b70
    MOVSD ES:EDI,ESI                    ; 00526b71
    MOVSD ES:EDI,ESI                    ; 00526b72
    FLD float ptr [ESP + 0x130]         ; 00526b73
    FMUL ST0                            ; 00526b7a
    FLD float ptr [ESP + 0x12c]         ; 00526b7c
    FMUL ST0                            ; 00526b83
    FADDP                               ; 00526b85
    FLD float ptr [ESP + 0x134]         ; 00526b87
    FMUL ST0                            ; 00526b8e
    FADDP                               ; 00526b90
    FSQRT                               ; 00526b92
    FLDZ                                ; 00526b94
    FXCH                                ; 00526b96
    FSTP float ptr [ESP + 0x138]        ; 00526b98
    FCOMP float ptr [ESP + 0x138]       ; 00526b9f
    FNSTSW AX                           ; 00526ba6
    SAHF                                ; 00526ba8
    JNC 0x00526c58                      ; 00526ba9
        ;   XREF to: 00526c58 (CONDITIONAL_JUMP)  ; LAB_00526c58
    FLD1                                ; 00526baf
    FLD float ptr [ESP + 0x12c]         ; 00526bb1
    FXCH                                ; 00526bb8
    FDIV float ptr [ESP + 0x138]        ; 00526bba
    FXCH                                ; 00526bc1
    FMUL ST1                            ; 00526bc3
    FLD float ptr [ESP + 0x130]         ; 00526bc5
    FMUL ST2                            ; 00526bcc
    FLD float ptr [ESP + 0x134]         ; 00526bce
    FMULP ST3                           ; 00526bd5
    FXCH                                ; 00526bd7
    FSTP float ptr [ESP + 0x12c]        ; 00526bd9
    FSTP float ptr [ESP + 0x130]        ; 00526be0
    FSTP float ptr [ESP + 0x134]        ; 00526be7
    FLD float ptr [ESP + 0x134]         ; 00526bee
        ;   Label: LAB_00526bee
    FLDZ                                ; 00526bf5
    FCOMPP                              ; 00526bf7
    FNSTSW AX                           ; 00526bf9
    SAHF                                ; 00526bfb
    JC 0x005267f6                       ; 00526bfc
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    MOV ESI,0x40400000                  ; 00526c02
    MOV EDI,0x40000000                  ; 00526c07
    LEA EAX,[ESP + 0xb4]                ; 00526c0c
    XOR ECX,ECX                         ; 00526c13
    MOV dword ptr [ESP + 0xac],ESI      ; 00526c15
    MOV dword ptr [ESP + 0xb0],EDI      ; 00526c1c
    LEA ESI,[ESP + 0xa8]                ; 00526c23
    MOV dword ptr [ESP + 0xa8],ECX      ; 00526c2a
    CMP EAX,ESI                         ; 00526c31
    JZ 0x00526843                       ; 00526c33
        ;   XREF to: 00526843 (CONDITIONAL_JUMP)  ; LAB_00526843
    MOV EDX,0x40400000                  ; 00526c39
    MOV dword ptr [ESP + 0xbc],EDI      ; 00526c3e
    MOV dword ptr [ESP + 0xb4],ECX      ; 00526c45
    MOV dword ptr [ESP + 0xb8],EDX      ; 00526c4c
    JMP 0x00526843                      ; 00526c53
        ;   XREF to: 00526843 (UNCONDITIONAL_JUMP)  ; LAB_00526843
    XOR EDI,EDI                         ; 00526c58
        ;   Label: LAB_00526c58
    MOV dword ptr [ESP + 0x130],EDI     ; 00526c5a
    MOV dword ptr [ESP + 0x12c],EDI     ; 00526c61
    MOV dword ptr [ESP + 0x134],EDI     ; 00526c68
    JMP 0x00526bee                      ; 00526c6f
        ;   XREF to: 00526bee (UNCONDITIONAL_JUMP)  ; LAB_00526bee
    LEA EAX,[ESP + 0x90]                ; 00526c74
        ;   Label: caseD_5
    XOR ECX,ECX                         ; 00526c7b
    LEA ESI,[ESP + 0xb4]                ; 00526c7d
    MOV dword ptr [ESP + 0x94],ECX      ; 00526c84
    MOV dword ptr [ESP + 0x98],ECX      ; 00526c8b
    MOV dword ptr [ESP + 0x90],ECX      ; 00526c92
    CMP ESI,EAX                         ; 00526c99
    JZ 0x00526843                       ; 00526c9b
        ;   XREF to: 00526843 (CONDITIONAL_JUMP)  ; LAB_00526843
    MOV dword ptr [ESP + 0xb8],ECX      ; 00526ca1
    MOV dword ptr [ESP + 0xbc],ECX      ; 00526ca8
    MOV dword ptr [ESP + 0xb4],ECX      ; 00526caf
    JMP 0x00526843                      ; 00526cb6
        ;   XREF to: 00526843 (UNCONDITIONAL_JUMP)  ; LAB_00526843
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00526cbb
        ;   Label: LAB_00526cbb
    DEC EAX                             ; 00526cbe
    CMP EAX,0x4                         ; 00526cbf
    JA 0x005267f6                       ; 00526cc2
        ;   XREF to: 005267f6 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5267a4]  ; 00526cc8 | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EBX,dword ptr [EBP + 0x20]      ; 00526ccf
        ;   Label: LAB_00526ccf
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00526cd2
    MOV ESI,0x1                         ; 00526cd9
    MOV dword ptr [EBX],EAX             ; 00526cde
    MOV EAX,ESI                         ; 00526ce0
    MOV ESP,EBP                         ; 00526ce2
    POP EBP                             ; 00526ce4
    POP EDI                             ; 00526ce5
    POP ESI                             ; 00526ce6
    POP EBX                             ; 00526ce7
    RET                                 ; 00526ce8

