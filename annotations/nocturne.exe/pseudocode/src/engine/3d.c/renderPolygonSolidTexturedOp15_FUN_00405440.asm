; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonSolidTexturedOp15_FUN_00405440(int param_1)
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
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405440
        ;   Label: engine_3d.c_renderPolygonSolidTexturedOp15_FUN_00405440
    PUSH ESI                            ; 00405441
    PUSH EBP                            ; 00405442
    MOV EBX,dword ptr [ESP + 0x10]      ; 00405443
    LEA ESI,[EBX + 0x18]                ; 00405447
    LEA EAX,[EBX + 0x8]                 ; 0040544a
    PUSH EAX                            ; 0040544d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040544e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00405453
    TEST EAX,EAX                        ; 00405456
    JZ 0x004054a5                       ; 00405458
        ;   XREF to: 004054a5 (CONDITIONAL_JUMP)  ; LAB_004054a5
    CMP dword ptr [0x01c03948],0x0      ; 0040545a | DAT_01c03948
    JNZ 0x004054c0                      ; 00405461
        ;   XREF to: 004054c0 (CONDITIONAL_JUMP)  ; LAB_004054c0
    CMP dword ptr [0x005b7624],0x20     ; 00405463 | DAT_005b7624
    JNZ 0x004054b4                      ; 0040546a
        ;   XREF to: 004054b4 (CONDITIONAL_JUMP)  ; LAB_004054b4
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040546c | DAT_01c00c7c
    PUSH EDI                            ; 00405476
        ;   Label: LAB_00405476
    MOV EDI,0x3                         ; 00405477
    PUSH 0xffff                         ; 0040547c
    MOV dword ptr [0x01c039a0],EDI      ; 00405481 | DAT_01c039a0
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00405487
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0040548c
    PUSH ESI                            ; 0040548f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00405490
    XOR EBP,EBP                         ; 00405493
    PUSH EAX                            ; 00405495
    MOV dword ptr [0x01c039a4],EBP      ; 00405496 | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 0040549c
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 004054a1
    POP EDI                             ; 004054a4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004054a5
        ;   Label: LAB_004054a5
    ADD EBX,0x18                        ; 004054a8
    SHL EAX,0x2                         ; 004054ab
    ADD EAX,EBX                         ; 004054ae
    POP EBP                             ; 004054b0
    POP ESI                             ; 004054b1
    POP EBX                             ; 004054b2
    RET                                 ; 004054b3
    MOV dword ptr [0x01c00c7c],0x530322 ; 004054b4 | DAT_01c00c7c
        ;   Label: LAB_004054b4
    JMP 0x00405476                      ; 004054be
        ;   XREF to: 00405476 (UNCONDITIONAL_JUMP)  ; LAB_00405476
    CMP dword ptr [0x005b7624],0x20     ; 004054c0 | DAT_005b7624
        ;   Label: LAB_004054c0
    JNZ 0x004054d5                      ; 004054c7
        ;   XREF to: 004054d5 (CONDITIONAL_JUMP)  ; LAB_004054d5
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004054c9 | DAT_01c00c7c
    JMP 0x00405476                      ; 004054d3
        ;   XREF to: 00405476 (UNCONDITIONAL_JUMP)  ; LAB_00405476
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004054d5 | DAT_01c00c7c
        ;   Label: LAB_004054d5
    JMP 0x00405476                      ; 004054df
        ;   XREF to: 00405476 (UNCONDITIONAL_JUMP)  ; LAB_00405476

