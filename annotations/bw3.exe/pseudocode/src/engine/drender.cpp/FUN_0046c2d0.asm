; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046c2d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046c2d0
        ;   Label: engine_drender.cpp_FUN_0046c2d0
    PUSH ESI                            ; 0046c2d1
    PUSH EDI                            ; 0046c2d2
    PUSH EBP                            ; 0046c2d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046c2d4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046c2d8
    CMP dword ptr [EBP + 0xc],0x0       ; 0046c2dc
    JNZ 0x0046c356                      ; 0046c2e0
        ;   XREF to: 0046c356 (CONDITIONAL_JUMP)  ; LAB_0046c356
    MOV ECX,0xffffffff                  ; 0046c2e6
        ;   Label: LAB_0046c2e6
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c2eb
    XOR EDX,EDX                         ; 0046c2ee
    TEST EBX,EBX                        ; 0046c2f0
    JLE 0x0046c310                      ; 0046c2f2
        ;   XREF to: 0046c310 (CONDITIONAL_JUMP)  ; LAB_0046c310
    MOV EAX,ESI                         ; 0046c2f4
    MOV EDI,dword ptr [EBP]             ; 0046c2f6
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046c2f9
        ;   Label: LAB_0046c2f9
    IMUL EBX,EBX,0x30                   ; 0046c2fc
    INC EDX                             ; 0046c2ff
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046c300
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c304
    ADD EAX,0x4                         ; 0046c307
    CMP EDX,EBX                         ; 0046c30a
    JL 0x0046c2f9                       ; 0046c30c
        ;   XREF to: 0046c2f9 (CONDITIONAL_JUMP)  ; LAB_0046c2f9
    MOV EAX,EAX                         ; 0046c30e
    TEST ECX,0x80000000                 ; 0046c310
        ;   Label: LAB_0046c310
    JZ 0x0046c31d                       ; 0046c316
        ;   XREF to: 0046c31d (CONDITIONAL_JUMP)  ; LAB_0046c31d
    TEST CL,0x1f                        ; 0046c318
    JNZ 0x0046c351                      ; 0046c31b
        ;   XREF to: 0046c351 (CONDITIONAL_JUMP)  ; LAB_0046c351
    CMP dword ptr [EBP + 0x4],0x0       ; 0046c31d
        ;   Label: LAB_0046c31d
    JZ 0x0046c36b                       ; 0046c321
        ;   XREF to: 0046c36b (CONDITIONAL_JUMP)  ; LAB_0046c36b
    MOV EDX,0x1                         ; 0046c323
    MOV EAX,0x46fa57                    ; 0046c328
    XOR ECX,ECX                         ; 0046c32d
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046c32f | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046c335 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046c33b | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046c340
        ;   Label: LAB_0046c340
    PUSH EAX                            ; 0046c343
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046c344
    PUSH EBX                            ; 0046c347
    PUSH EBP                            ; 0046c348
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046c349
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046c34e
    POP EBP                             ; 0046c351
        ;   Label: LAB_0046c351
    POP EDI                             ; 0046c352
    POP ESI                             ; 0046c353
    POP EBX                             ; 0046c354
    RET                                 ; 0046c355
    LEA EAX,[ESI + 0x8]                 ; 0046c356
        ;   Label: LAB_0046c356
    PUSH EAX                            ; 0046c359
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046c35a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046c35f
    TEST EAX,EAX                        ; 0046c362
    JZ 0x0046c351                       ; 0046c364
        ;   XREF to: 0046c351 (CONDITIONAL_JUMP)  ; LAB_0046c351
    JMP 0x0046c2e6                      ; 0046c366
        ;   XREF to: 0046c2e6 (UNCONDITIONAL_JUMP)  ; LAB_0046c2e6
    CMP dword ptr [0x005fba20],0x20     ; 0046c36b | DAT_005fba20
        ;   Label: LAB_0046c36b
    JNZ 0x0046c396                      ; 0046c372
        ;   XREF to: 0046c396 (CONDITIONAL_JUMP)  ; LAB_0046c396
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046c374 | DAT_01c6b5cc
    MOV EDI,0x6                         ; 0046c37e
        ;   Label: LAB_0046c37e
    MOV EBX,0x2e7                       ; 0046c383
    MOV dword ptr [0x01c6e2b8],EDI      ; 0046c388 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046c38e | DAT_01c6e2b4
    JMP 0x0046c340                      ; 0046c394
        ;   XREF to: 0046c340 (UNCONDITIONAL_JUMP)  ; LAB_0046c340
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046c396 | DAT_01c6b5cc
        ;   Label: LAB_0046c396
    JMP 0x0046c37e                      ; 0046c3a0
        ;   XREF to: 0046c37e (UNCONDITIONAL_JUMP)  ; LAB_0046c37e

