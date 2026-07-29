; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_renderPolygonWithRenderFlagsUV_FUN_00408d10(SMRGLHeaderPrimitive *prim,int render_flags,int render_state_flags)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
; int              Stack[0x8]:4   render_flags
; int              Stack[0xc]:4   render_state_flags
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c74
;   undefined4 DAT_01c00c78
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0
;   engine_clipper.c_FUN_00432cd0
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d10
        ;   Label: engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00408d10
    PUSH ESI                            ; 00408d11
    PUSH EDI                            ; 00408d12
    PUSH EBP                            ; 00408d13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00408d14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00408d18
    LEA EAX,[EDI + 0x8]                 ; 00408d1c
    PUSH EAX                            ; 00408d1f
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00408d20
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 00408d25
    TEST EAX,EAX                        ; 00408d28
    JZ 0x00408dea                       ; 00408d2a
        ;   XREF to: 00408dea (CONDITIONAL_JUMP)  ; LAB_00408dea
    CMP dword ptr [0x01c03948],0x0      ; 00408d30 | DAT_01c03948
    JNZ 0x00408dfe                      ; 00408d37
        ;   XREF to: 00408dfe (CONDITIONAL_JUMP)  ; LAB_00408dfe
    CMP dword ptr [0x005b7624],0x20     ; 00408d3d | DAT_005b7624
    JNZ 0x00408def                      ; 00408d44
        ;   XREF to: 00408def (CONDITIONAL_JUMP)  ; LAB_00408def
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408d4a | DAT_01c00c7c
    MOV dword ptr [0x01c039a0],EBX      ; 00408d54 | DAT_01c039a0
        ;   Label: LAB_00408d54
    TEST BL,0x10                        ; 00408d5a
    JZ 0x00408d78                       ; 00408d5d
        ;   XREF to: 00408d78 (CONDITIONAL_JUMP)  ; LAB_00408d78
    MOV ESI,dword ptr [EDI + 0x10]      ; 00408d5f
    PUSH ESI                            ; 00408d62
    MOV EBP,dword ptr [EDI + 0xc]       ; 00408d63
    PUSH EBP                            ; 00408d66
    MOV EAX,dword ptr [EDI + 0x8]       ; 00408d67
    PUSH EAX                            ; 00408d6a
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 00408d6b
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004c6cc0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00408d70
    MOV [0x01c00c74],EAX                ; 00408d73 | DAT_01c00c74
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408d78
        ;   Label: LAB_00408d78
    TEST EDX,EDX                        ; 00408d7c
    JZ 0x00408e25                       ; 00408d7e
        ;   XREF to: 00408e25 (CONDITIONAL_JUMP)  ; LAB_00408e25
    MOV dword ptr [0x01c039a4],0x5      ; 00408d84 | DAT_01c039a4
    MOV EBP,dword ptr [EDI + 0x4]       ; 00408d8e
        ;   Label: LAB_00408d8e
    XOR ECX,ECX                         ; 00408d91
    TEST EBP,EBP                        ; 00408d93
    JLE 0x00408dd0                      ; 00408d95
        ;   XREF to: 00408dd0 (CONDITIONAL_JUMP)  ; LAB_00408dd0
    MOV EAX,EDI                         ; 00408d97
    XOR EDX,EDX                         ; 00408d99
    MOV EBX,dword ptr [EAX + 0x18]      ; 00408d9b
        ;   Label: LAB_00408d9b
    MOV dword ptr [EDX + 0x6b029c],EBX  ; 00408d9e
    IMUL EBX,EBX,0x30                   ; 00408da4
    MOV ESI,dword ptr [EAX + 0x1c]      ; 00408da7
    MOV dword ptr [EBX + 0x5c502c],ESI  ; 00408daa
    MOV ESI,dword ptr [EAX + 0x20]      ; 00408db0
    ADD EDX,0x4                         ; 00408db3
    MOV dword ptr [EBX + 0x5c5030],ESI  ; 00408db6
    INC ECX                             ; 00408dbc
    MOV EBX,dword ptr [EDI + 0x4]       ; 00408dbd
    ADD EAX,0xc                         ; 00408dc0
    CMP ECX,EBX                         ; 00408dc3
    JL 0x00408d9b                       ; 00408dc5
        ;   XREF to: 00408d9b (CONDITIONAL_JUMP)  ; LAB_00408d9b
    LEA EAX,[EAX]                       ; 00408dc7
    LEA EDX,[EDX]                       ; 00408dcd
    CMP dword ptr [0x01c00c78],0x0      ; 00408dd0 | DAT_01c00c78
        ;   Label: LAB_00408dd0
    JZ 0x00408e44                       ; 00408dd7
        ;   XREF to: 00408e44 (CONDITIONAL_JUMP)  ; LAB_00408e44
    PUSH 0x6b029c                       ; 00408dd9
    MOV EAX,dword ptr [EDI + 0x4]       ; 00408dde
    PUSH EAX                            ; 00408de1
    CALL engine_clipper.c_FUN_00432cd0  ; 00408de2
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 00408de7
    POP EBP                             ; 00408dea
        ;   Label: LAB_00408dea
    POP EDI                             ; 00408deb
    POP ESI                             ; 00408dec
    POP EBX                             ; 00408ded
    RET                                 ; 00408dee
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408def | DAT_01c00c7c
        ;   Label: LAB_00408def
    JMP 0x00408d54                      ; 00408df9
        ;   XREF to: 00408d54 (UNCONDITIONAL_JUMP)  ; LAB_00408d54
    CMP dword ptr [0x005b7624],0x20     ; 00408dfe | DAT_005b7624
        ;   Label: LAB_00408dfe
    JNZ 0x00408e16                      ; 00408e05
        ;   XREF to: 00408e16 (CONDITIONAL_JUMP)  ; LAB_00408e16
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00408e07 | DAT_01c00c7c
    JMP 0x00408d54                      ; 00408e11
        ;   XREF to: 00408d54 (UNCONDITIONAL_JUMP)  ; LAB_00408d54
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00408e16 | DAT_01c00c7c
        ;   Label: LAB_00408e16
    JMP 0x00408d54                      ; 00408e20
        ;   XREF to: 00408d54 (UNCONDITIONAL_JUMP)  ; LAB_00408d54
    TEST BL,0xc0                        ; 00408e25
        ;   Label: LAB_00408e25
    JZ 0x00408e39                       ; 00408e28
        ;   XREF to: 00408e39 (CONDITIONAL_JUMP)  ; LAB_00408e39
    MOV dword ptr [0x01c039a4],0x1      ; 00408e2a | DAT_01c039a4
    JMP 0x00408d8e                      ; 00408e34
        ;   XREF to: 00408d8e (UNCONDITIONAL_JUMP)  ; LAB_00408d8e
    MOV dword ptr [0x01c039a4],EDX      ; 00408e39 | DAT_01c039a4
        ;   Label: LAB_00408e39
    JMP 0x00408d8e                      ; 00408e3f
        ;   XREF to: 00408d8e (UNCONDITIONAL_JUMP)  ; LAB_00408d8e
    PUSH 0x6b029c                       ; 00408e44
        ;   Label: LAB_00408e44
    MOV EBP,dword ptr [EDI + 0x4]       ; 00408e49
    PUSH EBP                            ; 00408e4c
    CALL engine_clipper.c_clipPolygonToViewport_FUN_004349a0 ; 00408e4d
        ;   XREF to: 004349a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_004349a0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00408e52
    POP EBP                             ; 00408e55
    POP EDI                             ; 00408e56
    POP ESI                             ; 00408e57
    POP EBX                             ; 00408e58
    RET                                 ; 00408e59

