; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407820 at 004079b9
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00713a60
;   undefined4 DAT_00713a98
;   undefined4 DAT_00713a9c
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51cac
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404560
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560
    PUSH EDI                            ; 00404561
    PUSH EBP                            ; 00404562
    MOV EBP,dword ptr [0x00713a60]      ; 00404563 | DAT_00713a60
    MOV EDI,dword ptr [ESP + 0x10]      ; 00404569
    LEA ESI,[EDI + 0x18]                ; 0040456d
    LEA EAX,[EDI + 0x8]                 ; 00404570
    PUSH EAX                            ; 00404573
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404574
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404579
    TEST EAX,EAX                        ; 0040457c
    JNZ 0x004045a2                      ; 0040457e
        ;   XREF to: 004045a2 (CONDITIONAL_JUMP)  ; LAB_004045a2
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404580
        ;   Label: LAB_00404580
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404583
    SUB EAX,EDX                         ; 0040458a
    LEA EDX,[EAX*0x4 + 0x0]             ; 0040458c
    LEA EAX,[EDI + 0x18]                ; 00404593
    MOV EBP,dword ptr [0x00713a60]      ; 00404596 | DAT_00713a60
    ADD EAX,EDX                         ; 0040459c
    POP EBP                             ; 0040459e
    POP EDI                             ; 0040459f
    POP ESI                             ; 004045a0
    RET                                 ; 004045a1
    PUSH EDI                            ; 004045a2
        ;   Label: LAB_004045a2
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004045a3
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    MOV EDX,dword ptr [0x01c51cac]      ; 004045a8 | DAT_01c51cac
    ADD ESP,0x4                         ; 004045ae
    TEST EDX,EDX                        ; 004045b1
    JZ 0x00404677                       ; 004045b3
        ;   XREF to: 00404677 (CONDITIONAL_JUMP)  ; LAB_00404677
    MOV EDX,dword ptr [0x01c51d00]      ; 004045b9 | DAT_01c51d00
    MOV EBP,dword ptr [0x00713a60]      ; 004045bf | DAT_00713a60
    TEST EDX,EDX                        ; 004045c5
    JNZ 0x00404650                      ; 004045c7
        ;   XREF to: 00404650 (CONDITIONAL_JUMP)  ; LAB_00404650
    CMP dword ptr [0x0061b4a0],0x20     ; 004045cd | DAT_0061b4a0
    JNZ 0x00404644                      ; 004045d4
        ;   XREF to: 00404644 (CONDITIONAL_JUMP)  ; LAB_00404644
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004045d6 | DAT_01c4f02c
        ;   Label: LAB_004045d6
    PUSH EBX                            ; 004045e0
        ;   Label: LAB_004045e0
    MOV EAX,0x1                         ; 004045e1
    MOV EDX,0xd9                        ; 004045e6
    MOV EBX,0x713a98                    ; 004045eb | DAT_00713a98
    XOR ECX,ECX                         ; 004045f0
    MOV [0x01c51d18],EAX                ; 004045f2 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 004045f7 | DAT_01c51d14
    MOV EAX,ESI                         ; 004045fd
    MOV EDX,dword ptr [EDI + 0x4]       ; 004045ff
        ;   Label: LAB_004045ff
    LEA EDX,[EDX + EDX*0x2]             ; 00404602
    MOV dword ptr [0x00713a60],EBP      ; 00404605 | DAT_00713a60
    CMP ECX,EDX                         ; 0040460b
    JGE 0x004046bb                      ; 0040460d
        ;   XREF to: 004046bb (CONDITIONAL_JUMP)  ; LAB_004046bb
    MOV EDX,dword ptr [EAX]             ; 00404613
    ADD EDX,EBP                         ; 00404615
    MOV dword ptr [EBX],EDX             ; 00404617 | DAT_00713a98 | DAT_00713a9c
    MOV EDX,dword ptr [EAX]             ; 00404619
    ADD EDX,EBP                         ; 0040461b
    IMUL EDX,EDX,0x30                   ; 0040461d
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404620
    MOV dword ptr [EDX + 0x62902c],ESI  ; 00404623 | DAT_0062902c
    MOV EDX,dword ptr [EAX]             ; 00404629
    ADD EDX,EBP                         ; 0040462b
    IMUL ESI,EDX,0x30                   ; 0040462d
    ADD EAX,0xc                         ; 00404630
    ADD EBX,0x4                         ; 00404633
    MOV EDX,dword ptr [EAX + -0x4]      ; 00404636
    ADD ECX,0x3                         ; 00404639
    MOV dword ptr [ESI + 0x629030],EDX  ; 0040463c | DAT_00629030
    JMP 0x004045ff                      ; 00404642
        ;   XREF to: 004045ff (UNCONDITIONAL_JUMP)  ; LAB_004045ff
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404644 | DAT_01c4f02c
        ;   Label: LAB_00404644
    JMP 0x004045e0                      ; 0040464e
        ;   XREF to: 004045e0 (UNCONDITIONAL_JUMP)  ; LAB_004045e0
    CMP dword ptr [0x0061b4a0],0x20     ; 00404650 | DAT_0061b4a0
        ;   Label: LAB_00404650
    JNZ 0x00404668                      ; 00404657
        ;   XREF to: 00404668 (CONDITIONAL_JUMP)  ; LAB_00404668
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00404659 | DAT_01c4f02c
    JMP 0x004045e0                      ; 00404663
        ;   XREF to: 004045e0 (UNCONDITIONAL_JUMP)  ; LAB_004045e0
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404668 | DAT_01c4f02c
        ;   Label: LAB_00404668
    JMP 0x004045e0                      ; 00404672
        ;   XREF to: 004045e0 (UNCONDITIONAL_JUMP)  ; LAB_004045e0
    MOV ECX,dword ptr [0x01c51d00]      ; 00404677 | DAT_01c51d00
        ;   Label: LAB_00404677
    MOV EBP,dword ptr [0x00713a60]      ; 0040467d | DAT_00713a60
    TEST ECX,ECX                        ; 00404683
    JNZ 0x004046a3                      ; 00404685
        ;   XREF to: 004046a3 (CONDITIONAL_JUMP)  ; LAB_004046a3
    CMP dword ptr [0x0061b4a0],0x20     ; 00404687 | DAT_0061b4a0
    JZ 0x004045d6                       ; 0040468e
        ;   XREF to: 004045d6 (CONDITIONAL_JUMP)  ; LAB_004045d6
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404694 | DAT_01c4f02c
    JMP 0x004045e0                      ; 0040469e
        ;   XREF to: 004045e0 (UNCONDITIONAL_JUMP)  ; LAB_004045e0
    CMP dword ptr [0x0061b4a0],0x20     ; 004046a3 | DAT_0061b4a0
        ;   Label: LAB_004046a3
    JNZ 0x00404668                      ; 004046aa
        ;   XREF to: 00404668 (CONDITIONAL_JUMP)  ; LAB_00404668
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004046ac | DAT_01c4f02c
    JMP 0x004045e0                      ; 004046b6
        ;   XREF to: 004045e0 (UNCONDITIONAL_JUMP)  ; LAB_004045e0
    PUSH 0x713a98                       ; 004046bb | DAT_00713a98
        ;   Label: LAB_004046bb
    MOV ECX,dword ptr [EDI + 0x4]       ; 004046c0
    PUSH ECX                            ; 004046c3
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004046c4
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004046c9
    POP EBX                             ; 004046cc
    JMP 0x00404580                      ; 004046cd
        ;   XREF to: 00404580 (UNCONDITIONAL_JUMP)  ; LAB_00404580

