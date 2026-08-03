; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_FUN_004d7e90(void *param_1)
;
; Parameters:
; void *           Stack[0x4]:4   param_1
;
; XREF[1]:
;   core_main.c_FUN_004c90e0 at 004c933c
;
; Called Functions:
;   core_mission.cpp_FUN_004d7ea0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d7e90
        ;   Label: core_mission.cpp_FUN_004d7e90
    PUSH EDX                            ; 004d7e94
    CALL core_mission.cpp_FUN_004d7ea0  ; 004d7e95
        ;   XREF to: 004d7ea0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d7ea0()
    ADD ESP,0x4                         ; 004d7e9a
    RET                                 ; 004d7e9d

