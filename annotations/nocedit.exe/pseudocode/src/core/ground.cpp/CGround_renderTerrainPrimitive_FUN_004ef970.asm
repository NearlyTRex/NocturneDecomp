; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004ef970(CGround *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 at 004efb2a
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004ef970
        ;   Label: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004ef970
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ef975
    PUSH EDX                            ; 004ef979
    MOV ECX,dword ptr [0x006703ec]      ; 004ef97a | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 004ef980 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10 ; 004ef981
        ;   XREF to: 0048ae10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004ef986
    RET                                 ; 004ef989

