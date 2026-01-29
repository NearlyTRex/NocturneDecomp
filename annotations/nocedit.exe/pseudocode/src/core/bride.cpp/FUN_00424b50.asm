; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_bride_cpp_FUN_00424b50(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424b50
        ;   Label: core_bride.cpp_FUN_00424b50
    MOV EDX,dword ptr [ESP + 0xc]       ; 00424b51
    PUSH EDX                            ; 00424b55
    MOV ECX,dword ptr [ESP + 0xc]       ; 00424b56
    PUSH ECX                            ; 00424b5a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00424b5b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00424b60
    MOV EBX,dword ptr [ESP + 0xc]       ; 00424b63
    MOV EAX,dword ptr [ESP + 0x8]       ; 00424b67
    PUSH EBX                            ; 00424b6b
    ADD EAX,0x158                       ; 00424b6c
    PUSH EAX                            ; 00424b71
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00424b72
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 00424b77
    POP EBX                             ; 00424b7a
    RET                                 ; 00424b7b

