; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004b1df0(CGround *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 at 004b1f4c
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004b1df0
        ;   Label: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004b1df0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b1df5
    PUSH EDX                            ; 004b1df9
    MOV ECX,dword ptr [0x005ae704]      ; 004b1dfa | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 004b1e00 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0 ; 004b1e01
        ;   XREF to: 0045f3c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004b1e06
    RET                                 ; 004b1e09

