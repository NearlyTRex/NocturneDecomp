; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_trash_cpp_CTrash_addFilesToExtract_FUN_005df720(CTrash *this_ptr,_FILE *file_handle)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;   core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005df720
        ;   Label: core_trash.cpp_CTrash_addFilesToExtract_FUN_005df720
    MOV EDX,dword ptr [ESP + 0xc]       ; 005df721
    PUSH EDX                            ; 005df725
    MOV ECX,dword ptr [ESP + 0xc]       ; 005df726
    PUSH ECX                            ; 005df72a
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005df72b
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005df730
    MOV EBX,dword ptr [ESP + 0xc]       ; 005df733
    MOV EAX,dword ptr [ESP + 0x8]       ; 005df737
    PUSH EBX                            ; 005df73b
    ADD EAX,0x158                       ; 005df73c
    PUSH EAX                            ; 005df741
    CALL core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0 ; 005df742
        ;   XREF to: 0047edd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0(CKeyFramedModelInstance * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005df747
    POP EBX                             ; 005df74a
    RET                                 ; 005df74b

