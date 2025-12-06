; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ghoul.cpp_FUN_004e8ee0()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e8ee0
        ;   Label: core_ghoul.cpp_FUN_004e8ee0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e8ee1
    PUSH EDX                            ; 004e8ee5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e8ee6
    PUSH ECX                            ; 004e8eea
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004e8eeb | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8ef0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e8ef3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8ef7
    PUSH EBX                            ; 004e8efb
    ADD EAX,0x158                       ; 004e8efc
    PUSH EAX                            ; 004e8f01
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 004e8f02 | undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e8f07
    POP EBX                             ; 004e8f0a
    RET                                 ; 004e8f0b

