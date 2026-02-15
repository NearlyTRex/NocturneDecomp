; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_archive_FUN_0050c2f0(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_courseName_006359c1
;   TerminatedCString s_totalTime_006359cc
;   TerminatedCString s_param_006359d6
;   TerminatedCString s_phase_006359dc
;   TerminatedCString s_type_006359e2
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c2f0
        ;   Label: core_marquee.cpp_CMarquee_archive_FUN_0050c2f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050c2f1
    PUSH EBX                            ; 0050c2f5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c1c0 ; 0050c2f6
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050c2fb
    PUSH 0x6359c1                       ; 0050c2fe | = "courseName"
    LEA EAX,[EBX + 0x158]               ; 0050c303
    PUSH EAX                            ; 0050c309
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0050c30a
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050c30f
    PUSH 0x6359cc                       ; 0050c312 | = "totalTime"
    LEA EAX,[EBX + 0x178]               ; 0050c317
    PUSH EAX                            ; 0050c31d
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0050c31e
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050c323
    PUSH 0x6359d6                       ; 0050c326 | = "param"
    LEA EAX,[EBX + 0x17c]               ; 0050c32b
    PUSH EAX                            ; 0050c331
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 0050c332
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050c337
    PUSH 0x6359dc                       ; 0050c33a | = "phase"
    LEA EAX,[EBX + 0x180]               ; 0050c33f
    PUSH EAX                            ; 0050c345
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0050c346
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050c34b
    PUSH 0x6359e2                       ; 0050c34e | = "type"
    ADD EBX,0x1a0                       ; 0050c353
    PUSH EBX                            ; 0050c359
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 0050c35a
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050c35f
    POP EBX                             ; 0050c362
    RET                                 ; 0050c363

