; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5909
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 at 0050e1d9
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0050e080 at 0050e14a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004613c0
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004613c4
    MOV dword ptr [EDX + 0x18],EAX      ; 004613c8
    RET                                 ; 004613cb

