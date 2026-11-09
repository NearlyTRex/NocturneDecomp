; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00422200(CCameraView *this_ptr)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0043b400 at 0043b405
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_00422220_005f4024 = 00422220
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00422200
        ;   Label: core_camview.cpp_CCameraView_ctor_FUN_00422200
    MOV dword ptr [EAX + 0x38],0x41e00000 ; 00422204
    MOV dword ptr [EAX],0x43800000      ; 0042220b
    MOV dword ptr [EAX + 0x3c],0x5f4024 ; 00422211 | PTR_core_camview.cpp_CCameraView_dtor_FUN_00422220_005f4024
    RET                                 ; 00422218

