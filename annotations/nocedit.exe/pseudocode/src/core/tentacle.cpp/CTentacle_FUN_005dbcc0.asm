; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbcc0(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbcc0
        ;   Label: core_tentacle.cpp_CTentacle_FUN_005dbcc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005dbcc1
    PUSH EDX                            ; 005dbcc5
    MOV ECX,dword ptr [ESP + 0xc]       ; 005dbcc6
    PUSH ECX                            ; 005dbcca
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 005dbccb
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005dbcd0
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dbcd3
    MOV EAX,dword ptr [ESP + 0x8]       ; 005dbcd7
    PUSH EBX                            ; 005dbcdb
    ADD EAX,0x158                       ; 005dbcdc
    PUSH EAX                            ; 005dbce1
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 005dbce2
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 005dbce7
    POP EBX                             ; 005dbcea
    RET                                 ; 005dbceb

