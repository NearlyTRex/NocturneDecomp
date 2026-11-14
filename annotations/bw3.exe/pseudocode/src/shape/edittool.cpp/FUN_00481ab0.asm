; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481ab0(undefined4 param_1,int param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00481d70 at 00481dd6
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5baec
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_mini3d.cpp_drawPixel_FUN_004f36e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481ab0
        ;   Label: shape_edittool.cpp_FUN_00481ab0
    PUSH ESI                            ; 00481ab1
    PUSH EDI                            ; 00481ab2
    PUSH EBP                            ; 00481ab3
    SUB ESP,0x4                         ; 00481ab4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00481ab7
    TEST EBX,EBX                        ; 00481abb
    JL 0x00481ad3                       ; 00481abd
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    MOV EDX,dword ptr [ESP + 0x20]      ; 00481abf
    TEST EDX,EDX                        ; 00481ac3
    JL 0x00481ad3                       ; 00481ac5
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP EBX,dword ptr [0x005fba18]      ; 00481ac7 | DAT_005fba18
    JL 0x00481b5c                       ; 00481acd
        ;   XREF to: 00481b5c (CONDITIONAL_JUMP)  ; LAB_00481b5c
    MOV ESI,dword ptr [ESP + 0x24]      ; 00481ad3
        ;   Label: LAB_00481ad3
    MOV EDI,dword ptr [ESP + 0x20]      ; 00481ad7
    MOV EBP,dword ptr [ESP + 0x24]      ; 00481adb
    MOV EAX,dword ptr [ESP + 0x20]      ; 00481adf
    NEG ESI                             ; 00481ae3
    ADD EBP,EBX                         ; 00481ae5
    ADD EDI,ESI                         ; 00481ae7
    ADD ESI,EBX                         ; 00481ae9
    MOV EBX,dword ptr [ESP + 0x24]      ; 00481aeb
    MOV dword ptr [ESP],EAX             ; 00481aef
    ADD EBX,EAX                         ; 00481af2
    CMP EBX,dword ptr [ESP]             ; 00481af4
        ;   Label: LAB_00481af4
    JLE 0x0048033a                      ; 00481af7
        ;   XREF to: 0048033a (CONDITIONAL_JUMP)  ; LAB_0048033a
    TEST ESI,ESI                        ; 00481afd
    JL 0x00481b11                       ; 00481aff
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    TEST EDI,EDI                        ; 00481b01
    JL 0x00481b11                       ; 00481b03
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP ESI,dword ptr [0x005fba18]      ; 00481b05 | DAT_005fba18
    JL 0x00481bc5                       ; 00481b0b
        ;   XREF to: 00481bc5 (CONDITIONAL_JUMP)  ; LAB_00481bc5
    TEST EBP,EBP                        ; 00481b11
        ;   Label: LAB_00481b11
    JL 0x00481b25                       ; 00481b13
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    TEST EDI,EDI                        ; 00481b15
    JL 0x00481b25                       ; 00481b17
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EBP,dword ptr [0x005fba18]      ; 00481b19 | DAT_005fba18
    JL 0x00481c28                       ; 00481b1f
        ;   XREF to: 00481c28 (CONDITIONAL_JUMP)  ; LAB_00481c28
    TEST ESI,ESI                        ; 00481b25
        ;   Label: LAB_00481b25
    JL 0x00481b39                       ; 00481b27
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    TEST EBX,EBX                        ; 00481b29
    JL 0x00481b39                       ; 00481b2b
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP ESI,dword ptr [0x005fba18]      ; 00481b2d | DAT_005fba18
    JL 0x00481c8b                       ; 00481b33
        ;   XREF to: 00481c8b (CONDITIONAL_JUMP)  ; LAB_00481c8b
    TEST EBP,EBP                        ; 00481b39
        ;   Label: LAB_00481b39
    JL 0x00481b4d                       ; 00481b3b
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    TEST EBX,EBX                        ; 00481b3d
    JL 0x00481b4d                       ; 00481b3f
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP EBP,dword ptr [0x005fba18]      ; 00481b41 | DAT_005fba18
    JL 0x00481cee                       ; 00481b47
        ;   XREF to: 00481cee (CONDITIONAL_JUMP)  ; LAB_00481cee
    MOV EAX,dword ptr [ESP + 0x24]      ; 00481b4d
        ;   Label: LAB_00481b4d
    INC ESI                             ; 00481b51
    DEC EBP                             ; 00481b52
    DEC EBX                             ; 00481b53
    DEC EAX                             ; 00481b54
    INC EDI                             ; 00481b55
    MOV dword ptr [ESP + 0x24],EAX      ; 00481b56
    JMP 0x00481af4                      ; 00481b5a
        ;   XREF to: 00481af4 (UNCONDITIONAL_JUMP)  ; LAB_00481af4
    CMP EDX,dword ptr [0x005fba1c]      ; 00481b5c | DAT_005fba1c
        ;   Label: LAB_00481b5c
    JGE 0x00481ad3                      ; 00481b62
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP EBX,dword ptr [0x01c6b5a8]      ; 00481b68 | DAT_01c6b5a8
    JL 0x00481ad3                       ; 00481b6e
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP EBX,dword ptr [0x01c6b5b0]      ; 00481b74 | DAT_01c6b5b0
    JGE 0x00481ad3                      ; 00481b7a
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    MOV EAX,EDX                         ; 00481b80
    CMP EAX,dword ptr [0x01c6b5ac]      ; 00481b82 | DAT_01c6b5ac
    JL 0x00481ad3                       ; 00481b88
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP EAX,dword ptr [0x01c6b5b4]      ; 00481b8e | DAT_01c6b5b4
    JGE 0x00481ad3                      ; 00481b94
        ;   XREF to: 00481ad3 (CONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP dword ptr [0x01c5baec],0x0      ; 00481b9a | DAT_01c5baec
    JZ 0x00481bb4                       ; 00481ba1
        ;   XREF to: 00481bb4 (CONDITIONAL_JUMP)  ; LAB_00481bb4
    MOV EBP,EAX                         ; 00481ba3
    PUSH EBP                            ; 00481ba5
    PUSH EBX                            ; 00481ba6
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 00481ba7
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 00481bac
    JMP 0x00481ad3                      ; 00481baf
        ;   XREF to: 00481ad3 (UNCONDITIONAL_JUMP)  ; LAB_00481ad3
    MOV EDI,EAX                         ; 00481bb4
        ;   Label: LAB_00481bb4
    PUSH EDI                            ; 00481bb6
    PUSH EBX                            ; 00481bb7
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00481bb8
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00481bbd
    JMP 0x00481ad3                      ; 00481bc0
        ;   XREF to: 00481ad3 (UNCONDITIONAL_JUMP)  ; LAB_00481ad3
    CMP EDI,dword ptr [0x005fba1c]      ; 00481bc5 | DAT_005fba1c
        ;   Label: LAB_00481bc5
    JGE 0x00481b11                      ; 00481bcb
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP ESI,dword ptr [0x01c6b5a8]      ; 00481bd1 | DAT_01c6b5a8
    JL 0x00481b11                       ; 00481bd7
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP ESI,dword ptr [0x01c6b5b0]      ; 00481bdd | DAT_01c6b5b0
    JGE 0x00481b11                      ; 00481be3
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00481be9 | DAT_01c6b5ac
    JL 0x00481b11                       ; 00481bef
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP EDI,dword ptr [0x01c6b5b4]      ; 00481bf5 | DAT_01c6b5b4
    JGE 0x00481b11                      ; 00481bfb
        ;   XREF to: 00481b11 (CONDITIONAL_JUMP)  ; LAB_00481b11
    CMP dword ptr [0x01c5baec],0x0      ; 00481c01 | DAT_01c5baec
    JZ 0x00481c19                       ; 00481c08
        ;   XREF to: 00481c19 (CONDITIONAL_JUMP)  ; LAB_00481c19
    PUSH EDI                            ; 00481c0a
    PUSH ESI                            ; 00481c0b
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 00481c0c
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 00481c11
    JMP 0x00481b11                      ; 00481c14
        ;   XREF to: 00481b11 (UNCONDITIONAL_JUMP)  ; LAB_00481b11
    PUSH EDI                            ; 00481c19
        ;   Label: LAB_00481c19
    PUSH ESI                            ; 00481c1a
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00481c1b
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00481c20
    JMP 0x00481b11                      ; 00481c23
        ;   XREF to: 00481b11 (UNCONDITIONAL_JUMP)  ; LAB_00481b11
    CMP EDI,dword ptr [0x005fba1c]      ; 00481c28 | DAT_005fba1c
        ;   Label: LAB_00481c28
    JGE 0x00481b25                      ; 00481c2e
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EBP,dword ptr [0x01c6b5a8]      ; 00481c34 | DAT_01c6b5a8
    JL 0x00481b25                       ; 00481c3a
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EBP,dword ptr [0x01c6b5b0]      ; 00481c40 | DAT_01c6b5b0
    JGE 0x00481b25                      ; 00481c46
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00481c4c | DAT_01c6b5ac
    JL 0x00481b25                       ; 00481c52
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EDI,dword ptr [0x01c6b5b4]      ; 00481c58 | DAT_01c6b5b4
    JGE 0x00481b25                      ; 00481c5e
        ;   XREF to: 00481b25 (CONDITIONAL_JUMP)  ; LAB_00481b25
    CMP dword ptr [0x01c5baec],0x0      ; 00481c64 | DAT_01c5baec
    JZ 0x00481c7c                       ; 00481c6b
        ;   XREF to: 00481c7c (CONDITIONAL_JUMP)  ; LAB_00481c7c
    PUSH EDI                            ; 00481c6d
    PUSH EBP                            ; 00481c6e
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 00481c6f
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 00481c74
    JMP 0x00481b25                      ; 00481c77
        ;   XREF to: 00481b25 (UNCONDITIONAL_JUMP)  ; LAB_00481b25
    PUSH EDI                            ; 00481c7c
        ;   Label: LAB_00481c7c
    PUSH EBP                            ; 00481c7d
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00481c7e
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00481c83
    JMP 0x00481b25                      ; 00481c86
        ;   XREF to: 00481b25 (UNCONDITIONAL_JUMP)  ; LAB_00481b25
    CMP EBX,dword ptr [0x005fba1c]      ; 00481c8b | DAT_005fba1c
        ;   Label: LAB_00481c8b
    JGE 0x00481b39                      ; 00481c91
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP ESI,dword ptr [0x01c6b5a8]      ; 00481c97 | DAT_01c6b5a8
    JL 0x00481b39                       ; 00481c9d
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP ESI,dword ptr [0x01c6b5b0]      ; 00481ca3 | DAT_01c6b5b0
    JGE 0x00481b39                      ; 00481ca9
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP EBX,dword ptr [0x01c6b5ac]      ; 00481caf | DAT_01c6b5ac
    JL 0x00481b39                       ; 00481cb5
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP EBX,dword ptr [0x01c6b5b4]      ; 00481cbb | DAT_01c6b5b4
    JGE 0x00481b39                      ; 00481cc1
        ;   XREF to: 00481b39 (CONDITIONAL_JUMP)  ; LAB_00481b39
    CMP dword ptr [0x01c5baec],0x0      ; 00481cc7 | DAT_01c5baec
    JZ 0x00481cdf                       ; 00481cce
        ;   XREF to: 00481cdf (CONDITIONAL_JUMP)  ; LAB_00481cdf
    PUSH EBX                            ; 00481cd0
    PUSH ESI                            ; 00481cd1
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 00481cd2
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 00481cd7
    JMP 0x00481b39                      ; 00481cda
        ;   XREF to: 00481b39 (UNCONDITIONAL_JUMP)  ; LAB_00481b39
    PUSH EBX                            ; 00481cdf
        ;   Label: LAB_00481cdf
    PUSH ESI                            ; 00481ce0
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00481ce1
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00481ce6
    JMP 0x00481b39                      ; 00481ce9
        ;   XREF to: 00481b39 (UNCONDITIONAL_JUMP)  ; LAB_00481b39
    CMP EBX,dword ptr [0x005fba1c]      ; 00481cee | DAT_005fba1c
        ;   Label: LAB_00481cee
    JGE 0x00481b4d                      ; 00481cf4
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP EBP,dword ptr [0x01c6b5a8]      ; 00481cfa | DAT_01c6b5a8
    JL 0x00481b4d                       ; 00481d00
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP EBP,dword ptr [0x01c6b5b0]      ; 00481d06 | DAT_01c6b5b0
    JGE 0x00481b4d                      ; 00481d0c
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP EBX,dword ptr [0x01c6b5ac]      ; 00481d12 | DAT_01c6b5ac
    JL 0x00481b4d                       ; 00481d18
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP EBX,dword ptr [0x01c6b5b4]      ; 00481d1e | DAT_01c6b5b4
    JGE 0x00481b4d                      ; 00481d24
        ;   XREF to: 00481b4d (CONDITIONAL_JUMP)  ; LAB_00481b4d
    CMP dword ptr [0x01c5baec],0x0      ; 00481d2a | DAT_01c5baec
    JZ 0x00481d4f                       ; 00481d31
        ;   XREF to: 00481d4f (CONDITIONAL_JUMP)  ; LAB_00481d4f
    PUSH EBX                            ; 00481d33
    PUSH EBP                            ; 00481d34
    CALL engine_mini3d.cpp_drawPixel_FUN_004f36e0 ; 00481d35
        ;   XREF to: 004f36e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawPixel_FUN_004f36e0(int x, int y)
    ADD ESP,0x8                         ; 00481d3a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00481d3d
    INC ESI                             ; 00481d41
    DEC EBP                             ; 00481d42
    DEC EBX                             ; 00481d43
    DEC EAX                             ; 00481d44
    INC EDI                             ; 00481d45
    MOV dword ptr [ESP + 0x24],EAX      ; 00481d46
    JMP 0x00481af4                      ; 00481d4a
        ;   XREF to: 00481af4 (UNCONDITIONAL_JUMP)  ; LAB_00481af4
    PUSH EBX                            ; 00481d4f
        ;   Label: LAB_00481d4f
    PUSH EBP                            ; 00481d50
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00481d51
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00481d56
    MOV EAX,dword ptr [ESP + 0x24]      ; 00481d59
    INC ESI                             ; 00481d5d
    DEC EBP                             ; 00481d5e
    DEC EBX                             ; 00481d5f
    DEC EAX                             ; 00481d60
    INC EDI                             ; 00481d61
    MOV dword ptr [ESP + 0x24],EAX      ; 00481d62
    JMP 0x00481af4                      ; 00481d66
        ;   XREF to: 00481af4 (UNCONDITIONAL_JUMP)  ; LAB_00481af4

