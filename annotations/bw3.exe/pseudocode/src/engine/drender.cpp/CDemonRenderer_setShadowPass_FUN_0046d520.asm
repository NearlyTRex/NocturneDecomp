; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(CDemonRenderer *this_ptr,int value)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[9]:
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0045c8f0 at 0045c9a9
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c6a2
;   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0045c9e0 at 0045ca22
;   core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 at 0045c853
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940 at 004ca9bd
;   core_kedward.cpp_CKedward_renderTransparent_FUN_00591680 at 0059178b
;   core_setdir.cpp_FUN_0053f940 at 0053f9ef
;   core_setdir.cpp_FUN_00540cf0 at 00540d13
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 at 0046b5d6
;
; Referenced Globals:
;   undefined4 DAT_007303f4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d520
        ;   Label: engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046d520
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d524
    MOV [0x007303f4],EAX                ; 0046d528 | DAT_007303f4
    MOV dword ptr [EDX + 0x4],EAX       ; 0046d52d
    RET                                 ; 0046d530

