; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403aa0(int param_1)
;
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

    PUSH EBX                            ; 00403aa0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403aa0
    PUSH ESI                            ; 00403aa1
    PUSH EBP                            ; 00403aa2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403aa3
    LEA ESI,[EBX + 0x18]                ; 00403aa7
    LEA EAX,[EBX + 0x8]                 ; 00403aaa
    PUSH EAX                            ; 00403aad
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00403aae
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00403ab3
    TEST EAX,EAX                        ; 00403ab6
    JZ 0x00403b2a                       ; 00403ab8
        ;   XREF to: 00403b2a (CONDITIONAL_JUMP)  ; LAB_00403b2a
    CMP dword ptr [0x01c51d00],0x0      ; 00403aba | DAT_01c51d00
    JNZ 0x00403b45                      ; 00403ac1
        ;   XREF to: 00403b45 (CONDITIONAL_JUMP)  ; LAB_00403b45
    CMP dword ptr [0x0061b4a0],0x20     ; 00403ac7 | DAT_0061b4a0
    JNZ 0x00403b39                      ; 00403ace
        ;   XREF to: 00403b39 (CONDITIONAL_JUMP)  ; LAB_00403b39
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00403ad0 | DAT_01c4f02c
    PUSH EDI                            ; 00403ada
        ;   Label: LAB_00403ada
    MOV EAX,dword ptr [EBX + 0x10]      ; 00403adb
    PUSH EAX                            ; 00403ade
    MOV EDX,dword ptr [EBX + 0xc]       ; 00403adf
    MOV EDI,0x10                        ; 00403ae2
    PUSH EDX                            ; 00403ae7
    MOV ECX,dword ptr [EBX + 0x8]       ; 00403ae8
    XOR EBP,EBP                         ; 00403aeb
    PUSH ECX                            ; 00403aed
    MOV dword ptr [0x01c51d14],EDI      ; 00403aee | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00403af4 | DAT_01c51d18
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 00403afa
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403aff
    PUSH EAX                            ; 00403b02
    MOV EDI,dword ptr [0x00713a5c]      ; 00403b03 | DAT_00713a5c
    PUSH EDI                            ; 00403b09
    MOV [0x01c4f024],EAX                ; 00403b0a | DAT_01c4f024
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 00403b0f
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00403b14
    PUSH ESI                            ; 00403b17
    MOV EBP,dword ptr [EBX + 0x4]       ; 00403b18
    PUSH EBP                            ; 00403b1b
    MOV [0x01c4f020],EAX                ; 00403b1c | DAT_01c4f020
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00403b21
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403b26
    POP EDI                             ; 00403b29
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403b2a
        ;   Label: LAB_00403b2a
    LEA EAX,[EBX + 0x18]                ; 00403b2d
    SHL ESI,0x2                         ; 00403b30
    ADD EAX,ESI                         ; 00403b33
    POP EBP                             ; 00403b35
    POP ESI                             ; 00403b36
    POP EBX                             ; 00403b37
    RET                                 ; 00403b38
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00403b39 | DAT_01c4f02c
        ;   Label: LAB_00403b39
    JMP 0x00403ada                      ; 00403b43
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada
    CMP dword ptr [0x0061b4a0],0x20     ; 00403b45 | DAT_0061b4a0
        ;   Label: LAB_00403b45
    JNZ 0x00403b5a                      ; 00403b4c
        ;   XREF to: 00403b5a (CONDITIONAL_JUMP)  ; LAB_00403b5a
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00403b4e | DAT_01c4f02c
    JMP 0x00403ada                      ; 00403b58
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00403b5a | DAT_01c4f02c
        ;   Label: LAB_00403b5a
    JMP 0x00403ada                      ; 00403b64
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada

