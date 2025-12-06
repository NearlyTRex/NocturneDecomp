; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_beast.cpp_FUN_00418460()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418460
        ;   Label: core_beast.cpp_FUN_00418460
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418461
    PUSH EDX                            ; 00418465
    MOV ECX,dword ptr [ESP + 0xc]       ; 00418466
    PUSH ECX                            ; 0041846a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0041846b | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418470
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418473
    MOV EAX,dword ptr [ESP + 0x8]       ; 00418477
    PUSH EBX                            ; 0041847b
    ADD EAX,0x158                       ; 0041847c
    PUSH EAX                            ; 00418481
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00418482 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418487
    POP EBX                             ; 0041848a
    RET                                 ; 0041848b

