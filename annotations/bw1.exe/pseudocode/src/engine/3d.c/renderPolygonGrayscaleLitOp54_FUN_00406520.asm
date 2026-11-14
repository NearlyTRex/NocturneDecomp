; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp54_FUN_00406520(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a5c
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c4f024
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406520
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406520
    PUSH ESI                            ; 00406521
    PUSH EBP                            ; 00406522
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406523
    LEA ESI,[EBX + 0x18]                ; 00406527
    LEA EAX,[EBX + 0x8]                 ; 0040652a
    PUSH EAX                            ; 0040652d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040652e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406533
    TEST EAX,EAX                        ; 00406536
    JZ 0x004065aa                       ; 00406538
        ;   XREF to: 004065aa (CONDITIONAL_JUMP)  ; LAB_004065aa
    CMP dword ptr [0x01c51d00],0x0      ; 0040653a | DAT_01c51d00
    JNZ 0x004065c5                      ; 00406541
        ;   XREF to: 004065c5 (CONDITIONAL_JUMP)  ; LAB_004065c5
    CMP dword ptr [0x0061b4a0],0x20     ; 00406547 | DAT_0061b4a0
    JNZ 0x004065b9                      ; 0040654e
        ;   XREF to: 004065b9 (CONDITIONAL_JUMP)  ; LAB_004065b9
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406550 | DAT_01c4f02c
    PUSH EDI                            ; 0040655a
        ;   Label: LAB_0040655a
    MOV EAX,dword ptr [EBX + 0x10]      ; 0040655b
    PUSH EAX                            ; 0040655e
    MOV EDX,dword ptr [EBX + 0xc]       ; 0040655f
    MOV EDI,0x10                        ; 00406562
    PUSH EDX                            ; 00406567
    MOV ECX,dword ptr [EBX + 0x8]       ; 00406568
    XOR EBP,EBP                         ; 0040656b
    PUSH ECX                            ; 0040656d
    MOV dword ptr [0x01c51d14],EDI      ; 0040656e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00406574 | DAT_01c51d18
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 0040657a
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 0040657f
    PUSH EAX                            ; 00406582
    MOV EDI,dword ptr [0x00713a5c]      ; 00406583 | DAT_00713a5c
    PUSH EDI                            ; 00406589
    MOV [0x01c4f024],EAX                ; 0040658a | DAT_01c4f024
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 0040658f
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00406594
    PUSH ESI                            ; 00406597
    MOV EBP,dword ptr [EBX + 0x4]       ; 00406598
    PUSH EBP                            ; 0040659b
    MOV [0x01c4f020],EAX                ; 0040659c | DAT_01c4f020
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004065a1
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004065a6
    POP EDI                             ; 004065a9
    MOV ESI,dword ptr [EBX + 0x4]       ; 004065aa
        ;   Label: LAB_004065aa
    LEA EAX,[EBX + 0x18]                ; 004065ad
    SHL ESI,0x2                         ; 004065b0
    ADD EAX,ESI                         ; 004065b3
    POP EBP                             ; 004065b5
    POP ESI                             ; 004065b6
    POP EBX                             ; 004065b7
    RET                                 ; 004065b8
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004065b9 | DAT_01c4f02c
        ;   Label: LAB_004065b9
    JMP 0x0040655a                      ; 004065c3
        ;   XREF to: 0040655a (UNCONDITIONAL_JUMP)  ; LAB_0040655a
    CMP dword ptr [0x0061b4a0],0x20     ; 004065c5 | DAT_0061b4a0
        ;   Label: LAB_004065c5
    JNZ 0x004065da                      ; 004065cc
        ;   XREF to: 004065da (CONDITIONAL_JUMP)  ; LAB_004065da
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004065ce | DAT_01c4f02c
    JMP 0x0040655a                      ; 004065d8
        ;   XREF to: 0040655a (UNCONDITIONAL_JUMP)  ; LAB_0040655a
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004065da | DAT_01c4f02c
        ;   Label: LAB_004065da
    JMP 0x0040655a                      ; 004065e4
        ;   XREF to: 0040655a (UNCONDITIONAL_JUMP)  ; LAB_0040655a

