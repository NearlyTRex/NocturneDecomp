; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_vessel.cpp_CCryptVessel_FUN_005e9170(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9170
        ;   Label: core_vessel.cpp_CCryptVessel_FUN_005e9170
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 005e9174
    RET                                 ; 005e917a

