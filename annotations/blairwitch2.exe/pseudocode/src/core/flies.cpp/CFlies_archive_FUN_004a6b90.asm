; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_archive_FUN_004a6b90(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_count_005d66a8
;   TerminatedCString s_followActor_005d66ae
;   TerminatedCString s_gatherCount_005d66ba
;   TerminatedCString s_gatherTime_005d66c6
;   TerminatedCString s_boxSize_005d66d1
;   int g_CFliesClassVersion = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6b90
        ;   Label: core_flies.cpp_CFlies_archive_FUN_004a6b90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a6b91
    PUSH EBX                            ; 004a6b95
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004a6b96
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a6b9b
    PUSH 0x5d66a8                       ; 004a6b9e | = "count"
    LEA EAX,[EBX + 0x2c0]               ; 004a6ba3
    PUSH EAX                            ; 004a6ba9
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a6baa
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00616374]      ; 004a6baf | g_CFliesClassVersion
    ADD ESP,0x8                         ; 004a6bb5
    CMP EDX,0x2                         ; 004a6bb8
    JGE 0x004a6bc8                      ; 004a6bbb
        ;   XREF to: 004a6bc8 (CONDITIONAL_JUMP)  ; LAB_004a6bc8
    CMP dword ptr [0x00616374],0x3      ; 004a6bbd | g_CFliesClassVersion
    JGE 0x004a6c0f                      ; 004a6bc4
        ;   XREF to: 004a6c0f (CONDITIONAL_JUMP)  ; LAB_004a6c0f
    POP EBX                             ; 004a6bc6
    RET                                 ; 004a6bc7
    PUSH 0x5d66ae                       ; 004a6bc8 | = "followActor"
        ;   Label: LAB_004a6bc8
    LEA EAX,[EBX + 0x2b64]              ; 004a6bcd
    PUSH EAX                            ; 004a6bd3
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 004a6bd4
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 004a6bd9
    PUSH 0x5d66ba                       ; 004a6bdc | = "gatherCount"
    LEA EAX,[EBX + 0x2b68]              ; 004a6be1
    PUSH EAX                            ; 004a6be7
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004a6be8
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004a6bed
    PUSH 0x5d66c6                       ; 004a6bf0 | = "gatherTime"
    LEA EAX,[EBX + 0x2b70]              ; 004a6bf5
    PUSH EAX                            ; 004a6bfb
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004a6bfc
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004a6c01
    CMP dword ptr [0x00616374],0x3      ; 004a6c04 | g_CFliesClassVersion
    JGE 0x004a6c0f                      ; 004a6c0b
        ;   XREF to: 004a6c0f (CONDITIONAL_JUMP)  ; LAB_004a6c0f
    POP EBX                             ; 004a6c0d
    RET                                 ; 004a6c0e
    PUSH 0x5d66d1                       ; 004a6c0f | = "boxSize"
        ;   Label: LAB_004a6c0f
    ADD EBX,0x2b4                       ; 004a6c14
    PUSH EBX                            ; 004a6c1a
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 004a6c1b
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 004a6c20
    POP EBX                             ; 004a6c23
    RET                                 ; 004a6c24

