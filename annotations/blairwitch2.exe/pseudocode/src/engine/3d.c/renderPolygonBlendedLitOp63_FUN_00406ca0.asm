; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonBlendedLitOp63_FUN_00406ca0(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406ca0
        ;   Label: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0
    PUSH ESI                            ; 00406ca1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00406ca2
    LEA ESI,[EBX + 0x18]                ; 00406ca6
    LEA EAX,[EBX + 0x8]                 ; 00406ca9
    PUSH EAX                            ; 00406cac
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00406cad
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406cb2
    TEST EAX,EAX                        ; 00406cb5
    JZ 0x00406d19                       ; 00406cb7
        ;   XREF to: 00406d19 (CONDITIONAL_JUMP)  ; LAB_00406d19
    CMP dword ptr [0x01c38b40],0x0      ; 00406cb9 | DAT_01c38b40
    JNZ 0x00406d33                      ; 00406cc0
        ;   XREF to: 00406d33 (CONDITIONAL_JUMP)  ; LAB_00406d33
    CMP dword ptr [0x006141c0],0x20     ; 00406cc2 | DAT_006141c0
    JNZ 0x00406d27                      ; 00406cc9
        ;   XREF to: 00406d27 (CONDITIONAL_JUMP)  ; LAB_00406d27
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406ccb | DAT_01c35e6c
    CMP dword ptr [0x01c35e68],0x0      ; 00406cd5 | DAT_01c35e68
        ;   Label: LAB_00406cd5
    JZ 0x00406d54                       ; 00406cdc
        ;   XREF to: 00406d54 (CONDITIONAL_JUMP)  ; LAB_00406d54
    MOV dword ptr [0x01c38b54],0x67     ; 00406ce2 | DAT_01c38b54
    MOV EDX,0x1                         ; 00406cec
        ;   Label: LAB_00406cec
    PUSH EBX                            ; 00406cf1
    MOV dword ptr [0x01c38b58],EDX      ; 00406cf2 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 00406cf8
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    MOV ECX,dword ptr [0x01c35e68]      ; 00406cfd | DAT_01c35e68
    ADD ESP,0x4                         ; 00406d03
    TEST ECX,ECX                        ; 00406d06
    JZ 0x00406d60                       ; 00406d08
        ;   XREF to: 00406d60 (CONDITIONAL_JUMP)  ; LAB_00406d60
    PUSH EDI                            ; 00406d0a
    PUSH ESI                            ; 00406d0b
    MOV EDI,dword ptr [EBX + 0x4]       ; 00406d0c
    PUSH EDI                            ; 00406d0f
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00406d10
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406d15
    POP EDI                             ; 00406d18
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d19
        ;   Label: LAB_00406d19
    LEA EAX,[EBX + 0x18]                ; 00406d1c
    SHL ESI,0x2                         ; 00406d1f
    ADD EAX,ESI                         ; 00406d22
    POP ESI                             ; 00406d24
    POP EBX                             ; 00406d25
    RET                                 ; 00406d26
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406d27 | DAT_01c35e6c
        ;   Label: LAB_00406d27
    JMP 0x00406cd5                      ; 00406d31
        ;   XREF to: 00406cd5 (UNCONDITIONAL_JUMP)  ; LAB_00406cd5
    CMP dword ptr [0x006141c0],0x20     ; 00406d33 | DAT_006141c0
        ;   Label: LAB_00406d33
    JNZ 0x00406d48                      ; 00406d3a
        ;   XREF to: 00406d48 (CONDITIONAL_JUMP)  ; LAB_00406d48
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406d3c | DAT_01c35e6c
    JMP 0x00406cd5                      ; 00406d46
        ;   XREF to: 00406cd5 (UNCONDITIONAL_JUMP)  ; LAB_00406cd5
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406d48 | DAT_01c35e6c
        ;   Label: LAB_00406d48
    JMP 0x00406cd5                      ; 00406d52
        ;   XREF to: 00406cd5 (UNCONDITIONAL_JUMP)  ; LAB_00406cd5
    MOV dword ptr [0x01c38b54],0x267    ; 00406d54 | DAT_01c38b54
        ;   Label: LAB_00406d54
    JMP 0x00406cec                      ; 00406d5e
        ;   XREF to: 00406cec (UNCONDITIONAL_JUMP)  ; LAB_00406cec
    PUSH ESI                            ; 00406d60
        ;   Label: LAB_00406d60
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d61
    PUSH ESI                            ; 00406d64
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 00406d65
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406d6a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406d6d
    LEA EAX,[EBX + 0x18]                ; 00406d70
    SHL ESI,0x2                         ; 00406d73
    ADD EAX,ESI                         ; 00406d76
    POP ESI                             ; 00406d78
    POP EBX                             ; 00406d79
    RET                                 ; 00406d7a

