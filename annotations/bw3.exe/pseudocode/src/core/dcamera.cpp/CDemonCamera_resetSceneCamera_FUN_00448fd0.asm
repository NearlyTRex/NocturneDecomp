; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 at 004497f0
;   core_dlight.cpp_CDemonLight_endScene_FUN_0045c7e0 at 0045c8a1
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00448fd0
        ;   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_00448fd0
    MOV dword ptr [0x00874584],EDX      ; 00448fd2 | g_SkipClearBuffersSceneCamera
    MOV dword ptr [0x007e2a54],EDX      ; 00448fd8 | g_CurrentSceneCamera
    RET                                 ; 00448fde

