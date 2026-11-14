; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_isVisiblePlane_FUN_00403970(SClipPlane *plane)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   plane
;
; XREF[81]:
;   core_box.cpp_FUN_0041aa20 at 0041ab8c
;   core_dpart.cpp_FUN_00461a50 at 00461ad5
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407b30
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404b15
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 00406464
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 0040486d
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406f5a
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406e1a
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 004056be
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 004057de
;   ... and 71 more
;
; Referenced Globals:
;   undefined4 DAT_0070ca68
;   undefined4 DAT_0070ca7c
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403970
        ;   Label: engine_3d.c_isVisiblePlane_FUN_00403970
    PUSH ESI                            ; 00403971
    MOV EDX,dword ptr [0x0070ca68]      ; 00403972 | DAT_0070ca68
    INC EDX                             ; 00403978
    MOV ESI,dword ptr [ESP + 0xc]       ; 00403979
    MOV dword ptr [0x0070ca68],EDX      ; 0040397d | DAT_0070ca68
    MOV EAX,0x1                         ; 00403983
    CMP dword ptr [0x0070ca7c],0x0      ; 00403988 | DAT_0070ca7c
    JNZ 0x004039d8                      ; 0040398f
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EBX,dword ptr [ESI]             ; 00403991
    OR EBX,dword ptr [ESI + 0x4]        ; 00403993
    OR EBX,dword ptr [ESI + 0x8]        ; 00403996
    OR EBX,dword ptr [ESI + 0xc]        ; 00403999
    JZ 0x004039d8                       ; 0040399c
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EAX,dword ptr [ESI]             ; 0040399e
    IMUL dword ptr [0x01c38b6c]         ; 004039a0 | DAT_01c38b6c
    MOV EBX,EAX                         ; 004039a6
    MOV ECX,EDX                         ; 004039a8
    MOV EAX,dword ptr [ESI + 0x4]       ; 004039aa
    IMUL dword ptr [0x01c38b70]         ; 004039ad | DAT_01c38b70
    ADD EBX,EAX                         ; 004039b3
    ADC ECX,EDX                         ; 004039b5
    MOV EAX,dword ptr [ESI + 0x8]       ; 004039b7
    IMUL dword ptr [0x01c38b74]         ; 004039ba | DAT_01c38b74
    ADD EBX,EAX                         ; 004039c0
    ADC ECX,EDX                         ; 004039c2
    MOV EAX,dword ptr [ESI + 0xc]       ; 004039c4
    CDQ                                 ; 004039c7
    SUB EAX,EBX                         ; 004039c8
    SBB EDX,ECX                         ; 004039ca
    MOV EAX,0x1                         ; 004039cc
    JL 0x004039d8                       ; 004039d1
        ;   XREF to: 004039d8 (CONDITIONAL_JUMP)  ; LAB_004039d8
    MOV EAX,0x0                         ; 004039d3
    POP ESI                             ; 004039d8
        ;   Label: LAB_004039d8
    POP EBX                             ; 004039d9
    RET                                 ; 004039da

