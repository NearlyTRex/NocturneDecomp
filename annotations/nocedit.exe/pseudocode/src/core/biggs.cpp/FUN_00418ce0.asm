; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_biggs.cpp_FUN_00418ce0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418ce0
        ;   Label: core_biggs.cpp_FUN_00418ce0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00418ce1
    PUSH EDX                            ; 00418ce5
    MOV ECX,dword ptr [ESP + 0xc]       ; 00418ce6
    PUSH ECX                            ; 00418cea
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00418ceb | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418cf0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418cf3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00418cf7
    PUSH EBX                            ; 00418cfb
    ADD EAX,0x158                       ; 00418cfc
    PUSH EAX                            ; 00418d01
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00418d02 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00418d07
    POP EBX                             ; 00418d0a
    RET                                 ; 00418d0b

