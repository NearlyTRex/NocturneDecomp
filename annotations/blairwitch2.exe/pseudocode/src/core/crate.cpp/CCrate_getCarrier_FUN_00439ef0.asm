; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_crate_cpp_CCrate_getCarrier_FUN_00439ef0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00439ef0
        ;   Label: core_crate.cpp_CCrate_getCarrier_FUN_00439ef0
    MOV EAX,dword ptr [EAX + 0x430]     ; 00439ef4
    RET                                 ; 00439efa

