; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculateLighting_FUN_004e0e00(int normal_x,int normal_y,int normal_z)
;
; Parameters:
; int              Stack[0x4]:4   normal_x
; int              Stack[0x8]:4   normal_y
; int              Stack[0xc]:4   normal_z
;
; XREF[8]:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0 at 004039e1
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 004049e9
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 004064b0
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040485b
;   engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406540 at 0040659a
;   engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403aa0 at 00403afa
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_004075b0 at 0040760b
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_004074b0 at 00407508
;
; Referenced Globals:
;   undefined4 DAT_006002c4
;   undefined4 DAT_01c6e2f0
;   undefined4 DAT_01c6e2f4
;   undefined4 DAT_01c6e2f8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0e00
        ;   Label: engine_light.cpp_calculateLighting_FUN_004e0e00
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e0e04 | DAT_01c6e2f0
    IMUL EDX                            ; 004e0e0a
    SHRD EAX,EDX,0x10                   ; 004e0e0c
    MOV EDX,dword ptr [0x01c6e2f4]      ; 004e0e10 | DAT_01c6e2f4
    MOV ECX,EAX                         ; 004e0e16
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e0e18
    IMUL EDX                            ; 004e0e1c
    SHRD EAX,EDX,0x10                   ; 004e0e1e
    MOV EDX,dword ptr [0x01c6e2f8]      ; 004e0e22 | DAT_01c6e2f8
    ADD ECX,EAX                         ; 004e0e28
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e0e2a
    IMUL EDX                            ; 004e0e2e
    SHRD EAX,EDX,0x10                   ; 004e0e30
    LEA EDX,[ECX + EAX*0x1]             ; 004e0e34
    NEG EDX                             ; 004e0e37
    TEST EDX,EDX                        ; 004e0e39
    JL 0x004e0e8b                       ; 004e0e3b
        ;   XREF to: 004e0e8b (CONDITIONAL_JUMP)  ; LAB_004e0e8b
    CMP EDX,0xffff                      ; 004e0e3d
    JLE 0x004e0e4a                      ; 004e0e43
        ;   XREF to: 004e0e4a (CONDITIONAL_JUMP)  ; LAB_004e0e4a
    MOV EDX,0xffff                      ; 004e0e45
    MOV ECX,0xffff                      ; 004e0e4a
        ;   Label: LAB_004e0e4a
    SUB ECX,dword ptr [0x006002c4]      ; 004e0e4f | DAT_006002c4
    MOV EAX,EDX                         ; 004e0e55
    MOV EDX,ECX                         ; 004e0e57
    IMUL EDX                            ; 004e0e59
    SHRD EAX,EDX,0x10                   ; 004e0e5b
    MOV EDX,dword ptr [0x006002c4]      ; 004e0e5f | DAT_006002c4
    ADD EDX,EAX                         ; 004e0e65
    TEST EDX,EDX                        ; 004e0e67
    JL 0x004e0e8f                       ; 004e0e69
        ;   XREF to: 004e0e8f (CONDITIONAL_JUMP)  ; LAB_004e0e8f
    CMP EDX,0xffff                      ; 004e0e6b
    JLE 0x004e0e78                      ; 004e0e71
        ;   XREF to: 004e0e78 (CONDITIONAL_JUMP)  ; LAB_004e0e78
    MOV EDX,0xffff                      ; 004e0e73
    MOV EAX,EDX                         ; 004e0e78
        ;   Label: LAB_004e0e78
    SAR EDX,0x1f                        ; 004e0e7a
    SHL EDX,0x4                         ; 004e0e7d
    SBB EAX,EDX                         ; 004e0e80
    SAR EAX,0x4                         ; 004e0e82
    ADD EAX,0x100                       ; 004e0e85
    RET                                 ; 004e0e8a
    XOR EDX,EDX                         ; 004e0e8b
        ;   Label: LAB_004e0e8b
    JMP 0x004e0e4a                      ; 004e0e8d
        ;   XREF to: 004e0e4a (UNCONDITIONAL_JUMP)  ; LAB_004e0e4a
    XOR EDX,EDX                         ; 004e0e8f
        ;   Label: LAB_004e0e8f
    MOV EAX,EDX                         ; 004e0e91
    SAR EDX,0x1f                        ; 004e0e93
    SHL EDX,0x4                         ; 004e0e96
    SBB EAX,EDX                         ; 004e0e99
    SAR EAX,0x4                         ; 004e0e9b
    ADD EAX,0x100                       ; 004e0e9e
    RET                                 ; 004e0ea3

