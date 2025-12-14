; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_batcreat.cpp_CBatCreature_FUN_004162f0(CBatCreature * this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004162f0
        ;   Label: core_batcreat.cpp_CBatCreature_FUN_004162f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004162f1
    PUSH EDX                            ; 004162f5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004162f6
    PUSH ECX                            ; 004162fa
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004162fb
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
    ADD ESP,0x8                         ; 00416300
    MOV EBX,dword ptr [ESP + 0xc]       ; 00416303
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416307
    PUSH EBX                            ; 0041630b
    ADD EAX,0x158                       ; 0041630c
    PUSH EAX                            ; 00416311
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00416312
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 00416317
    POP EBX                             ; 0041631a
    RET                                 ; 0041631b

