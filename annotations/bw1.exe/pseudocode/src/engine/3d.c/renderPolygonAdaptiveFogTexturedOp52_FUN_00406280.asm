; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006104ec
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a5c
;   undefined4 DAT_00713a60
;   undefined4 DAT_00713a70
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c4f024
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   ... and 1 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406280
        ;   Label: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280
    PUSH EDI                            ; 00406281
    PUSH EBP                            ; 00406282
    MOV EBP,dword ptr [0x00713a60]      ; 00406283 | DAT_00713a60
    MOV EDI,dword ptr [ESP + 0x10]      ; 00406289
    LEA ESI,[EDI + 0x18]                ; 0040628d
    LEA EAX,[EDI + 0x8]                 ; 00406290
    PUSH EAX                            ; 00406293
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00406294
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00406299
    TEST EAX,EAX                        ; 0040629c
    JZ 0x004064f6                       ; 0040629e
        ;   XREF to: 004064f6 (CONDITIONAL_JUMP)  ; LAB_004064f6
    PUSH EBX                            ; 004062a4
    MOV EDX,dword ptr [0x00713a74]      ; 004062a5 | DAT_00713a74
    MOV EBP,dword ptr [0x00713a60]      ; 004062ab | DAT_00713a60
    TEST EDX,EDX                        ; 004062b1
    JZ 0x00406374                       ; 004062b3
        ;   XREF to: 00406374 (CONDITIONAL_JUMP)  ; LAB_00406374
    CMP dword ptr [0x01c51d00],0x0      ; 004062b9 | DAT_01c51d00
    JNZ 0x0040634d                      ; 004062c0
        ;   XREF to: 0040634d (CONDITIONAL_JUMP)  ; LAB_0040634d
    CMP dword ptr [0x0061b4a0],0x20     ; 004062c6 | DAT_0061b4a0
    JNZ 0x00406341                      ; 004062cd
        ;   XREF to: 00406341 (CONDITIONAL_JUMP)  ; LAB_00406341
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004062cf | DAT_01c4f02c
    XOR ECX,ECX                         ; 004062d9
        ;   Label: LAB_004062d9
    MOV dword ptr [0x00713a60],EBP      ; 004062db | DAT_00713a60
    MOV dword ptr [0x01c51d18],ECX      ; 004062e1 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],ECX      ; 004062e7 | DAT_01c51d14
        ;   Label: LAB_004062e7
    MOV EBX,0x713a98                    ; 004062ed | DAT_00713a98
        ;   Label: LAB_004062ed
    MOV EBP,dword ptr [0x00713a60]      ; 004062f2 | DAT_00713a60
    MOV EAX,ESI                         ; 004062f8
    XOR ECX,ECX                         ; 004062fa
    MOV EDX,dword ptr [EDI + 0x4]       ; 004062fc
        ;   Label: LAB_004062fc
    LEA EDX,[EDX + EDX*0x2]             ; 004062ff
    MOV dword ptr [0x00713a60],EBP      ; 00406302 | DAT_00713a60
    CMP ECX,EDX                         ; 00406308
    JGE 0x004064e4                      ; 0040630a
        ;   XREF to: 004064e4 (CONDITIONAL_JUMP)  ; LAB_004064e4
    MOV EDX,dword ptr [EAX]             ; 00406310
    ADD EDX,EBP                         ; 00406312
    MOV dword ptr [EBX],EDX             ; 00406314 | DAT_00713a98 | DAT_00713a9c
    MOV EDX,dword ptr [EAX]             ; 00406316
    ADD EDX,EBP                         ; 00406318
    IMUL ESI,EDX,0x30                   ; 0040631a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040631d
    MOV dword ptr [ESI + 0x62902c],EDX  ; 00406320 | DAT_0062902c
    MOV EDX,dword ptr [EAX]             ; 00406326
    ADD EDX,EBP                         ; 00406328
    IMUL ESI,EDX,0x30                   ; 0040632a
    ADD EAX,0xc                         ; 0040632d
    ADD EBX,0x4                         ; 00406330
    MOV EDX,dword ptr [EAX + -0x4]      ; 00406333
    ADD ECX,0x3                         ; 00406336
    MOV dword ptr [ESI + 0x629030],EDX  ; 00406339 | DAT_00629030
    JMP 0x004062fc                      ; 0040633f
        ;   XREF to: 004062fc (UNCONDITIONAL_JUMP)  ; LAB_004062fc
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00406341 | DAT_01c4f02c
        ;   Label: LAB_00406341
    JMP 0x004062d9                      ; 0040634b
        ;   XREF to: 004062d9 (UNCONDITIONAL_JUMP)  ; LAB_004062d9
    CMP dword ptr [0x0061b4a0],0x20     ; 0040634d | DAT_0061b4a0
        ;   Label: LAB_0040634d
    JNZ 0x00406365                      ; 00406354
        ;   XREF to: 00406365 (CONDITIONAL_JUMP)  ; LAB_00406365
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406356 | DAT_01c4f02c
    JMP 0x004062d9                      ; 00406360
        ;   XREF to: 004062d9 (UNCONDITIONAL_JUMP)  ; LAB_004062d9
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00406365 | DAT_01c4f02c
        ;   Label: LAB_00406365
    JMP 0x004062d9                      ; 0040636f
        ;   XREF to: 004062d9 (UNCONDITIONAL_JUMP)  ; LAB_004062d9
    CMP dword ptr [0x00713a70],0x0      ; 00406374 | DAT_00713a70
        ;   Label: LAB_00406374
    JNZ 0x00406452                      ; 0040637b
        ;   XREF to: 00406452 (CONDITIONAL_JUMP)  ; LAB_00406452
    CMP dword ptr [0x01c51d00],0x0      ; 00406381 | DAT_01c51d00
    JNZ 0x004063ea                      ; 00406388
        ;   XREF to: 004063ea (CONDITIONAL_JUMP)  ; LAB_004063ea
    CMP dword ptr [0x0061b4a0],0x20     ; 0040638a | DAT_0061b4a0
    JNZ 0x004063de                      ; 00406391
        ;   XREF to: 004063de (CONDITIONAL_JUMP)  ; LAB_004063de
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406393 | DAT_01c4f02c
    CMP dword ptr [0x006104ec],0x0      ; 0040639d | DAT_006104ec
        ;   Label: LAB_0040639d
    JNZ 0x00406438                      ; 004063a4
        ;   XREF to: 00406438 (CONDITIONAL_JUMP)  ; LAB_00406438
    CMP dword ptr [0x01c51d00],0x0      ; 004063aa | DAT_01c51d00
    JNZ 0x00406417                      ; 004063b1
        ;   XREF to: 00406417 (CONDITIONAL_JUMP)  ; LAB_00406417
    CMP dword ptr [0x0061b4a0],0x20     ; 004063b3 | DAT_0061b4a0
    JNZ 0x0040640b                      ; 004063ba
        ;   XREF to: 0040640b (CONDITIONAL_JUMP)  ; LAB_0040640b
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004063bc | DAT_01c4f02c
    XOR EDX,EDX                         ; 004063c6
        ;   Label: LAB_004063c6
    MOV dword ptr [0x01c51d18],EDX      ; 004063c8 | DAT_01c51d18
    MOV ECX,0xc1                        ; 004063ce
    MOV dword ptr [0x00713a60],EBP      ; 004063d3 | DAT_00713a60
    JMP 0x004062e7                      ; 004063d9
        ;   XREF to: 004062e7 (UNCONDITIONAL_JUMP)  ; LAB_004062e7
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004063de | DAT_01c4f02c
        ;   Label: LAB_004063de
    JMP 0x0040639d                      ; 004063e8
        ;   XREF to: 0040639d (UNCONDITIONAL_JUMP)  ; LAB_0040639d
    CMP dword ptr [0x0061b4a0],0x20     ; 004063ea | DAT_0061b4a0
        ;   Label: LAB_004063ea
    JNZ 0x004063ff                      ; 004063f1
        ;   XREF to: 004063ff (CONDITIONAL_JUMP)  ; LAB_004063ff
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004063f3 | DAT_01c4f02c
    JMP 0x0040639d                      ; 004063fd
        ;   XREF to: 0040639d (UNCONDITIONAL_JUMP)  ; LAB_0040639d
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004063ff | DAT_01c4f02c
        ;   Label: LAB_004063ff
    JMP 0x0040639d                      ; 00406409
        ;   XREF to: 0040639d (UNCONDITIONAL_JUMP)  ; LAB_0040639d
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 0040640b | DAT_01c4f02c
        ;   Label: LAB_0040640b
    JMP 0x004063c6                      ; 00406415
        ;   XREF to: 004063c6 (UNCONDITIONAL_JUMP)  ; LAB_004063c6
    CMP dword ptr [0x0061b4a0],0x20     ; 00406417 | DAT_0061b4a0
        ;   Label: LAB_00406417
    JNZ 0x0040642c                      ; 0040641e
        ;   XREF to: 0040642c (CONDITIONAL_JUMP)  ; LAB_0040642c
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00406420 | DAT_01c4f02c
    JMP 0x004063c6                      ; 0040642a
        ;   XREF to: 004063c6 (UNCONDITIONAL_JUMP)  ; LAB_004063c6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0040642c | DAT_01c4f02c
        ;   Label: LAB_0040642c
    JMP 0x004063c6                      ; 00406436
        ;   XREF to: 004063c6 (UNCONDITIONAL_JUMP)  ; LAB_004063c6
    MOV dword ptr [0x01c51d18],0x1      ; 00406438 | DAT_01c51d18
        ;   Label: LAB_00406438
    MOV ECX,0xc1                        ; 00406442
    MOV dword ptr [0x00713a60],EBP      ; 00406447 | DAT_00713a60
    JMP 0x004062e7                      ; 0040644d
        ;   XREF to: 004062e7 (UNCONDITIONAL_JUMP)  ; LAB_004062e7
    CMP dword ptr [0x01c51d00],0x0      ; 00406452 | DAT_01c51d00
        ;   Label: LAB_00406452
    JNZ 0x004064c3                      ; 00406459
        ;   XREF to: 004064c3 (CONDITIONAL_JUMP)  ; LAB_004064c3
    CMP dword ptr [0x0061b4a0],0x20     ; 0040645b | DAT_0061b4a0
    JNZ 0x004064b7                      ; 00406462
        ;   XREF to: 004064b7 (CONDITIONAL_JUMP)  ; LAB_004064b7
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406464 | DAT_01c4f02c
    MOV EAX,dword ptr [EDI + 0x10]      ; 0040646e
        ;   Label: LAB_0040646e
    MOV ECX,0xc0                        ; 00406471
    PUSH EAX                            ; 00406476
    MOV EDX,dword ptr [EDI + 0xc]       ; 00406477
    MOV dword ptr [0x01c51d14],ECX      ; 0040647a | DAT_01c51d14
    PUSH EDX                            ; 00406480
    MOV ECX,dword ptr [EDI + 0x8]       ; 00406481
    MOV EBX,0x1                         ; 00406484
    PUSH ECX                            ; 00406489
    MOV dword ptr [0x01c51d18],EBX      ; 0040648a | DAT_01c51d18
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 00406490
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00406495
    MOV EBX,dword ptr [0x01c4f024]      ; 00406498 | DAT_01c4f024
    PUSH EBX                            ; 0040649e
    MOV EAX,[0x00713a5c]                ; 0040649f | DAT_00713a5c
    PUSH EAX                            ; 004064a4
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 004064a5
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 004064aa
    MOV [0x01c4f020],EAX                ; 004064ad | DAT_01c4f020
    JMP 0x004062ed                      ; 004064b2
        ;   XREF to: 004062ed (UNCONDITIONAL_JUMP)  ; LAB_004062ed
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004064b7 | DAT_01c4f02c
        ;   Label: LAB_004064b7
    JMP 0x0040646e                      ; 004064c1
        ;   XREF to: 0040646e (UNCONDITIONAL_JUMP)  ; LAB_0040646e
    CMP dword ptr [0x0061b4a0],0x20     ; 004064c3 | DAT_0061b4a0
        ;   Label: LAB_004064c3
    JNZ 0x004064d8                      ; 004064ca
        ;   XREF to: 004064d8 (CONDITIONAL_JUMP)  ; LAB_004064d8
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004064cc | DAT_01c4f02c
    JMP 0x0040646e                      ; 004064d6
        ;   XREF to: 0040646e (UNCONDITIONAL_JUMP)  ; LAB_0040646e
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004064d8 | DAT_01c4f02c
        ;   Label: LAB_004064d8
    JMP 0x0040646e                      ; 004064e2
        ;   XREF to: 0040646e (UNCONDITIONAL_JUMP)  ; LAB_0040646e
    PUSH 0x713a98                       ; 004064e4 | DAT_00713a98
        ;   Label: LAB_004064e4
    MOV ESI,dword ptr [EDI + 0x4]       ; 004064e9
    PUSH ESI                            ; 004064ec
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004064ed
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004064f2
    POP EBX                             ; 004064f5
    MOV EDX,dword ptr [EDI + 0x4]       ; 004064f6
        ;   Label: LAB_004064f6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004064f9
    SUB EAX,EDX                         ; 00406500
    ADD EDI,0x18                        ; 00406502
    SHL EAX,0x2                         ; 00406505
    MOV EBP,dword ptr [0x00713a60]      ; 00406508 | DAT_00713a60
    ADD EAX,EDI                         ; 0040650e
    POP EBP                             ; 00406510
    POP EDI                             ; 00406511
    POP ESI                             ; 00406512
    RET                                 ; 00406513

