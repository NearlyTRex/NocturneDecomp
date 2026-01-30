; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hotdemon_cpp_FUN_004f7a10(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7a10
        ;   Label: core_hotdemon.cpp_FUN_004f7a10
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f7a11
    PUSH EDX                            ; 004f7a15
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f7a16
    PUSH ECX                            ; 004f7a1a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004f7a1b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f7a20
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f7a23
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f7a27
    PUSH EBX                            ; 004f7a2b
    ADD EAX,0x158                       ; 004f7a2c
    PUSH EAX                            ; 004f7a31
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 004f7a32
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 004f7a37
    POP EBX                             ; 004f7a3a
    RET                                 ; 004f7a3b

