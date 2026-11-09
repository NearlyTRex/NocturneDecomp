; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406540(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303dc
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5c4
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_light.cpp_calculateLighting_FUN_004e0e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406540
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406540
    PUSH ESI                            ; 00406541
    PUSH EBP                            ; 00406542
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406543
    LEA ESI,[EBX + 0x18]                ; 00406547
    LEA EAX,[EBX + 0x8]                 ; 0040654a
    PUSH EAX                            ; 0040654d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040654e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00406553
    TEST EAX,EAX                        ; 00406556
    JZ 0x004065ca                       ; 00406558
        ;   XREF to: 004065ca (CONDITIONAL_JUMP)  ; LAB_004065ca
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040655a | DAT_01c6e2a0
    JNZ 0x004065e5                      ; 00406561
        ;   XREF to: 004065e5 (CONDITIONAL_JUMP)  ; LAB_004065e5
    CMP dword ptr [0x005fba20],0x20     ; 00406567 | DAT_005fba20
    JNZ 0x004065d9                      ; 0040656e
        ;   XREF to: 004065d9 (CONDITIONAL_JUMP)  ; LAB_004065d9
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406570 | DAT_01c6b5cc
    PUSH EDI                            ; 0040657a
        ;   Label: LAB_0040657a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040657b
    PUSH EAX                            ; 0040657e
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040657f
    MOV EDI,0x10                        ; 00406582
    PUSH EDX                            ; 00406587
    MOV ECX,dword ptr [EBX + 0x8]       ; 00406588
    XOR EBP,EBP                         ; 0040658b
    PUSH ECX                            ; 0040658d
    MOV dword ptr [0x01c6e2b4],EDI      ; 0040658e | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00406594 | DAT_01c6e2b8
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 0040659a
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040659f
    PUSH EAX                            ; 004065a2
    MOV EDI,dword ptr [0x007303dc]      ; 004065a3 | DAT_007303dc
    PUSH EDI                            ; 004065a9
    MOV [0x01c6b5c4],EAX                ; 004065aa | DAT_01c6b5c4
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 004065af
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 004065b4
    PUSH ESI                            ; 004065b7
    MOV EBP,dword ptr [EBX + 0x4]       ; 004065b8
    PUSH EBP                            ; 004065bb
    MOV [0x01c6b5c0],EAX                ; 004065bc | DAT_01c6b5c0
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 004065c1
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004065c6
    POP EDI                             ; 004065c9
    MOV ESI,dword ptr [EBX + 0x4]       ; 004065ca
        ;   Label: LAB_004065ca
    LEA EAX,[EBX + 0x18]                ; 004065cd
    SHL ESI,0x2                         ; 004065d0
    ADD EAX,ESI                         ; 004065d3
    POP EBP                             ; 004065d5
    POP ESI                             ; 004065d6
    POP EBX                             ; 004065d7
    RET                                 ; 004065d8
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004065d9 | DAT_01c6b5cc
        ;   Label: LAB_004065d9
    JMP 0x0040657a                      ; 004065e3
        ;   XREF to: 0040657a (UNCONDITIONAL_JUMP)  ; LAB_0040657a
    CMP dword ptr [0x005fba20],0x20     ; 004065e5 | DAT_005fba20
        ;   Label: LAB_004065e5
    JNZ 0x004065fa                      ; 004065ec
        ;   XREF to: 004065fa (CONDITIONAL_JUMP)  ; LAB_004065fa
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004065ee | DAT_01c6b5cc
    JMP 0x0040657a                      ; 004065f8
        ;   XREF to: 0040657a (UNCONDITIONAL_JUMP)  ; LAB_0040657a
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004065fa | DAT_01c6b5cc
        ;   Label: LAB_004065fa
    JMP 0x0040657a                      ; 00406604
        ;   XREF to: 0040657a (UNCONDITIONAL_JUMP)  ; LAB_0040657a

