; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_boneguy_cpp_CBoneGuy_addFilesToExtract_FUN_0041da10(CBoneGuy *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041da10
        ;   Label: core_boneguy.cpp_CBoneGuy_addFilesToExtract_FUN_0041da10
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041da11
    PUSH EDX                            ; 0041da15
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041da16
    PUSH ECX                            ; 0041da1a
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 0041da1b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0041da20
    MOV EBX,dword ptr [ESP + 0xc]       ; 0041da23
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041da27
    PUSH EBX                            ; 0041da2b
    ADD EAX,0x158                       ; 0041da2c
    PUSH EAX                            ; 0041da31
    CALL core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260 ; 0041da32
        ;   XREF to: 0058a260 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260(CDeformableModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0041da37
    POP EBX                             ; 0041da3a
    RET                                 ; 0041da3b

