; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004d90e0(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_teleport.cpp_CTeleport_process_FUN_00543910 at 005439ab
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d90e0
        ;   Label: core_mission.cpp_FUN_004d90e0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d90e4
    MOV ECX,dword ptr [EDX]             ; 004d90e8
    MOV dword ptr [EAX + 0x51c],ECX     ; 004d90ea
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d90f0
    MOV dword ptr [EAX + 0x520],ECX     ; 004d90f3
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d90f9
    MOV dword ptr [EAX + 0x524],ECX     ; 004d90fc
    MOV EDX,dword ptr [EDX + 0xc]       ; 004d9102
    MOV dword ptr [EAX + 0x528],EDX     ; 004d9105
    RET                                 ; 004d910b

