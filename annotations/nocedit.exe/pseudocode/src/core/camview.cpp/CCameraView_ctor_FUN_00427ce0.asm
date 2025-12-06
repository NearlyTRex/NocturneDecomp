; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCameraView * core_camview.cpp_CCameraView_ctor_FUN_00427ce0(CCameraView * this_ptr)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030 at 0044c035
;
; Referenced Globals:
;   CCameraView_vtable g_CCameraViewVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427ce0
        ;   Label: core_camview.cpp_CCameraView_ctor_FUN_00427ce0
    MOV dword ptr [EAX + 0x38],0x41e00000 ; 00427ce4
    MOV dword ptr [EAX],0x43800000      ; 00427ceb
    MOV dword ptr [EAX + 0x3c],0x65b7d4 ; 00427cf1 | CCameraView_vtable g_CCameraViewVTable
    RET                                 ; 00427cf8

