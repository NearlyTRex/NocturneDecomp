; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * engine_3d_c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0(SMRGLHeaderPrimitive *param_1)
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

    PUSH EBX                            ; 00406ae0
        ;   Label: engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0
    PUSH ESI                            ; 00406ae1
    PUSH EBP                            ; 00406ae2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406ae3
    LEA ESI,[EBX + 0x18]                ; 00406ae7
    LEA EAX,[EBX + 0x8]                 ; 00406aea
    PUSH EAX                            ; 00406aed
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00406aee
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00406af3
    TEST EAX,EAX                        ; 00406af6
    JZ 0x00406b44                       ; 00406af8
        ;   XREF to: 00406b44 (CONDITIONAL_JUMP)  ; LAB_00406b44
    CMP dword ptr [0x01c03948],0x0      ; 00406afa | DAT_01c03948
    JNZ 0x00406b5f                      ; 00406b01
        ;   XREF to: 00406b5f (CONDITIONAL_JUMP)  ; LAB_00406b5f
    CMP dword ptr [0x005b7624],0x20     ; 00406b03 | DAT_005b7624
    JNZ 0x00406b53                      ; 00406b0a
        ;   XREF to: 00406b53 (CONDITIONAL_JUMP)  ; LAB_00406b53
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00406b0c | DAT_01c00c7c
    PUSH EDI                            ; 00406b16
        ;   Label: LAB_00406b16
    MOV EDI,0x9                         ; 00406b17
    MOV EBP,0x2                         ; 00406b1c
    PUSH EBX                            ; 00406b21
    MOV dword ptr [0x01c039a0],EDI      ; 00406b22 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EBP      ; 00406b28 | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00406b2e
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00406b33
    PUSH ESI                            ; 00406b36
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406b37
    PUSH EAX                            ; 00406b3a
    CALL engine_clipper.c_FUN_00432cd0  ; 00406b3b
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00406b40
    POP EDI                             ; 00406b43
    MOV EAX,dword ptr [EBX + 0x4]       ; 00406b44
        ;   Label: LAB_00406b44
    ADD EBX,0x18                        ; 00406b47
    SHL EAX,0x2                         ; 00406b4a
    ADD EAX,EBX                         ; 00406b4d
    POP EBP                             ; 00406b4f
    POP ESI                             ; 00406b50
    POP EBX                             ; 00406b51
    RET                                 ; 00406b52
    MOV dword ptr [0x01c00c7c],0x530322 ; 00406b53 | DAT_01c00c7c
        ;   Label: LAB_00406b53
    JMP 0x00406b16                      ; 00406b5d
        ;   XREF to: 00406b16 (UNCONDITIONAL_JUMP)  ; LAB_00406b16
    CMP dword ptr [0x005b7624],0x20     ; 00406b5f | DAT_005b7624
        ;   Label: LAB_00406b5f
    JNZ 0x00406b74                      ; 00406b66
        ;   XREF to: 00406b74 (CONDITIONAL_JUMP)  ; LAB_00406b74
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00406b68 | DAT_01c00c7c
    JMP 0x00406b16                      ; 00406b72
        ;   XREF to: 00406b16 (UNCONDITIONAL_JUMP)  ; LAB_00406b16
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00406b74 | DAT_01c00c7c
        ;   Label: LAB_00406b74
    JMP 0x00406b16                      ; 00406b7e
        ;   XREF to: 00406b16 (UNCONDITIONAL_JUMP)  ; LAB_00406b16

