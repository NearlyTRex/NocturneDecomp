; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_005205f0 at 00520697
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 at 00570b39
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 00570aaa
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0048ce10
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0048ce10
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048ce14
    MOV dword ptr [EDX + 0x18],EAX      ; 0048ce18
    RET                                 ; 0048ce1b

