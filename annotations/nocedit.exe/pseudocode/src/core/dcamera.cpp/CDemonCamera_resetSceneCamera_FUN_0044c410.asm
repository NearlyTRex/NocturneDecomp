; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera * this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 at 0044cc20
;   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 at 00472df1
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044c410
        ;   Label: core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
    MOV dword ptr [0x00902f70],EDX      ; 0044c412 | CDemonCamera * g_SkipClearBuffersSceneCamera
    MOV dword ptr [0x00823a74],EDX      ; 0044c418 | CDemonCamera * g_CurrentSceneCamera
    RET                                 ; 0044c41e

