; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonDestReadBlendOp33_FUN_004052d0(int param_1)
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

    PUSH EBX                            ; 004052d0
        ;   Label: engine_3d.c_renderPolygonDestReadBlendOp33_FUN_004052d0
    PUSH ESI                            ; 004052d1
    PUSH EBP                            ; 004052d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004052d3
    LEA ESI,[EBX + 0x18]                ; 004052d7
    LEA EAX,[EBX + 0x8]                 ; 004052da
    PUSH EAX                            ; 004052dd
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004052de
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004052e3
    TEST EAX,EAX                        ; 004052e6
    JZ 0x00405328                       ; 004052e8
        ;   XREF to: 00405328 (CONDITIONAL_JUMP)  ; LAB_00405328
    CMP dword ptr [0x01c38b40],0x0      ; 004052ea | DAT_01c38b40
    JNZ 0x00405343                      ; 004052f1
        ;   XREF to: 00405343 (CONDITIONAL_JUMP)  ; LAB_00405343
    CMP dword ptr [0x006141c0],0x20     ; 004052f3 | DAT_006141c0
    JNZ 0x00405337                      ; 004052fa
        ;   XREF to: 00405337 (CONDITIONAL_JUMP)  ; LAB_00405337
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004052fc | DAT_01c35e6c
    PUSH EDI                            ; 00405306
        ;   Label: LAB_00405306
    MOV EDI,0x23                        ; 00405307
    PUSH ESI                            ; 0040530c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040530d
    XOR EBP,EBP                         ; 00405310
    PUSH EAX                            ; 00405312
    MOV dword ptr [0x01c38b54],EDI      ; 00405313 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00405319 | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 0040531f
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405324
    POP EDI                             ; 00405327
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405328
        ;   Label: LAB_00405328
    ADD EBX,0x18                        ; 0040532b
    SHL EAX,0x2                         ; 0040532e
    ADD EAX,EBX                         ; 00405331
    POP EBP                             ; 00405333
    POP ESI                             ; 00405334
    POP EBX                             ; 00405335
    RET                                 ; 00405336
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405337 | DAT_01c35e6c
        ;   Label: LAB_00405337
    JMP 0x00405306                      ; 00405341
        ;   XREF to: 00405306 (UNCONDITIONAL_JUMP)  ; LAB_00405306
    CMP dword ptr [0x006141c0],0x20     ; 00405343 | DAT_006141c0
        ;   Label: LAB_00405343
    JNZ 0x00405358                      ; 0040534a
        ;   XREF to: 00405358 (CONDITIONAL_JUMP)  ; LAB_00405358
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040534c | DAT_01c35e6c
    JMP 0x00405306                      ; 00405356
        ;   XREF to: 00405306 (UNCONDITIONAL_JUMP)  ; LAB_00405306
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405358 | DAT_01c35e6c
        ;   Label: LAB_00405358
    JMP 0x00405306                      ; 00405362
        ;   XREF to: 00405306 (UNCONDITIONAL_JUMP)  ; LAB_00405306

