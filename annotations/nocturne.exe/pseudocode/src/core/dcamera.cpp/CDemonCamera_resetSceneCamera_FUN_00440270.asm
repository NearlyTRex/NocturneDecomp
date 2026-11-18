; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00440270(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 at 00440ad0
;   core_dlight.cpp_CDemonLight_endScene_FUN_0044e720 at 0044e7e1
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00440270
        ;   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00440270
    MOV dword ptr [0x007f7374],EDX      ; 00440272 | g_SkipClearBuffersSceneCamera
    MOV dword ptr [0x007f7370],EDX      ; 00440278 | g_CurrentSceneCamera
    RET                                 ; 0044027e

