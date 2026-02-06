; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gabriela_cpp_CGabriella_addFilesToExtract_FUN_004d7630(CGabriella *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004d7630
        ;   Label: core_gabriela.cpp_CGabriella_addFilesToExtract_FUN_004d7630
    PUSH EDX                            ; 004d7634
    MOV ECX,dword ptr [ESP + 0x8]       ; 004d7635
    PUSH ECX                            ; 004d7639
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 004d763a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 004d763f
    RET                                 ; 004d7642

