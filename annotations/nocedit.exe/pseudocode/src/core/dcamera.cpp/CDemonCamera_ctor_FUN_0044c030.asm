; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0 at 004726a5
;   core_set.cpp_staticInit_FUN_00569040 at 0056905f
;
; Referenced Globals:
;   CCameraView_vtable g_CDemonCameraVTable
;
; Called Functions:
;   core_camview.cpp_CCameraView_ctor_FUN_00427ce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044c030
        ;   Label: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
    PUSH EDX                            ; 0044c034
    CALL core_camview.cpp_CCameraView_ctor_FUN_00427ce0 ; 0044c035
        ;   XREF to: 00427ce0 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_ctor_FUN_00427ce0(CCameraView * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x65c664 ; 0044c03a | g_CDemonCameraVTable
    MOV dword ptr [EAX + 0x158],0x0     ; 0044c041
    MOV dword ptr [EAX + 0x160],0x0     ; 0044c04b
    MOV dword ptr [EAX + 0x15c],0x0     ; 0044c055
    MOV dword ptr [EAX + 0x164],0x0     ; 0044c05f
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0044c069
    MOV dword ptr [EAX + 0x11e4],0x0    ; 0044c073
    ADD ESP,0x4                         ; 0044c07d
    MOV dword ptr [EAX + 0x140],0x4479f99a ; 0044c080
    RET                                 ; 0044c08a

