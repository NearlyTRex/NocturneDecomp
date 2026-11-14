; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403aa0(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_007303dc
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5c4
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_light.cpp_calculateLighting_FUN_004e0e00
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
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00403ab3
    TEST EAX,EAX                        ; 00403ab6
    JZ 0x00403b2a                       ; 00403ab8
        ;   XREF to: 00403b2a (CONDITIONAL_JUMP)  ; LAB_00403b2a
    CMP dword ptr [0x01c6e2a0],0x0      ; 00403aba | DAT_01c6e2a0
    JNZ 0x00403b45                      ; 00403ac1
        ;   XREF to: 00403b45 (CONDITIONAL_JUMP)  ; LAB_00403b45
    CMP dword ptr [0x005fba20],0x20     ; 00403ac7 | DAT_005fba20
    JNZ 0x00403b39                      ; 00403ace
        ;   XREF to: 00403b39 (CONDITIONAL_JUMP)  ; LAB_00403b39
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00403ad0 | DAT_01c6b5cc
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
    MOV dword ptr [0x01c6e2b4],EDI      ; 00403aee | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00403af4 | DAT_01c6e2b8
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 00403afa
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403aff
    PUSH EAX                            ; 00403b02
    MOV EDI,dword ptr [0x007303dc]      ; 00403b03 | DAT_007303dc
    PUSH EDI                            ; 00403b09
    MOV [0x01c6b5c4],EAX                ; 00403b0a | DAT_01c6b5c4
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 00403b0f
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00403b14
    PUSH ESI                            ; 00403b17
    MOV EBP,dword ptr [EBX + 0x4]       ; 00403b18
    PUSH EBP                            ; 00403b1b
    MOV [0x01c6b5c0],EAX                ; 00403b1c | DAT_01c6b5c0
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00403b21
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
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
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00403b39 | DAT_01c6b5cc
        ;   Label: LAB_00403b39
    JMP 0x00403ada                      ; 00403b43
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada
    CMP dword ptr [0x005fba20],0x20     ; 00403b45 | DAT_005fba20
        ;   Label: LAB_00403b45
    JNZ 0x00403b5a                      ; 00403b4c
        ;   XREF to: 00403b5a (CONDITIONAL_JUMP)  ; LAB_00403b5a
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00403b4e | DAT_01c6b5cc
    JMP 0x00403ada                      ; 00403b58
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00403b5a | DAT_01c6b5cc
        ;   Label: LAB_00403b5a
    JMP 0x00403ada                      ; 00403b64
        ;   XREF to: 00403ada (UNCONDITIONAL_JUMP)  ; LAB_00403ada

