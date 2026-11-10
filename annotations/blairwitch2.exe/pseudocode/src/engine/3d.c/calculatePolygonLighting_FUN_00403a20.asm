; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a20(int param_1)
;
;
; XREF[20]:
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 00404964
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405530 at 0040557e
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406cf8
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0 at 0040682a
;   engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00406b60 at 00406bae
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c80 at 00404cd9
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0 at 00404723
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406880 at 004068d7
;   engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_00404a60 at 00404aae
;   engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404240 at 0040429d
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_01c35e64
;
; Called Functions:
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a20
        ;   Label: engine_3d.c_calculatePolygonLighting_FUN_00403a20
    MOV EAX,dword ptr [ESP + 0x8]       ; 00403a21
    MOV EDX,dword ptr [EAX + 0x10]      ; 00403a25
    PUSH EDX                            ; 00403a28
    MOV ECX,dword ptr [EAX + 0xc]       ; 00403a29
    PUSH ECX                            ; 00403a2c
    MOV EBX,dword ptr [EAX + 0x8]       ; 00403a2d
    PUSH EBX                            ; 00403a30
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 00403a31
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403a36
    MOV [0x01c35e64],EAX                ; 00403a39 | DAT_01c35e64
    POP EBX                             ; 00403a3e
    RET                                 ; 00403a3f

