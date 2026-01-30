; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_vessel_cpp_FUN_005e9180(void)
;
;
; XREF[1]:
;   core_vessel.cpp_CCryptVessel_process_FUN_005e91a0 at 005e95a1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9180
        ;   Label: core_vessel.cpp_FUN_005e9180
    MOV EAX,dword ptr [EAX + 0x3a8]     ; 005e9184
    MOV EAX,dword ptr [EAX + 0x184]     ; 005e918a
    RET                                 ; 005e9190

