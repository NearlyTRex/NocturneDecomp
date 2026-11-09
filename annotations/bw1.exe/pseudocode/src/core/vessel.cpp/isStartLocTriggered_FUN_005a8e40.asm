; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_vessel_cpp_isStartLocTriggered_FUN_005a8e40(int param_1)
;
;
; XREF[1]:
;   core_vessel.cpp_FUN_005a8e60 at 005a8f06
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8e40
        ;   Label: core_vessel.cpp_isStartLocTriggered_FUN_005a8e40
    MOV EAX,dword ptr [EAX + 0x3a8]     ; 005a8e44
    MOV EAX,dword ptr [EAX + 0x184]     ; 005a8e4a
    RET                                 ; 005a8e50

