; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer *this_ptr,int value)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   value
;
; XREF[8]:
;   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40 at 00472ef9
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472bf2
;   core_dlight.cpp_CDemonLight_endBackgroundScene_FUN_00472f30 at 00472f72
;   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 at 00472da3
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004e9ca0 at 004e9d07
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 00575637
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 at 00574ae0
;   engine_drender.cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50 at 0048aba6
;
; Referenced Globals:
;   int g_TexturesDisabled
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048cac0
        ;   Label: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cac4
    MOV [0x00772a74],EAX                ; 0048cac8 | g_TexturesDisabled
    MOV dword ptr [EDX + 0x4],EAX       ; 0048cacd
    RET                                 ; 0048cad0

