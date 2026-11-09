; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_004074b0(int param_1,uint param_2,int param_3)
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

    PUSH EBX                            ; 004074b0
        ;   Label: engine_3d.c_renderPolygonWithRenderFlags_FUN_004074b0
    PUSH ESI                            ; 004074b1
    PUSH EDI                            ; 004074b2
    PUSH EBP                            ; 004074b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004074b4
    LEA EAX,[EBX + 0x8]                 ; 004074b8
    PUSH EAX                            ; 004074bb
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004074bc
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004074c1
    TEST EAX,EAX                        ; 004074c4
    JZ 0x00407541                       ; 004074c6
        ;   XREF to: 00407541 (CONDITIONAL_JUMP)  ; LAB_00407541
    CMP dword ptr [0x01c6e2a0],0x0      ; 004074cc | DAT_01c6e2a0
    JNZ 0x00407552                      ; 004074d3
        ;   XREF to: 00407552 (CONDITIONAL_JUMP)  ; LAB_00407552
    CMP dword ptr [0x005fba20],0x20     ; 004074d9 | DAT_005fba20
    JNZ 0x00407546                      ; 004074e0
        ;   XREF to: 00407546 (CONDITIONAL_JUMP)  ; LAB_00407546
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004074e2 | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x18]      ; 004074ec
        ;   Label: LAB_004074ec
    MOV [0x01c6e2b4],EAX                ; 004074f0 | DAT_01c6e2b4
    TEST byte ptr [ESP + 0x18],0x10     ; 004074f5
    JZ 0x00407515                       ; 004074fa
        ;   XREF to: 00407515 (CONDITIONAL_JUMP)  ; LAB_00407515
    MOV ECX,dword ptr [EBX + 0x10]      ; 004074fc
    PUSH ECX                            ; 004074ff
    MOV ESI,dword ptr [EBX + 0xc]       ; 00407500
    PUSH ESI                            ; 00407503
    MOV EDI,dword ptr [EBX + 0x8]       ; 00407504
    PUSH EDI                            ; 00407507
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 00407508
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040750d
    MOV [0x01c6b5c4],EAX                ; 00407510 | DAT_01c6b5c4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00407515
        ;   Label: LAB_00407515
    TEST EBP,EBP                        ; 00407519
    JZ 0x00407576                       ; 0040751b
        ;   XREF to: 00407576 (CONDITIONAL_JUMP)  ; LAB_00407576
    MOV dword ptr [0x01c6e2b8],0x5      ; 0040751d | DAT_01c6e2b8
    MOV ESI,dword ptr [0x01c6b5c8]      ; 00407527 | DAT_01c6b5c8
        ;   Label: LAB_00407527
    LEA EAX,[EBX + 0x18]                ; 0040752d
    TEST ESI,ESI                        ; 00407530
    JZ 0x00407591                       ; 00407532
        ;   XREF to: 00407591 (CONDITIONAL_JUMP)  ; LAB_00407591
    PUSH EAX                            ; 00407534
    MOV EBP,dword ptr [EBX + 0x4]       ; 00407535
    PUSH EBP                            ; 00407538
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00407539
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040753e
    POP EBP                             ; 00407541
        ;   Label: LAB_00407541
    POP EDI                             ; 00407542
    POP ESI                             ; 00407543
    POP EBX                             ; 00407544
    RET                                 ; 00407545
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00407546 | DAT_01c6b5cc
        ;   Label: LAB_00407546
    JMP 0x004074ec                      ; 00407550
        ;   XREF to: 004074ec (UNCONDITIONAL_JUMP)  ; LAB_004074ec
    CMP dword ptr [0x005fba20],0x20     ; 00407552 | DAT_005fba20
        ;   Label: LAB_00407552
    JNZ 0x00407567                      ; 00407559
        ;   XREF to: 00407567 (CONDITIONAL_JUMP)  ; LAB_00407567
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040755b | DAT_01c6b5cc
    JMP 0x004074ec                      ; 00407565
        ;   XREF to: 004074ec (UNCONDITIONAL_JUMP)  ; LAB_004074ec
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00407567 | DAT_01c6b5cc
        ;   Label: LAB_00407567
    JMP 0x004074ec                      ; 00407571
        ;   XREF to: 004074ec (UNCONDITIONAL_JUMP)  ; LAB_004074ec
    TEST byte ptr [ESP + 0x18],0xc0     ; 00407576
        ;   Label: LAB_00407576
    JZ 0x00407589                       ; 0040757b
        ;   XREF to: 00407589 (CONDITIONAL_JUMP)  ; LAB_00407589
    MOV dword ptr [0x01c6e2b8],0x1      ; 0040757d | DAT_01c6e2b8
    JMP 0x00407527                      ; 00407587
        ;   XREF to: 00407527 (UNCONDITIONAL_JUMP)  ; LAB_00407527
    MOV dword ptr [0x01c6e2b8],EBP      ; 00407589 | DAT_01c6e2b8
        ;   Label: LAB_00407589
    JMP 0x00407527                      ; 0040758f
        ;   XREF to: 00407527 (UNCONDITIONAL_JUMP)  ; LAB_00407527
    PUSH EAX                            ; 00407591
        ;   Label: LAB_00407591
    MOV EDI,dword ptr [EBX + 0x4]       ; 00407592
    PUSH EDI                            ; 00407595
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 ; 00407596
        ;   XREF to: 0043bac0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043bac0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040759b
    POP EBP                             ; 0040759e
    POP EDI                             ; 0040759f
    POP ESI                             ; 004075a0
    POP EBX                             ; 004075a1
    RET                                 ; 004075a2

