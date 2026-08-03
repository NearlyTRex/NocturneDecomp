; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_0054fc00(CCryptVessel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054fc00
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_0054fc00
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054fc04
    MOV dword ptr [EDX + 0x2cc],EAX     ; 0054fc08
    RET                                 ; 0054fc0e

