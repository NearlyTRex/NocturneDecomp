; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_hero_cpp_FUN_004d4c90(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_index_005c5129
;   TerminatedCString s_heroName_005c512f
;   undefined4 DAT_005fffbc
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4c90
        ;   Label: unkafter_hero.cpp_FUN_004d4c90
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4c91
    PUSH EBX                            ; 004d4c95
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 004d4c96
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d4c9b
    PUSH 0x5c5129                       ; 004d4c9e | = "index"
    LEA EAX,[EBX + 0x158]               ; 004d4ca3
    PUSH EAX                            ; 004d4ca9
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 004d4caa
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x005fffbc]      ; 004d4caf | DAT_005fffbc
    ADD ESP,0x8                         ; 004d4cb5
    CMP EDX,0x2                         ; 004d4cb8
    JGE 0x004d4cbf                      ; 004d4cbb
        ;   XREF to: 004d4cbf (CONDITIONAL_JUMP)  ; LAB_004d4cbf
    POP EBX                             ; 004d4cbd
    RET                                 ; 004d4cbe
    PUSH 0x5c512f                       ; 004d4cbf | = "heroName"
        ;   Label: LAB_004d4cbf
    LEA EAX,[EBX + 0x15c]               ; 004d4cc4
    PUSH EAX                            ; 004d4cca
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 004d4ccb
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d4cd0
    POP EBX                             ; 004d4cd3
    RET                                 ; 004d4cd4

