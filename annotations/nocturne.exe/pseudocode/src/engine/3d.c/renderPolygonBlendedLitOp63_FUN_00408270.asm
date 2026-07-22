; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonBlendedLitOp63_FUN_00408270(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c78
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408270
        ;   Label: engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270
    PUSH ESI                            ; 00408271
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408272
    LEA ESI,[EBX + 0x18]                ; 00408276
    LEA EAX,[EBX + 0x8]                 ; 00408279
    PUSH EAX                            ; 0040827c
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040827d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00408282
    TEST EAX,EAX                        ; 00408285
    JZ 0x004082e9                       ; 00408287
        ;   XREF to: 004082e9 (CONDITIONAL_JUMP)  ; LAB_004082e9
    CMP dword ptr [0x01c03948],0x0      ; 00408289 | DAT_01c03948
    JNZ 0x00408303                      ; 00408290
        ;   XREF to: 00408303 (CONDITIONAL_JUMP)  ; LAB_00408303
    CMP dword ptr [0x005b7624],0x20     ; 00408292 | DAT_005b7624
    JNZ 0x004082f7                      ; 00408299
        ;   XREF to: 004082f7 (CONDITIONAL_JUMP)  ; LAB_004082f7
    MOV dword ptr [0x01c00c7c],0x5300ec ; 0040829b | DAT_01c00c7c | LAB_005300ec
    CMP dword ptr [0x01c00c78],0x0      ; 004082a5 | DAT_01c00c78
        ;   Label: LAB_004082a5
    JZ 0x00408324                       ; 004082ac
        ;   XREF to: 00408324 (CONDITIONAL_JUMP)  ; LAB_00408324
    MOV dword ptr [0x01c039a0],0x67     ; 004082b2 | DAT_01c039a0
    MOV EDX,0x1                         ; 004082bc
        ;   Label: LAB_004082bc
    PUSH EBX                            ; 004082c1
    MOV dword ptr [0x01c039a4],EDX      ; 004082c2 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 004082c8
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    MOV ECX,dword ptr [0x01c00c78]      ; 004082cd | DAT_01c00c78
    ADD ESP,0x4                         ; 004082d3
    TEST ECX,ECX                        ; 004082d6
    JZ 0x00408330                       ; 004082d8
        ;   XREF to: 00408330 (CONDITIONAL_JUMP)  ; LAB_00408330
    PUSH EDI                            ; 004082da
    PUSH ESI                            ; 004082db
    MOV EDI,dword ptr [EBX + 0x4]       ; 004082dc
    PUSH EDI                            ; 004082df
    CALL engine_clipper.c_FUN_00432cd0  ; 004082e0
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 004082e5
    POP EDI                             ; 004082e8
    MOV ESI,dword ptr [EBX + 0x4]       ; 004082e9
        ;   Label: LAB_004082e9
    LEA EAX,[EBX + 0x18]                ; 004082ec
    SHL ESI,0x2                         ; 004082ef
    ADD EAX,ESI                         ; 004082f2
    POP ESI                             ; 004082f4
    POP EBX                             ; 004082f5
    RET                                 ; 004082f6
    MOV dword ptr [0x01c00c7c],0x530322 ; 004082f7 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004082f7
    JMP 0x004082a5                      ; 00408301
        ;   XREF to: 004082a5 (UNCONDITIONAL_JUMP)  ; LAB_004082a5
    CMP dword ptr [0x005b7624],0x20     ; 00408303 | DAT_005b7624
        ;   Label: LAB_00408303
    JNZ 0x00408318                      ; 0040830a
        ;   XREF to: 00408318 (CONDITIONAL_JUMP)  ; LAB_00408318
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040830c | DAT_01c00c7c | LAB_0052f031
    JMP 0x004082a5                      ; 00408316
        ;   XREF to: 004082a5 (UNCONDITIONAL_JUMP)  ; LAB_004082a5
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408318 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00408318
    JMP 0x004082a5                      ; 00408322
        ;   XREF to: 004082a5 (UNCONDITIONAL_JUMP)  ; LAB_004082a5
    MOV dword ptr [0x01c039a0],0x267    ; 00408324 | DAT_01c039a0
        ;   Label: LAB_00408324
    JMP 0x004082bc                      ; 0040832e
        ;   XREF to: 004082bc (UNCONDITIONAL_JUMP)  ; LAB_004082bc
    PUSH ESI                            ; 00408330
        ;   Label: LAB_00408330
    MOV ESI,dword ptr [EBX + 0x4]       ; 00408331
    PUSH ESI                            ; 00408334
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 00408335
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_clipPolygonToViewport_FUN_004349a0()
    ADD ESP,0x8                         ; 0040833a
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040833d
    LEA EAX,[EBX + 0x18]                ; 00408340
    SHL ESI,0x2                         ; 00408343
    ADD EAX,ESI                         ; 00408346
    POP ESI                             ; 00408348
    POP EBX                             ; 00408349
    RET                                 ; 0040834a

