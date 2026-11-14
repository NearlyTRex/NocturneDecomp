; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_004075b0(int param_1,uint param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5c4
;   undefined4 DAT_01c6b5c8
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0
;   engine_light.cpp_calculateLighting_FUN_004e0e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004075b0
        ;   Label: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_004075b0
    PUSH ESI                            ; 004075b1
    PUSH EDI                            ; 004075b2
    PUSH EBP                            ; 004075b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004075b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004075b8
    LEA EAX,[EDI + 0x8]                 ; 004075bc
    PUSH EAX                            ; 004075bf
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004075c0
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 004075c5
    TEST EAX,EAX                        ; 004075c8
    JZ 0x0040768a                       ; 004075ca
        ;   XREF to: 0040768a (CONDITIONAL_JUMP)  ; LAB_0040768a
    CMP dword ptr [0x01c6e2a0],0x0      ; 004075d0 | DAT_01c6e2a0
    JNZ 0x0040769e                      ; 004075d7
        ;   XREF to: 0040769e (CONDITIONAL_JUMP)  ; LAB_0040769e
    CMP dword ptr [0x005fba20],0x20     ; 004075dd | DAT_005fba20
    JNZ 0x0040768f                      ; 004075e4
        ;   XREF to: 0040768f (CONDITIONAL_JUMP)  ; LAB_0040768f
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004075ea | DAT_01c6b5cc
    MOV dword ptr [0x01c6e2b4],EBX      ; 004075f4 | DAT_01c6e2b4
        ;   Label: LAB_004075f4
    TEST BL,0x10                        ; 004075fa
    JZ 0x00407618                       ; 004075fd
        ;   XREF to: 00407618 (CONDITIONAL_JUMP)  ; LAB_00407618
    MOV ESI,dword ptr [EDI + 0x10]      ; 004075ff
    PUSH ESI                            ; 00407602
    MOV EBP,dword ptr [EDI + 0xc]       ; 00407603
    PUSH EBP                            ; 00407606
    MOV EAX,dword ptr [EDI + 0x8]       ; 00407607
    PUSH EAX                            ; 0040760a
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 0040760b
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00407610
    MOV [0x01c6b5c4],EAX                ; 00407613 | DAT_01c6b5c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00407618
        ;   Label: LAB_00407618
    TEST EDX,EDX                        ; 0040761c
    JZ 0x004076c5                       ; 0040761e
        ;   XREF to: 004076c5 (CONDITIONAL_JUMP)  ; LAB_004076c5
    MOV dword ptr [0x01c6e2b8],0x5      ; 00407624 | DAT_01c6e2b8
    MOV EBP,dword ptr [EDI + 0x4]       ; 0040762e
        ;   Label: LAB_0040762e
    XOR EBX,EBX                         ; 00407631
    TEST EBP,EBP                        ; 00407633
    JLE 0x00407670                      ; 00407635
        ;   XREF to: 00407670 (CONDITIONAL_JUMP)  ; LAB_00407670
    MOV EDX,EDI                         ; 00407637
    XOR ECX,ECX                         ; 00407639
    MOV EAX,dword ptr [EDX + 0x18]      ; 0040763b
        ;   Label: LAB_0040763b
    MOV ESI,EAX                         ; 0040763e
    MOV dword ptr [ECX + 0x730418],EAX  ; 00407640
    SHL EAX,0x2                         ; 00407646
    SUB EAX,ESI                         ; 00407649
    SHL EAX,0x4                         ; 0040764b
    MOV ESI,dword ptr [EDX + 0x1c]      ; 0040764e
    MOV dword ptr [EAX + 0x60b02c],ESI  ; 00407651
    MOV ESI,dword ptr [EDX + 0x20]      ; 00407657
    ADD ECX,0x4                         ; 0040765a
    MOV dword ptr [EAX + 0x60b030],ESI  ; 0040765d
    INC EBX                             ; 00407663
    MOV EAX,dword ptr [EDI + 0x4]       ; 00407664
    ADD EDX,0xc                         ; 00407667
    CMP EBX,EAX                         ; 0040766a
    JL 0x0040763b                       ; 0040766c
        ;   XREF to: 0040763b (CONDITIONAL_JUMP)  ; LAB_0040763b
    MOV EAX,EAX                         ; 0040766e
    CMP dword ptr [0x01c6b5c8],0x0      ; 00407670 | DAT_01c6b5c8
        ;   Label: LAB_00407670
    JZ 0x004076e4                       ; 00407677
        ;   XREF to: 004076e4 (CONDITIONAL_JUMP)  ; LAB_004076e4
    PUSH 0x730418                       ; 00407679
    MOV EBX,dword ptr [EDI + 0x4]       ; 0040767e
    PUSH EBX                            ; 00407681
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00407682
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407687
    POP EBP                             ; 0040768a
        ;   Label: LAB_0040768a
    POP EDI                             ; 0040768b
    POP ESI                             ; 0040768c
    POP EBX                             ; 0040768d
    RET                                 ; 0040768e
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 0040768f | DAT_01c6b5cc
        ;   Label: LAB_0040768f
    JMP 0x004075f4                      ; 00407699
        ;   XREF to: 004075f4 (UNCONDITIONAL_JUMP)  ; LAB_004075f4
    CMP dword ptr [0x005fba20],0x20     ; 0040769e | DAT_005fba20
        ;   Label: LAB_0040769e
    JNZ 0x004076b6                      ; 004076a5
        ;   XREF to: 004076b6 (CONDITIONAL_JUMP)  ; LAB_004076b6
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004076a7 | DAT_01c6b5cc
    JMP 0x004075f4                      ; 004076b1
        ;   XREF to: 004075f4 (UNCONDITIONAL_JUMP)  ; LAB_004075f4
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004076b6 | DAT_01c6b5cc
        ;   Label: LAB_004076b6
    JMP 0x004075f4                      ; 004076c0
        ;   XREF to: 004075f4 (UNCONDITIONAL_JUMP)  ; LAB_004075f4
    TEST BL,0xc0                        ; 004076c5
        ;   Label: LAB_004076c5
    JZ 0x004076d9                       ; 004076c8
        ;   XREF to: 004076d9 (CONDITIONAL_JUMP)  ; LAB_004076d9
    MOV dword ptr [0x01c6e2b8],0x1      ; 004076ca | DAT_01c6e2b8
    JMP 0x0040762e                      ; 004076d4
        ;   XREF to: 0040762e (UNCONDITIONAL_JUMP)  ; LAB_0040762e
    MOV dword ptr [0x01c6e2b8],EDX      ; 004076d9 | DAT_01c6e2b8
        ;   Label: LAB_004076d9
    JMP 0x0040762e                      ; 004076df
        ;   XREF to: 0040762e (UNCONDITIONAL_JUMP)  ; LAB_0040762e
    PUSH 0x730418                       ; 004076e4
        ;   Label: LAB_004076e4
    MOV ECX,dword ptr [EDI + 0x4]       ; 004076e9
    PUSH ECX                            ; 004076ec
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 ; 004076ed
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043bac0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004076f2
    POP EBP                             ; 004076f5
    POP EDI                             ; 004076f6
    POP ESI                             ; 004076f7
    POP EBX                             ; 004076f8
    RET                                 ; 004076f9

