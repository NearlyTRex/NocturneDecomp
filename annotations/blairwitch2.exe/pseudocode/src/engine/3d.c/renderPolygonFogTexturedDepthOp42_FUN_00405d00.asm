; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogTexturedDepthOp42_FUN_00405d00(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405d00
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthOp42_FUN_00405d00
    PUSH ESI                            ; 00405d01
    PUSH EBP                            ; 00405d02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405d03
    LEA ESI,[EBX + 0x18]                ; 00405d07
    LEA EAX,[EBX + 0x8]                 ; 00405d0a
    PUSH EAX                            ; 00405d0d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00405d0e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00405d13
    TEST EAX,EAX                        ; 00405d16
    JZ 0x00405d5b                       ; 00405d18
        ;   XREF to: 00405d5b (CONDITIONAL_JUMP)  ; LAB_00405d5b
    CMP dword ptr [0x01c38b40],0x0      ; 00405d1a | DAT_01c38b40
    JNZ 0x00405d76                      ; 00405d21
        ;   XREF to: 00405d76 (CONDITIONAL_JUMP)  ; LAB_00405d76
    CMP dword ptr [0x006141c0],0x20     ; 00405d23 | DAT_006141c0
    JNZ 0x00405d6a                      ; 00405d2a
        ;   XREF to: 00405d6a (CONDITIONAL_JUMP)  ; LAB_00405d6a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405d2c | DAT_01c35e6c
    PUSH EDI                            ; 00405d36
        ;   Label: LAB_00405d36
    MOV EDI,0xc5                        ; 00405d37
    PUSH ESI                            ; 00405d3c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d3d
    MOV EBP,0x1                         ; 00405d40
    PUSH EAX                            ; 00405d45
    MOV dword ptr [0x01c38b54],EDI      ; 00405d46 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405d4c | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405d52
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405d57
    POP EDI                             ; 00405d5a
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d5b
        ;   Label: LAB_00405d5b
    ADD EBX,0x18                        ; 00405d5e
    SHL EAX,0x2                         ; 00405d61
    ADD EAX,EBX                         ; 00405d64
    POP EBP                             ; 00405d66
    POP ESI                             ; 00405d67
    POP EBX                             ; 00405d68
    RET                                 ; 00405d69
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405d6a | DAT_01c35e6c
        ;   Label: LAB_00405d6a
    JMP 0x00405d36                      ; 00405d74
        ;   XREF to: 00405d36 (UNCONDITIONAL_JUMP)  ; LAB_00405d36
    CMP dword ptr [0x006141c0],0x20     ; 00405d76 | DAT_006141c0
        ;   Label: LAB_00405d76
    JNZ 0x00405d8b                      ; 00405d7d
        ;   XREF to: 00405d8b (CONDITIONAL_JUMP)  ; LAB_00405d8b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405d7f | DAT_01c35e6c
    JMP 0x00405d36                      ; 00405d89
        ;   XREF to: 00405d36 (UNCONDITIONAL_JUMP)  ; LAB_00405d36
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405d8b | DAT_01c35e6c
        ;   Label: LAB_00405d8b
    JMP 0x00405d36                      ; 00405d95
        ;   XREF to: 00405d36 (UNCONDITIONAL_JUMP)  ; LAB_00405d36

