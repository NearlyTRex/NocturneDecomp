; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_004254b0(CCameraView *this_ptr)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0 at 00448be5
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_004254d0_005dcef4 = 004254d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004254b0
        ;   Label: core_camview.cpp_CCameraView_ctor_FUN_004254b0
    MOV dword ptr [EAX + 0x38],0x41e00000 ; 004254b4
    MOV dword ptr [EAX],0x43800000      ; 004254bb
    MOV dword ptr [EAX + 0x3c],0x5dcef4 ; 004254c1 | PTR_core_camview.cpp_CCameraView_dtor_FUN_004254d0_005dcef4
    RET                                 ; 004254c8

