; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonTexturedLitOp7_FUN_004049d0(int param_1)
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
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004049d0
        ;   Label: engine_3d.c_renderPolygonTexturedLitOp7_FUN_004049d0
    PUSH ESI                            ; 004049d1
    PUSH EBP                            ; 004049d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004049d3
    LEA ESI,[EBX + 0x18]                ; 004049d7
    LEA EAX,[EBX + 0x8]                 ; 004049da
    PUSH EAX                            ; 004049dd
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 004049de
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 004049e3
    TEST EAX,EAX                        ; 004049e6
    JZ 0x00404a31                       ; 004049e8
        ;   XREF to: 00404a31 (CONDITIONAL_JUMP)  ; LAB_00404a31
    CMP dword ptr [0x01c03948],0x0      ; 004049ea | DAT_01c03948
    JNZ 0x00404a4c                      ; 004049f1
        ;   XREF to: 00404a4c (CONDITIONAL_JUMP)  ; LAB_00404a4c
    CMP dword ptr [0x005b7624],0x20     ; 004049f3 | DAT_005b7624
    JNZ 0x00404a40                      ; 004049fa
        ;   XREF to: 00404a40 (CONDITIONAL_JUMP)  ; LAB_00404a40
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004049fc | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 00404a06
        ;   Label: LAB_00404a06
    MOV EDI,0x1                         ; 00404a07
    PUSH EBX                            ; 00404a0c
    XOR EBP,EBP                         ; 00404a0d
    MOV dword ptr [0x01c039a0],EDI      ; 00404a0f | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00404a15 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00404a1b
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    ADD ESP,0x4                         ; 00404a20
    PUSH ESI                            ; 00404a23
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404a24
    PUSH EAX                            ; 00404a27
    CALL engine_clipper.c_FUN_00432cd0  ; 00404a28
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00404a2d
    POP EDI                             ; 00404a30
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404a31
        ;   Label: LAB_00404a31
    ADD EBX,0x18                        ; 00404a34
    SHL EAX,0x2                         ; 00404a37
    ADD EAX,EBX                         ; 00404a3a
    POP EBP                             ; 00404a3c
    POP ESI                             ; 00404a3d
    POP EBX                             ; 00404a3e
    RET                                 ; 00404a3f
    MOV dword ptr [0x01c00c7c],0x530322 ; 00404a40 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00404a40
    JMP 0x00404a06                      ; 00404a4a
        ;   XREF to: 00404a06 (UNCONDITIONAL_JUMP)  ; LAB_00404a06
    CMP dword ptr [0x005b7624],0x20     ; 00404a4c | DAT_005b7624
        ;   Label: LAB_00404a4c
    JNZ 0x00404a61                      ; 00404a53
        ;   XREF to: 00404a61 (CONDITIONAL_JUMP)  ; LAB_00404a61
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00404a55 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00404a06                      ; 00404a5f
        ;   XREF to: 00404a06 (UNCONDITIONAL_JUMP)  ; LAB_00404a06
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00404a61 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_00404a61
    JMP 0x00404a06                      ; 00404a6b
        ;   XREF to: 00404a06 (UNCONDITIONAL_JUMP)  ; LAB_00404a06

