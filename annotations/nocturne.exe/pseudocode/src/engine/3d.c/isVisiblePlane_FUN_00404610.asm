; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_isVisiblePlane_FUN_00404610(SClipPlane *plane)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   plane
;
; XREF[79]:
;   core_box.cpp_CBoundingBox3D_FUN_0041d050 at 0041d191
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004574e0 at 00457565
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00408fc0 at 00409100
;   engine_3d.c_queueSortedPolygon_FUN_00405ab0 at 00405ac7
;   engine_3d.c_renderBSPNode_FUN_00405200 at 00405209
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_004060b0 at 004060c5
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00407a20 at 00407a34
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00405e10 at 00405e1d
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00408510 at 0040852a
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_004083d0 at 004083ea
;   ... and 69 more
;
; Referenced Globals:
;   undefined4 DAT_006b026c
;   undefined4 DAT_006b0280
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404610
        ;   Label: engine_3d.c_isVisiblePlane_FUN_00404610
    PUSH ESI                            ; 00404611
    MOV EDX,dword ptr [0x006b026c]      ; 00404612 | DAT_006b026c
    INC EDX                             ; 00404618
    MOV ESI,dword ptr [ESP + 0xc]       ; 00404619
    MOV dword ptr [0x006b026c],EDX      ; 0040461d | DAT_006b026c
    MOV EAX,0x1                         ; 00404623
    CMP dword ptr [0x006b0280],0x0      ; 00404628 | DAT_006b0280
    JNZ 0x00404678                      ; 0040462f
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EBX,dword ptr [ESI]             ; 00404631
    OR EBX,dword ptr [ESI + 0x4]        ; 00404633
    OR EBX,dword ptr [ESI + 0x8]        ; 00404636
    OR EBX,dword ptr [ESI + 0xc]        ; 00404639
    JZ 0x00404678                       ; 0040463c
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EAX,dword ptr [ESI]             ; 0040463e
    IMUL dword ptr [0x01c039b8]         ; 00404640 | g_RelativeX
    MOV EBX,EAX                         ; 00404646
    MOV ECX,EDX                         ; 00404648
    MOV EAX,dword ptr [ESI + 0x4]       ; 0040464a
    IMUL dword ptr [0x01c039bc]         ; 0040464d | g_RelativeY
    ADD EBX,EAX                         ; 00404653
    ADC ECX,EDX                         ; 00404655
    MOV EAX,dword ptr [ESI + 0x8]       ; 00404657
    IMUL dword ptr [0x01c039c0]         ; 0040465a | g_RelativeZ
    ADD EBX,EAX                         ; 00404660
    ADC ECX,EDX                         ; 00404662
    MOV EAX,dword ptr [ESI + 0xc]       ; 00404664
    CDQ                                 ; 00404667
    SUB EAX,EBX                         ; 00404668
    SBB EDX,ECX                         ; 0040466a
    MOV EAX,0x1                         ; 0040466c
    JL 0x00404678                       ; 00404671
        ;   XREF to: 00404678 (CONDITIONAL_JUMP)  ; LAB_00404678
    MOV EAX,0x0                         ; 00404673
    POP ESI                             ; 00404678
        ;   Label: LAB_00404678
    POP EBX                             ; 00404679
    RET                                 ; 0040467a

