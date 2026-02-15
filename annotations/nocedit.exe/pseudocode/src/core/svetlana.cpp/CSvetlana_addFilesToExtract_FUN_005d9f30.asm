; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_addFilesToExtract_FUN_005d9f30(CSvetlana *this_ptr,_FILE *file_handle)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005d9f30
        ;   Label: core_svetlana.cpp_CSvetlana_addFilesToExtract_FUN_005d9f30
    PUSH EDX                            ; 005d9f34
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d9f35
    PUSH ECX                            ; 005d9f39
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 005d9f3a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005d9f3f
    RET                                 ; 005d9f42

