; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_smiley_cpp_FUN_005a3850(void)
;
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3850
        ;   Label: core_smiley.cpp_FUN_005a3850
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3851
    PUSH EDX                            ; 005a3855
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a3856
    PUSH ECX                            ; 005a385a
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005a385b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005a3860
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3863
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a3867
    PUSH EBX                            ; 005a386b
    ADD EAX,0x158                       ; 005a386c
    PUSH EAX                            ; 005a3871
    CALL core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 ; 005a3872
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005a3877
    POP EBX                             ; 005a387a
    RET                                 ; 005a387b

