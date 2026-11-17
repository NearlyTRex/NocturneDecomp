; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044d610 at 0044d6b0
;   core_dlight.cpp_CDemonLight_endScene_FUN_00462ad0 at 00462b91
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044ce90
        ;   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044ce90
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce92 | g_SkipClearBuffersSceneCamera
    MOV dword ptr [0x007c6120],EDX      ; 0044ce98 | g_CurrentSceneCamera
    RET                                 ; 0044ce9e

