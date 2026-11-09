; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_00576680(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576680
        ;   Label: core_vessel.cpp_CCryptVessel_getCarrier_FUN_00576680
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00576684
    RET                                 ; 0057668a

