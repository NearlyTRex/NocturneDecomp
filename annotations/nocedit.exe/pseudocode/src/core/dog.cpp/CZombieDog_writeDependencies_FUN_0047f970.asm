; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dog_cpp_CZombieDog_writeDependencies_FUN_0047f970(CZombieDog *this_ptr,FILE *file_handle)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f970
        ;   Label: core_dog.cpp_CZombieDog_writeDependencies_FUN_0047f970
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047f971
    PUSH EDX                            ; 0047f975
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047f976
    PUSH ECX                            ; 0047f97a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0047f97b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 0047f980
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047f983
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047f987
    PUSH EBX                            ; 0047f98b
    ADD EAX,0x158                       ; 0047f98c
    PUSH EAX                            ; 0047f991
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 0047f992
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 0047f997
    POP EBX                             ; 0047f99a
    RET                                 ; 0047f99b

