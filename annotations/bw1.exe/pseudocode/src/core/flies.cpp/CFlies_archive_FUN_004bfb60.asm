; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_archive_FUN_004bfb60(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_count_005e0721
;   TerminatedCString s_followActor_005e0727
;   TerminatedCString s_gatherCount_005e0733
;   TerminatedCString s_gatherTime_005e073f
;   TerminatedCString s_boxSize_005e074a
;   int g_CFliesClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveVector_FUN_0040b1c0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfb60
        ;   Label: core_flies.cpp_CFlies_archive_FUN_004bfb60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bfb61
    PUSH EBX                            ; 004bfb65
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c040 ; 004bfb66
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004bfb6b
    PUSH 0x5e0721                       ; 004bfb6e | = "count"
    LEA EAX,[EBX + 0x164]               ; 004bfb73
    PUSH EAX                            ; 004bfb79
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004bfb7a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x0061d824]      ; 004bfb7f | g_CFliesClassVersion
    ADD ESP,0x8                         ; 004bfb85
    CMP EDX,0x2                         ; 004bfb88
    JGE 0x004bfb98                      ; 004bfb8b
        ;   XREF to: 004bfb98 (CONDITIONAL_JUMP)  ; LAB_004bfb98
    CMP dword ptr [0x0061d824],0x3      ; 004bfb8d | g_CFliesClassVersion
    JGE 0x004bfbdf                      ; 004bfb94
        ;   XREF to: 004bfbdf (CONDITIONAL_JUMP)  ; LAB_004bfbdf
    POP EBX                             ; 004bfb96
    RET                                 ; 004bfb97
    PUSH 0x5e0727                       ; 004bfb98 | = "followActor"
        ;   Label: LAB_004bfb98
    LEA EAX,[EBX + 0x2a08]              ; 004bfb9d
    PUSH EAX                            ; 004bfba3
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 004bfba4
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 004bfba9
    PUSH 0x5e0733                       ; 004bfbac | = "gatherCount"
    LEA EAX,[EBX + 0x2a0c]              ; 004bfbb1
    PUSH EAX                            ; 004bfbb7
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 004bfbb8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004bfbbd
    PUSH 0x5e073f                       ; 004bfbc0 | = "gatherTime"
    LEA EAX,[EBX + 0x2a14]              ; 004bfbc5
    PUSH EAX                            ; 004bfbcb
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 004bfbcc
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 004bfbd1
    CMP dword ptr [0x0061d824],0x3      ; 004bfbd4 | g_CFliesClassVersion
    JGE 0x004bfbdf                      ; 004bfbdb
        ;   XREF to: 004bfbdf (CONDITIONAL_JUMP)  ; LAB_004bfbdf
    POP EBX                             ; 004bfbdd
    RET                                 ; 004bfbde
    PUSH 0x5e074a                       ; 004bfbdf | = "boxSize"
        ;   Label: LAB_004bfbdf
    ADD EBX,0x158                       ; 004bfbe4
    PUSH EBX                            ; 004bfbea
    CALL core_actor.cpp_archiveVector_FUN_0040b1c0 ; 004bfbeb
        ;   XREF to: 0040b1c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b1c0()
    ADD ESP,0x8                         ; 004bfbf0
    POP EBX                             ; 004bfbf3
    RET                                 ; 004bfbf4

