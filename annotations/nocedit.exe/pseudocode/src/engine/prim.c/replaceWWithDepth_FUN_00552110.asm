; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[11]:
;   core_course.cpp_FUN_004436d0 at 00443732
;   core_course.cpp_FUN_00443760 at 00443b8d
;   core_flies.cpp_FUN_004cc300 at 004cc6b0
;   engine_3d.c_rasterizePolygon_FUN_005fd4e0 at 005fd7c7
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 at 005fd2e7
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 at 0048cda2
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50 at 0048dc99
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 at 00483d67
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553d4f
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 00552774
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552110
        ;   Label: engine_prim.c_replaceWWithDepth_FUN_00552110
    MOV EBX,dword ptr [ESP + 0xc]       ; 00552111
    XOR EDX,EDX                         ; 00552115
    TEST EBX,EBX                        ; 00552117
    JLE 0x00552135                      ; 00552119
        ;   XREF to: 00552135 (CONDITIONAL_JUMP)  ; LAB_00552135
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055211b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0055211f
        ;   Label: LAB_0055211f
    TEST ECX,ECX                        ; 00552122
    JNZ 0x00552137                      ; 00552124
        ;   XREF to: 00552137 (CONDITIONAL_JUMP)  ; LAB_00552137
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 00552126
    INC EDX                             ; 0055212d
    ADD EAX,0x30                        ; 0055212e
    CMP EDX,EBX                         ; 00552131
    JL 0x0055211f                       ; 00552133
        ;   XREF to: 0055211f (CONDITIONAL_JUMP)  ; LAB_0055211f
    POP EBX                             ; 00552135
        ;   Label: LAB_00552135
    RET                                 ; 00552136
    MOV ECX,dword ptr [EAX + 0xc]       ; 00552137
        ;   Label: LAB_00552137
    MOV dword ptr [EAX + 0x8],ECX       ; 0055213a
    INC EDX                             ; 0055213d
    ADD EAX,0x30                        ; 0055213e
    CMP EDX,EBX                         ; 00552141
    JL 0x0055211f                       ; 00552143
        ;   XREF to: 0055211f (CONDITIONAL_JUMP)  ; LAB_0055211f
    POP EBX                             ; 00552145
    RET                                 ; 00552146

