; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00428220(CCameraView *this_ptr)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0 at 0044caa5
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_00428240_005fd414 = 00428240
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428220
        ;   Label: core_camview.cpp_CCameraView_ctor_FUN_00428220
    MOV dword ptr [EAX + 0x38],0x41e00000 ; 00428224
    MOV dword ptr [EAX],0x43800000      ; 0042822b
    MOV dword ptr [EAX + 0x3c],0x5fd414 ; 00428231 | PTR_core_camview.cpp_CCameraView_dtor_FUN_00428240_005fd414
    RET                                 ; 00428238

