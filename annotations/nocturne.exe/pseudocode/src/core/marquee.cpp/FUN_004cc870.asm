; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_FUN_004cc870(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_courseName_0058819d
;   TerminatedCString s_totalTime_005881a8
;   TerminatedCString s_param_005881b2
;   TerminatedCString s_phase_005881b8
;   TerminatedCString s_type_005881be
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc870
        ;   Label: core_marquee.cpp_FUN_004cc870
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cc871
    PUSH EBX                            ; 004cc875
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004cc876
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cc87b
    PUSH 0x58819d                       ; 004cc87e | = "courseName"
    LEA EAX,[EBX + 0x150]               ; 004cc883
    PUSH EAX                            ; 004cc889
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004cc88a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004cc88f
    PUSH 0x5881a8                       ; 004cc892 | = "totalTime"
    LEA EAX,[EBX + 0x170]               ; 004cc897
    PUSH EAX                            ; 004cc89d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004cc89e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cc8a3
    PUSH 0x5881b2                       ; 004cc8a6 | = "param"
    LEA EAX,[EBX + 0x174]               ; 004cc8ab
    PUSH EAX                            ; 004cc8b1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004cc8b2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cc8b7
    PUSH 0x5881b8                       ; 004cc8ba | = "phase"
    LEA EAX,[EBX + 0x178]               ; 004cc8bf
    PUSH EAX                            ; 004cc8c5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cc8c6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cc8cb
    PUSH 0x5881be                       ; 004cc8ce | = "type"
    ADD EBX,0x198                       ; 004cc8d3
    PUSH EBX                            ; 004cc8d9
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004cc8da
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004cc8df
    POP EBX                             ; 004cc8e2
    RET                                 ; 004cc8e3

