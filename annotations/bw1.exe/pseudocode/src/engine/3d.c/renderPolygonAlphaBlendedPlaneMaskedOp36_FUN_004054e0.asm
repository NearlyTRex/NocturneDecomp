; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c30 at 00406d5c
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f028
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004054e0
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0
    PUSH ESI                            ; 004054e1
    PUSH EBP                            ; 004054e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004054e3
    LEA ESI,[EBX + 0x18]                ; 004054e7
    LEA EAX,[EBX + 0x8]                 ; 004054ea
    PUSH EAX                            ; 004054ed
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004054ee
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004054f3
    TEST EAX,EAX                        ; 004054f6
    JZ 0x00405545                       ; 004054f8
        ;   XREF to: 00405545 (CONDITIONAL_JUMP)  ; LAB_00405545
    CMP dword ptr [0x01c4f028],0x0      ; 004054fa | DAT_01c4f028
    JZ 0x00405581                       ; 00405501
        ;   XREF to: 00405581 (CONDITIONAL_JUMP)  ; LAB_00405581
    CMP dword ptr [0x01c51d00],0x0      ; 00405507 | DAT_01c51d00
    JNZ 0x00405560                      ; 0040550e
        ;   XREF to: 00405560 (CONDITIONAL_JUMP)  ; LAB_00405560
    CMP dword ptr [0x0061b4a0],0x20     ; 00405510 | DAT_0061b4a0
    JNZ 0x00405554                      ; 00405517
        ;   XREF to: 00405554 (CONDITIONAL_JUMP)  ; LAB_00405554
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405519 | DAT_01c4f02c
    MOV EBP,0xd                         ; 00405523
        ;   Label: LAB_00405523
    PUSH ESI                            ; 00405528
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405529
    MOV EAX,0x4                         ; 0040552c
    PUSH EDX                            ; 00405531
    MOV dword ptr [0x01c51d14],EBP      ; 00405532 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00405538 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040553d
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405542
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405545
        ;   Label: LAB_00405545
    LEA EAX,[EBX + 0x18]                ; 00405548
    SHL ESI,0x2                         ; 0040554b
    ADD EAX,ESI                         ; 0040554e
    POP EBP                             ; 00405550
    POP ESI                             ; 00405551
    POP EBX                             ; 00405552
    RET                                 ; 00405553
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405554 | DAT_01c4f02c
        ;   Label: LAB_00405554
    JMP 0x00405523                      ; 0040555e
        ;   XREF to: 00405523 (UNCONDITIONAL_JUMP)  ; LAB_00405523
    CMP dword ptr [0x0061b4a0],0x20     ; 00405560 | DAT_0061b4a0
        ;   Label: LAB_00405560
    JNZ 0x00405575                      ; 00405567
        ;   XREF to: 00405575 (CONDITIONAL_JUMP)  ; LAB_00405575
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405569 | DAT_01c4f02c
    JMP 0x00405523                      ; 00405573
        ;   XREF to: 00405523 (UNCONDITIONAL_JUMP)  ; LAB_00405523
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405575 | DAT_01c4f02c
        ;   Label: LAB_00405575
    JMP 0x00405523                      ; 0040557f
        ;   XREF to: 00405523 (UNCONDITIONAL_JUMP)  ; LAB_00405523
    CMP dword ptr [0x01c51d00],0x0      ; 00405581 | DAT_01c51d00
        ;   Label: LAB_00405581
    JNZ 0x004055d7                      ; 00405588
        ;   XREF to: 004055d7 (CONDITIONAL_JUMP)  ; LAB_004055d7
    CMP dword ptr [0x0061b4a0],0x20     ; 0040558a | DAT_0061b4a0
    JNZ 0x004055cb                      ; 00405591
        ;   XREF to: 004055cb (CONDITIONAL_JUMP)  ; LAB_004055cb
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405593 | DAT_01c4f02c
    MOV EBP,0x20d                       ; 0040559d
        ;   Label: LAB_0040559d
    PUSH ESI                            ; 004055a2
    MOV EDX,dword ptr [EBX + 0x4]       ; 004055a3
    XOR EAX,EAX                         ; 004055a6
    PUSH EDX                            ; 004055a8
    MOV dword ptr [0x01c51d14],EBP      ; 004055a9 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 004055af | DAT_01c51d18
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 004055b4
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004055b9
    MOV ESI,dword ptr [EBX + 0x4]       ; 004055bc
    LEA EAX,[EBX + 0x18]                ; 004055bf
    SHL ESI,0x2                         ; 004055c2
    ADD EAX,ESI                         ; 004055c5
    POP EBP                             ; 004055c7
    POP ESI                             ; 004055c8
    POP EBX                             ; 004055c9
    RET                                 ; 004055ca
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004055cb | DAT_01c4f02c
        ;   Label: LAB_004055cb
    JMP 0x0040559d                      ; 004055d5
        ;   XREF to: 0040559d (UNCONDITIONAL_JUMP)  ; LAB_0040559d
    CMP dword ptr [0x0061b4a0],0x20     ; 004055d7 | DAT_0061b4a0
        ;   Label: LAB_004055d7
    JNZ 0x004055ec                      ; 004055de
        ;   XREF to: 004055ec (CONDITIONAL_JUMP)  ; LAB_004055ec
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004055e0 | DAT_01c4f02c
    JMP 0x0040559d                      ; 004055ea
        ;   XREF to: 0040559d (UNCONDITIONAL_JUMP)  ; LAB_0040559d
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004055ec | DAT_01c4f02c
        ;   Label: LAB_004055ec
    JMP 0x0040559d                      ; 004055f6
        ;   XREF to: 0040559d (UNCONDITIONAL_JUMP)  ; LAB_0040559d

