; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_drone.cpp_FUN_0048f570()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f570
        ;   Label: core_drone.cpp_FUN_0048f570
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048f571
    PUSH EDX                            ; 0048f575
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048f576
    PUSH ECX                            ; 0048f57a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0048f57b | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0048f580
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048f583
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048f587
    PUSH EBX                            ; 0048f58b
    ADD EAX,0x158                       ; 0048f58c
    PUSH EAX                            ; 0048f591
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 0048f592 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0048f597
    POP EBX                             ; 0048f59a
    RET                                 ; 0048f59b

