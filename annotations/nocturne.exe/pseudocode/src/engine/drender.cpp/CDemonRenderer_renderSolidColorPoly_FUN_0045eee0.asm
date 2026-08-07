; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; XREF[7]:
;   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00468d00 at 00469126
;   core_dtri.cpp_CDemonTriangle_render_FUN_0046e9f0 at 0046eb2d
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0 at 0050e04f
;   core_setdir.cpp_CDemonSet_FUN_005125a0 at 0051329d
;   core_setdir.cpp_FUN_00511d80 at 00512326
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_00518510 at 00518ca1
;   core_water.cpp_CWater_render_FUN_00550cb0 at 0055117b
;
; Referenced Globals:
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   MainScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_VertexPreprocessMode
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0045eee0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_0045eee0
    PUSH EDI                            ; 0045eee1
    PUSH EBP                            ; 0045eee2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0045eee3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0045eee7
    CMP dword ptr [EDI + 0xc],0x0       ; 0045eeeb
    JNZ 0x0045ef56                      ; 0045eeef
        ;   XREF to: 0045ef56 (CONDITIONAL_JUMP)  ; LAB_0045ef56
    PUSH EBX                            ; 0045eef1
        ;   Label: LAB_0045eef1
    MOV ECX,dword ptr [ESI + 0x4]       ; 0045eef2
    XOR EDX,EDX                         ; 0045eef5
    TEST ECX,ECX                        ; 0045eef7
    JLE 0x0045ef20                      ; 0045eef9
        ;   XREF to: 0045ef20 (CONDITIONAL_JUMP)  ; LAB_0045ef20
    MOV EAX,ESI                         ; 0045eefb
    XOR ECX,ECX                         ; 0045eefd
    ADD ECX,0x4                         ; 0045eeff
        ;   Label: LAB_0045eeff
    MOV EBX,dword ptr [EAX + 0x18]      ; 0045ef02
    MOV dword ptr [ECX + 0x1b4d768],EBX ; 0045ef05 | DAT_01b4d76c | DAT_01b4d770
    INC EDX                             ; 0045ef0b
    MOV EBX,dword ptr [ESI + 0x4]       ; 0045ef0c
    ADD EAX,0xc                         ; 0045ef0f
    CMP EDX,EBX                         ; 0045ef12
    JL 0x0045eeff                       ; 0045ef14
        ;   XREF to: 0045eeff (CONDITIONAL_JUMP)  ; LAB_0045eeff
    LEA EAX,[EAX]                       ; 0045ef16
    LEA EDX,[EDX]                       ; 0045ef1c
    CMP dword ptr [EDI + 0x4],0x0       ; 0045ef20
        ;   Label: LAB_0045ef20
    JZ 0x0045ef68                       ; 0045ef24
        ;   XREF to: 0045ef68 (CONDITIONAL_JUMP)  ; LAB_0045ef68
    XOR EBP,EBP                         ; 0045ef26
    MOV EBX,0x463a79                    ; 0045ef28
    MOV dword ptr [0x01c039a0],EBP      ; 0045ef2d | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],EBP      ; 0045ef33 | g_VertexPreprocessMode
    MOV dword ptr [0x01c00c7c],EBX      ; 0045ef39 | g_ScanlineRenderFunc
    PUSH 0x1b4d76c                      ; 0045ef3f | DAT_01b4d76c
        ;   Label: LAB_0045ef3f
    MOV EDX,dword ptr [ESI + 0x4]       ; 0045ef44
    PUSH EDX                            ; 0045ef47
    PUSH EDI                            ; 0045ef48
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045ef49
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045ef4e
    POP EBX                             ; 0045ef51
    POP EBP                             ; 0045ef52
        ;   Label: LAB_0045ef52
    POP EDI                             ; 0045ef53
    POP ESI                             ; 0045ef54
    RET                                 ; 0045ef55
    LEA EAX,[ESI + 0x8]                 ; 0045ef56
        ;   Label: LAB_0045ef56
    PUSH EAX                            ; 0045ef59
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045ef5a
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045ef5f
    TEST EAX,EAX                        ; 0045ef62
    JZ 0x0045ef52                       ; 0045ef64
        ;   XREF to: 0045ef52 (CONDITIONAL_JUMP)  ; LAB_0045ef52
    JMP 0x0045eef1                      ; 0045ef66
        ;   XREF to: 0045eef1 (UNCONDITIONAL_JUMP)  ; LAB_0045eef1
    MOV EDX,0xc0                        ; 0045ef68
        ;   Label: LAB_0045ef68
    MOV ECX,0x6                         ; 0045ef6d
    MOV EAX,0x463d98                    ; 0045ef72
    MOV dword ptr [0x01c039a0],EDX      ; 0045ef77 | g_RenderStateFlags
    MOV dword ptr [0x01c039a4],ECX      ; 0045ef7d | g_VertexPreprocessMode
    MOV [0x01c00c7c],EAX                ; 0045ef83 | g_ScanlineRenderFunc
    JMP 0x0045ef3f                      ; 0045ef88
        ;   XREF to: 0045ef3f (UNCONDITIONAL_JUMP)  ; LAB_0045ef3f

