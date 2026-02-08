; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005e9140(CCryptVessel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005e9140
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_005e9140
    MOV EAX,dword ptr [ESP + 0x8]       ; 005e9144
    MOV dword ptr [EDX + 0x2d4],EAX     ; 005e9148
    RET                                 ; 005e914e

