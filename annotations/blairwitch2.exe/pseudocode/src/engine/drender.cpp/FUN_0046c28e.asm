; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046c28e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_007bee30
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b55
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dpart.cpp_FUN_004625f0
;   core_main.c_FUN_004e4500
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40
;   core_zombie.cpp_FUN_0059a0b0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0046c28e
        ;   Label: engine_drender.cpp_FUN_0046c28e
    PUSH EBX                            ; 0046c290
    PUSH ESI                            ; 0046c291
    PUSH EDI                            ; 0046c292
    PUSH EBP                            ; 0046c293
    SUB ESP,0x58                        ; 0046c294
    MOV EBX,dword ptr [ESP + 0x70]      ; 0046c297
    MOV ESI,dword ptr [ESP + 0x74]      ; 0046c29b
    MOV EBP,dword ptr [ESP + 0x78]      ; 0046c29f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0046c2a3
    CMP EDI,-0x1                        ; 0046c2a7
    JNZ 0x0046c2b1                      ; 0046c2aa
        ;   XREF to: 0046c2b1 (CONDITIONAL_JUMP)  ; LAB_0046c2b1
    MOV EDI,0x2cd                       ; 0046c2ac
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c2b1
        ;   Label: LAB_0046c2b1
    CMP dword ptr [EAX + 0x1c],0x0      ; 0046c2b5
    JZ 0x0046c2dd                       ; 0046c2b9
        ;   XREF to: 0046c2dd (CONDITIONAL_JUMP)  ; LAB_0046c2dd
    MOV ECX,0x5d16b5                    ; 0046c2bb
    MOV EAX,0xa6a                       ; 0046c2c0
    PUSH 0x5d16cb                       ; 0046c2c5
    MOV dword ptr [0x01d046a0],ECX      ; 0046c2ca | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0046c2d0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046c2d5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0046c2da
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c2dd
        ;   Label: LAB_0046c2dd
    CMP dword ptr [EAX + 0x4],0x0       ; 0046c2e1
    JZ 0x0046c3cb                       ; 0046c2e5
        ;   XREF to: 0046c3cb (CONDITIONAL_JUMP)  ; LAB_0046c3cb
    XOR EDX,EDX                         ; 0046c2eb
    MOV EAX,0x46e936                    ; 0046c2ed
    MOV dword ptr [0x01c38b54],EDX      ; 0046c2f2 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046c2f8 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046c2fe | DAT_01c35e6c
    TEST ESI,ESI                        ; 0046c303
    JLE 0x0046c37f                      ; 0046c305
        ;   XREF to: 0046c37f (CONDITIONAL_JUMP)  ; LAB_0046c37f
    LEA EAX,[EBP + EBP*0x1]             ; 0046c30b
    MOV dword ptr [ESP + 0x50],EAX      ; 0046c30f
    CMP dword ptr [0x0070ca7c],0x0      ; 0046c313 | DAT_0070ca7c
        ;   Label: LAB_0046c313
    JNZ 0x0046c387                      ; 0046c31a
        ;   XREF to: 0046c387 (CONDITIONAL_JUMP)  ; LAB_0046c387
    XOR EDX,EDX                         ; 0046c320
        ;   Label: LAB_0046c320
    TEST EBP,EBP                        ; 0046c322
    JLE 0x0046c345                      ; 0046c324
        ;   XREF to: 0046c345 (CONDITIONAL_JUMP)  ; LAB_0046c345
    MOV EAX,EBX                         ; 0046c326
    XOR ECX,ECX                         ; 0046c328
    CMP word ptr [EAX],-0x1             ; 0046c32a
        ;   Label: LAB_0046c32a
    JZ 0x0046c345                       ; 0046c32e
        ;   XREF to: 0046c345 (CONDITIONAL_JUMP)  ; LAB_0046c345
    ADD EAX,0x2                         ; 0046c330
    XOR EDI,EDI                         ; 0046c333
    ADD ECX,0x4                         ; 0046c335
    MOV DI,word ptr [EAX + -0x2]        ; 0046c338
    INC EDX                             ; 0046c33c
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0046c33d
    CMP EDX,EBP                         ; 0046c341
    JL 0x0046c32a                       ; 0046c343
        ;   XREF to: 0046c32a (CONDITIONAL_JUMP)  ; LAB_0046c32a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c345
        ;   Label: LAB_0046c345
    CMP dword ptr [EAX + 0x10],0x0      ; 0046c349
    JZ 0x0046c3be                       ; 0046c34d
        ;   XREF to: 0046c3be (CONDITIONAL_JUMP)  ; LAB_0046c3be
    MOV EAX,ESP                         ; 0046c34f
    PUSH EAX                            ; 0046c351
    PUSH EDX                            ; 0046c352
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00594f40 ; 0046c353
        ;   XREF to: 00594f40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count, int * vertex_indices)
    MOV EDI,dword ptr [0x007bee30]      ; 0046c358 | DAT_007bee30
    ADD ESP,0x8                         ; 0046c35e
    CMP EDI,0x2                         ; 0046c361
    JLE 0x0046c374                      ; 0046c364
        ;   XREF to: 0046c374 (CONDITIONAL_JUMP)  ; LAB_0046c374
    PUSH EDI                            ; 0046c366
    PUSH 0x7bee34                       ; 0046c367
    CALL core_zombie.cpp_FUN_0059a0b0   ; 0046c36c
        ;   XREF to: 0059a0b0 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0059a0b0(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 0046c371
        ;   Label: LAB_0046c371
    MOV EDX,dword ptr [ESP + 0x50]      ; 0046c374
        ;   Label: LAB_0046c374
    DEC ESI                             ; 0046c378
    ADD EBX,EDX                         ; 0046c379
    TEST ESI,ESI                        ; 0046c37b
        ;   Label: LAB_0046c37b
    JG 0x0046c313                       ; 0046c37d
        ;   XREF to: 0046c313 (CONDITIONAL_JUMP)  ; LAB_0046c313
    ADD ESP,0x58                        ; 0046c37f
        ;   Label: LAB_0046c37f
    POP EBP                             ; 0046c382
    POP EDI                             ; 0046c383
    POP ESI                             ; 0046c384
    POP EBX                             ; 0046c385
    RET                                 ; 0046c386
    XOR EDX,EDX                         ; 0046c387
        ;   Label: LAB_0046c387
    MOV DX,word ptr [EBX + 0x2]         ; 0046c389
    IMUL EDX,EDX,0x30                   ; 0046c38d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c390
    MOV EAX,dword ptr [EAX]             ; 0046c394
    ADD EDX,EAX                         ; 0046c396
    PUSH EDX                            ; 0046c398
    PUSH EDX                            ; 0046c399
    XOR EDX,EDX                         ; 0046c39a
    MOV DX,word ptr [EBX]               ; 0046c39c
    IMUL EDX,EDX,0x30                   ; 0046c39f
    ADD EAX,EDX                         ; 0046c3a2
    PUSH EAX                            ; 0046c3a4
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0046c3a5
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 0046c3aa
    TEST EAX,EAX                        ; 0046c3ad
    JNZ 0x0046c320                      ; 0046c3af
        ;   XREF to: 0046c320 (CONDITIONAL_JUMP)  ; LAB_0046c320
    MOV EAX,dword ptr [ESP + 0x50]      ; 0046c3b5
    DEC ESI                             ; 0046c3b9
    ADD EBX,EAX                         ; 0046c3ba
    JMP 0x0046c37b                      ; 0046c3bc
        ;   XREF to: 0046c37b (UNCONDITIONAL_JUMP)  ; LAB_0046c37b
    PUSH EDX                            ; 0046c3be
        ;   Label: LAB_0046c3be
    LEA EAX,[ESP + 0x4]                 ; 0046c3bf
    PUSH EAX                            ; 0046c3c3
    CALL core_dpart.cpp_FUN_004625f0    ; 0046c3c4
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_004625f0(CVector3i * vertex_indices, int vertex_count)
    JMP 0x0046c371                      ; 0046c3c9
        ;   XREF to: 0046c371 (UNCONDITIONAL_JUMP)  ; LAB_0046c371
    CMP EDI,0xc0                        ; 0046c3cb
        ;   Label: LAB_0046c3cb
    JNZ 0x0046c469                      ; 0046c3d1
        ;   XREF to: 0046c469 (CONDITIONAL_JUMP)  ; LAB_0046c469
    MOV dword ptr [0x01c35e6c],0x46e8f0 ; 0046c3d7 | DAT_01c35e6c
    MOV dword ptr [0x01c38b54],EDI      ; 0046c3e1 | DAT_01c38b54
        ;   Label: LAB_0046c3e1
    MOV dword ptr [0x01c38b58],0x6      ; 0046c3e7 | DAT_01c38b58
    TEST ESI,ESI                        ; 0046c3f1
    JLE 0x0046c37f                      ; 0046c3f3
        ;   XREF to: 0046c37f (CONDITIONAL_JUMP)  ; LAB_0046c37f
    LEA EAX,[EBP + EBP*0x1]             ; 0046c3f5
    MOV dword ptr [ESP + 0x54],EAX      ; 0046c3f9
    CMP dword ptr [0x0070ca7c],0x0      ; 0046c3fd | DAT_0070ca7c
        ;   Label: LAB_0046c3fd
    JNZ 0x0046c490                      ; 0046c404
        ;   XREF to: 0046c490 (CONDITIONAL_JUMP)  ; LAB_0046c490
    XOR EDX,EDX                         ; 0046c40a
        ;   Label: LAB_0046c40a
    TEST EBP,EBP                        ; 0046c40c
    JLE 0x0046c42f                      ; 0046c40e
        ;   XREF to: 0046c42f (CONDITIONAL_JUMP)  ; LAB_0046c42f
    MOV EAX,EBX                         ; 0046c410
    XOR ECX,ECX                         ; 0046c412
    CMP word ptr [EAX],-0x1             ; 0046c414
        ;   Label: LAB_0046c414
    JZ 0x0046c42f                       ; 0046c418
        ;   XREF to: 0046c42f (CONDITIONAL_JUMP)  ; LAB_0046c42f
    ADD EAX,0x2                         ; 0046c41a
    XOR EDI,EDI                         ; 0046c41d
    ADD ECX,0x4                         ; 0046c41f
    MOV DI,word ptr [EAX + -0x2]        ; 0046c422
    INC EDX                             ; 0046c426
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0046c427
    CMP EDX,EBP                         ; 0046c42b
    JL 0x0046c414                       ; 0046c42d
        ;   XREF to: 0046c414 (CONDITIONAL_JUMP)  ; LAB_0046c414
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c42f
        ;   Label: LAB_0046c42f
    CMP dword ptr [EAX + 0x10],0x0      ; 0046c433
    JZ 0x0046c4e3                       ; 0046c437
        ;   XREF to: 0046c4e3 (CONDITIONAL_JUMP)  ; LAB_0046c4e3
    TEST byte ptr [0x01c38b55],0x2      ; 0046c43d | DAT_01c38b55
    JZ 0x0046c4d5                       ; 0046c444
        ;   XREF to: 0046c4d5 (CONDITIONAL_JUMP)  ; LAB_0046c4d5
    MOV EAX,ESP                         ; 0046c44a
        ;   Label: LAB_0046c44a
    PUSH EAX                            ; 0046c44c
    PUSH EDX                            ; 0046c44d
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 0046c44e
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0046c453
        ;   Label: LAB_0046c453
    MOV ECX,dword ptr [ESP + 0x54]      ; 0046c456
        ;   Label: LAB_0046c456
    DEC ESI                             ; 0046c45a
    ADD EBX,ECX                         ; 0046c45b
    TEST ESI,ESI                        ; 0046c45d
    JG 0x0046c3fd                       ; 0046c45f
        ;   XREF to: 0046c3fd (CONDITIONAL_JUMP)  ; LAB_0046c3fd
    ADD ESP,0x58                        ; 0046c461
    POP EBP                             ; 0046c464
    POP EDI                             ; 0046c465
    POP ESI                             ; 0046c466
    POP EBX                             ; 0046c467
    RET                                 ; 0046c468
    CMP dword ptr [0x006141c0],0x20     ; 0046c469 | DAT_006141c0
        ;   Label: LAB_0046c469
    JNZ 0x0046c481                      ; 0046c470
        ;   XREF to: 0046c481 (CONDITIONAL_JUMP)  ; LAB_0046c481
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046c472 | DAT_01c35e6c
    JMP 0x0046c3e1                      ; 0046c47c
        ;   XREF to: 0046c3e1 (UNCONDITIONAL_JUMP)  ; LAB_0046c3e1
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046c481 | DAT_01c35e6c
        ;   Label: LAB_0046c481
    JMP 0x0046c3e1                      ; 0046c48b
        ;   XREF to: 0046c3e1 (UNCONDITIONAL_JUMP)  ; LAB_0046c3e1
    XOR EAX,EAX                         ; 0046c490
        ;   Label: LAB_0046c490
    MOV AX,word ptr [EBX + 0x2]         ; 0046c492
    IMUL EDX,EAX,0x30                   ; 0046c496
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0046c499
    MOV EAX,dword ptr [EAX]             ; 0046c49d
    ADD EDX,EAX                         ; 0046c49f
    PUSH EDX                            ; 0046c4a1
    PUSH EDX                            ; 0046c4a2
    XOR EDX,EDX                         ; 0046c4a3
    MOV DX,word ptr [EBX]               ; 0046c4a5
    IMUL EDX,EDX,0x30                   ; 0046c4a8
    ADD EAX,EDX                         ; 0046c4ab
    PUSH EAX                            ; 0046c4ad
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760 ; 0046c4ae
        ;   XREF to: 0051c760 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0051c760()
    ADD ESP,0xc                         ; 0046c4b3
    TEST EAX,EAX                        ; 0046c4b6
    JNZ 0x0046c40a                      ; 0046c4b8
        ;   XREF to: 0046c40a (CONDITIONAL_JUMP)  ; LAB_0046c40a
    MOV EAX,dword ptr [ESP + 0x54]      ; 0046c4be
    DEC ESI                             ; 0046c4c2
    ADD EBX,EAX                         ; 0046c4c3
    TEST ESI,ESI                        ; 0046c4c5
    JG 0x0046c3fd                       ; 0046c4c7
        ;   XREF to: 0046c3fd (CONDITIONAL_JUMP)  ; LAB_0046c3fd
    ADD ESP,0x58                        ; 0046c4cd
    POP EBP                             ; 0046c4d0
    POP EDI                             ; 0046c4d1
    POP ESI                             ; 0046c4d2
    POP EBX                             ; 0046c4d3
    RET                                 ; 0046c4d4
    MOV EAX,ESP                         ; 0046c4d5
        ;   Label: LAB_0046c4d5
    PUSH EAX                            ; 0046c4d7
    PUSH EDX                            ; 0046c4d8
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0046c4d9
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    JMP 0x0046c453                      ; 0046c4de
        ;   XREF to: 0046c453 (UNCONDITIONAL_JUMP)  ; LAB_0046c453
    CMP dword ptr [EAX + 0x4],0x0       ; 0046c4e3
        ;   Label: LAB_0046c4e3
    JZ 0x0046c4f2                       ; 0046c4e7
        ;   XREF to: 0046c4f2 (CONDITIONAL_JUMP)  ; LAB_0046c4f2
    TEST byte ptr [0x01c38b54],0x1      ; 0046c4e9 | DAT_01c38b54
    JZ 0x0046c509                       ; 0046c4f0
        ;   XREF to: 0046c509 (CONDITIONAL_JUMP)  ; LAB_0046c509
    TEST byte ptr [0x01c38b54],0x5      ; 0046c4f2 | DAT_01c38b54
        ;   Label: LAB_0046c4f2
    JZ 0x0046c509                       ; 0046c4f9
        ;   XREF to: 0046c509 (CONDITIONAL_JUMP)  ; LAB_0046c509
    TEST byte ptr [0x01c38b55],0x2      ; 0046c4fb | DAT_01c38b55
    JZ 0x0046c4d5                       ; 0046c502
        ;   XREF to: 0046c4d5 (CONDITIONAL_JUMP)  ; LAB_0046c4d5
    JMP 0x0046c44a                      ; 0046c504
        ;   XREF to: 0046c44a (UNCONDITIONAL_JUMP)  ; LAB_0046c44a
    MOV EAX,ESP                         ; 0046c509
        ;   Label: LAB_0046c509
    PUSH EAX                            ; 0046c50b
    PUSH EDX                            ; 0046c50c
    CALL core_xform.cpp_transformAndClipGeometry_FUN_00594f40 ; 0046c50d
        ;   XREF to: 00594f40 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_00594f40(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007bee30]                ; 0046c512 | DAT_007bee30
    ADD ESP,0x8                         ; 0046c517
    CMP EAX,0x2                         ; 0046c51a
    JLE 0x0046c456                      ; 0046c51d
        ;   XREF to: 0046c456 (CONDITIONAL_JUMP)  ; LAB_0046c456
    PUSH EAX                            ; 0046c523
    PUSH 0x7bee34                       ; 0046c524
    CALL core_zombie.cpp_FUN_0059a0b0   ; 0046c529
        ;   XREF to: 0059a0b0 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_0059a0b0(SRenderVertex * vertex_buffer, int vertex_count)
    JMP 0x0046c453                      ; 0046c52e
        ;   XREF to: 0046c453 (UNCONDITIONAL_JUMP)  ; LAB_0046c453

