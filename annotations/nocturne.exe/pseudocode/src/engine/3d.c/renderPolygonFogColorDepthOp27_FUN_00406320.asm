; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00406320(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406320
        ;   Label: engine_3d.c_renderPolygonFogColorDepthOp27_FUN_00406320
    PUSH ESI                            ; 00406321
    PUSH EBP                            ; 00406322
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406323
    LEA ESI,[EBX + 0x18]                ; 00406327
    LEA EAX,[EBX + 0x8]                 ; 0040632a
    PUSH EAX                            ; 0040632d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040632e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00406333
    TEST EAX,EAX                        ; 00406336
    JZ 0x0040637b                       ; 00406338
        ;   XREF to: 0040637b (CONDITIONAL_JUMP)  ; LAB_0040637b
    CMP dword ptr [0x01c03948],0x0      ; 0040633a | DAT_01c03948
    JNZ 0x00406396                      ; 00406341
        ;   XREF to: 00406396 (CONDITIONAL_JUMP)  ; LAB_00406396
    CMP dword ptr [0x005b7624],0x20     ; 00406343 | DAT_005b7624
    JNZ 0x0040638a                      ; 0040634a
        ;   XREF to: 0040638a (CONDITIONAL_JUMP)  ; LAB_0040638a
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040634c | DAT_01c00c7c
    PUSH EDI                            ; 00406356
        ;   Label: LAB_00406356
    MOV EDI,0xc4                        ; 00406357
    PUSH ESI                            ; 0040635c
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040635d
    MOV EBP,0x1                         ; 00406360
    PUSH EAX                            ; 00406365
    MOV dword ptr [0x01c039a0],EDI      ; 00406366 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 0040636c | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00406372
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00406377
    POP EDI                             ; 0040637a
    MOV EAX,dword ptr [EBX + 0x4]       ; 0040637b
        ;   Label: LAB_0040637b
    ADD EBX,0x18                        ; 0040637e
    SHL EAX,0x2                         ; 00406381
    ADD EAX,EBX                         ; 00406384
    POP EBP                             ; 00406386
    POP ESI                             ; 00406387
    POP EBX                             ; 00406388
    RET                                 ; 00406389
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040638a | DAT_01c00c7c
        ;   Label: LAB_0040638a
    JMP 0x00406356                      ; 00406394
        ;   XREF to: 00406356 (UNCONDITIONAL_JUMP)  ; LAB_00406356
    CMP dword ptr [0x005b7624],0x20     ; 00406396 | DAT_005b7624
        ;   Label: LAB_00406396
    JNZ 0x004063ab                      ; 0040639d
        ;   XREF to: 004063ab (CONDITIONAL_JUMP)  ; LAB_004063ab
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040639f | DAT_01c00c7c
    JMP 0x00406356                      ; 004063a9
        ;   XREF to: 00406356 (UNCONDITIONAL_JUMP)  ; LAB_00406356
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004063ab | DAT_01c00c7c
        ;   Label: LAB_004063ab
    JMP 0x00406356                      ; 004063b5
        ;   XREF to: 00406356 (UNCONDITIONAL_JUMP)  ; LAB_00406356

