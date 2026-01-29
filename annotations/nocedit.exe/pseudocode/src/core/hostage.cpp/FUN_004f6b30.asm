; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_hostage_cpp_FUN_004f6b30(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6b30
        ;   Label: core_hostage.cpp_FUN_004f6b30
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f6b31
    PUSH EDX                            ; 004f6b35
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f6b36
    PUSH ECX                            ; 004f6b3a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004f6b3b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f6b40
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f6b43
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f6b47
    PUSH EBX                            ; 004f6b4b
    ADD EAX,0x158                       ; 004f6b4c
    PUSH EAX                            ; 004f6b51
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 004f6b52
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 004f6b57
    POP EBX                             ; 004f6b5a
    RET                                 ; 004f6b5b

