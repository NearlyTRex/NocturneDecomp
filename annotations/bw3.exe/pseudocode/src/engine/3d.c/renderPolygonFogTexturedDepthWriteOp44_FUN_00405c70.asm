; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405c70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405c70
        ;   Label: engine_3d.c_renderPolygonFogTexturedDepthWriteOp44_FUN_00405c70
    PUSH ESI                            ; 00405c71
    PUSH EBP                            ; 00405c72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405c73
    LEA ESI,[EBX + 0x18]                ; 00405c77
    LEA EAX,[EBX + 0x8]                 ; 00405c7a
    PUSH EAX                            ; 00405c7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405c7e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405c83
    TEST EAX,EAX                        ; 00405c86
    JZ 0x00405ccb                       ; 00405c88
        ;   XREF to: 00405ccb (CONDITIONAL_JUMP)  ; LAB_00405ccb
    CMP dword ptr [0x01c6e2a0],0x0      ; 00405c8a | DAT_01c6e2a0
    JNZ 0x00405ce6                      ; 00405c91
        ;   XREF to: 00405ce6 (CONDITIONAL_JUMP)  ; LAB_00405ce6
    CMP dword ptr [0x005fba20],0x20     ; 00405c93 | DAT_005fba20
    JNZ 0x00405cda                      ; 00405c9a
        ;   XREF to: 00405cda (CONDITIONAL_JUMP)  ; LAB_00405cda
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00405c9c | DAT_01c6b5cc
    PUSH EDI                            ; 00405ca6
        ;   Label: LAB_00405ca6
    MOV EDI,0x85                        ; 00405ca7
    PUSH ESI                            ; 00405cac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405cad
    MOV EBP,0x1                         ; 00405cb0
    PUSH EAX                            ; 00405cb5
    MOV dword ptr [0x01c6e2b4],EDI      ; 00405cb6 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 00405cbc | DAT_01c6e2b8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00405cc2
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405cc7
    POP EDI                             ; 00405cca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405ccb
        ;   Label: LAB_00405ccb
    ADD EBX,0x18                        ; 00405cce
    SHL EAX,0x2                         ; 00405cd1
    ADD EAX,EBX                         ; 00405cd4
    POP EBP                             ; 00405cd6
    POP ESI                             ; 00405cd7
    POP EBX                             ; 00405cd8
    RET                                 ; 00405cd9
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00405cda | DAT_01c6b5cc
        ;   Label: LAB_00405cda
    JMP 0x00405ca6                      ; 00405ce4
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6
    CMP dword ptr [0x005fba20],0x20     ; 00405ce6 | DAT_005fba20
        ;   Label: LAB_00405ce6
    JNZ 0x00405cfb                      ; 00405ced
        ;   XREF to: 00405cfb (CONDITIONAL_JUMP)  ; LAB_00405cfb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00405cef | DAT_01c6b5cc
    JMP 0x00405ca6                      ; 00405cf9
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00405cfb | DAT_01c6b5cc
        ;   Label: LAB_00405cfb
    JMP 0x00405ca6                      ; 00405d05
        ;   XREF to: 00405ca6 (UNCONDITIONAL_JUMP)  ; LAB_00405ca6

