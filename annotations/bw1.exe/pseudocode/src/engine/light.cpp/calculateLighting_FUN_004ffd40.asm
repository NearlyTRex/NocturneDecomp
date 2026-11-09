; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_light_cpp_calculateLighting_FUN_004ffd40(int normal_x,int normal_y,int normal_z)
;
; Parameters:
; int              Stack[0x4]:4   normal_x
; int              Stack[0x8]:4   normal_y
; int              Stack[0xc]:4   normal_z
;
; XREF[8]:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0 at 004039e1
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 004049e9
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406280 at 00406490
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 0040485b
;   engine_3d.c_renderPolygonGrayscaleLitOp54_FUN_00406520 at 0040657a
;   engine_3d.c_renderPolygonGrayscaleLitOp5_FUN_00403aa0 at 00403afa
;   engine_3d.c_renderPolygonWithRenderFlagsUV_FUN_00407570 at 004075cb
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00407470 at 004074c8
;
; Referenced Globals:
;   undefined4 DAT_0061f310
;   undefined4 DAT_01c51d50
;   undefined4 DAT_01c51d54
;   undefined4 DAT_01c51d58
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffd40
        ;   Label: engine_light.cpp_calculateLighting_FUN_004ffd40
    MOV EDX,dword ptr [0x01c51d50]      ; 004ffd44 | DAT_01c51d50
    IMUL EDX                            ; 004ffd4a
    SHRD EAX,EDX,0x10                   ; 004ffd4c
    MOV EDX,dword ptr [0x01c51d54]      ; 004ffd50 | DAT_01c51d54
    MOV ECX,EAX                         ; 004ffd56
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ffd58
    IMUL EDX                            ; 004ffd5c
    SHRD EAX,EDX,0x10                   ; 004ffd5e
    MOV EDX,dword ptr [0x01c51d58]      ; 004ffd62 | DAT_01c51d58
    ADD ECX,EAX                         ; 004ffd68
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ffd6a
    IMUL EDX                            ; 004ffd6e
    SHRD EAX,EDX,0x10                   ; 004ffd70
    LEA EDX,[ECX + EAX*0x1]             ; 004ffd74
    NEG EDX                             ; 004ffd77
    TEST EDX,EDX                        ; 004ffd79
    JL 0x004ffdcb                       ; 004ffd7b
        ;   XREF to: 004ffdcb (CONDITIONAL_JUMP)  ; LAB_004ffdcb
    CMP EDX,0xffff                      ; 004ffd7d
    JLE 0x004ffd8a                      ; 004ffd83
        ;   XREF to: 004ffd8a (CONDITIONAL_JUMP)  ; LAB_004ffd8a
    MOV EDX,0xffff                      ; 004ffd85
    MOV ECX,0xffff                      ; 004ffd8a
        ;   Label: LAB_004ffd8a
    SUB ECX,dword ptr [0x0061f310]      ; 004ffd8f | DAT_0061f310
    MOV EAX,EDX                         ; 004ffd95
    MOV EDX,ECX                         ; 004ffd97
    IMUL EDX                            ; 004ffd99
    SHRD EAX,EDX,0x10                   ; 004ffd9b
    MOV EDX,dword ptr [0x0061f310]      ; 004ffd9f | DAT_0061f310
    ADD EDX,EAX                         ; 004ffda5
    TEST EDX,EDX                        ; 004ffda7
    JL 0x004ffdcf                       ; 004ffda9
        ;   XREF to: 004ffdcf (CONDITIONAL_JUMP)  ; LAB_004ffdcf
    CMP EDX,0xffff                      ; 004ffdab
    JLE 0x004ffdb8                      ; 004ffdb1
        ;   XREF to: 004ffdb8 (CONDITIONAL_JUMP)  ; LAB_004ffdb8
    MOV EDX,0xffff                      ; 004ffdb3
    MOV EAX,EDX                         ; 004ffdb8
        ;   Label: LAB_004ffdb8
    SAR EDX,0x1f                        ; 004ffdba
    SHL EDX,0x4                         ; 004ffdbd
    SBB EAX,EDX                         ; 004ffdc0
    SAR EAX,0x4                         ; 004ffdc2
    ADD EAX,0x100                       ; 004ffdc5
    RET                                 ; 004ffdca
    XOR EDX,EDX                         ; 004ffdcb
        ;   Label: LAB_004ffdcb
    JMP 0x004ffd8a                      ; 004ffdcd
        ;   XREF to: 004ffd8a (UNCONDITIONAL_JUMP)  ; LAB_004ffd8a
    XOR EDX,EDX                         ; 004ffdcf
        ;   Label: LAB_004ffdcf
    MOV EAX,EDX                         ; 004ffdd1
    SAR EDX,0x1f                        ; 004ffdd3
    SHL EDX,0x4                         ; 004ffdd6
    SBB EAX,EDX                         ; 004ffdd9
    SAR EAX,0x4                         ; 004ffddb
    ADD EAX,0x100                       ; 004ffdde
    RET                                 ; 004ffde3

