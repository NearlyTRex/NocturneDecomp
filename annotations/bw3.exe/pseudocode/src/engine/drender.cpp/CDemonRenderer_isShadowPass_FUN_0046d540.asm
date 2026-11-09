; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[53]:
;   core_bodypart.cpp_CBodyPart_renderGeometry_FUN_00414a60 at 00414ace
;   core_bodypart.cpp_FUN_00414bd0 at 00414d23
;   core_bodypart.cpp_FUN_00414d40 at 00414e78
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00418f60 at 00418f67
;   core_box.cpp_FUN_0041daf0 at 0041db27
;   core_box.cpp_FUN_0041e9b0 at 0041eacf
;   core_boxactor.cpp_FUN_0041f8e0 at 0041f912
;   core_bugs.cpp_FUN_004215f0 at 0042160f
;   core_chain.cpp_FUN_0042a280 at 0042a291
;   core_charactr.cpp_FUN_0042d500 at 0042d512
;   ... and 43 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d540
        ;   Label: engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
    MOV EAX,dword ptr [EAX + 0x4]       ; 0046d544
    RET                                 ; 0046d547

