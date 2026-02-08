; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; int              Stack[0xc]:4   render_flags
;
; XREF[10]:
;   core_box.cpp_CBoundingBox3D_render_FUN_004210b0 at 00421463
;   core_charactr.cpp_CCharacter_FUN_00429b40 at 00429e6a
;   core_fire.cpp_CExplosion_render_FUN_004c3b10 at 004c3e5d
;   core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970 at 004ef981
;   core_inv.cpp_drawItemIconBackground_FUN_005001e0 at 00500318
;   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 at 00500188
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 00504558
;   core_marquee.cpp_CMarquee_FUN_0050bec0 at 0050c037
;   core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70 at 0050ffc7
;   core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0 at 005e050d
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ae10
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
    PUSH ESI                            ; 0048ae11
    PUSH EDI                            ; 0048ae12
    PUSH EBP                            ; 0048ae13
    MOV EBX,dword ptr [ESP + 0x14]      ; 0048ae14
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048ae18
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048ae1c
    CMP ESI,-0x1                        ; 0048ae20
    JNZ 0x0048ae2a                      ; 0048ae23
        ;   XREF to: 0048ae2a (CONDITIONAL_JUMP)  ; LAB_0048ae2a
    MOV ESI,0x2cd                       ; 0048ae25
    CMP dword ptr [EBX + 0xc],0x0       ; 0048ae2a
        ;   Label: LAB_0048ae2a
    JNZ 0x0048ae65                      ; 0048ae2e
        ;   XREF to: 0048ae65 (CONDITIONAL_JUMP)  ; LAB_0048ae65
    CMP dword ptr [EBX + 0x4],0x0       ; 0048ae30
        ;   Label: LAB_0048ae30
    JZ 0x0048ae77                       ; 0048ae34
        ;   XREF to: 0048ae77 (CONDITIONAL_JUMP)  ; LAB_0048ae77
    XOR EBP,EBP                         ; 0048ae36
    MOV ESI,0x49072f                    ; 0048ae38
    MOV dword ptr [0x02d052a0],EBP      ; 0048ae3d | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EBP      ; 0048ae43 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],ESI      ; 0048ae49 | g_ScanlineRenderFunc
    LEA EAX,[EDI + 0x18]                ; 0048ae4f
        ;   Label: LAB_0048ae4f
    PUSH EAX                            ; 0048ae52
    MOV EDX,dword ptr [EDI + 0x4]       ; 0048ae53
    PUSH EDX                            ; 0048ae56
    PUSH EBX                            ; 0048ae57
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048ae58
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048ae5d
    POP EBP                             ; 0048ae60
        ;   Label: LAB_0048ae60
    POP EDI                             ; 0048ae61
    POP ESI                             ; 0048ae62
    POP EBX                             ; 0048ae63
    RET                                 ; 0048ae64
    LEA EAX,[EDI + 0x8]                 ; 0048ae65
        ;   Label: LAB_0048ae65
    PUSH EAX                            ; 0048ae68
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048ae69
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048ae6e
    TEST EAX,EAX                        ; 0048ae71
    JZ 0x0048ae60                       ; 0048ae73
        ;   XREF to: 0048ae60 (CONDITIONAL_JUMP)  ; LAB_0048ae60
    JMP 0x0048ae30                      ; 0048ae75
        ;   XREF to: 0048ae30 (UNCONDITIONAL_JUMP)  ; LAB_0048ae30
    CMP dword ptr [0x0067939c],0x20     ; 0048ae77 | g_BitsPerPixel
        ;   Label: LAB_0048ae77
    JNZ 0x0048ae9d                      ; 0048ae7e
        ;   XREF to: 0048ae9d (CONDITIONAL_JUMP)  ; LAB_0048ae9d
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048ae80 | g_ScanlineRenderFunc
    MOV ECX,0x6                         ; 0048ae8a
        ;   Label: LAB_0048ae8a
    MOV dword ptr [0x02d052a0],ESI      ; 0048ae8f | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048ae95 | g_RenderStateFlag2
    JMP 0x0048ae4f                      ; 0048ae9b
        ;   XREF to: 0048ae4f (UNCONDITIONAL_JUMP)  ; LAB_0048ae4f
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048ae9d | g_ScanlineRenderFunc
        ;   Label: LAB_0048ae9d
    JMP 0x0048ae8a                      ; 0048aea7
        ;   XREF to: 0048ae8a (UNCONDITIONAL_JUMP)  ; LAB_0048ae8a

