; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_vessel.cpp_CCryptVessel_FUN_005e9150(CCryptVessel * this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9150
        ;   Label: core_vessel.cpp_CCryptVessel_FUN_005e9150
    MOV dword ptr [EAX + 0x30],0x0      ; 005e9154
    MOV dword ptr [EAX + 0x38],0x0      ; 005e915b
    MOV dword ptr [EAX + 0x2d4],0x0     ; 005e9162
    RET                                 ; 005e916c

