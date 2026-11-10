; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_3d_c_isVisiblePlane_FUN_00403920(int *param_1)
;
;
; XREF[80]:
;   core_box.cpp_FUN_0041dcd0 at 0041de3c
;   core_dpart.cpp_FUN_0046682e at 004668b5
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407860 at 004079a0
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404980 at 00404995
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_004062a0 at 004062b4
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0 at 004046ed
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406d90 at 00406daa
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406c50 at 00406c6a
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004054e0 at 004054ee
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_00405600 at 0040560e
;   ... and 70 more
;
; Referenced Globals:
;   undefined4 DAT_007303e8
;   undefined4 DAT_007303fc
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403920
        ;   Label: engine_3d.c_isVisiblePlane_FUN_00403920
    PUSH ESI                            ; 00403921
    MOV EDX,dword ptr [0x007303e8]      ; 00403922 | DAT_007303e8
    INC EDX                             ; 00403928
    MOV ESI,dword ptr [ESP + 0xc]       ; 00403929
    MOV dword ptr [0x007303e8],EDX      ; 0040392d | DAT_007303e8
    MOV EAX,0x1                         ; 00403933
    CMP dword ptr [0x007303fc],0x0      ; 00403938 | DAT_007303fc
    JNZ 0x00403988                      ; 0040393f
        ;   XREF to: 00403988 (CONDITIONAL_JUMP)  ; LAB_00403988
    MOV EBX,dword ptr [ESI]             ; 00403941
    OR EBX,dword ptr [ESI + 0x4]        ; 00403943
    OR EBX,dword ptr [ESI + 0x8]        ; 00403946
    OR EBX,dword ptr [ESI + 0xc]        ; 00403949
    JZ 0x00403988                       ; 0040394c
        ;   XREF to: 00403988 (CONDITIONAL_JUMP)  ; LAB_00403988
    MOV EAX,dword ptr [ESI]             ; 0040394e
    IMUL dword ptr [0x01c6e2cc]         ; 00403950 | DAT_01c6e2cc
    MOV EBX,EAX                         ; 00403956
    MOV ECX,EDX                         ; 00403958
    MOV EAX,dword ptr [ESI + 0x4]       ; 0040395a
    IMUL dword ptr [0x01c6e2d0]         ; 0040395d | DAT_01c6e2d0
    ADD EBX,EAX                         ; 00403963
    ADC ECX,EDX                         ; 00403965
    MOV EAX,dword ptr [ESI + 0x8]       ; 00403967
    IMUL dword ptr [0x01c6e2d4]         ; 0040396a | DAT_01c6e2d4
    ADD EBX,EAX                         ; 00403970
    ADC ECX,EDX                         ; 00403972
    MOV EAX,dword ptr [ESI + 0xc]       ; 00403974
    CDQ                                 ; 00403977
    SUB EAX,EBX                         ; 00403978
    SBB EDX,ECX                         ; 0040397a
    MOV EAX,0x1                         ; 0040397c
    JL 0x00403988                       ; 00403981
        ;   XREF to: 00403988 (CONDITIONAL_JUMP)  ; LAB_00403988
    MOV EAX,0x0                         ; 00403983
    POP ESI                             ; 00403988
        ;   Label: LAB_00403988
    POP EBX                             ; 00403989
    RET                                 ; 0040398a

