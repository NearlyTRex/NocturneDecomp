; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_batman.cpp_CBatman_FUN_00417d30(CBatman * this_ptr)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417d30
        ;   Label: core_batman.cpp_CBatman_FUN_00417d30
    MOV EDX,dword ptr [ESP + 0xc]       ; 00417d31
    PUSH EDX                            ; 00417d35
    MOV ECX,dword ptr [ESP + 0xc]       ; 00417d36
    PUSH ECX                            ; 00417d3a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00417d3b | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417d40
    MOV EBX,dword ptr [ESP + 0xc]       ; 00417d43
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417d47
    PUSH EBX                            ; 00417d4b
    ADD EAX,0x158                       ; 00417d4c
    PUSH EAX                            ; 00417d51
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00417d52 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00417d57
    POP EBX                             ; 00417d5a
    RET                                 ; 00417d5b

