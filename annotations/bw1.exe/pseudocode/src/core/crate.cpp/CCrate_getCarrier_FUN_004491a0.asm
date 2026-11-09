; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_crate_cpp_CCrate_getCarrier_FUN_004491a0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004491a0
        ;   Label: core_crate.cpp_CCrate_getCarrier_FUN_004491a0
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 004491a4
    RET                                 ; 004491aa

