; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c78
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004083d0
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004083d1
    CMP dword ptr [0x01c02594],0x0      ; 004083d5 | DAT_01c02594
    JZ 0x004084f2                       ; 004083dc
        ;   XREF to: 004084f2 (CONDITIONAL_JUMP)  ; LAB_004084f2
    PUSH ESI                            ; 004083e2
    LEA ESI,[EBX + 0x18]                ; 004083e3
    LEA EAX,[EBX + 0x8]                 ; 004083e6
    PUSH EAX                            ; 004083e9
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004083ea
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 004083ef
    TEST EAX,EAX                        ; 004083f2
    JZ 0x00408441                       ; 004083f4
        ;   XREF to: 00408441 (CONDITIONAL_JUMP)  ; LAB_00408441
    CMP dword ptr [0x01c00c78],0x0      ; 004083f6 | DAT_01c00c78
    JZ 0x0040847c                       ; 004083fd
        ;   XREF to: 0040847c (CONDITIONAL_JUMP)  ; LAB_0040847c
    CMP dword ptr [0x01c03948],0x0      ; 00408403 | DAT_01c03948
    JNZ 0x0040845b                      ; 0040840a
        ;   XREF to: 0040845b (CONDITIONAL_JUMP)  ; LAB_0040845b
    CMP dword ptr [0x005b7624],0x20     ; 0040840c | DAT_005b7624
    JNZ 0x0040844f                      ; 00408413
        ;   XREF to: 0040844f (CONDITIONAL_JUMP)  ; LAB_0040844f
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408415 | DAT_01c00c7c
    MOV EAX,0x8d                        ; 0040841f
        ;   Label: LAB_0040841f
    PUSH ESI                            ; 00408424
    MOV ECX,dword ptr [EBX + 0x4]       ; 00408425
    MOV EDX,0x4                         ; 00408428
    PUSH ECX                            ; 0040842d
    MOV [0x01c039a0],EAX                ; 0040842e | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00408433 | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00408439
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040843e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00408441
        ;   Label: LAB_00408441
    LEA EAX,[EBX + 0x18]                ; 00408444
    SHL ESI,0x2                         ; 00408447
    ADD EAX,ESI                         ; 0040844a
    POP ESI                             ; 0040844c
    POP EBX                             ; 0040844d
    RET                                 ; 0040844e
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040844f | DAT_01c00c7c
        ;   Label: LAB_0040844f
    JMP 0x0040841f                      ; 00408459
        ;   XREF to: 0040841f (UNCONDITIONAL_JUMP)  ; LAB_0040841f
    CMP dword ptr [0x005b7624],0x20     ; 0040845b | DAT_005b7624
        ;   Label: LAB_0040845b
    JNZ 0x00408470                      ; 00408462
        ;   XREF to: 00408470 (CONDITIONAL_JUMP)  ; LAB_00408470
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00408464 | DAT_01c00c7c
    JMP 0x0040841f                      ; 0040846e
        ;   XREF to: 0040841f (UNCONDITIONAL_JUMP)  ; LAB_0040841f
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408470 | DAT_01c00c7c
        ;   Label: LAB_00408470
    JMP 0x0040841f                      ; 0040847a
        ;   XREF to: 0040841f (UNCONDITIONAL_JUMP)  ; LAB_0040841f
    CMP dword ptr [0x01c03948],0x0      ; 0040847c | DAT_01c03948
        ;   Label: LAB_0040847c
    JNZ 0x004084d1                      ; 00408483
        ;   XREF to: 004084d1 (CONDITIONAL_JUMP)  ; LAB_004084d1
    CMP dword ptr [0x005b7624],0x20     ; 00408485 | DAT_005b7624
    JNZ 0x004084c5                      ; 0040848c
        ;   XREF to: 004084c5 (CONDITIONAL_JUMP)  ; LAB_004084c5
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040848e | DAT_01c00c7c
    MOV EAX,0x28d                       ; 00408498
        ;   Label: LAB_00408498
    PUSH ESI                            ; 0040849d
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040849e
    XOR EDX,EDX                         ; 004084a1
    PUSH ECX                            ; 004084a3
    MOV [0x01c039a0],EAX                ; 004084a4 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 004084a9 | DAT_01c039a4
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 004084af
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_clipPolygonToViewport_FUN_004349a0()
    ADD ESP,0x8                         ; 004084b4
    MOV ESI,dword ptr [EBX + 0x4]       ; 004084b7
    LEA EAX,[EBX + 0x18]                ; 004084ba
    SHL ESI,0x2                         ; 004084bd
    ADD EAX,ESI                         ; 004084c0
    POP ESI                             ; 004084c2
    POP EBX                             ; 004084c3
    RET                                 ; 004084c4
    MOV dword ptr [0x01c00c7c],0x530322 ; 004084c5 | DAT_01c00c7c
        ;   Label: LAB_004084c5
    JMP 0x00408498                      ; 004084cf
        ;   XREF to: 00408498 (UNCONDITIONAL_JUMP)  ; LAB_00408498
    CMP dword ptr [0x005b7624],0x20     ; 004084d1 | DAT_005b7624
        ;   Label: LAB_004084d1
    JNZ 0x004084e6                      ; 004084d8
        ;   XREF to: 004084e6 (CONDITIONAL_JUMP)  ; LAB_004084e6
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004084da | DAT_01c00c7c
    JMP 0x00408498                      ; 004084e4
        ;   XREF to: 00408498 (UNCONDITIONAL_JUMP)  ; LAB_00408498
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004084e6 | DAT_01c00c7c
        ;   Label: LAB_004084e6
    JMP 0x00408498                      ; 004084f0
        ;   XREF to: 00408498 (UNCONDITIONAL_JUMP)  ; LAB_00408498
    PUSH EBX                            ; 004084f2
        ;   Label: LAB_004084f2
    CALL engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30 ; 004084f3
        ;   XREF to: 00406f30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30()
    ADD ESP,0x4                         ; 004084f8
    PUSH EBX                            ; 004084fb
    CALL engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60 ; 004084fc
        ;   XREF to: 00406c60 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_00406c60()
    ADD ESP,0x4                         ; 00408501
    POP EBX                             ; 00408504
    RET                                 ; 00408505

