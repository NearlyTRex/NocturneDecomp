; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_00585200(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585200
        ;   Label: core_vessel.cpp_CCryptVessel_getCarrier_FUN_00585200
    MOV EAX,dword ptr [EAX + 0x430]     ; 00585204
    RET                                 ; 0058520a

