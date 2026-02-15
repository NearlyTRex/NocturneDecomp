; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_CZombie_addFilesToExtract_FUN_005fcc20(CZombie *this_ptr,_FILE *file_handle)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcc20
        ;   Label: core_zombie.cpp_CZombie_addFilesToExtract_FUN_005fcc20
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fcc21
    PUSH EDX                            ; 005fcc25
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fcc26
    PUSH ECX                            ; 005fcc2a
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005fcc2b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005fcc30
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fcc33
    MOV EAX,dword ptr [ESP + 0x8]       ; 005fcc37
    PUSH EBX                            ; 005fcc3b
    ADD EAX,0x158                       ; 005fcc3c
    PUSH EAX                            ; 005fcc41
    CALL core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 ; 005fcc42
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005fcc47
    POP EBX                             ; 005fcc4a
    RET                                 ; 005fcc4b

