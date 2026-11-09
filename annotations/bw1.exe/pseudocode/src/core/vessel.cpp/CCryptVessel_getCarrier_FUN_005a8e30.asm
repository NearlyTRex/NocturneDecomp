; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_005a8e30(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8e30
        ;   Label: core_vessel.cpp_CCryptVessel_getCarrier_FUN_005a8e30
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 005a8e34
    RET                                 ; 005a8e3a

