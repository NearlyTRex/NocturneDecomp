; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer *this_ptr,int value)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[8]:
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00462be0 at 00462c99
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 00462992
;   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00462cd0 at 00462d12
;   core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 at 00462b43
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e1db0 at 004e1e2d
;   core_setdir.cpp_FUN_00559f80 at 0055a02f
;   core_setdir.cpp_FUN_0055b330 at 0055b353
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0 at 00481f06
;
; Referenced Globals:
;   undefined4 DAT_00713a74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00483e40
        ;   Label: engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
    MOV EDX,dword ptr [ESP + 0x4]       ; 00483e44
    MOV [0x00713a74],EAX                ; 00483e48 | DAT_00713a74
    MOV dword ptr [EDX + 0x4],EAX       ; 00483e4d
    RET                                 ; 00483e50

