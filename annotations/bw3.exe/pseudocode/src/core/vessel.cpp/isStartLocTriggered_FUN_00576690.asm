; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_vessel_cpp_isStartLocTriggered_FUN_00576690(int param_1)
;
;
; XREF[1]:
;   core_vessel.cpp_CCryptVessel_process_FUN_005766b0 at 00576756
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00576690
        ;   Label: core_vessel.cpp_isStartLocTriggered_FUN_00576690
    MOV EAX,dword ptr [EAX + 0x3a8]     ; 00576694
    MOV EAX,dword ptr [EAX + 0x184]     ; 0057669a
    RET                                 ; 005766a0

