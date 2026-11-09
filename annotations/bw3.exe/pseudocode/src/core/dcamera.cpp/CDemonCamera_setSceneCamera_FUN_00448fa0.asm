; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00448fa0(CDemonCamera *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 00449137
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0045c530 at 0045c555
;
; Referenced Globals:
;   undefined4 DAT_007e2a54
;   undefined4 DAT_00874584
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00448fa0
        ;   Label: core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_00448fa0
    MOV ECX,dword ptr [ESP + 0x8]       ; 00448fa4
    MOV dword ptr [0x007e2a54],EDX      ; 00448fa8 | DAT_007e2a54
    TEST ECX,ECX                        ; 00448fae
    JZ 0x00448fb9                       ; 00448fb0
        ;   XREF to: 00448fb9 (CONDITIONAL_JUMP)  ; LAB_00448fb9
    MOV dword ptr [0x00874584],EDX      ; 00448fb2 | DAT_00874584
    RET                                 ; 00448fb8
    XOR EDX,EDX                         ; 00448fb9
        ;   Label: LAB_00448fb9
    MOV dword ptr [0x00874584],EDX      ; 00448fbb | DAT_00874584
    RET                                 ; 00448fc1

