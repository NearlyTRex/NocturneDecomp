; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0260
;   undefined4 DAT_006b0274
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c00c74
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_3d.c_lookupLitColor_FUN_00404680
;   engine_clipper.c_FUN_00432cd0
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405e10
        ;   Label: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10
    PUSH EBP                            ; 00405e11
    MOV EBP,dword ptr [ESP + 0xc]       ; 00405e12
    LEA ESI,[EBP + 0x18]                ; 00405e16
    LEA EAX,[EBP + 0x8]                 ; 00405e19
    PUSH EAX                            ; 00405e1c
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00405e1d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00405e22
    TEST EAX,EAX                        ; 00405e25
    JZ 0x00405fef                       ; 00405e27
        ;   XREF to: 00405fef (CONDITIONAL_JUMP)  ; LAB_00405fef
    PUSH EDI                            ; 00405e2d
    PUSH EBX                            ; 00405e2e
    CMP dword ptr [0x006b0278],0x0      ; 00405e2f | DAT_006b0278
    JZ 0x00405ed5                       ; 00405e36
        ;   XREF to: 00405ed5 (CONDITIONAL_JUMP)  ; LAB_00405ed5
    CMP dword ptr [0x01c03948],0x0      ; 00405e3c | DAT_01c03948
    JNZ 0x00405eb4                      ; 00405e43
        ;   XREF to: 00405eb4 (CONDITIONAL_JUMP)  ; LAB_00405eb4
    CMP dword ptr [0x005b7624],0x20     ; 00405e45 | DAT_005b7624
    JNZ 0x00405ea8                      ; 00405e4c
        ;   XREF to: 00405ea8 (CONDITIONAL_JUMP)  ; LAB_00405ea8
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405e4e | DAT_01c00c7c
    XOR EBX,EBX                         ; 00405e58
        ;   Label: LAB_00405e58
    MOV dword ptr [0x01c039a4],EBX      ; 00405e5a | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 00405e60 | DAT_01c039a0
    MOV EAX,ESI                         ; 00405e66
        ;   Label: LAB_00405e66
    XOR EDX,EDX                         ; 00405e68
    XOR ECX,ECX                         ; 00405e6a
    XOR EBX,EBX                         ; 00405e6c
    MOV ESI,dword ptr [EBP + 0x4]       ; 00405e6e
        ;   Label: LAB_00405e6e
    LEA ESI,[ESI + ESI*0x2]             ; 00405e71
    CMP EDX,ESI                         ; 00405e74
    JGE 0x00405fdf                      ; 00405e76
        ;   XREF to: 00405fdf (CONDITIONAL_JUMP)  ; LAB_00405fdf
    MOV ESI,dword ptr [EAX]             ; 00405e7c
    MOV dword ptr [ECX + 0x6b029c],ESI  ; 00405e7e | DAT_006b029c | DAT_006b02a0
    IMUL EDI,ESI,0x30                   ; 00405e84
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405e87
    MOV dword ptr [EDI + 0x5c502c],ESI  ; 00405e8a | DAT_005c502c
    IMUL EDI,dword ptr [EAX],0x30       ; 00405e90
    ADD EAX,0xc                         ; 00405e93
    ADD ECX,0x4                         ; 00405e96
    INC EBX                             ; 00405e99
    MOV ESI,dword ptr [EAX + -0x4]      ; 00405e9a
    ADD EDX,0x3                         ; 00405e9d
    MOV dword ptr [EDI + 0x5c5030],ESI  ; 00405ea0 | DAT_005c5030
    JMP 0x00405e6e                      ; 00405ea6
        ;   XREF to: 00405e6e (UNCONDITIONAL_JUMP)  ; LAB_00405e6e
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405ea8 | DAT_01c00c7c
        ;   Label: LAB_00405ea8
    JMP 0x00405e58                      ; 00405eb2
        ;   XREF to: 00405e58 (UNCONDITIONAL_JUMP)  ; LAB_00405e58
    CMP dword ptr [0x005b7624],0x20     ; 00405eb4 | DAT_005b7624
        ;   Label: LAB_00405eb4
    JNZ 0x00405ec9                      ; 00405ebb
        ;   XREF to: 00405ec9 (CONDITIONAL_JUMP)  ; LAB_00405ec9
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405ebd | DAT_01c00c7c
    JMP 0x00405e58                      ; 00405ec7
        ;   XREF to: 00405e58 (UNCONDITIONAL_JUMP)  ; LAB_00405e58
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00405ec9 | DAT_01c00c7c
        ;   Label: LAB_00405ec9
    JMP 0x00405e58                      ; 00405ed3
        ;   XREF to: 00405e58 (UNCONDITIONAL_JUMP)  ; LAB_00405e58
    CMP dword ptr [0x006b0274],0x0      ; 00405ed5 | DAT_006b0274
        ;   Label: LAB_00405ed5
    JNZ 0x00405f4e                      ; 00405edc
        ;   XREF to: 00405f4e (CONDITIONAL_JUMP)  ; LAB_00405f4e
    CMP dword ptr [0x01c03948],0x0      ; 00405ee2 | DAT_01c03948
    JNZ 0x00405f2d                      ; 00405ee9
        ;   XREF to: 00405f2d (CONDITIONAL_JUMP)  ; LAB_00405f2d
    CMP dword ptr [0x005b7624],0x20     ; 00405eeb | DAT_005b7624
    JNZ 0x00405f21                      ; 00405ef2
        ;   XREF to: 00405f21 (CONDITIONAL_JUMP)  ; LAB_00405f21
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405ef4 | DAT_01c00c7c
    MOV EDI,0xd1                        ; 00405efe
        ;   Label: LAB_00405efe
    MOV EAX,0x3                         ; 00405f03
    PUSH EBP                            ; 00405f08
    MOV dword ptr [0x01c039a0],EDI      ; 00405f09 | DAT_01c039a0
    MOV [0x01c039a4],EAX                ; 00405f0f | DAT_01c039a4
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 00405f14
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00405f19
    JMP 0x00405e66                      ; 00405f1c
        ;   XREF to: 00405e66 (UNCONDITIONAL_JUMP)  ; LAB_00405e66
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405f21 | DAT_01c00c7c
        ;   Label: LAB_00405f21
    JMP 0x00405efe                      ; 00405f2b
        ;   XREF to: 00405efe (UNCONDITIONAL_JUMP)  ; LAB_00405efe
    CMP dword ptr [0x005b7624],0x20     ; 00405f2d | DAT_005b7624
        ;   Label: LAB_00405f2d
    JNZ 0x00405f42                      ; 00405f34
        ;   XREF to: 00405f42 (CONDITIONAL_JUMP)  ; LAB_00405f42
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405f36 | DAT_01c00c7c
    JMP 0x00405efe                      ; 00405f40
        ;   XREF to: 00405efe (UNCONDITIONAL_JUMP)  ; LAB_00405efe
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00405f42 | DAT_01c00c7c
        ;   Label: LAB_00405f42
    JMP 0x00405efe                      ; 00405f4c
        ;   XREF to: 00405efe (UNCONDITIONAL_JUMP)  ; LAB_00405efe
    CMP dword ptr [0x01c03948],0x0      ; 00405f4e | DAT_01c03948
        ;   Label: LAB_00405f4e
    JNZ 0x00405fbe                      ; 00405f55
        ;   XREF to: 00405fbe (CONDITIONAL_JUMP)  ; LAB_00405fbe
    CMP dword ptr [0x005b7624],0x20     ; 00405f57 | DAT_005b7624
    JNZ 0x00405fb2                      ; 00405f5e
        ;   XREF to: 00405fb2 (CONDITIONAL_JUMP)  ; LAB_00405fb2
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00405f60 | DAT_01c00c7c
    MOV ECX,dword ptr [EBP + 0x10]      ; 00405f6a
        ;   Label: LAB_00405f6a
    PUSH ECX                            ; 00405f6d
    MOV EBX,dword ptr [EBP + 0xc]       ; 00405f6e
    MOV EAX,0xd0                        ; 00405f71
    PUSH EBX                            ; 00405f76
    MOV EDI,dword ptr [EBP + 0x8]       ; 00405f77
    MOV EDX,0x1                         ; 00405f7a
    PUSH EDI                            ; 00405f7f
    MOV [0x01c039a0],EAX                ; 00405f80 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00405f85 | DAT_01c039a4
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 00405f8b
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004c6cc0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00405f90
    MOV EAX,[0x01c00c74]                ; 00405f93 | DAT_01c00c74
    PUSH EAX                            ; 00405f98
    MOV EDX,dword ptr [0x006b0260]      ; 00405f99 | DAT_006b0260
    PUSH EDX                            ; 00405f9f
    CALL engine_3d.c_lookupLitColor_FUN_00404680 ; 00405fa0
        ;   XREF to: 00404680 (UNCONDITIONAL_CALL)  ; int engine_3d.c_lookupLitColor_FUN_00404680(int color_index, int light_level)
    ADD ESP,0x8                         ; 00405fa5
    MOV [0x01c00c70],EAX                ; 00405fa8 | DAT_01c00c70
    JMP 0x00405e66                      ; 00405fad
        ;   XREF to: 00405e66 (UNCONDITIONAL_JUMP)  ; LAB_00405e66
    MOV dword ptr [0x01c00c7c],0x530322 ; 00405fb2 | DAT_01c00c7c
        ;   Label: LAB_00405fb2
    JMP 0x00405f6a                      ; 00405fbc
        ;   XREF to: 00405f6a (UNCONDITIONAL_JUMP)  ; LAB_00405f6a
    CMP dword ptr [0x005b7624],0x20     ; 00405fbe | DAT_005b7624
        ;   Label: LAB_00405fbe
    JNZ 0x00405fd3                      ; 00405fc5
        ;   XREF to: 00405fd3 (CONDITIONAL_JUMP)  ; LAB_00405fd3
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00405fc7 | DAT_01c00c7c
    JMP 0x00405f6a                      ; 00405fd1
        ;   XREF to: 00405f6a (UNCONDITIONAL_JUMP)  ; LAB_00405f6a
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00405fd3 | DAT_01c00c7c
        ;   Label: LAB_00405fd3
    JMP 0x00405f6a                      ; 00405fdd
        ;   XREF to: 00405f6a (UNCONDITIONAL_JUMP)  ; LAB_00405f6a
    PUSH 0x6b029c                       ; 00405fdf | DAT_006b029c
        ;   Label: LAB_00405fdf
    PUSH EBX                            ; 00405fe4
    CALL engine_clipper.c_FUN_00432cd0  ; 00405fe5
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00405fea
    POP EBX                             ; 00405fed
    POP EDI                             ; 00405fee
    MOV EDX,dword ptr [EBP + 0x4]       ; 00405fef
        ;   Label: LAB_00405fef
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405ff2
    SUB EAX,EDX                         ; 00405ff9
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405ffb
    LEA EAX,[EBP + 0x18]                ; 00406002
    ADD EAX,EDX                         ; 00406005
    POP EBP                             ; 00406007
    POP ESI                             ; 00406008
    RET                                 ; 00406009

