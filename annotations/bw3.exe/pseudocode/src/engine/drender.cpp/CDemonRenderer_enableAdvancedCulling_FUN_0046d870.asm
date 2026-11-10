; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[2]:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 at 0053af69
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053aeda
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d870
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d874
    MOV dword ptr [EDX + 0x18],EAX      ; 0046d878
    RET                                 ; 0046d87b

