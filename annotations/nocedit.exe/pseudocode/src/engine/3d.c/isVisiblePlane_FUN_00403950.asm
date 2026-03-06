; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_isVisiblePlane_FUN_00403950(SClipPlane *plane)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   plane
;
; XREF[85]:
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 00482935
;   engine_3d.c_addFaceIfVisible_FUN_004079c0 at 004079c8
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407be0
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessingWithUV_FUN_00407720 at 00407730
;   engine_3d.c_renderPolygonAPIAdaptivePreprocessing_FUN_00407620 at 0040762c
;   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 at 00404af5
;   engine_3d.c_renderPolygonDepthWriteTexturedAdvanced_FUN_00405e20 at 00405e2e
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00405d80 at 00405d8e
;   engine_3d.c_renderPolygonDepthWriteTexturedLit_FUN_00406000 at 0040600e
;   engine_3d.c_renderPolygonDepthWriteTextured_FUN_00405960 at 0040596e
;   ... and 75 more
;
; Referenced Globals:
;   int g_PlaneTestCount
;   int g_CullingMode
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403950
        ;   Label: engine_3d.c_isVisiblePlane_FUN_00403950
    PUSH ESI                            ; 00403951
    MOV EDX,dword ptr [0x00772a68]      ; 00403952 | g_PlaneTestCount
    INC EDX                             ; 00403958
    MOV ESI,dword ptr [ESP + 0xc]       ; 00403959
    MOV dword ptr [0x00772a68],EDX      ; 0040395d | g_PlaneTestCount
    MOV EAX,0x1                         ; 00403963
    CMP dword ptr [0x00772a7c],0x0      ; 00403968 | g_CullingMode
    JNZ 0x004039b8                      ; 0040396f
        ;   XREF to: 004039b8 (CONDITIONAL_JUMP)  ; LAB_004039b8
    MOV EBX,dword ptr [ESI]             ; 00403971
    OR EBX,dword ptr [ESI + 0x4]        ; 00403973
    OR EBX,dword ptr [ESI + 0x8]        ; 00403976
    OR EBX,dword ptr [ESI + 0xc]        ; 00403979
    JZ 0x004039b8                       ; 0040397c
        ;   XREF to: 004039b8 (CONDITIONAL_JUMP)  ; LAB_004039b8
    MOV EAX,dword ptr [ESI]             ; 0040397e
    IMUL dword ptr [0x02d052b8]         ; 00403980 | g_RelativeX
    MOV EBX,EAX                         ; 00403986
    MOV ECX,EDX                         ; 00403988
    MOV EAX,dword ptr [ESI + 0x4]       ; 0040398a
    IMUL dword ptr [0x02d052bc]         ; 0040398d | g_RelativeY
    ADD EBX,EAX                         ; 00403993
    ADC ECX,EDX                         ; 00403995
    MOV EAX,dword ptr [ESI + 0x8]       ; 00403997
    IMUL dword ptr [0x02d052c0]         ; 0040399a | g_RelativeZ
    ADD EBX,EAX                         ; 004039a0
    ADC ECX,EDX                         ; 004039a2
    MOV EAX,dword ptr [ESI + 0xc]       ; 004039a4
    CDQ                                 ; 004039a7
    SUB EAX,EBX                         ; 004039a8
    SBB EDX,ECX                         ; 004039aa
    MOV EAX,0x1                         ; 004039ac
    JL 0x004039b8                       ; 004039b1
        ;   XREF to: 004039b8 (CONDITIONAL_JUMP)  ; LAB_004039b8
    MOV EAX,0x0                         ; 004039b3
    POP ESI                             ; 004039b8
        ;   Label: LAB_004039b8
    POP EBX                             ; 004039b9
    RET                                 ; 004039ba

