; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_larva_cpp_CLarva_writeDependencies_FUN_00503c90(CLarva *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503c90
        ;   Label: core_larva.cpp_CLarva_writeDependencies_FUN_00503c90
    MOV EDX,dword ptr [ESP + 0xc]       ; 00503c91
    PUSH EDX                            ; 00503c95
    MOV ECX,dword ptr [ESP + 0xc]       ; 00503c96
    PUSH ECX                            ; 00503c9a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00503c9b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00503ca0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503ca3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00503ca7
    PUSH EBX                            ; 00503cab
    ADD EAX,0x158                       ; 00503cac
    PUSH EAX                            ; 00503cb1
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00503cb2
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260(CDeformableModelInstance * param_1, _FILE * param_2)
    ADD ESP,0x8                         ; 00503cb7
    POP EBX                             ; 00503cba
    RET                                 ; 00503cbb

