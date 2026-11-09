; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_00576650(CCryptVessel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00576650
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_00576650
    MOV EAX,dword ptr [ESP + 0x8]       ; 00576654
    MOV dword ptr [EDX + 0x2d4],EAX     ; 00576658
    RET                                 ; 0057665e

