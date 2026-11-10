; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_004fc320(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_writeFile_FUN_004fbce0 at 004fbe23
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fc320
        ;   Label: core_mission.cpp_CDemonMission_countActors_FUN_004fc320
    MOV EAX,dword ptr [EAX + 0x1114]    ; 004fc324
    XOR EDX,EDX                         ; 004fc32a
    TEST EAX,EAX                        ; 004fc32c
    JZ 0x004fc340                       ; 004fc32e
        ;   XREF to: 004fc340 (CONDITIONAL_JUMP)  ; LAB_004fc340
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004fc330
        ;   Label: LAB_004fc330
    INC EDX                             ; 004fc336
    TEST EAX,EAX                        ; 004fc337
    JNZ 0x004fc330                      ; 004fc339
        ;   XREF to: 004fc330 (CONDITIONAL_JUMP)  ; LAB_004fc330
    LEA EAX,[EAX]                       ; 004fc33b
    MOV ECX,ECX                         ; 004fc33e
    MOV EAX,EDX                         ; 004fc340
        ;   Label: LAB_004fc340
    RET                                 ; 004fc342

