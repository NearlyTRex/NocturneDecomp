; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_succubus.cpp_CSuccubus_FUN_005c77f0(CSuccubus * this_ptr)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c77f0
        ;   Label: core_succubus.cpp_CSuccubus_FUN_005c77f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c77f1
    PUSH EDX                            ; 005c77f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c77f6
    PUSH ECX                            ; 005c77fa
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 005c77fb | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c7800
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c7803
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c7807
    PUSH EBX                            ; 005c780b
    ADD EAX,0x158                       ; 005c780c
    PUSH EAX                            ; 005c7811
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 005c7812 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005c7817
    POP EBX                             ; 005c781a
    RET                                 ; 005c781b

