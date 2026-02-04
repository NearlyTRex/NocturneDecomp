; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_icepick_cpp_CIcePick_addFilesToExtract_FUN_004f97c0(CIcePick *this_ptr,_FILE *file_handle)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004f97c0
        ;   Label: core_icepick.cpp_CIcePick_addFilesToExtract_FUN_004f97c0
    PUSH EDX                            ; 004f97c4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f97c5
    PUSH ECX                            ; 004f97c9
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 004f97ca
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004f97cf
    RET                                 ; 004f97d2

