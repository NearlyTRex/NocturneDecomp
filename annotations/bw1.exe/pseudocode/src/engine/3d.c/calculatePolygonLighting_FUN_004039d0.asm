; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_calculatePolygonLighting_FUN_004039d0(int param_1)
;
;
; XREF[20]:
;   engine_3d.c_FUN_00405280 at 004052ff
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 004047e4
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405360 at 004053ae
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ad0 at 00406b28
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004065f0 at 0040665a
;   engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00406990 at 004069de
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404b00 at 00404b59
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00404560 at 004045a3
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_004066b0 at 00406707
;   engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_004048e0 at 0040492e
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_01c4f024
;
; Called Functions:
;   engine_light.cpp_calculateLighting_FUN_004ffd40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004039d0
        ;   Label: engine_3d.c_calculatePolygonLighting_FUN_004039d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004039d1
    MOV EDX,dword ptr [EAX + 0x10]      ; 004039d5
    PUSH EDX                            ; 004039d8
    MOV ECX,dword ptr [EAX + 0xc]       ; 004039d9
    PUSH ECX                            ; 004039dc
    MOV EBX,dword ptr [EAX + 0x8]       ; 004039dd
    PUSH EBX                            ; 004039e0
    CALL engine_light.cpp_calculateLighting_FUN_004ffd40 ; 004039e1
        ;   XREF to: 004ffd40 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004ffd40(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004039e6
    MOV [0x01c4f024],EAX                ; 004039e9 | DAT_01c4f024
    POP EBX                             ; 004039ee
    RET                                 ; 004039ef

