; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043b937
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a045
;
; Referenced Globals:
;   undefined4 DAT_007bda74
;   undefined4 DAT_0083c7d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b7a0
        ;   Label: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043b7a4
    MOV dword ptr [0x007bda74],EDX      ; 0043b7a8 | DAT_007bda74
    TEST ECX,ECX                        ; 0043b7ae
    JZ 0x0043b7b9                       ; 0043b7b0
        ;   XREF to: 0043b7b9 (CONDITIONAL_JUMP)  ; LAB_0043b7b9
    MOV dword ptr [0x0083c7d0],EDX      ; 0043b7b2 | DAT_0083c7d0
    RET                                 ; 0043b7b8
    XOR EDX,EDX                         ; 0043b7b9
        ;   Label: LAB_0043b7b9
    MOV dword ptr [0x0083c7d0],EDX      ; 0043b7bb | DAT_0083c7d0
    RET                                 ; 0043b7c1

