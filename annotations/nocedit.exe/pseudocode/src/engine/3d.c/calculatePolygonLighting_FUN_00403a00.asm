; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00403a00(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[21]:
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404840 at 00404944
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00405510 at 0040555e
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406c80 at 00406cd8
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067a0 at 0040680a
;   engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00406b40 at 00406b8e
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00404c60 at 00404cb9
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046c0 at 00404703
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00406860 at 004068b7
;   engine_3d.c_renderPolygonLitNearPlaneOp35_FUN_00404a40 at 00404a8e
;   engine_3d.c_renderPolygonSolidLitClampedOp17_FUN_00404220 at 0040427d
;   ... and 11 more
;
; Referenced Globals:
;   int g_CurrentLightingValue
;
; Called Functions:
;   engine_light.cpp_calculateLighting_FUN_00505780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a00
        ;   Label: engine_3d.c_calculatePolygonLighting_FUN_00403a00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00403a01
    MOV EDX,dword ptr [EAX + 0x10]      ; 00403a05
    PUSH EDX                            ; 00403a08
    MOV ECX,dword ptr [EAX + 0xc]       ; 00403a09
    PUSH ECX                            ; 00403a0c
    MOV EBX,dword ptr [EAX + 0x8]       ; 00403a0d
    PUSH EBX                            ; 00403a10
    CALL engine_light.cpp_calculateLighting_FUN_00505780 ; 00403a11
        ;   XREF to: 00505780 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_00505780(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00403a16
    MOV [0x02d02574],EAX                ; 00403a19 | g_CurrentLightingValue
    POP EBX                             ; 00403a1e
    RET                                 ; 00403a1f

