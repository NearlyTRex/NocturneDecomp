; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f07bc
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_007303dc
;   undefined4 DAT_007303e0
;   undefined4 DAT_007303f0
;   undefined4 DAT_007303f4
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5c4
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   ... and 1 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_light.cpp_calculateLighting_FUN_004e0e00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004062a0
        ;   Label: engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0
    PUSH EDI                            ; 004062a1
    PUSH EBP                            ; 004062a2
    MOV EBP,dword ptr [0x007303e0]      ; 004062a3 | DAT_007303e0
    MOV EDI,dword ptr [ESP + 0x10]      ; 004062a9
    LEA ESI,[EDI + 0x18]                ; 004062ad
    LEA EAX,[EDI + 0x8]                 ; 004062b0
    PUSH EAX                            ; 004062b3
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004062b4
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004062b9
    TEST EAX,EAX                        ; 004062bc
    JZ 0x00406516                       ; 004062be
        ;   XREF to: 00406516 (CONDITIONAL_JUMP)  ; LAB_00406516
    PUSH EBX                            ; 004062c4
    MOV EDX,dword ptr [0x007303f4]      ; 004062c5 | DAT_007303f4
    MOV EBP,dword ptr [0x007303e0]      ; 004062cb | DAT_007303e0
    TEST EDX,EDX                        ; 004062d1
    JZ 0x00406394                       ; 004062d3
        ;   XREF to: 00406394 (CONDITIONAL_JUMP)  ; LAB_00406394
    CMP dword ptr [0x01c6e2a0],0x0      ; 004062d9 | DAT_01c6e2a0
    JNZ 0x0040636d                      ; 004062e0
        ;   XREF to: 0040636d (CONDITIONAL_JUMP)  ; LAB_0040636d
    CMP dword ptr [0x005fba20],0x20     ; 004062e6 | DAT_005fba20
    JNZ 0x00406361                      ; 004062ed
        ;   XREF to: 00406361 (CONDITIONAL_JUMP)  ; LAB_00406361
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004062ef | DAT_01c6b5cc
    XOR ECX,ECX                         ; 004062f9
        ;   Label: LAB_004062f9
    MOV dword ptr [0x007303e0],EBP      ; 004062fb | DAT_007303e0
    MOV dword ptr [0x01c6e2b8],ECX      ; 00406301 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],ECX      ; 00406307 | DAT_01c6e2b4
        ;   Label: LAB_00406307
    MOV EBX,0x730418                    ; 0040630d | DAT_00730418
        ;   Label: LAB_0040630d
    MOV EBP,dword ptr [0x007303e0]      ; 00406312 | DAT_007303e0
    MOV EAX,ESI                         ; 00406318
    XOR ECX,ECX                         ; 0040631a
    MOV EDX,dword ptr [EDI + 0x4]       ; 0040631c
        ;   Label: LAB_0040631c
    LEA EDX,[EDX + EDX*0x2]             ; 0040631f
    MOV dword ptr [0x007303e0],EBP      ; 00406322 | DAT_007303e0
    CMP ECX,EDX                         ; 00406328
    JGE 0x00406504                      ; 0040632a
        ;   XREF to: 00406504 (CONDITIONAL_JUMP)  ; LAB_00406504
    MOV EDX,dword ptr [EAX]             ; 00406330
    ADD EDX,EBP                         ; 00406332
    MOV dword ptr [EBX],EDX             ; 00406334 | DAT_00730418 | DAT_0073041c
    MOV EDX,dword ptr [EAX]             ; 00406336
    ADD EDX,EBP                         ; 00406338
    IMUL ESI,EDX,0x30                   ; 0040633a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040633d
    MOV dword ptr [ESI + 0x60b02c],EDX  ; 00406340 | DAT_0060b02c
    MOV EDX,dword ptr [EAX]             ; 00406346
    ADD EDX,EBP                         ; 00406348
    IMUL ESI,EDX,0x30                   ; 0040634a
    ADD EAX,0xc                         ; 0040634d
    ADD EBX,0x4                         ; 00406350
    MOV EDX,dword ptr [EAX + -0x4]      ; 00406353
    ADD ECX,0x3                         ; 00406356
    MOV dword ptr [ESI + 0x60b030],EDX  ; 00406359 | DAT_0060b030
    JMP 0x0040631c                      ; 0040635f
        ;   XREF to: 0040631c (UNCONDITIONAL_JUMP)  ; LAB_0040631c
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00406361 | DAT_01c6b5cc
        ;   Label: LAB_00406361
    JMP 0x004062f9                      ; 0040636b
        ;   XREF to: 004062f9 (UNCONDITIONAL_JUMP)  ; LAB_004062f9
    CMP dword ptr [0x005fba20],0x20     ; 0040636d | DAT_005fba20
        ;   Label: LAB_0040636d
    JNZ 0x00406385                      ; 00406374
        ;   XREF to: 00406385 (CONDITIONAL_JUMP)  ; LAB_00406385
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406376 | DAT_01c6b5cc
    JMP 0x004062f9                      ; 00406380
        ;   XREF to: 004062f9 (UNCONDITIONAL_JUMP)  ; LAB_004062f9
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406385 | DAT_01c6b5cc
        ;   Label: LAB_00406385
    JMP 0x004062f9                      ; 0040638f
        ;   XREF to: 004062f9 (UNCONDITIONAL_JUMP)  ; LAB_004062f9
    CMP dword ptr [0x007303f0],0x0      ; 00406394 | DAT_007303f0
        ;   Label: LAB_00406394
    JNZ 0x00406472                      ; 0040639b
        ;   XREF to: 00406472 (CONDITIONAL_JUMP)  ; LAB_00406472
    CMP dword ptr [0x01c6e2a0],0x0      ; 004063a1 | DAT_01c6e2a0
    JNZ 0x0040640a                      ; 004063a8
        ;   XREF to: 0040640a (CONDITIONAL_JUMP)  ; LAB_0040640a
    CMP dword ptr [0x005fba20],0x20     ; 004063aa | DAT_005fba20
    JNZ 0x004063fe                      ; 004063b1
        ;   XREF to: 004063fe (CONDITIONAL_JUMP)  ; LAB_004063fe
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004063b3 | DAT_01c6b5cc
    CMP dword ptr [0x005f07bc],0x0      ; 004063bd | DAT_005f07bc
        ;   Label: LAB_004063bd
    JNZ 0x00406458                      ; 004063c4
        ;   XREF to: 00406458 (CONDITIONAL_JUMP)  ; LAB_00406458
    CMP dword ptr [0x01c6e2a0],0x0      ; 004063ca | DAT_01c6e2a0
    JNZ 0x00406437                      ; 004063d1
        ;   XREF to: 00406437 (CONDITIONAL_JUMP)  ; LAB_00406437
    CMP dword ptr [0x005fba20],0x20     ; 004063d3 | DAT_005fba20
    JNZ 0x0040642b                      ; 004063da
        ;   XREF to: 0040642b (CONDITIONAL_JUMP)  ; LAB_0040642b
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004063dc | DAT_01c6b5cc
    XOR EDX,EDX                         ; 004063e6
        ;   Label: LAB_004063e6
    MOV dword ptr [0x01c6e2b8],EDX      ; 004063e8 | DAT_01c6e2b8
    MOV ECX,0xc1                        ; 004063ee
    MOV dword ptr [0x007303e0],EBP      ; 004063f3 | DAT_007303e0
    JMP 0x00406307                      ; 004063f9
        ;   XREF to: 00406307 (UNCONDITIONAL_JUMP)  ; LAB_00406307
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004063fe | DAT_01c6b5cc
        ;   Label: LAB_004063fe
    JMP 0x004063bd                      ; 00406408
        ;   XREF to: 004063bd (UNCONDITIONAL_JUMP)  ; LAB_004063bd
    CMP dword ptr [0x005fba20],0x20     ; 0040640a | DAT_005fba20
        ;   Label: LAB_0040640a
    JNZ 0x0040641f                      ; 00406411
        ;   XREF to: 0040641f (CONDITIONAL_JUMP)  ; LAB_0040641f
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406413 | DAT_01c6b5cc
    JMP 0x004063bd                      ; 0040641d
        ;   XREF to: 004063bd (UNCONDITIONAL_JUMP)  ; LAB_004063bd
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0040641f | DAT_01c6b5cc
        ;   Label: LAB_0040641f
    JMP 0x004063bd                      ; 00406429
        ;   XREF to: 004063bd (UNCONDITIONAL_JUMP)  ; LAB_004063bd
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 0040642b | DAT_01c6b5cc
        ;   Label: LAB_0040642b
    JMP 0x004063e6                      ; 00406435
        ;   XREF to: 004063e6 (UNCONDITIONAL_JUMP)  ; LAB_004063e6
    CMP dword ptr [0x005fba20],0x20     ; 00406437 | DAT_005fba20
        ;   Label: LAB_00406437
    JNZ 0x0040644c                      ; 0040643e
        ;   XREF to: 0040644c (CONDITIONAL_JUMP)  ; LAB_0040644c
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406440 | DAT_01c6b5cc
    JMP 0x004063e6                      ; 0040644a
        ;   XREF to: 004063e6 (UNCONDITIONAL_JUMP)  ; LAB_004063e6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0040644c | DAT_01c6b5cc
        ;   Label: LAB_0040644c
    JMP 0x004063e6                      ; 00406456
        ;   XREF to: 004063e6 (UNCONDITIONAL_JUMP)  ; LAB_004063e6
    MOV dword ptr [0x01c6e2b8],0x1      ; 00406458 | DAT_01c6e2b8
        ;   Label: LAB_00406458
    MOV ECX,0xc1                        ; 00406462
    MOV dword ptr [0x007303e0],EBP      ; 00406467 | DAT_007303e0
    JMP 0x00406307                      ; 0040646d
        ;   XREF to: 00406307 (UNCONDITIONAL_JUMP)  ; LAB_00406307
    CMP dword ptr [0x01c6e2a0],0x0      ; 00406472 | DAT_01c6e2a0
        ;   Label: LAB_00406472
    JNZ 0x004064e3                      ; 00406479
        ;   XREF to: 004064e3 (CONDITIONAL_JUMP)  ; LAB_004064e3
    CMP dword ptr [0x005fba20],0x20     ; 0040647b | DAT_005fba20
    JNZ 0x004064d7                      ; 00406482
        ;   XREF to: 004064d7 (CONDITIONAL_JUMP)  ; LAB_004064d7
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406484 | DAT_01c6b5cc
    MOV EAX,dword ptr [EDI + 0x10]      ; 0040648e
        ;   Label: LAB_0040648e
    MOV ECX,0xc0                        ; 00406491
    PUSH EAX                            ; 00406496
    MOV EDX,dword ptr [EDI + 0xc]       ; 00406497
    MOV dword ptr [0x01c6e2b4],ECX      ; 0040649a | DAT_01c6e2b4
    PUSH EDX                            ; 004064a0
    MOV ECX,dword ptr [EDI + 0x8]       ; 004064a1
    MOV EBX,0x1                         ; 004064a4
    PUSH ECX                            ; 004064a9
    MOV dword ptr [0x01c6e2b8],EBX      ; 004064aa | DAT_01c6e2b8
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 004064b0
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004064b5
    MOV EBX,dword ptr [0x01c6b5c4]      ; 004064b8 | DAT_01c6b5c4
    PUSH EBX                            ; 004064be
    MOV EAX,[0x007303dc]                ; 004064bf | DAT_007303dc
    PUSH EAX                            ; 004064c4
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 004064c5
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 004064ca
    MOV [0x01c6b5c0],EAX                ; 004064cd | DAT_01c6b5c0
    JMP 0x0040630d                      ; 004064d2
        ;   XREF to: 0040630d (UNCONDITIONAL_JUMP)  ; LAB_0040630d
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004064d7 | DAT_01c6b5cc
        ;   Label: LAB_004064d7
    JMP 0x0040648e                      ; 004064e1
        ;   XREF to: 0040648e (UNCONDITIONAL_JUMP)  ; LAB_0040648e
    CMP dword ptr [0x005fba20],0x20     ; 004064e3 | DAT_005fba20
        ;   Label: LAB_004064e3
    JNZ 0x004064f8                      ; 004064ea
        ;   XREF to: 004064f8 (CONDITIONAL_JUMP)  ; LAB_004064f8
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004064ec | DAT_01c6b5cc
    JMP 0x0040648e                      ; 004064f6
        ;   XREF to: 0040648e (UNCONDITIONAL_JUMP)  ; LAB_0040648e
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004064f8 | DAT_01c6b5cc
        ;   Label: LAB_004064f8
    JMP 0x0040648e                      ; 00406502
        ;   XREF to: 0040648e (UNCONDITIONAL_JUMP)  ; LAB_0040648e
    PUSH 0x730418                       ; 00406504 | DAT_00730418
        ;   Label: LAB_00406504
    MOV ESI,dword ptr [EDI + 0x4]       ; 00406509
    PUSH ESI                            ; 0040650c
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040650d
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406512
    POP EBX                             ; 00406515
    MOV EDX,dword ptr [EDI + 0x4]       ; 00406516
        ;   Label: LAB_00406516
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406519
    SUB EAX,EDX                         ; 00406520
    ADD EDI,0x18                        ; 00406522
    SHL EAX,0x2                         ; 00406525
    MOV EBP,dword ptr [0x007303e0]      ; 00406528 | DAT_007303e0
    ADD EAX,EDI                         ; 0040652e
    POP EBP                             ; 00406530
    POP EDI                             ; 00406531
    POP ESI                             ; 00406532
    RET                                 ; 00406533

