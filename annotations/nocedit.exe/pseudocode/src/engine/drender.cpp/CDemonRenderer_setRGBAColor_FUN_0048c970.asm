; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970 (CDemonRenderer *this_ptr,int red_component,int green_component,int blue_component)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   red_component
; int              Stack[0xc]:4   green_component
; int              Stack[0x10]:4   blue_component
;
; XREF[8]:
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 at 004577f8
;   core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00497e50 at 004983ff
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_004990f0 at 0049910a
;   core_flies.cpp_FUN_004cc300 at 004cc5d9
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597523
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_0059abf0 at 0059b347
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d692
;   shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 at 0051eaba
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_RedBitPosition
;   int g_GreenBitPosition
;   int g_BlueBitPosition
;   int g_ActiveRenderColor
;   int g_UseExternalRenderer
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c970
        ;   Label: engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
    PUSH ESI                            ; 0048c971
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048c972
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048c976
    MOV CL,byte ptr [0x02d01f3c]        ; 0048c97a | g_BlueBitPosition
    MOV ESI,EBX                         ; 0048c980
    SHL EDX,CL                          ; 0048c982
    MOV CL,byte ptr [0x02d01f30]        ; 0048c984 | g_GreenBitPosition
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048c98a
    SHL ESI,CL                          ; 0048c98e
    MOV CL,byte ptr [0x02d01f24]        ; 0048c990 | g_RedBitPosition
    SHL EBX,0x8                         ; 0048c996
    SHL EAX,CL                          ; 0048c999
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048c99b
    OR EAX,ESI                          ; 0048c99f
    SHL ECX,0x10                        ; 0048c9a1
    OR EDX,EAX                          ; 0048c9a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048c9a6
    OR ECX,EBX                          ; 0048c9aa
    OR EAX,ECX                          ; 0048c9ac
    CMP dword ptr [0x02d03e94],0x0      ; 0048c9ae | g_UseExternalRenderer
    JNZ 0x0048c9d6                      ; 0048c9b5
        ;   XREF to: 0048c9d6 (CONDITIONAL_JUMP)  ; LAB_0048c9d6
    CMP dword ptr [0x0067939c],0x20     ; 0048c9b7 | g_BitsPerPixel
    JNZ 0x0048c9c2                      ; 0048c9be
        ;   XREF to: 0048c9c2 (CONDITIONAL_JUMP)  ; LAB_0048c9c2
    MOV EAX,EDX                         ; 0048c9c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048c9c2
        ;   Label: LAB_0048c9c2
    MOV ECX,EAX                         ; 0048c9c6
    MOV EDX,dword ptr [EDX + 0x14]      ; 0048c9c8
    OR ECX,EDX                          ; 0048c9cb
    MOV dword ptr [0x02d02570],ECX      ; 0048c9cd | g_ActiveRenderColor
    POP ESI                             ; 0048c9d3
    POP EBX                             ; 0048c9d4
    RET                                 ; 0048c9d5
    CMP dword ptr [0x0067939c],0x20     ; 0048c9d6 | g_BitsPerPixel
        ;   Label: LAB_0048c9d6
    JNZ 0x0048c9e1                      ; 0048c9dd
        ;   XREF to: 0048c9e1 (CONDITIONAL_JUMP)  ; LAB_0048c9e1
    MOV EAX,EDX                         ; 0048c9df
    MOV ECX,EAX                         ; 0048c9e1
        ;   Label: LAB_0048c9e1
    MOV dword ptr [0x02d02570],ECX      ; 0048c9e3 | g_ActiveRenderColor
    POP ESI                             ; 0048c9e9
    POP EBX                             ; 0048c9ea
    RET                                 ; 0048c9eb

