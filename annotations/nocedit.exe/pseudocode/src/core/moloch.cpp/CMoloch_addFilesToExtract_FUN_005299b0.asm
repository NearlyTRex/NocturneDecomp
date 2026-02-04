; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_moloch_cpp_CMoloch_addFilesToExtract_FUN_005299b0(CMoloch *this_ptr,_FILE *file_handle)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005299b0
        ;   Label: core_moloch.cpp_CMoloch_addFilesToExtract_FUN_005299b0
    PUSH EDX                            ; 005299b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005299b5
    PUSH ECX                            ; 005299b9
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 005299ba
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005299bf
    RET                                 ; 005299c2

