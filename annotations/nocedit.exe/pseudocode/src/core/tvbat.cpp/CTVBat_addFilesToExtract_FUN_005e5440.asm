; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tvbat_cpp_CTVBat_addFilesToExtract_FUN_005e5440(CTVBat *this_ptr,_FILE *file_handle)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005e5440
        ;   Label: core_tvbat.cpp_CTVBat_addFilesToExtract_FUN_005e5440
    PUSH EDX                            ; 005e5444
    MOV ECX,dword ptr [ESP + 0x8]       ; 005e5445
    PUSH ECX                            ; 005e5449
    CALL core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0 ; 005e544a
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(CDemonActor * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005e544f
    RET                                 ; 005e5452

