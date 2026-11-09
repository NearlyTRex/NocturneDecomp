; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005a8e00(CCryptVessel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e00
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_005a8e00
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a8e04
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005a8e08
    RET                                 ; 005a8e0e

