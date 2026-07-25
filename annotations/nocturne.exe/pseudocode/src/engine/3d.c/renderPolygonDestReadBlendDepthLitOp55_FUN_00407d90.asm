; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b763c
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

    PUSH EBX                            ; 00407d90
        ;   Label: engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90
    PUSH ESI                            ; 00407d91
    PUSH EBP                            ; 00407d92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407d93
    LEA ESI,[EBX + 0x18]                ; 00407d97
    LEA EAX,[EBX + 0x8]                 ; 00407d9a
    PUSH EAX                            ; 00407d9d
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00407d9e
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00407da3
    TEST EAX,EAX                        ; 00407da6
    JZ 0x00407e10                       ; 00407da8
        ;   XREF to: 00407e10 (CONDITIONAL_JUMP)  ; LAB_00407e10
    CMP dword ptr [0x01c03948],0x0      ; 00407daa | DAT_01c03948
    JNZ 0x00407e2b                      ; 00407db1
        ;   XREF to: 00407e2b (CONDITIONAL_JUMP)  ; LAB_00407e2b
    CMP dword ptr [0x005b7624],0x20     ; 00407db7 | DAT_005b7624
    JNZ 0x00407e1f                      ; 00407dbe
        ;   XREF to: 00407e1f (CONDITIONAL_JUMP)  ; LAB_00407e1f
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00407dc0 | DAT_01c00c7c
    PUSH EDI                            ; 00407dca
        ;   Label: LAB_00407dca
    MOV EDI,0xc3                        ; 00407dcb
    MOV EBP,dword ptr [0x005b763c]      ; 00407dd0 | DAT_005b763c
    MOV dword ptr [0x01c039a0],EDI      ; 00407dd6 | DAT_01c039a0
    CMP EBP,0xff                        ; 00407ddc
    JGE 0x00407dee                      ; 00407de2
        ;   XREF to: 00407dee (CONDITIONAL_JUMP)  ; LAB_00407dee
    MOV dword ptr [0x01c039a0],0xe3     ; 00407de4 | DAT_01c039a0
    MOV EDX,0x1                         ; 00407dee
        ;   Label: LAB_00407dee
    PUSH EBX                            ; 00407df3
    MOV dword ptr [0x01c039a4],EDX      ; 00407df4 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00407dfa
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    ADD ESP,0x4                         ; 00407dff
    PUSH ESI                            ; 00407e02
    MOV ECX,dword ptr [EBX + 0x4]       ; 00407e03
    PUSH ECX                            ; 00407e06
    CALL engine_clipper.c_FUN_00432cd0  ; 00407e07
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00407e0c
    POP EDI                             ; 00407e0f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00407e10
        ;   Label: LAB_00407e10
    LEA EAX,[EBX + 0x18]                ; 00407e13
    SHL ESI,0x2                         ; 00407e16
    ADD EAX,ESI                         ; 00407e19
    POP EBP                             ; 00407e1b
    POP ESI                             ; 00407e1c
    POP EBX                             ; 00407e1d
    RET                                 ; 00407e1e
    MOV dword ptr [0x01c00c7c],0x530322 ; 00407e1f | DAT_01c00c7c
        ;   Label: LAB_00407e1f
    JMP 0x00407dca                      ; 00407e29
        ;   XREF to: 00407dca (UNCONDITIONAL_JUMP)  ; LAB_00407dca
    CMP dword ptr [0x005b7624],0x20     ; 00407e2b | DAT_005b7624
        ;   Label: LAB_00407e2b
    JNZ 0x00407e40                      ; 00407e32
        ;   XREF to: 00407e40 (CONDITIONAL_JUMP)  ; LAB_00407e40
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00407e34 | DAT_01c00c7c
    JMP 0x00407dca                      ; 00407e3e
        ;   XREF to: 00407dca (UNCONDITIONAL_JUMP)  ; LAB_00407dca
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00407e40 | DAT_01c00c7c
        ;   Label: LAB_00407e40
    JMP 0x00407dca                      ; 00407e4a
        ;   XREF to: 00407dca (UNCONDITIONAL_JUMP)  ; LAB_00407dca

