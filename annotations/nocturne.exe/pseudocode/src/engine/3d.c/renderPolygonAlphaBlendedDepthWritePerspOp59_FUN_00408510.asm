; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510(int param_1)
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
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408510
        ;   Label: engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408511
    CMP dword ptr [0x01c02594],0x0      ; 00408515 | DAT_01c02594
    JZ 0x00408635                       ; 0040851c
        ;   XREF to: 00408635 (CONDITIONAL_JUMP)  ; LAB_00408635
    PUSH ESI                            ; 00408522
    LEA ESI,[EBX + 0x18]                ; 00408523
    LEA EAX,[EBX + 0x8]                 ; 00408526
    PUSH EAX                            ; 00408529
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040852a
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0040852f
    TEST EAX,EAX                        ; 00408532
    JZ 0x00408581                       ; 00408534
        ;   XREF to: 00408581 (CONDITIONAL_JUMP)  ; LAB_00408581
    CMP dword ptr [0x01c00c78],0x0      ; 00408536 | DAT_01c00c78
    JZ 0x004085bc                       ; 0040853d
        ;   XREF to: 004085bc (CONDITIONAL_JUMP)  ; LAB_004085bc
    CMP dword ptr [0x01c03948],0x0      ; 00408543 | DAT_01c03948
    JNZ 0x0040859b                      ; 0040854a
        ;   XREF to: 0040859b (CONDITIONAL_JUMP)  ; LAB_0040859b
    CMP dword ptr [0x005b7624],0x20     ; 0040854c | DAT_005b7624
    JNZ 0x0040858f                      ; 00408553
        ;   XREF to: 0040858f (CONDITIONAL_JUMP)  ; LAB_0040858f
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408555 | DAT_01c00c7c | LAB_005300ec
    MOV EAX,0x8d                        ; 0040855f
        ;   Label: LAB_0040855f
    PUSH ESI                            ; 00408564
    MOV ECX,dword ptr [EBX + 0x4]       ; 00408565
    MOV EDX,0x5                         ; 00408568
    PUSH ECX                            ; 0040856d
    MOV [0x01c039a0],EAX                ; 0040856e | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00408573 | DAT_01c039a4
    CALL engine_clipper.c_FUN_00432cd0  ; 00408579
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040857e
    MOV ESI,dword ptr [EBX + 0x4]       ; 00408581
        ;   Label: LAB_00408581
    LEA EAX,[EBX + 0x18]                ; 00408584
    SHL ESI,0x2                         ; 00408587
    ADD EAX,ESI                         ; 0040858a
    POP ESI                             ; 0040858c
    POP EBX                             ; 0040858d
    RET                                 ; 0040858e
    MOV dword ptr [0x01c00c7c],0x530322 ; 0040858f | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_0040858f
    JMP 0x0040855f                      ; 00408599
        ;   XREF to: 0040855f (UNCONDITIONAL_JUMP)  ; LAB_0040855f
    CMP dword ptr [0x005b7624],0x20     ; 0040859b | DAT_005b7624
        ;   Label: LAB_0040859b
    JNZ 0x004085b0                      ; 004085a2
        ;   XREF to: 004085b0 (CONDITIONAL_JUMP)  ; LAB_004085b0
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004085a4 | DAT_01c00c7c | LAB_0052f031
    JMP 0x0040855f                      ; 004085ae
        ;   XREF to: 0040855f (UNCONDITIONAL_JUMP)  ; LAB_0040855f
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004085b0 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_004085b0
    JMP 0x0040855f                      ; 004085ba
        ;   XREF to: 0040855f (UNCONDITIONAL_JUMP)  ; LAB_0040855f
    CMP dword ptr [0x01c03948],0x0      ; 004085bc | DAT_01c03948
        ;   Label: LAB_004085bc
    JNZ 0x00408614                      ; 004085c3
        ;   XREF to: 00408614 (CONDITIONAL_JUMP)  ; LAB_00408614
    CMP dword ptr [0x005b7624],0x20     ; 004085c5 | DAT_005b7624
    JNZ 0x00408608                      ; 004085cc
        ;   XREF to: 00408608 (CONDITIONAL_JUMP)  ; LAB_00408608
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004085ce | DAT_01c00c7c | LAB_005300ec
    MOV EAX,0x28d                       ; 004085d8
        ;   Label: LAB_004085d8
    PUSH ESI                            ; 004085dd
    MOV ECX,dword ptr [EBX + 0x4]       ; 004085de
    MOV EDX,0x5                         ; 004085e1
    PUSH ECX                            ; 004085e6
    MOV [0x01c039a0],EAX                ; 004085e7 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 004085ec | DAT_01c039a4
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 004085f2
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_clipPolygonToViewport_FUN_004349a0()
    ADD ESP,0x8                         ; 004085f7
    MOV ESI,dword ptr [EBX + 0x4]       ; 004085fa
    LEA EAX,[EBX + 0x18]                ; 004085fd
    SHL ESI,0x2                         ; 00408600
    ADD EAX,ESI                         ; 00408603
    POP ESI                             ; 00408605
    POP EBX                             ; 00408606
    RET                                 ; 00408607
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408608 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00408608
    JMP 0x004085d8                      ; 00408612
        ;   XREF to: 004085d8 (UNCONDITIONAL_JUMP)  ; LAB_004085d8
    CMP dword ptr [0x005b7624],0x20     ; 00408614 | DAT_005b7624
        ;   Label: LAB_00408614
    JNZ 0x00408629                      ; 0040861b
        ;   XREF to: 00408629 (CONDITIONAL_JUMP)  ; LAB_00408629
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040861d | DAT_01c00c7c | LAB_0052f031
    JMP 0x004085d8                      ; 00408627
        ;   XREF to: 004085d8 (UNCONDITIONAL_JUMP)  ; LAB_004085d8
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408629 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00408629
    JMP 0x004085d8                      ; 00408633
        ;   XREF to: 004085d8 (UNCONDITIONAL_JUMP)  ; LAB_004085d8
    PUSH EBX                            ; 00408635
        ;   Label: LAB_00408635
    CALL engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30 ; 00408636
        ;   XREF to: 00406f30 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonDepthWritePass_FUN_00406f30()
    ADD ESP,0x4                         ; 0040863b
    PUSH EBX                            ; 0040863e
    CALL engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80 ; 0040863f
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00406d80()
    ADD ESP,0x4                         ; 00408644
    POP EBX                             ; 00408647
    RET                                 ; 00408648

