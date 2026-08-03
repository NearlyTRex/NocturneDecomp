; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_vessel_cpp_CCryptVessel_getCarrier_FUN_0054fc30(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc30
        ;   Label: core_vessel.cpp_CCryptVessel_getCarrier_FUN_0054fc30
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 0054fc34
    RET                                 ; 0054fc3a

