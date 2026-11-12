; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_archive_FUN_00584a60(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005f6354
;   undefined4 DAT_005f6359
;   TerminatedCString s_width_005f635d
;   TerminatedCString s_count_005f6363
;   TerminatedCString s_groundType_005f6369
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584a60
        ;   Label: core_stairs.cpp_CStairs_archive_FUN_00584a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00584a61
    PUSH EBX                            ; 00584a65
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 00584a66
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00584a6b
    PUSH 0x5f6354                       ; 00584a6e | DAT_005f6354
    LEA EAX,[EBX + 0x158]               ; 00584a73
    PUSH EAX                            ; 00584a79
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00584a7a
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584a7f
    PUSH 0x5f6359                       ; 00584a82 | DAT_005f6359
    LEA EAX,[EBX + 0x15c]               ; 00584a87
    PUSH EAX                            ; 00584a8d
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00584a8e
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584a93
    PUSH 0x5f635d                       ; 00584a96 | = "width"
    LEA EAX,[EBX + 0x160]               ; 00584a9b
    PUSH EAX                            ; 00584aa1
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 00584aa2
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b5f0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584aa7
    PUSH 0x5f6363                       ; 00584aaa | = "count"
    LEA EAX,[EBX + 0x16c]               ; 00584aaf
    PUSH EAX                            ; 00584ab5
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00584ab6
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584abb
    PUSH 0x5f6369                       ; 00584abe | = "groundType"
    ADD EBX,0xa30                       ; 00584ac3
    PUSH EBX                            ; 00584ac9
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 00584aca
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00584acf
    POP EBX                             ; 00584ad2
    RET                                 ; 00584ad3

