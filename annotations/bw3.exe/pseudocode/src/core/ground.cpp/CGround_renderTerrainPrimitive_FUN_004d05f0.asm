; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderTerrainPrimitive_FUN_004d05f0(CGround *this_ptr,SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   primitive
;
; XREF[1]:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 at 004d074c
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;
; *****************************************************************************

section .text

    PUSH 0x24d                          ; 004d05f0
        ;   Label: core_ground.cpp_CGround_renderTerrainPrimitive_FUN_004d05f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d05f5
    PUSH EDX                            ; 004d05f9
    MOV ECX,dword ptr [0x005f2afc]      ; 004d05fa | DAT_005f2afc
    PUSH ECX                            ; 004d0600 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 004d0601
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004d0606
    RET                                 ; 004d0609

