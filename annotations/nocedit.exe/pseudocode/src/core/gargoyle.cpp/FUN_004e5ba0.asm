; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gargoyle_cpp_FUN_004e5ba0(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5ba0
        ;   Label: core_gargoyle.cpp_FUN_004e5ba0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5ba1
    PUSH EDX                            ; 004e5ba5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e5ba6
    PUSH ECX                            ; 004e5baa
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 004e5bab
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e5bb0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e5bb3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e5bb7
    PUSH EBX                            ; 004e5bbb
    ADD EAX,0x158                       ; 004e5bbc
    PUSH EAX                            ; 004e5bc1
    CALL core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 ; 004e5bc2
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004e5bc7
    POP EBX                             ; 004e5bca
    RET                                 ; 004e5bcb

