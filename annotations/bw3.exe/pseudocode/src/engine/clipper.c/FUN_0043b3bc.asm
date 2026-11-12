; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_0043b3bc(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007303fc
;   undefined4 DAT_007e448c
;   undefined4 DAT_007e4490
;   undefined4 DAT_007e4494
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01ed3198
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0
;   engine_special.cpp_drawPolygon2_FUN_00565c40
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0043b3bc
        ;   Label: engine_clipper.c_FUN_0043b3bc
    CMP dword ptr [0x007303fc],0x0      ; 0043b3c0 | DAT_007303fc
    JZ 0x0043b460                       ; 0043b3c7
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    CMP EBP,0x3                         ; 0043b3cd
    JLE 0x0043b433                      ; 0043b3d0
        ;   XREF to: 0043b433 (CONDITIONAL_JUMP)  ; LAB_0043b433
    LEA EAX,[EBP + -0x2]                ; 0043b3d2
    XOR EBX,EBX                         ; 0043b3d5
    MOV dword ptr [ESP],EAX             ; 0043b3d7
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043b3da
    XOR ESI,ESI                         ; 0043b3e1
    TEST EDI,EDI                        ; 0043b3e3
    JLE 0x0043b40f                      ; 0043b3e5
        ;   XREF to: 0043b40f (CONDITIONAL_JUMP)  ; LAB_0043b40f
    MOV EAX,dword ptr [EBX + 0x7e4494]  ; 0043b3e7
        ;   Label: LAB_0043b3e7
    PUSH EAX                            ; 0043b3ed
    MOV EDX,dword ptr [EBX + 0x7e4490]  ; 0043b3ee
    PUSH EDX                            ; 0043b3f4
    MOV ECX,dword ptr [0x007e448c]      ; 0043b3f5 | DAT_007e448c
    PUSH ECX                            ; 0043b3fb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043b3fc
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043b401
    TEST EAX,EAX                        ; 0043b404
    JZ 0x0043b430                       ; 0043b406
        ;   XREF to: 0043b430 (CONDITIONAL_JUMP)  ; LAB_0043b430
    ADD EBX,0x4                         ; 0043b408
        ;   Label: LAB_0043b408
    CMP EBX,EDI                         ; 0043b40b
    JL 0x0043b3e7                       ; 0043b40d
        ;   XREF to: 0043b3e7 (CONDITIONAL_JUMP)  ; LAB_0043b3e7
    CMP ESI,dword ptr [ESP]             ; 0043b40f
        ;   Label: LAB_0043b40f
    JNZ 0x0043b460                      ; 0043b412
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    MOV EAX,0x1                         ; 0043b414
    ADD ESP,0x1c                        ; 0043b419
    POP EBP                             ; 0043b41c
    POP EDI                             ; 0043b41d
    POP ESI                             ; 0043b41e
    POP EBX                             ; 0043b41f
    RET                                 ; 0043b420
    INC ESI                             ; 0043b430
        ;   Label: LAB_0043b430
    JMP 0x0043b408                      ; 0043b431
        ;   XREF to: 0043b408 (UNCONDITIONAL_JUMP)  ; LAB_0043b408
    MOV EAX,[0x007e4494]                ; 0043b433 | DAT_007e4494
        ;   Label: LAB_0043b433
    PUSH EAX                            ; 0043b438
    MOV EDX,dword ptr [0x007e4490]      ; 0043b439 | DAT_007e4490
    PUSH EDX                            ; 0043b43f
    MOV ECX,dword ptr [0x007e448c]      ; 0043b440 | DAT_007e448c
    PUSH ECX                            ; 0043b446
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0 ; 0043b447
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_00515ac0(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043b44c
    TEST EAX,EAX                        ; 0043b44f
    JNZ 0x0043b460                      ; 0043b451
        ;   XREF to: 0043b460 (CONDITIONAL_JUMP)  ; LAB_0043b460
    MOV EAX,0x1                         ; 0043b453
    ADD ESP,0x1c                        ; 0043b458
    POP EBP                             ; 0043b45b
    POP EDI                             ; 0043b45c
    POP ESI                             ; 0043b45d
    POP EBX                             ; 0043b45e
    RET                                 ; 0043b45f
    MOV ESI,dword ptr [0x01c6e2b4]      ; 0043b460 | DAT_01c6e2b4
        ;   Label: LAB_0043b460
    PUSH ESI                            ; 0043b466
    LEA EAX,[EBP + -0x2]                ; 0043b467
    MOV EBX,dword ptr [0x01ed3198]      ; 0043b46a | DAT_01ed3198
    PUSH EBP                            ; 0043b470
    ADD EBX,EAX                         ; 0043b471
    PUSH 0x7e448c                       ; 0043b473
    MOV dword ptr [0x01ed3198],EBX      ; 0043b478 | DAT_01ed3198
    CALL engine_special.cpp_drawPolygon2_FUN_00565c40 ; 0043b47e
        ;   XREF to: 00565c40 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00565c40(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 0043b483
    ADD ESP,0xc                         ; 0043b488
    ADD ESP,0x1c                        ; 0043b48b
    POP EBP                             ; 0043b48e
    POP EDI                             ; 0043b48f
    POP ESI                             ; 0043b490
    POP EBX                             ; 0043b491
    RET                                 ; 0043b492

