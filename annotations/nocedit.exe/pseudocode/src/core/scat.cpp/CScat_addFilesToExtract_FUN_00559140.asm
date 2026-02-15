; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_addFilesToExtract_FUN_00559140(CScat *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00559140
        ;   Label: core_scat.cpp_CScat_addFilesToExtract_FUN_00559140
    PUSH EDX                            ; 00559144
    MOV ECX,dword ptr [ESP + 0x8]       ; 00559145
    PUSH ECX                            ; 00559149
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 0055914a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0055914f
    RET                                 ; 00559152

