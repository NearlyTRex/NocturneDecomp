; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_CHeroPlaceholder_archive_FUN_004d0af0(CHeroPlaceholder *this_ptr)
;
; Parameters:
; CHeroPlaceholder * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_index_005da074
;   TerminatedCString s_heroName_005da07a
;   undefined4 DAT_00617a60
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0af0
        ;   Label: core_hero.cpp_CHeroPlaceholder_archive_FUN_004d0af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d0af1
    PUSH EBX                            ; 004d0af5
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 004d0af6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004d0afb
    PUSH 0x5da074                       ; 004d0afe | = "index"
    LEA EAX,[EBX + 0x2b4]               ; 004d0b03
    PUSH EAX                            ; 004d0b09
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004d0b0a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EDX,dword ptr [0x00617a60]      ; 004d0b0f | DAT_00617a60
    ADD ESP,0x8                         ; 004d0b15
    CMP EDX,0x2                         ; 004d0b18
    JGE 0x004d0b1f                      ; 004d0b1b
        ;   XREF to: 004d0b1f (CONDITIONAL_JUMP)  ; LAB_004d0b1f
    POP EBX                             ; 004d0b1d
    RET                                 ; 004d0b1e
    PUSH 0x5da07a                       ; 004d0b1f | = "heroName"
        ;   Label: LAB_004d0b1f
    LEA EAX,[EBX + 0x2b8]               ; 004d0b24
    PUSH EAX                            ; 004d0b2a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004d0b2b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004d0b30
    POP EBX                             ; 004d0b33
    RET                                 ; 004d0b34

