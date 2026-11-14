; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_lineListD3DTL_FUN_004ee9f0(float *vertices,int vertex_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[1]:
;   engine_mini3d.cpp_drawLine_FUN_004f3700 at 004f37cd
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_02cf60dc
;
; Called Functions:
;   engine_mini3d.cpp_updateRenderState_FUN_004f2430
;   engine_mini3d.cpp_updateTransform_FUN_004edcc0
;
; *****************************************************************************

section .text

    CALL engine_mini3d.cpp_updateTransform_FUN_004edcc0 ; 004ee9f0
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004edcc0()
        ;   Label: engine_mini3d.cpp_lineListD3DTL_FUN_004ee9f0
    CALL engine_mini3d.cpp_updateRenderState_FUN_004f2430 ; 004ee9f5
        ;   XREF to: 004f2430 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_004f2430()
    CMP dword ptr [0x02cf60dc],0x0      ; 004ee9fa | DAT_02cf60dc
    JZ 0x004eea0c                       ; 004eea01
        ;   XREF to: 004eea0c (CONDITIONAL_JUMP)  ; LAB_004eea0c
    CMP dword ptr [0x01c6cee8],0x0      ; 004eea03 | DAT_01c6cee8
    JNZ 0x004eea0d                      ; 004eea0a
        ;   XREF to: 004eea0d (CONDITIONAL_JUMP)  ; LAB_004eea0d
    RET                                 ; 004eea0c
        ;   Label: LAB_004eea0c
    PUSH EDI                            ; 004eea0d
        ;   Label: LAB_004eea0d
    PUSH ESI                            ; 004eea0e
    PUSH EBX                            ; 004eea0f
    MOV EBX,dword ptr [0x01c6e2b4]      ; 004eea10 | DAT_01c6e2b4
    PUSH EBX                            ; 004eea16
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eea17
    PUSH ESI                            ; 004eea1b
    MOV EDI,dword ptr [ESP + 0x18]      ; 004eea1c
    PUSH EDI                            ; 004eea20
    CALL dword ptr [0x02cf60dc]         ; 004eea21 | DAT_02cf60dc
    ADD ESP,0xc                         ; 004eea27
    POP EBX                             ; 004eea2a
    POP ESI                             ; 004eea2b
    POP EDI                             ; 004eea2c
    RET                                 ; 004eea2d

