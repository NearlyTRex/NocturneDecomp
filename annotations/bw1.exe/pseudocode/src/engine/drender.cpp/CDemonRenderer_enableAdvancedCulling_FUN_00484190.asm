; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(CDemonRenderer *this_ptr,int enabled)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enabled
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 005106d8
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 at 005555d9
;   core_set.cpp_FUN_00555460 at 0055554a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00484190
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190
    MOV EAX,dword ptr [ESP + 0x8]       ; 00484194
    MOV dword ptr [EDX + 0x18],EAX      ; 00484198
    RET                                 ; 0048419b

