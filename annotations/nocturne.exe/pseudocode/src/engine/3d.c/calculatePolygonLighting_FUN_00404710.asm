; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_calculatePolygonLighting_FUN_00404710(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; XREF[21]:
;   engine_3d.c_FUN_00406a00 at 00406a7f
;   engine_3d.c_FUN_00406b80 at 00406bff
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405f14
;   engine_3d.c_renderPolygonAlphaTexturedNormalizedLit_FUN_00406ae0 at 00406b2e
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00408270 at 004082c8
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_00407d90 at 00407dfa
;   engine_3d.c_renderPolygonFullEffectsLitOp57_FUN_00408130 at 0040817e
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedOp26_FUN_00406230 at 00406289
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_00405c90 at 00405cd3
;   engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp56_FUN_00407e50 at 00407ea7
;   ... and 11 more
;
; Referenced Globals:
;   int g_CurrentLightingValue
;
; Called Functions:
;   engine_light.cpp_calculateLighting_FUN_004c6cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404710
        ;   Label: engine_3d.c_calculatePolygonLighting_FUN_00404710
    MOV EAX,dword ptr [ESP + 0x8]       ; 00404711
    MOV EDX,dword ptr [EAX + 0x10]      ; 00404715
    PUSH EDX                            ; 00404718
    MOV ECX,dword ptr [EAX + 0xc]       ; 00404719
    PUSH ECX                            ; 0040471c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040471d
    PUSH EBX                            ; 00404720
    CALL engine_light.cpp_calculateLighting_FUN_004c6cc0 ; 00404721
        ;   XREF to: 004c6cc0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004c6cc0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00404726
    MOV [0x01c00c74],EAX                ; 00404729 | g_CurrentLightingValue
    POP EBX                             ; 0040472e
    RET                                 ; 0040472f

