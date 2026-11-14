; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer *this_ptr,int value)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[8]:
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044a3e0 at 0044a499
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a192
;   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_0044a4d0 at 0044a512
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 at 0044a343
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640 at 004c56bd
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 00538522
;   core_setdir.cpp_FUN_00538d10 at 00538dbf
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 at 004699f6
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b940
        ;   Label: engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046b944
    MOV [0x0070ca74],EAX                ; 0046b948 | DAT_0070ca74
    MOV dword ptr [EDX + 0x4],EAX       ; 0046b94d
    RET                                 ; 0046b950

