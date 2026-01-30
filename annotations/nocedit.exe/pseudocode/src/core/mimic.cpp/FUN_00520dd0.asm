; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mimic_cpp_FUN_00520dd0(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520dd0
        ;   Label: core_mimic.cpp_FUN_00520dd0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00520dd1
    PUSH EDX                            ; 00520dd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 00520dd6
    PUSH ECX                            ; 00520dda
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 00520ddb
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00520de0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520de3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00520de7
    PUSH EBX                            ; 00520deb
    ADD EAX,0x158                       ; 00520dec
    PUSH EAX                            ; 00520df1
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 00520df2
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 00520df7
    POP EBX                             ; 00520dfa
    RET                                 ; 00520dfb

