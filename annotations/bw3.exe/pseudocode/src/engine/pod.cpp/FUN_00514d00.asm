; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00514d00(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_00514110
;   FUN_00515150
;   FUN_005151f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514d00
        ;   Label: FUN_00514d00
    PUSH ESI                            ; 00514d01
    PUSH EDI                            ; 00514d02
    PUSH EBP                            ; 00514d03
    SUB ESP,0xaa0                       ; 00514d04
    MOV EBP,dword ptr [ESP + 0xab4]     ; 00514d0a
    XOR EDX,EDX                         ; 00514d11
        ;   Label: LAB_00514d11
    MOV EBX,dword ptr [EBP]             ; 00514d13
    MOV dword ptr [ESP + 0xa88],EDX     ; 00514d16
    MOV dword ptr [ESP + 0xa6c],EDX     ; 00514d1d
    TEST EBX,EBX                        ; 00514d24
    JLE 0x00514d97                      ; 00514d26
        ;   XREF to: 00514d97 (CONDITIONAL_JUMP)  ; LAB_00514d97
    MOV dword ptr [ESP + 0xa74],EBP     ; 00514d28
    MOV EAX,dword ptr [ESP + 0xa74]     ; 00514d2f
        ;   Label: LAB_00514d2f
    MOV EAX,dword ptr [EAX + 0x4]       ; 00514d36
    MOV dword ptr [ESP + 0xa98],EAX     ; 00514d39
    XOR EAX,EAX                         ; 00514d40
    XOR EBX,EBX                         ; 00514d42
    MOV dword ptr [ESP + 0xa70],EAX     ; 00514d44
    MOV EAX,dword ptr [ESP + 0xa98]     ; 00514d4b
        ;   Label: LAB_00514d4b
    MOV EAX,dword ptr [EAX + 0x424]     ; 00514d52
    CMP EBX,EAX                         ; 00514d58
    JL 0x00514e86                       ; 00514d5a
        ;   XREF to: 00514e86 (CONDITIONAL_JUMP)  ; LAB_00514e86
    CMP dword ptr [ESP + 0xa70],0x0     ; 00514d60
    JZ 0x00514ed7                       ; 00514d68
        ;   XREF to: 00514ed7 (CONDITIONAL_JUMP)  ; LAB_00514ed7
    MOV EAX,dword ptr [ESP + 0xa88]     ; 00514d6e
        ;   Label: LAB_00514d6e
    PUSH EAX                            ; 00514d75
    PUSH EBP                            ; 00514d76
    CALL FUN_005151f0                   ; 00514d77
        ;   XREF to: 005151f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005151f0()
    MOV EDX,0x1                         ; 00514d7c
    ADD ESP,0x8                         ; 00514d81
    MOV dword ptr [ESP + 0xa6c],EDX     ; 00514d84
    MOV EAX,dword ptr [ESP + 0xa88]     ; 00514d8b
        ;   Label: LAB_00514d8b
    CMP EAX,dword ptr [EBP]             ; 00514d92
    JL 0x00514d2f                       ; 00514d95
        ;   XREF to: 00514d2f (CONDITIONAL_JUMP)  ; LAB_00514d2f
    CMP dword ptr [ESP + 0xa6c],0x0     ; 00514d97
        ;   Label: LAB_00514d97
    JNZ 0x00514d11                      ; 00514d9f
        ;   XREF to: 00514d11 (CONDITIONAL_JUMP)  ; LAB_00514d11
    MOV EDI,dword ptr [EBP]             ; 00514da5
    DEC EDI                             ; 00514da8
    TEST EDI,EDI                        ; 00514da9
    JLE 0x00514ddc                      ; 00514dab
        ;   XREF to: 00514ddc (CONDITIONAL_JUMP)  ; LAB_00514ddc
    XOR EDX,EDX                         ; 00514dad
        ;   Label: LAB_00514dad
    TEST EDI,EDI                        ; 00514daf
    JLE 0x00514dd7                      ; 00514db1
        ;   XREF to: 00514dd7 (CONDITIONAL_JUMP)  ; LAB_00514dd7
    MOV EAX,EBP                         ; 00514db3
    MOV EBX,dword ptr [EAX + 0x4]       ; 00514db5
        ;   Label: LAB_00514db5
    MOV ECX,dword ptr [EAX + 0x8]       ; 00514db8
    MOV ESI,dword ptr [EBX + 0x408]     ; 00514dbb
    CMP ESI,dword ptr [ECX + 0x408]     ; 00514dc1
    JLE 0x00514dcf                      ; 00514dc7
        ;   XREF to: 00514dcf (CONDITIONAL_JUMP)  ; LAB_00514dcf
    MOV dword ptr [EAX + 0x8],EBX       ; 00514dc9
    MOV dword ptr [EAX + 0x4],ECX       ; 00514dcc
    INC EDX                             ; 00514dcf
        ;   Label: LAB_00514dcf
    ADD EAX,0x4                         ; 00514dd0
    CMP EDX,EDI                         ; 00514dd3
    JL 0x00514db5                       ; 00514dd5
        ;   XREF to: 00514db5 (CONDITIONAL_JUMP)  ; LAB_00514db5
    DEC EDI                             ; 00514dd7
        ;   Label: LAB_00514dd7
    TEST EDI,EDI                        ; 00514dd8
    JG 0x00514dad                       ; 00514dda
        ;   XREF to: 00514dad (CONDITIONAL_JUMP)  ; LAB_00514dad
    XOR ECX,ECX                         ; 00514ddc
        ;   Label: LAB_00514ddc
    MOV ESI,dword ptr [EBP]             ; 00514dde
    MOV dword ptr [ESP + 0xa68],ECX     ; 00514de1
    MOV dword ptr [ESP + 0xa8c],ECX     ; 00514de8
    TEST ESI,ESI                        ; 00514def
    JLE 0x00514f27                      ; 00514df1
        ;   XREF to: 00514f27 (CONDITIONAL_JUMP)  ; LAB_00514f27
    MOV dword ptr [ESP + 0xa64],EBP     ; 00514df7
    XOR EBX,EBX                         ; 00514dfe
        ;   Label: LAB_00514dfe
    MOV EAX,dword ptr [ESP + 0xa64]     ; 00514e00
    MOV dword ptr [ESP + 0xa80],EBX     ; 00514e07
    MOV EAX,dword ptr [EAX + 0x4]       ; 00514e0e
    MOV EBX,dword ptr [ESP + 0xa8c]     ; 00514e11
    MOV dword ptr [ESP + 0xa84],EAX     ; 00514e18
    SHL EBX,0x3                         ; 00514e1f
    MOV EAX,dword ptr [ESP + 0xa84]     ; 00514e22
        ;   Label: LAB_00514e22
    MOV ESI,dword ptr [ESP + 0xa80]     ; 00514e29
    CMP ESI,dword ptr [EAX + 0x424]     ; 00514e30
    JGE 0x00514efc                      ; 00514e36
        ;   XREF to: 00514efc (CONDITIONAL_JUMP)  ; LAB_00514efc
    PUSH ESI                            ; 00514e3c
    MOV EAX,dword ptr [ESP + 0xa88]     ; 00514e3d
    PUSH EAX                            ; 00514e44
    LEA ESI,[ESP + 0x648]               ; 00514e45
    LEA EDI,[ESP + 0x960]               ; 00514e4c
    CALL FUN_00514110                   ; 00514e53
        ;   XREF to: 00514110 (UNCONDITIONAL_CALL)  ; undefined FUN_00514110()
    MOV ECX,0x42                        ; 00514e58
    LEA ESI,[ESP + 0x648]               ; 00514e5d
    ADD ESP,0x8                         ; 00514e64
    MOVSD.REP ES:EDI,ESI                ; 00514e67
    CMP dword ptr [ESP + 0xa58],0x0     ; 00514e69
    JNZ 0x00514fce                      ; 00514e71
        ;   XREF to: 00514fce (CONDITIONAL_JUMP)  ; LAB_00514fce
    INC dword ptr [ESP + 0xa80]         ; 00514e77
        ;   Label: LAB_00514e77
    JMP 0x00514e22                      ; 00514e7e
        ;   XREF to: 00514e22 (UNCONDITIONAL_JUMP)  ; LAB_00514e22
    INC EBX                             ; 00514e80
        ;   Label: LAB_00514e80
    JMP 0x00514d4b                      ; 00514e81
        ;   XREF to: 00514d4b (UNCONDITIONAL_JUMP)  ; LAB_00514d4b
    PUSH EBX                            ; 00514e86
        ;   Label: LAB_00514e86
    MOV ESI,dword ptr [ESP + 0xa9c]     ; 00514e87
    PUSH ESI                            ; 00514e8e
    LEA ESI,[ESP + 0x858]               ; 00514e8f
    LEA EDI,[ESP + 0x750]               ; 00514e96
    CALL FUN_00514110                   ; 00514e9d
        ;   XREF to: 00514110 (UNCONDITIONAL_CALL)  ; undefined FUN_00514110()
    MOV ECX,0x42                        ; 00514ea2
    LEA ESI,[ESP + 0x858]               ; 00514ea7
    ADD ESP,0x8                         ; 00514eae
    MOVSD.REP ES:EDI,ESI                ; 00514eb1
    CMP dword ptr [ESP + 0x84c],0x0     ; 00514eb3
    JZ 0x00514e80                       ; 00514ebb
        ;   XREF to: 00514e80 (CONDITIONAL_JUMP)  ; LAB_00514e80
    LEA EAX,[ESP + 0x748]               ; 00514ebd
    PUSH EAX                            ; 00514ec4
    PUSH EBP                            ; 00514ec5
    CALL FUN_00515150                   ; 00514ec6
        ;   XREF to: 00515150 (UNCONDITIONAL_CALL)  ; undefined FUN_00515150()
    ADD ESP,0x8                         ; 00514ecb
    TEST EAX,EAX                        ; 00514ece
    JGE 0x00514e80                      ; 00514ed0
        ;   XREF to: 00514e80 (CONDITIONAL_JUMP)  ; LAB_00514e80
    JMP 0x00514d6e                      ; 00514ed2
        ;   XREF to: 00514d6e (UNCONDITIONAL_JUMP)  ; LAB_00514d6e
    MOV EBX,dword ptr [ESP + 0xa88]     ; 00514ed7
        ;   Label: LAB_00514ed7
    MOV ECX,dword ptr [ESP + 0xa74]     ; 00514ede
    INC EBX                             ; 00514ee5
    ADD ECX,0x4                         ; 00514ee6
    MOV dword ptr [ESP + 0xa88],EBX     ; 00514ee9
    MOV dword ptr [ESP + 0xa74],ECX     ; 00514ef0
    JMP 0x00514d8b                      ; 00514ef7
        ;   XREF to: 00514d8b (UNCONDITIONAL_JUMP)  ; LAB_00514d8b
    MOV EDI,dword ptr [ESP + 0xa64]     ; 00514efc
        ;   Label: LAB_00514efc
    MOV EAX,dword ptr [ESP + 0xa68]     ; 00514f03
    MOV EDX,dword ptr [EBP]             ; 00514f0a
    ADD EDI,0x4                         ; 00514f0d
    INC EAX                             ; 00514f10
    MOV dword ptr [ESP + 0xa64],EDI     ; 00514f11
    MOV dword ptr [ESP + 0xa68],EAX     ; 00514f18
    CMP EAX,EDX                         ; 00514f1f
    JL 0x00514dfe                       ; 00514f21
        ;   XREF to: 00514dfe (CONDITIONAL_JUMP)  ; LAB_00514dfe
    MOV ECX,dword ptr [EBP]             ; 00514f27
        ;   Label: LAB_00514f27
    XOR ESI,ESI                         ; 00514f2a
    TEST ECX,ECX                        ; 00514f2c
    JLE 0x00514fc3                      ; 00514f2e
        ;   XREF to: 00514fc3 (CONDITIONAL_JUMP)  ; LAB_00514fc3
    MOV dword ptr [ESP + 0xa60],EBP     ; 00514f34
    MOV EDX,dword ptr [EBP]             ; 00514f3b
        ;   Label: LAB_00514f3b
    MOV dword ptr [ESP + 0xa7c],ESI     ; 00514f3e
    CMP ESI,EDX                         ; 00514f45
    JL 0x0051510f                       ; 00514f47
        ;   XREF to: 0051510f (CONDITIONAL_JUMP)  ; LAB_0051510f
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 00514f4d
        ;   Label: LAB_00514f4d
    CMP EAX,dword ptr [EBP]             ; 00514f54
    JL 0x00514f7b                       ; 00514f57
        ;   XREF to: 00514f7b (CONDITIONAL_JUMP)  ; LAB_00514f7b
    MOV EAX,0x5cc98c                    ; 00514f59
    MOV EDX,0x685                       ; 00514f5e
    PUSH 0x5cc99e                       ; 00514f63
    MOV [0x01d71de0],EAX                ; 00514f68 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00514f6d | DAT_01d71de4
    CALL FUN_004e4330                   ; 00514f73
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00514f78
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 00514f7b
        ;   Label: LAB_00514f7b
    SHL EAX,0x2                         ; 00514f82
    ADD EAX,EBP                         ; 00514f85
    MOV EDX,dword ptr [ESP + 0xa7c]     ; 00514f87
    MOV EDI,dword ptr [EAX + 0x4]       ; 00514f8e
    CMP ESI,EDX                         ; 00514f91
    JGE 0x00514fa3                      ; 00514f93
        ;   XREF to: 00514fa3 (CONDITIONAL_JUMP)  ; LAB_00514fa3
    SUB EAX,0x4                         ; 00514f95
        ;   Label: LAB_00514f95
    MOV ECX,dword ptr [EAX + 0x4]       ; 00514f98
    DEC EDX                             ; 00514f9b
    MOV dword ptr [EAX + 0x8],ECX       ; 00514f9c
    CMP EDX,ESI                         ; 00514f9f
    JG 0x00514f95                       ; 00514fa1
        ;   XREF to: 00514f95 (CONDITIONAL_JUMP)  ; LAB_00514f95
    MOV EAX,dword ptr [ESP + 0xa60]     ; 00514fa3
        ;   Label: LAB_00514fa3
    MOV dword ptr [EAX + 0x4],EDI       ; 00514faa
    LEA EDI,[EAX + 0x4]                 ; 00514fad
    INC ESI                             ; 00514fb0
    MOV EAX,dword ptr [EBP]             ; 00514fb1
    MOV dword ptr [ESP + 0xa60],EDI     ; 00514fb4
    CMP ESI,EAX                         ; 00514fbb
    JL 0x00514f3b                       ; 00514fbd
        ;   XREF to: 00514f3b (CONDITIONAL_JUMP)  ; LAB_00514f3b
    ADD ESP,0xaa0                       ; 00514fc3
        ;   Label: LAB_00514fc3
    POP EBP                             ; 00514fc9
    POP EDI                             ; 00514fca
    POP ESI                             ; 00514fcb
    POP EBX                             ; 00514fcc
    RET                                 ; 00514fcd
    LEA EAX,[ESP + 0x958]               ; 00514fce
        ;   Label: LAB_00514fce
    PUSH EAX                            ; 00514fd5
    PUSH EBP                            ; 00514fd6
    CALL FUN_00515150                   ; 00514fd7
        ;   XREF to: 00515150 (UNCONDITIONAL_CALL)  ; undefined FUN_00515150()
    ADD ESP,0x8                         ; 00514fdc
    MOV ESI,EAX                         ; 00514fdf
    TEST EAX,EAX                        ; 00514fe1
    JL 0x00514e77                       ; 00514fe3
        ;   XREF to: 00514e77 (CONDITIONAL_JUMP)  ; LAB_00514e77
    CMP dword ptr [ESP + 0xa8c],0xc8    ; 00514fe9
    JL 0x00515018                       ; 00514ff4
        ;   XREF to: 00515018 (CONDITIONAL_JUMP)  ; LAB_00515018
    MOV EDI,0x5cc953                    ; 00514ff6
    MOV EAX,0x633                       ; 00514ffb
    PUSH 0x5cc965                       ; 00515000
    MOV dword ptr [0x01d71de0],EDI      ; 00515005 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0051500b | DAT_01d71de4
    CALL FUN_004e4330                   ; 00515010
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00515015
    LEA EAX,[ESI*0x4 + 0x0]             ; 00515018
        ;   Label: LAB_00515018
    MOV EDX,dword ptr [ESP + 0xa58]     ; 0051501f
    ADD EAX,EBP                         ; 00515026
    TEST EDX,EDX                        ; 00515028
    JL 0x0051505b                       ; 0051502a
        ;   XREF to: 0051505b (CONDITIONAL_JUMP)  ; LAB_0051505b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051502c
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 0051502f
    MOV EAX,dword ptr [ESP + 0xa84]     ; 00515032
    MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX ; 00515039
        ;   Label: LAB_00515039
    MOV ECX,dword ptr [ESP + 0xa8c]     ; 0051503d
    INC ECX                             ; 00515044
    ADD EBX,0x8                         ; 00515045
    MOV dword ptr [ESP + 0xa8c],ECX     ; 00515048
    INC dword ptr [ESP + 0xa80]         ; 0051504f
    JMP 0x00514e22                      ; 00515056
        ;   XREF to: 00514e22 (UNCONDITIONAL_JUMP)  ; LAB_00514e22
    MOV EDX,dword ptr [ESP + 0xa84]     ; 0051505b
        ;   Label: LAB_0051505b
    MOV dword ptr [ESP + EBX*0x1],EDX   ; 00515062
    MOV EAX,dword ptr [EAX + 0x4]       ; 00515065
    JMP 0x00515039                      ; 00515068
        ;   XREF to: 00515039 (UNCONDITIONAL_JUMP)  ; LAB_00515039
    MOV ECX,dword ptr [ESP + 0xa78]     ; 0051506a
        ;   Label: LAB_0051506a
    MOV EBX,dword ptr [ESP + 0xa7c]     ; 00515071
    MOV EDI,dword ptr [EBP]             ; 00515078
    ADD ECX,0x4                         ; 0051507b
    INC EBX                             ; 0051507e
    MOV dword ptr [ESP + 0xa78],ECX     ; 0051507f
    MOV dword ptr [ESP + 0xa7c],EBX     ; 00515086
    CMP EBX,EDI                         ; 0051508d
    JGE 0x00514f4d                      ; 0051508f
        ;   XREF to: 00514f4d (CONDITIONAL_JUMP)  ; LAB_00514f4d
    XOR EAX,EAX                         ; 00515095
        ;   Label: LAB_00515095
    MOV EDX,dword ptr [ESP + 0xa8c]     ; 00515097
    MOV dword ptr [ESP + 0xa9c],EAX     ; 0051509e
    TEST EDX,EDX                        ; 005150a5
    JLE 0x005150f6                      ; 005150a7
        ;   XREF to: 005150f6 (CONDITIONAL_JUMP)  ; LAB_005150f6
    MOV EAX,dword ptr [ESP + 0xa78]     ; 005150a9
    MOV dword ptr [ESP + 0xa90],EAX     ; 005150b0
    LEA EAX,[EDX*0x8 + 0x0]             ; 005150b7
    XOR EDI,EDI                         ; 005150be
    MOV dword ptr [ESP + 0xa94],EAX     ; 005150c0
    MOV EDX,dword ptr [ESP + 0xa90]     ; 005150c7
        ;   Label: LAB_005150c7
    MOV EAX,dword ptr [ESP + EDI*0x1 + 0x4] ; 005150ce
    MOV ECX,dword ptr [EDX + 0x4]       ; 005150d2
    CMP EAX,ECX                         ; 005150d5
    JZ 0x00515124                       ; 005150d7
        ;   XREF to: 00515124 (CONDITIONAL_JUMP)  ; LAB_00515124
    MOV ECX,dword ptr [ESP + 0xa9c]     ; 005150d9
        ;   Label: LAB_005150d9
    MOV EBX,dword ptr [ESP + 0xa94]     ; 005150e0
    INC ECX                             ; 005150e7
    ADD EDI,0x8                         ; 005150e8
    MOV dword ptr [ESP + 0xa9c],ECX     ; 005150eb
    CMP EDI,EBX                         ; 005150f2
    JL 0x005150c7                       ; 005150f4
        ;   XREF to: 005150c7 (CONDITIONAL_JUMP)  ; LAB_005150c7
    MOV EAX,dword ptr [ESP + 0xa9c]     ; 005150f6
        ;   Label: LAB_005150f6
    CMP EAX,dword ptr [ESP + 0xa8c]     ; 005150fd
    JGE 0x00514f4d                      ; 00515104
        ;   XREF to: 00514f4d (CONDITIONAL_JUMP)  ; LAB_00514f4d
    JMP 0x0051506a                      ; 0051510a
        ;   XREF to: 0051506a (UNCONDITIONAL_JUMP)  ; LAB_0051506a
    LEA EAX,[ESI*0x4 + 0x0]             ; 0051510f
        ;   Label: LAB_0051510f
    ADD EAX,EBP                         ; 00515116
    MOV dword ptr [ESP + 0xa78],EAX     ; 00515118
    JMP 0x00515095                      ; 0051511f
        ;   XREF to: 00515095 (UNCONDITIONAL_JUMP)  ; LAB_00515095
    XOR EAX,ECX                         ; 00515124
        ;   Label: LAB_00515124
    TEST ESI,ESI                        ; 00515126
    JLE 0x00515136                      ; 00515128
        ;   XREF to: 00515136 (CONDITIONAL_JUMP)  ; LAB_00515136
    MOV EDX,EBP                         ; 0051512a
    MOV EBX,EDI                         ; 0051512c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051512e
        ;   Label: LAB_0051512e
    CMP ECX,dword ptr [ESP + EBX*0x1]   ; 00515131
    JNZ 0x0051513c                      ; 00515134
        ;   XREF to: 0051513c (CONDITIONAL_JUMP)  ; LAB_0051513c
    CMP EAX,ESI                         ; 00515136
        ;   Label: LAB_00515136
    JGE 0x005150f6                      ; 00515138
        ;   XREF to: 005150f6 (CONDITIONAL_JUMP)  ; LAB_005150f6
    JMP 0x005150d9                      ; 0051513a
        ;   XREF to: 005150d9 (UNCONDITIONAL_JUMP)  ; LAB_005150d9
    INC EAX                             ; 0051513c
        ;   Label: LAB_0051513c
    ADD EDX,0x4                         ; 0051513d
    CMP EAX,ESI                         ; 00515140
    JL 0x0051512e                       ; 00515142
        ;   XREF to: 0051512e (CONDITIONAL_JUMP)  ; LAB_0051512e
    CMP EAX,ESI                         ; 00515144
    JGE 0x005150f6                      ; 00515146
        ;   XREF to: 005150f6 (CONDITIONAL_JUMP)  ; LAB_005150f6
    JMP 0x005150d9                      ; 00515148
        ;   XREF to: 005150d9 (UNCONDITIONAL_JUMP)  ; LAB_005150d9

