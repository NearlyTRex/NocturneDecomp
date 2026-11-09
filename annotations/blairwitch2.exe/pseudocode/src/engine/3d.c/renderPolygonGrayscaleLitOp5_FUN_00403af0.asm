; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonGrayscaleLitOp5_FUN_00403af0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_lookupLitColor_FUN_004039e0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403af0
        ;   Label: engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403af0
    PUSH ESI                            ; 00403af1
    PUSH EBP                            ; 00403af2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403af3
    LEA ESI,[EBX + 0x18]                ; 00403af7
    LEA EAX,[EBX + 0x8]                 ; 00403afa
    PUSH EAX                            ; 00403afd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00403afe
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00403b03
    TEST EAX,EAX                        ; 00403b06
    JZ 0x00403b7a                       ; 00403b08
        ;   XREF to: 00403b7a (CONDITIONAL_JUMP)  ; LAB_00403b7a
    CMP dword ptr [0x01c38b40],0x0      ; 00403b0a | DAT_01c38b40
    JNZ 0x00403b95                      ; 00403b11
        ;   XREF to: 00403b95 (CONDITIONAL_JUMP)  ; LAB_00403b95
    CMP dword ptr [0x006141c0],0x20     ; 00403b17 | DAT_006141c0
    JNZ 0x00403b89                      ; 00403b1e
        ;   XREF to: 00403b89 (CONDITIONAL_JUMP)  ; LAB_00403b89
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403b20 | DAT_01c35e6c
    PUSH EDI                            ; 00403b2a
        ;   Label: LAB_00403b2a
    MOV EAX,dword ptr [EBX + 0x10]      ; 00403b2b
    PUSH EAX                            ; 00403b2e
    MOV EDX,dword ptr [EBX + 0xc]       ; 00403b2f
    MOV EDI,0x10                        ; 00403b32
    PUSH EDX                            ; 00403b37
    MOV ECX,dword ptr [EBX + 0x8]       ; 00403b38
    XOR EBP,EBP                         ; 00403b3b
    PUSH ECX                            ; 00403b3d
    MOV dword ptr [0x01c38b54],EDI      ; 00403b3e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00403b44 | DAT_01c38b58
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 00403b4a
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403b4f
    PUSH EAX                            ; 00403b52
    MOV EDI,dword ptr [0x0070ca5c]      ; 00403b53 | DAT_0070ca5c
    PUSH EDI                            ; 00403b59
    MOV [0x01c35e64],EAX                ; 00403b5a | DAT_01c35e64
    CALL engine_3d.c_lookupLitColor_FUN_004039e0 ; 00403b5f
        ;   XREF to: 004039e0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_004039e0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00403b64
    PUSH ESI                            ; 00403b67
    MOV EBP,dword ptr [EBX + 0x4]       ; 00403b68
    PUSH EBP                            ; 00403b6b
    MOV [0x01c35e60],EAX                ; 00403b6c | DAT_01c35e60
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00403b71
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403b76
    POP EDI                             ; 00403b79
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403b7a
        ;   Label: LAB_00403b7a
    LEA EAX,[EBX + 0x18]                ; 00403b7d
    SHL ESI,0x2                         ; 00403b80
    ADD EAX,ESI                         ; 00403b83
    POP EBP                             ; 00403b85
    POP ESI                             ; 00403b86
    POP EBX                             ; 00403b87
    RET                                 ; 00403b88
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403b89 | DAT_01c35e6c
        ;   Label: LAB_00403b89
    JMP 0x00403b2a                      ; 00403b93
        ;   XREF to: 00403b2a (UNCONDITIONAL_JUMP)  ; LAB_00403b2a
    CMP dword ptr [0x006141c0],0x20     ; 00403b95 | DAT_006141c0
        ;   Label: LAB_00403b95
    JNZ 0x00403baa                      ; 00403b9c
        ;   XREF to: 00403baa (CONDITIONAL_JUMP)  ; LAB_00403baa
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403b9e | DAT_01c35e6c
    JMP 0x00403b2a                      ; 00403ba8
        ;   XREF to: 00403b2a (UNCONDITIONAL_JUMP)  ; LAB_00403b2a
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403baa | DAT_01c35e6c
        ;   Label: LAB_00403baa
    JMP 0x00403b2a                      ; 00403bb4
        ;   XREF to: 00403b2a (UNCONDITIONAL_JUMP)  ; LAB_00403b2a

