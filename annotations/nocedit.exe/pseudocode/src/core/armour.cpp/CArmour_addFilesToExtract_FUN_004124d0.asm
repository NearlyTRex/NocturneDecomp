; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_armour_cpp_CArmour_addFilesToExtract_FUN_004124d0(CArmour *this_ptr,_FILE *file_handle)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004124d0
        ;   Label: core_armour.cpp_CArmour_addFilesToExtract_FUN_004124d0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004124d1
    PUSH EDX                            ; 004124d5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004124d6
    PUSH ECX                            ; 004124da
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 004124db
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004124e0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004124e3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004124e7
    PUSH EBX                            ; 004124eb
    ADD EAX,0x158                       ; 004124ec
    PUSH EAX                            ; 004124f1
    CALL core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 ; 004124f2
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004124f7
    POP EBX                             ; 004124fa
    RET                                 ; 004124fb

