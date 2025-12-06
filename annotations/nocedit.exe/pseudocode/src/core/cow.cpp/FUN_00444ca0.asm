; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_cow.cpp_FUN_00444ca0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444ca0
        ;   Label: core_cow.cpp_FUN_00444ca0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00444ca1
    PUSH EDX                            ; 00444ca5
    MOV ECX,dword ptr [ESP + 0xc]       ; 00444ca6
    PUSH ECX                            ; 00444caa
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00444cab | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444cb0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00444cb3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00444cb7
    PUSH EBX                            ; 00444cbb
    ADD EAX,0x158                       ; 00444cbc
    PUSH EAX                            ; 00444cc1
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00444cc2 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00444cc7
    POP EBX                             ; 00444cca
    RET                                 ; 00444ccb

