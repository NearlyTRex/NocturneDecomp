; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f21f0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f21f0
        ;   Label: core_werewolf.cpp_CWerewolf_FUN_005f21f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005f21f1
    PUSH EDX                            ; 005f21f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005f21f6
    PUSH ECX                            ; 005f21fa
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 005f21fb
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005f2200
    MOV EBX,dword ptr [ESP + 0xc]       ; 005f2203
    MOV EAX,dword ptr [ESP + 0x8]       ; 005f2207
    PUSH EBX                            ; 005f220b
    ADD EAX,0x158                       ; 005f220c
    PUSH EAX                            ; 005f2211
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 005f2212
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance * param_1, _FILE * param_2)
    ADD ESP,0x8                         ; 005f2217
    POP EBX                             ; 005f221a
    RET                                 ; 005f221b

