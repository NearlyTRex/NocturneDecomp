; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004f6a50(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_writeFile_FUN_004f6410 at 004f6553
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f6a50
        ;   Label: core_mission.cpp_CDemonMission_countActors_FUN_004f6a50
    MOV EAX,dword ptr [EAX + 0x143c]    ; 004f6a54
    XOR EDX,EDX                         ; 004f6a5a
    TEST EAX,EAX                        ; 004f6a5c
    JZ 0x004f6a70                       ; 004f6a5e
        ;   XREF to: 004f6a70 (CONDITIONAL_JUMP)  ; LAB_004f6a70
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004f6a60
        ;   Label: LAB_004f6a60
    INC EDX                             ; 004f6a66
    TEST EAX,EAX                        ; 004f6a67
    JNZ 0x004f6a60                      ; 004f6a69
        ;   XREF to: 004f6a60 (CONDITIONAL_JUMP)  ; LAB_004f6a60
    LEA EAX,[EAX]                       ; 004f6a6b
    MOV ECX,ECX                         ; 004f6a6e
    MOV EAX,EDX                         ; 004f6a70
        ;   Label: LAB_004f6a70
    RET                                 ; 004f6a72

