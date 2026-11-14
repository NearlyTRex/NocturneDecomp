; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f1948
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 at 00534329
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0 at 0053429a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046bc90
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046bc94
    MOV dword ptr [EDX + 0x18],EAX      ; 0046bc98
    RET                                 ; 0046bc9b

