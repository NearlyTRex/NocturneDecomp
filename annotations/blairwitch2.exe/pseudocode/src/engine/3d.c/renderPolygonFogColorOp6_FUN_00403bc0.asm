; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogColorOp6_FUN_00403bc0(int param_1)
;
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
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403bc0
        ;   Label: engine_3d.c_renderPolygonFogColorOp6_FUN_00403bc0
    PUSH ESI                            ; 00403bc1
    PUSH EBP                            ; 00403bc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00403bc3
    LEA ESI,[EBX + 0x18]                ; 00403bc7
    LEA EAX,[EBX + 0x8]                 ; 00403bca
    PUSH EAX                            ; 00403bcd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00403bce
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00403bd3
    TEST EAX,EAX                        ; 00403bd6
    JZ 0x00403c22                       ; 00403bd8
        ;   XREF to: 00403c22 (CONDITIONAL_JUMP)  ; LAB_00403c22
    CMP dword ptr [0x01c35e68],0x0      ; 00403bda | DAT_01c35e68
    JZ 0x00403c5e                       ; 00403be1
        ;   XREF to: 00403c5e (CONDITIONAL_JUMP)  ; LAB_00403c5e
    CMP dword ptr [0x01c38b40],0x0      ; 00403be7 | DAT_01c38b40
    JNZ 0x00403c3d                      ; 00403bee
        ;   XREF to: 00403c3d (CONDITIONAL_JUMP)  ; LAB_00403c3d
    CMP dword ptr [0x006141c0],0x20     ; 00403bf0 | DAT_006141c0
    JNZ 0x00403c31                      ; 00403bf7
        ;   XREF to: 00403c31 (CONDITIONAL_JUMP)  ; LAB_00403c31
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403bf9 | DAT_01c35e6c
    MOV EBP,0x4                         ; 00403c03
        ;   Label: LAB_00403c03
    PUSH ESI                            ; 00403c08
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403c09
    XOR EAX,EAX                         ; 00403c0c
    PUSH EDX                            ; 00403c0e
    MOV dword ptr [0x01c38b54],EBP      ; 00403c0f | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00403c15 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00403c1a
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403c1f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403c22
        ;   Label: LAB_00403c22
    LEA EAX,[EBX + 0x18]                ; 00403c25
    SHL ESI,0x2                         ; 00403c28
    ADD EAX,ESI                         ; 00403c2b
    POP EBP                             ; 00403c2d
    POP ESI                             ; 00403c2e
    POP EBX                             ; 00403c2f
    RET                                 ; 00403c30
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403c31 | DAT_01c35e6c
        ;   Label: LAB_00403c31
    JMP 0x00403c03                      ; 00403c3b
        ;   XREF to: 00403c03 (UNCONDITIONAL_JUMP)  ; LAB_00403c03
    CMP dword ptr [0x006141c0],0x20     ; 00403c3d | DAT_006141c0
        ;   Label: LAB_00403c3d
    JNZ 0x00403c52                      ; 00403c44
        ;   XREF to: 00403c52 (CONDITIONAL_JUMP)  ; LAB_00403c52
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403c46 | DAT_01c35e6c
    JMP 0x00403c03                      ; 00403c50
        ;   XREF to: 00403c03 (UNCONDITIONAL_JUMP)  ; LAB_00403c03
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403c52 | DAT_01c35e6c
        ;   Label: LAB_00403c52
    JMP 0x00403c03                      ; 00403c5c
        ;   XREF to: 00403c03 (UNCONDITIONAL_JUMP)  ; LAB_00403c03
    CMP dword ptr [0x01c38b40],0x0      ; 00403c5e | DAT_01c38b40
        ;   Label: LAB_00403c5e
    JNZ 0x00403cb4                      ; 00403c65
        ;   XREF to: 00403cb4 (CONDITIONAL_JUMP)  ; LAB_00403cb4
    CMP dword ptr [0x006141c0],0x20     ; 00403c67 | DAT_006141c0
    JNZ 0x00403ca8                      ; 00403c6e
        ;   XREF to: 00403ca8 (CONDITIONAL_JUMP)  ; LAB_00403ca8
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00403c70 | DAT_01c35e6c
    MOV EBP,0x204                       ; 00403c7a
        ;   Label: LAB_00403c7a
    PUSH ESI                            ; 00403c7f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00403c80
    XOR EAX,EAX                         ; 00403c83
    PUSH EDX                            ; 00403c85
    MOV dword ptr [0x01c38b54],EBP      ; 00403c86 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00403c8c | DAT_01c38b58
    CALL engine_clipper.c_clipPolygonToViewport_FUN_00433000 ; 00403c91
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_00433000(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00403c96
    MOV ESI,dword ptr [EBX + 0x4]       ; 00403c99
    LEA EAX,[EBX + 0x18]                ; 00403c9c
    SHL ESI,0x2                         ; 00403c9f
    ADD EAX,ESI                         ; 00403ca2
    POP EBP                             ; 00403ca4
    POP ESI                             ; 00403ca5
    POP EBX                             ; 00403ca6
    RET                                 ; 00403ca7
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00403ca8 | DAT_01c35e6c
        ;   Label: LAB_00403ca8
    JMP 0x00403c7a                      ; 00403cb2
        ;   XREF to: 00403c7a (UNCONDITIONAL_JUMP)  ; LAB_00403c7a
    CMP dword ptr [0x006141c0],0x20     ; 00403cb4 | DAT_006141c0
        ;   Label: LAB_00403cb4
    JNZ 0x00403cc9                      ; 00403cbb
        ;   XREF to: 00403cc9 (CONDITIONAL_JUMP)  ; LAB_00403cc9
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00403cbd | DAT_01c35e6c
    JMP 0x00403c7a                      ; 00403cc7
        ;   XREF to: 00403c7a (UNCONDITIONAL_JUMP)  ; LAB_00403c7a
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00403cc9 | DAT_01c35e6c
        ;   Label: LAB_00403cc9
    JMP 0x00403c7a                      ; 00403cd3
        ;   XREF to: 00403c7a (UNCONDITIONAL_JUMP)  ; LAB_00403c7a

