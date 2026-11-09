; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046de6e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303fc
;   undefined4 DAT_007e3e88
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b5
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_asgaya.cpp_FUN_005a1ea0
;   core_main.c_FUN_004e4330
;   core_xform.cpp_transformAndClipGeometry_FUN_00587cd0
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   unkafter_dpart.cpp_FUN_004673d0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0046de6e
        ;   Label: engine_drender.cpp_FUN_0046de6e
    PUSH EBX                            ; 0046de70
    PUSH ESI                            ; 0046de71
    PUSH EDI                            ; 0046de72
    PUSH EBP                            ; 0046de73
    SUB ESP,0x58                        ; 0046de74
    MOV EBX,dword ptr [ESP + 0x70]      ; 0046de77
    MOV ESI,dword ptr [ESP + 0x74]      ; 0046de7b
    MOV EBP,dword ptr [ESP + 0x78]      ; 0046de7f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0046de83
    CMP EDI,-0x1                        ; 0046de87
    JNZ 0x0046de91                      ; 0046de8a
        ;   XREF to: 0046de91 (CONDITIONAL_JUMP)  ; LAB_0046de91
    MOV EDI,0x2cd                       ; 0046de8c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046de91
        ;   Label: LAB_0046de91
    CMP dword ptr [EAX + 0x1c],0x0      ; 0046de95
    JZ 0x0046debd                       ; 0046de99
        ;   XREF to: 0046debd (CONDITIONAL_JUMP)  ; LAB_0046debd
    MOV ECX,0x5bc645                    ; 0046de9b
    MOV EAX,0xa6a                       ; 0046dea0
    PUSH 0x5bc65b                       ; 0046dea5
    MOV dword ptr [0x01d71de0],ECX      ; 0046deaa | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0046deb0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046deb5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046deba
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046debd
        ;   Label: LAB_0046debd
    CMP dword ptr [EAX + 0x4],0x0       ; 0046dec1
    JZ 0x0046dfab                       ; 0046dec5
        ;   XREF to: 0046dfab (CONDITIONAL_JUMP)  ; LAB_0046dfab
    XOR EDX,EDX                         ; 0046decb
    MOV EAX,0x46f9a6                    ; 0046decd
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046ded2 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046ded8 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046dede | DAT_01c6b5cc
    TEST ESI,ESI                        ; 0046dee3
    JLE 0x0046df5f                      ; 0046dee5
        ;   XREF to: 0046df5f (CONDITIONAL_JUMP)  ; LAB_0046df5f
    LEA EAX,[EBP + EBP*0x1]             ; 0046deeb
    MOV dword ptr [ESP + 0x50],EAX      ; 0046deef
    CMP dword ptr [0x007303fc],0x0      ; 0046def3 | DAT_007303fc
        ;   Label: LAB_0046def3
    JNZ 0x0046df67                      ; 0046defa
        ;   XREF to: 0046df67 (CONDITIONAL_JUMP)  ; LAB_0046df67
    XOR EDX,EDX                         ; 0046df00
        ;   Label: LAB_0046df00
    TEST EBP,EBP                        ; 0046df02
    JLE 0x0046df25                      ; 0046df04
        ;   XREF to: 0046df25 (CONDITIONAL_JUMP)  ; LAB_0046df25
    MOV EAX,EBX                         ; 0046df06
    XOR ECX,ECX                         ; 0046df08
    CMP word ptr [EAX],-0x1             ; 0046df0a
        ;   Label: LAB_0046df0a
    JZ 0x0046df25                       ; 0046df0e
        ;   XREF to: 0046df25 (CONDITIONAL_JUMP)  ; LAB_0046df25
    ADD EAX,0x2                         ; 0046df10
    XOR EDI,EDI                         ; 0046df13
    ADD ECX,0x4                         ; 0046df15
    MOV DI,word ptr [EAX + -0x2]        ; 0046df18
    INC EDX                             ; 0046df1c
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0046df1d
    CMP EDX,EBP                         ; 0046df21
    JL 0x0046df0a                       ; 0046df23
        ;   XREF to: 0046df0a (CONDITIONAL_JUMP)  ; LAB_0046df0a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046df25
        ;   Label: LAB_0046df25
    CMP dword ptr [EAX + 0x10],0x0      ; 0046df29
    JZ 0x0046df9e                       ; 0046df2d
        ;   XREF to: 0046df9e (CONDITIONAL_JUMP)  ; LAB_0046df9e
    MOV EAX,ESP                         ; 0046df2f
    PUSH EAX                            ; 0046df31
    PUSH EDX                            ; 0046df32
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00587cd0 ; 0046df33
        ;   XREF to: 00587cd0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count, int * vertex_indices)
    MOV EDI,dword ptr [0x007e3e88]      ; 0046df38 | DAT_007e3e88
    ADD ESP,0x8                         ; 0046df3e
    CMP EDI,0x2                         ; 0046df41
    JLE 0x0046df54                      ; 0046df44
        ;   XREF to: 0046df54 (CONDITIONAL_JUMP)  ; LAB_0046df54
    PUSH EDI                            ; 0046df46
    PUSH 0x7e3e8c                       ; 0046df47
    CALL core_asgaya.cpp_FUN_005a1ea0   ; 0046df4c
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; undefined core_asgaya.cpp_FUN_005a1ea0()
    ADD ESP,0x8                         ; 0046df51
        ;   Label: LAB_0046df51
    MOV EDX,dword ptr [ESP + 0x50]      ; 0046df54
        ;   Label: LAB_0046df54
    DEC ESI                             ; 0046df58
    ADD EBX,EDX                         ; 0046df59
    TEST ESI,ESI                        ; 0046df5b
        ;   Label: LAB_0046df5b
    JG 0x0046def3                       ; 0046df5d
        ;   XREF to: 0046def3 (CONDITIONAL_JUMP)  ; LAB_0046def3
    ADD ESP,0x58                        ; 0046df5f
        ;   Label: LAB_0046df5f
    POP EBP                             ; 0046df62
    POP EDI                             ; 0046df63
    POP ESI                             ; 0046df64
    POP EBX                             ; 0046df65
    RET                                 ; 0046df66
    XOR EDX,EDX                         ; 0046df67
        ;   Label: LAB_0046df67
    MOV DX,word ptr [EBX + 0x2]         ; 0046df69
    IMUL EDX,EDX,0x30                   ; 0046df6d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046df70
    MOV EAX,dword ptr [EAX]             ; 0046df74
    ADD EDX,EAX                         ; 0046df76
    PUSH EDX                            ; 0046df78
    PUSH EDX                            ; 0046df79
    XOR EDX,EDX                         ; 0046df7a
    MOV DX,word ptr [EBX]               ; 0046df7c
    IMUL EDX,EDX,0x30                   ; 0046df7f
    ADD EAX,EDX                         ; 0046df82
    PUSH EAX                            ; 0046df84
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0046df85
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 0046df8a
    TEST EAX,EAX                        ; 0046df8d
    JNZ 0x0046df00                      ; 0046df8f
        ;   XREF to: 0046df00 (CONDITIONAL_JUMP)  ; LAB_0046df00
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046df95
    DEC ESI                             ; 0046df99
    ADD EBX,EAX                         ; 0046df9a
    JMP 0x0046df5b                      ; 0046df9c
        ;   XREF to: 0046df5b (UNCONDITIONAL_JUMP)  ; LAB_0046df5b
    PUSH EDX                            ; 0046df9e
        ;   Label: LAB_0046df9e
    LEA EAX,[ESP + 0x4]                 ; 0046df9f
    PUSH EAX                            ; 0046dfa3
    CALL unkafter_dpart.cpp_FUN_004673d0 ; 0046dfa4
        ;   XREF to: 004673d0 (UNCONDITIONAL_CALL)  ; void unkafter_dpart.cpp_FUN_004673d0(CVector3i * vertex_indices, int vertex_count)
    JMP 0x0046df51                      ; 0046dfa9
        ;   XREF to: 0046df51 (UNCONDITIONAL_JUMP)  ; LAB_0046df51
    CMP EDI,0xc0                        ; 0046dfab
        ;   Label: LAB_0046dfab
    JNZ 0x0046e049                      ; 0046dfb1
        ;   XREF to: 0046e049 (CONDITIONAL_JUMP)  ; LAB_0046e049
    MOV dword ptr [0x01c6b5cc],0x46f960 ; 0046dfb7 | DAT_01c6b5cc
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046dfc1 | DAT_01c6e2b4
        ;   Label: LAB_0046dfc1
    MOV dword ptr [0x01c6e2b8],0x6      ; 0046dfc7 | DAT_01c6e2b8
    TEST ESI,ESI                        ; 0046dfd1
    JLE 0x0046df5f                      ; 0046dfd3
        ;   XREF to: 0046df5f (CONDITIONAL_JUMP)  ; LAB_0046df5f
    LEA EAX,[EBP + EBP*0x1]             ; 0046dfd5
    MOV dword ptr [ESP + 0x54],EAX      ; 0046dfd9
    CMP dword ptr [0x007303fc],0x0      ; 0046dfdd | DAT_007303fc
        ;   Label: LAB_0046dfdd
    JNZ 0x0046e070                      ; 0046dfe4
        ;   XREF to: 0046e070 (CONDITIONAL_JUMP)  ; LAB_0046e070
    XOR EDX,EDX                         ; 0046dfea
        ;   Label: LAB_0046dfea
    TEST EBP,EBP                        ; 0046dfec
    JLE 0x0046e00f                      ; 0046dfee
        ;   XREF to: 0046e00f (CONDITIONAL_JUMP)  ; LAB_0046e00f
    MOV EAX,EBX                         ; 0046dff0
    XOR ECX,ECX                         ; 0046dff2
    CMP word ptr [EAX],-0x1             ; 0046dff4
        ;   Label: LAB_0046dff4
    JZ 0x0046e00f                       ; 0046dff8
        ;   XREF to: 0046e00f (CONDITIONAL_JUMP)  ; LAB_0046e00f
    ADD EAX,0x2                         ; 0046dffa
    XOR EDI,EDI                         ; 0046dffd
    ADD ECX,0x4                         ; 0046dfff
    MOV DI,word ptr [EAX + -0x2]        ; 0046e002
    INC EDX                             ; 0046e006
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0046e007
    CMP EDX,EBP                         ; 0046e00b
    JL 0x0046dff4                       ; 0046e00d
        ;   XREF to: 0046dff4 (CONDITIONAL_JUMP)  ; LAB_0046dff4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046e00f
        ;   Label: LAB_0046e00f
    CMP dword ptr [EAX + 0x10],0x0      ; 0046e013
    JZ 0x0046e0c3                       ; 0046e017
        ;   XREF to: 0046e0c3 (CONDITIONAL_JUMP)  ; LAB_0046e0c3
    TEST byte ptr [0x01c6e2b5],0x2      ; 0046e01d | DAT_01c6e2b5
    JZ 0x0046e0b5                       ; 0046e024
        ;   XREF to: 0046e0b5 (CONDITIONAL_JUMP)  ; LAB_0046e0b5
    MOV EAX,ESP                         ; 0046e02a
        ;   Label: LAB_0046e02a
    PUSH EAX                            ; 0046e02c
    PUSH EDX                            ; 0046e02d
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 ; 0046e02e
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043bac0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0046e033
        ;   Label: LAB_0046e033
    MOV ECX,dword ptr [ESP + 0x54]      ; 0046e036
        ;   Label: LAB_0046e036
    DEC ESI                             ; 0046e03a
    ADD EBX,ECX                         ; 0046e03b
    TEST ESI,ESI                        ; 0046e03d
    JG 0x0046dfdd                       ; 0046e03f
        ;   XREF to: 0046dfdd (CONDITIONAL_JUMP)  ; LAB_0046dfdd
    ADD ESP,0x58                        ; 0046e041
    POP EBP                             ; 0046e044
    POP EDI                             ; 0046e045
    POP ESI                             ; 0046e046
    POP EBX                             ; 0046e047
    RET                                 ; 0046e048
    CMP dword ptr [0x005fba20],0x20     ; 0046e049 | DAT_005fba20
        ;   Label: LAB_0046e049
    JNZ 0x0046e061                      ; 0046e050
        ;   XREF to: 0046e061 (CONDITIONAL_JUMP)  ; LAB_0046e061
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046e052 | DAT_01c6b5cc
    JMP 0x0046dfc1                      ; 0046e05c
        ;   XREF to: 0046dfc1 (UNCONDITIONAL_JUMP)  ; LAB_0046dfc1
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046e061 | DAT_01c6b5cc
        ;   Label: LAB_0046e061
    JMP 0x0046dfc1                      ; 0046e06b
        ;   XREF to: 0046dfc1 (UNCONDITIONAL_JUMP)  ; LAB_0046dfc1
    XOR EAX,EAX                         ; 0046e070
        ;   Label: LAB_0046e070
    MOV AX,word ptr [EBX + 0x2]         ; 0046e072
    IMUL EDX,EAX,0x30                   ; 0046e076
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046e079
    MOV EAX,dword ptr [EAX]             ; 0046e07d
    ADD EDX,EAX                         ; 0046e07f
    PUSH EDX                            ; 0046e081
    PUSH EDX                            ; 0046e082
    XOR EDX,EDX                         ; 0046e083
    MOV DX,word ptr [EBX]               ; 0046e085
    IMUL EDX,EDX,0x30                   ; 0046e088
    ADD EAX,EDX                         ; 0046e08b
    PUSH EAX                            ; 0046e08d
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0046e08e
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 0046e093
    TEST EAX,EAX                        ; 0046e096
    JNZ 0x0046dfea                      ; 0046e098
        ;   XREF to: 0046dfea (CONDITIONAL_JUMP)  ; LAB_0046dfea
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046e09e
    DEC ESI                             ; 0046e0a2
    ADD EBX,EAX                         ; 0046e0a3
    TEST ESI,ESI                        ; 0046e0a5
    JG 0x0046dfdd                       ; 0046e0a7
        ;   XREF to: 0046dfdd (CONDITIONAL_JUMP)  ; LAB_0046dfdd
    ADD ESP,0x58                        ; 0046e0ad
    POP EBP                             ; 0046e0b0
    POP EDI                             ; 0046e0b1
    POP ESI                             ; 0046e0b2
    POP EBX                             ; 0046e0b3
    RET                                 ; 0046e0b4
    MOV EAX,ESP                         ; 0046e0b5
        ;   Label: LAB_0046e0b5
    PUSH EAX                            ; 0046e0b7
    PUSH EDX                            ; 0046e0b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0046e0b9
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    JMP 0x0046e033                      ; 0046e0be
        ;   XREF to: 0046e033 (UNCONDITIONAL_JUMP)  ; LAB_0046e033
    CMP dword ptr [EAX + 0x4],0x0       ; 0046e0c3
        ;   Label: LAB_0046e0c3
    JZ 0x0046e0d2                       ; 0046e0c7
        ;   XREF to: 0046e0d2 (CONDITIONAL_JUMP)  ; LAB_0046e0d2
    TEST byte ptr [0x01c6e2b4],0x1      ; 0046e0c9 | DAT_01c6e2b4
    JZ 0x0046e0e9                       ; 0046e0d0
        ;   XREF to: 0046e0e9 (CONDITIONAL_JUMP)  ; LAB_0046e0e9
    TEST byte ptr [0x01c6e2b4],0x5      ; 0046e0d2 | DAT_01c6e2b4
        ;   Label: LAB_0046e0d2
    JZ 0x0046e0e9                       ; 0046e0d9
        ;   XREF to: 0046e0e9 (CONDITIONAL_JUMP)  ; LAB_0046e0e9
    TEST byte ptr [0x01c6e2b5],0x2      ; 0046e0db | DAT_01c6e2b5
    JZ 0x0046e0b5                       ; 0046e0e2
        ;   XREF to: 0046e0b5 (CONDITIONAL_JUMP)  ; LAB_0046e0b5
    JMP 0x0046e02a                      ; 0046e0e4
        ;   XREF to: 0046e02a (UNCONDITIONAL_JUMP)  ; LAB_0046e02a
    MOV EAX,ESP                         ; 0046e0e9
        ;   Label: LAB_0046e0e9
    PUSH EAX                            ; 0046e0eb
    PUSH EDX                            ; 0046e0ec
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00587cd0 ; 0046e0ed
        ;   XREF to: 00587cd0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007e3e88]                ; 0046e0f2 | DAT_007e3e88
    ADD ESP,0x8                         ; 0046e0f7
    CMP EAX,0x2                         ; 0046e0fa
    JLE 0x0046e036                      ; 0046e0fd
        ;   XREF to: 0046e036 (CONDITIONAL_JUMP)  ; LAB_0046e036
    PUSH EAX                            ; 0046e103
    PUSH 0x7e3e8c                       ; 0046e104
    CALL core_asgaya.cpp_FUN_005a1ea0   ; 0046e109
        ;   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)  ; undefined core_asgaya.cpp_FUN_005a1ea0()
    JMP 0x0046e033                      ; 0046e10e
        ;   XREF to: 0046e033 (UNCONDITIONAL_JUMP)  ; LAB_0046e033

