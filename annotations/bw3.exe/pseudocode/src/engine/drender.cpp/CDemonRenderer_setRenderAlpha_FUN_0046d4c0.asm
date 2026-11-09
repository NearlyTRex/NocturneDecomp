; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer *this_ptr,int render_alpha)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_alpha
;
; XREF[51]:
;   core_asgaya.cpp_FUN_005a17e0 at 005a18d3
;   core_baal.cpp_FUN_00597970 at 00597a77
;   core_bodypart.cpp_FUN_00414e90 at 00414eeb
;   core_boneguy.cpp_FUN_00418f90 at 00419016
;   core_boxactor.cpp_FUN_0041f9f0 at 0041faac
;   core_bugs.cpp_FUN_004215f0 at 0042173c
;   core_chain.cpp_FUN_0042a280 at 0042a37c
;   core_charactr.cpp_FUN_0042d9f0 at 0042daf6
;   core_charactr.cpp_FUN_0042f310 at 0042f33e
;   core_cloth.cpp_CCloth_render_FUN_0043f460 at 0043f4a8
;   ... and 41 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d4c0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
    PUSH EDX                            ; 0046d4c4
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 0046d4c5
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 0046d4ca
    RET                                 ; 0046d4cd

