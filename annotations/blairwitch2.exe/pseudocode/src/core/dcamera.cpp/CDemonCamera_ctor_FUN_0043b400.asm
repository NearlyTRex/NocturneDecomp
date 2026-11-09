; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0043b400(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_ctor_FUN_00449c70 at 00449c75
;   core_set.cpp_staticInit_FUN_0052bbe0 at 0052bbff
;
; Referenced Globals:
;   undefined1* g_CDemonCameraVTable = 0043b460
;
; Called Functions:
;   core_camview.cpp_CCameraView_ctor_FUN_00422200
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b400
        ;   Label: core_dcamera.cpp_CDemonCamera_ctor_FUN_0043b400
    PUSH EDX                            ; 0043b404
    CALL core_camview.cpp_CCameraView_ctor_FUN_00422200 ; 0043b405
        ;   XREF to: 00422200 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_ctor_FUN_00422200(CCameraView * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x5f4df4 ; 0043b40a | g_CDemonCameraVTable
    MOV dword ptr [EAX + 0x158],0x0     ; 0043b411
    MOV dword ptr [EAX + 0x160],0x0     ; 0043b41b
    MOV dword ptr [EAX + 0x15c],0x0     ; 0043b425
    MOV dword ptr [EAX + 0x164],0x0     ; 0043b42f
    MOV dword ptr [EAX + 0x11e8],0x0    ; 0043b439
    MOV dword ptr [EAX + 0x11e4],0x0    ; 0043b443
    ADD ESP,0x4                         ; 0043b44d
    MOV dword ptr [EAX + 0x140],0x4479f99a ; 0043b450
    RET                                 ; 0043b45a

