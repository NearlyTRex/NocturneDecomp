; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mission_cpp_CDemonMission_countActors_FUN_00523cc0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 at 00523773
;   core_msnedit.cpp_CDemonMission_editActorAtIndex_FUN_0053b030 at 0053b0e7
;   core_msnedit.cpp_CDemonMission_editActorDetailed_FUN_0053b510 at 0053b5c7
;   core_msnedit.cpp_CDemonMission_importActors_FUN_0053ccf0 at 0053ce7d
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00523cc0
        ;   Label: core_mission.cpp_CDemonMission_countActors_FUN_00523cc0
    MOV EAX,dword ptr [EAX + 0x548]     ; 00523cc4
    XOR EDX,EDX                         ; 00523cca
    TEST EAX,EAX                        ; 00523ccc
    JZ 0x00523ce0                       ; 00523cce
        ;   XREF to: 00523ce0 (CONDITIONAL_JUMP)  ; LAB_00523ce0
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00523cd0
        ;   Label: LAB_00523cd0
    INC EDX                             ; 00523cd6
    TEST EAX,EAX                        ; 00523cd7
    JNZ 0x00523cd0                      ; 00523cd9
        ;   XREF to: 00523cd0 (CONDITIONAL_JUMP)  ; LAB_00523cd0
    LEA EAX,[EAX]                       ; 00523cdb
    MOV ECX,ECX                         ; 00523cde
    MOV EAX,EDX                         ; 00523ce0
        ;   Label: LAB_00523ce0
    RET                                 ; 00523ce2

