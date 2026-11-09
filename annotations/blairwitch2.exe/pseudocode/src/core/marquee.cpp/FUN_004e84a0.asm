; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_FUN_004e84a0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_courseName_005dc758
;   TerminatedCString s_totalTime_005dc763
;   TerminatedCString s_param_005dc76d
;   TerminatedCString s_phase_005dc773
;   undefined4 DAT_005dc779
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e84a0
        ;   Label: core_marquee.cpp_FUN_004e84a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e84a1
    PUSH EBX                            ; 004e84a5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004e84a6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004e84ab
    PUSH 0x5dc758                       ; 004e84ae | = "courseName"
    LEA EAX,[EBX + 0x2b4]               ; 004e84b3
    PUSH EAX                            ; 004e84b9
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004e84ba
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004e84bf
    PUSH 0x5dc763                       ; 004e84c2 | = "totalTime"
    LEA EAX,[EBX + 0x2d4]               ; 004e84c7
    PUSH EAX                            ; 004e84cd
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e84ce
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004e84d3
    PUSH 0x5dc76d                       ; 004e84d6 | = "param"
    LEA EAX,[EBX + 0x2d8]               ; 004e84db
    PUSH EAX                            ; 004e84e1
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004e84e2
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004e84e7
    PUSH 0x5dc773                       ; 004e84ea | = "phase"
    LEA EAX,[EBX + 0x2dc]               ; 004e84ef
    PUSH EAX                            ; 004e84f5
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004e84f6
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e84fb
    PUSH 0x5dc779                       ; 004e84fe | DAT_005dc779
    ADD EBX,0x2fc                       ; 004e8503
    PUSH EBX                            ; 004e8509
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004e850a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004e850f
    POP EBX                             ; 004e8512
    RET                                 ; 004e8513

