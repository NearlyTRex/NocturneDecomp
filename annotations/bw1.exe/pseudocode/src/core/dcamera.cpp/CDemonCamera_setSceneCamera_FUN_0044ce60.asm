; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0044ce60(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044cff7
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 00462845
;
; Referenced Globals:
;   undefined4 DAT_007c6120
;   undefined4 DAT_00857cd4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044ce60
        ;   Label: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0044ce60
    MOV ECX,dword ptr [ESP + 0x8]       ; 0044ce64
    MOV dword ptr [0x007c6120],EDX      ; 0044ce68 | DAT_007c6120
    TEST ECX,ECX                        ; 0044ce6e
    JZ 0x0044ce79                       ; 0044ce70
        ;   XREF to: 0044ce79 (CONDITIONAL_JUMP)  ; LAB_0044ce79
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce72 | DAT_00857cd4
    RET                                 ; 0044ce78
    XOR EDX,EDX                         ; 0044ce79
        ;   Label: LAB_0044ce79
    MOV dword ptr [0x00857cd4],EDX      ; 0044ce7b | DAT_00857cd4
    RET                                 ; 0044ce81

