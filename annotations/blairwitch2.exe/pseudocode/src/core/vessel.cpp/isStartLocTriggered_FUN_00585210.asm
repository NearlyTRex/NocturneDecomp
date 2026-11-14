; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00585210(CCryptVessel *actor)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   actor
;
; XREF[1]:
;   core_vessel.cpp_CCryptVessel_process_FUN_00585230 at 005852d6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00585210
        ;   Label: core_vessel.cpp_isStartLocTriggered_FUN_00585210
    MOV EAX,dword ptr [EAX + 0x504]     ; 00585214
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 0058521a
    RET                                 ; 00585220

