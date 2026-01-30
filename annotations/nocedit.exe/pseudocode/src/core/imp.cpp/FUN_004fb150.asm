; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_imp_cpp_FUN_004fb150(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb150
        ;   Label: core_imp.cpp_FUN_004fb150
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fb151
    PUSH EDX                            ; 004fb155
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fb156
    PUSH ECX                            ; 004fb15a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 004fb15b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004fb160
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fb163
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fb167
    PUSH EBX                            ; 004fb16b
    ADD EAX,0x158                       ; 004fb16c
    PUSH EAX                            ; 004fb171
    CALL core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 ; 004fb172
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260()
    ADD ESP,0x8                         ; 004fb177
    POP EBX                             ; 004fb17a
    RET                                 ; 004fb17b

