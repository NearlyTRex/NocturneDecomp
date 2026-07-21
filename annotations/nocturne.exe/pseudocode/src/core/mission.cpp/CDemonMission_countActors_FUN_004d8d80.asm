; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004d8d80(int param_1)
;
;
; XREF[1]:
;   FUN_004d8720 at 004d8883
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d8d80
        ;   Label: core_mission.cpp_CDemonMission_countActors_FUN_004d8d80
    MOV EAX,dword ptr [EAX + 0x514]     ; 004d8d84
    XOR EDX,EDX                         ; 004d8d8a
    TEST EAX,EAX                        ; 004d8d8c
    JZ 0x004d8da0                       ; 004d8d8e
        ;   XREF to: 004d8da0 (CONDITIONAL_JUMP)  ; LAB_004d8da0
    MOV EAX,dword ptr [EAX + 0x144]     ; 004d8d90
        ;   Label: LAB_004d8d90
    INC EDX                             ; 004d8d96
    TEST EAX,EAX                        ; 004d8d97
    JNZ 0x004d8d90                      ; 004d8d99
        ;   XREF to: 004d8d90 (CONDITIONAL_JUMP)  ; LAB_004d8d90
    LEA EAX,[EAX]                       ; 004d8d9b
    MOV ECX,ECX                         ; 004d8d9e
    MOV EAX,EDX                         ; 004d8da0
        ;   Label: LAB_004d8da0
    RET                                 ; 004d8da2

