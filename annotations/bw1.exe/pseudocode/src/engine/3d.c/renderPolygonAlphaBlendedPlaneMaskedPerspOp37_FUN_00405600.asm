; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d70 at 00406e9f
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

    PUSH EBX                            ; 00405600
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600
    PUSH ESI                            ; 00405601
    PUSH EBP                            ; 00405602
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405603
    LEA ESI,[EBX + 0x18]                ; 00405607
    LEA EAX,[EBX + 0x8]                 ; 0040560a
    PUSH EAX                            ; 0040560d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040560e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405613
    TEST EAX,EAX                        ; 00405616
    JZ 0x00405665                       ; 00405618
        ;   XREF to: 00405665 (CONDITIONAL_JUMP)  ; LAB_00405665
    CMP dword ptr [0x01c4f028],0x0      ; 0040561a | DAT_01c4f028
    JZ 0x004056a1                       ; 00405621
        ;   XREF to: 004056a1 (CONDITIONAL_JUMP)  ; LAB_004056a1
    CMP dword ptr [0x01c51d00],0x0      ; 00405627 | DAT_01c51d00
    JNZ 0x00405680                      ; 0040562e
        ;   XREF to: 00405680 (CONDITIONAL_JUMP)  ; LAB_00405680
    CMP dword ptr [0x0061b4a0],0x20     ; 00405630 | DAT_0061b4a0
    JNZ 0x00405674                      ; 00405637
        ;   XREF to: 00405674 (CONDITIONAL_JUMP)  ; LAB_00405674
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405639 | DAT_01c4f02c
    MOV EBP,0xd                         ; 00405643
        ;   Label: LAB_00405643
    PUSH ESI                            ; 00405648
    MOV EDX,dword ptr [EBX + 0x4]       ; 00405649
    MOV EAX,0x5                         ; 0040564c
    PUSH EDX                            ; 00405651
    MOV dword ptr [0x01c51d14],EBP      ; 00405652 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00405658 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040565d
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405662
    MOV ESI,dword ptr [EBX + 0x4]       ; 00405665
        ;   Label: LAB_00405665
    LEA EAX,[EBX + 0x18]                ; 00405668
    SHL ESI,0x2                         ; 0040566b
    ADD EAX,ESI                         ; 0040566e
    POP EBP                             ; 00405670
    POP ESI                             ; 00405671
    POP EBX                             ; 00405672
    RET                                 ; 00405673
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405674 | DAT_01c4f02c
        ;   Label: LAB_00405674
    JMP 0x00405643                      ; 0040567e
        ;   XREF to: 00405643 (UNCONDITIONAL_JUMP)  ; LAB_00405643
    CMP dword ptr [0x0061b4a0],0x20     ; 00405680 | DAT_0061b4a0
        ;   Label: LAB_00405680
    JNZ 0x00405695                      ; 00405687
        ;   XREF to: 00405695 (CONDITIONAL_JUMP)  ; LAB_00405695
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405689 | DAT_01c4f02c
    JMP 0x00405643                      ; 00405693
        ;   XREF to: 00405643 (UNCONDITIONAL_JUMP)  ; LAB_00405643
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405695 | DAT_01c4f02c
        ;   Label: LAB_00405695
    JMP 0x00405643                      ; 0040569f
        ;   XREF to: 00405643 (UNCONDITIONAL_JUMP)  ; LAB_00405643
    CMP dword ptr [0x01c51d00],0x0      ; 004056a1 | DAT_01c51d00
        ;   Label: LAB_004056a1
    JNZ 0x004056fa                      ; 004056a8
        ;   XREF to: 004056fa (CONDITIONAL_JUMP)  ; LAB_004056fa
    CMP dword ptr [0x0061b4a0],0x20     ; 004056aa | DAT_0061b4a0
    JNZ 0x004056ee                      ; 004056b1
        ;   XREF to: 004056ee (CONDITIONAL_JUMP)  ; LAB_004056ee
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004056b3 | DAT_01c4f02c
    MOV EBP,0x20d                       ; 004056bd
        ;   Label: LAB_004056bd
    PUSH ESI                            ; 004056c2
    MOV EDX,dword ptr [EBX + 0x4]       ; 004056c3
    MOV EAX,0x5                         ; 004056c6
    PUSH EDX                            ; 004056cb
    MOV dword ptr [0x01c51d14],EBP      ; 004056cc | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 004056d2 | DAT_01c51d18
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 004056d7
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004056dc
    MOV ESI,dword ptr [EBX + 0x4]       ; 004056df
    LEA EAX,[EBX + 0x18]                ; 004056e2
    SHL ESI,0x2                         ; 004056e5
    ADD EAX,ESI                         ; 004056e8
    POP EBP                             ; 004056ea
    POP ESI                             ; 004056eb
    POP EBX                             ; 004056ec
    RET                                 ; 004056ed
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004056ee | DAT_01c4f02c
        ;   Label: LAB_004056ee
    JMP 0x004056bd                      ; 004056f8
        ;   XREF to: 004056bd (UNCONDITIONAL_JUMP)  ; LAB_004056bd
    CMP dword ptr [0x0061b4a0],0x20     ; 004056fa | DAT_0061b4a0
        ;   Label: LAB_004056fa
    JNZ 0x0040570f                      ; 00405701
        ;   XREF to: 0040570f (CONDITIONAL_JUMP)  ; LAB_0040570f
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405703 | DAT_01c4f02c
    JMP 0x004056bd                      ; 0040570d
        ;   XREF to: 004056bd (UNCONDITIONAL_JUMP)  ; LAB_004056bd
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0040570f | DAT_01c4f02c
        ;   Label: LAB_0040570f
    JMP 0x004056bd                      ; 00405719
        ;   XREF to: 004056bd (UNCONDITIONAL_JUMP)  ; LAB_004056bd

