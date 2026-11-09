; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer *this_ptr,int render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_alpha
;
; XREF[47]:
;   core_baron.cpp_FUN_004101f0 at 00410345
;   core_bodypart.cpp_FUN_00419280 at 004192db
;   core_boneguy.cpp_FUN_0041d000 at 0041d086
;   core_boxactor.cpp_FUN_00422600 at 00422692
;   core_bugs.cpp_FUN_00425480 at 004255cc
;   core_chain.cpp_FUN_00436600 at 004366fc
;   core_charactr.cpp_FUN_0042ea10 at 0042eb16
;   core_charactr.cpp_FUN_00430060 at 0043008d
;   core_cloth.cpp_CCloth_render_FUN_00441800 at 00441848
;   core_curtain.cpp_CCurtain_renderMesh_FUN_0044bf20 at 0044bfb0
;   ... and 37 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00483de0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
    PUSH EDX                            ; 00483de4
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00483de5
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00483dea
    RET                                 ; 00483ded

