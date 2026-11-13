; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00498f10(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_004991d0 at 00499236
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_drawPixel_FUN_00517f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498f10
        ;   Label: shape_edittool.cpp_FUN_00498f10
    PUSH ESI                            ; 00498f11
    PUSH EDI                            ; 00498f12
    PUSH EBP                            ; 00498f13
    SUB ESP,0x4                         ; 00498f14
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00498f17
    TEST EBX,EBX                        ; 00498f1b
    JL 0x00498f33                       ; 00498f1d
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    MOV EDX,dword ptr [ESP + 0x20]      ; 00498f1f
    TEST EDX,EDX                        ; 00498f23
    JL 0x00498f33                       ; 00498f25
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    CMP EBX,dword ptr [0x0061b498]      ; 00498f27 | DAT_0061b498
    JL 0x00498fbc                       ; 00498f2d
        ;   XREF to: 00498fbc (CONDITIONAL_JUMP)  ; LAB_00498fbc
    MOV ESI,dword ptr [ESP + 0x24]      ; 00498f33
        ;   Label: LAB_00498f33
    MOV EDI,dword ptr [ESP + 0x20]      ; 00498f37
    MOV EBP,dword ptr [ESP + 0x24]      ; 00498f3b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00498f3f
    NEG ESI                             ; 00498f43
    ADD EBP,EBX                         ; 00498f45
    ADD EDI,ESI                         ; 00498f47
    ADD ESI,EBX                         ; 00498f49
    MOV EBX,dword ptr [ESP + 0x24]      ; 00498f4b
    MOV dword ptr [ESP],EAX             ; 00498f4f
    ADD EBX,EAX                         ; 00498f52
    CMP EBX,dword ptr [ESP]             ; 00498f54
        ;   Label: LAB_00498f54
    JLE 0x0049779a                      ; 00498f57
        ;   XREF to: 0049779a (CONDITIONAL_JUMP)  ; LAB_0049779a
    TEST ESI,ESI                        ; 00498f5d
    JL 0x00498f71                       ; 00498f5f
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    TEST EDI,EDI                        ; 00498f61
    JL 0x00498f71                       ; 00498f63
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP ESI,dword ptr [0x0061b498]      ; 00498f65 | DAT_0061b498
    JL 0x00499025                       ; 00498f6b
        ;   XREF to: 00499025 (CONDITIONAL_JUMP)  ; LAB_00499025
    TEST EBP,EBP                        ; 00498f71
        ;   Label: LAB_00498f71
    JL 0x00498f85                       ; 00498f73
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    TEST EDI,EDI                        ; 00498f75
    JL 0x00498f85                       ; 00498f77
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EBP,dword ptr [0x0061b498]      ; 00498f79 | DAT_0061b498
    JL 0x00499088                       ; 00498f7f
        ;   XREF to: 00499088 (CONDITIONAL_JUMP)  ; LAB_00499088
    TEST ESI,ESI                        ; 00498f85
        ;   Label: LAB_00498f85
    JL 0x00498f99                       ; 00498f87
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    TEST EBX,EBX                        ; 00498f89
    JL 0x00498f99                       ; 00498f8b
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP ESI,dword ptr [0x0061b498]      ; 00498f8d | DAT_0061b498
    JL 0x004990eb                       ; 00498f93
        ;   XREF to: 004990eb (CONDITIONAL_JUMP)  ; LAB_004990eb
    TEST EBP,EBP                        ; 00498f99
        ;   Label: LAB_00498f99
    JL 0x00498fad                       ; 00498f9b
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    TEST EBX,EBX                        ; 00498f9d
    JL 0x00498fad                       ; 00498f9f
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP EBP,dword ptr [0x0061b498]      ; 00498fa1 | DAT_0061b498
    JL 0x0049914e                       ; 00498fa7
        ;   XREF to: 0049914e (CONDITIONAL_JUMP)  ; LAB_0049914e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00498fad
        ;   Label: LAB_00498fad
    INC ESI                             ; 00498fb1
    DEC EBP                             ; 00498fb2
    DEC EBX                             ; 00498fb3
    DEC EAX                             ; 00498fb4
    INC EDI                             ; 00498fb5
    MOV dword ptr [ESP + 0x24],EAX      ; 00498fb6
    JMP 0x00498f54                      ; 00498fba
        ;   XREF to: 00498f54 (UNCONDITIONAL_JUMP)  ; LAB_00498f54
    CMP EDX,dword ptr [0x0061b49c]      ; 00498fbc | DAT_0061b49c
        ;   Label: LAB_00498fbc
    JGE 0x00498f33                      ; 00498fc2
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    CMP EBX,dword ptr [0x01c4f008]      ; 00498fc8 | DAT_01c4f008
    JL 0x00498f33                       ; 00498fce
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    CMP EBX,dword ptr [0x01c4f010]      ; 00498fd4 | DAT_01c4f010
    JGE 0x00498f33                      ; 00498fda
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    MOV EAX,EDX                         ; 00498fe0
    CMP EAX,dword ptr [0x01c4f00c]      ; 00498fe2 | DAT_01c4f00c
    JL 0x00498f33                       ; 00498fe8
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    CMP EAX,dword ptr [0x01c4f014]      ; 00498fee | DAT_01c4f014
    JGE 0x00498f33                      ; 00498ff4
        ;   XREF to: 00498f33 (CONDITIONAL_JUMP)  ; LAB_00498f33
    CMP dword ptr [0x01c3f544],0x0      ; 00498ffa | DAT_01c3f544
    JZ 0x00499014                       ; 00499001
        ;   XREF to: 00499014 (CONDITIONAL_JUMP)  ; LAB_00499014
    MOV EBP,EAX                         ; 00499003
    PUSH EBP                            ; 00499005
    PUSH EBX                            ; 00499006
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 00499007
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 0049900c
    JMP 0x00498f33                      ; 0049900f
        ;   XREF to: 00498f33 (UNCONDITIONAL_JUMP)  ; LAB_00498f33
    MOV EDI,EAX                         ; 00499014
        ;   Label: LAB_00499014
    PUSH EDI                            ; 00499016
    PUSH EBX                            ; 00499017
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00499018
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 0049901d
    JMP 0x00498f33                      ; 00499020
        ;   XREF to: 00498f33 (UNCONDITIONAL_JUMP)  ; LAB_00498f33
    CMP EDI,dword ptr [0x0061b49c]      ; 00499025 | DAT_0061b49c
        ;   Label: LAB_00499025
    JGE 0x00498f71                      ; 0049902b
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP ESI,dword ptr [0x01c4f008]      ; 00499031 | DAT_01c4f008
    JL 0x00498f71                       ; 00499037
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP ESI,dword ptr [0x01c4f010]      ; 0049903d | DAT_01c4f010
    JGE 0x00498f71                      ; 00499043
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP EDI,dword ptr [0x01c4f00c]      ; 00499049 | DAT_01c4f00c
    JL 0x00498f71                       ; 0049904f
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP EDI,dword ptr [0x01c4f014]      ; 00499055 | DAT_01c4f014
    JGE 0x00498f71                      ; 0049905b
        ;   XREF to: 00498f71 (CONDITIONAL_JUMP)  ; LAB_00498f71
    CMP dword ptr [0x01c3f544],0x0      ; 00499061 | DAT_01c3f544
    JZ 0x00499079                       ; 00499068
        ;   XREF to: 00499079 (CONDITIONAL_JUMP)  ; LAB_00499079
    PUSH EDI                            ; 0049906a
    PUSH ESI                            ; 0049906b
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 0049906c
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 00499071
    JMP 0x00498f71                      ; 00499074
        ;   XREF to: 00498f71 (UNCONDITIONAL_JUMP)  ; LAB_00498f71
    PUSH EDI                            ; 00499079
        ;   Label: LAB_00499079
    PUSH ESI                            ; 0049907a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 0049907b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00499080
    JMP 0x00498f71                      ; 00499083
        ;   XREF to: 00498f71 (UNCONDITIONAL_JUMP)  ; LAB_00498f71
    CMP EDI,dword ptr [0x0061b49c]      ; 00499088 | DAT_0061b49c
        ;   Label: LAB_00499088
    JGE 0x00498f85                      ; 0049908e
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EBP,dword ptr [0x01c4f008]      ; 00499094 | DAT_01c4f008
    JL 0x00498f85                       ; 0049909a
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EBP,dword ptr [0x01c4f010]      ; 004990a0 | DAT_01c4f010
    JGE 0x00498f85                      ; 004990a6
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EDI,dword ptr [0x01c4f00c]      ; 004990ac | DAT_01c4f00c
    JL 0x00498f85                       ; 004990b2
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EDI,dword ptr [0x01c4f014]      ; 004990b8 | DAT_01c4f014
    JGE 0x00498f85                      ; 004990be
        ;   XREF to: 00498f85 (CONDITIONAL_JUMP)  ; LAB_00498f85
    CMP dword ptr [0x01c3f544],0x0      ; 004990c4 | DAT_01c3f544
    JZ 0x004990dc                       ; 004990cb
        ;   XREF to: 004990dc (CONDITIONAL_JUMP)  ; LAB_004990dc
    PUSH EDI                            ; 004990cd
    PUSH EBP                            ; 004990ce
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 004990cf
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 004990d4
    JMP 0x00498f85                      ; 004990d7
        ;   XREF to: 00498f85 (UNCONDITIONAL_JUMP)  ; LAB_00498f85
    PUSH EDI                            ; 004990dc
        ;   Label: LAB_004990dc
    PUSH EBP                            ; 004990dd
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004990de
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004990e3
    JMP 0x00498f85                      ; 004990e6
        ;   XREF to: 00498f85 (UNCONDITIONAL_JUMP)  ; LAB_00498f85
    CMP EBX,dword ptr [0x0061b49c]      ; 004990eb | DAT_0061b49c
        ;   Label: LAB_004990eb
    JGE 0x00498f99                      ; 004990f1
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP ESI,dword ptr [0x01c4f008]      ; 004990f7 | DAT_01c4f008
    JL 0x00498f99                       ; 004990fd
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP ESI,dword ptr [0x01c4f010]      ; 00499103 | DAT_01c4f010
    JGE 0x00498f99                      ; 00499109
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP EBX,dword ptr [0x01c4f00c]      ; 0049910f | DAT_01c4f00c
    JL 0x00498f99                       ; 00499115
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP EBX,dword ptr [0x01c4f014]      ; 0049911b | DAT_01c4f014
    JGE 0x00498f99                      ; 00499121
        ;   XREF to: 00498f99 (CONDITIONAL_JUMP)  ; LAB_00498f99
    CMP dword ptr [0x01c3f544],0x0      ; 00499127 | DAT_01c3f544
    JZ 0x0049913f                       ; 0049912e
        ;   XREF to: 0049913f (CONDITIONAL_JUMP)  ; LAB_0049913f
    PUSH EBX                            ; 00499130
    PUSH ESI                            ; 00499131
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 00499132
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 00499137
    JMP 0x00498f99                      ; 0049913a
        ;   XREF to: 00498f99 (UNCONDITIONAL_JUMP)  ; LAB_00498f99
    PUSH EBX                            ; 0049913f
        ;   Label: LAB_0049913f
    PUSH ESI                            ; 00499140
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00499141
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00499146
    JMP 0x00498f99                      ; 00499149
        ;   XREF to: 00498f99 (UNCONDITIONAL_JUMP)  ; LAB_00498f99
    CMP EBX,dword ptr [0x0061b49c]      ; 0049914e | DAT_0061b49c
        ;   Label: LAB_0049914e
    JGE 0x00498fad                      ; 00499154
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP EBP,dword ptr [0x01c4f008]      ; 0049915a | DAT_01c4f008
    JL 0x00498fad                       ; 00499160
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP EBP,dword ptr [0x01c4f010]      ; 00499166 | DAT_01c4f010
    JGE 0x00498fad                      ; 0049916c
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP EBX,dword ptr [0x01c4f00c]      ; 00499172 | DAT_01c4f00c
    JL 0x00498fad                       ; 00499178
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP EBX,dword ptr [0x01c4f014]      ; 0049917e | DAT_01c4f014
    JGE 0x00498fad                      ; 00499184
        ;   XREF to: 00498fad (CONDITIONAL_JUMP)  ; LAB_00498fad
    CMP dword ptr [0x01c3f544],0x0      ; 0049918a | DAT_01c3f544
    JZ 0x004991af                       ; 00499191
        ;   XREF to: 004991af (CONDITIONAL_JUMP)  ; LAB_004991af
    PUSH EBX                            ; 00499193
    PUSH EBP                            ; 00499194
    CALL engine_mini3d.cpp_drawPixel_FUN_00517f10 ; 00499195
        ;   XREF to: 00517f10 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_00517f10(int x, int y)
    ADD ESP,0x8                         ; 0049919a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049919d
    INC ESI                             ; 004991a1
    DEC EBP                             ; 004991a2
    DEC EBX                             ; 004991a3
    DEC EAX                             ; 004991a4
    INC EDI                             ; 004991a5
    MOV dword ptr [ESP + 0x24],EAX      ; 004991a6
    JMP 0x00498f54                      ; 004991aa
        ;   XREF to: 00498f54 (UNCONDITIONAL_JUMP)  ; LAB_00498f54
    PUSH EBX                            ; 004991af
        ;   Label: LAB_004991af
    PUSH EBP                            ; 004991b0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004991b1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004991b6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004991b9
    INC ESI                             ; 004991bd
    DEC EBP                             ; 004991be
    DEC EBX                             ; 004991bf
    DEC EAX                             ; 004991c0
    INC EDI                             ; 004991c1
    MOV dword ptr [ESP + 0x24],EAX      ; 004991c2
    JMP 0x00498f54                      ; 004991c6
        ;   XREF to: 00498f54 (UNCONDITIONAL_JUMP)  ; LAB_00498f54

