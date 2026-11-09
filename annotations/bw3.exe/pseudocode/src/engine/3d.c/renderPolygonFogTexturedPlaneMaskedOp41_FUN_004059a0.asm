; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0(int param_1)
;
;
; XREF[2]:
;   engine_3d.c_FUN_00407860 at 00407987
;   engine_3d.c_flushRenderQueue_FUN_004077f0 at 0040781a
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_007303e0
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e24c
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004059a0
        ;   Label: engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_004059a0
    PUSH EDI                            ; 004059a1
    PUSH EBP                            ; 004059a2
    MOV EBP,dword ptr [0x007303e0]      ; 004059a3 | DAT_007303e0
    MOV EDI,dword ptr [ESP + 0x10]      ; 004059a9
    LEA ESI,[EDI + 0x18]                ; 004059ad
    LEA EAX,[EDI + 0x8]                 ; 004059b0
    PUSH EAX                            ; 004059b3
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004059b4
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004059b9
    TEST EAX,EAX                        ; 004059bc
    JZ 0x00405b09                       ; 004059be
        ;   XREF to: 00405b09 (CONDITIONAL_JUMP)  ; LAB_00405b09
    PUSH EBX                            ; 004059c4
    MOV EDX,dword ptr [0x01c6e24c]      ; 004059c5 | DAT_01c6e24c
    MOV EBP,dword ptr [0x007303e0]      ; 004059cb | DAT_007303e0
    TEST EDX,EDX                        ; 004059d1
    JZ 0x00405a96                       ; 004059d3
        ;   XREF to: 00405a96 (CONDITIONAL_JUMP)  ; LAB_00405a96
    CMP dword ptr [0x01c6e2a0],0x0      ; 004059d9 | DAT_01c6e2a0
    JNZ 0x00405a6f                      ; 004059e0
        ;   XREF to: 00405a6f (CONDITIONAL_JUMP)  ; LAB_00405a6f
    CMP dword ptr [0x005fba20],0x20     ; 004059e6 | DAT_005fba20
    JNZ 0x00405a63                      ; 004059ed
        ;   XREF to: 00405a63 (CONDITIONAL_JUMP)  ; LAB_00405a63
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004059ef | DAT_01c6b5cc
    MOV EBX,0x1                         ; 004059f9
        ;   Label: LAB_004059f9
    MOV ECX,0xcd                        ; 004059fe
    MOV dword ptr [0x01c6e2b8],EBX      ; 00405a03 | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],ECX      ; 00405a09 | DAT_01c6e2b4
    MOV EBX,0x730418                    ; 00405a0f | DAT_00730418
        ;   Label: LAB_00405a0f
    MOV EAX,ESI                         ; 00405a14
    XOR ECX,ECX                         ; 00405a16
    MOV ESI,dword ptr [EDI + 0x4]       ; 00405a18
        ;   Label: LAB_00405a18
    LEA EDX,[ESI*0x4 + 0x0]             ; 00405a1b
    SUB EDX,ESI                         ; 00405a22
    MOV dword ptr [0x007303e0],EBP      ; 00405a24 | DAT_007303e0
    CMP ECX,EDX                         ; 00405a2a
    JGE 0x00405afa                      ; 00405a2c
        ;   XREF to: 00405afa (CONDITIONAL_JUMP)  ; LAB_00405afa
    MOV EDX,dword ptr [EAX]             ; 00405a32
    ADD EDX,EBP                         ; 00405a34
    MOV dword ptr [EBX],EDX             ; 00405a36 | DAT_00730418 | DAT_0073041c
    MOV EDX,dword ptr [EAX]             ; 00405a38
    ADD EDX,EBP                         ; 00405a3a
    IMUL ESI,EDX,0x30                   ; 00405a3c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00405a3f
    MOV dword ptr [ESI + 0x60b02c],EDX  ; 00405a42 | DAT_0060b02c
    MOV EDX,dword ptr [EAX]             ; 00405a48
    ADD EDX,EBP                         ; 00405a4a
    IMUL ESI,EDX,0x30                   ; 00405a4c
    ADD EAX,0xc                         ; 00405a4f
    ADD EBX,0x4                         ; 00405a52
    MOV EDX,dword ptr [EAX + -0x4]      ; 00405a55
    ADD ECX,0x3                         ; 00405a58
    MOV dword ptr [ESI + 0x60b030],EDX  ; 00405a5b | DAT_0060b030
    JMP 0x00405a18                      ; 00405a61
        ;   XREF to: 00405a18 (UNCONDITIONAL_JUMP)  ; LAB_00405a18
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405a63 | DAT_01c6b5cc
        ;   Label: LAB_00405a63
    JMP 0x004059f9                      ; 00405a6d
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    CMP dword ptr [0x005fba20],0x20     ; 00405a6f | DAT_005fba20
        ;   Label: LAB_00405a6f
    JNZ 0x00405a87                      ; 00405a76
        ;   XREF to: 00405a87 (CONDITIONAL_JUMP)  ; LAB_00405a87
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405a78 | DAT_01c6b5cc
    JMP 0x004059f9                      ; 00405a82
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405a87 | DAT_01c6b5cc
        ;   Label: LAB_00405a87
    JMP 0x004059f9                      ; 00405a91
        ;   XREF to: 004059f9 (UNCONDITIONAL_JUMP)  ; LAB_004059f9
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405a96 | DAT_01c6e2a0
        ;   Label: LAB_00405a96
    JNZ 0x00405ad9                      ; 00405a9d
        ;   XREF to: 00405ad9 (CONDITIONAL_JUMP)  ; LAB_00405ad9
    CMP dword ptr [0x005fba20],0x20     ; 00405a9f | DAT_005fba20
    JNZ 0x00405acd                      ; 00405aa6
        ;   XREF to: 00405acd (CONDITIONAL_JUMP)  ; LAB_00405acd
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405aa8 | DAT_01c6b5cc
    MOV ECX,0x1                         ; 00405ab2
        ;   Label: LAB_00405ab2
    MOV EDX,0xc5                        ; 00405ab7
    MOV dword ptr [0x01c6e2b8],ECX      ; 00405abc | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDX      ; 00405ac2 | DAT_01c6e2b4
    JMP 0x00405a0f                      ; 00405ac8
        ;   XREF to: 00405a0f (UNCONDITIONAL_JUMP)  ; LAB_00405a0f
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405acd | DAT_01c6b5cc
        ;   Label: LAB_00405acd
    JMP 0x00405ab2                      ; 00405ad7
        ;   XREF to: 00405ab2 (UNCONDITIONAL_JUMP)  ; LAB_00405ab2
    CMP dword ptr [0x005fba20],0x20     ; 00405ad9 | DAT_005fba20
        ;   Label: LAB_00405ad9
    JNZ 0x00405aee                      ; 00405ae0
        ;   XREF to: 00405aee (CONDITIONAL_JUMP)  ; LAB_00405aee
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405ae2 | DAT_01c6b5cc
    JMP 0x00405ab2                      ; 00405aec
        ;   XREF to: 00405ab2 (UNCONDITIONAL_JUMP)  ; LAB_00405ab2
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405aee | DAT_01c6b5cc
        ;   Label: LAB_00405aee
    JMP 0x00405ab2                      ; 00405af8
        ;   XREF to: 00405ab2 (UNCONDITIONAL_JUMP)  ; LAB_00405ab2
    PUSH 0x730418                       ; 00405afa | DAT_00730418
        ;   Label: LAB_00405afa
    PUSH ESI                            ; 00405aff
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405b00
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405b05
    POP EBX                             ; 00405b08
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405b09
        ;   Label: LAB_00405b09
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405b0c
    SUB EAX,EDX                         ; 00405b13
    ADD EDI,0x18                        ; 00405b15
    SHL EAX,0x2                         ; 00405b18
    MOV EBP,dword ptr [0x007303e0]      ; 00405b1b | DAT_007303e0
    ADD EAX,EDI                         ; 00405b21
    POP EBP                             ; 00405b23
    POP EDI                             ; 00405b24
    POP ESI                             ; 00405b25
    RET                                 ; 00405b26

