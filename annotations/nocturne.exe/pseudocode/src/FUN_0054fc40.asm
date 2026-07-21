; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054fc40(int param_1)
;
;
; XREF[1]:
;   core_vessel.cpp_CCryptVessel_process_FUN_0054fc60 at 0054fd04
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc40
        ;   Label: FUN_0054fc40
    MOV EAX,dword ptr [EAX + 0x3a0]     ; 0054fc44
    MOV EAX,dword ptr [EAX + 0x17c]     ; 0054fc4a
    RET                                 ; 0054fc50

