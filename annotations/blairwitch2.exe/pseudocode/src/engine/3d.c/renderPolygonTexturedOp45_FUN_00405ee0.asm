; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonTexturedOp45_FUN_00405ee0(int param_1)
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

    PUSH EBX                            ; 00405ee0
        ;   Label: engine_3d.c_renderPolygonTexturedOp45_FUN_00405ee0
    PUSH ESI                            ; 00405ee1
    PUSH EBP                            ; 00405ee2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405ee3
    LEA ESI,[EBX + 0x18]                ; 00405ee7
    LEA EAX,[EBX + 0x8]                 ; 00405eea
    PUSH EAX                            ; 00405eed
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00405eee
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00405ef3
    TEST EAX,EAX                        ; 00405ef6
    JZ 0x00405f38                       ; 00405ef8
        ;   XREF to: 00405f38 (CONDITIONAL_JUMP)  ; LAB_00405f38
    CMP dword ptr [0x01c38b40],0x0      ; 00405efa | DAT_01c38b40
    JNZ 0x00405f53                      ; 00405f01
        ;   XREF to: 00405f53 (CONDITIONAL_JUMP)  ; LAB_00405f53
    CMP dword ptr [0x006141c0],0x20     ; 00405f03 | DAT_006141c0
    JNZ 0x00405f47                      ; 00405f0a
        ;   XREF to: 00405f47 (CONDITIONAL_JUMP)  ; LAB_00405f47
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405f0c | DAT_01c35e6c
    PUSH EDI                            ; 00405f16
        ;   Label: LAB_00405f16
    MOV EDI,0x1                         ; 00405f17
    PUSH ESI                            ; 00405f1c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f1d
    XOR EBP,EBP                         ; 00405f20
    PUSH EAX                            ; 00405f22
    MOV dword ptr [0x01c38b54],EDI      ; 00405f23 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405f29 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405f2f
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405f34
    POP EDI                             ; 00405f37
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405f38
        ;   Label: LAB_00405f38
    ADD EBX,0x18                        ; 00405f3b
    SHL EAX,0x2                         ; 00405f3e
    ADD EAX,EBX                         ; 00405f41
    POP EBP                             ; 00405f43
    POP ESI                             ; 00405f44
    POP EBX                             ; 00405f45
    RET                                 ; 00405f46
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405f47 | DAT_01c35e6c
        ;   Label: LAB_00405f47
    JMP 0x00405f16                      ; 00405f51
        ;   XREF to: 00405f16 (UNCONDITIONAL_JUMP)  ; LAB_00405f16
    CMP dword ptr [0x006141c0],0x20     ; 00405f53 | DAT_006141c0
        ;   Label: LAB_00405f53
    JNZ 0x00405f68                      ; 00405f5a
        ;   XREF to: 00405f68 (CONDITIONAL_JUMP)  ; LAB_00405f68
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405f5c | DAT_01c35e6c
    JMP 0x00405f16                      ; 00405f66
        ;   XREF to: 00405f16 (UNCONDITIONAL_JUMP)  ; LAB_00405f16
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405f68 | DAT_01c35e6c
        ;   Label: LAB_00405f68
    JMP 0x00405f16                      ; 00405f72
        ;   XREF to: 00405f16 (UNCONDITIONAL_JUMP)  ; LAB_00405f16

