; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonWithRenderFlags_FUN_00407470(int param_1,uint param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f024
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
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407470
        ;   Label: engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470
    PUSH ESI                            ; 00407471
    PUSH EDI                            ; 00407472
    PUSH EBP                            ; 00407473
    MOV EBX,dword ptr [ESP + 0x14]      ; 00407474
    LEA EAX,[EBX + 0x8]                 ; 00407478
    PUSH EAX                            ; 0040747b
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040747c
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00407481
    TEST EAX,EAX                        ; 00407484
    JZ 0x00407501                       ; 00407486
        ;   XREF to: 00407501 (CONDITIONAL_JUMP)  ; LAB_00407501
    CMP dword ptr [0x01c51d00],0x0      ; 0040748c | DAT_01c51d00
    JNZ 0x00407512                      ; 00407493
        ;   XREF to: 00407512 (CONDITIONAL_JUMP)  ; LAB_00407512
    CMP dword ptr [0x0061b4a0],0x20     ; 00407499 | DAT_0061b4a0
    JNZ 0x00407506                      ; 004074a0
        ;   XREF to: 00407506 (CONDITIONAL_JUMP)  ; LAB_00407506
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 004074a2 | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004074ac
        ;   Label: LAB_004074ac
    MOV [0x01c51d14],EAX                ; 004074b0 | DAT_01c51d14
    TEST byte ptr [ESP + 0x18],0x10     ; 004074b5
    JZ 0x004074d5                       ; 004074ba
        ;   XREF to: 004074d5 (CONDITIONAL_JUMP)  ; LAB_004074d5
    MOV ECX,dword ptr [EBX + 0x10]      ; 004074bc
    PUSH ECX                            ; 004074bf
    MOV ESI,dword ptr [EBX + 0xc]       ; 004074c0
    PUSH ESI                            ; 004074c3
    MOV EDI,dword ptr [EBX + 0x8]       ; 004074c4
    PUSH EDI                            ; 004074c7
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 004074c8
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004074cd
    MOV [0x01c4f024],EAX                ; 004074d0 | DAT_01c4f024
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004074d5
        ;   Label: LAB_004074d5
    TEST EBP,EBP                        ; 004074d9
    JZ 0x00407536                       ; 004074db
        ;   XREF to: 00407536 (CONDITIONAL_JUMP)  ; LAB_00407536
    MOV dword ptr [0x01c51d18],0x5      ; 004074dd | DAT_01c51d18
    MOV ESI,dword ptr [0x01c4f028]      ; 004074e7 | DAT_01c4f028
        ;   Label: LAB_004074e7
    LEA EAX,[EBX + 0x18]                ; 004074ed
    TEST ESI,ESI                        ; 004074f0
    JZ 0x00407551                       ; 004074f2
        ;   XREF to: 00407551 (CONDITIONAL_JUMP)  ; LAB_00407551
    PUSH EAX                            ; 004074f4
    MOV EBP,dword ptr [EBX + 0x4]       ; 004074f5
    PUSH EBP                            ; 004074f8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004074f9
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004074fe
    POP EBP                             ; 00407501
        ;   Label: LAB_00407501
    POP EDI                             ; 00407502
    POP ESI                             ; 00407503
    POP EBX                             ; 00407504
    RET                                 ; 00407505
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00407506 | DAT_01c4f02c
        ;   Label: LAB_00407506
    JMP 0x004074ac                      ; 00407510
        ;   XREF to: 004074ac (UNCONDITIONAL_JUMP)  ; LAB_004074ac
    CMP dword ptr [0x0061b4a0],0x20     ; 00407512 | DAT_0061b4a0
        ;   Label: LAB_00407512
    JNZ 0x00407527                      ; 00407519
        ;   XREF to: 00407527 (CONDITIONAL_JUMP)  ; LAB_00407527
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0040751b | DAT_01c4f02c
    JMP 0x004074ac                      ; 00407525
        ;   XREF to: 004074ac (UNCONDITIONAL_JUMP)  ; LAB_004074ac
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00407527 | DAT_01c4f02c
        ;   Label: LAB_00407527
    JMP 0x004074ac                      ; 00407531
        ;   XREF to: 004074ac (UNCONDITIONAL_JUMP)  ; LAB_004074ac
    TEST byte ptr [ESP + 0x18],0xc0     ; 00407536
        ;   Label: LAB_00407536
    JZ 0x00407549                       ; 0040753b
        ;   XREF to: 00407549 (CONDITIONAL_JUMP)  ; LAB_00407549
    MOV dword ptr [0x01c51d18],0x1      ; 0040753d | DAT_01c51d18
    JMP 0x004074e7                      ; 00407547
        ;   XREF to: 004074e7 (UNCONDITIONAL_JUMP)  ; LAB_004074e7
    MOV dword ptr [0x01c51d18],EBP      ; 00407549 | DAT_01c51d18
        ;   Label: LAB_00407549
    JMP 0x004074e7                      ; 0040754f
        ;   XREF to: 004074e7 (UNCONDITIONAL_JUMP)  ; LAB_004074e7
    PUSH EAX                            ; 00407551
        ;   Label: LAB_00407551
    MOV EDI,dword ptr [EBX + 0x4]       ; 00407552
    PUSH EDI                            ; 00407555
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 00407556
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 0040755b
    POP EBP                             ; 0040755e
    POP EDI                             ; 0040755f
    POP ESI                             ; 00407560
    POP EBX                             ; 00407561
    RET                                 ; 00407562

