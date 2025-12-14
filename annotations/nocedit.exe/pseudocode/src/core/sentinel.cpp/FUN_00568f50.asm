; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_sentinel.cpp_FUN_00568f50()
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568f50
        ;   Label: core_sentinel.cpp_FUN_00568f50
    MOV EDX,dword ptr [ESP + 0xc]       ; 00568f51
    PUSH EDX                            ; 00568f55
    MOV ECX,dword ptr [ESP + 0xc]       ; 00568f56
    PUSH ECX                            ; 00568f5a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00568f5b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00568f60
    MOV EBX,dword ptr [ESP + 0xc]       ; 00568f63
    MOV EAX,dword ptr [ESP + 0x8]       ; 00568f67
    PUSH EBX                            ; 00568f6b
    ADD EAX,0x158                       ; 00568f6c
    PUSH EAX                            ; 00568f71
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00568f72
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 00568f77
    POP EBX                             ; 00568f7a
    RET                                 ; 00568f7b

