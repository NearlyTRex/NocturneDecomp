; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonTexturedOp45_FUN_00405d10(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405d10
        ;   Label: engine_3d.c_renderPolygonTexturedOp45_FUN_00405d10
    PUSH ESI                            ; 00405d11
    PUSH EBP                            ; 00405d12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405d13
    LEA ESI,[EBX + 0x18]                ; 00405d17
    LEA EAX,[EBX + 0x8]                 ; 00405d1a
    PUSH EAX                            ; 00405d1d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00405d1e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00405d23
    TEST EAX,EAX                        ; 00405d26
    JZ 0x00405d68                       ; 00405d28
        ;   XREF to: 00405d68 (CONDITIONAL_JUMP)  ; LAB_00405d68
    CMP dword ptr [0x01c51d00],0x0      ; 00405d2a | DAT_01c51d00
    JNZ 0x00405d83                      ; 00405d31
        ;   XREF to: 00405d83 (CONDITIONAL_JUMP)  ; LAB_00405d83
    CMP dword ptr [0x0061b4a0],0x20     ; 00405d33 | DAT_0061b4a0
    JNZ 0x00405d77                      ; 00405d3a
        ;   XREF to: 00405d77 (CONDITIONAL_JUMP)  ; LAB_00405d77
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00405d3c | DAT_01c4f02c
    PUSH EDI                            ; 00405d46
        ;   Label: LAB_00405d46
    MOV EDI,0x1                         ; 00405d47
    PUSH ESI                            ; 00405d4c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d4d
    XOR EBP,EBP                         ; 00405d50
    PUSH EAX                            ; 00405d52
    MOV dword ptr [0x01c51d14],EDI      ; 00405d53 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00405d59 | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00405d5f
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405d64
    POP EDI                             ; 00405d67
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405d68
        ;   Label: LAB_00405d68
    ADD EBX,0x18                        ; 00405d6b
    SHL EAX,0x2                         ; 00405d6e
    ADD EAX,EBX                         ; 00405d71
    POP EBP                             ; 00405d73
    POP ESI                             ; 00405d74
    POP EBX                             ; 00405d75
    RET                                 ; 00405d76
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00405d77 | DAT_01c4f02c
        ;   Label: LAB_00405d77
    JMP 0x00405d46                      ; 00405d81
        ;   XREF to: 00405d46 (UNCONDITIONAL_JUMP)  ; LAB_00405d46
    CMP dword ptr [0x0061b4a0],0x20     ; 00405d83 | DAT_0061b4a0
        ;   Label: LAB_00405d83
    JNZ 0x00405d98                      ; 00405d8a
        ;   XREF to: 00405d98 (CONDITIONAL_JUMP)  ; LAB_00405d98
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00405d8c | DAT_01c4f02c
    JMP 0x00405d46                      ; 00405d96
        ;   XREF to: 00405d46 (UNCONDITIONAL_JUMP)  ; LAB_00405d46
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00405d98 | DAT_01c4f02c
        ;   Label: LAB_00405d98
    JMP 0x00405d46                      ; 00405da2
        ;   XREF to: 00405d46 (UNCONDITIONAL_JUMP)  ; LAB_00405d46

