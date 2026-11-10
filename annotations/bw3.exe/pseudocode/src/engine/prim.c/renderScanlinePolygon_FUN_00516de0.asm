; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_renderScanlinePolygon_FUN_00516de0(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 at 0043bc75
;
; Referenced Globals:
;   void* switchdataD_00516db8 = 00516ef0
;   undefined4 DAT_005fba40
;   undefined4 DAT_007303f4
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_01ed319c
;   undefined4 DAT_01ed31a0
;   undefined4 DAT_01ed31f0
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_prim.c_normalizeTextureCoords_FUN_00515990
;   engine_prim.c_prepareDepthBuffer_FUN_00515920
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;   engine_special.cpp_drawPolygon_FUN_00565c10
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516de0
        ;   Label: engine_prim.c_renderScanlinePolygon_FUN_00516de0
    PUSH ESI                            ; 00516de1
    PUSH EDI                            ; 00516de2
    PUSH EBP                            ; 00516de3
    SUB ESP,0x14                        ; 00516de4
    CMP dword ptr [0x005fba40],0x0      ; 00516de7 | DAT_005fba40
    JZ 0x00516e57                       ; 00516dee
        ;   XREF to: 00516e57 (CONDITIONAL_JUMP)  ; LAB_00516e57
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00516df0
    MOV ECX,dword ptr [ESP + 0x28]      ; 00516df4
    XOR ESI,ESI                         ; 00516df8
    TEST EBX,EBX                        ; 00516dfa
    JLE 0x00516e57                      ; 00516dfc
        ;   XREF to: 00516e57 (CONDITIONAL_JUMP)  ; LAB_00516e57
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00516dfe
    TEST byte ptr [ECX + 0x13],0x80     ; 00516e02
        ;   Label: LAB_00516e02
    JZ 0x00516e4f                       ; 00516e06
        ;   XREF to: 00516e4f (CONDITIONAL_JUMP)  ; LAB_00516e4f
    MOV EAX,0x7fffffff                  ; 00516e08
    MOV EDX,EAX                         ; 00516e0d
    MOV EBX,dword ptr [ECX + 0x8]       ; 00516e0f
    SAR EDX,0x1f                        ; 00516e12
    IDIV EBX                            ; 00516e15
    MOV dword ptr [ECX + 0xc],EAX       ; 00516e17
    MOV EDX,dword ptr [0x01c6b598]      ; 00516e1a | DAT_01c6b598
    MOV EBX,dword ptr [ECX + 0x8]       ; 00516e20
    MOV EAX,dword ptr [ECX]             ; 00516e23
    IMUL EDX                            ; 00516e25
    IDIV EBX                            ; 00516e27
    MOV EDX,dword ptr [0x01c6b5a0]      ; 00516e29 | DAT_01c6b5a0
    ADD EAX,EDX                         ; 00516e2f
    MOV EBX,dword ptr [ECX + 0x8]       ; 00516e31
    MOV dword ptr [ECX + 0x10],EAX      ; 00516e34
    MOV EDX,dword ptr [0x01c6b59c]      ; 00516e37 | DAT_01c6b59c
    MOV EAX,dword ptr [ECX + 0x4]       ; 00516e3d
    IMUL EDX                            ; 00516e40
    IDIV EBX                            ; 00516e42
    MOV EDX,dword ptr [0x01c6b5a4]      ; 00516e44 | DAT_01c6b5a4
    ADD EAX,EDX                         ; 00516e4a
    MOV dword ptr [ECX + 0x14],EAX      ; 00516e4c
    INC ESI                             ; 00516e4f
        ;   Label: LAB_00516e4f
    ADD ECX,0x30                        ; 00516e50
    CMP ESI,EDI                         ; 00516e53
    JL 0x00516e02                       ; 00516e55
        ;   XREF to: 00516e02 (CONDITIONAL_JUMP)  ; LAB_00516e02
    CMP dword ptr [0x007303fc],0x0      ; 00516e57 | DAT_007303fc
        ;   Label: LAB_00516e57
    JZ 0x00516ebc                       ; 00516e5e
        ;   XREF to: 00516ebc (CONDITIONAL_JUMP)  ; LAB_00516ebc
    MOV EAX,dword ptr [ESP + 0x28]      ; 00516e60
    MOV EBX,dword ptr [ESP + 0x28]      ; 00516e64
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00516e68
    ADD EAX,0x30                        ; 00516e6c
    ADD EBX,0x60                        ; 00516e6f
    CMP EDX,0x3                         ; 00516e72
    JLE 0x00517088                      ; 00516e75
        ;   XREF to: 00517088 (CONDITIONAL_JUMP)  ; LAB_00517088
    SUB EDX,0x2                         ; 00516e7b
    MOV EDI,EAX                         ; 00516e7e
    XOR ESI,ESI                         ; 00516e80
    XOR EBP,EBP                         ; 00516e82
    MOV dword ptr [ESP + 0x4],EDX       ; 00516e84
    TEST EDX,EDX                        ; 00516e88
    JLE 0x00516eb2                      ; 00516e8a
        ;   XREF to: 00516eb2 (CONDITIONAL_JUMP)  ; LAB_00516eb2
    PUSH EBX                            ; 00516e8c
        ;   Label: LAB_00516e8c
    PUSH EDI                            ; 00516e8d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00516e8e
    PUSH EAX                            ; 00516e92
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 00516e93
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 00516e98
    TEST EAX,EAX                        ; 00516e9b
    JZ 0x00517082                       ; 00516e9d
        ;   XREF to: 00517082 (CONDITIONAL_JUMP)  ; LAB_00517082
    MOV EDX,dword ptr [ESP + 0x4]       ; 00516ea3
        ;   Label: LAB_00516ea3
    ADD EDI,0x30                        ; 00516ea7
    INC ESI                             ; 00516eaa
    ADD EBX,0x30                        ; 00516eab
    CMP ESI,EDX                         ; 00516eae
    JL 0x00516e8c                       ; 00516eb0
        ;   XREF to: 00516e8c (CONDITIONAL_JUMP)  ; LAB_00516e8c
    CMP EBP,dword ptr [ESP + 0x4]       ; 00516eb2
        ;   Label: LAB_00516eb2
    JZ 0x0051707a                       ; 00516eb6
        ;   XREF to: 0051707a (CONDITIONAL_JUMP)  ; LAB_0051707a
    CMP dword ptr [0x01c6cee8],0x0      ; 00516ebc | DAT_01c6cee8
        ;   Label: LAB_00516ebc
    JZ 0x00516ed2                       ; 00516ec3
        ;   XREF to: 00516ed2 (CONDITIONAL_JUMP)  ; LAB_00516ed2
    CMP dword ptr [0x007303f4],0x0      ; 00516ec5 | DAT_007303f4
    JZ 0x005170a7                       ; 00516ecc
        ;   XREF to: 005170a7 (CONDITIONAL_JUMP)  ; LAB_005170a7
    MOV EBX,dword ptr [0x01ed3198]      ; 00516ed2 | DAT_01ed3198
        ;   Label: LAB_00516ed2
    INC EBX                             ; 00516ed8
    MOV EAX,[0x01c6e2b8]                ; 00516ed9 | DAT_01c6e2b8
    MOV dword ptr [0x01ed3198],EBX      ; 00516ede | DAT_01ed3198
    CMP EAX,0x6                         ; 00516ee4
    JA 0x00516ef0                       ; 00516ee7
        ;   XREF to: 00516ef0 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x516db8]  ; 00516ee9 | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 00516ef0
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 00516ef5
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00516ef7
    MOV dword ptr [0x01ed36a4],EDX      ; 00516efb | DAT_01ed36a4
    MOV dword ptr [0x01ed319c],EDX      ; 00516f01 | DAT_01ed319c
    MOV dword ptr [ESP + 0x8],EDX       ; 00516f07
    MOV [0x01ed36a0],EAX                ; 00516f0b | DAT_01ed36a0
    TEST ESI,ESI                        ; 00516f10
    JLE 0x00516f5e                      ; 00516f12
        ;   XREF to: 00516f5e (CONDITIONAL_JUMP)  ; LAB_00516f5e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00516f14
        ;   Label: LAB_00516f14
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00516f18
    INC EAX                             ; 00516f1c
    CMP EAX,EDI                         ; 00516f1d
    JL 0x00516f23                       ; 00516f1f
        ;   XREF to: 00516f23 (CONDITIONAL_JUMP)  ; LAB_00516f23
    XOR EAX,EAX                         ; 00516f21
    IMUL EAX,EAX,0x30                   ; 00516f23
        ;   Label: LAB_00516f23
    IMUL ESI,dword ptr [ESP + 0x8],0x30 ; 00516f26
    MOV ECX,dword ptr [ESP + 0x28]      ; 00516f2b
    ADD ECX,EAX                         ; 00516f2f
    ADD ESI,dword ptr [ESP + 0x28]      ; 00516f31
    MOV EDI,ECX                         ; 00516f35
    MOV EDX,dword ptr [ESI + 0x14]      ; 00516f37
    MOV EAX,dword ptr [ECX + 0x14]      ; 00516f3a
    SAR EDX,0x10                        ; 00516f3d
    SAR EAX,0x10                        ; 00516f40
    MOV EBX,ESI                         ; 00516f43
    CMP EDX,EAX                         ; 00516f45
    JNZ 0x0051714c                      ; 00516f47
        ;   XREF to: 0051714c (CONDITIONAL_JUMP)  ; LAB_0051714c
    MOV ECX,dword ptr [ESP + 0x8]       ; 00516f4d
        ;   Label: LAB_00516f4d
    INC ECX                             ; 00516f51
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00516f52
    MOV dword ptr [ESP + 0x8],ECX       ; 00516f56
    CMP ECX,EBX                         ; 00516f5a
    JL 0x00516f14                       ; 00516f5c
        ;   XREF to: 00516f14 (CONDITIONAL_JUMP)  ; LAB_00516f14
    MOV EAX,0x1ed31a0                   ; 00516f5e
        ;   Label: LAB_00516f5e
    MOV ESI,dword ptr [0x01ed319c]      ; 00516f63 | DAT_01ed319c
    MOV EBX,dword ptr [0x01ed36a0]      ; 00516f69 | DAT_01ed36a0
    XOR ECX,ECX                         ; 00516f6f
    TEST ESI,ESI                        ; 00516f71
    JLE 0x0051733a                      ; 00516f73
        ;   XREF to: 0051733a (CONDITIONAL_JUMP)  ; LAB_0051733a
    MOV EDX,dword ptr [0x01ed319c]      ; 00516f79 | DAT_01ed319c
    CMP EBX,dword ptr [EAX]             ; 00516f7f | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00516f7f
    JNZ 0x0051732e                      ; 00516f81
        ;   XREF to: 0051732e (CONDITIONAL_JUMP)  ; LAB_0051732e
    TEST EAX,EAX                        ; 00516f87
    JZ 0x0051732e                       ; 00516f89
        ;   XREF to: 0051732e (CONDITIONAL_JUMP)  ; LAB_0051732e
    MOV EBP,EAX                         ; 00516f8f
        ;   Label: LAB_00516f8f
    TEST EAX,EAX                        ; 00516f91
    JZ 0x0051707a                       ; 00516f93
        ;   XREF to: 0051707a (CONDITIONAL_JUMP)  ; LAB_0051707a
    MOV EDI,dword ptr [0x01ed319c]      ; 00516f99 | DAT_01ed319c
    MOV EBX,dword ptr [0x01ed36a0]      ; 00516f9f | DAT_01ed36a0
    MOV ECX,EAX                         ; 00516fa5
    XOR EDX,EDX                         ; 00516fa7
    MOV EAX,0x1ed31a0                   ; 00516fa9
    TEST EDI,EDI                        ; 00516fae
    JLE 0x0051734d                      ; 00516fb0
        ;   XREF to: 0051734d (CONDITIONAL_JUMP)  ; LAB_0051734d
    MOV ESI,dword ptr [0x01ed319c]      ; 00516fb6 | DAT_01ed319c
    CMP EBX,dword ptr [EAX]             ; 00516fbc | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00516fbc
    JNZ 0x00517341                      ; 00516fbe
        ;   XREF to: 00517341 (CONDITIONAL_JUMP)  ; LAB_00517341
    CMP EAX,ECX                         ; 00516fc4
    JZ 0x00517341                       ; 00516fc6
        ;   XREF to: 00517341 (CONDITIONAL_JUMP)  ; LAB_00517341
    MOV dword ptr [ESP + 0x10],EAX      ; 00516fcc | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00516fcc
    TEST EAX,EAX                        ; 00516fd0
    JZ 0x0051707a                       ; 00516fd2
        ;   XREF to: 0051707a (CONDITIONAL_JUMP)  ; LAB_0051707a
    MOV EAX,[0x01ed36a0]                ; 00516fd8 | DAT_01ed36a0
    MOV dword ptr [ESP + 0xc],EAX       ; 00516fdd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00516fe1
        ;   Label: LAB_00516fe1
    CMP EAX,dword ptr [EBP + 0x4]       ; 00516fe5
    JL 0x00517028                       ; 00516fe8
        ;   XREF to: 00517028 (CONDITIONAL_JUMP)  ; LAB_00517028
    MOV EBX,dword ptr [ESP + 0x10]      ; 00516fea
    MOV ESI,dword ptr [0x01ed319c]      ; 00516fee | DAT_01ed319c
    MOV ECX,EAX                         ; 00516ff4
    MOV dword ptr [EBP],0xffffffff      ; 00516ff6
    XOR EDX,EDX                         ; 00516ffd
    MOV EAX,0x1ed31a0                   ; 00516fff
    TEST ESI,ESI                        ; 00517004
    JLE 0x00517360                      ; 00517006
        ;   XREF to: 00517360 (CONDITIONAL_JUMP)  ; LAB_00517360
    MOV EDI,dword ptr [0x01ed319c]      ; 0051700c | DAT_01ed319c
    CMP ECX,dword ptr [EAX]             ; 00517012 | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_00517012
    JNZ 0x00517354                      ; 00517014
        ;   XREF to: 00517354 (CONDITIONAL_JUMP)  ; LAB_00517354
    CMP EAX,EBX                         ; 0051701a
    JZ 0x00517354                       ; 0051701c
        ;   XREF to: 00517354 (CONDITIONAL_JUMP)  ; LAB_00517354
    MOV EBP,EAX                         ; 00517022
        ;   Label: LAB_00517022
    TEST EAX,EAX                        ; 00517024
    JZ 0x0051707a                       ; 00517026
        ;   XREF to: 0051707a (CONDITIONAL_JUMP)  ; LAB_0051707a
    MOV EDX,dword ptr [ESP + 0x10]      ; 00517028
        ;   Label: LAB_00517028
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051702c
    CMP EAX,dword ptr [EDX + 0x4]       ; 00517030
    JL 0x00517385                       ; 00517033
        ;   XREF to: 00517385 (CONDITIONAL_JUMP)  ; LAB_00517385
    MOV ESI,dword ptr [0x01ed319c]      ; 00517039 | DAT_01ed319c
    MOV EBX,EAX                         ; 0051703f
    MOV ECX,EBP                         ; 00517041
    MOV dword ptr [EDX],0xffffffff      ; 00517043
    MOV EAX,0x1ed31a0                   ; 00517049
    XOR EDX,EDX                         ; 0051704e
    TEST ESI,ESI                        ; 00517050
    JLE 0x00517373                      ; 00517052
        ;   XREF to: 00517373 (CONDITIONAL_JUMP)  ; LAB_00517373
    MOV EDI,dword ptr [0x01ed319c]      ; 00517058 | DAT_01ed319c
    CMP EBX,dword ptr [EAX]             ; 0051705e | DAT_01ed31a0 | DAT_01ed31f0
        ;   Label: LAB_0051705e
    JNZ 0x00517367                      ; 00517060
        ;   XREF to: 00517367 (CONDITIONAL_JUMP)  ; LAB_00517367
    CMP EAX,ECX                         ; 00517066
    JZ 0x00517367                       ; 00517068
        ;   XREF to: 00517367 (CONDITIONAL_JUMP)  ; LAB_00517367
    MOV dword ptr [ESP + 0x10],EAX      ; 0051706e | DAT_01ed31f0 | DAT_01ed31a0
    TEST EAX,EAX                        ; 00517072
    JNZ 0x00517385                      ; 00517074
        ;   XREF to: 00517385 (CONDITIONAL_JUMP)  ; LAB_00517385
    ADD ESP,0x14                        ; 0051707a
        ;   Label: LAB_0051707a
    POP EBP                             ; 0051707d
    POP EDI                             ; 0051707e
    POP ESI                             ; 0051707f
    POP EBX                             ; 00517080
    RET                                 ; 00517081
    INC EBP                             ; 00517082
        ;   Label: LAB_00517082
    JMP 0x00516ea3                      ; 00517083
        ;   XREF to: 00516ea3 (UNCONDITIONAL_JUMP)  ; LAB_00516ea3
    PUSH EBX                            ; 00517088
        ;   Label: LAB_00517088
    PUSH EAX                            ; 00517089
    MOV ECX,dword ptr [ESP + 0x30]      ; 0051708a
    PUSH ECX                            ; 0051708e
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0051708f
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0()
    ADD ESP,0xc                         ; 00517094
    TEST EAX,EAX                        ; 00517097
    JNZ 0x00516ebc                      ; 00517099
        ;   XREF to: 00516ebc (CONDITIONAL_JUMP)  ; LAB_00516ebc
    ADD ESP,0x14                        ; 0051709f
    POP EBP                             ; 005170a2
    POP EDI                             ; 005170a3
    POP ESI                             ; 005170a4
    POP EBX                             ; 005170a5
    RET                                 ; 005170a6
    MOV EDI,dword ptr [0x01c6e2b4]      ; 005170a7 | DAT_01c6e2b4
        ;   Label: LAB_005170a7
    PUSH EDI                            ; 005170ad
    MOV EBP,dword ptr [ESP + 0x30]      ; 005170ae
    PUSH EBP                            ; 005170b2
    MOV EAX,dword ptr [ESP + 0x30]      ; 005170b3
    PUSH EAX                            ; 005170b7
    CALL engine_special.cpp_drawPolygon_FUN_00565c10 ; 005170b8
        ;   XREF to: 00565c10 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon_FUN_00565c10()
    MOV EDX,dword ptr [0x01ed3198]      ; 005170bd | DAT_01ed3198
    LEA EAX,[EBP + -0x2]                ; 005170c3
    ADD EDX,EAX                         ; 005170c6
    ADD ESP,0xc                         ; 005170c8
    MOV dword ptr [0x01ed3198],EDX      ; 005170cb | DAT_01ed3198
    ADD ESP,0x14                        ; 005170d1
    POP EBP                             ; 005170d4
    POP EDI                             ; 005170d5
    POP ESI                             ; 005170d6
    POP EBX                             ; 005170d7
    RET                                 ; 005170d8
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005170d9
        ;   Label: caseD_1
    PUSH EDI                            ; 005170dd
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005170de
    PUSH EBP                            ; 005170e2
    CALL engine_prim.c_prepareDepthBuffer_FUN_00515920 ; 005170e3
        ;   XREF to: 00515920 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_00515920()
    ADD ESP,0x8                         ; 005170e8
    JMP 0x00516ef0                      ; 005170eb
        ;   XREF to: 00516ef0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005170f0
        ;   Label: caseD_2
    PUSH EBX                            ; 005170f4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005170f5
    PUSH ESI                            ; 005170f9
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 005170fa
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_00515990()
    ADD ESP,0x8                         ; 005170ff
    JMP 0x00516ef0                      ; 00517102
        ;   XREF to: 00516ef0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00517107
        ;   Label: caseD_3
    PUSH EDX                            ; 0051710b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051710c
    PUSH ECX                            ; 00517110
    CALL engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10 ; 00517111
        ;   XREF to: 00515a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_adjustNearPlaneTextureCoords_FUN_00515a10()
    ADD ESP,0x8                         ; 00517116
    JMP 0x00516ef0                      ; 00517119
        ;   XREF to: 00516ef0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0051711e
        ;   Label: caseD_5
    PUSH EBP                            ; 00517122
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00517123
    PUSH EAX                            ; 00517127
    CALL engine_prim.c_normalizeTextureCoords_FUN_00515990 ; 00517128
        ;   XREF to: 00515990 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_normalizeTextureCoords_FUN_00515990()
    ADD ESP,0x8                         ; 0051712d
    JMP 0x00516ef0                      ; 00517130
        ;   XREF to: 00516ef0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00517135
        ;   Label: caseD_6
    PUSH ESI                            ; 00517139
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0051713a
    PUSH EDI                            ; 0051713e
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 0051713f
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_00515a80()
    ADD ESP,0x8                         ; 00517144
    JMP 0x00516ef0                      ; 00517147
        ;   XREF to: 00516ef0 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESI + 0x14]      ; 0051714c
        ;   Label: LAB_0051714c
    CMP EBP,dword ptr [ECX + 0x14]      ; 0051714f
    JLE 0x0051715e                      ; 00517152
        ;   XREF to: 0051715e (CONDITIONAL_JUMP)  ; LAB_0051715e
    MOV EBX,ECX                         ; 00517154
    MOV EDI,ESI                         ; 00517156
    MOV ECX,EDX                         ; 00517158
    MOV EDX,EAX                         ; 0051715a
    MOV EAX,ECX                         ; 0051715c
    IMUL EBP,dword ptr [0x01ed319c],0x50 ; 0051715e | DAT_01ed319c
        ;   Label: LAB_0051715e
    ADD EBP,0x1ed31a0                   ; 00517165
    MOV dword ptr [EBP],EDX             ; 0051716b | DAT_01ed31a0
    MOV ESI,dword ptr [0x01ed36a0]      ; 0051716e | DAT_01ed36a0
    MOV dword ptr [EBP + 0x4],EAX       ; 00517174
    CMP EDX,ESI                         ; 00517177
    JGE 0x00517181                      ; 00517179
        ;   XREF to: 00517181 (CONDITIONAL_JUMP)  ; LAB_00517181
    MOV dword ptr [0x01ed36a0],EDX      ; 0051717b | DAT_01ed36a0
    CMP EAX,dword ptr [0x01ed36a4]      ; 00517181 | DAT_01ed36a4
        ;   Label: LAB_00517181
    JLE 0x0051718e                      ; 00517187
        ;   XREF to: 0051718e (CONDITIONAL_JUMP)  ; LAB_0051718e
    MOV [0x01ed36a4],EAX                ; 00517189 | DAT_01ed36a4
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051718e
        ;   Label: LAB_0051718e
    MOV ECX,dword ptr [EDI + 0x14]      ; 00517191
    SUB ECX,ESI                         ; 00517194
    CMP ECX,0x10000                     ; 00517196
    JNC 0x0051731e                      ; 0051719c
        ;   XREF to: 0051731e (CONDITIONAL_JUMP)  ; LAB_0051731e
    XOR ECX,ECX                         ; 005171a2
    MOV EAX,dword ptr [EDI + 0x10]      ; 005171a4
        ;   Label: LAB_005171a4
    MOV EDX,dword ptr [EBX + 0x10]      ; 005171a7
    MOV ESI,dword ptr [EBX + 0x14]      ; 005171aa
    SUB EAX,EDX                         ; 005171ad
    AND ESI,0xffff                      ; 005171af
    MOV EDX,EAX                         ; 005171b5
    MOV EAX,ECX                         ; 005171b7
    XOR SI,0xffff                       ; 005171b9
    IMUL EDX                            ; 005171bd
    SHRD EAX,EDX,0x10                   ; 005171bf
    MOV EDX,EAX                         ; 005171c3
    MOV dword ptr [EBP + 0xc],EAX       ; 005171c5
    MOV EAX,ESI                         ; 005171c8
    IMUL EDX                            ; 005171ca
    SHRD EAX,EDX,0x10                   ; 005171cc
    MOV dword ptr [ESP],EAX             ; 005171d0
    MOV EDX,dword ptr [ESP]             ; 005171d3
    MOV EAX,dword ptr [EBX + 0x10]      ; 005171d6
    ADD EAX,EDX                         ; 005171d9
    MOV dword ptr [EBP + 0x8],EAX       ; 005171db
    MOV EAX,dword ptr [EDI + 0x18]      ; 005171de
    MOV EDX,dword ptr [EBX + 0x18]      ; 005171e1
    SUB EAX,EDX                         ; 005171e4
    MOV EDX,EAX                         ; 005171e6
    MOV EAX,ECX                         ; 005171e8
    IMUL EDX                            ; 005171ea
    SHRD EAX,EDX,0x10                   ; 005171ec
    MOV EDX,EAX                         ; 005171f0
    MOV dword ptr [EBP + 0x1c],EAX      ; 005171f2
    MOV EAX,ESI                         ; 005171f5
    IMUL EDX                            ; 005171f7
    SHRD EAX,EDX,0x10                   ; 005171f9
    MOV dword ptr [ESP],EAX             ; 005171fd
    MOV EDX,dword ptr [ESP]             ; 00517200
    MOV EAX,dword ptr [EBX + 0x18]      ; 00517203
    ADD EAX,EDX                         ; 00517206
    MOV dword ptr [EBP + 0x18],EAX      ; 00517208
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0051720b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0051720e
    SUB EAX,EDX                         ; 00517211
    MOV EDX,EAX                         ; 00517213
    MOV EAX,ECX                         ; 00517215
    IMUL EDX                            ; 00517217
    SHRD EAX,EDX,0x10                   ; 00517219
    MOV EDX,EAX                         ; 0051721d
    MOV dword ptr [EBP + 0x24],EAX      ; 0051721f
    MOV EAX,ESI                         ; 00517222
    IMUL EDX                            ; 00517224
    SHRD EAX,EDX,0x10                   ; 00517226
    MOV dword ptr [ESP],EAX             ; 0051722a
    MOV EDX,dword ptr [ESP]             ; 0051722d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00517230
    ADD EAX,EDX                         ; 00517233
    MOV dword ptr [EBP + 0x20],EAX      ; 00517235
    MOV EAX,dword ptr [EDI + 0x20]      ; 00517238
    MOV EDX,dword ptr [EBX + 0x20]      ; 0051723b
    SUB EAX,EDX                         ; 0051723e
    MOV EDX,EAX                         ; 00517240
    MOV EAX,ECX                         ; 00517242
    IMUL EDX                            ; 00517244
    SHRD EAX,EDX,0x10                   ; 00517246
    MOV EDX,EAX                         ; 0051724a
    MOV dword ptr [EBP + 0x14],EAX      ; 0051724c
    MOV EAX,ESI                         ; 0051724f
    IMUL EDX                            ; 00517251
    SHRD EAX,EDX,0x10                   ; 00517253
    MOV dword ptr [ESP],EAX             ; 00517257
    MOV EDX,dword ptr [ESP]             ; 0051725a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0051725d
    ADD EAX,EDX                         ; 00517260
    MOV dword ptr [EBP + 0x10],EAX      ; 00517262
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00517265
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00517268
    SUB EAX,EDX                         ; 0051726b
    MOV EDX,EAX                         ; 0051726d
    MOV EAX,ECX                         ; 0051726f
    IMUL EDX                            ; 00517271
    SHRD EAX,EDX,0x10                   ; 00517273
    MOV EDX,EAX                         ; 00517277
    MOV dword ptr [EBP + 0x34],EAX      ; 00517279
    MOV EAX,ESI                         ; 0051727c
    IMUL EDX                            ; 0051727e
    SHRD EAX,EDX,0x10                   ; 00517280
    MOV dword ptr [ESP],EAX             ; 00517284
    MOV EDX,dword ptr [ESP]             ; 00517287
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0051728a
    ADD EAX,EDX                         ; 0051728d
    MOV dword ptr [EBP + 0x30],EAX      ; 0051728f
    MOV EAX,dword ptr [EDI + 0x8]       ; 00517292
    MOV EDX,dword ptr [EBX + 0x8]       ; 00517295
    SUB EAX,EDX                         ; 00517298
    MOV EDX,EAX                         ; 0051729a
    MOV EAX,ECX                         ; 0051729c
    IMUL EDX                            ; 0051729e
    SHRD EAX,EDX,0x10                   ; 005172a0
    MOV EDX,EAX                         ; 005172a4
    MOV dword ptr [EBP + 0x2c],EAX      ; 005172a6
    MOV EAX,ESI                         ; 005172a9
    IMUL EDX                            ; 005172ab
    SHRD EAX,EDX,0x10                   ; 005172ad
    MOV dword ptr [ESP],EAX             ; 005172b1
    MOV EDX,dword ptr [ESP]             ; 005172b4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005172b7
    ADD EAX,EDX                         ; 005172ba
    MOV dword ptr [EBP + 0x28],EAX      ; 005172bc
    MOV EAX,dword ptr [EDI + 0x24]      ; 005172bf
    MOV EDX,dword ptr [EBX + 0x24]      ; 005172c2
    SUB EAX,EDX                         ; 005172c5
    MOV EDX,EAX                         ; 005172c7
    MOV EAX,ECX                         ; 005172c9
    IMUL EDX                            ; 005172cb
    SHRD EAX,EDX,0x10                   ; 005172cd
    MOV EDX,EAX                         ; 005172d1
    MOV dword ptr [EBP + 0x3c],EAX      ; 005172d3
    MOV EAX,ESI                         ; 005172d6
    IMUL EDX                            ; 005172d8
    SHRD EAX,EDX,0x10                   ; 005172da
    MOV dword ptr [ESP],EAX             ; 005172de
    MOV EDX,dword ptr [ESP]             ; 005172e1
    MOV EAX,dword ptr [EBX + 0x24]      ; 005172e4
    ADD EAX,EDX                         ; 005172e7
    MOV dword ptr [EBP + 0x38],EAX      ; 005172e9
    MOV EDX,dword ptr [EDI + 0x28]      ; 005172ec
    MOV EDI,dword ptr [EBX + 0x28]      ; 005172ef
    MOV EAX,ECX                         ; 005172f2
    SUB EDX,EDI                         ; 005172f4
    IMUL EDX                            ; 005172f6
    SHRD EAX,EDX,0x10                   ; 005172f8
    MOV EDX,EAX                         ; 005172fc
    MOV dword ptr [EBP + 0x44],EAX      ; 005172fe
    MOV EAX,ESI                         ; 00517301
    IMUL EDX                            ; 00517303
    SHRD EAX,EDX,0x10                   ; 00517305
    MOV EDX,EAX                         ; 00517309
    MOV EAX,dword ptr [EBX + 0x28]      ; 0051730b
    ADD EAX,EDX                         ; 0051730e
    MOV dword ptr [EBP + 0x40],EAX      ; 00517310
    INC dword ptr [0x01ed319c]          ; 00517313 | DAT_01ed319c
    JMP 0x00516f4d                      ; 00517319
        ;   XREF to: 00516f4d (UNCONDITIONAL_JUMP)  ; LAB_00516f4d
    MOV EAX,0xffffffff                  ; 0051731e
        ;   Label: LAB_0051731e
    XOR EDX,EDX                         ; 00517323
    DIV ECX                             ; 00517325
    MOV ECX,EAX                         ; 00517327
    JMP 0x005171a4                      ; 00517329
        ;   XREF to: 005171a4 (UNCONDITIONAL_JUMP)  ; LAB_005171a4
    INC ECX                             ; 0051732e
        ;   Label: LAB_0051732e
    ADD EAX,0x50                        ; 0051732f
    CMP ECX,EDX                         ; 00517332
    JL 0x00516f7f                       ; 00517334
        ;   XREF to: 00516f7f (CONDITIONAL_JUMP)  ; LAB_00516f7f
    XOR EAX,EAX                         ; 0051733a
        ;   Label: LAB_0051733a
    JMP 0x00516f8f                      ; 0051733c
        ;   XREF to: 00516f8f (UNCONDITIONAL_JUMP)  ; LAB_00516f8f
    INC EDX                             ; 00517341
        ;   Label: LAB_00517341
    ADD EAX,0x50                        ; 00517342
    CMP EDX,ESI                         ; 00517345
    JL 0x00516fbc                       ; 00517347
        ;   XREF to: 00516fbc (CONDITIONAL_JUMP)  ; LAB_00516fbc
    XOR EAX,EAX                         ; 0051734d
        ;   Label: LAB_0051734d
    JMP 0x00516fcc                      ; 0051734f
        ;   XREF to: 00516fcc (UNCONDITIONAL_JUMP)  ; LAB_00516fcc
    INC EDX                             ; 00517354
        ;   Label: LAB_00517354
    ADD EAX,0x50                        ; 00517355
    CMP EDX,EDI                         ; 00517358
    JL 0x00517012                       ; 0051735a
        ;   XREF to: 00517012 (CONDITIONAL_JUMP)  ; LAB_00517012
    XOR EAX,EAX                         ; 00517360
        ;   Label: LAB_00517360
    JMP 0x00517022                      ; 00517362
        ;   XREF to: 00517022 (UNCONDITIONAL_JUMP)  ; LAB_00517022
    INC EDX                             ; 00517367
        ;   Label: LAB_00517367
    ADD EAX,0x50                        ; 00517368 | DAT_01ed31f0
    CMP EDX,EDI                         ; 0051736b
    JL 0x0051705e                       ; 0051736d
        ;   XREF to: 0051705e (CONDITIONAL_JUMP)  ; LAB_0051705e
    XOR EAX,EAX                         ; 00517373
        ;   Label: LAB_00517373
    MOV dword ptr [ESP + 0x10],EAX      ; 00517375
    TEST EAX,EAX                        ; 00517379
    JNZ 0x00517385                      ; 0051737b
        ;   XREF to: 00517385 (CONDITIONAL_JUMP)  ; LAB_00517385
    ADD ESP,0x14                        ; 0051737d
    POP EBP                             ; 00517380
    POP EDI                             ; 00517381
    POP ESI                             ; 00517382
    POP EBX                             ; 00517383
    RET                                 ; 00517384
    MOV EDI,dword ptr [ESP + 0x10]      ; 00517385
        ;   Label: LAB_00517385
    MOV EBX,dword ptr [ESP + 0xc]       ; 00517389
    MOV ESI,EBP                         ; 0051738d
    CALL engine_special.cpp_FUN_00563257 ; 0051738f
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    MOV EAX,dword ptr [EBP + 0xc]       ; 00517394
    MOV EDI,dword ptr [EBP + 0x8]       ; 00517397
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051739a
    MOV ECX,dword ptr [EBP + 0x20]      ; 0051739d
    ADD EDI,EAX                         ; 005173a0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005173a2
    MOV dword ptr [EBP + 0x8],EDI       ; 005173a5
    ADD EDX,EAX                         ; 005173a8
    MOV EAX,dword ptr [EBP + 0x24]      ; 005173aa
    MOV dword ptr [EBP + 0x18],EDX      ; 005173ad
    ADD ECX,EAX                         ; 005173b0
    MOV dword ptr [EBP + 0x20],ECX      ; 005173b2
    MOV EBX,dword ptr [EBP + 0x28]      ; 005173b5
    MOV ESI,dword ptr [EBP + 0x10]      ; 005173b8
    MOV EDI,dword ptr [EBP + 0x38]      ; 005173bb
    MOV EDX,dword ptr [EBP + 0x40]      ; 005173be
    MOV EAX,dword ptr [EBP + 0x2c]      ; 005173c1
    MOV ECX,dword ptr [EBP + 0x30]      ; 005173c4
    ADD EBX,EAX                         ; 005173c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005173c9
    MOV dword ptr [EBP + 0x28],EBX      ; 005173cc
    ADD ESI,EAX                         ; 005173cf
    MOV EAX,dword ptr [EBP + 0x3c]      ; 005173d1
    MOV dword ptr [EBP + 0x10],ESI      ; 005173d4
    ADD EDI,EAX                         ; 005173d7
    MOV EAX,dword ptr [EBP + 0x44]      ; 005173d9
    MOV dword ptr [EBP + 0x38],EDI      ; 005173dc
    ADD EDX,EAX                         ; 005173df
    MOV EAX,dword ptr [EBP + 0x34]      ; 005173e1
    MOV dword ptr [EBP + 0x40],EDX      ; 005173e4
    ADD ECX,EAX                         ; 005173e7
    MOV EAX,dword ptr [ESP + 0x10]      ; 005173e9
    MOV dword ptr [EBP + 0x30],ECX      ; 005173ed
    MOV EDX,dword ptr [ESP + 0x10]      ; 005173f0
    MOV EAX,dword ptr [EAX + 0xc]       ; 005173f4
    MOV EBX,dword ptr [EDX + 0x8]       ; 005173f7
    MOV ESI,dword ptr [EDX + 0x18]      ; 005173fa
    MOV EDI,dword ptr [EDX + 0x20]      ; 005173fd
    MOV ECX,dword ptr [EDX + 0x28]      ; 00517400
    ADD EBX,EAX                         ; 00517403
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00517405
    MOV dword ptr [EDX + 0x8],EBX       ; 00517408
    ADD ESI,EAX                         ; 0051740b
    MOV EAX,dword ptr [EDX + 0x24]      ; 0051740d
    MOV dword ptr [EDX + 0x18],ESI      ; 00517410
    ADD EDI,EAX                         ; 00517413
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00517415
    MOV dword ptr [EDX + 0x20],EDI      ; 00517418
    ADD ECX,EAX                         ; 0051741b
    MOV dword ptr [EDX + 0x28],ECX      ; 0051741d
    MOV EBX,dword ptr [EDX + 0x10]      ; 00517420
    MOV ESI,dword ptr [EDX + 0x38]      ; 00517423
    MOV EDI,dword ptr [EDX + 0x40]      ; 00517426
    MOV EAX,dword ptr [EDX + 0x14]      ; 00517429
    MOV ECX,dword ptr [EDX + 0x30]      ; 0051742c
    ADD EBX,EAX                         ; 0051742f
    MOV EAX,dword ptr [EDX + 0x3c]      ; 00517431
    MOV dword ptr [EDX + 0x10],EBX      ; 00517434
    MOV EBX,dword ptr [ESP + 0xc]       ; 00517437
    ADD ESI,EAX                         ; 0051743b
    INC EBX                             ; 0051743d
    MOV EAX,dword ptr [EDX + 0x44]      ; 0051743e
    MOV dword ptr [EDX + 0x38],ESI      ; 00517441
    ADD EDI,EAX                         ; 00517444
    MOV EAX,dword ptr [EDX + 0x34]      ; 00517446
    MOV dword ptr [EDX + 0x40],EDI      ; 00517449
    ADD ECX,EAX                         ; 0051744c
    MOV dword ptr [ESP + 0xc],EBX       ; 0051744e
    MOV dword ptr [EDX + 0x30],ECX      ; 00517452
    JMP 0x00516fe1                      ; 00517455
        ;   XREF to: 00516fe1 (UNCONDITIONAL_JUMP)  ; LAB_00516fe1

