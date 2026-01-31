; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mobster_cpp_FUN_00527c40(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527c40
        ;   Label: core_mobster.cpp_FUN_00527c40
    MOV EDX,dword ptr [ESP + 0xc]       ; 00527c41
    PUSH EDX                            ; 00527c45
    MOV ECX,dword ptr [ESP + 0xc]       ; 00527c46
    PUSH ECX                            ; 00527c4a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00527c4b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00527c50
    MOV EBX,dword ptr [ESP + 0xc]       ; 00527c53
    MOV EAX,dword ptr [ESP + 0x8]       ; 00527c57
    PUSH EBX                            ; 00527c5b
    ADD EAX,0x158                       ; 00527c5c
    PUSH EAX                            ; 00527c61
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00527c62
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance * param_1, _FILE * param_2)
    ADD ESP,0x8                         ; 00527c67
    POP EBX                             ; 00527c6a
    RET                                 ; 00527c6b

