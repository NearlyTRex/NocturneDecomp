; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vessel_cpp_CCryptVessel_pickup_FUN_005851d0(CCryptVessel *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005851d0
        ;   Label: core_vessel.cpp_CCryptVessel_pickup_FUN_005851d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005851d4
    MOV dword ptr [EDX + 0x430],EAX     ; 005851d8
    RET                                 ; 005851de

