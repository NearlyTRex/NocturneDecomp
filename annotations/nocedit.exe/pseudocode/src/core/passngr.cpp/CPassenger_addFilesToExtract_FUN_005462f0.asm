; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_passngr_cpp_CPassenger_addFilesToExtract_FUN_005462f0(CPassenger *this_ptr,_FILE *file_handle)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005462f0
        ;   Label: core_passngr.cpp_CPassenger_addFilesToExtract_FUN_005462f0
    PUSH EDX                            ; 005462f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005462f5
    PUSH ECX                            ; 005462f9
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005462fa
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005462ff
    RET                                 ; 00546302

