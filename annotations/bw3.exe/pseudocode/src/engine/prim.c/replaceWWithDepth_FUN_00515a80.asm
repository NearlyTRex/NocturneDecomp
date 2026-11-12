; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_replaceWWithDepth_FUN_00515a80(SRenderVertex *vertices,int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[9]:
;   core_asgaya.cpp_FUN_005a1ea0 at 005a21c7
;   core_asgaya.cpp_rasterizePolygonCustom_FUN_005a23c0 at 005a26a7
;   core_dpart.cpp_FUN_004673d0 at 00467747
;   core_flies.cpp_CFlies_renderOpaque_FUN_004addd0 at 004ae1bb
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046d550 at 0046d802
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0 at 0046e6f9
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480 at 005176bf
;   engine_prim.c_renderPolygonSoftware_FUN_00515e80 at 005160e4
;   engine_prim.c_renderScanlinePolygon_FUN_00516de0 at 0051713f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515a80
        ;   Label: engine_prim.c_replaceWWithDepth_FUN_00515a80
    MOV EBX,dword ptr [ESP + 0xc]       ; 00515a81
    XOR EDX,EDX                         ; 00515a85
    TEST EBX,EBX                        ; 00515a87
    JLE 0x00515aa5                      ; 00515a89
        ;   XREF to: 00515aa5 (CONDITIONAL_JUMP)  ; LAB_00515aa5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00515a8b
    MOV ECX,dword ptr [EAX + 0x8]       ; 00515a8f
        ;   Label: LAB_00515a8f
    TEST ECX,ECX                        ; 00515a92
    JNZ 0x00515aa7                      ; 00515a94
        ;   XREF to: 00515aa7 (CONDITIONAL_JUMP)  ; LAB_00515aa7
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 00515a96
    INC EDX                             ; 00515a9d
    ADD EAX,0x30                        ; 00515a9e
    CMP EDX,EBX                         ; 00515aa1
    JL 0x00515a8f                       ; 00515aa3
        ;   XREF to: 00515a8f (CONDITIONAL_JUMP)  ; LAB_00515a8f
    POP EBX                             ; 00515aa5
        ;   Label: LAB_00515aa5
    RET                                 ; 00515aa6
    MOV ECX,dword ptr [EAX + 0xc]       ; 00515aa7
        ;   Label: LAB_00515aa7
    MOV dword ptr [EAX + 0x8],ECX       ; 00515aaa
    INC EDX                             ; 00515aad
    ADD EAX,0x30                        ; 00515aae
    CMP EDX,EBX                         ; 00515ab1
    JL 0x00515a8f                       ; 00515ab3
        ;   XREF to: 00515a8f (CONDITIONAL_JUMP)  ; LAB_00515a8f
    POP EBX                             ; 00515ab5
    RET                                 ; 00515ab6

