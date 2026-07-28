; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004b61f0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_index_005859be
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b61f0
        ;   Label: core_hero.cpp_FUN_004b61f0
    PUSH EDX                            ; 004b61f4
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 004b61f5
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004b61fa
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b61fd
    PUSH 0x5859be                       ; 004b6201 | = "index"
    ADD EAX,0x150                       ; 004b6206
    PUSH EAX                            ; 004b620b
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004b620c
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004b6211
    RET                                 ; 004b6214

