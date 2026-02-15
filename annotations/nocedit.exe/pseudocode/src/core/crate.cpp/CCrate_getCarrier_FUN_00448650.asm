; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_crate_cpp_CCrate_getCarrier_FUN_00448650(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448650
        ;   Label: core_crate.cpp_CCrate_getCarrier_FUN_00448650
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00448654
    RET                                 ; 0044865a

