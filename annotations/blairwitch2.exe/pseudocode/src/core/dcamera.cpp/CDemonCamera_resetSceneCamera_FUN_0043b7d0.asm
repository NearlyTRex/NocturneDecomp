; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0043bf50 at 0043bff0
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044a2d0 at 0044a391
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0043b7d0
        ;   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0043b7d0
    MOV dword ptr [0x0083c7d0],EDX      ; 0043b7d2 | g_SkipClearBuffersSceneCamera
    MOV dword ptr [0x007bda74],EDX      ; 0043b7d8 | g_CurrentSceneCamera
    RET                                 ; 0043b7de

