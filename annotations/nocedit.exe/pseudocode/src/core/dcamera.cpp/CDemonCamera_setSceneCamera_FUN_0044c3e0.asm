; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0 (CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c577
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472aa5
;
; Referenced Globals:
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonCamera* g_SkipClearBuffersSceneCamera
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044c3e0
        ;   Label: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044c3e0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044c3e4
    MOV dword ptr [0x00823a74],EDX      ; 0044c3e8 | g_CurrentSceneCamera
    TEST ECX,ECX                        ; 0044c3ee
    JZ 0x0044c3f9                       ; 0044c3f0
        ;   XREF to: 0044c3f9 (CONDITIONAL_JUMP)  ; LAB_0044c3f9
    MOV dword ptr [0x00902f70],EDX      ; 0044c3f2 | g_SkipClearBuffersSceneCamera
    RET                                 ; 0044c3f8
    XOR EDX,EDX                         ; 0044c3f9
        ;   Label: LAB_0044c3f9
    MOV dword ptr [0x00902f70],EDX      ; 0044c3fb | g_SkipClearBuffersSceneCamera
    RET                                 ; 0044c401

