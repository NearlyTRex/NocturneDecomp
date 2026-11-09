; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_archive_FUN_00507140(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_courseName_005e76a8
;   TerminatedCString s_totalTime_005e76b3
;   TerminatedCString s_param_005e76bd
;   TerminatedCString s_phase_005e76c3
;   undefined4 DAT_005e76c9
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveString_FUN_0040b440
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507140
        ;   Label: core_marquee.cpp_CMarquee_archive_FUN_00507140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507141
    PUSH EBX                            ; 00507145
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00507146
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050714b
    PUSH 0x5e76a8                       ; 0050714e | = "courseName"
    LEA EAX,[EBX + 0x158]               ; 00507153
    PUSH EAX                            ; 00507159
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0050715a
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050715f
    PUSH 0x5e76b3                       ; 00507162 | = "totalTime"
    LEA EAX,[EBX + 0x178]               ; 00507167
    PUSH EAX                            ; 0050716d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0050716e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00507173
    PUSH 0x5e76bd                       ; 00507176 | = "param"
    LEA EAX,[EBX + 0x17c]               ; 0050717b
    PUSH EAX                            ; 00507181
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00507182
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 00507187
    PUSH 0x5e76c3                       ; 0050718a | = "phase"
    LEA EAX,[EBX + 0x180]               ; 0050718f
    PUSH EAX                            ; 00507195
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00507196
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050719b
    PUSH 0x5e76c9                       ; 0050719e | DAT_005e76c9
    ADD EBX,0x1a0                       ; 005071a3
    PUSH EBX                            ; 005071a9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005071aa
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005071af
    POP EBX                             ; 005071b2
    RET                                 ; 005071b3

