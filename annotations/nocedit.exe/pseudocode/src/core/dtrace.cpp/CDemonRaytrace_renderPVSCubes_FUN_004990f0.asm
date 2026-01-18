; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 at 00498790
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   int g_PVSDrawnCubeCount
;   CDemonCube*[20000] g_PVSCubePointers
;   CVector3f[20000] g_PVSCubePositions
;   undefined4 DAT_02cb3c38
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
;   wincore_windll.cpp_sync_FUN_005b7bc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004990f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0
    PUSH EBP                            ; 004990f1
    PUSH 0xff                           ; 004990f2
    PUSH 0xff                           ; 004990f7
    PUSH 0xff                           ; 004990fc
    MOV EDX,dword ptr [0x006703e8]      ; 00499101 | g_CDemonRendererInstance | g_CDemonRendererPtr1
    PUSH EDX                            ; 00499107 | g_CDemonRendererInstance
    XOR ESI,ESI                         ; 00499108
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 ; 0049910a
        ;   XREF to: 0048c970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV ECX,dword ptr [0x02ca03a4]      ; 0049910f | g_PVSDrawnCubeCount
    ADD ESP,0x10                        ; 00499115
    TEST ECX,ECX                        ; 00499118
    JLE 0x0049915e                      ; 0049911a
        ;   XREF to: 0049915e (CONDITIONAL_JUMP)  ; LAB_0049915e
    PUSH EDI                            ; 0049911c
    PUSH EBX                            ; 0049911d
    MOV EBX,0x2cb3c2c                   ; 0049911e | g_PVSCubePositions
    XOR EDI,EDI                         ; 00499123
    PUSH EBX                            ; 00499125 | g_PVSCubePositions | DAT_02cb3c38
        ;   Label: LAB_00499125
    MOV EBP,dword ptr [0x006703e8]      ; 00499126 | g_CDemonRendererPtr1
    PUSH EBP                            ; 0049912c | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 ; 0049912d
        ;   XREF to: 0048c450 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00499132
    PUSH 0x0                            ; 00499135
    MOV EAX,dword ptr [EDI + 0x2ca03ac] ; 00499137 | g_PVSCubePointers
    PUSH EAX                            ; 0049913d
    CALL core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 ; 0049913e
        ;   XREF to: 00457650 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650(CDemonCube * this_ptr, uint rendering_mode)
    ADD ESP,0x8                         ; 00499143
    ADD EDI,0x4                         ; 00499146
    INC ESI                             ; 00499149
    CALL wincore_windll.cpp_sync_FUN_005b7bc0 ; 0049914a
        ;   XREF to: 005b7bc0 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_sync_FUN_005b7bc0()
    MOV EDX,dword ptr [0x02ca03a4]      ; 0049914f | g_PVSDrawnCubeCount
    ADD EBX,0xc                         ; 00499155 | DAT_02cb3c38
    CMP ESI,EDX                         ; 00499158
    JL 0x00499125                       ; 0049915a
        ;   XREF to: 00499125 (CONDITIONAL_JUMP)  ; LAB_00499125
    POP EBX                             ; 0049915c
    POP EDI                             ; 0049915d
    POP EBP                             ; 0049915e
        ;   Label: LAB_0049915e
    POP ESI                             ; 0049915f
    RET                                 ; 00499160

